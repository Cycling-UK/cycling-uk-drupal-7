<?php


class MiniorangeOAuthCustomer
{
    public $email;
    public $customerKey;
    public $transactionId;
    public $password;
    private $defaultCustomerId;
    private $defaultCustomerApiKey;
    public function __construct($Hq, $S0)
    {
        $this->email = $Hq;
        $this->password = $S0;
        $this->defaultCustomerId = "\61\x36\65\x35\x35";
        $this->defaultCustomerApiKey = "\x66\x46\144\62\x58\143\x76\124\107\x44\145\155\x5a\x76\142\167\x31\x62\x63\x55\145\x73\116\112\x57\x45\x71\x4b\x62\x62\x55\x71";
    }
    public function checkCustomer()
    {
        if (Utilities::isCurlInstalled()) {
            goto mD;
        }
        return json_encode(array("\x73\164\141\x74\x75\x73" => "\x43\125\x52\114\x5f\x45\122\122\117\x52", "\163\x74\141\164\x75\x73\115\145\163\x73\141\147\x65" => "\74\x61\x20\x68\162\145\146\75\x22\150\164\x74\160\x3a\x2f\57\160\x68\x70\56\x6e\145\164\57\155\141\156\165\x61\154\57\x65\156\x2f\x63\x75\162\154\x2e\x69\x6e\163\164\x61\x6c\154\x61\164\151\x6f\x6e\x2e\160\150\160\x22\76\x50\x48\x50\40\x63\125\x52\x4c\x20\x65\170\164\145\x6e\163\151\157\x6e\x3c\x2f\x61\x3e\40\x69\x73\x20\156\x6f\x74\x20\151\x6e\x73\164\141\154\x6c\x65\144\40\157\x72\40\x64\151\x73\x61\142\154\145\144\x2e"));
        mD:
        $HH = MiniorangeOAuthConstants::BASE_URL . "\x2f\155\157\x61\x73\x2f\162\145\x73\x74\x2f\143\x75\x73\164\x6f\155\145\x72\x2f\x63\150\x65\143\x6b\55\151\146\x2d\x65\x78\x69\x73\x74\x73";
        $IF = curl_init($HH);
        $Hq = $this->email;
        $Hr = array("\x65\155\x61\x69\154" => $Hq);
        $cO = json_encode($Hr);
        curl_setopt($IF, CURLOPT_FOLLOWLOCATION, TRUE);
        curl_setopt($IF, CURLOPT_ENCODING, '');
        curl_setopt($IF, CURLOPT_RETURNTRANSFER, TRUE);
        curl_setopt($IF, CURLOPT_AUTOREFERER, TRUE);
        curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, FALSE);
        curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
        curl_setopt($IF, CURLOPT_HTTPHEADER, array("\x43\157\156\x74\145\x6e\164\x2d\x54\x79\x70\145\72\x20\x61\x70\x70\154\151\x63\141\164\x69\x6f\x6e\57\152\x73\x6f\x6e", "\x63\x68\141\x72\x73\x65\164\x3a\x20\x55\x54\106\40\x2d\x20\x38", "\101\165\164\x68\157\x72\x69\172\x61\x74\x69\157\156\x3a\x20\x42\141\x73\151\x63"));
        curl_setopt($IF, CURLOPT_POST, TRUE);
        curl_setopt($IF, CURLOPT_POSTFIELDS, $cO);
        $ZV = curl_exec($IF);
        if (!curl_errno($IF)) {
            goto JW;
        }
        $WH = array("\45\155\145\164\150\157\x64" => "\143\x68\x65\143\x6b\103\x75\x73\164\x6f\x6d\x65\162", "\45\x66\151\154\145" => "\143\x75\x73\x74\x6f\155\145\x72\x5f\x73\x65\x74\165\x70\56\x70\150\x70", "\x25\145\162\162\x6f\x72" => curl_error($IF));
        watchdog("\155\x69\x6e\151\x6f\x72\x61\156\x67\145\137\x6f\x61\165\x74\x68", "\105\162\162\x6f\x72\40\141\x74\40\45\155\x65\164\150\x6f\x64\x20\x6f\146\40\45\146\x69\x6c\145\x3a\x20\45\145\162\162\157\162", $WH);
        JW:
        curl_close($IF);
        return $ZV;
    }
    public function getCustomerKeys()
    {
        if (Utilities::isCurlInstalled()) {
            goto RF;
        }
        return json_encode(array("\x61\x70\151\113\145\171" => "\103\125\122\x4c\x5f\105\x52\x52\x4f\122", "\164\x6f\153\x65\156" => "\x3c\141\x20\x68\162\145\x66\75\x22\150\164\x74\x70\72\x2f\57\160\150\160\x2e\156\x65\164\57\155\x61\156\165\141\x6c\x2f\145\156\57\143\x75\162\154\56\x69\x6e\x73\164\x61\154\154\141\164\151\x6f\x6e\56\160\x68\160\x22\x3e\120\x48\120\x20\143\x55\x52\114\x20\x65\x78\164\145\156\163\x69\157\156\x3c\57\141\76\40\151\163\40\156\x6f\x74\40\x69\x6e\163\164\141\x6c\154\145\x64\40\157\x72\40\x64\151\163\x61\142\x6c\145\x64\56"));
        RF:
        $HH = MiniorangeOAuthConstants::BASE_URL . "\x2f\155\157\141\x73\x2f\162\145\x73\164\x2f\143\x75\163\x74\x6f\155\145\162\57\153\x65\171";
        $IF = curl_init($HH);
        $Hq = $this->email;
        $S0 = $this->password;
        $Hr = array("\145\155\141\151\x6c" => $Hq, "\x70\x61\x73\163\167\157\162\x64" => $S0);
        $cO = json_encode($Hr);
        curl_setopt($IF, CURLOPT_FOLLOWLOCATION, TRUE);
        curl_setopt($IF, CURLOPT_ENCODING, '');
        curl_setopt($IF, CURLOPT_RETURNTRANSFER, TRUE);
        curl_setopt($IF, CURLOPT_AUTOREFERER, TRUE);
        curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, FALSE);
        curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
        curl_setopt($IF, CURLOPT_HTTPHEADER, array("\x43\157\156\164\x65\156\x74\x2d\124\x79\x70\145\72\40\141\x70\160\154\x69\143\141\164\151\x6f\156\57\152\163\x6f\156", "\143\150\141\162\x73\145\164\x3a\x20\125\124\x46\x20\x2d\x20\70", "\101\x75\x74\x68\x6f\162\x69\172\141\164\151\x6f\156\72\40\102\141\x73\x69\x63"));
        curl_setopt($IF, CURLOPT_POST, TRUE);
        curl_setopt($IF, CURLOPT_POSTFIELDS, $cO);
        $ZV = curl_exec($IF);
        if (!curl_errno($IF)) {
            goto xL;
        }
        $WH = array("\45\155\x65\164\x68\157\144" => "\x67\145\164\103\x75\x73\164\157\155\x65\162\x4b\145\x79\x73", "\45\x66\151\x6c\145" => "\x63\165\x73\164\x6f\155\x65\x72\x5f\163\145\x74\165\x70\x2e\160\x68\160", "\x25\x65\x72\x72\157\x72" => curl_error($IF));
        watchdog("\x6d\151\156\151\x6f\x72\141\x6e\x67\145\x5f\157\x61\165\164\x68", "\105\162\162\157\x72\x20\141\164\x20\45\155\145\x74\x68\x6f\x64\x20\157\x66\40\45\146\151\154\145\72\40\45\145\162\x72\157\162", $WH);
        xL:
        curl_close($IF);
        return $ZV;
    }
    function verifyLicense($Xd)
    {
        $HH = MiniorangeOAuthConstants::BASE_URL . "\57\155\x6f\141\163\x2f\x61\160\151\x2f\x62\x61\x63\x6b\x75\x70\x63\x6f\x64\x65\57\x76\145\x72\151\146\x79";
        $IF = curl_init($HH);
        $Cm = variable_get("\x6d\x69\156\151\157\x72\141\156\x67\145\137\x6f\x61\x75\164\x68\137\x63\154\151\x65\x6e\x74\x5f\x63\165\163\x74\157\x6d\145\162\137\x69\144");
        $rB = variable_get("\x6d\x69\x6e\x69\157\x72\141\156\x67\145\x5f\157\x61\165\164\x68\x5f\x63\154\151\x65\156\x74\137\143\165\163\164\157\155\x65\x72\x5f\x61\x70\x69\137\153\x65\171");
        global $base_url;
        $ms = round(microtime(TRUE) * 1000);
        $TH = $Cm . number_format($ms, 0, '', '') . $rB;
        $kt = hash("\x73\150\x61\65\x31\x32", $TH);
        $NK = "\103\165\163\164\x6f\155\x65\162\55\x4b\x65\x79\72\x20" . $Cm;
        $kl = "\x54\151\155\x65\x73\x74\141\x6d\x70\x3a\x20" . number_format($ms, 0, '', '');
        $L0 = "\x41\x75\164\150\157\162\x69\172\141\164\x69\157\156\x3a\x20" . $kt;
        $Hr = '';
        $Hr = array("\143\157\x64\x65" => $Xd, "\143\165\163\x74\157\155\145\162\x4b\x65\171" => $Cm, "\141\144\144\x69\164\x69\157\x6e\141\154\106\151\x65\154\x64\163" => array("\x66\x69\145\x6c\144\61" => $base_url));
        $cO = json_encode($Hr);
        curl_setopt($IF, CURLOPT_FOLLOWLOCATION, true);
        curl_setopt($IF, CURLOPT_ENCODING, '');
        curl_setopt($IF, CURLOPT_RETURNTRANSFER, true);
        curl_setopt($IF, CURLOPT_AUTOREFERER, true);
        curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, false);
        curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
        curl_setopt($IF, CURLOPT_HTTPHEADER, array("\103\x6f\x6e\164\145\156\x74\x2d\x54\171\x70\145\72\x20\141\x70\160\154\x69\x63\141\164\x69\157\156\x2f\152\163\x6f\156", $NK, $kl, $L0));
        curl_setopt($IF, CURLOPT_POST, true);
        curl_setopt($IF, CURLOPT_POSTFIELDS, $cO);
        curl_setopt($IF, CURLOPT_CONNECTTIMEOUT, 5);
        curl_setopt($IF, CURLOPT_TIMEOUT, 20);
        $ZV = curl_exec($IF);
        if (!curl_errno($IF)) {
            goto Wd;
        }
        echo "\122\145\161\165\145\163\x74\40\x45\162\x72\x6f\162\x3a" . curl_error($IF);
        exit;
        Wd:
        curl_close($IF);
        return $ZV;
    }
    function updateStatus()
    {
        $HH = MiniorangeOAuthConstants::BASE_URL . "\57\155\x6f\x61\163\x2f\141\x70\151\x2f\142\141\143\x6b\165\160\x63\157\144\x65\x2f\x75\x70\144\x61\x74\x65\163\x74\141\x74\x75\x73";
        $IF = curl_init($HH);
        $Cm = variable_get("\155\151\x6e\x69\x6f\162\141\x6e\x67\145\x5f\157\x61\x75\x74\150\x5f\x63\x6c\151\x65\156\164\137\143\165\x73\x74\157\x6d\x65\x72\x5f\151\x64");
        $rB = variable_get("\x6d\x69\x6e\x69\x6f\162\x61\156\x67\x65\137\x6f\141\x75\x74\150\x5f\x63\x6c\x69\x65\x6e\164\x5f\x63\165\x73\164\x6f\155\145\162\x5f\141\x70\x69\137\153\145\x79");
        $ms = round(microtime(TRUE) * 1000);
        $TH = $Cm . number_format($ms, 0, '', '') . $rB;
        $kt = hash("\163\150\x61\x35\61\x32", $TH);
        $NK = "\x43\165\x73\x74\157\155\x65\162\x2d\113\145\x79\x3a\40" . $Cm;
        $kl = "\124\151\x6d\x65\x73\x74\141\155\x70\x3a\40" . number_format($ms, 0, '', '');
        $L0 = "\101\x75\x74\x68\157\162\151\x7a\141\164\151\157\x6e\x3a\40" . $kt;
        $Lb = variable_get("\155\151\x6e\x69\x6f\x72\141\156\147\x65\x5f\157\141\x75\164\150\x5f\x63\x6c\x69\145\156\164\137\143\x75\x73\164\x6f\155\145\x72\137\141\144\155\x69\x6e\x5f\x74\x6f\153\145\156");
        $Xd = AESEncryption::decrypt_data(variable_get("\x6d\x69\x6e\x69\x6f\x72\x61\x6e\x67\145\137\157\x61\165\x74\x68\137\143\154\x69\x65\x6e\x74\x5f\154\x69\143\x65\156\163\145\137\153\x65\171"), $Lb);
        $Hr = array("\143\x6f\144\145" => $Xd, "\x63\165\163\164\x6f\x6d\x65\x72\x4b\145\x79" => $Cm);
        $cO = json_encode($Hr);
        curl_setopt($IF, CURLOPT_FOLLOWLOCATION, true);
        curl_setopt($IF, CURLOPT_ENCODING, '');
        curl_setopt($IF, CURLOPT_RETURNTRANSFER, true);
        curl_setopt($IF, CURLOPT_AUTOREFERER, true);
        curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, false);
        curl_setopt($IF, CURLOPT_SSL_VERIFYHOST, false);
        curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
        curl_setopt($IF, CURLOPT_HTTPHEADER, array("\x43\157\x6e\164\145\156\164\x2d\x54\x79\x70\145\72\x20\x61\x70\x70\154\151\143\x61\164\x69\x6f\x6e\x2f\x6a\x73\157\x6e", $NK, $kl, $L0));
        curl_setopt($IF, CURLOPT_POST, true);
        curl_setopt($IF, CURLOPT_POSTFIELDS, $cO);
        curl_setopt($IF, CURLOPT_CONNECTTIMEOUT, 5);
        curl_setopt($IF, CURLOPT_TIMEOUT, 20);
        $ZV = curl_exec($IF);
        if (!curl_errno($IF)) {
            goto D0;
        }
        echo "\x52\x65\161\165\x65\163\x74\x20\105\162\162\157\x72\x3a" . curl_error($IF);
        exit;
        D0:
        curl_close($IF);
        return $ZV;
    }
    function ccl()
    {
        $HH = MiniorangeOAuthConstants::BASE_URL . "\x2f\x6d\157\141\x73\57\x72\145\x73\x74\57\143\165\x73\164\x6f\155\145\162\57\x6c\x69\143\x65\156\x73\x65";
        $IF = curl_init($HH);
        $Cm = variable_get("\155\x69\156\151\x6f\x72\141\x6e\147\145\137\x6f\x61\x75\164\x68\x5f\x63\154\x69\145\156\x74\137\x63\165\163\x74\x6f\x6d\x65\x72\137\151\144", '');
        $rB = variable_get("\x6d\x69\156\151\x6f\x72\x61\x6e\x67\x65\x5f\157\141\x75\164\x68\137\143\154\151\x65\156\164\x5f\143\165\163\164\157\155\145\162\137\141\x70\x69\x5f\x6b\145\171", '');
        $ms = round(microtime(TRUE) * 1000);
        $TH = $Cm . number_format($ms, 0, '', '') . $rB;
        $kt = hash("\163\x68\141\65\x31\62", $TH);
        $NK = "\103\165\163\164\157\155\x65\x72\x2d\x4b\x65\171\x3a\x20" . $Cm;
        $kl = "\124\151\155\x65\163\164\141\x6d\160\x3a\x20" . number_format($ms, 0, '', '');
        $L0 = "\101\165\x74\x68\x6f\162\151\172\141\164\151\x6f\156\x3a\x20" . $kt;
        $Hr = '';
        $Hr = array("\x63\165\163\x74\x6f\x6d\145\x72\x49\144" => $Cm, "\141\x70\x70\x6c\151\143\x61\x74\x69\157\156\x4e\x61\155\x65" => "\x64\162\165\x70\141\x6c\137\157\141\x75\x74\x68\x5f\143\154\151\145\x6e\164\x5f\x65\x6e\x74\x65\x72\x70\162\151\x73\145\x5f\160\x6c\141\x6e");
        $cO = json_encode($Hr);
        curl_setopt($IF, CURLOPT_FOLLOWLOCATION, true);
        curl_setopt($IF, CURLOPT_ENCODING, '');
        curl_setopt($IF, CURLOPT_RETURNTRANSFER, true);
        curl_setopt($IF, CURLOPT_AUTOREFERER, true);
        curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, false);
        curl_setopt($IF, CURLOPT_SSL_VERIFYHOST, false);
        curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
        curl_setopt($IF, CURLOPT_HTTPHEADER, array("\103\x6f\156\x74\x65\x6e\x74\55\124\171\x70\x65\x3a\40\x61\x70\160\x6c\x69\x63\x61\164\x69\x6f\156\57\x6a\163\157\x6e", $NK, $kl, $L0));
        curl_setopt($IF, CURLOPT_POST, true);
        curl_setopt($IF, CURLOPT_POSTFIELDS, $cO);
        curl_setopt($IF, CURLOPT_CONNECTTIMEOUT, 5);
        curl_setopt($IF, CURLOPT_TIMEOUT, 20);
        $ZV = curl_exec($IF);
        if (!curl_errno($IF)) {
            goto WR;
        }
        return null;
        WR:
        curl_close($IF);
        return $ZV;
    }
}
