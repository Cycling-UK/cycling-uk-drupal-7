(function ($) {
  Drupal.behaviors.jplanner = {
    attach: function (context, settings) {

      //TEMPLATE init

      var tableRow = $('#tablerow').html();
      Mustache.parse(tableRow);

      //LAYOUT init

      $('#openlayer_table').hide();

      //MAP STYLE init

      var styles = {
        'iconMarker': new ol.style.Style({
          image: new ol.style.Icon({
            anchor: [0.5, 1],
            src: Drupal.settings.listingv2.path + '/img/default.png'
          })
        }),
        'iconEvent': new ol.style.Style({
            image: new ol.style.Icon({
                anchor: [0.5, 1],
                src: Drupal.settings.listingv2.path + '/img/icon_event.png'
            })
        }),
        'iconRide': new ol.style.Style({
            image: new ol.style.Icon({
                anchor: [0.5, 1],
                src: Drupal.settings.listingv2.path + '/img/icon_ride.png'
            })
        })
      };

      //MAP OVERLAY init

      var popupContent = document.getElementById('popup');
      var popup = new ol.Overlay({
        element: popupContent
      });

      //MAP init

      var markers = new ol.source.Vector();
      var markerLayer = new ol.layer.Vector({
        source: markers,
        style: function (feature) {
          if (feature.get('contentType')) {
            return styles['icon' + feature.get('contentType')];
          }
          return styles['iconMarker'];
        }
      });
      
      var zoomCircle = new ol.source.Vector();
      var zoomLayer = new ol.layer.Vector({
        source: zoomCircle,
        style: new ol.style.Style({
          fill: new ol.style.Fill({
            color: [250, 0, 0, 0.4]
          }),
          stroke: new ol.style.Stroke({
            color: [0, 0, 0, 1],
            width: 1
          })
        })
      });

      var styleCache = {};
      var markersClustered = new ol.source.Vector();      
      var clusterLayer = new ol.layer.Vector({
        style: function (feature) {
          var size = feature.get('features').length;
          var style = styleCache[size];
          if (!style) {
            style = new ol.style.Style({
              image: new ol.style.Circle({
                radius: 10,
                stroke: new ol.style.Stroke({
                  color: '#fff'
                }),
                fill: new ol.style.Fill({
                  color: '#3399CC'
                })
              }),
              text: new ol.style.Text({
                text: size.toString(),
                fill: new ol.style.Fill({
                  color: '#fff'
                })
              })
            });
            styleCache[size] = style;
          }
          return style;
        }
      });

      var map = new ol.Map({
        target: 'openlayer-map-event',
        layers: [
          new ol.layer.Tile({source: new ol.source.OSM()}),
          zoomLayer, //debug          
          markerLayer,
          clusterLayer
        ],
        overlays: [popup],
        loadTilesWhileAnimating: true,
        view: new ol.View({
          center: ol.proj.fromLonLat([-363.1400, 53.079]),
          zoom: 6
        }),
        interactions: ol.interaction.defaults({mouseWheelZoom: true}),
        controls: [
          new ol.control.ZoomSlider(),
          new ol.control.Zoom(),
          new ol.control.ScaleLine({units: 'imperial'}),
          new ol.control.FullScreen()
        ]
      });

      map.on('click', function (evt) {
        var target = map.forEachFeatureAtPixel(evt.pixel, function (feature, layer) {
          return feature;
        });
        if (target && target.getId()) {
          popup.setPosition(evt.coordinate);
          $(popupContent).removeClass().addClass('type-' + target.get('contentType')).show();
          popupContent.innerHTML = '<a href="' + target.get('url') + '">' + target.get('title') + '</a><br>' + target.get('contentType');
        } else {
          $(popupContent).hide();
        }

      });

      //DATA init

      var format = new ol.format.WKT();

      var dataRaw;

      $.ajax({
        type: 'GET',
        url: './listingv2-eventdata',
        dataType: 'json'}).
              done(function (data) {
                dataRaw = data;
                drawAllMarkers();
                drawAllMarkersClustered();
                markerLayer.setVisible(false);
                clusterLayer.setSource(new ol.source.Cluster({distance: 40, source: markersClustered}));                
              });

      //reset search

      $('button#edit-reset').on('click', function (e) {
        e.preventDefault();
        drawAllMarkers();
        markerLayer.setVisible(false);
        clusterLayer.setVisible(true);
        map.getView().setZoom(6);
        map.getView().setCenter(ol.proj.fromLonLat([-363.1400, 53.079]));
        
        $('#openlayer_table').hide();
        $('#openlayer_table tbody').html('');
        $(popupContent).hide();
      });

      //search ACTION geocoder

      var searchLat;
      var searchLng;
      $('button#edit-submit-groups').on('click', function (e) {
        e.preventDefault();
        
        $(popupContent).hide();
        $('#openlayer_table').hide();
        $('#openlayer_table tbody').html('');
        
        $.ajax({
          type: 'GET',
          url: 'https://api.cyclestreets.net/v2/geocoder',
          data: {
            key: Drupal.settings.listingv2.jplannerapikey,
            q: $('input#edit-geo-origin').val(),
            limit: '3',
            countrycodes: 'gb,ie'
          },
          dataType: 'json'}).done(function (data) {
          
          markerLayer.setVisible(true);
          clusterLayer.setVisible(false);
          searchLat = data['features'][0]['geometry']['coordinates'][0];
          searchLng = data['features'][0]['geometry']['coordinates'][1];
          if (searchLat && searchLng) {
            drawAllMarkers();
            search_radius();
          }
        });

      });

      //search ACTION radius

      var IndexesToHide = [];
      function search_radius() {
        IndexesToHide = [];

        //generate virtual radius Geom
        var units = parseInt($('select#edit-geo-unit').val());
        var radius = parseInt($('input#edit-geo-distance').val());

        var _radiusGeom = new ol.geom.Polygon.circular(new ol.Sphere(6378137), [searchLat, searchLng], units * radius, 16);
        var radiusGeom = format.writeGeometry(_radiusGeom);

        //debug draw circle
        zoomCircle.clear();
        var zcfeat = format.readFeature(radiusGeom, {dataProjection: 'EPSG:4326', featureProjection: 'EPSG:3857'});
        zoomCircle.addFeature(zcfeat);
        map.getView().fit(zoomLayer.getSource().getExtent(), map.getSize()); //optional, zoom & centre

        //check for collisions
        for (n = 0; n < dataRaw.length; n++) {
          if (!checkForIntersections(radiusGeom, dataRaw[n]['geometry_wkt'], n)) {
            IndexesToHide.push(n);
          }
        }

        //hide non-collided markers (UPDATE)
        for (n = 0; n < IndexesToHide.length; n++) {
          markers.removeFeature(markers.getFeatureById('wkts' + IndexesToHide[n]));
        }

        //render table list
        for (n = 0; n < dataRaw.length; n++) {
          if ($.inArray(n, IndexesToHide) < 0) {

            $('#openlayer_table tbody').append(
                    Mustache.render(tableRow, {
                      index: n,
                      url: dataRaw[n]['url'],
                      title: dataRaw[n]['title'],
                      contentType: dataRaw[n]['content_type'],
                      date: dataRaw[n]['date']
                    })
                    );
          }
        }
        $('#openlayer_table').show();

      }


//------------------------------------------------------------------------------

      function drawAllMarkers() {

        markers.clear();

        for (n = 0; n < dataRaw.length; n++) {

          var itemFeature = new ol.Feature({
            nid: dataRaw[n]['nid'],
            url: dataRaw[n]['url'],
            title: dataRaw[n]['title'],
            contentType: dataRaw[n]['content_type'],
            geometryWKT: dataRaw[n]['geometry_wkt'],
            date: dataRaw[n]['date'],
            geometry: new ol.geom.Point(ol.proj.transform([dataRaw[n]['centroid'][0] * 1, dataRaw[n]['centroid'][1] * 1], 'EPSG:4326', 'EPSG:3857'))
          });

          itemFeature.setId('wkts' + n);

          markers.addFeature(itemFeature);

        }

      }

      function drawAllMarkersClustered() {

        markersClustered.clear();
        var feats = [];

        for (n = 0; n < dataRaw.length; n++) {

          var itemFeature = new ol.Feature({
            geometry: new ol.geom.Point(ol.proj.transform([dataRaw[n]['centroid'][0] * 1, dataRaw[n]['centroid'][1] * 1], 'EPSG:4326', 'EPSG:3857'))
          });

          itemFeature.setId('wkts' + n);
          
          feats.push(itemFeature);
        }

        markersClustered.addFeatures(feats);

      }


      function checkForIntersections(wkt1, wkt2, index)
      {
        var wktReader = new jsts.io.WKTReader();
        var geom1 = wktReader.read(wkt1);
        var geom2 = wktReader.read(wkt2);

        if (geom2.intersects(geom1)) {
          //console.log('yes ' + index);
          return true;
        } else {
          //console.log('no --- ' + index);
          return false;
        }
      }

//------------------------------------------------------------------------------
    }
  };
}(jQuery));