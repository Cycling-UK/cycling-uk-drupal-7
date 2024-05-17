<?php


if (!function_exists("\143\162\x79\160\164\137\162\141\156\144\x6f\x6d\x5f\x73\x74\162\151\x6e\147")) {
    define("\103\x52\131\120\124\x5f\122\101\116\104\117\x4d\137\111\x53\137\x57\111\116\x44\x4f\x57\x53", strtoupper(substr(PHP_OS, 0, 3)) === "\127\111\x4e");
    function crypt_random_string($ib)
    {
        if ($ib) {
            goto AP;
        }
        return '';
        AP:
        if (CRYPT_RANDOM_IS_WINDOWS) {
            goto zR;
        }
        if (!(extension_loaded("\x6f\x70\145\156\x73\x73\154") && version_compare(PHP_VERSION, "\65\x2e\63\56\60", "\76\75"))) {
            goto ho;
        }
        return openssl_random_pseudo_bytes($ib);
        ho:
        static $pD = true;
        if (!($pD === true)) {
            goto ic;
        }
        $pD = @fopen("\x2f\144\145\166\x2f\165\x72\x61\x6e\x64\x6f\x6d", "\162\142");
        ic:
        if (!($pD !== true && $pD !== false)) {
            goto ll;
        }
        return fread($pD, $ib);
        ll:
        if (!extension_loaded("\x6d\x63\162\171\x70\164")) {
            goto Up;
        }
        Up:
        goto V3;
        zR:
        if (!(extension_loaded("\x6d\x63\162\171\160\x74") && version_compare(PHP_VERSION, "\x35\x2e\63\x2e\60", "\x3e\75"))) {
            goto p1;
        }
        p1:
        if (!(extension_loaded("\157\x70\145\x6e\x73\163\x6c") && version_compare(PHP_VERSION, "\x35\56\x33\x2e\x34", "\x3e\x3d"))) {
            goto nM;
        }
        return openssl_random_pseudo_bytes($ib);
        nM:
        V3:
        static $Te = false, $yh;
        if (!($Te === false)) {
            goto wn;
        }
        $FS = session_id();
        $Zs = ini_get("\163\x65\163\163\x69\x6f\x6e\x2e\165\163\x65\137\x63\157\157\x6b\x69\x65\163");
        $xB = session_cache_limiter();
        $JS = isset($_SESSION) ? $_SESSION : false;
        if (!($FS != '')) {
            goto Tb;
        }
        session_write_close();
        Tb:
        session_id(1);
        ini_set("\x73\145\163\x73\151\x6f\156\x2e\165\163\145\137\x63\157\157\x6b\x69\145\163", 0);
        session_cache_limiter('');
        session_start();
        $yh = $hE = $_SESSION["\163\145\x65\x64"] = pack("\110\x2a", sha1((isset($_SERVER) ? phpseclib_safe_serialize($_SERVER) : '') . (isset($_POST) ? phpseclib_safe_serialize($_POST) : '') . (isset($_GET) ? phpseclib_safe_serialize($_GET) : '') . (isset($_COOKIE) ? phpseclib_safe_serialize($_COOKIE) : '') . phpseclib_safe_serialize($GLOBALS) . phpseclib_safe_serialize($_SESSION) . phpseclib_safe_serialize($JS)));
        if (isset($_SESSION["\143\157\165\156\x74"])) {
            goto nZ;
        }
        $_SESSION["\x63\x6f\x75\156\x74"] = 0;
        nZ:
        $_SESSION["\x63\157\x75\156\x74"]++;
        session_write_close();
        if ($FS != '') {
            goto lW;
        }
        if ($JS !== false) {
            goto qG;
        }
        unset($_SESSION);
        goto o8;
        qG:
        $_SESSION = $JS;
        unset($JS);
        o8:
        goto c8;
        lW:
        session_id($FS);
        session_start();
        ini_set("\163\145\163\x73\151\x6f\156\56\165\x73\x65\137\x63\157\157\x6b\151\x65\163", $Zs);
        session_cache_limiter($xB);
        c8:
        $Lb = pack("\110\x2a", sha1($hE . "\x41"));
        $Vg = pack("\x48\52", sha1($hE . "\x43"));
        switch (true) {
            case phpseclib_resolve_include_path("\x43\x72\x79\160\164\x2f\x41\x45\x53\56\160\x68\x70"):
                if (class_exists("\x43\162\x79\x70\164\137\101\x45\x53")) {
                    goto ba;
                }
                include_once "\101\x45\x53\x2e\160\150\x70";
                ba:
                $Te = new Crypt_AES(CRYPT_AES_MODE_CTR);
                goto cF;
            case phpseclib_resolve_include_path("\x43\162\x79\160\x74\x2f\124\167\157\x66\151\x73\x68\56\x70\x68\x70"):
                if (class_exists("\103\x72\x79\160\x74\x5f\124\167\157\146\151\x73\x68")) {
                    goto qm;
                }
                include_once "\x54\x77\157\x66\x69\x73\150\x2e\x70\150\160";
                qm:
                $Te = new Crypt_Twofish(CRYPT_TWOFISH_MODE_CTR);
                goto cF;
            case phpseclib_resolve_include_path("\x43\x72\x79\x70\x74\57\x42\x6c\157\x77\146\x69\x73\150\x2e\160\150\x70"):
                if (class_exists("\x43\162\x79\x70\164\x5f\102\154\157\167\x66\151\163\x68")) {
                    goto HX;
                }
                include_once "\102\154\x6f\167\146\151\163\x68\56\x70\150\x70";
                HX:
                $Te = new Crypt_Blowfish(CRYPT_BLOWFISH_MODE_CTR);
                goto cF;
            case phpseclib_resolve_include_path("\103\x72\x79\160\x74\57\124\x72\x69\x70\x6c\x65\x44\105\123\x2e\160\150\x70"):
                if (class_exists("\x43\162\x79\x70\164\137\x54\x72\151\x70\x6c\x65\104\x45\123")) {
                    goto Mz;
                }
                include_once "\124\x72\151\x70\x6c\145\104\105\123\56\160\x68\160";
                Mz:
                $Te = new Crypt_TripleDES(CRYPT_DES_MODE_CTR);
                goto cF;
            case phpseclib_resolve_include_path("\103\x72\x79\160\164\57\104\x45\123\x2e\160\150\160"):
                if (class_exists("\x43\162\x79\x70\164\137\x44\x45\123")) {
                    goto jy;
                }
                include_once "\x44\105\123\56\x70\x68\160";
                jy:
                $Te = new Crypt_DES(CRYPT_DES_MODE_CTR);
                goto cF;
            case phpseclib_resolve_include_path("\103\x72\171\x70\x74\x2f\x52\103\64\x2e\160\150\160"):
                if (class_exists("\103\162\x79\160\x74\x5f\x52\103\64")) {
                    goto vQ;
                }
                include_once "\x52\x43\x34\56\160\150\160";
                vQ:
                $Te = new Crypt_RC4();
                goto cF;
            default:
                user_error("\x63\x72\171\x70\x74\x5f\x72\x61\x6e\144\157\x6d\137\x73\164\x72\151\156\x67\40\x72\145\161\x75\151\162\x65\163\40\141\x74\x20\x6c\x65\x61\163\164\40\x6f\156\x65\x20\163\171\155\x6d\145\164\162\151\143\x20\143\151\160\150\145\162\x20\142\x65\x20\x6c\157\x61\144\x65\144");
                return false;
        }
        Zc:
        cF:
        $Te->setKey($Lb);
        $Te->setIV($Vg);
        $Te->enableContinuousBuffer();
        wn:
        $jq = '';
        oH:
        if (!(strlen($jq) < $ib)) {
            goto oQ;
        }
        $lI = $Te->encrypt(microtime());
        $sK = $Te->encrypt($lI ^ $yh);
        $yh = $Te->encrypt($sK ^ $lI);
        $jq .= $sK;
        goto oH;
        oQ:
        return substr($jq, 0, $ib);
    }
}
if (!function_exists("\160\x68\x70\x73\145\x63\x6c\151\142\x5f\x73\141\x66\x65\137\x73\145\162\x69\x61\x6c\x69\x7a\145")) {
    function phpseclib_safe_serialize(&$LO)
    {
        if (!is_object($LO)) {
            goto ZH;
        }
        return '';
        ZH:
        if (is_array($LO)) {
            goto Dt;
        }
        return serialize($LO);
        Dt:
        if (!isset($LO["\137\x5f\x70\150\160\163\145\143\x6c\151\142\x5f\155\141\x72\153\145\162"])) {
            goto dX;
        }
        return '';
        dX:
        $tt = array();
        $LO["\x5f\137\160\150\160\x73\145\x63\x6c\151\142\137\155\x61\162\x6b\x65\x72"] = true;
        foreach (array_keys($LO) as $Lb) {
            if (!($Lb !== "\x5f\137\160\150\160\163\145\143\x6c\x69\x62\x5f\x6d\x61\162\153\145\162")) {
                goto iK;
            }
            $tt[$Lb] = phpseclib_safe_serialize($LO[$Lb]);
            iK:
            aI:
        }
        lm:
        unset($LO["\x5f\x5f\x70\150\160\x73\x65\x63\x6c\151\x62\x5f\x6d\x61\x72\x6b\x65\x72"]);
        return serialize($tt);
    }
}
if (!function_exists("\160\x68\160\x73\x65\x63\154\x69\x62\137\162\x65\x73\x6f\154\x76\x65\137\x69\156\143\x6c\x75\144\145\137\160\141\164\150")) {
    function phpseclib_resolve_include_path($z5)
    {
        if (!function_exists("\163\164\x72\x65\141\x6d\x5f\162\x65\x73\157\x6c\x76\145\x5f\151\x6e\143\x6c\x75\144\x65\137\x70\141\x74\150")) {
            goto Js;
        }
        return stream_resolve_include_path($z5);
        Js:
        if (!file_exists($z5)) {
            goto Pk;
        }
        return realpath($z5);
        Pk:
        $Ai = PATH_SEPARATOR == "\72" ? preg_split("\43\x28\x3f\x3c\x21\160\150\x61\162\x29\72\x23", get_include_path()) : explode(PATH_SEPARATOR, get_include_path());
        foreach ($Ai as $UQ) {
            $Ay = substr($UQ, -1) == DIRECTORY_SEPARATOR ? '' : DIRECTORY_SEPARATOR;
            $e6 = $UQ . $Ay . $z5;
            if (!file_exists($e6)) {
                goto r4;
            }
            return realpath($e6);
            r4:
            Yr:
        }
        iW:
        return false;
    }
}
