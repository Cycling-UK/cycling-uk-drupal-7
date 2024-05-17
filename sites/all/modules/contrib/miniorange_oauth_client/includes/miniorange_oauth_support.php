<?php


class MiniOrange_oauth_support
{
    public $email;
    public $phone;
    public $query;
    public function __construct($Hq, $JE, $Zh)
    {
        $this->email = $Hq;
        $this->phone = $JE;
        $this->query = $Zh;
    }
    public function sendSupportQuery()
    {
        $this->query = "\x5b\104\x72\165\x70\141\x6c\55\67\x20\x4f\x41\x75\x74\x68\40\103\x6c\x69\145\x6e\164\x20\105\156\x74\145\162\160\162\151\163\x65\x20\115\x6f\144\x75\154\145\135\40" . $this->query;
        $Hr = array("\143\157\x6d\x70\141\156\171" => $_SERVER["\x53\105\122\126\105\122\x5f\116\x41\x4d\x45"], "\145\155\141\151\154" => $this->email, "\x63\x63\x45\155\141\x69\154" => "\x64\162\x75\160\141\154\x73\165\160\x70\x6f\162\x74\100\x78\x65\143\165\x72\151\x66\x79\56\143\x6f\155", "\x70\150\157\x6e\x65" => $this->phone, "\x71\x75\145\x72\x79" => $this->query, "\x73\x75\x62\x6a\145\x63\164" => "\x44\162\x75\160\x61\x6c\55\x37\x20\x4f\101\x75\x74\x68\40\x43\154\151\x65\156\164\40\105\x6e\164\x65\162\x70\162\x69\x73\145\40\121\165\145\162\171");
        $cO = json_encode($Hr);
        $HH = "\150\164\164\x70\163\72\57\57\x6c\157\x67\x69\156\x2e\170\x65\x63\165\162\x69\x66\171\56\143\157\155\x2f\155\x6f\141\x73\57\x72\x65\x73\x74\x2f\x63\x75\163\164\x6f\155\x65\162\57\143\157\156\x74\141\143\164\55\x75\163";
        $IF = curl_init($HH);
        curl_setopt($IF, CURLOPT_FOLLOWLOCATION, TRUE);
        curl_setopt($IF, CURLOPT_ENCODING, '');
        curl_setopt($IF, CURLOPT_RETURNTRANSFER, TRUE);
        curl_setopt($IF, CURLOPT_AUTOREFERER, TRUE);
        curl_setopt($IF, CURLOPT_SSL_VERIFYPEER, FALSE);
        curl_setopt($IF, CURLOPT_MAXREDIRS, 10);
        curl_setopt($IF, CURLOPT_HTTPHEADER, array("\103\157\156\164\145\x6e\164\55\x54\171\160\x65\x3a\x20\x61\x70\x70\154\151\143\x61\x74\x69\157\156\x2f\x6a\163\x6f\x6e", "\x63\150\x61\162\163\x65\x74\72\x20\x55\124\x46\x2d\x38", "\101\165\164\x68\x6f\x72\151\x7a\x61\x74\151\x6f\156\72\40\102\x61\163\151\143"));
        curl_setopt($IF, CURLOPT_POST, TRUE);
        curl_setopt($IF, CURLOPT_POSTFIELDS, $cO);
        $ZV = curl_exec($IF);
        if (!curl_errno($IF)) {
            goto Sl;
        }
        $WH = array("\x25\x6d\x65\164\x68\157\144" => "\163\145\x6e\x64\123\165\x70\160\x6f\x72\x74\x51\165\145\x72\171", "\x25\146\x69\154\x65" => "\x6d\x69\x6e\x69\157\162\x61\156\x67\145\137\117\101\x75\164\x68\137\x73\165\x70\160\157\162\x74\x2e\160\x68\x70", "\45\x65\162\162\x6f\x72" => curl_error($IF));
        watchdog("\155\151\x6e\151\x6f\162\x61\156\x67\x65\x5f\x4f\x41\x75\164\x68", "\143\x55\x52\114\40\x45\162\162\157\x72\x20\141\164\40\x25\155\145\164\150\157\144\40\157\146\40\x25\146\x69\154\x65\72\40\x25\x65\x72\162\157\x72", $WH);
        return FALSE;
        Sl:
        curl_close($IF);
        return TRUE;
    }
}
