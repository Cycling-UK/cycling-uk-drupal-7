Drupal.openlayers.pluginManager.register({
  fs: 'openlayers.Component:ZoomToCluster',
  init: function (data) {
    var map = data.map;

    function getLayersFromObject(object) {
      var layersInside = new ol.Collection();

      object.getLayers().forEach(function (layer) {
        if (layer instanceof ol.layer.Group) {
          layersInside.extend(getLayersFromObject(layer).getArray());
        } else {
          if (typeof layer.getSource === 'function') {
            if (layer.getSource() !== 'null' && layer.getSource() instanceof ol.source.Vector) {
              layersInside.push(layer);
            }
          }
        }
      });

      return layersInside;
    }

    var calculateMaxExtent = function () {
      var maxExtent = ol.extent.createEmpty();

      layers.forEach(function (layer) {
        var source = layer.getSource();
        if (typeof source.getFeatures === 'function') {
          if (source.getFeatures().length !== 0) {
            ol.extent.extend(maxExtent, source.getExtent());
            data.opt.counterlayers++;
          }
        }

      });

      return maxExtent;
    };

    var maxExtented;

    var zoomToCluster = function (source) {

      if (data.opt.processed_once === true) {
        return;
      }

      maxExtented = calculateMaxExtent();

    };

    var layers = getLayersFromObject(map);
    var ZoomToExtented;

    layers.forEach(function (layer) {
      var source = layer.getSource();

      // Only zoom to a source if it's in the configured list of sources.
      if (typeof data.opt.source[source.mn] !== 'undefined') {
        source.on('change', zoomToCluster, source);
        clearTimeout(ZoomToExtented);
        ZoomToExtented = setTimeout(function () {
          data.opt.processed_once = true;
          map.getView().fit(maxExtented, map.getSize());
          //map.getView().setZoom(map.getView().getZoom() - 1); //experimental
        }, 600); //0.6 sec... experimental
      }
    });

  }
});
