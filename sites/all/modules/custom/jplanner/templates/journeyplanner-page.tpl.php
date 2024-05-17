<script id="journeydetails" type="x-tmpl-mustache">
    <h2>{{ type }} route option</h2>
    <p class="itinerarytext">If you decide to follow the suggested journey below please take extra care on unfamiliar sections; proceed at your own risk (route quality cannot be guaranteed).</p>
    <ul>
    <li class="timing">Journey time: <b>{{ time }}</b></li>
    <li class="distance">Distance: <b> {{ distance }}</b></li>
    <li class="calories">Calories: <b>{{ calories }}</b></li>
    <li class="co2">CO<sub>2</sub> avoided: <b>{{ carbon }}</b></li>
    <li class="quietness">Quietness:  <b>{{ quietness }}</b></li>
    <li class="externallink"><a class="btn btn-standard" href="{{ linkurl }}" target="_blank">click here for more</a></li>
    </ul>








</script>

<script id="journeytext" type="x-tmpl-mustache">
    <tr><td class="timme"> {{ time }}</td><td class="distance">{{ distance }}</td><td class="turn">{{ turn }}</td><td class="street">{{ street }}</td><td class="surface">{{ surface }}</td></tr>








</script>


<div id="jloader" style="display:none">
  <!-- insert loader CSS widget -->
  <div class="description">Planning your route, please wait...</div>
  <div class="loader"></div>
</div>

<div id="jplannerforms" class="row">


  <div id="mainmap_from"
       class="col-sm-10 col-sm-offset-1 col-md-10 col-md-offset-1 col-lg-8 col-lg-offset-2 step">
    <div class="step1">
      <span class="header col-sm-2">Start</span>
      <div class="name-outer-wrapper typeahead__container">
        <div class="typeahead__field">
          <span class="input col-sm-8 typeahead__query">
              <input type="text" class="form-control address"
                     placeholder="Click the map or detect my current location">
          </span>
        </div>
      </div>
      <span class="third-column detect btn btn-standard col-sm-2">
                <a href="#"><span>Detect</span></a>
            </span>
    </div>
    <div class="step2" style="display:none">
      <span class="header col-sm-2">Start</span>
      <div class="name-outer-wrapper col-sm-8">
        <div class="name-inner-wrapper">
          <span class="name"><span>name</span></span>
        </div>
      </div>
      <span class="third-column change btn btn-standard col-sm-2" rel="from">
                <span>Change</span>
            </span>
      <span class="coords"></span>
    </div>
  </div>


  <div id="mainmap_to"
       class="col-sm-10 col-sm-offset-1 col-md-10 col-md-offset-1 col-lg-8 col-lg-offset-2 step">
    <div class="step1">
      <span class="header col-sm-2">Finish</span>
      <div class="typeahead__container">
        <div class="typeahead__field">
        <span class="input col-sm-8 typeahead__query">
        <input type="text" class="form-control address"
               placeholder="Click the map or search">
        </span>
        </div>
      </div>
      <span class="third-column null col-sm-2"></span>
    </div>
    <div class="step2" style="display:none">
      <span class="header col-sm-2">Finish</span>
      <div class="name-outer-wrapper col-sm-8">
        <div class="name-inner-wrapper">
          <span class="name"><span>name</span></span>
        </div>
      </div>
      <span class="third-column change btn btn-standard col-sm-2" rel="to">
                <span>Change</span>
            </span>
      <span class="coords"></span>
    </div>
  </div>


  <div id="mainmap_action"
       class="col-sm-10 col-sm-offset-1 col-md-10 col-md-offset-1 col-lg-8 col-lg-offset-2 step">
    <div class="step1">
      <span class="header col-sm-2">Speed</span>
      <span class="input col-sm-8">
                <select name="speed" class="form-control form-select">
                    <option value="quietest">Quietest 10mph (16km/h)</option>
                    <option value="balanced" selected="selected">Balanced 12.5mph (20km/h)</option>
                    <option value="fastest">Fastest 15mph (24km/h)</option>
                </select>
            </span>

      <div id="mainmap_go" class="step col-sm-2">
                <span class="getjourney">
                    <a class="third-column btn btn-green btn-shadow col-sm-12"
                       href="#">Go</a>
                </span>
      </div>

    </div>
  </div>

</div>


<ul id="jplannertype" class="nav nav-tabs">
  <li class="tab quietest">
    <a rel="quietest" href="#" class="">Quietest</a>
  </li>
  <li class="tab balanced">
    <a rel="balanced" href="#" class="">Balanced</a>
  </li>
  <li class="tab fastest">
    <a rel="fastest" href="#" class="">Fastest</a>
  </li>
</ul>


<div id="jplannerresults" class="row">
  <div id="jrd" class="col-sm-8 col-md-5 col-md-offset-2">
    #journeydetails script content goes here!
  </div>
  <div id="jelevation" class="col-sm-4 col-md-3">
    <p class="elevationchart">Elevation profile</p>
    <canvas id="elevationgraph"></canvas>
  </div>
</div>

<div id="mainmap"></div>

<div id="jplannertext" class="row">
  <h2>Journey details</h2>
  <table>
    <thead>
    <tr>
      <th class="time">Time</th>
      <th class="distance">Distance</th>
      <th class="turn">Turn</th>
      <th class="streets">Streets</th>
      <th class="surface">Surface</th>
    </tr>
    </thead>
    <tbody>
    </tbody>
  </table>
</div>

<div id="new-journey">
  <a class="btn btn-standard btn-shadow" href="/journey-planner">Plan another
    route</a>
</div>
