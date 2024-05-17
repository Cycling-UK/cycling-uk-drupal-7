<script id="tablerow" type="x-tmpl-mustache">
  <tr class="wkts{{ index }}">
  <td class="views-field views-field-nothing"><a href="{{ url }}">{{ title }}</a><br>{{ group_type }}</td>
  <td class="views-field views-field-field-group-activities">{{ activities }}</td>
  </tr>
</script>

<section id="top_form" class="block block-views clearfix">

  <form><div>

      <div class="views-exposed-form">
        <div class="views-exposed-widgets clearfix">
          <div class="views-exposed-widget views-widget-filter-field_geofield_distance" id="edit-geo-wrapper">
            <div class="views-widget">
              <div class="geofield-proximity-field-wrapper clearfix">
                <div class="form-item form-type-geofield-proximity form-group">
                  <div class="clearfix" id="edit-geo">
                    <div class="form-item form-item-geo-distance form-type-textfield form-group">
                      <input type="text" maxlength="128" size="60" value="15" name="geo_distance" id="edit-geo-distance" class="form-control form-text">
                      <label for="edit-geo-distance" class="control-label element-invisible">Distance</label>
                    </div>
                    <div class="form-item form-item-geo-unit form-type-select form-group">
                      <select name="geo_unit" id="edit-geo-unit" class="form-control form-select">
                        <option selected="selected" value="1609">Miles</option>
                        <option value="1000">Kilometers</option>
                      </select> 
                      <label for="edit-geo-unit" class="control-label element-invisible">Unit</label>
                    </div>
                    <span class="geofield-proximity-origin-from">from</span>
                    <div class="form-item form-item-geo-origin form-type-textfield form-group">
                      <input type="text" maxlength="128" size="60" value="" name="geo[origin]" id="edit-geo-origin" class="geofield-proximity-origin form-control form-text">
                      <label for="edit-geo-origin" class="control-label element-invisible">Origin</label>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>

          <div class="views-exposed-widget views-submit-button">
            <button class="btn btn-info form-submit" value="Apply" name="" id="edit-submit-groups" type="submit">Apply</button>
          </div>
          <div class="views-exposed-widget views-reset-button">
            <button class="btn btn-default form-submit" value="Reset" name="op" id="edit-reset" type="submit">Reset</button>
          </div>
        </div>
      </div>

    </div></form>
</section>

<div id="popup">popupdata</div>
<section id="openlayer_map" class="block block-openlayers-block clearfix">
  <div id="openlayer-map-group" class="openlayers-map groups_map"></div>
</section>

<section id="openlayer_table" class="block block-openlayers-block clearfix">
  <div class="view view-groups view-id-groups view-display-id-groups_ol_blocklist jquery-once-2-processed">
    <div class="table-responsive">
      <table class="views-table cols-2 table table-hover table-striped">
        <thead>
          <tr>
            <th class="views-field views-field-nothing">Group</th>
            <th class="views-field views-field-field-group-activities">Activities</th>
          </tr>
        </thead>
        <tbody>
        </tbody>
      </table>
    </div>
  </div>
</section>