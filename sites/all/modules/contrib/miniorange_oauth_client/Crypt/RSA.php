<?php


if (!function_exists("\143\x72\x79\x70\164\x5f\x72\141\x6e\144\157\155\137\163\164\162\x69\156\x67")) {
    include_once "\122\x61\156\144\157\155\x2e\x70\x68\160";
}
if (class_exists("\103\162\171\x70\x74\137\x48\x61\163\150")) {
    goto SY;
}
include_once "\x48\x61\163\150\x2e\160\150\x70";
SY:
define("\x43\x52\x59\x50\x54\137\122\123\101\137\105\x4e\103\x52\131\x50\124\x49\117\116\137\117\101\x45\x50", 1);
define("\x43\122\131\x50\124\137\122\123\x41\x5f\x45\116\x43\122\131\120\x54\111\x4f\x4e\x5f\120\113\x43\x53\61", 2);
define("\x43\122\x59\120\124\137\x52\x53\x41\137\x45\x4e\x43\122\131\120\x54\x49\117\116\x5f\x4e\x4f\x4e\105", 3);
define("\x43\122\x59\120\x54\x5f\x52\123\x41\x5f\123\111\x47\116\101\x54\x55\122\x45\137\120\x53\x53", 1);
define("\103\122\131\x50\124\x5f\122\123\101\x5f\x53\x49\x47\116\x41\x54\125\x52\105\137\x50\x4b\103\x53\61", 2);
define("\103\x52\131\x50\124\x5f\x52\123\x41\x5f\101\123\x4e\x31\x5f\111\x4e\124\x45\x47\105\122", 2);
define("\103\122\131\120\124\137\122\123\x41\137\x41\x53\116\61\137\102\111\124\123\124\122\111\116\107", 3);
define("\103\x52\131\x50\124\137\x52\x53\x41\x5f\101\123\x4e\x31\137\117\x43\124\x45\x54\x53\124\x52\111\116\107", 4);
define("\103\x52\131\x50\x54\137\x52\123\101\x5f\101\x53\116\x31\x5f\x4f\x42\x4a\105\x43\124", 6);
define("\103\122\131\120\x54\x5f\x52\123\101\x5f\x41\x53\116\61\137\123\x45\121\125\x45\116\x43\x45", 48);
define("\103\122\131\x50\x54\x5f\x52\123\101\x5f\x4d\117\x44\x45\137\x49\116\x54\x45\x52\116\x41\114", 1);
define("\x43\x52\131\120\x54\137\x52\x53\x41\137\x4d\x4f\104\105\x5f\117\x50\x45\x4e\x53\123\x4c", 2);
define("\103\122\131\x50\x54\x5f\122\x53\101\x5f\x4f\x50\105\x4e\123\123\114\137\x43\117\x4e\106\111\x47", dirname(__FILE__) . "\57\56\56\x2f\x6f\x70\x65\x6e\163\163\x6c\x2e\143\x6e\x66");
define("\x43\122\x59\x50\x54\x5f\x52\123\x41\137\x50\122\111\x56\101\124\x45\137\x46\x4f\x52\115\101\124\137\x50\113\103\x53\61", 0);
define("\103\x52\131\120\x54\x5f\122\x53\x41\137\120\122\x49\126\101\124\105\x5f\x46\117\122\x4d\x41\x54\137\120\125\x54\x54\x59", 1);
define("\103\x52\x59\120\124\137\x52\123\x41\x5f\120\122\x49\x56\x41\124\105\x5f\x46\117\122\115\101\x54\137\130\x4d\x4c", 2);
define("\103\122\131\x50\124\x5f\x52\123\x41\x5f\x50\122\111\126\x41\x54\x45\137\x46\x4f\122\x4d\x41\x54\137\x50\x4b\103\x53\70", 8);
define("\x43\x52\131\120\124\x5f\122\x53\101\x5f\120\x55\102\114\x49\x43\x5f\x46\x4f\x52\x4d\x41\x54\137\x52\x41\x57", 3);
define("\103\x52\131\120\124\x5f\x52\x53\x41\137\x50\125\x42\114\x49\x43\137\106\x4f\122\x4d\101\124\137\120\113\x43\123\61", 4);
define("\103\x52\131\x50\x54\x5f\122\x53\x41\137\x50\x55\x42\x4c\111\x43\137\x46\117\122\115\x41\x54\x5f\120\113\x43\x53\x31\x5f\122\101\x57", 4);
define("\x43\122\131\x50\x54\x5f\x52\x53\101\x5f\120\125\102\114\x49\x43\137\x46\x4f\x52\115\101\x54\137\x58\x4d\114", 5);
define("\103\122\131\120\x54\137\122\x53\x41\x5f\x50\x55\x42\x4c\x49\103\x5f\x46\117\x52\x4d\101\124\137\117\x50\105\x4e\123\123\110", 6);
define("\103\122\131\x50\x54\137\122\123\101\x5f\x50\x55\x42\114\x49\x43\137\106\x4f\122\x4d\101\124\x5f\x50\x4b\x43\123\x38", 7);
class Crypt_RSA
{
    var $zero;
    var $one;
    var $privateKeyFormat = CRYPT_RSA_PRIVATE_FORMAT_PKCS1;
    var $publicKeyFormat = CRYPT_RSA_PUBLIC_FORMAT_PKCS8;
    var $modulus;
    var $k;
    var $exponent;
    var $primes;
    var $exponents;
    var $coefficients;
    var $hashName;
    var $hash;
    var $hLen;
    var $sLen;
    var $mgfHash;
    var $mgfHLen;
    var $encryptionMode = CRYPT_RSA_ENCRYPTION_OAEP;
    var $signatureMode = CRYPT_RSA_SIGNATURE_PSS;
    var $publicExponent = false;
    var $password = false;
    var $components = array();
    var $current;
    var $configFile;
    var $comment = "\160\x68\x70\163\x65\x63\x6c\151\142\x2d\x67\145\156\145\162\x61\164\x65\x64\55\153\x65\x79";
    function __construct()
    {
        if (class_exists("\115\x61\164\150\137\102\151\x67\x49\x6e\x74\x65\147\145\x72")) {
            goto vj;
        }
        include_once dirname(__FILE__) . "\134\x2e\56\x5c\x4d\141\164\x68\x5c\102\x69\x67\111\156\164\145\x67\145\x72\x2e\160\x68\x70";
        vj:
        $this->configFile = CRYPT_RSA_OPENSSL_CONFIG;
        if (defined("\x43\122\x59\120\124\137\122\123\101\x5f\x4d\117\x44\105")) {
            goto tn;
        }
        switch (true) {
            case defined("\115\x41\124\x48\x5f\x42\x49\x47\x49\x4e\124\x45\107\x45\x52\137\x4f\120\105\116\x53\x53\114\x5f\104\x49\x53\x41\x42\x4c\105"):
                define("\103\x52\131\120\124\137\x52\x53\x41\x5f\x4d\117\x44\x45", CRYPT_RSA_MODE_INTERNAL);
                goto l1;
            case !function_exists("\157\160\x65\156\x73\x73\x6c\x5f\160\153\x65\x79\137\x67\x65\x74\137\x64\145\164\x61\151\154\x73"):
                define("\x43\122\x59\120\124\x5f\122\123\101\x5f\x4d\117\104\x45", CRYPT_RSA_MODE_INTERNAL);
                goto l1;
            case extension_loaded("\x6f\160\145\x6e\x73\163\154") && version_compare(PHP_VERSION, "\x34\56\x32\x2e\x30", "\76\x3d") && file_exists($this->configFile):
                ob_start();
                @phpinfo();
                $ZV = ob_get_contents();
                ob_end_clean();
                preg_match_all("\43\x4f\x70\145\156\123\123\x4c\40\50\x48\x65\x61\144\145\x72\174\114\x69\142\x72\141\x72\x79\51\40\x56\145\x72\x73\151\157\156\50\56\52\x29\43\x69\155", $ZV, $GY);
                $k0 = array();
                if (empty($GY[1])) {
                    goto Mj;
                }
                $lI = 0;
                AM:
                if (!($lI < count($GY[1]))) {
                    goto f3;
                }
                $TN = trim(str_replace("\x3d\x3e", '', strip_tags($GY[2][$lI])));
                if (!preg_match("\57\50\134\144\x2b\134\56\134\x64\53\134\56\134\x64\53\51\x2f\151", $TN, $jz)) {
                    goto jC;
                }
                $k0[$GY[1][$lI]] = $jz[0];
                goto JI;
                jC:
                $k0[$GY[1][$lI]] = $TN;
                JI:
                SW:
                $lI++;
                goto AM;
                f3:
                Mj:
                switch (true) {
                    case !isset($k0["\x48\145\141\144\x65\x72"]):
                    case !isset($k0["\114\151\x62\162\x61\162\171"]):
                    case $k0["\110\145\141\x64\x65\162"] == $k0["\x4c\x69\142\x72\x61\162\x79"]:
                    case version_compare($k0["\110\x65\141\x64\x65\x72"], "\61\56\x30\56\x30") >= 0 && version_compare($k0["\114\151\142\162\141\x72\171"], "\61\x2e\60\56\60") >= 0:
                        define("\103\x52\x59\120\124\137\122\x53\x41\x5f\x4d\117\104\x45", CRYPT_RSA_MODE_OPENSSL);
                        goto GD;
                    default:
                        define("\103\122\131\x50\x54\137\x52\x53\x41\x5f\115\117\104\x45", CRYPT_RSA_MODE_INTERNAL);
                        define("\115\x41\x54\110\x5f\102\x49\107\x49\x4e\x54\x45\x47\x45\122\137\x4f\x50\x45\116\123\123\x4c\x5f\104\x49\x53\101\x42\114\x45", true);
                }
                kd:
                GD:
                goto l1;
            default:
                define("\103\122\x59\x50\x54\x5f\x52\123\101\x5f\x4d\x4f\x44\x45", CRYPT_RSA_MODE_INTERNAL);
        }
        zP:
        l1:
        tn:
        $this->zero = new Math_BigInteger();
        $this->one = new Math_BigInteger(1);
        $this->hash = new Crypt_Hash("\x73\150\141\61");
        $this->hLen = $this->hash->getLength();
        $this->hashName = "\163\150\141\x31";
        $this->mgfHash = new Crypt_Hash("\163\150\x61\x31");
        $this->mgfHLen = $this->mgfHash->getLength();
    }
    function Crypt_RSA()
    {
        $this->__construct();
    }
    function createKey($mo = 1024, $PV = false, $hG = array())
    {
        if (defined("\x43\x52\x59\120\x54\x5f\122\x53\x41\x5f\x45\x58\120\x4f\x4e\x45\116\x54")) {
            goto ar;
        }
        define("\x43\122\x59\x50\x54\137\122\123\101\x5f\x45\x58\120\117\116\105\x4e\124", "\66\x35\65\x33\67");
        ar:
        if (defined("\x43\122\131\120\x54\x5f\x52\x53\101\x5f\123\115\x41\x4c\114\105\123\x54\137\120\122\111\x4d\x45")) {
            goto GW;
        }
        define("\x43\122\x59\x50\x54\137\122\123\x41\137\123\115\x41\x4c\x4c\105\123\x54\137\120\x52\x49\115\105", 4096);
        GW:
        if (!(CRYPT_RSA_MODE == CRYPT_RSA_MODE_OPENSSL && $mo >= 384 && CRYPT_RSA_EXPONENT == 65537)) {
            goto ci;
        }
        $u7 = array();
        if (!isset($this->configFile)) {
            goto lH;
        }
        $u7["\x63\x6f\x6e\146\151\147"] = $this->configFile;
        lH:
        $kZ = openssl_pkey_new(array("\160\x72\x69\x76\141\x74\x65\x5f\x6b\145\x79\137\x62\x69\x74\163" => $mo) + $u7);
        openssl_pkey_export($kZ, $lA, null, $u7);
        $in = openssl_pkey_get_details($kZ);
        $in = $in["\x6b\145\171"];
        $lA = call_user_func_array(array($this, "\137\x63\157\x6e\x76\145\162\164\x50\162\151\166\x61\x74\x65\x4b\x65\x79"), array_values($this->_parseKey($lA, CRYPT_RSA_PRIVATE_FORMAT_PKCS1)));
        $in = call_user_func_array(array($this, "\x5f\143\x6f\156\x76\145\162\x74\120\x75\x62\154\151\x63\x4b\145\171"), array_values($this->_parseKey($in, CRYPT_RSA_PUBLIC_FORMAT_PKCS1)));
        wH:
        if (!(openssl_error_string() !== false)) {
            goto hm;
        }
        goto wH;
        hm:
        return array("\x70\162\151\166\x61\x74\x65\x6b\145\171" => $lA, "\160\x75\142\x6c\x69\x63\153\145\x79" => $in, "\160\x61\x72\x74\x69\141\x6c\153\x65\171" => false);
        ci:
        static $u_;
        if (isset($u_)) {
            goto l9;
        }
        $u_ = new Math_BigInteger(CRYPT_RSA_EXPONENT);
        l9:
        extract($this->_generateMinMax($mo));
        $wv = $M8;
        $yi = $mo >> 1;
        if ($yi > CRYPT_RSA_SMALLEST_PRIME) {
            goto eB;
        }
        $oX = 2;
        goto El;
        eB:
        $oX = floor($mo / CRYPT_RSA_SMALLEST_PRIME);
        $yi = CRYPT_RSA_SMALLEST_PRIME;
        El:
        extract($this->_generateMinMax($yi + $mo % $yi));
        $Gu = $iQ;
        extract($this->_generateMinMax($yi));
        $FD = new Math_BigInteger();
        $RD = $this->one->copy();
        if (!empty($hG)) {
            goto x0;
        }
        $Ev = $d8 = $Oh = array();
        $Yt = array("\x74\x6f\x70" => $this->one->copy(), "\142\x6f\x74\x74\157\155" => false);
        goto Gb;
        x0:
        extract(unserialize($hG));
        Gb:
        $Mv = time();
        $Sg = count($Oh) + 1;
        lr:
        $lI = $Sg;
        fw:
        if (!($lI <= $oX)) {
            goto i5;
        }
        if (!($PV !== false)) {
            goto sP;
        }
        $PV -= time() - $Mv;
        $Mv = time();
        if (!($PV <= 0)) {
            goto Uu;
        }
        return array("\160\162\x69\x76\141\164\x65\x6b\x65\171" => '', "\x70\x75\x62\x6c\x69\x63\x6b\145\x79" => '', "\160\x61\x72\164\x69\x61\x6c\153\x65\x79" => serialize(array("\160\x72\x69\x6d\x65\163" => $Oh, "\143\157\145\x66\146\151\x63\151\145\156\164\x73" => $d8, "\154\143\155" => $Yt, "\145\170\160\157\x6e\x65\x6e\x74\163" => $Ev)));
        Uu:
        sP:
        if ($lI == $oX) {
            goto GN;
        }
        $Oh[$lI] = $FD->randomPrime($M8, $iQ, $PV);
        goto YH;
        GN:
        list($M8, $yi) = $wv->divide($RD);
        if ($yi->equals($this->zero)) {
            goto rt;
        }
        $M8 = $M8->add($this->one);
        rt:
        $Oh[$lI] = $FD->randomPrime($M8, $Gu, $PV);
        YH:
        if (!($Oh[$lI] === false)) {
            goto Y8;
        }
        if (count($Oh) > 1) {
            goto dJ;
        }
        array_pop($Oh);
        $uV = serialize(array("\160\x72\151\155\x65\163" => $Oh, "\143\x6f\145\146\146\x69\143\x69\145\x6e\x74\163" => $d8, "\154\x63\155" => $Yt, "\x65\x78\x70\157\156\145\156\x74\163" => $Ev));
        goto Zl;
        dJ:
        $uV = '';
        Zl:
        return array("\x70\162\x69\x76\x61\164\x65\x6b\145\x79" => '', "\160\x75\x62\154\151\x63\x6b\x65\171" => '', "\160\141\x72\x74\x69\141\154\x6b\145\x79" => $uV);
        Y8:
        if (!($lI > 2)) {
            goto FA;
        }
        $d8[$lI] = $RD->modInverse($Oh[$lI]);
        FA:
        $RD = $RD->multiply($Oh[$lI]);
        $yi = $Oh[$lI]->subtract($this->one);
        $Yt["\x74\x6f\160"] = $Yt["\164\x6f\160"]->multiply($yi);
        $Yt["\142\157\x74\164\x6f\155"] = $Yt["\x62\x6f\x74\164\157\155"] === false ? $yi : $Yt["\x62\x6f\164\x74\x6f\x6d"]->gcd($yi);
        $Ev[$lI] = $u_->modInverse($yi);
        mP:
        $lI++;
        goto fw;
        i5:
        list($yi) = $Yt["\x74\x6f\160"]->divide($Yt["\142\157\164\164\x6f\x6d"]);
        $Kc = $yi->gcd($u_);
        $Sg = 1;
        if (!$Kc->equals($this->one)) {
            goto lr;
        }
        nN:
        $gN = $u_->modInverse($yi);
        $d8[2] = $Oh[2]->modInverse($Oh[1]);
        return array("\160\x72\x69\x76\141\x74\x65\153\145\x79" => $this->_convertPrivateKey($RD, $u_, $gN, $Oh, $Ev, $d8), "\x70\165\x62\x6c\151\143\x6b\x65\x79" => $this->_convertPublicKey($RD, $u_), "\x70\x61\162\164\151\x61\x6c\x6b\x65\171" => false);
    }
    function _convertPrivateKey($RD, $u_, $gN, $Oh, $Ev, $d8)
    {
        $QJ = $this->privateKeyFormat != CRYPT_RSA_PRIVATE_FORMAT_XML;
        $oX = count($Oh);
        $dM = array("\166\145\162\163\151\x6f\156" => $oX == 2 ? chr(0) : chr(1), "\155\x6f\x64\x75\x6c\x75\x73" => $RD->toBytes($QJ), "\x70\165\142\154\x69\x63\105\170\160\x6f\x6e\145\x6e\164" => $u_->toBytes($QJ), "\x70\x72\151\x76\x61\x74\145\105\x78\x70\x6f\156\x65\156\x74" => $gN->toBytes($QJ), "\x70\162\x69\x6d\145\x31" => $Oh[1]->toBytes($QJ), "\160\162\x69\x6d\x65\x32" => $Oh[2]->toBytes($QJ), "\145\170\160\x6f\156\145\x6e\x74\x31" => $Ev[1]->toBytes($QJ), "\145\x78\160\157\156\x65\156\x74\62" => $Ev[2]->toBytes($QJ), "\x63\x6f\145\146\146\x69\x63\x69\145\156\x74" => $d8[2]->toBytes($QJ));
        switch ($this->privateKeyFormat) {
            case CRYPT_RSA_PRIVATE_FORMAT_XML:
                if (!($oX != 2)) {
                    goto nv;
                }
                return false;
                nv:
                return "\x3c\x52\123\101\x4b\145\x79\x56\141\154\x75\x65\76\15\12" . "\x20\x20\x3c\x4d\x6f\144\165\x6c\x75\x73\x3e" . base64_encode($dM["\155\157\144\x75\x6c\x75\163"]) . "\x3c\57\x4d\157\144\x75\x6c\x75\x73\x3e\15\12" . "\x20\x20\74\x45\170\160\157\156\x65\x6e\x74\76" . base64_encode($dM["\x70\x75\142\x6c\x69\143\x45\170\x70\x6f\x6e\x65\x6e\164"]) . "\x3c\x2f\105\170\160\157\156\x65\156\x74\76\xd\xa" . "\40\40\74\120\x3e" . base64_encode($dM["\160\162\x69\x6d\x65\x31"]) . "\74\x2f\120\x3e\15\12" . "\40\40\x3c\x51\x3e" . base64_encode($dM["\160\162\x69\x6d\145\62"]) . "\74\57\x51\x3e\15\12" . "\x20\40\74\x44\120\x3e" . base64_encode($dM["\145\170\x70\157\156\x65\x6e\164\x31"]) . "\x3c\x2f\x44\120\76\xd\12" . "\x20\x20\74\104\x51\76" . base64_encode($dM["\145\x78\x70\x6f\x6e\145\x6e\164\62"]) . "\x3c\57\104\121\x3e\15\xa" . "\40\40\74\x49\156\166\x65\x72\163\x65\121\x3e" . base64_encode($dM["\x63\x6f\x65\146\x66\151\143\151\x65\x6e\164"]) . "\x3c\57\111\x6e\x76\145\162\163\x65\x51\76\xd\xa" . "\x20\x20\x3c\104\76" . base64_encode($dM["\160\162\151\166\141\164\x65\105\x78\160\157\x6e\x65\x6e\x74"]) . "\x3c\x2f\104\76\xd\xa" . "\74\x2f\x52\x53\x41\113\x65\x79\x56\141\154\165\x65\x3e";
                goto W6;
            case CRYPT_RSA_PRIVATE_FORMAT_PUTTY:
                if (!($oX != 2)) {
                    goto Gj;
                }
                return false;
                Gj:
                $Lb = "\120\x75\124\124\131\x2d\125\x73\145\x72\55\113\145\171\55\106\151\154\x65\x2d\62\x3a\40\x73\x73\150\x2d\x72\163\x61\15\xa\105\156\x63\162\x79\160\164\151\x6f\x6e\72\40";
                $nk = !empty($this->password) || is_string($this->password) ? "\141\x65\163\62\65\66\x2d\143\x62\143" : "\x6e\157\x6e\145";
                $Lb .= $nk;
                $Lb .= "\15\12\x43\157\155\x6d\x65\x6e\164\x3a\x20" . $this->comment . "\15\12";
                $w4 = pack("\116\x61\52\x4e\x61\x2a\x4e\141\x2a", strlen("\x73\x73\x68\55\x72\163\141"), "\x73\163\x68\55\162\x73\141", strlen($dM["\160\165\x62\x6c\151\143\105\170\160\x6f\156\145\156\x74"]), $dM["\160\x75\142\x6c\x69\143\105\170\160\x6f\x6e\x65\x6e\164"], strlen($dM["\155\x6f\144\x75\x6c\165\163"]), $dM["\155\x6f\144\x75\x6c\165\163"]);
                $yx = pack("\116\x61\x2a\116\x61\52\116\x61\x2a\116\141\x2a", strlen("\x73\163\150\55\162\x73\141"), "\163\163\150\x2d\x72\163\141", strlen($nk), $nk, strlen($this->comment), $this->comment, strlen($w4), $w4);
                $w4 = base64_encode($w4);
                $Lb .= "\120\165\142\x6c\x69\143\x2d\114\151\x6e\145\x73\x3a\x20" . (strlen($w4) + 63 >> 6) . "\xd\12";
                $Lb .= chunk_split($w4, 64);
                $Gn = pack("\116\x61\52\116\141\x2a\116\141\52\116\141\52", strlen($dM["\160\162\x69\166\141\164\145\105\170\x70\x6f\156\x65\x6e\164"]), $dM["\x70\162\151\x76\141\164\145\105\x78\160\157\156\145\156\164"], strlen($dM["\160\x72\151\x6d\x65\61"]), $dM["\160\x72\x69\155\145\x31"], strlen($dM["\x70\x72\151\x6d\x65\x32"]), $dM["\160\162\x69\x6d\145\x32"], strlen($dM["\143\x6f\145\x66\146\151\x63\151\x65\156\x74"]), $dM["\143\x6f\x65\146\146\151\x63\x69\145\x6e\x74"]);
                if (empty($this->password) && !is_string($this->password)) {
                    goto uJ;
                }
                $Gn .= crypt_random_string(16 - (strlen($Gn) & 15));
                $yx .= pack("\116\141\x2a", strlen($Gn), $Gn);
                if (class_exists("\103\x72\171\x70\164\x5f\101\x45\123")) {
                    goto xZ;
                }
                include_once "\x43\162\x79\x70\x74\57\101\x45\x53\x2e\x70\x68\160";
                xZ:
                $jA = 0;
                $TQ = '';
                Ae:
                if (!(strlen($TQ) < 32)) {
                    goto cs;
                }
                $yi = pack("\x4e\x61\52", $jA++, $this->password);
                $TQ .= pack("\x48\x2a", sha1($yi));
                goto Ae;
                cs:
                $TQ = substr($TQ, 0, 32);
                $Te = new Crypt_AES();
                $Te->setKey($TQ);
                $Te->disablePadding();
                $Gn = $Te->encrypt($Gn);
                $D5 = "\x70\x75\164\x74\171\55\160\x72\x69\x76\141\x74\x65\x2d\x6b\145\x79\x2d\146\x69\154\145\55\155\x61\x63\x2d\153\x65\171" . $this->password;
                goto sQ;
                uJ:
                $yx .= pack("\x4e\x61\52", strlen($Gn), $Gn);
                $D5 = "\160\x75\x74\x74\171\x2d\160\x72\x69\x76\141\x74\x65\55\x6b\145\x79\x2d\x66\151\x6c\x65\55\x6d\x61\x63\55\x6b\145\171";
                sQ:
                $Gn = base64_encode($Gn);
                $Lb .= "\120\x72\x69\x76\x61\x74\x65\55\x4c\x69\156\145\163\x3a\x20" . (strlen($Gn) + 63 >> 6) . "\xd\xa";
                $Lb .= chunk_split($Gn, 64);
                if (class_exists("\103\x72\x79\x70\164\137\x48\141\x73\x68")) {
                    goto Mi;
                }
                include_once "\103\162\x79\x70\164\x2f\x48\x61\x73\150\x2e\160\150\160";
                Mi:
                $Os = new Crypt_Hash("\163\150\x61\61");
                $Os->setKey(pack("\x48\52", sha1($D5)));
                $Lb .= "\120\162\151\x76\141\x74\x65\55\115\x41\103\72\40" . bin2hex($Os->hash($yx)) . "\15\xa";
                return $Lb;
            default:
                $uH = array();
                foreach ($dM as $sA => $nI) {
                    $uH[$sA] = pack("\x43\x61\52\141\x2a", CRYPT_RSA_ASN1_INTEGER, $this->_encodeLength(strlen($nI)), $nI);
                    Rg:
                }
                P5:
                $Gi = implode('', $uH);
                if (!($oX > 2)) {
                    goto YG;
                }
                $xr = '';
                $lI = 3;
                pp:
                if (!($lI <= $oX)) {
                    goto m4;
                }
                $zD = pack("\103\x61\52\141\52", CRYPT_RSA_ASN1_INTEGER, $this->_encodeLength(strlen($Oh[$lI]->toBytes(true))), $Oh[$lI]->toBytes(true));
                $zD .= pack("\x43\141\52\141\x2a", CRYPT_RSA_ASN1_INTEGER, $this->_encodeLength(strlen($Ev[$lI]->toBytes(true))), $Ev[$lI]->toBytes(true));
                $zD .= pack("\103\x61\x2a\x61\52", CRYPT_RSA_ASN1_INTEGER, $this->_encodeLength(strlen($d8[$lI]->toBytes(true))), $d8[$lI]->toBytes(true));
                $xr .= pack("\103\x61\x2a\141\x2a", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($zD)), $zD);
                Pt:
                $lI++;
                goto pp;
                m4:
                $Gi .= pack("\x43\141\52\x61\52", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($xr)), $xr);
                YG:
                $Gi = pack("\103\141\52\x61\x2a", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($Gi)), $Gi);
                if (!($this->privateKeyFormat == CRYPT_RSA_PRIVATE_FORMAT_PKCS8)) {
                    goto zz;
                }
                $gI = pack("\110\52", "\x33\x30\x30\144\x30\66\60\71\62\x61\70\x36\64\x38\70\x36\146\67\x30\x64\60\61\x30\x31\60\x31\x30\65\60\x30");
                $Gi = pack("\x43\141\x2a\x61\52\103\x61\x2a\141\x2a", CRYPT_RSA_ASN1_INTEGER, "\1\0", $gI, 4, $this->_encodeLength(strlen($Gi)), $Gi);
                $Gi = pack("\x43\x61\x2a\x61\52", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($Gi)), $Gi);
                if (!empty($this->password) || is_string($this->password)) {
                    goto W4;
                }
                $Gi = "\x2d\x2d\55\x2d\x2d\x42\x45\x47\x49\116\x20\120\122\111\x56\x41\124\x45\40\113\105\131\55\x2d\x2d\x2d\55\xd\12" . chunk_split(base64_encode($Gi), 64) . "\55\55\55\x2d\x2d\105\x4e\104\x20\x50\x52\x49\x56\x41\x54\105\40\x4b\105\x59\55\x2d\55\55\55";
                goto xl;
                W4:
                $FH = crypt_random_string(8);
                $Z5 = 2048;
                if (class_exists("\x43\162\171\160\164\137\104\x45\123")) {
                    goto N6;
                }
                include_once "\x43\x72\x79\160\x74\x2f\104\x45\123\x2e\x70\150\x70";
                N6:
                $Te = new Crypt_DES();
                $Te->setPassword($this->password, "\x70\x62\153\144\x66\61", "\155\144\x35", $FH, $Z5);
                $Gi = $Te->encrypt($Gi);
                $ju = pack("\103\x61\x2a\141\x2a\x43\141\52\116", CRYPT_RSA_ASN1_OCTETSTRING, $this->_encodeLength(strlen($FH)), $FH, CRYPT_RSA_ASN1_INTEGER, $this->_encodeLength(4), $Z5);
                $EN = "\x2a\206\110\206\367\xd\1\x5\3";
                $lB = pack("\103\141\52\x61\x2a\103\141\x2a\141\52", CRYPT_RSA_ASN1_OBJECT, $this->_encodeLength(strlen($EN)), $EN, CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($ju)), $ju);
                $Gi = pack("\103\141\x2a\x61\x2a\x43\x61\x2a\x61\x2a", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($lB)), $lB, CRYPT_RSA_ASN1_OCTETSTRING, $this->_encodeLength(strlen($Gi)), $Gi);
                $Gi = pack("\x43\141\x2a\141\52", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($Gi)), $Gi);
                $Gi = "\55\55\x2d\55\55\x42\105\107\x49\116\x20\x45\116\103\x52\x59\120\124\105\x44\40\120\x52\x49\x56\101\x54\x45\40\x4b\105\131\x2d\x2d\55\x2d\x2d\15\12" . chunk_split(base64_encode($Gi), 64) . "\x2d\x2d\55\x2d\55\105\116\x44\40\x45\116\x43\122\x59\120\124\105\104\40\120\x52\x49\x56\x41\x54\x45\40\113\105\x59\x2d\x2d\55\55\55";
                xl:
                return $Gi;
                zz:
                if (!empty($this->password) || is_string($this->password)) {
                    goto ND;
                }
                $Gi = "\x2d\55\x2d\55\55\102\105\107\111\116\40\122\123\x41\40\120\x52\x49\x56\101\124\105\40\x4b\x45\x59\55\x2d\x2d\55\55\15\12" . chunk_split(base64_encode($Gi), 64) . "\x2d\x2d\x2d\55\55\105\x4e\x44\40\x52\x53\x41\x20\x50\122\111\x56\x41\x54\x45\40\113\105\x59\55\55\x2d\55\x2d";
                goto gO;
                ND:
                $Vg = crypt_random_string(8);
                $TQ = pack("\110\x2a", md5($this->password . $Vg));
                $TQ .= substr(pack("\x48\x2a", md5($TQ . $this->password . $Vg)), 0, 8);
                if (class_exists("\x43\162\x79\x70\x74\137\x54\x72\151\160\154\145\x44\x45\123")) {
                    goto AN;
                }
                include_once "\x43\162\x79\160\164\57\124\162\151\x70\154\145\104\x45\x53\56\x70\150\x70";
                AN:
                $Eb = new Crypt_TripleDES();
                $Eb->setKey($TQ);
                $Eb->setIV($Vg);
                $Vg = strtoupper(bin2hex($Vg));
                $Gi = "\x2d\x2d\x2d\x2d\x2d\x42\105\107\111\116\x20\122\123\x41\40\x50\122\111\126\101\124\105\40\x4b\105\131\55\55\55\x2d\55\15\xa" . "\x50\162\157\143\x2d\124\171\160\x65\72\x20\64\x2c\x45\116\103\x52\131\x50\124\x45\104\15\xa" . "\x44\105\x4b\55\x49\156\146\157\72\x20\x44\105\123\55\x45\104\x45\x33\x2d\x43\x42\x43\54{$Vg}\15\xa" . "\xd\12" . chunk_split(base64_encode($Eb->encrypt($Gi)), 64) . "\x2d\x2d\55\x2d\55\x45\x4e\104\40\122\x53\101\40\x50\x52\111\x56\x41\124\105\40\113\105\131\55\55\x2d\55\55";
                gO:
                return $Gi;
        }
        Jx:
        W6:
    }
    function _convertPublicKey($RD, $u_)
    {
        $QJ = $this->publicKeyFormat != CRYPT_RSA_PUBLIC_FORMAT_XML;
        $l2 = $RD->toBytes($QJ);
        $qN = $u_->toBytes($QJ);
        switch ($this->publicKeyFormat) {
            case CRYPT_RSA_PUBLIC_FORMAT_RAW:
                return array("\145" => $u_->copy(), "\x6e" => $RD->copy());
            case CRYPT_RSA_PUBLIC_FORMAT_XML:
                return "\74\x52\x53\x41\x4b\x65\x79\126\141\x6c\165\145\x3e\xd\xa" . "\x20\x20\x3c\x4d\x6f\x64\165\x6c\165\x73\76" . base64_encode($l2) . "\74\x2f\115\x6f\144\165\154\x75\x73\x3e\xd\xa" . "\40\x20\x3c\x45\170\160\157\156\145\x6e\164\76" . base64_encode($qN) . "\74\x2f\x45\x78\160\x6f\156\x65\156\164\x3e\xd\xa" . "\x3c\x2f\122\123\101\x4b\145\171\x56\x61\x6c\x75\145\76";
                goto kN;
            case CRYPT_RSA_PUBLIC_FORMAT_OPENSSH:
                $O3 = pack("\x4e\x61\52\x4e\141\x2a\x4e\141\x2a", strlen("\x73\163\x68\55\x72\163\141"), "\163\x73\x68\x2d\162\x73\141", strlen($qN), $qN, strlen($l2), $l2);
                $O3 = "\x73\163\150\x2d\162\x73\x61\40" . base64_encode($O3) . "\x20" . $this->comment;
                return $O3;
            default:
                $uH = array("\155\157\144\165\x6c\x75\x73" => pack("\x43\x61\52\x61\52", CRYPT_RSA_ASN1_INTEGER, $this->_encodeLength(strlen($l2)), $l2), "\160\165\142\154\x69\143\105\170\160\157\156\x65\x6e\164" => pack("\x43\141\x2a\x61\x2a", CRYPT_RSA_ASN1_INTEGER, $this->_encodeLength(strlen($qN)), $qN));
                $O3 = pack("\x43\141\52\141\52\x61\52", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($uH["\155\x6f\144\x75\154\165\163"]) + strlen($uH["\x70\x75\x62\154\x69\143\x45\x78\160\157\156\145\x6e\x74"])), $uH["\x6d\157\144\x75\x6c\x75\163"], $uH["\x70\x75\142\154\x69\x63\x45\170\x70\x6f\x6e\145\x6e\x74"]);
                if ($this->publicKeyFormat == CRYPT_RSA_PUBLIC_FORMAT_PKCS1_RAW) {
                    goto BW;
                }
                $gI = pack("\110\52", "\x33\x30\x30\x64\60\x36\x30\71\62\x61\x38\x36\64\70\70\66\x66\67\60\144\x30\x31\60\x31\60\x31\60\65\x30\60");
                $O3 = chr(0) . $O3;
                $O3 = chr(3) . $this->_encodeLength(strlen($O3)) . $O3;
                $O3 = pack("\103\141\52\141\x2a", CRYPT_RSA_ASN1_SEQUENCE, $this->_encodeLength(strlen($gI . $O3)), $gI . $O3);
                $O3 = "\x2d\55\x2d\55\55\102\105\107\111\116\40\120\125\102\x4c\111\103\40\x4b\x45\x59\x2d\x2d\55\55\x2d\xd\xa" . chunk_split(base64_encode($O3), 64) . "\x2d\55\55\x2d\x2d\105\116\104\x20\120\x55\x42\114\111\103\40\113\105\131\x2d\55\x2d\x2d\55";
                goto QI;
                BW:
                $O3 = "\55\55\x2d\55\x2d\102\105\107\x49\x4e\40\122\123\101\40\120\125\102\114\x49\103\x20\113\105\131\55\55\55\x2d\55\15\12" . chunk_split(base64_encode($O3), 64) . "\x2d\x2d\55\x2d\x2d\105\116\x44\40\x52\x53\x41\40\120\125\x42\114\x49\103\x20\x4b\x45\x59\x2d\x2d\x2d\55\55";
                QI:
                return $O3;
        }
        gw:
        kN:
    }
    function _parseKey($Lb, $m0)
    {
        if (!($m0 != CRYPT_RSA_PUBLIC_FORMAT_RAW && !is_string($Lb))) {
            goto Ci;
        }
        return false;
        Ci:
        switch ($m0) {
            case CRYPT_RSA_PUBLIC_FORMAT_RAW:
                if (is_array($Lb)) {
                    goto wV;
                }
                return false;
                wV:
                $uH = array();
                switch (true) {
                    case isset($Lb["\145"]):
                        $uH["\x70\165\142\x6c\x69\x63\x45\x78\x70\157\x6e\x65\156\x74"] = $Lb["\x65"]->copy();
                        goto bt;
                    case isset($Lb["\x65\x78\x70\157\x6e\x65\156\x74"]):
                        $uH["\160\165\x62\154\x69\143\x45\170\160\x6f\x6e\x65\x6e\164"] = $Lb["\x65\170\x70\157\156\145\x6e\164"]->copy();
                        goto bt;
                    case isset($Lb["\x70\x75\142\x6c\151\x63\105\x78\160\157\x6e\x65\156\x74"]):
                        $uH["\160\x75\142\x6c\151\x63\x45\x78\160\x6f\x6e\x65\x6e\x74"] = $Lb["\160\x75\142\154\151\143\x45\170\160\x6f\156\145\156\164"]->copy();
                        goto bt;
                    case isset($Lb[0]):
                        $uH["\160\165\142\x6c\x69\143\105\170\160\x6f\x6e\x65\x6e\x74"] = $Lb[0]->copy();
                }
                fW:
                bt:
                switch (true) {
                    case isset($Lb["\x6e"]):
                        $uH["\x6d\x6f\144\x75\x6c\165\x73"] = $Lb["\156"]->copy();
                        goto xi;
                    case isset($Lb["\x6d\157\x64\165\154\x6f"]):
                        $uH["\x6d\x6f\x64\165\154\165\163"] = $Lb["\x6d\x6f\x64\165\x6c\x6f"]->copy();
                        goto xi;
                    case isset($Lb["\155\x6f\144\165\154\165\163"]):
                        $uH["\155\157\x64\x75\154\165\x73"] = $Lb["\155\157\x64\x75\154\x75\163"]->copy();
                        goto xi;
                    case isset($Lb[1]):
                        $uH["\x6d\157\x64\x75\154\x75\x73"] = $Lb[1]->copy();
                }
                Om:
                xi:
                return isset($uH["\x6d\x6f\x64\165\154\x75\163"]) && isset($uH["\160\x75\142\154\151\x63\x45\x78\x70\157\x6e\x65\x6e\x74"]) ? $uH : false;
            case CRYPT_RSA_PRIVATE_FORMAT_PKCS1:
            case CRYPT_RSA_PRIVATE_FORMAT_PKCS8:
            case CRYPT_RSA_PUBLIC_FORMAT_PKCS1:
                if (preg_match("\x23\x44\105\x4b\x2d\x49\156\x66\157\72\x20\50\56\53\51\54\x28\x2e\53\x29\x23", $Lb, $GY)) {
                    goto oY;
                }
                $KH = $this->_extractBER($Lb);
                goto i0;
                oY:
                $Vg = pack("\110\52", trim($GY[2]));
                $TQ = pack("\110\52", md5($this->password . substr($Vg, 0, 8)));
                $TQ .= pack("\110\52", md5($TQ . $this->password . substr($Vg, 0, 8)));
                $Lb = preg_replace("\x23\x5e\50\77\72\120\162\157\x63\55\x54\x79\x70\x65\174\104\105\113\55\111\156\x66\x6f\x29\72\40\56\x2a\x23\155", '', $Lb);
                $bh = $this->_extractBER($Lb);
                if (!($bh === false)) {
                    goto Qc;
                }
                $bh = $Lb;
                Qc:
                switch ($GY[1]) {
                    case "\x41\105\x53\55\62\65\66\x2d\103\x42\103":
                        if (class_exists("\103\162\x79\x70\x74\x5f\x41\x45\123")) {
                            goto RW;
                        }
                        include_once "\103\162\171\160\x74\57\101\x45\x53\56\160\150\x70";
                        RW:
                        $Te = new Crypt_AES();
                        goto tf;
                    case "\x41\x45\x53\55\61\62\x38\x2d\103\x42\103":
                        if (class_exists("\103\162\171\160\x74\x5f\x41\x45\x53")) {
                            goto E6;
                        }
                        include_once "\103\x72\x79\x70\164\x2f\x41\x45\x53\56\160\150\x70";
                        E6:
                        $TQ = substr($TQ, 0, 16);
                        $Te = new Crypt_AES();
                        goto tf;
                    case "\104\x45\x53\x2d\105\x44\x45\63\55\103\106\x42":
                        if (class_exists("\103\x72\x79\x70\164\x5f\x54\x72\x69\x70\154\x65\104\x45\x53")) {
                            goto vd;
                        }
                        include_once "\103\x72\x79\x70\164\x2f\124\x72\151\160\154\x65\104\x45\x53\x2e\x70\x68\160";
                        vd:
                        $Te = new Crypt_TripleDES(CRYPT_DES_MODE_CFB);
                        goto tf;
                    case "\104\105\x53\55\x45\104\105\63\55\x43\x42\103":
                        if (class_exists("\103\x72\171\x70\x74\x5f\x54\162\151\x70\154\145\x44\105\x53")) {
                            goto uI;
                        }
                        include_once "\103\162\171\160\164\x2f\x54\x72\x69\160\x6c\145\x44\x45\123\x2e\160\x68\x70";
                        uI:
                        $TQ = substr($TQ, 0, 24);
                        $Te = new Crypt_TripleDES();
                        goto tf;
                    case "\104\x45\x53\55\x43\102\103":
                        if (class_exists("\103\x72\171\x70\x74\x5f\104\105\123")) {
                            goto DN;
                        }
                        include_once "\x43\x72\171\160\x74\57\104\x45\x53\56\160\x68\x70";
                        DN:
                        $Te = new Crypt_DES();
                        goto tf;
                    default:
                        return false;
                }
                Pf:
                tf:
                $Te->setKey($TQ);
                $Te->setIV($Vg);
                $KH = $Te->decrypt($bh);
                i0:
                if (!($KH !== false)) {
                    goto G4;
                }
                $Lb = $KH;
                G4:
                $uH = array();
                if (!(ord($this->_string_shift($Lb)) != CRYPT_RSA_ASN1_SEQUENCE)) {
                    goto vE;
                }
                return false;
                vE:
                if (!($this->_decodeLength($Lb) != strlen($Lb))) {
                    goto Y1;
                }
                return false;
                Y1:
                $EV = ord($this->_string_shift($Lb));
                if (!($EV == CRYPT_RSA_ASN1_INTEGER && substr($Lb, 0, 3) == "\1\x0\60")) {
                    goto nr;
                }
                $this->_string_shift($Lb, 3);
                $EV = CRYPT_RSA_ASN1_SEQUENCE;
                nr:
                if (!($EV == CRYPT_RSA_ASN1_SEQUENCE)) {
                    goto aL;
                }
                $yi = $this->_string_shift($Lb, $this->_decodeLength($Lb));
                if (!(ord($this->_string_shift($yi)) != CRYPT_RSA_ASN1_OBJECT)) {
                    goto PV;
                }
                return false;
                PV:
                $ib = $this->_decodeLength($yi);
                switch ($this->_string_shift($yi, $ib)) {
                    case "\x2a\x86\110\x86\xf7\xd\1\1\1":
                        goto Zb;
                    case "\x2a\206\x48\x86\367\xd\1\x5\x3":
                        if (!(ord($this->_string_shift($yi)) != CRYPT_RSA_ASN1_SEQUENCE)) {
                            goto ZZ;
                        }
                        return false;
                        ZZ:
                        if (!($this->_decodeLength($yi) != strlen($yi))) {
                            goto iq;
                        }
                        return false;
                        iq:
                        $this->_string_shift($yi);
                        $FH = $this->_string_shift($yi, $this->_decodeLength($yi));
                        if (!(ord($this->_string_shift($yi)) != CRYPT_RSA_ASN1_INTEGER)) {
                            goto Hw;
                        }
                        return false;
                        Hw:
                        $this->_decodeLength($yi);
                        list(, $Z5) = unpack("\116", str_pad($yi, 4, chr(0), STR_PAD_LEFT));
                        $this->_string_shift($Lb);
                        $ib = $this->_decodeLength($Lb);
                        if (!(strlen($Lb) != $ib)) {
                            goto iw;
                        }
                        return false;
                        iw:
                        if (class_exists("\x43\162\171\160\164\x5f\104\x45\123")) {
                            goto P3;
                        }
                        include_once "\103\162\171\160\164\x2f\x44\x45\x53\x2e\x70\150\160";
                        P3:
                        $Te = new Crypt_DES();
                        $Te->setPassword($this->password, "\160\142\x6b\144\x66\61", "\x6d\x64\65", $FH, $Z5);
                        $Lb = $Te->decrypt($Lb);
                        if (!($Lb === false)) {
                            goto BV;
                        }
                        return false;
                        BV:
                        return $this->_parseKey($Lb, CRYPT_RSA_PRIVATE_FORMAT_PKCS1);
                    default:
                        return false;
                }
                gU:
                Zb:
                $EV = ord($this->_string_shift($Lb));
                $this->_decodeLength($Lb);
                if (!($EV == CRYPT_RSA_ASN1_BITSTRING)) {
                    goto pq;
                }
                $this->_string_shift($Lb);
                pq:
                if (!(ord($this->_string_shift($Lb)) != CRYPT_RSA_ASN1_SEQUENCE)) {
                    goto Zf;
                }
                return false;
                Zf:
                if (!($this->_decodeLength($Lb) != strlen($Lb))) {
                    goto xS;
                }
                return false;
                xS:
                $EV = ord($this->_string_shift($Lb));
                aL:
                if (!($EV != CRYPT_RSA_ASN1_INTEGER)) {
                    goto lp;
                }
                return false;
                lp:
                $ib = $this->_decodeLength($Lb);
                $yi = $this->_string_shift($Lb, $ib);
                if (!(strlen($yi) != 1 || ord($yi) > 2)) {
                    goto JP;
                }
                $uH["\x6d\157\144\x75\154\165\163"] = new Math_BigInteger($yi, 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH[$m0 == CRYPT_RSA_PUBLIC_FORMAT_PKCS1 ? "\x70\165\142\154\x69\x63\x45\x78\160\x6f\x6e\x65\x6e\x74" : "\x70\x72\x69\x76\x61\164\x65\x45\170\160\x6f\x6e\x65\x6e\164"] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                return $uH;
                JP:
                if (!(ord($this->_string_shift($Lb)) != CRYPT_RSA_ASN1_INTEGER)) {
                    goto u2;
                }
                return false;
                u2:
                $ib = $this->_decodeLength($Lb);
                $uH["\x6d\x6f\144\165\154\x75\x73"] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\160\165\142\154\151\x63\x45\170\160\x6f\156\145\156\x74"] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\160\x72\x69\166\x61\164\x65\105\x78\160\157\x6e\x65\156\164"] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\160\162\x69\x6d\145\163"] = array(1 => new Math_BigInteger($this->_string_shift($Lb, $ib), 256));
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\x70\x72\151\x6d\x65\163"][] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\x65\170\x70\157\156\145\x6e\x74\x73"] = array(1 => new Math_BigInteger($this->_string_shift($Lb, $ib), 256));
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\x65\170\160\157\156\145\156\164\x73"][] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\x63\157\145\x66\x66\x69\x63\x69\x65\x6e\164\x73"] = array(2 => new Math_BigInteger($this->_string_shift($Lb, $ib), 256));
                if (empty($Lb)) {
                    goto bH;
                }
                if (!(ord($this->_string_shift($Lb)) != CRYPT_RSA_ASN1_SEQUENCE)) {
                    goto Wq;
                }
                return false;
                Wq:
                $this->_decodeLength($Lb);
                D6:
                if (empty($Lb)) {
                    goto IG;
                }
                if (!(ord($this->_string_shift($Lb)) != CRYPT_RSA_ASN1_SEQUENCE)) {
                    goto UL;
                }
                return false;
                UL:
                $this->_decodeLength($Lb);
                $Lb = substr($Lb, 1);
                $ib = $this->_decodeLength($Lb);
                $uH["\160\x72\x69\155\x65\163"][] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\x65\170\160\x6f\x6e\145\x6e\164\x73"][] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                $this->_string_shift($Lb);
                $ib = $this->_decodeLength($Lb);
                $uH["\x63\x6f\145\146\146\x69\143\x69\x65\156\164\163"][] = new Math_BigInteger($this->_string_shift($Lb, $ib), 256);
                goto D6;
                IG:
                bH:
                return $uH;
            case CRYPT_RSA_PUBLIC_FORMAT_OPENSSH:
                $ea = explode("\x20", $Lb, 3);
                $Lb = isset($ea[1]) ? base64_decode($ea[1]) : false;
                if (!($Lb === false)) {
                    goto Pr;
                }
                return false;
                Pr:
                $he = isset($ea[2]) ? $ea[2] : false;
                $hQ = substr($Lb, 0, 11) == "\0\0\x0\7\x73\x73\x68\55\x72\x73\141";
                if (!(strlen($Lb) <= 4)) {
                    goto Is;
                }
                return false;
                Is:
                extract(unpack("\116\154\x65\x6e\x67\164\x68", $this->_string_shift($Lb, 4)));
                $qN = new Math_BigInteger($this->_string_shift($Lb, $ib), -256);
                if (!(strlen($Lb) <= 4)) {
                    goto hb;
                }
                return false;
                hb:
                extract(unpack("\x4e\x6c\x65\x6e\147\x74\150", $this->_string_shift($Lb, 4)));
                $l2 = new Math_BigInteger($this->_string_shift($Lb, $ib), -256);
                if ($hQ && strlen($Lb)) {
                    goto Qu;
                }
                return strlen($Lb) ? false : array("\155\157\x64\x75\154\165\x73" => $l2, "\x70\x75\142\x6c\151\143\x45\x78\160\x6f\x6e\145\x6e\x74" => $qN, "\x63\157\155\155\x65\156\164" => $he);
                goto v0;
                Qu:
                if (!(strlen($Lb) <= 4)) {
                    goto Eg;
                }
                return false;
                Eg:
                extract(unpack("\116\x6c\x65\156\147\164\150", $this->_string_shift($Lb, 4)));
                $I6 = new Math_BigInteger($this->_string_shift($Lb, $ib), -256);
                return strlen($Lb) ? false : array("\x6d\x6f\144\165\154\165\163" => $I6, "\x70\165\142\x6c\x69\143\x45\170\160\x6f\156\145\156\164" => $l2, "\x63\157\155\155\145\156\x74" => $he);
                v0:
            case CRYPT_RSA_PRIVATE_FORMAT_XML:
            case CRYPT_RSA_PUBLIC_FORMAT_XML:
                $this->components = array();
                $Gd = xml_parser_create("\x55\124\106\55\70");
                xml_set_object($Gd, $this);
                xml_set_element_handler($Gd, "\137\163\x74\x61\x72\x74\x5f\x65\154\x65\155\x65\x6e\164\x5f\x68\141\156\x64\x6c\x65\x72", "\137\163\x74\157\160\137\145\154\x65\x6d\145\156\x74\137\150\141\x6e\x64\x6c\x65\162");
                xml_set_character_data_handler($Gd, "\137\x64\141\164\x61\137\x68\x61\156\144\x6c\145\x72");
                if (xml_parse($Gd, "\x3c\170\x6d\x6c\x3e" . $Lb . "\x3c\x2f\x78\x6d\x6c\x3e")) {
                    goto W5;
                }
                return false;
                W5:
                return isset($this->components["\x6d\157\144\x75\x6c\165\163"]) && isset($this->components["\160\165\142\154\x69\x63\x45\x78\x70\157\x6e\x65\156\164"]) ? $this->components : false;
            case CRYPT_RSA_PRIVATE_FORMAT_PUTTY:
                $uH = array();
                $Lb = preg_split("\43\x5c\162\134\156\x7c\134\x72\174\134\x6e\x23", $Lb);
                $m0 = trim(preg_replace("\43\120\165\124\x54\x59\55\125\x73\145\x72\x2d\x4b\x65\x79\55\106\151\x6c\145\x2d\62\72\x20\50\x2e\53\51\x23", "\x24\61", $Lb[0]));
                if (!($m0 != "\163\163\x68\55\162\163\141")) {
                    goto VR;
                }
                return false;
                VR:
                $nk = trim(preg_replace("\43\x45\156\143\162\x79\x70\x74\x69\x6f\156\72\40\50\56\53\51\43", "\x24\61", $Lb[1]));
                $he = trim(preg_replace("\43\103\157\x6d\x6d\145\156\x74\72\40\50\x2e\x2b\x29\43", "\x24\61", $Lb[2]));
                $K6 = trim(preg_replace("\43\120\x75\142\154\151\143\55\114\151\x6e\145\163\72\x20\x28\x5c\x64\53\x29\43", "\x24\61", $Lb[3]));
                $w4 = base64_decode(implode('', array_map("\x74\x72\x69\155", array_slice($Lb, 4, $K6))));
                $w4 = substr($w4, 11);
                extract(unpack("\116\x6c\145\x6e\x67\164\x68", $this->_string_shift($w4, 4)));
                $uH["\160\165\142\x6c\151\x63\105\x78\x70\157\x6e\x65\156\x74"] = new Math_BigInteger($this->_string_shift($w4, $ib), -256);
                extract(unpack("\116\154\x65\x6e\147\x74\150", $this->_string_shift($w4, 4)));
                $uH["\x6d\157\x64\165\154\165\163"] = new Math_BigInteger($this->_string_shift($w4, $ib), -256);
                $Dh = trim(preg_replace("\x23\120\x72\151\166\x61\x74\145\x2d\x4c\x69\x6e\x65\163\x3a\40\x28\x5c\x64\x2b\51\x23", "\x24\x31", $Lb[$K6 + 4]));
                $Gn = base64_decode(implode('', array_map("\x74\162\x69\155", array_slice($Lb, $K6 + 5, $Dh))));
                switch ($nk) {
                    case "\141\x65\163\62\x35\x36\55\143\142\x63":
                        if (class_exists("\103\162\x79\160\x74\x5f\x41\105\123")) {
                            goto Nf;
                        }
                        include_once "\103\x72\x79\160\x74\x2f\x41\105\123\56\x70\150\160";
                        Nf:
                        $TQ = '';
                        $jA = 0;
                        Hq:
                        if (!(strlen($TQ) < 32)) {
                            goto UX;
                        }
                        $yi = pack("\x4e\x61\52", $jA++, $this->password);
                        $TQ .= pack("\110\52", sha1($yi));
                        goto Hq;
                        UX:
                        $TQ = substr($TQ, 0, 32);
                        $Te = new Crypt_AES();
                }
                y1:
                GC:
                if (!($nk != "\x6e\157\156\145")) {
                    goto cJ;
                }
                $Te->setKey($TQ);
                $Te->disablePadding();
                $Gn = $Te->decrypt($Gn);
                if (!($Gn === false)) {
                    goto ea;
                }
                return false;
                ea:
                cJ:
                extract(unpack("\x4e\154\x65\x6e\147\x74\x68", $this->_string_shift($Gn, 4)));
                if (!(strlen($Gn) < $ib)) {
                    goto uy;
                }
                return false;
                uy:
                $uH["\160\162\x69\166\x61\164\x65\105\x78\x70\157\x6e\145\156\164"] = new Math_BigInteger($this->_string_shift($Gn, $ib), -256);
                extract(unpack("\116\x6c\145\x6e\x67\x74\x68", $this->_string_shift($Gn, 4)));
                if (!(strlen($Gn) < $ib)) {
                    goto H5;
                }
                return false;
                H5:
                $uH["\x70\x72\151\x6d\x65\x73"] = array(1 => new Math_BigInteger($this->_string_shift($Gn, $ib), -256));
                extract(unpack("\x4e\x6c\145\156\147\164\150", $this->_string_shift($Gn, 4)));
                if (!(strlen($Gn) < $ib)) {
                    goto Df;
                }
                return false;
                Df:
                $uH["\x70\162\151\155\145\x73"][] = new Math_BigInteger($this->_string_shift($Gn, $ib), -256);
                $yi = $uH["\160\x72\151\x6d\x65\x73"][1]->subtract($this->one);
                $uH["\x65\170\160\157\x6e\x65\x6e\164\x73"] = array(1 => $uH["\x70\x75\x62\x6c\151\x63\x45\x78\160\157\156\145\156\164"]->modInverse($yi));
                $yi = $uH["\160\x72\151\x6d\x65\x73"][2]->subtract($this->one);
                $uH["\145\x78\x70\157\156\x65\156\x74\x73"][] = $uH["\160\165\x62\x6c\x69\143\105\170\x70\157\156\x65\156\164"]->modInverse($yi);
                extract(unpack("\116\x6c\145\156\x67\x74\150", $this->_string_shift($Gn, 4)));
                if (!(strlen($Gn) < $ib)) {
                    goto FT;
                }
                return false;
                FT:
                $uH["\x63\x6f\x65\x66\146\x69\x63\x69\x65\x6e\164\163"] = array(2 => new Math_BigInteger($this->_string_shift($Gn, $ib), -256));
                return $uH;
        }
        YO:
        c6:
    }
    function getSize()
    {
        return !isset($this->modulus) ? 0 : strlen($this->modulus->toBits());
    }
    function _start_element_handler($TV, $sA, $MI)
    {
        switch ($sA) {
            case "\115\117\104\125\x4c\125\x53":
                $this->current =& $this->components["\155\157\144\165\x6c\165\163"];
                goto YQ;
            case "\105\x58\120\x4f\116\105\x4e\124":
                $this->current =& $this->components["\x70\x75\142\x6c\x69\x63\105\170\160\157\x6e\145\156\x74"];
                goto YQ;
            case "\x50":
                $this->current =& $this->components["\x70\x72\151\x6d\145\163"][1];
                goto YQ;
            case "\121":
                $this->current =& $this->components["\160\162\x69\155\x65\163"][2];
                goto YQ;
            case "\x44\120":
                $this->current =& $this->components["\x65\x78\x70\x6f\156\145\156\x74\x73"][1];
                goto YQ;
            case "\x44\121":
                $this->current =& $this->components["\x65\x78\x70\x6f\x6e\x65\156\x74\x73"][2];
                goto YQ;
            case "\111\x4e\126\x45\122\123\105\x51":
                $this->current =& $this->components["\x63\157\145\x66\146\151\143\x69\x65\156\x74\163"][2];
                goto YQ;
            case "\104":
                $this->current =& $this->components["\160\x72\x69\x76\141\x74\x65\105\170\160\x6f\156\145\x6e\x74"];
        }
        Pn:
        YQ:
        $this->current = '';
    }
    function _stop_element_handler($TV, $sA)
    {
        if (!isset($this->current)) {
            goto h0;
        }
        $this->current = new Math_BigInteger(base64_decode($this->current), 256);
        unset($this->current);
        h0:
    }
    function _data_handler($TV, $Z_)
    {
        if (!(!isset($this->current) || is_object($this->current))) {
            goto jH;
        }
        return;
        jH:
        $this->current .= trim($Z_);
    }
    function loadKey($Lb, $m0 = false)
    {
        if (!(is_object($Lb) && strtolower(get_class($Lb)) == "\x63\x72\x79\160\x74\x5f\162\163\141")) {
            goto rD;
        }
        $this->privateKeyFormat = $Lb->privateKeyFormat;
        $this->publicKeyFormat = $Lb->publicKeyFormat;
        $this->k = $Lb->k;
        $this->hLen = $Lb->hLen;
        $this->sLen = $Lb->sLen;
        $this->mgfHLen = $Lb->mgfHLen;
        $this->encryptionMode = $Lb->encryptionMode;
        $this->signatureMode = $Lb->signatureMode;
        $this->password = $Lb->password;
        $this->configFile = $Lb->configFile;
        $this->comment = $Lb->comment;
        if (!is_object($Lb->hash)) {
            goto GE;
        }
        $this->hash = new Crypt_Hash($Lb->hash->getHash());
        GE:
        if (!is_object($Lb->mgfHash)) {
            goto ie;
        }
        $this->mgfHash = new Crypt_Hash($Lb->mgfHash->getHash());
        ie:
        if (!is_object($Lb->modulus)) {
            goto kw;
        }
        $this->modulus = $Lb->modulus->copy();
        kw:
        if (!is_object($Lb->exponent)) {
            goto F2;
        }
        $this->exponent = $Lb->exponent->copy();
        F2:
        if (!is_object($Lb->publicExponent)) {
            goto Tz;
        }
        $this->publicExponent = $Lb->publicExponent->copy();
        Tz:
        $this->primes = array();
        $this->exponents = array();
        $this->coefficients = array();
        foreach ($this->primes as $pc) {
            $this->primes[] = $pc->copy();
            XX:
        }
        sx:
        foreach ($this->exponents as $xs) {
            $this->exponents[] = $xs->copy();
            jS:
        }
        Sv:
        foreach ($this->coefficients as $rQ) {
            $this->coefficients[] = $rQ->copy();
            Cs:
        }
        Dq:
        return true;
        rD:
        if ($m0 === false) {
            goto Hd;
        }
        $uH = $this->_parseKey($Lb, $m0);
        goto Y0;
        Hd:
        $Vn = array(CRYPT_RSA_PUBLIC_FORMAT_RAW, CRYPT_RSA_PRIVATE_FORMAT_PKCS1, CRYPT_RSA_PRIVATE_FORMAT_XML, CRYPT_RSA_PRIVATE_FORMAT_PUTTY, CRYPT_RSA_PUBLIC_FORMAT_OPENSSH);
        foreach ($Vn as $m0) {
            $uH = $this->_parseKey($Lb, $m0);
            if (!($uH !== false)) {
                goto Na;
            }
            goto Qh;
            Na:
            u0:
        }
        Qh:
        Y0:
        if (!($uH === false)) {
            goto Fg;
        }
        $this->comment = null;
        $this->modulus = null;
        $this->k = null;
        $this->exponent = null;
        $this->primes = null;
        $this->exponents = null;
        $this->coefficients = null;
        $this->publicExponent = null;
        return false;
        Fg:
        if (!(isset($uH["\143\x6f\x6d\155\145\156\x74"]) && $uH["\x63\157\155\155\145\x6e\164"] !== false)) {
            goto ug;
        }
        $this->comment = $uH["\143\157\155\155\145\x6e\x74"];
        ug:
        $this->modulus = $uH["\155\157\x64\x75\154\x75\163"];
        $this->k = strlen($this->modulus->toBytes());
        $this->exponent = isset($uH["\160\162\x69\x76\141\164\145\105\x78\160\x6f\156\x65\x6e\x74"]) ? $uH["\x70\x72\151\166\141\x74\x65\105\x78\x70\x6f\x6e\x65\156\x74"] : $uH["\x70\165\x62\154\151\x63\105\170\160\157\x6e\x65\156\x74"];
        if (isset($uH["\x70\162\x69\x6d\x65\x73"])) {
            goto Ed;
        }
        $this->primes = array();
        $this->exponents = array();
        $this->coefficients = array();
        $this->publicExponent = false;
        goto HD;
        Ed:
        $this->primes = $uH["\x70\x72\151\155\145\163"];
        $this->exponents = $uH["\x65\170\x70\157\156\145\156\x74\x73"];
        $this->coefficients = $uH["\143\157\x65\146\146\x69\143\151\x65\156\x74\x73"];
        $this->publicExponent = $uH["\x70\165\x62\154\151\143\x45\170\x70\157\x6e\145\156\x74"];
        HD:
        switch ($m0) {
            case CRYPT_RSA_PUBLIC_FORMAT_OPENSSH:
            case CRYPT_RSA_PUBLIC_FORMAT_RAW:
                $this->setPublicKey();
                goto wY;
            case CRYPT_RSA_PRIVATE_FORMAT_PKCS1:
                switch (true) {
                    case strpos($Lb, "\55\102\x45\107\111\116\40\x50\x55\x42\x4c\111\103\x20\x4b\105\x59\x2d") !== false:
                    case strpos($Lb, "\x2d\102\105\x47\111\116\40\122\123\101\40\120\125\102\114\x49\103\40\x4b\x45\x59\x2d") !== false:
                        $this->setPublicKey();
                }
                OW:
                Mr:
        }
        jk:
        wY:
        return true;
    }
    function setPassword($S0 = false)
    {
        $this->password = $S0;
    }
    function setPublicKey($Lb = false, $m0 = false)
    {
        if (empty($this->publicExponent)) {
            goto jG;
        }
        return false;
        jG:
        if (!($Lb === false && !empty($this->modulus))) {
            goto Qi;
        }
        $this->publicExponent = $this->exponent;
        return true;
        Qi:
        if ($m0 === false) {
            goto n3;
        }
        $uH = $this->_parseKey($Lb, $m0);
        goto mf;
        n3:
        $Vn = array(CRYPT_RSA_PUBLIC_FORMAT_RAW, CRYPT_RSA_PUBLIC_FORMAT_PKCS1, CRYPT_RSA_PUBLIC_FORMAT_XML, CRYPT_RSA_PUBLIC_FORMAT_OPENSSH);
        foreach ($Vn as $m0) {
            $uH = $this->_parseKey($Lb, $m0);
            if (!($uH !== false)) {
                goto SQ;
            }
            goto Nz;
            SQ:
            Tr:
        }
        Nz:
        mf:
        if (!($uH === false)) {
            goto QQ;
        }
        return false;
        QQ:
        if (!(empty($this->modulus) || !$this->modulus->equals($uH["\155\x6f\x64\x75\154\165\163"]))) {
            goto YX;
        }
        $this->modulus = $uH["\155\x6f\144\165\x6c\165\x73"];
        $this->exponent = $this->publicExponent = $uH["\160\x75\x62\x6c\x69\x63\x45\x78\x70\x6f\x6e\145\156\x74"];
        return true;
        YX:
        $this->publicExponent = $uH["\160\165\142\154\151\143\105\x78\160\x6f\156\145\156\x74"];
        return true;
    }
    function setPrivateKey($Lb = false, $m0 = false)
    {
        if (!($Lb === false && !empty($this->publicExponent))) {
            goto NU;
        }
        $this->publicExponent = false;
        return true;
        NU:
        $kZ = new Crypt_RSA();
        if ($kZ->loadKey($Lb, $m0)) {
            goto zT;
        }
        return false;
        zT:
        $kZ->publicExponent = false;
        $this->loadKey($kZ);
        return true;
    }
    function getPublicKey($m0 = CRYPT_RSA_PUBLIC_FORMAT_PKCS8)
    {
        if (!(empty($this->modulus) || empty($this->publicExponent))) {
            goto y2;
        }
        return false;
        y2:
        $tP = $this->publicKeyFormat;
        $this->publicKeyFormat = $m0;
        $yi = $this->_convertPublicKey($this->modulus, $this->publicExponent);
        $this->publicKeyFormat = $tP;
        return $yi;
    }
    function getPublicKeyFingerprint($gl = "\155\x64\65")
    {
        if (!(empty($this->modulus) || empty($this->publicExponent))) {
            goto hO;
        }
        return false;
        hO:
        $l2 = $this->modulus->toBytes(true);
        $qN = $this->publicExponent->toBytes(true);
        $O3 = pack("\x4e\x61\x2a\116\x61\52\x4e\141\x2a", strlen("\163\163\150\x2d\x72\x73\141"), "\x73\163\150\55\x72\x73\141", strlen($qN), $qN, strlen($l2), $l2);
        switch ($gl) {
            case "\163\150\141\x32\x35\x36":
                $Os = new Crypt_Hash("\163\150\x61\x32\x35\x36");
                $mI = base64_encode($Os->hash($O3));
                return substr($mI, 0, strlen($mI) - 1);
            case "\x6d\144\65":
                return substr(chunk_split(md5($O3), 2, "\x3a"), 0, -1);
            default:
                return false;
        }
        to:
        SR:
    }
    function getPrivateKey($m0 = CRYPT_RSA_PUBLIC_FORMAT_PKCS1)
    {
        if (!empty($this->primes)) {
            goto xV;
        }
        return false;
        xV:
        $tP = $this->privateKeyFormat;
        $this->privateKeyFormat = $m0;
        $yi = $this->_convertPrivateKey($this->modulus, $this->publicExponent, $this->exponent, $this->primes, $this->exponents, $this->coefficients);
        $this->privateKeyFormat = $tP;
        return $yi;
    }
    function _getPrivatePublicKey($U8 = CRYPT_RSA_PUBLIC_FORMAT_PKCS8)
    {
        if (!(empty($this->modulus) || empty($this->exponent))) {
            goto eR;
        }
        return false;
        eR:
        $tP = $this->publicKeyFormat;
        $this->publicKeyFormat = $U8;
        $yi = $this->_convertPublicKey($this->modulus, $this->exponent);
        $this->publicKeyFormat = $tP;
        return $yi;
    }
    function __toString()
    {
        $Lb = $this->getPrivateKey($this->privateKeyFormat);
        if (!($Lb !== false)) {
            goto Ug;
        }
        return $Lb;
        Ug:
        $Lb = $this->_getPrivatePublicKey($this->publicKeyFormat);
        return $Lb !== false ? $Lb : '';
    }
    function __clone()
    {
        $Lb = new Crypt_RSA();
        $Lb->loadKey($this);
        return $Lb;
    }
    function _generateMinMax($mo)
    {
        $E2 = $mo >> 3;
        $M8 = str_repeat(chr(0), $E2);
        $iQ = str_repeat(chr(0xff), $E2);
        $VG = $mo & 7;
        if ($VG) {
            goto PA;
        }
        $M8[0] = chr(0x80);
        goto vV;
        PA:
        $M8 = chr(1 << $VG - 1) . $M8;
        $iQ = chr((1 << $VG) - 1) . $iQ;
        vV:
        return array("\155\151\156" => new Math_BigInteger($M8, 256), "\155\x61\170" => new Math_BigInteger($iQ, 256));
    }
    function _decodeLength(&$vy)
    {
        $ib = ord($this->_string_shift($vy));
        if (!($ib & 0x80)) {
            goto oa;
        }
        $ib &= 0x7f;
        $yi = $this->_string_shift($vy, $ib);
        list(, $ib) = unpack("\x4e", substr(str_pad($yi, 4, chr(0), STR_PAD_LEFT), -4));
        oa:
        return $ib;
    }
    function _encodeLength($ib)
    {
        if (!($ib <= 0x7f)) {
            goto bj;
        }
        return chr($ib);
        bj:
        $yi = ltrim(pack("\116", $ib), chr(0));
        return pack("\x43\141\x2a", 0x80 | strlen($yi), $yi);
    }
    function _string_shift(&$vy, $J0 = 1)
    {
        $Hb = substr($vy, 0, $J0);
        $vy = substr($vy, $J0);
        return $Hb;
    }
    function setPrivateKeyFormat($ie)
    {
        $this->privateKeyFormat = $ie;
    }
    function setPublicKeyFormat($ie)
    {
        $this->publicKeyFormat = $ie;
    }
    function setHash($Os)
    {
        switch ($Os) {
            case "\155\144\x32":
            case "\155\x64\x35":
            case "\x73\x68\x61\61":
            case "\x73\x68\141\x32\65\x36":
            case "\163\x68\141\63\x38\64":
            case "\x73\x68\x61\x35\x31\x32":
                $this->hash = new Crypt_Hash($Os);
                $this->hashName = $Os;
                goto Jl;
            default:
                $this->hash = new Crypt_Hash("\x73\150\x61\x31");
                $this->hashName = "\x73\x68\x61\x31";
        }
        BR:
        Jl:
        $this->hLen = $this->hash->getLength();
    }
    function setMGFHash($Os)
    {
        switch ($Os) {
            case "\x6d\144\x32":
            case "\155\x64\x35":
            case "\x73\150\x61\x31":
            case "\x73\x68\141\x32\x35\66":
            case "\x73\x68\x61\x33\x38\64":
            case "\x73\x68\x61\x35\x31\62":
                $this->mgfHash = new Crypt_Hash($Os);
                goto uF;
            default:
                $this->mgfHash = new Crypt_Hash("\163\150\141\x31");
        }
        gt:
        uF:
        $this->mgfHLen = $this->mgfHash->getLength();
    }
    function setSaltLength($kj)
    {
        $this->sLen = $kj;
    }
    function _i2osp($FX, $j5)
    {
        $FX = $FX->toBytes();
        if (!(strlen($FX) > $j5)) {
            goto Vc;
        }
        user_error("\111\x6e\164\x65\x67\x65\x72\40\x74\157\x6f\40\x6c\141\162\147\145");
        return false;
        Vc:
        return str_pad($FX, $j5, chr(0), STR_PAD_LEFT);
    }
    function _os2ip($FX)
    {
        return new Math_BigInteger($FX, 256);
    }
    function _exponentiate($FX)
    {
        switch (true) {
            case empty($this->primes):
            case $this->primes[1]->equals($this->zero):
            case empty($this->coefficients):
            case $this->coefficients[2]->equals($this->zero):
            case empty($this->exponents):
            case $this->exponents[1]->equals($this->zero):
                return $FX->modPow($this->exponent, $this->modulus);
        }
        K5:
        bh:
        $oX = count($this->primes);
        if (defined("\x43\x52\x59\120\x54\x5f\x52\123\101\137\x44\111\x53\x41\102\114\105\137\x42\x4c\111\116\104\x49\116\x47")) {
            goto Bh;
        }
        $R_ = $this->primes[1];
        $lI = 2;
        E8:
        if (!($lI <= $oX)) {
            goto De;
        }
        if (!($R_->compare($this->primes[$lI]) > 0)) {
            goto Mo;
        }
        $R_ = $this->primes[$lI];
        Mo:
        Yo:
        $lI++;
        goto E8;
        De:
        $nB = new Math_BigInteger(1);
        $sK = $nB->random($nB, $R_->subtract($nB));
        $an = array(1 => $this->_blind($FX, $sK, 1), 2 => $this->_blind($FX, $sK, 2));
        $Zc = $an[1]->subtract($an[2]);
        $Zc = $Zc->multiply($this->coefficients[2]);
        list(, $Zc) = $Zc->divide($this->primes[1]);
        $jz = $an[2]->add($Zc->multiply($this->primes[2]));
        $sK = $this->primes[1];
        $lI = 3;
        DL:
        if (!($lI <= $oX)) {
            goto OV;
        }
        $an = $this->_blind($FX, $sK, $lI);
        $sK = $sK->multiply($this->primes[$lI - 1]);
        $Zc = $an->subtract($jz);
        $Zc = $Zc->multiply($this->coefficients[$lI]);
        list(, $Zc) = $Zc->divide($this->primes[$lI]);
        $jz = $jz->add($sK->multiply($Zc));
        LH:
        $lI++;
        goto DL;
        OV:
        goto g3;
        Bh:
        $an = array(1 => $FX->modPow($this->exponents[1], $this->primes[1]), 2 => $FX->modPow($this->exponents[2], $this->primes[2]));
        $Zc = $an[1]->subtract($an[2]);
        $Zc = $Zc->multiply($this->coefficients[2]);
        list(, $Zc) = $Zc->divide($this->primes[1]);
        $jz = $an[2]->add($Zc->multiply($this->primes[2]));
        $sK = $this->primes[1];
        $lI = 3;
        UH:
        if (!($lI <= $oX)) {
            goto Nx;
        }
        $an = $FX->modPow($this->exponents[$lI], $this->primes[$lI]);
        $sK = $sK->multiply($this->primes[$lI - 1]);
        $Zc = $an->subtract($jz);
        $Zc = $Zc->multiply($this->coefficients[$lI]);
        list(, $Zc) = $Zc->divide($this->primes[$lI]);
        $jz = $jz->add($sK->multiply($Zc));
        Hs:
        $lI++;
        goto UH;
        Nx:
        g3:
        return $jz;
    }
    function _blind($FX, $sK, $lI)
    {
        $FX = $FX->multiply($sK->modPow($this->publicExponent, $this->primes[$lI]));
        $FX = $FX->modPow($this->exponents[$lI], $this->primes[$lI]);
        $sK = $sK->modInverse($this->primes[$lI]);
        $FX = $FX->multiply($sK);
        list(, $FX) = $FX->divide($this->primes[$lI]);
        return $FX;
    }
    function _equals($FX, $zR)
    {
        if (!(strlen($FX) != strlen($zR))) {
            goto WW;
        }
        return false;
        WW:
        $jq = 0;
        $lI = 0;
        wm:
        if (!($lI < strlen($FX))) {
            goto g9;
        }
        $jq |= ord($FX[$lI]) ^ ord($zR[$lI]);
        eh:
        $lI++;
        goto wm;
        g9:
        return $jq == 0;
    }
    function _rsaep($jz)
    {
        if (!($jz->compare($this->zero) < 0 || $jz->compare($this->modulus) > 0)) {
            goto yQ;
        }
        user_error("\x4d\x65\163\163\x61\147\x65\x20\x72\145\160\162\x65\163\x65\x6e\164\141\164\151\166\145\x20\157\x75\x74\40\x6f\x66\40\162\141\x6e\x67\x65");
        return false;
        yQ:
        return $this->_exponentiate($jz);
    }
    function _rsadp($x8)
    {
        if (!($x8->compare($this->zero) < 0 || $x8->compare($this->modulus) > 0)) {
            goto yh;
        }
        user_error("\x43\151\160\x68\x65\x72\164\145\x78\164\x20\x72\145\160\x72\x65\163\x65\x6e\x74\x61\164\x69\166\x65\40\x6f\165\x74\x20\157\x66\40\x72\x61\x6e\x67\x65");
        return false;
        yh:
        return $this->_exponentiate($x8);
    }
    function _rsasp1($jz)
    {
        if (!($jz->compare($this->zero) < 0 || $jz->compare($this->modulus) > 0)) {
            goto rj;
        }
        user_error("\115\x65\163\163\x61\147\145\x20\162\145\x70\162\145\163\145\x6e\164\x61\164\151\166\x65\40\x6f\165\x74\x20\x6f\x66\x20\x72\141\x6e\x67\x65");
        return false;
        rj:
        return $this->_exponentiate($jz);
    }
    function _rsavp1($Db)
    {
        if (!($Db->compare($this->zero) < 0 || $Db->compare($this->modulus) > 0)) {
            goto kk;
        }
        user_error("\123\151\147\156\x61\164\x75\x72\x65\x20\162\145\x70\162\145\163\145\x6e\164\x61\x74\151\x76\145\x20\157\165\164\x20\x6f\146\40\x72\x61\156\147\x65");
        return false;
        kk:
        return $this->_exponentiate($Db);
    }
    function _mgf1($wY, $XL)
    {
        $uE = '';
        $ET = ceil($XL / $this->mgfHLen);
        $lI = 0;
        z6:
        if (!($lI < $ET)) {
            goto N5;
        }
        $x8 = pack("\x4e", $lI);
        $uE .= $this->mgfHash->hash($wY . $x8);
        Sk:
        $lI++;
        goto z6;
        N5:
        return substr($uE, 0, $XL);
    }
    function _rsaes_oaep_encrypt($jz, $S6 = '')
    {
        $Kx = strlen($jz);
        if (!($Kx > $this->k - 2 * $this->hLen - 2)) {
            goto cq;
        }
        user_error("\x4d\145\163\x73\141\x67\x65\40\x74\x6f\157\x20\154\157\156\x67");
        return false;
        cq:
        $J1 = $this->hash->hash($S6);
        $fY = str_repeat(chr(0), $this->k - $Kx - 2 * $this->hLen - 2);
        $jZ = $J1 . $fY . chr(1) . $jz;
        $hE = crypt_random_string($this->hLen);
        $lW = $this->_mgf1($hE, $this->k - $this->hLen - 1);
        $Ef = $jZ ^ $lW;
        $bn = $this->_mgf1($Ef, $this->hLen);
        $hL = $hE ^ $bn;
        $s4 = chr(0) . $hL . $Ef;
        $jz = $this->_os2ip($s4);
        $x8 = $this->_rsaep($jz);
        $x8 = $this->_i2osp($x8, $this->k);
        return $x8;
    }
    function _rsaes_oaep_decrypt($x8, $S6 = '')
    {
        if (!(strlen($x8) != $this->k || $this->k < 2 * $this->hLen + 2)) {
            goto tW;
        }
        user_error("\104\x65\143\x72\171\160\x74\151\157\x6e\40\x65\x72\x72\157\162");
        return false;
        tW:
        $x8 = $this->_os2ip($x8);
        $jz = $this->_rsadp($x8);
        if (!($jz === false)) {
            goto F9;
        }
        user_error("\104\145\x63\162\171\160\x74\151\x6f\x6e\x20\x65\162\x72\157\162");
        return false;
        F9:
        $s4 = $this->_i2osp($jz, $this->k);
        $J1 = $this->hash->hash($S6);
        $zR = ord($s4[0]);
        $hL = substr($s4, 1, $this->hLen);
        $Ef = substr($s4, $this->hLen + 1);
        $bn = $this->_mgf1($Ef, $this->hLen);
        $hE = $hL ^ $bn;
        $lW = $this->_mgf1($hE, $this->k - $this->hLen - 1);
        $jZ = $Ef ^ $lW;
        $y5 = substr($jZ, 0, $this->hLen);
        $jz = substr($jZ, $this->hLen);
        if ($this->_equals($J1, $y5)) {
            goto Dy;
        }
        user_error("\104\145\143\x72\x79\x70\164\151\157\156\40\145\162\162\x6f\x72");
        return false;
        Dy:
        $jz = ltrim($jz, chr(0));
        if (!(ord($jz[0]) != 1)) {
            goto Rh;
        }
        user_error("\104\145\x63\162\x79\x70\x74\x69\x6f\156\x20\x65\x72\162\x6f\x72");
        return false;
        Rh:
        return substr($jz, 1);
    }
    function _raw_encrypt($jz)
    {
        $yi = $this->_os2ip($jz);
        $yi = $this->_rsaep($yi);
        return $this->_i2osp($yi, $this->k);
    }
    function _rsaes_pkcs1_v1_5_encrypt($jz)
    {
        $Kx = strlen($jz);
        if (!($Kx > $this->k - 11)) {
            goto k3;
        }
        user_error("\115\145\163\163\141\x67\x65\x20\x74\157\x6f\x20\x6c\x6f\156\x67");
        return false;
        k3:
        $pO = $this->k - $Kx - 3;
        $fY = '';
        yE:
        if (!(strlen($fY) != $pO)) {
            goto E3;
        }
        $yi = crypt_random_string($pO - strlen($fY));
        $yi = str_replace("\0", '', $yi);
        $fY .= $yi;
        goto yE;
        E3:
        $m0 = 2;
        if (!(defined("\103\x52\x59\x50\124\x5f\122\123\x41\x5f\x50\x4b\x43\123\x31\x35\x5f\103\117\115\120\101\124") && (!isset($this->publicExponent) || $this->exponent !== $this->publicExponent))) {
            goto Sd;
        }
        $m0 = 1;
        $fY = str_repeat("\xff", $pO);
        Sd:
        $s4 = chr(0) . chr($m0) . $fY . chr(0) . $jz;
        $jz = $this->_os2ip($s4);
        $x8 = $this->_rsaep($jz);
        $x8 = $this->_i2osp($x8, $this->k);
        return $x8;
    }
    function _rsaes_pkcs1_v1_5_decrypt($x8)
    {
        if (!(strlen($x8) != $this->k)) {
            goto Yw;
        }
        user_error("\104\x65\x63\x72\171\x70\164\x69\x6f\x6e\40\145\x72\x72\x6f\162");
        return false;
        Yw:
        $x8 = $this->_os2ip($x8);
        $jz = $this->_rsadp($x8);
        if (!($jz === false)) {
            goto yV;
        }
        user_error("\104\145\x63\x72\171\160\164\x69\157\x6e\x20\145\162\x72\x6f\x72");
        return false;
        yV:
        $s4 = $this->_i2osp($jz, $this->k);
        if (!(ord($s4[0]) != 0 || ord($s4[1]) > 2)) {
            goto Ii;
        }
        user_error("\104\145\143\x72\x79\160\164\x69\x6f\156\x20\145\x72\x72\157\162");
        return false;
        Ii:
        $fY = substr($s4, 2, strpos($s4, chr(0), 2) - 2);
        $jz = substr($s4, strlen($fY) + 3);
        if (!(strlen($fY) < 8)) {
            goto F8;
        }
        user_error("\x44\x65\143\x72\171\x70\x74\151\x6f\x6e\x20\145\162\x72\157\x72");
        return false;
        F8:
        return $jz;
    }
    function _emsa_pss_encode($jz, $Jl)
    {
        $MG = $Jl + 1 >> 3;
        $kj = $this->sLen !== null ? $this->sLen : $this->hLen;
        $EX = $this->hash->hash($jz);
        if (!($MG < $this->hLen + $kj + 2)) {
            goto Xh;
        }
        user_error("\x45\156\x63\157\144\x69\156\147\40\x65\x72\162\157\162");
        return false;
        Xh:
        $FH = crypt_random_string($kj);
        $Gz = "\x0\0\0\0\0\x0\x0\0" . $EX . $FH;
        $Zc = $this->hash->hash($Gz);
        $fY = str_repeat(chr(0), $MG - $kj - $this->hLen - 2);
        $jZ = $fY . chr(1) . $FH;
        $lW = $this->_mgf1($Zc, $MG - $this->hLen - 1);
        $Ef = $jZ ^ $lW;
        $Ef[0] = ~chr(0xff << ($Jl & 7)) & $Ef[0];
        $s4 = $Ef . $Zc . chr(0xbc);
        return $s4;
    }
    function _emsa_pss_verify($jz, $s4, $Jl)
    {
        $MG = $Jl + 1 >> 3;
        $kj = $this->sLen !== null ? $this->sLen : $this->hLen;
        $EX = $this->hash->hash($jz);
        if (!($MG < $this->hLen + $kj + 2)) {
            goto Lw;
        }
        return false;
        Lw:
        if (!($s4[strlen($s4) - 1] != chr(0xbc))) {
            goto Np;
        }
        return false;
        Np:
        $Ef = substr($s4, 0, -$this->hLen - 1);
        $Zc = substr($s4, -$this->hLen - 1, $this->hLen);
        $yi = chr(0xff << ($Jl & 7));
        if (!((~$Ef[0] & $yi) != $yi)) {
            goto xw;
        }
        return false;
        xw:
        $lW = $this->_mgf1($Zc, $MG - $this->hLen - 1);
        $jZ = $Ef ^ $lW;
        $jZ[0] = ~chr(0xff << ($Jl & 7)) & $jZ[0];
        $yi = $MG - $this->hLen - $kj - 2;
        if (!(substr($jZ, 0, $yi) != str_repeat(chr(0), $yi) || ord($jZ[$yi]) != 1)) {
            goto oz;
        }
        return false;
        oz:
        $FH = substr($jZ, $yi + 1);
        $Gz = "\x0\0\x0\0\0\0\x0\x0" . $EX . $FH;
        $lX = $this->hash->hash($Gz);
        return $this->_equals($Zc, $lX);
    }
    function _rsassa_pss_sign($jz)
    {
        $s4 = $this->_emsa_pss_encode($jz, 8 * $this->k - 1);
        $jz = $this->_os2ip($s4);
        $Db = $this->_rsasp1($jz);
        $Db = $this->_i2osp($Db, $this->k);
        return $Db;
    }
    function _rsassa_pss_verify($jz, $Db)
    {
        if (!(strlen($Db) != $this->k)) {
            goto VM;
        }
        user_error("\111\156\x76\141\154\x69\144\40\x73\x69\x67\x6e\141\164\x75\x72\145");
        return false;
        VM:
        $Dg = 8 * $this->k;
        $v_ = $this->_os2ip($Db);
        $Gz = $this->_rsavp1($v_);
        if (!($Gz === false)) {
            goto BB;
        }
        user_error("\x49\x6e\166\141\154\151\x64\x20\163\151\147\156\141\164\x75\x72\145");
        return false;
        BB:
        $s4 = $this->_i2osp($Gz, $Dg >> 3);
        if (!($s4 === false)) {
            goto UA;
        }
        user_error("\111\156\x76\141\x6c\151\x64\x20\x73\151\147\x6e\x61\164\x75\162\145");
        return false;
        UA:
        return $this->_emsa_pss_verify($jz, $s4, $Dg - 1);
    }
    function _emsa_pkcs1_v1_5_encode($jz, $MG)
    {
        $Zc = $this->hash->hash($jz);
        if (!($Zc === false)) {
            goto st;
        }
        return false;
        st:
        switch ($this->hashName) {
            case "\155\144\x32":
                $uE = pack("\x48\52", "\63\60\x32\60\63\x30\x30\143\x30\x36\x30\70\62\141\x38\x36\x34\70\x38\x36\146\67\60\x64\60\x32\60\62\60\x35\x30\x30\x30\x34\61\60");
                goto er;
            case "\155\144\65":
                $uE = pack("\110\52", "\63\x30\x32\x30\63\x30\60\x63\x30\x36\x30\x38\62\141\x38\66\64\x38\x38\66\146\x37\x30\x64\60\62\60\x35\60\x35\x30\60\60\64\61\60");
                goto er;
            case "\x73\150\141\x31":
                $uE = pack("\x48\x2a", "\x33\60\x32\61\63\60\60\71\60\66\x30\65\62\142\60\x65\x30\63\60\x32\61\x61\x30\x35\60\60\60\x34\x31\x34");
                goto er;
            case "\x73\150\141\x32\x35\x36":
                $uE = pack("\110\52", "\63\60\63\x31\x33\x30\60\144\60\x36\60\71\66\x30\70\x36\x34\x38\60\61\x36\x35\x30\63\x30\x34\x30\62\60\61\x30\x35\60\x30\60\64\62\x30");
                goto er;
            case "\163\150\x61\63\70\64":
                $uE = pack("\110\52", "\x33\x30\64\x31\x33\60\x30\x64\60\66\60\71\x36\60\70\66\64\70\60\61\x36\x35\60\x33\60\64\x30\62\x30\x32\60\x35\x30\x30\60\64\x33\x30");
                goto er;
            case "\163\x68\141\x35\61\62":
                $uE = pack("\110\52", "\x33\60\65\61\63\60\x30\x64\60\x36\60\x39\66\60\70\x36\x34\70\x30\x31\x36\65\x30\63\x30\64\60\x32\60\x33\60\x35\60\x30\60\x34\64\60");
        }
        s3:
        er:
        $uE .= $Zc;
        $Xx = strlen($uE);
        if (!($MG < $Xx + 11)) {
            goto mx;
        }
        user_error("\x49\156\164\145\x6e\144\x65\x64\40\145\x6e\143\x6f\144\145\x64\40\x6d\145\163\163\x61\x67\145\x20\154\145\x6e\147\164\150\x20\x74\157\x6f\40\x73\150\157\162\x74");
        return false;
        mx:
        $fY = str_repeat(chr(0xff), $MG - $Xx - 3);
        $s4 = "\x0\x1{$fY}\x0{$uE}";
        return $s4;
    }
    function _rsassa_pkcs1_v1_5_sign($jz)
    {
        $s4 = $this->_emsa_pkcs1_v1_5_encode($jz, $this->k);
        if (!($s4 === false)) {
            goto JO;
        }
        user_error("\122\x53\101\x20\x6d\157\144\165\x6c\x75\163\40\164\157\x6f\40\163\x68\157\162\x74");
        return false;
        JO:
        $jz = $this->_os2ip($s4);
        $Db = $this->_rsasp1($jz);
        $Db = $this->_i2osp($Db, $this->k);
        return $Db;
    }
    function _rsassa_pkcs1_v1_5_verify($jz, $Db)
    {
        if (!(strlen($Db) != $this->k)) {
            goto nL;
        }
        user_error("\x49\x6e\166\141\154\151\144\x20\x73\151\147\156\141\x74\x75\162\145");
        return false;
        nL:
        $Db = $this->_os2ip($Db);
        $Gz = $this->_rsavp1($Db);
        if (!($Gz === false)) {
            goto C7;
        }
        user_error("\x49\x6e\166\x61\x6c\x69\144\40\x73\x69\x67\156\x61\164\165\162\x65");
        return false;
        C7:
        $s4 = $this->_i2osp($Gz, $this->k);
        if (!($s4 === false)) {
            goto W2;
        }
        user_error("\111\156\166\141\154\151\x64\40\x73\x69\x67\156\x61\x74\x75\162\145");
        return false;
        W2:
        $Nc = $this->_emsa_pkcs1_v1_5_encode($jz, $this->k);
        if (!($Nc === false)) {
            goto Yn;
        }
        user_error("\x52\x53\x41\40\155\x6f\x64\x75\154\x75\x73\x20\164\x6f\x6f\40\x73\150\x6f\162\x74");
        return false;
        Yn:
        return $this->_equals($s4, $Nc);
    }
    function setEncryptionMode($U8)
    {
        $this->encryptionMode = $U8;
    }
    function setSignatureMode($U8)
    {
        $this->signatureMode = $U8;
    }
    function setComment($he)
    {
        $this->comment = $he;
    }
    function getComment()
    {
        return $this->comment;
    }
    function encrypt($JG)
    {
        switch ($this->encryptionMode) {
            case CRYPT_RSA_ENCRYPTION_NONE:
                $JG = str_split($JG, $this->k);
                $bh = '';
                foreach ($JG as $jz) {
                    $bh .= $this->_raw_encrypt($jz);
                    g5:
                }
                c7:
                return $bh;
            case CRYPT_RSA_ENCRYPTION_PKCS1:
                $ib = $this->k - 11;
                if (!($ib <= 0)) {
                    goto fX;
                }
                return false;
                fX:
                $JG = str_split($JG, $ib);
                $bh = '';
                foreach ($JG as $jz) {
                    $bh .= $this->_rsaes_pkcs1_v1_5_encrypt($jz);
                    D_:
                }
                Pv:
                return $bh;
            default:
                $ib = $this->k - 2 * $this->hLen - 2;
                if (!($ib <= 0)) {
                    goto Ng;
                }
                return false;
                Ng:
                $JG = str_split($JG, $ib);
                $bh = '';
                foreach ($JG as $jz) {
                    $bh .= $this->_rsaes_oaep_encrypt($jz);
                    AT:
                }
                hJ:
                return $bh;
        }
        a1:
        TM:
    }
    function decrypt($bh)
    {
        if (!($this->k <= 0)) {
            goto QW;
        }
        return false;
        QW:
        $bh = str_split($bh, $this->k);
        $bh[count($bh) - 1] = str_pad($bh[count($bh) - 1], $this->k, chr(0), STR_PAD_LEFT);
        $JG = '';
        switch ($this->encryptionMode) {
            case CRYPT_RSA_ENCRYPTION_NONE:
                $AQ = "\137\162\x61\x77\137\145\156\143\x72\x79\160\x74";
                goto ID;
            case CRYPT_RSA_ENCRYPTION_PKCS1:
                $AQ = "\137\x72\x73\x61\145\x73\137\160\x6b\x63\163\61\137\x76\61\137\65\x5f\x64\145\143\x72\171\x70\164";
                goto ID;
            default:
                $AQ = "\x5f\162\163\141\x65\163\x5f\x6f\x61\145\x70\x5f\144\x65\x63\x72\x79\x70\164";
        }
        Jf:
        ID:
        foreach ($bh as $x8) {
            $yi = $this->{$AQ}($x8);
            if (!($yi === false)) {
                goto VF;
            }
            return false;
            VF:
            $JG .= $yi;
            fS:
        }
        Kz:
        return $JG;
    }
    function sign($wF)
    {
        if (!(empty($this->modulus) || empty($this->exponent))) {
            goto RP;
        }
        return false;
        RP:
        switch ($this->signatureMode) {
            case CRYPT_RSA_SIGNATURE_PKCS1:
                return $this->_rsassa_pkcs1_v1_5_sign($wF);
            default:
                return $this->_rsassa_pss_sign($wF);
        }
        wQ:
        C2:
    }
    function verify($wF, $O8)
    {
        if (!(empty($this->modulus) || empty($this->exponent))) {
            goto r5;
        }
        return false;
        r5:
        switch ($this->signatureMode) {
            case CRYPT_RSA_SIGNATURE_PKCS1:
                return $this->_rsassa_pkcs1_v1_5_verify($wF, $O8);
            default:
                return $this->_rsassa_pss_verify($wF, $O8);
        }
        dS:
        sC:
    }
    function _extractBER($ye)
    {
        $yi = preg_replace("\x23\56\52\x3f\x5e\55\53\x5b\136\55\135\53\x2d\x2b\133\134\x72\x5c\156\40\x5d\52\44\x23\x6d\163", '', $ye, 1);
        $yi = preg_replace("\x23\x2d\x2b\133\x5e\55\135\x2b\55\53\x23", '', $yi);
        $yi = str_replace(array("\15", "\12", "\x20"), '', $yi);
        $yi = preg_match("\x23\136\x5b\x61\x2d\172\101\55\x5a\134\144\x2f\53\x5d\x2a\x3d\x7b\x30\54\62\175\x24\x23", $yi) ? base64_decode($yi) : false;
        return $yi != false ? $yi : $ye;
    }
}
