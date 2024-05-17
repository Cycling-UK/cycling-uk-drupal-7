// http://www.runningcoder.org/jquerytypeahead/documentation/

(function ($) {
  Drupal.behaviors.jplanner = {
    attach: function (context, settings) {

      //styles
      var styles = {
        //graph
        'graph_fastest': {
          backgroundColor: '#725a98',
          borderColor: '#725a98',
          borderWidth: 2
        },
        'graph_balanced': {
          backgroundColor: '#e29e39',
          borderColor: '#e29e39',
          borderWidth: 2
        },
        'graph_quietest': {
          backgroundColor: '#008fc3',
          borderColor: '#008fc3',
          borderWidth: 2
        },
        //map
        'route_fastest': new ol.style.Style({
          stroke: new ol.style.Stroke({
            color: 'rgb(114,90,152)',
            width: 6
          })
        }),
        'route_balanced': new ol.style.Style({
          stroke: new ol.style.Stroke({
            color: 'rgb(226,158,57)',
            width: 6
          })
        }),
        'route_quietest': new ol.style.Style({
          stroke: new ol.style.Stroke({
            color: 'rgb(0,143,195)',
            width: 6
          })
        }),
        'startIcon': new ol.style.Style({
          image: new ol.style.Icon({
            anchor: [0.5, 1],
            src: Drupal.settings.jplanner.jplannerpath + '/img/starticon.png'
          })
        }),
        'endIcon': new ol.style.Style({
          image: new ol.style.Icon({
            anchor: [0.5, 1],
            src: Drupal.settings.jplanner.jplannerpath + '/img/endicon.png'
          })
        })
      };

      //SCENE init

      $('#jplannertype').hide();
      $('#jplannerresults').hide();
      $('#jplannertext').hide();
      $('#new-journey').hide();


      //ELEVATION GRAPH init

      var elevationGraph = new Chart($("#elevationgraph"), {
        type: 'line',
        data: {},
        options: {
          legend: {
            display: false
          },
          scales: {
            xAxes: [
              {
                type: 'linear',
                position: 'bottom',
                display: false
              }
            ],
            yAxes: [
              {
                ticks: {
                  beginAtZero: true
                }
              }
            ]
          }
        }
      });


      //JOURNEY DETAILS TEMPLATE init

      var journeydetails = $('#journeydetails').html();
      Mustache.parse(journeydetails);

      var journeytext = $('#journeytext').html();
      Mustache.parse(journeytext);


      //MAP init

      var journeyLayer = new ol.layer.Vector({
        style: function (feature) {
          return styles[journeyLayer.get('stylename')];
        }
      });
      var markers = new ol.source.Vector();
      var markerLayer = new ol.layer.Vector({
        source: markers,
        style: function (feature) {
          return styles[feature.get('type')];
        }
      });
      var map = new ol.Map({
        target: 'mainmap',
        layers: [
          new ol.layer.Tile({source: new ol.source.OSM()}),
          journeyLayer,
          markerLayer
        ],
        loadTilesWhileAnimating: true,
        view: new ol.View({
          center: ol.proj.fromLonLat([-1, 51.5]),
          zoom: 8
        }),
        interactions: ol.interaction.defaults({mouseWheelZoom: false})
      });


      //geocoder FROM

      var geocoded = [];

      $.typeahead({
        input: '#mainmap_from .step1 .address',
        minLength: 3,
        cancelButton: false,
        delay: 500,
        dynamic: true,
        display: ["name"],
        template: '<span class="typeahead-name">{{name}}</span> - <span class="typeahead-near">{{near}}</span>',
        emptyTemplate: 'Sorry, no result for <b>{{query}}</b>',
        source: {
          geo: {
            ajax: function (query) {
              return {
                dataType: "json",
                url: "https://api.cyclestreets.net/v2/geocoder",
                data: {
                  key: Drupal.settings.jplanner.apikey,
                  q: query,
                  limit: '12',
                  countrycodes: 'gb,ie'
                },
                callback: {
                  done: function (data, textStatus, jqXHR) {
                    var out = [];
                    for (n = 0; n < data.features.length; n++) {
                      out[n] = {
                        name: data.features[n].properties.name,
                        near: data.features[n].properties.near,
                        lat: data.features[n].geometry.coordinates[0],
                        lng: data.features[n].geometry.coordinates[1]
                      };
                    }

                    return out;
                  },
                  fail: function (jqXHR, textStatus, errorThrown) {
                  },
                  always: function (data, textStatus, jqXHR) {
                  },
                  then: function (jqXHR, textStatus) {
                  }
                }
              };
            } //ajax
          }
        },
        callback: {
          onReceiveRequest: function () {
            $('#mainmap_from .step1 div.typeahead__result').show();
          },
          onClickAfter: function (node, a, item, event) {
            $('#mainmap_from .step1 .address').val();
            $('#mainmap_from .step1').hide();
            $('#mainmap_from .step1 div.typeahead__result').hide();
            $('#mainmap_from .step2').show();
            markerpoints[0] = 1;
            $('#mainmap_from .step2 .name')
              .html('<b>' + item.name + '</b>, ' + item.near);
            $('#mainmap_from .step2 .coords').html(item.lat + ',' + item.lng);

            //fake placement
            markers.addFeature(
              new ol.Feature({
                type: 'startIcon',
                geometry: new ol.geom.Point(
                  ol.proj.fromLonLat([item.lat, item.lng]))
              })
            );

            if (markerpoints[0] === 1 && markerpoints[1] === 1) {
              map.getView().fit(markers.getSource().getExtent(), map.getSize());
            }

          }
        }

      });

      //geocoder TO

      $.typeahead({
        input: '#mainmap_to .step1 .address',
        minLength: 3,
        cancelButton: false,
        delay: 500,
        dynamic: true,
        display: ["name"],
        template: '<span class="typeahead-name">{{name}}</span> - <span class="typeahead-near">{{near}}</span>',
        emptyTemplate: 'Sorry, no result for <b>{{query}}</b>',
        source: {
          geo: {
            ajax: function (query) {
              return {
                dataType: "json",
                url: "https://api.cyclestreets.net/v2/geocoder",
                data: {
                  key: Drupal.settings.jplanner.apikey,
                  q: query,
                  limit: '12',
                  countrycodes: 'gb,ie'
                },
                callback: {
                  done: function (data, textStatus, jqXHR) {
                    var out = [];
                    for (n = 0; n < data.features.length; n++) {
                      out[n] = {
                        name: data.features[n].properties.name,
                        near: data.features[n].properties.near,
                        lat: data.features[n].geometry.coordinates[0],
                        lng: data.features[n].geometry.coordinates[1]
                      };
                    }

                    return out;
                  },
                  fail: function (jqXHR, textStatus, errorThrown) {
                  },
                  always: function (data, textStatus, jqXHR) {
                  },
                  then: function (jqXHR, textStatus) {
                  }
                }
              };
            } //ajax
          }
        },
        callback: {
          onReceiveRequest: function () {
            $('#mainmap_to .step1 div.typeahead__result').show();
          },
          onClickAfter: function (node, a, item, event) {
            $('#mainmap_to .step1 .address').val();
            $('#mainmap_to .step1').hide();
            $('#mainmap_to .step1 div.typeahead__result').hide();
            $('#mainmap_to .step2').show();
            markerpoints[1] = 1;
            $('#mainmap_to .step2 .name')
              .html('<b>' + item.name + '</b>, ' + item.near);
            $('#mainmap_to .step2 .coords').html(item.lat + ',' + item.lng);

            //fake placement
            markers.addFeature(
              new ol.Feature({
                type: 'endIcon',
                geometry: new ol.geom.Point(
                  ol.proj.fromLonLat([item.lat, item.lng]))
              })
            );

            if (markerpoints[0] === 1 && markerpoints[1] === 1) {
              map.getView().fit(markers.getExtent(), map.getSize());
            }

          }
        }

      });

      // Focus
      var focused = 'from';
      $('#mainmap_from input').focus();

      $('#mainmap_from input').on('click', function () {
        focused = 'from';
      });
      $('#mainmap_to input').on('click', function () {
        focused = 'to';
      });

      //Detect my location
      $('#mainmap_from .detect').on('click', function () {

        if (navigator.geolocation) {

          navigator.geolocation.getCurrentPosition(function (pos) {
            $('#mainmap_from .step2 .name').html('My location');
            $('#mainmap_from .step2 .coords')
              .html(pos.coords.longitude + ',' + pos.coords.latitude);
            $('#mainmap_from .step1').hide();
            $('#mainmap_from .step2').show();
            markerpoints[0] = 1;
          }, function (err) {
            alert(err.code + ': ' + err.message);
            console.log(err);
          }, {timeout: 5000});
        }
        else {
          alert('Geolocation is not supported by this browser');
        }

      }); //on click


      //Click on map to find FROM & TO

      var markerpoints = [0, 0];
      map.on('singleclick', function (evt) {
        if (markerpoints[0] === 1 && markerpoints[1] === 1) {
          return;
        }
        var lonlat = ol.proj.toLonLat(evt.coordinate);
        $.ajax({
          type: 'GET',
          url: 'https://api.cyclestreets.net/v2/nearestpoint',
          data: {
            fields: 'name,island',
            key: '36ec3af3f880f5d1',
            lonlat: lonlat[0] + ',' + lonlat[1]
          },
          dataType: 'json'
        }).done(function (data) {

          if (focused == 'from') {
            $('#mainmap_from .step2 .name')
              .html(data['features'][0].properties.name);
            $('#mainmap_from .step2 .coords')
              .html(data['features'][0].geometry.coordinates[0] + ',' + data['features'][0].geometry.coordinates[1]);
            $('#mainmap_from .step1').hide();
            $('#mainmap_from .step2').show();
            markers.addFeature(
              new ol.Feature({
                type: 'startIcon',
                geometry: new ol.geom.Point(ol.proj.fromLonLat([
                  data['features'][0].geometry.coordinates[0],
                  data['features'][0].geometry.coordinates[1]
                ]))
              })
            );
            markerpoints[0] = 1;
            $('#mainmap_to input').focus();
            focused = 'to';
          }
          else {
            if (focused == 'to') {
              $('#mainmap_to .step2 .name')
                .html(data['features'][0].properties.name);
              $('#mainmap_to .step2 .coords')
                .html(data['features'][0].geometry.coordinates[0] + ',' + data['features'][0].geometry.coordinates[1]);
              $('#mainmap_to .step1').hide();
              $('#mainmap_to .step2').show();
              markers.addFeature(
                new ol.Feature({
                  type: 'endIcon',
                  geometry: new ol.geom.Point(ol.proj.fromLonLat([
                    data['features'][0].geometry.coordinates[0],
                    data['features'][0].geometry.coordinates[1]
                  ]))
                })
              );
              markerpoints[1] = 1;
              $('#mainmap_from input').focus();
              focused = 'from';
            }
          }

          if (markerpoints[0] === 1 && markerpoints[1] === 1) {
            map.getView().fit(markers.getExtent(), map.getSize() -1);
          }


        }); //done, Ajax


      }); //on click

      //Change FROM & TO

      $('#jplannerforms').on('click', 'span.change', function () {
        $(this).parent().parent().find('div.step1').show();
        $(this).parent().hide();
        $(this).parent().find('span.coords').html('');
        if ($(this).attr('rel') == 'from') {
          markers.getFeatures().forEach(function (feature) {
            var properties = feature.getProperties();
            if (properties.type == 'startIcon') {
              markers.removeFeature(feature);
            }
          });
          markerpoints[0] = 0;
          $('#mainmap_from input').val('');
          $('#mainmap_from input').focus();
          focused = 'from';
        }
        else {
          if ($(this).attr('rel') == 'to') {
            markers.getFeatures().forEach(function (feature) {
              var properties = feature.getProperties();
              if (properties.type == 'endIcon') {
                markers.removeFeature(feature);
              }
            });
            markerpoints[1] = 0;
            $('#mainmap_to input').val('');
            $('#mainmap_to input').focus();
            focused = 'to';
          }
        }

      }); //on click


      // Plan route => aka generate itinerary
      var jid; //id itinerary

      $('#jplannerforms').on('click', 'span.getjourney', function () {

        if ($('#mainmap_from .step2 .coords').html() === "") {
          return;
        }
        if ($('#mainmap_to .step2 .coords').html() === "") {
          return;
        }

        $('#jloader').show();
        $('#jplannerforms').hide();
        $('#mainmap').hide();

        $.ajax({
          type: 'GET',
          url: 'https://www.cyclestreets.net/api/journey.json',
          data: {
            key: Drupal.settings.jplanner.apikey,
            itinerarypoints: $('#mainmap_from .step2 .coords').html() + '|'
            + $('#mainmap_to .step2 .coords').html(),
            plan: $("#mainmap_action option:selected").val(),
            redirect: 0
          },
          dataType: 'json'
        }).done(function (data) {
          //console.log(data);
          $('#jloader').hide();
          $('#mainmap').show();
          $('#jplannertype').show();
          $('#jplannerresults').show();
          $('#jplannertext').show();
          $('#new-journey').show();
          jid = data['marker'][0]['@attributes']['itinerary'];
          drawStats(data);
          drawRoute(data);
          drawJourneyAsText(data);
          $("#jplannertype a[rel=" +
            $("#mainmap_action option:selected").val() + "]")
            .parent()
            .addClass('active');
        }); //done, Ajax
      }); //on click


      // Retrieve route => itinerary with type
      $('#jplannertype').on('click', 'a', function () {

        $(this).parent().parent().find('a').parent().removeClass('active');
        $(this).parent().addClass('active');

        $('#jloader').show();
        $('#mainmap').hide();
        $('#jplannertype').hide();
        $('#jplannerresults').hide();
        $('#jplannertext').hide();
        $('#new-journey').hide();

        $.ajax({
          type: 'GET',
          url: 'https://www.cyclestreets.net/api/journey.json',
          data: {
            key: Drupal.settings.jplanner.apikey,
            itinerary: jid,
            plan: $(this).attr('rel')
          },
          dataType: 'json'
        }).done(function (data) {
          $('#jloader').hide();
          $('#mainmap').show();
          $('#jplannertype').show();
          $('#jplannerresults').show();
          $('#jplannertext').show();
          $('#new-journey').show();
          drawStats(data);
          drawRoute(data);
          drawJourneyAsText(data);
        }); //done, Ajax
      }); //on click


      //------------------------------------------------------------------------------

      function cycleCoords2GeoJSON(raw) {
        var raw2 = raw.split(' ');
        var tmp = [];
        for (n = 0; n < raw2.length; n++) {
          var nn = raw2[n].split(',');
          var mm = [parseFloat(nn[0]), parseFloat(nn[1])];
          tmp.push(ol.proj.fromLonLat(mm));
        }
        var coords = [tmp];
        //console.log(coords);
        return coords;
      }

      function drawRoute(data) {
        var geojson = cycleCoords2GeoJSON(
          data['marker'][0]['@attributes']['coordinates']);
        var trueGeoJSON = {
          type: 'FeatureCollection',
          crs: {
            type: 'name',
            properties: {
              name: 'EPSG:3857'
            }
          },
          features: [
            {
              type: 'Feature',
              geometry: {
                type: 'MultiLineString',
                coordinates: geojson
              }
            }
          ]
        };
        journeyLayer.setSource(
          new ol.source.Vector({
            features: new ol.format.GeoJSON().readFeatures(trueGeoJSON)
          })
        );
        journeyLayer.set(
          'stylename', 'route_' + data['marker'][0]['@attributes']['plan']);
        markers.clear();
        markers.addFeature(
          new ol.Feature({
            type: 'startIcon',
            geometry: new ol.geom.Point(geojson[0][0])
          })
        );
        markers.addFeature(
          new ol.Feature({
            type: 'endIcon',
            geometry: new ol.geom.Point(geojson[0][geojson[0].length - 1])
          })
        );
        map.getView().fit(journeyLayer.getSource().getExtent(), map.getSize());
      }


      function drawStats(data) {

        var rawtype = data['marker'][0]['@attributes']['plan'];
        var plan = rawtype.charAt(0).toUpperCase() + rawtype.slice(1);

        var distance = parseInt(data['marker'][0]['@attributes']['length']);
        distance = Math.round(distance * 0.0006213 * 100) / 100 + ' miles';

        var calories = parseInt(
          data['marker'][0]['@attributes']['calories']) + ' kcal';

        var time = parseInt(data['marker'][0]['@attributes']['time']); //in seconds
        time = Math.floor(time / 60) + ' minutes';

        var quietness = parseInt(
          data['marker'][0]['@attributes']['quietness']) + ' %'; //0-100

        var carbon = parseInt(
          data['marker'][0]['@attributes']['grammesCO2saved']) + ' grammes';

        var linkurl = 'https://www.cyclestreets.net/journey/' + jid + '/#balanced';

        $('#jplannerresults #jrd').html(
          Mustache.render(journeydetails, {
            type: plan,
            time: time,
            distance: distance,
            calories: calories,
            carbon: carbon,
            quietness: quietness,
            linkurl: linkurl
          })
        );

        //draw graph
        var raw2 = data['marker'][0]['@attributes']['elevations'].split(',');
        var datax = [];
        for (var n = 0; n < raw2.length; n++) {
          datax.push({x: n, y: raw2[n]});
        }

        elevationGraph.data.datasets = [];

        var newdataset = {
          label: false,
          data: datax,
          fill: true,
          pointRadius: 0,
          backgroundColor: styles['graph_' + rawtype].backgroundColor,
          borderColor: styles['graph_' + rawtype].borderColor,
          borderWidth: styles['graph_' + rawtype].borderWidth
        };

        elevationGraph.data.datasets.push(newdataset);
        elevationGraph.update();

      } //drawStats


      function seconds2time(seconds) {
        var hours = Math.floor(seconds / 3600);
        var minutes = Math.floor((seconds - (hours * 3600)) / 60);
        var seconds = seconds - (hours * 3600) - (minutes * 60);
        var time = "";

        if (hours != 0) {
          time = hours + ":";
        }
        if (minutes != 0 || time !== "") {
          minutes = (minutes < 10 && time !== "") ? "0" + minutes : String(
            minutes);
          time += minutes + ":";
        }
        if (time === "") {
          time = seconds + "s";
        }
        else {
          time += (seconds < 10) ? "0" + seconds : String(seconds);
        }
        return time;
      }

      function drawJourneyAsText(data) {
        console.log(data['marker'][1]['@attributes']);

        var time = 0;
        var distance = 0;
        var turn = 'START';

        for (n = 1; n < data['marker'].length; n++) {

          time = time + parseInt(data['marker'][n]['@attributes']['time']); //in seconds
          distance = distance + parseInt(
            data['marker'][n]['@attributes']['distance']); //meters
          if (n > 1) {
            turn = data['marker'][n]['@attributes']['turn'];
          }

          $('#jplannertext tbody').append(
            Mustache.render(journeytext, {
              time: seconds2time(time),
              distance: Math.round(distance * 10 / 1609) / 10 + 'mi',
              turn: turn,
              street: data['marker'][n]['@attributes']['name'],
              surface: data['marker'][n]['@attributes']['provisionName']
            })
          );

        }

      } //drawJourneyAsText


      //------------------------------------------------------------------------------
    }
  };
}(jQuery));