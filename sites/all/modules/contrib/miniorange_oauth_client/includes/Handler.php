<?php


function mo_oauth_client_initiateLogin()
{
    $b8 = variable_get("\155\151\156\151\x6f\x72\x61\x6e\x67\145\x5f\157\x61\165\164\150\137\x63\x6c\151\x65\156\x74\137\165\160\x67\x72\141\x64\145\137\165\162\154");
    if (!(is_null($b8) || empty($b8) || strpos($b8, "\x2f\x6d\157\x61\163\57\x61\160\x69\57\160\154\165\147\151\156\x2f\x64\x72\x75\x70\141\154\112\x6f\157\x6d\154\x61\x55\x70\x64\141\x74\145\57") === FALSE)) {
        goto gP;
    }
    $SH = MiniorangeOAuthConstants::BASE_URL;
    $Bk = "\x64\x72\x75\160\141\154\137\x6f\141\165\164\x68\x5f\x63\154\151\145\x6e\164\x5f\x65\x6e\x74\145\162\x70\162\x69\163\145\x5f\160\x6c\141\156";
    $Us = "\x44\122\125\x50\101\x4c\137\117\101\x55\124\x48\137\x43\114\x49\x45\x4e\124\137\x45\x4e\124\x45\122\120\x52\111\x53\105\137\115\x4f\x44\x55\x4c\105";
    $C0 = variable_get("\155\151\x6e\151\157\162\x61\x6e\147\145\x5f\157\x61\165\x74\x68\137\143\154\151\x65\156\164\x5f\x63\x75\x73\x74\x6f\x6d\145\162\x5f\151\x64");
    $rB = variable_get("\x6d\x69\x6e\x69\x6f\162\x61\156\147\145\137\x6f\x61\x75\164\x68\137\143\x6c\151\145\156\x74\137\143\165\163\x74\157\x6d\145\x72\x5f\x61\160\151\137\153\145\171");
    $Lb = variable_get("\155\x69\x6e\x69\157\162\141\x6e\x67\145\x5f\x6f\x61\x75\x74\150\x5f\143\x6c\151\145\156\x74\x5f\x63\x75\163\x74\157\x6d\145\162\x5f\141\144\155\x69\x6e\137\164\x6f\153\x65\156");
    $Xd = AESEncryption::decrypt_data(variable_get("\155\x69\x6e\151\157\x72\141\156\x67\145\x5f\157\141\x75\164\150\137\x63\154\x69\x65\156\x74\x5f\154\151\x63\145\x6e\163\x65\x5f\153\145\x79"), $Lb);
    $b8 = Utilities::createUpdateUrl($Xd, $Bk, $Us, $rB, $C0, $SH);
    variable_set("\x6d\x69\156\x69\157\162\141\156\147\x65\137\x6f\x61\x75\164\x68\x5f\143\x6c\x69\145\156\x74\137\165\x70\x67\162\141\x64\145\137\165\162\x6c", $b8);
    gP:
    $_SESSION["\156\141\166\151\x67\x61\164\151\x6f\x6e\x5f\x75\x72\x6c"] = $_SERVER["\110\x54\124\120\x5f\x52\105\x46\105\x52\105\x52"];
    variable_set("\x6d\151\156\x69\x6f\162\141\156\x67\x65\137\x6f\x61\x75\x74\x68\x5f\x63\x6c\x69\145\156\x74\137\x72\145\x64", $_SERVER["\110\x54\124\120\137\122\105\x46\x45\x52\x45\122"]);
    $cU = variable_get("\155\151\x6e\x69\x6f\162\141\x6e\x67\x65\137\141\x75\164\x68\137\143\x6c\151\x65\x6e\164\137\141\160\x70\x5f\156\141\155\145", '');
    $oE = variable_get("\155\151\156\151\157\162\141\156\147\145\137\141\165\x74\150\x5f\x63\154\x69\x65\156\164\x5f\143\154\151\x65\x6e\x74\x5f\x69\x64", '');
    $Dj = variable_get("\155\151\156\x69\157\x72\x61\x6e\147\x65\x5f\141\165\164\150\137\x63\154\151\145\156\x74\x5f\143\154\x69\x65\156\x74\137\163\145\x63\x72\145\164", '');
    $Xr = variable_get("\155\151\156\151\x6f\162\x61\156\x67\145\x5f\141\165\x74\x68\x5f\143\x6c\151\x65\156\164\x5f\x73\x63\157\160\145", '');
    $mH = variable_get("\155\151\156\x69\157\162\x61\x6e\147\145\x5f\141\x75\x74\150\x5f\143\x6c\x69\x65\x6e\x74\x5f\141\x75\164\150\157\162\x69\x7a\x65\x5f\145\156\144\x70\x6f\x69\x6e\x74", '');
    $zd = variable_get("\155\151\x6e\x69\157\162\141\156\147\145\x5f\157\141\x75\164\x68\x5f\x63\x61\154\154\142\x61\x63\x6b", '');
    $nb = variable_get("\155\x69\x6e\x69\x6f\162\x61\156\x67\145\137\x6f\141\165\x74\150\137\x65\x6e\141\x62\x6c\x65\137\x70\x6b\x63\x65", '');
    $sy = base64_encode($cU);
    $mH = $mH . "\77\143\154\x69\x65\x6e\x74\137\x69\144\75" . $oE . "\46\163\143\157\160\x65\x3d" . $Xr . "\46\x72\145\x64\151\162\145\143\x74\x5f\165\x72\x69\75" . $zd . "\46\162\145\163\160\157\156\x73\145\137\164\171\160\145\x3d\143\x6f\144\145\x26\163\x74\141\x74\145\x3d" . $sy;
    if (!(session_status() == PHP_SESSION_NONE)) {
        goto mR;
    }
    session_start();
    mR:
    $_SESSION["\x6f\x61\x75\164\x68\62\163\x74\141\x74\145"] = $sy;
    $_SESSION["\x61\160\x70\x6e\141\155\x65"] = $cU;
    if (!$nb) {
        goto et;
    }
    $su = random_bytes(64);
    $OC = rtrim(strtr(base64_encode($su), "\x2b\57", "\x2d\x5f"), "\75");
    $nR = hash("\163\x68\x61\62\65\x36", $OC, true);
    $Z6 = rtrim(strtr(base64_encode($nR), "\53\57", "\x2d\137"), "\x3d");
    $mH = $mH . "\x26\x63\x6f\144\145\x5f\x63\x68\141\x6c\x6c\x65\156\x67\145\x3d" . $Z6 . "\x26\143\157\144\x65\137\143\x68\141\x6c\154\145\x6e\x67\145\x5f\x6d\145\164\150\157\x64\75\123\x32\x35\66";
    $_SESSION["\x63\157\144\145\126\145\x72\x69\146\x69\145\162"] = $OC;
    et:
    header("\x4c\x6f\x63\141\164\x69\x6f\x6e\72\x20" . $mH);
    drupal_goto($mH);
}
function mo_oauth_client_logout()
{
    $T7 = variable_get("\x6d\151\x6e\151\x6f\162\141\x6e\147\x65\x5f\157\141\165\x74\x68\137\x63\x6c\151\x65\x6e\164\x5f\x61\165\164\157\137\x72\145\144\151\162\145\143\x74\137\x74\157\x5f\151\144\x70", false);
    $Sb = variable_get("\x6d\x69\156\x69\157\162\141\x6e\x67\x65\x5f\x6f\x61\165\164\150\x5f\x63\154\151\x65\x6e\x74\x5f\146\x6f\x72\143\145\x5f\141\165\164\x68", false);
    $qD = variable_get("\155\x69\x6e\151\157\x72\141\x6e\x67\x65\x5f\x6f\x61\165\x74\150\x5f\x63\x6c\151\145\156\x74\137\154\157\147\157\x75\x74\x5f\165\162\154", '');
    if (!($qD != '')) {
        goto Zi;
    }
    session_destroy();
    drupal_goto($qD);
    Zi:
}
function getAccessToken($Oj, $Xo, $lS, $GK, $Xd, $z1, $ao, $Fl)
{
    $IF = curl_init($Oj);
    curl_setopt($IF, CURLOPT_FOLLOWLOCATION, true);
    curl_setopt($IF, CURLOPT_ENCODING, '');
    curl_setopt($IF, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($IF, CURLOPT_AUTOREFERER, true);
    curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, false);
    curl_setopt($IF, CURLOPT_SSL_VERIFYHOST, false);
    curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
    curl_setopt($IF, CURLOPT_POST, true);
    if ($ao && !$Fl) {
        goto N_;
    }
    if (!$ao && $Fl) {
        goto eL;
    }
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\101\x75\164\150\x6f\x72\151\x7a\141\x74\x69\157\156\72\x20\102\x61\x73\151\x63\x20" . base64_encode($lS . "\x3a" . $GK), "\101\143\x63\145\160\164\72\x20\x61\x70\x70\x6c\151\x63\141\164\x69\x6f\x6e\x2f\152\x73\x6f\x6e"));
    curl_setopt($IF, CURLOPT_POSTFIELDS, "\x72\145\144\151\162\145\143\x74\137\165\x72\151\x3d" . urlencode($z1) . "\46\x67\162\141\x6e\x74\x5f\164\x79\x70\145\x3d" . $Xo . "\x26\143\154\x69\145\x6e\x74\137\151\x64\75" . $lS . "\x26\x63\154\x69\145\x6e\164\x5f\163\x65\143\162\x65\x74\75" . $GK . "\x26\143\x6f\144\145\75" . $Xd);
    goto cV;
    eL:
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\101\x63\x63\x65\160\164\72\40\x61\x70\160\154\151\143\x61\x74\x69\157\156\x2f\152\163\x6f\156"));
    curl_setopt($IF, CURLOPT_POSTFIELDS, "\x72\145\x64\151\x72\x65\x63\164\137\x75\x72\x69\75" . urlencode($z1) . "\x26\147\x72\141\156\164\x5f\164\171\x70\x65\x3d" . $Xo . "\46\x63\x6c\x69\145\156\x74\137\x69\x64\75" . $lS . "\46\143\x6c\x69\x65\156\x74\x5f\163\145\143\x72\x65\x74\75" . $GK . "\46\x63\x6f\x64\145\x3d" . $Xd);
    cV:
    goto dD;
    N_:
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\x41\x75\x74\x68\157\162\x69\x7a\x61\164\x69\157\x6e\72\x20\x42\141\163\x69\x63\40" . base64_encode($lS . "\72" . $GK), "\101\143\143\145\x70\x74\72\x20\x61\160\160\154\x69\143\x61\x74\x69\157\156\x2f\x6a\163\x6f\156"));
    curl_setopt($IF, CURLOPT_POSTFIELDS, "\x72\x65\144\151\x72\145\143\164\x5f\165\162\151\75" . urlencode($z1) . "\x26\x67\162\x61\x6e\x74\x5f\164\x79\160\145\75" . $Xo . "\x26\x63\x6f\x64\145\x3d" . $Xd);
    dD:
    $ZV = curl_exec($IF);
    if (!curl_error($IF)) {
        goto bN;
    }
    echo "\74\x62\x3e\122\145\163\x70\157\156\163\x65\x20\72\40\74\x2f\x62\76\74\x62\x72\x3e";
    print_r($ZV);
    echo "\74\x62\162\x3e\x3c\x62\x72\76";
    exit(curl_error($IF));
    bN:
    if (is_array(json_decode($ZV, true))) {
        goto kn;
    }
    echo "\74\142\x3e\122\145\163\160\157\x6e\x73\x65\x20\x3a\40\74\x2f\142\76\74\x62\x72\76";
    print_r($ZV);
    echo "\74\x62\x72\76\74\x62\162\x3e";
    exit("\x49\x6e\166\141\154\151\x64\40\x72\145\163\160\x6f\156\x73\145\x20\x72\145\143\x65\151\x76\x65\144\x2e");
    kn:
    $ZV = json_decode($ZV, true);
    if (isset($ZV["\145\162\x72\x6f\x72\x5f\144\x65\163\x63\x72\x69\x70\x74\151\x6f\x6e"])) {
        goto yz;
    }
    if (isset($ZV["\145\x72\162\x6f\162"])) {
        goto FW;
    }
    if (isset($ZV["\141\x63\143\145\x73\x73\137\x74\x6f\153\x65\156"])) {
        goto Dw;
    }
    echo "\x3c\142\76\122\x65\163\160\157\x6e\x73\x65\40\72\40\x3c\57\142\x3e\x3c\142\162\x3e";
    print_r($ZV);
    echo "\74\x62\162\76\x3c\142\x72\76";
    exit("\x49\x6e\166\141\x6c\151\144\x20\x72\145\x73\x70\157\156\x73\x65\40\x72\x65\x63\145\x69\x76\x65\x64\40\146\162\x6f\155\x20\x4f\x41\x75\x74\x68\40\x50\x72\x6f\166\151\x64\145\162\56\x20\x43\157\x6e\x74\x61\x63\164\x20\x79\157\x75\162\x20\x61\x64\x6d\x69\x6e\x69\x73\x74\162\141\164\x6f\x72\40\x66\x6f\x72\40\x6d\x6f\x72\145\40\144\x65\164\141\151\x6c\163\x2e");
    goto Bm;
    Dw:
    $ry = $ZV["\141\x63\143\145\x73\x73\x5f\x74\157\153\x65\156"];
    Bm:
    goto OY;
    FW:
    exit($ZV["\x65\x72\x72\x6f\162"]);
    OY:
    goto Fe;
    yz:
    exit($ZV["\145\x72\162\157\162\x5f\x64\145\x73\143\162\151\160\x74\151\x6f\x6e"]);
    Fe:
    return $ry;
}
function getResourceOwner($kS, $ry)
{
    $IF = curl_init($kS);
    curl_setopt($IF, CURLOPT_FOLLOWLOCATION, true);
    curl_setopt($IF, CURLOPT_ENCODING, '');
    curl_setopt($IF, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($IF, CURLOPT_AUTOREFERER, true);
    curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, false);
    curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
    curl_setopt($IF, CURLOPT_POST, false);
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\x41\165\164\150\157\162\x69\x7a\141\x74\x69\x6f\156\x3a\x20\102\145\x61\x72\145\x72\x20" . $ry));
    $HZ = curl_version();
    curl_setopt($IF, CURLOPT_USERAGENT, "\143\165\x72\x6c\57" . $HZ["\166\145\x72\163\151\x6f\156"]);
    $ZV = curl_exec($IF);
    if (!curl_error($IF)) {
        goto l8;
    }
    echo "\74\142\x3e\x52\145\x73\160\x6f\x6e\x73\x65\40\x3a\x20\x3c\57\142\x3e\74\142\x72\76";
    print_r($ZV);
    echo "\x3c\142\162\x3e\74\142\x72\x3e";
    exit(curl_error($IF));
    l8:
    if (is_array(json_decode($ZV, true))) {
        goto uj;
    }
    echo "\74\x62\76\122\x65\x73\160\x6f\156\163\x65\40\72\40\x3c\x2f\x62\x3e\x3c\x62\x72\76";
    print_r($ZV);
    echo "\x3c\x62\x72\76\74\142\x72\76";
    exit("\111\x6e\x76\x61\154\x69\x64\40\x72\145\x73\160\157\x6e\163\145\40\162\145\x63\x65\151\166\145\x64\x2e");
    uj:
    $ZV = json_decode($ZV, true);
    if (isset($ZV["\x65\x72\x72\157\x72\x5f\144\145\163\143\162\x69\160\x74\x69\x6f\x6e"])) {
        goto g6;
    }
    if (!isset($ZV["\x65\x72\x72\157\x72"])) {
        goto ii;
    }
    if (is_array($ZV["\145\162\162\x6f\x72"])) {
        goto Cx;
    }
    echo $ZV["\x65\162\162\157\162"];
    goto u5;
    Cx:
    print_r($ZV["\x65\x72\x72\157\x72"]);
    u5:
    exit;
    ii:
    goto LZ;
    g6:
    if (is_array($ZV["\x65\x72\x72\x6f\x72\x5f\144\x65\x73\143\162\x69\x70\164\x69\157\x6e"])) {
        goto rJ;
    }
    echo $ZV["\145\x72\x72\157\x72\x5f\144\x65\163\x63\x72\x69\160\164\x69\x6f\156"];
    goto ls;
    rJ:
    print_r($ZV["\145\x72\162\157\x72\137\x64\145\163\x63\x72\151\160\x74\151\x6f\x6e"]);
    ls:
    exit;
    LZ:
    return $ZV;
}
function getToken($Oj, $Xo, $lS, $GK, $Xd, $z1, $ao, $Fl)
{
    $nb = variable_get("\155\x69\x6e\151\x6f\162\x61\156\147\x65\x5f\157\x61\165\x74\150\137\145\156\141\142\x6c\145\137\x70\153\x63\145", '');
    $IF = curl_init($Oj);
    curl_setopt($IF, CURLOPT_FOLLOWLOCATION, true);
    curl_setopt($IF, CURLOPT_ENCODING, '');
    curl_setopt($IF, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($IF, CURLOPT_AUTOREFERER, true);
    curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, false);
    curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
    curl_setopt($IF, CURLOPT_POST, true);
    if ($nb) {
        goto iC;
    }
    if ($ao && !$Fl) {
        goto DM;
    }
    if (!$ao && $Fl) {
        goto wz;
    }
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\x41\165\164\150\157\162\x69\x7a\141\x74\x69\x6f\156" => "\x42\x61\x73\x69\143\x20" . base64_encode($lS . "\72" . $GK), "\x41\x63\143\x65\160\164\x3a\40\141\x70\160\x6c\x69\x63\x61\x74\x69\157\x6e\57\152\163\157\156"));
    curl_setopt($IF, CURLOPT_POSTFIELDS, "\162\x65\x64\x69\162\145\x63\x74\137\x75\162\151\x3d" . urlencode($z1) . "\46\x67\162\x61\156\x74\137\164\171\x70\x65\75" . $Xo . "\46\x63\154\151\145\156\x74\137\x69\x64\x3d" . $lS . "\46\143\x6c\151\x65\156\x74\x5f\163\145\x63\x72\x65\164\75" . $GK . "\46\143\x6f\144\x65\x3d" . $Xd);
    goto Gd;
    wz:
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\101\x63\x63\x65\160\164\72\x20\141\160\160\154\151\x63\x61\x74\x69\x6f\156\57\152\x73\157\156"));
    curl_setopt($IF, CURLOPT_POSTFIELDS, "\x72\145\144\151\x72\145\x63\164\x5f\165\162\x69\75" . urlencode($z1) . "\46\147\162\141\156\164\x5f\x74\171\x70\145\75" . $Xo . "\x26\x63\154\x69\x65\x6e\164\x5f\x69\x64\75" . $lS . "\x26\x63\154\151\145\x6e\164\x5f\163\x65\143\162\145\164\75" . $GK . "\x26\x63\157\x64\x65\x3d" . $Xd);
    Gd:
    goto gX;
    iC:
    $OC = $_SESSION["\143\157\144\145\x56\x65\x72\x69\146\x69\x65\x72"];
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\101\x63\143\x65\x70\x74\x3a\x20\141\x70\160\x6c\151\143\141\x74\151\x6f\156\57\x6a\x73\x6f\x6e"));
    curl_setopt($IF, CURLOPT_POSTFIELDS, "\x72\x65\x64\x69\162\145\143\x74\x5f\x75\x72\151\75" . urlencode($z1) . "\x26\x63\157\x64\145\137\x76\145\162\151\146\151\x65\x72\x3d" . $OC . "\46\147\x72\x61\156\164\137\x74\x79\x70\x65\75" . $Xo . "\46\143\x6f\144\x65\75" . $Xd . "\46\143\154\151\145\x6e\164\x5f\x69\x64\x3d" . $lS);
    goto gX;
    DM:
    curl_setopt($IF, CURLOPT_HTTPHEADER, array("\x41\x75\x74\150\157\162\x69\172\x61\164\x69\157\156" => "\x42\x61\163\151\x63\40" . base64_encode($lS . "\x3a" . $GK), "\x41\143\143\x65\x70\x74\x3a\40\x61\x70\x70\154\151\x63\x61\164\151\x6f\x6e\57\x6a\163\157\x6e"));
    curl_setopt($IF, CURLOPT_POSTFIELDS, "\x72\145\x64\151\x72\145\x63\164\x5f\165\x72\151\75" . urlencode($z1) . "\46\147\x72\x61\156\164\x5f\164\x79\160\145\75" . $Xo . "\46\143\x6f\144\x65\x3d" . $Xd);
    gX:
    $wn = curl_exec($IF);
    if (!curl_error($IF)) {
        goto wf;
    }
    print_r($wn);
    exit(curl_error($IF));
    wf:
    if (is_array(json_decode($wn, true))) {
        goto z1;
    }
    print_r($wn);
    exit("\111\x6e\x76\141\154\x69\144\40\x72\x65\163\160\x6f\156\x73\145\x20\162\145\143\145\151\x76\x65\x64\40\x67\145\x74\x74\x69\x6e\147\x20\141\143\143\x65\163\163\x5f\164\x6f\153\145\x6e\40\x66\x72\x6f\x6d\x20\x75\x72\x6c\x20" . $Oj);
    z1:
    $ZV = json_decode($wn, true);
    if (isset($ZV["\145\162\162\157\x72\137\144\145\x73\143\x72\x69\160\x74\151\x6f\x6e"])) {
        goto LN;
    }
    if (!isset($ZV["\x65\162\x72\x6f\x72"])) {
        goto I_;
    }
    print_r($wn);
    exit($ZV["\145\x72\162\157\162"]);
    I_:
    goto BI;
    LN:
    print_r($wn);
    exit($ZV["\x65\x72\x72\157\x72\137\144\x65\x73\x63\162\151\160\164\151\157\x6e"]);
    BI:
    return $wn;
}
function getIdToken($Oj, $Xo, $lS, $GK, $Xd, $z1, $ao, $Fl)
{
    $wn = getToken($Oj, $Xo, $lS, $GK, $Xd, $z1, $ao, $Fl);
    $ZV = json_decode($wn, true);
    if (isset($ZV["\151\x64\137\x74\157\x6b\145\x6e"])) {
        goto rv;
    }
    echo "\x49\156\x76\x61\154\x69\144\x20\x72\x65\163\160\x6f\x6e\163\145\x20\x72\145\x63\x65\x69\166\x65\x64\40\x66\x72\157\x6d\x20\x4f\160\x65\156\x49\x64\x20\120\162\157\x76\151\144\145\162\x2e\x20\103\x6f\156\x74\141\x63\x74\x20\x79\x6f\165\x72\x20\141\x64\155\151\x6e\151\x73\x74\162\141\164\157\162\x20\146\x6f\x72\40\155\x6f\x72\x65\40\x64\x65\x74\141\x69\x6c\163\x2e\x3c\142\162\x3e\74\x62\x72\76\74\142\x3e\x52\x65\x73\x70\x6f\x6e\x73\145\40\x3a\40\x3c\57\142\76\74\x62\x72\76" . $wn;
    exit;
    goto z_;
    rv:
    return $ZV;
    z_:
}
function getResourceOwnerFromIdToken($Zx)
{
    $J9 = explode("\56", $Zx);
    if (!isset($J9[1])) {
        goto dH;
    }
    $le = base64_decode($J9[1]);
    if (!is_array(json_decode($le, true))) {
        goto i2;
    }
    return json_decode($le, true);
    i2:
    dH:
    echo "\111\156\x76\x61\x6c\151\144\x20\x72\x65\163\x70\157\x6e\163\x65\40\x72\x65\143\x65\x69\166\145\144\56\x3c\142\x72\76\x3c\x62\x3e\111\144\137\x74\157\x6b\145\x6e\x20\x3a\x20\74\57\x62\76" . $Zx;
    exit;
}
