<?php


define("\115\x41\x54\110\137\x42\x49\x47\111\116\x54\105\107\105\x52\x5f\x4d\x4f\x4e\124\107\117\115\105\122\131", 0);
define("\x4d\x41\x54\110\x5f\102\111\107\111\116\x54\105\x47\x45\x52\137\102\101\x52\122\105\x54\x54", 1);
define("\115\x41\x54\110\137\x42\x49\107\111\x4e\x54\105\x47\x45\x52\x5f\120\x4f\x57\105\122\117\106\x32", 2);
define("\x4d\x41\x54\110\137\x42\111\x47\x49\x4e\x54\x45\x47\x45\122\x5f\x43\x4c\x41\x53\x53\x49\x43", 3);
define("\115\101\124\110\137\x42\x49\107\111\x4e\124\105\x47\105\122\137\116\117\116\105", 4);
define("\x4d\x41\124\x48\x5f\102\111\x47\111\116\x54\x45\107\105\x52\x5f\126\x41\114\125\105", 0);
define("\115\101\x54\x48\x5f\x42\x49\x47\111\x4e\124\105\x47\x45\x52\x5f\x53\x49\x47\x4e", 1);
define("\115\x41\124\110\137\102\111\107\x49\116\x54\105\x47\105\x52\x5f\x56\101\x52\x49\101\x42\x4c\105", 0);
define("\x4d\x41\124\x48\x5f\102\111\107\111\x4e\x54\x45\107\x45\x52\x5f\x44\x41\x54\101", 1);
define("\x4d\101\124\x48\x5f\102\111\x47\x49\116\124\x45\x47\x45\122\137\115\117\104\105\137\x49\116\124\x45\x52\x4e\101\x4c", 1);
define("\x4d\101\124\x48\137\102\111\x47\x49\x4e\x54\x45\107\105\122\x5f\115\x4f\104\x45\137\102\103\115\101\x54\x48", 2);
define("\x4d\101\x54\110\137\x42\111\x47\x49\116\x54\x45\x47\105\x52\x5f\115\117\x44\105\137\107\115\x50", 3);
define("\x4d\x41\124\x48\137\102\111\107\x49\x4e\x54\105\x47\x45\122\x5f\113\x41\x52\101\x54\x53\125\x42\x41\x5f\103\x55\124\117\x46\x46", 25);
class Math_BigInteger
{
    var $value;
    var $is_negative = false;
    var $precision = -1;
    var $bitmask = false;
    var $hex;
    function __construct($FX = 0, $mI = 10)
    {
        if (defined("\x4d\x41\x54\110\x5f\x42\x49\x47\x49\116\x54\x45\x47\105\122\x5f\115\x4f\x44\x45")) {
            goto E0;
        }
        switch (true) {
            case extension_loaded("\147\155\x70"):
                define("\115\x41\x54\110\137\x42\x49\x47\x49\116\124\x45\x47\105\x52\x5f\x4d\117\104\x45", MATH_BIGINTEGER_MODE_GMP);
                goto vD;
            case extension_loaded("\x62\x63\155\141\x74\150"):
                define("\x4d\101\x54\110\137\x42\x49\x47\x49\116\x54\105\107\x45\x52\x5f\115\117\104\x45", MATH_BIGINTEGER_MODE_BCMATH);
                goto vD;
            default:
                define("\x4d\101\x54\110\x5f\102\x49\107\111\x4e\x54\x45\107\x45\122\137\115\x4f\104\105", MATH_BIGINTEGER_MODE_INTERNAL);
        }
        cT:
        vD:
        E0:
        if (!(extension_loaded("\157\160\x65\156\163\163\x6c") && !defined("\115\101\x54\x48\x5f\x42\x49\x47\x49\116\x54\x45\107\105\x52\x5f\117\120\105\x4e\123\123\x4c\x5f\104\111\123\101\x42\x4c\105") && !defined("\115\101\x54\110\x5f\x42\111\107\111\x4e\124\105\x47\x45\122\x5f\117\120\105\x4e\x53\x53\x4c\137\x45\x4e\101\102\114\x45\x44"))) {
            goto qK;
        }
        ob_start();
        @phpinfo();
        $ZV = ob_get_contents();
        ob_end_clean();
        preg_match_all("\43\x4f\160\145\x6e\x53\x53\x4c\40\50\110\145\x61\x64\145\162\174\114\x69\x62\162\x61\x72\171\51\x20\x56\x65\162\x73\151\157\x6e\x28\56\52\51\x23\x69\x6d", $ZV, $GY);
        $k0 = array();
        if (empty($GY[1])) {
            goto vG;
        }
        $lI = 0;
        gN:
        if (!($lI < count($GY[1]))) {
            goto Vu;
        }
        $TN = trim(str_replace("\x3d\76", '', strip_tags($GY[2][$lI])));
        if (!preg_match("\x2f\x28\x5c\x64\x2b\x5c\x2e\x5c\x64\53\134\56\x5c\144\x2b\51\x2f\x69", $TN, $jz)) {
            goto YS;
        }
        $k0[$GY[1][$lI]] = $jz[0];
        goto aK;
        YS:
        $k0[$GY[1][$lI]] = $TN;
        aK:
        H7:
        $lI++;
        goto gN;
        Vu:
        vG:
        switch (true) {
            case !isset($k0["\110\145\141\144\x65\162"]):
            case !isset($k0["\x4c\x69\x62\x72\141\x72\x79"]):
            case $k0["\110\x65\x61\144\145\x72"] == $k0["\114\151\x62\162\x61\x72\x79"]:
            case version_compare($k0["\x48\x65\x61\144\x65\x72"], "\x31\56\x30\x2e\x30") >= 0 && version_compare($k0["\114\151\x62\x72\x61\162\x79"], "\x31\x2e\60\56\x30") >= 0:
                define("\115\101\124\x48\x5f\102\111\107\x49\116\124\x45\x47\105\x52\x5f\117\120\105\x4e\123\123\114\x5f\105\x4e\x41\102\114\105\x44", true);
                goto jJ;
            default:
                define("\x4d\x41\124\x48\137\x42\x49\x47\x49\116\124\105\x47\105\x52\137\x4f\120\105\x4e\123\x53\114\137\104\111\x53\x41\x42\114\x45", true);
        }
        sR:
        jJ:
        qK:
        if (defined("\x50\110\x50\137\111\116\x54\137\123\x49\x5a\105")) {
            goto RJ;
        }
        define("\x50\110\120\x5f\x49\x4e\124\137\123\x49\132\105", 4);
        RJ:
        if (!(!defined("\x4d\x41\x54\x48\x5f\x42\x49\107\111\x4e\124\x45\x47\105\x52\x5f\102\x41\x53\105") && MATH_BIGINTEGER_MODE == MATH_BIGINTEGER_MODE_INTERNAL)) {
            goto cw;
        }
        switch (PHP_INT_SIZE) {
            case 8:
                define("\x4d\101\124\110\x5f\x42\111\x47\x49\116\124\x45\x47\x45\122\137\x42\x41\123\x45", 31);
                define("\x4d\101\x54\x48\x5f\102\111\x47\x49\116\124\x45\107\x45\x52\x5f\x42\x41\123\105\x5f\106\x55\x4c\x4c", 0x80000000);
                define("\115\101\124\x48\x5f\102\111\107\x49\116\x54\105\x47\x45\x52\137\115\x41\x58\137\104\x49\107\x49\x54", 0x7fffffff);
                define("\115\x41\124\110\137\x42\111\x47\x49\x4e\124\105\x47\105\122\137\115\123\102", 0x40000000);
                define("\x4d\101\124\110\137\102\x49\107\x49\x4e\124\105\107\105\122\137\x4d\x41\x58\61\x30", 1000000000);
                define("\115\x41\x54\x48\137\102\x49\x47\x49\116\x54\105\107\105\122\137\115\x41\130\61\60\x5f\x4c\x45\116", 9);
                define("\x4d\101\x54\x48\137\x42\x49\x47\111\x4e\x54\x45\107\105\122\x5f\x4d\x41\130\x5f\x44\111\x47\x49\x54\x32", pow(2, 62));
                goto rV;
            default:
                define("\115\x41\124\x48\x5f\x42\x49\x47\x49\116\124\x45\107\x45\122\137\x42\101\123\105", 26);
                define("\115\101\124\110\137\102\111\x47\x49\x4e\124\105\107\x45\x52\x5f\x42\x41\x53\105\x5f\106\x55\x4c\114", 0x4000000);
                define("\x4d\x41\124\110\x5f\x42\x49\107\x49\x4e\x54\105\107\105\x52\x5f\115\x41\x58\x5f\104\x49\107\x49\124", 0x3ffffff);
                define("\x4d\x41\124\110\x5f\x42\111\107\111\116\x54\x45\107\x45\122\137\115\x53\x42", 0x2000000);
                define("\115\101\124\110\137\102\111\x47\x49\x4e\x54\105\107\x45\x52\137\x4d\x41\130\61\60", 10000000);
                define("\115\101\124\110\x5f\102\x49\107\111\x4e\x54\x45\107\x45\122\137\115\101\130\x31\60\137\114\x45\x4e", 7);
                define("\115\101\124\x48\137\x42\x49\x47\x49\116\124\x45\107\105\122\137\x4d\101\x58\137\x44\111\x47\x49\x54\x32", pow(2, 52));
        }
        ZF:
        rV:
        cw:
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                switch (true) {
                    case is_resource($FX) && get_resource_type($FX) == "\107\115\120\x20\x69\156\x74\145\x67\x65\162":
                    case is_object($FX) && get_class($FX) == "\x47\x4d\x50":
                        $this->value = $FX;
                        return;
                }
                uM:
                lM:
                $this->value = gmp_init(0);
                goto Ue;
            case MATH_BIGINTEGER_MODE_BCMATH:
                $this->value = "\60";
                goto Ue;
            default:
                $this->value = array();
        }
        bn:
        Ue:
        if (!(empty($FX) && (abs($mI) != 256 || $FX !== "\60"))) {
            goto Z4;
        }
        return;
        Z4:
        switch ($mI) {
            case -256:
                if (!(ord($FX[0]) & 0x80)) {
                    goto ei;
                }
                $FX = ~$FX;
                $this->is_negative = true;
                ei:
            case 256:
                switch (MATH_BIGINTEGER_MODE) {
                    case MATH_BIGINTEGER_MODE_GMP:
                        $this->value = function_exists("\147\x6d\x70\x5f\151\155\x70\157\162\164") ? gmp_import($FX) : gmp_init("\x30\170" . bin2hex($FX));
                        if (!$this->is_negative) {
                            goto TF;
                        }
                        $this->value = gmp_neg($this->value);
                        TF:
                        goto wN;
                    case MATH_BIGINTEGER_MODE_BCMATH:
                        $H9 = strlen($FX) + 3 & 0xfffffffc;
                        $FX = str_pad($FX, $H9, chr(0), STR_PAD_LEFT);
                        $lI = 0;
                        nb:
                        if (!($lI < $H9)) {
                            goto gz;
                        }
                        $this->value = bcmul($this->value, "\64\62\71\64\71\x36\67\x32\x39\66", 0);
                        $this->value = bcadd($this->value, 0x1000000 * ord($FX[$lI]) + (ord($FX[$lI + 1]) << 16 | ord($FX[$lI + 2]) << 8 | ord($FX[$lI + 3])), 0);
                        f0:
                        $lI += 4;
                        goto nb;
                        gz:
                        if (!$this->is_negative) {
                            goto A3;
                        }
                        $this->value = "\x2d" . $this->value;
                        A3:
                        goto wN;
                    default:
                        EH:
                        if (!strlen($FX)) {
                            goto dn;
                        }
                        $this->value[] = $this->_bytes2int($this->_base256_rshift($FX, MATH_BIGINTEGER_BASE));
                        goto EH;
                        dn:
                }
                ps:
                wN:
                if (!$this->is_negative) {
                    goto s6;
                }
                if (!(MATH_BIGINTEGER_MODE != MATH_BIGINTEGER_MODE_INTERNAL)) {
                    goto SV;
                }
                $this->is_negative = false;
                SV:
                $yi = $this->add(new Math_BigInteger("\x2d\61"));
                $this->value = $yi->value;
                s6:
                goto A1;
            case 16:
            case -16:
                if (!($mI > 0 && $FX[0] == "\x2d")) {
                    goto jF;
                }
                $this->is_negative = true;
                $FX = substr($FX, 1);
                jF:
                $FX = preg_replace("\43\x5e\x28\x3f\72\60\170\x29\x3f\x28\x5b\101\55\106\x61\55\x66\x30\55\71\x5d\x2a\51\56\x2a\x23", "\44\x31", $FX);
                $sX = false;
                if (!($mI < 0 && hexdec($FX[0]) >= 8)) {
                    goto rI;
                }
                $this->is_negative = $sX = true;
                $FX = bin2hex(~pack("\x48\52", $FX));
                rI:
                switch (MATH_BIGINTEGER_MODE) {
                    case MATH_BIGINTEGER_MODE_GMP:
                        $yi = $this->is_negative ? "\x2d\x30\170" . $FX : "\60\x78" . $FX;
                        $this->value = gmp_init($yi);
                        $this->is_negative = false;
                        goto Cr;
                    case MATH_BIGINTEGER_MODE_BCMATH:
                        $FX = strlen($FX) & 1 ? "\x30" . $FX : $FX;
                        $yi = new Math_BigInteger(pack("\x48\x2a", $FX), 256);
                        $this->value = $this->is_negative ? "\x2d" . $yi->value : $yi->value;
                        $this->is_negative = false;
                        goto Cr;
                    default:
                        $FX = strlen($FX) & 1 ? "\x30" . $FX : $FX;
                        $yi = new Math_BigInteger(pack("\x48\52", $FX), 256);
                        $this->value = $yi->value;
                }
                jP:
                Cr:
                if (!$sX) {
                    goto YI;
                }
                $yi = $this->add(new Math_BigInteger("\55\x31"));
                $this->value = $yi->value;
                YI:
                goto A1;
            case 10:
            case -10:
                $FX = preg_replace("\x23\x28\x3f\74\x21\x5e\x29\x28\x3f\x3a\x2d\x29\x2e\x2a\x7c\x28\77\x3c\x3d\x5e\174\55\x29\x30\x2a\x7c\133\x5e\55\x30\x2d\71\135\x2e\52\43", '', $FX);
                switch (MATH_BIGINTEGER_MODE) {
                    case MATH_BIGINTEGER_MODE_GMP:
                        $this->value = gmp_init($FX);
                        goto tN;
                    case MATH_BIGINTEGER_MODE_BCMATH:
                        $this->value = $FX === "\55" ? "\60" : (string) $FX;
                        goto tN;
                    default:
                        $yi = new Math_BigInteger();
                        $nU = new Math_BigInteger();
                        $nU->value = array(MATH_BIGINTEGER_MAX10);
                        if (!($FX[0] == "\x2d")) {
                            goto x8;
                        }
                        $this->is_negative = true;
                        $FX = substr($FX, 1);
                        x8:
                        $FX = str_pad($FX, strlen($FX) + (MATH_BIGINTEGER_MAX10_LEN - 1) * strlen($FX) % MATH_BIGINTEGER_MAX10_LEN, 0, STR_PAD_LEFT);
                        Ev:
                        if (!strlen($FX)) {
                            goto ab;
                        }
                        $yi = $yi->multiply($nU);
                        $yi = $yi->add(new Math_BigInteger($this->_int2bytes(substr($FX, 0, MATH_BIGINTEGER_MAX10_LEN)), 256));
                        $FX = substr($FX, MATH_BIGINTEGER_MAX10_LEN);
                        goto Ev;
                        ab:
                        $this->value = $yi->value;
                }
                j8:
                tN:
                goto A1;
            case 2:
            case -2:
                if (!($mI > 0 && $FX[0] == "\55")) {
                    goto EB;
                }
                $this->is_negative = true;
                $FX = substr($FX, 1);
                EB:
                $FX = preg_replace("\x23\136\x28\133\60\61\x5d\52\51\x2e\x2a\43", "\44\x31", $FX);
                $FX = str_pad($FX, strlen($FX) + 3 * strlen($FX) % 4, 0, STR_PAD_LEFT);
                $ye = "\60\170";
                hl:
                if (!strlen($FX)) {
                    goto wC;
                }
                $Oy = substr($FX, 0, 4);
                $ye .= dechex(bindec($Oy));
                $FX = substr($FX, 4);
                goto hl;
                wC:
                if (!$this->is_negative) {
                    goto Cg;
                }
                $ye = "\55" . $ye;
                Cg:
                $yi = new Math_BigInteger($ye, 8 * $mI);
                $this->value = $yi->value;
                $this->is_negative = $yi->is_negative;
                goto A1;
            default:
        }
        Bu:
        A1:
    }
    function Math_BigInteger($FX = 0, $mI = 10)
    {
        $this->__construct($FX, $mI);
    }
    function toBytes($Eg = false)
    {
        if (!$Eg) {
            goto vC;
        }
        $wl = $this->compare(new Math_BigInteger());
        if (!($wl == 0)) {
            goto de;
        }
        return $this->precision > 0 ? str_repeat(chr(0), $this->precision + 1 >> 3) : '';
        de:
        $yi = $wl < 0 ? $this->add(new Math_BigInteger(1)) : $this->copy();
        $E2 = $yi->toBytes();
        if (!empty($E2)) {
            goto bo;
        }
        $E2 = chr(0);
        bo:
        if (!(ord($E2[0]) & 0x80)) {
            goto rg;
        }
        $E2 = chr(0) . $E2;
        rg:
        return $wl < 0 ? ~$E2 : $E2;
        vC:
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                if (!(gmp_cmp($this->value, gmp_init(0)) == 0)) {
                    goto jv;
                }
                return $this->precision > 0 ? str_repeat(chr(0), $this->precision + 1 >> 3) : '';
                jv:
                if (function_exists("\x67\155\160\137\145\x78\160\157\162\164")) {
                    goto Ja;
                }
                $yi = gmp_strval(gmp_abs($this->value), 16);
                $yi = strlen($yi) & 1 ? "\60" . $yi : $yi;
                $yi = pack("\x48\52", $yi);
                goto CC;
                Ja:
                $yi = gmp_export($this->value);
                CC:
                return $this->precision > 0 ? substr(str_pad($yi, $this->precision >> 3, chr(0), STR_PAD_LEFT), -($this->precision >> 3)) : ltrim($yi, chr(0));
            case MATH_BIGINTEGER_MODE_BCMATH:
                if (!($this->value === "\60")) {
                    goto s7;
                }
                return $this->precision > 0 ? str_repeat(chr(0), $this->precision + 1 >> 3) : '';
                s7:
                $nI = '';
                $Ra = $this->value;
                if (!($Ra[0] == "\x2d")) {
                    goto xb;
                }
                $Ra = substr($Ra, 1);
                xb:
                n4:
                if (!(bccomp($Ra, "\x30", 0) > 0)) {
                    goto U4;
                }
                $yi = bcmod($Ra, "\x31\x36\x37\67\x37\x32\61\66");
                $nI = chr($yi >> 16) . chr($yi >> 8) . chr($yi) . $nI;
                $Ra = bcdiv($Ra, "\x31\x36\67\x37\67\62\61\66", 0);
                goto n4;
                U4:
                return $this->precision > 0 ? substr(str_pad($nI, $this->precision >> 3, chr(0), STR_PAD_LEFT), -($this->precision >> 3)) : ltrim($nI, chr(0));
        }
        Th:
        FF:
        if (count($this->value)) {
            goto Wg;
        }
        return $this->precision > 0 ? str_repeat(chr(0), $this->precision + 1 >> 3) : '';
        Wg:
        $jq = $this->_int2bytes($this->value[count($this->value) - 1]);
        $yi = $this->copy();
        $lI = count($yi->value) - 2;
        UE:
        if (!($lI >= 0)) {
            goto qx;
        }
        $yi->_base256_lshift($jq, MATH_BIGINTEGER_BASE);
        $jq = $jq | str_pad($yi->_int2bytes($yi->value[$lI]), strlen($jq), chr(0), STR_PAD_LEFT);
        pe:
        --$lI;
        goto UE;
        qx:
        return $this->precision > 0 ? str_pad(substr($jq, -($this->precision + 7 >> 3)), $this->precision + 7 >> 3, chr(0), STR_PAD_LEFT) : $jq;
    }
    function toHex($Eg = false)
    {
        return bin2hex($this->toBytes($Eg));
    }
    function toBits($Eg = false)
    {
        $SX = $this->toHex($Eg);
        $mo = '';
        $lI = strlen($SX) - 8;
        $Mv = strlen($SX) & 7;
        bO:
        if (!($lI >= $Mv)) {
            goto eK;
        }
        $mo = str_pad(decbin(hexdec(substr($SX, $lI, 8))), 32, "\x30", STR_PAD_LEFT) . $mo;
        C5:
        $lI -= 8;
        goto bO;
        eK:
        if (!$Mv) {
            goto UZ;
        }
        $mo = str_pad(decbin(hexdec(substr($SX, 0, $Mv))), 8, "\x30", STR_PAD_LEFT) . $mo;
        UZ:
        $jq = $this->precision > 0 ? substr($mo, -$this->precision) : ltrim($mo, "\60");
        if (!($Eg && $this->compare(new Math_BigInteger()) > 0 && $this->precision <= 0)) {
            goto hp;
        }
        return "\x30" . $jq;
        hp:
        return $jq;
    }
    function toString()
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                return gmp_strval($this->value);
            case MATH_BIGINTEGER_MODE_BCMATH:
                if (!($this->value === "\x30")) {
                    goto wD;
                }
                return "\60";
                wD:
                return ltrim($this->value, "\60");
        }
        QF:
        JD:
        if (count($this->value)) {
            goto bs;
        }
        return "\x30";
        bs:
        $yi = $this->copy();
        $yi->is_negative = false;
        $xC = new Math_BigInteger();
        $xC->value = array(MATH_BIGINTEGER_MAX10);
        $jq = '';
        vr:
        if (!count($yi->value)) {
            goto ds;
        }
        list($yi, $C8) = $yi->divide($xC);
        $jq = str_pad(isset($C8->value[0]) ? $C8->value[0] : '', MATH_BIGINTEGER_MAX10_LEN, "\x30", STR_PAD_LEFT) . $jq;
        goto vr;
        ds:
        $jq = ltrim($jq, "\60");
        if (!empty($jq)) {
            goto EZ;
        }
        $jq = "\x30";
        EZ:
        if (!$this->is_negative) {
            goto Qf;
        }
        $jq = "\x2d" . $jq;
        Qf:
        return $jq;
    }
    function copy()
    {
        $yi = new Math_BigInteger();
        $yi->value = $this->value;
        $yi->is_negative = $this->is_negative;
        $yi->precision = $this->precision;
        $yi->bitmask = $this->bitmask;
        return $yi;
    }
    function __toString()
    {
        return $this->toString();
    }
    function __clone()
    {
        return $this->copy();
    }
    function __sleep()
    {
        $this->hex = $this->toHex(true);
        $qQ = array("\x68\x65\x78");
        if (!($this->precision > 0)) {
            goto Nn;
        }
        $qQ[] = "\x70\162\x65\143\x69\x73\x69\x6f\x6e";
        Nn:
        return $qQ;
    }
    function __wakeup()
    {
        $yi = new Math_BigInteger($this->hex, -16);
        $this->value = $yi->value;
        $this->is_negative = $yi->is_negative;
        if (!($this->precision > 0)) {
            goto rb;
        }
        $this->setPrecision($this->precision);
        rb:
    }
    function __debugInfo()
    {
        $m6 = array();
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $WA = "\147\x6d\x70";
                goto pS;
            case MATH_BIGINTEGER_MODE_BCMATH:
                $WA = "\x62\x63\155\x61\164\x68";
                goto pS;
            case MATH_BIGINTEGER_MODE_INTERNAL:
                $WA = "\x69\x6e\x74\145\162\156\x61\154";
                $m6[] = PHP_INT_SIZE == 8 ? "\x36\x34\55\142\151\164" : "\x33\62\x2d\x62\151\164";
        }
        wA:
        pS:
        if (!(MATH_BIGINTEGER_MODE != MATH_BIGINTEGER_MODE_GMP && defined("\115\101\x54\x48\x5f\x42\111\x47\111\x4e\x54\x45\x47\x45\122\x5f\117\120\105\x4e\123\x53\x4c\137\x45\116\x41\x42\114\x45\104"))) {
            goto L6;
        }
        $m6[] = "\x4f\160\x65\156\123\x53\x4c";
        L6:
        if (empty($m6)) {
            goto f1;
        }
        $WA .= "\40\x28" . implode($m6, "\x2c\x20") . "\51";
        f1:
        return array("\x76\141\x6c\165\145" => "\x30\x78" . $this->toHex(true), "\x65\x6e\147\x69\156\x65" => $WA);
    }
    function add($zR)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi = new Math_BigInteger();
                $yi->value = gmp_add($this->value, $zR->value);
                return $this->_normalize($yi);
            case MATH_BIGINTEGER_MODE_BCMATH:
                $yi = new Math_BigInteger();
                $yi->value = bcadd($this->value, $zR->value, 0);
                return $this->_normalize($yi);
        }
        Fk:
        oC:
        $yi = $this->_add($this->value, $this->is_negative, $zR->value, $zR->is_negative);
        $jq = new Math_BigInteger();
        $jq->value = $yi[MATH_BIGINTEGER_VALUE];
        $jq->is_negative = $yi[MATH_BIGINTEGER_SIGN];
        return $this->_normalize($jq);
    }
    function _add($r9, $wN, $vc, $ps)
    {
        $ek = count($r9);
        $PK = count($vc);
        if ($ek == 0) {
            goto Kr;
        }
        if ($PK == 0) {
            goto it;
        }
        goto OP;
        Kr:
        return array(MATH_BIGINTEGER_VALUE => $vc, MATH_BIGINTEGER_SIGN => $ps);
        goto OP;
        it:
        return array(MATH_BIGINTEGER_VALUE => $r9, MATH_BIGINTEGER_SIGN => $wN);
        OP:
        if (!($wN != $ps)) {
            goto jT;
        }
        if (!($r9 == $vc)) {
            goto XT;
        }
        return array(MATH_BIGINTEGER_VALUE => array(), MATH_BIGINTEGER_SIGN => false);
        XT:
        $yi = $this->_subtract($r9, false, $vc, false);
        $yi[MATH_BIGINTEGER_SIGN] = $this->_compare($r9, false, $vc, false) > 0 ? $wN : $ps;
        return $yi;
        jT:
        if ($ek < $PK) {
            goto Jr;
        }
        $wr = $PK;
        $nI = $r9;
        goto Vb;
        Jr:
        $wr = $ek;
        $nI = $vc;
        Vb:
        $nI[count($nI)] = 0;
        $DF = 0;
        $lI = 0;
        $NS = 1;
        tL:
        if (!($NS < $wr)) {
            goto pr;
        }
        $l5 = $r9[$NS] * MATH_BIGINTEGER_BASE_FULL + $r9[$lI] + $vc[$NS] * MATH_BIGINTEGER_BASE_FULL + $vc[$lI] + $DF;
        $DF = $l5 >= MATH_BIGINTEGER_MAX_DIGIT2;
        $l5 = $DF ? $l5 - MATH_BIGINTEGER_MAX_DIGIT2 : $l5;
        $yi = MATH_BIGINTEGER_BASE === 26 ? intval($l5 / 0x4000000) : $l5 >> 31;
        $nI[$lI] = (int) ($l5 - MATH_BIGINTEGER_BASE_FULL * $yi);
        $nI[$NS] = $yi;
        Vz:
        $lI += 2;
        $NS += 2;
        goto tL;
        pr:
        if (!($NS == $wr)) {
            goto o_;
        }
        $l5 = $r9[$lI] + $vc[$lI] + $DF;
        $DF = $l5 >= MATH_BIGINTEGER_BASE_FULL;
        $nI[$lI] = $DF ? $l5 - MATH_BIGINTEGER_BASE_FULL : $l5;
        ++$lI;
        o_:
        if (!$DF) {
            goto U8;
        }
        dv:
        if (!($nI[$lI] == MATH_BIGINTEGER_MAX_DIGIT)) {
            goto Lg;
        }
        $nI[$lI] = 0;
        kM:
        ++$lI;
        goto dv;
        Lg:
        ++$nI[$lI];
        U8:
        return array(MATH_BIGINTEGER_VALUE => $this->_trim($nI), MATH_BIGINTEGER_SIGN => $wN);
    }
    function subtract($zR)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi = new Math_BigInteger();
                $yi->value = gmp_sub($this->value, $zR->value);
                return $this->_normalize($yi);
            case MATH_BIGINTEGER_MODE_BCMATH:
                $yi = new Math_BigInteger();
                $yi->value = bcsub($this->value, $zR->value, 0);
                return $this->_normalize($yi);
        }
        iZ:
        qo:
        $yi = $this->_subtract($this->value, $this->is_negative, $zR->value, $zR->is_negative);
        $jq = new Math_BigInteger();
        $jq->value = $yi[MATH_BIGINTEGER_VALUE];
        $jq->is_negative = $yi[MATH_BIGINTEGER_SIGN];
        return $this->_normalize($jq);
    }
    function _subtract($r9, $wN, $vc, $ps)
    {
        $ek = count($r9);
        $PK = count($vc);
        if ($ek == 0) {
            goto qz;
        }
        if ($PK == 0) {
            goto Z7;
        }
        goto nW;
        qz:
        return array(MATH_BIGINTEGER_VALUE => $vc, MATH_BIGINTEGER_SIGN => !$ps);
        goto nW;
        Z7:
        return array(MATH_BIGINTEGER_VALUE => $r9, MATH_BIGINTEGER_SIGN => $wN);
        nW:
        if (!($wN != $ps)) {
            goto aw;
        }
        $yi = $this->_add($r9, false, $vc, false);
        $yi[MATH_BIGINTEGER_SIGN] = $wN;
        return $yi;
        aw:
        $M1 = $this->_compare($r9, $wN, $vc, $ps);
        if ($M1) {
            goto E1;
        }
        return array(MATH_BIGINTEGER_VALUE => array(), MATH_BIGINTEGER_SIGN => false);
        E1:
        if (!(!$wN && $M1 < 0 || $wN && $M1 > 0)) {
            goto VC;
        }
        $yi = $r9;
        $r9 = $vc;
        $vc = $yi;
        $wN = !$wN;
        $ek = count($r9);
        $PK = count($vc);
        VC:
        $DF = 0;
        $lI = 0;
        $NS = 1;
        va:
        if (!($NS < $PK)) {
            goto d0;
        }
        $l5 = $r9[$NS] * MATH_BIGINTEGER_BASE_FULL + $r9[$lI] - $vc[$NS] * MATH_BIGINTEGER_BASE_FULL - $vc[$lI] - $DF;
        $DF = $l5 < 0;
        $l5 = $DF ? $l5 + MATH_BIGINTEGER_MAX_DIGIT2 : $l5;
        $yi = MATH_BIGINTEGER_BASE === 26 ? intval($l5 / 0x4000000) : $l5 >> 31;
        $r9[$lI] = (int) ($l5 - MATH_BIGINTEGER_BASE_FULL * $yi);
        $r9[$NS] = $yi;
        NH:
        $lI += 2;
        $NS += 2;
        goto va;
        d0:
        if (!($NS == $PK)) {
            goto f4;
        }
        $l5 = $r9[$lI] - $vc[$lI] - $DF;
        $DF = $l5 < 0;
        $r9[$lI] = $DF ? $l5 + MATH_BIGINTEGER_BASE_FULL : $l5;
        ++$lI;
        f4:
        if (!$DF) {
            goto bx;
        }
        vk:
        if ($r9[$lI]) {
            goto oX;
        }
        $r9[$lI] = MATH_BIGINTEGER_MAX_DIGIT;
        ej:
        ++$lI;
        goto vk;
        oX:
        --$r9[$lI];
        bx:
        return array(MATH_BIGINTEGER_VALUE => $this->_trim($r9), MATH_BIGINTEGER_SIGN => $wN);
    }
    function multiply($FX)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi = new Math_BigInteger();
                $yi->value = gmp_mul($this->value, $FX->value);
                return $this->_normalize($yi);
            case MATH_BIGINTEGER_MODE_BCMATH:
                $yi = new Math_BigInteger();
                $yi->value = bcmul($this->value, $FX->value, 0);
                return $this->_normalize($yi);
        }
        R1:
        tv:
        $yi = $this->_multiply($this->value, $this->is_negative, $FX->value, $FX->is_negative);
        $uu = new Math_BigInteger();
        $uu->value = $yi[MATH_BIGINTEGER_VALUE];
        $uu->is_negative = $yi[MATH_BIGINTEGER_SIGN];
        return $this->_normalize($uu);
    }
    function _multiply($r9, $wN, $vc, $ps)
    {
        $ht = count($r9);
        $Cq = count($vc);
        if (!(!$ht || !$Cq)) {
            goto VJ;
        }
        return array(MATH_BIGINTEGER_VALUE => array(), MATH_BIGINTEGER_SIGN => false);
        VJ:
        return array(MATH_BIGINTEGER_VALUE => min($ht, $Cq) < 2 * MATH_BIGINTEGER_KARATSUBA_CUTOFF ? $this->_trim($this->_regularMultiply($r9, $vc)) : $this->_trim($this->_karatsuba($r9, $vc)), MATH_BIGINTEGER_SIGN => $wN != $ps);
    }
    function _regularMultiply($r9, $vc)
    {
        $ht = count($r9);
        $Cq = count($vc);
        if (!(!$ht || !$Cq)) {
            goto M7;
        }
        return array();
        M7:
        if (!($ht < $Cq)) {
            goto eG;
        }
        $yi = $r9;
        $r9 = $vc;
        $vc = $yi;
        $ht = count($r9);
        $Cq = count($vc);
        eG:
        $rC = $this->_array_repeat(0, $ht + $Cq);
        $DF = 0;
        $NS = 0;
        Ib:
        if (!($NS < $ht)) {
            goto Qz;
        }
        $yi = $r9[$NS] * $vc[0] + $DF;
        $DF = MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31;
        $rC[$NS] = (int) ($yi - MATH_BIGINTEGER_BASE_FULL * $DF);
        N0:
        ++$NS;
        goto Ib;
        Qz:
        $rC[$NS] = $DF;
        $lI = 1;
        zm:
        if (!($lI < $Cq)) {
            goto Zq;
        }
        $DF = 0;
        $NS = 0;
        $WK = $lI;
        q8:
        if (!($NS < $ht)) {
            goto kO;
        }
        $yi = $rC[$WK] + $r9[$NS] * $vc[$lI] + $DF;
        $DF = MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31;
        $rC[$WK] = (int) ($yi - MATH_BIGINTEGER_BASE_FULL * $DF);
        Ak:
        ++$NS;
        ++$WK;
        goto q8;
        kO:
        $rC[$WK] = $DF;
        jN:
        ++$lI;
        goto zm;
        Zq:
        return $rC;
    }
    function _karatsuba($r9, $vc)
    {
        $jz = min(count($r9) >> 1, count($vc) >> 1);
        if (!($jz < MATH_BIGINTEGER_KARATSUBA_CUTOFF)) {
            goto li;
        }
        return $this->_regularMultiply($r9, $vc);
        li:
        $CL = array_slice($r9, $jz);
        $GV = array_slice($r9, 0, $jz);
        $CB = array_slice($vc, $jz);
        $Wm = array_slice($vc, 0, $jz);
        $Il = $this->_karatsuba($CL, $CB);
        $C_ = $this->_karatsuba($GV, $Wm);
        $Vx = $this->_add($CL, false, $GV, false);
        $yi = $this->_add($CB, false, $Wm, false);
        $Vx = $this->_karatsuba($Vx[MATH_BIGINTEGER_VALUE], $yi[MATH_BIGINTEGER_VALUE]);
        $yi = $this->_add($Il, false, $C_, false);
        $Vx = $this->_subtract($Vx, false, $yi[MATH_BIGINTEGER_VALUE], false);
        $Il = array_merge(array_fill(0, 2 * $jz, 0), $Il);
        $Vx[MATH_BIGINTEGER_VALUE] = array_merge(array_fill(0, $jz, 0), $Vx[MATH_BIGINTEGER_VALUE]);
        $Bw = $this->_add($Il, false, $Vx[MATH_BIGINTEGER_VALUE], $Vx[MATH_BIGINTEGER_SIGN]);
        $Bw = $this->_add($Bw[MATH_BIGINTEGER_VALUE], $Bw[MATH_BIGINTEGER_SIGN], $C_, false);
        return $Bw[MATH_BIGINTEGER_VALUE];
    }
    function _square($FX = false)
    {
        return count($FX) < 2 * MATH_BIGINTEGER_KARATSUBA_CUTOFF ? $this->_trim($this->_baseSquare($FX)) : $this->_trim($this->_karatsubaSquare($FX));
    }
    function _baseSquare($nI)
    {
        if (!empty($nI)) {
            goto TN;
        }
        return array();
        TN:
        $I3 = $this->_array_repeat(0, 2 * count($nI));
        $lI = 0;
        $eU = count($nI) - 1;
        Cl:
        if (!($lI <= $eU)) {
            goto W7;
        }
        $dN = $lI << 1;
        $yi = $I3[$dN] + $nI[$lI] * $nI[$lI];
        $DF = MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31;
        $I3[$dN] = (int) ($yi - MATH_BIGINTEGER_BASE_FULL * $DF);
        $NS = $lI + 1;
        $WK = $dN + 1;
        R6:
        if (!($NS <= $eU)) {
            goto vh;
        }
        $yi = $I3[$WK] + 2 * $nI[$NS] * $nI[$lI] + $DF;
        $DF = MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31;
        $I3[$WK] = (int) ($yi - MATH_BIGINTEGER_BASE_FULL * $DF);
        o4:
        ++$NS;
        ++$WK;
        goto R6;
        vh:
        $I3[$lI + $eU + 1] = $DF;
        jt:
        ++$lI;
        goto Cl;
        W7:
        return $I3;
    }
    function _karatsubaSquare($nI)
    {
        $jz = count($nI) >> 1;
        if (!($jz < MATH_BIGINTEGER_KARATSUBA_CUTOFF)) {
            goto yU;
        }
        return $this->_baseSquare($nI);
        yU:
        $CL = array_slice($nI, $jz);
        $GV = array_slice($nI, 0, $jz);
        $Il = $this->_karatsubaSquare($CL);
        $C_ = $this->_karatsubaSquare($GV);
        $Vx = $this->_add($CL, false, $GV, false);
        $Vx = $this->_karatsubaSquare($Vx[MATH_BIGINTEGER_VALUE]);
        $yi = $this->_add($Il, false, $C_, false);
        $Vx = $this->_subtract($Vx, false, $yi[MATH_BIGINTEGER_VALUE], false);
        $Il = array_merge(array_fill(0, 2 * $jz, 0), $Il);
        $Vx[MATH_BIGINTEGER_VALUE] = array_merge(array_fill(0, $jz, 0), $Vx[MATH_BIGINTEGER_VALUE]);
        $Tg = $this->_add($Il, false, $Vx[MATH_BIGINTEGER_VALUE], $Vx[MATH_BIGINTEGER_SIGN]);
        $Tg = $this->_add($Tg[MATH_BIGINTEGER_VALUE], $Tg[MATH_BIGINTEGER_SIGN], $C_, false);
        return $Tg[MATH_BIGINTEGER_VALUE];
    }
    function divide($zR)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $hb = new Math_BigInteger();
                $KB = new Math_BigInteger();
                list($hb->value, $KB->value) = gmp_div_qr($this->value, $zR->value);
                if (!(gmp_sign($KB->value) < 0)) {
                    goto QL;
                }
                $KB->value = gmp_add($KB->value, gmp_abs($zR->value));
                QL:
                return array($this->_normalize($hb), $this->_normalize($KB));
            case MATH_BIGINTEGER_MODE_BCMATH:
                $hb = new Math_BigInteger();
                $KB = new Math_BigInteger();
                $hb->value = bcdiv($this->value, $zR->value, 0);
                $KB->value = bcmod($this->value, $zR->value);
                if (!($KB->value[0] == "\55")) {
                    goto Kw;
                }
                $KB->value = bcadd($KB->value, $zR->value[0] == "\55" ? substr($zR->value, 1) : $zR->value, 0);
                Kw:
                return array($this->_normalize($hb), $this->_normalize($KB));
        }
        P0:
        iP:
        if (!(count($zR->value) == 1)) {
            goto Hn;
        }
        list($f8, $sK) = $this->_divide_digit($this->value, $zR->value[0]);
        $hb = new Math_BigInteger();
        $KB = new Math_BigInteger();
        $hb->value = $f8;
        $KB->value = array($sK);
        $hb->is_negative = $this->is_negative != $zR->is_negative;
        return array($this->_normalize($hb), $this->_normalize($KB));
        Hn:
        static $Sk;
        if (isset($Sk)) {
            goto Ws;
        }
        $Sk = new Math_BigInteger();
        Ws:
        $FX = $this->copy();
        $zR = $zR->copy();
        $iC = $FX->is_negative;
        $bk = $zR->is_negative;
        $FX->is_negative = $zR->is_negative = false;
        $M1 = $FX->compare($zR);
        if ($M1) {
            goto Yl;
        }
        $yi = new Math_BigInteger();
        $yi->value = array(1);
        $yi->is_negative = $iC != $bk;
        return array($this->_normalize($yi), $this->_normalize(new Math_BigInteger()));
        Yl:
        if (!($M1 < 0)) {
            goto qy;
        }
        if (!$iC) {
            goto rC;
        }
        $FX = $zR->subtract($FX);
        rC:
        return array($this->_normalize(new Math_BigInteger()), $this->_normalize($FX));
        qy:
        $VG = $zR->value[count($zR->value) - 1];
        $Tl = 0;
        VX:
        if ($VG & MATH_BIGINTEGER_MSB) {
            goto Gg;
        }
        $VG <<= 1;
        P9:
        ++$Tl;
        goto VX;
        Gg:
        $FX->_lshift($Tl);
        $zR->_lshift($Tl);
        $vc =& $zR->value;
        $m9 = count($FX->value) - 1;
        $kJ = count($zR->value) - 1;
        $hb = new Math_BigInteger();
        $Wg =& $hb->value;
        $Wg = $this->_array_repeat(0, $m9 - $kJ + 1);
        static $yi, $C6, $it;
        if (isset($yi)) {
            goto RV;
        }
        $yi = new Math_BigInteger();
        $C6 = new Math_BigInteger();
        $it = new Math_BigInteger();
        RV:
        $QK =& $yi->value;
        $qx =& $it->value;
        $QK = array_merge($this->_array_repeat(0, $m9 - $kJ), $vc);
        IW:
        if (!($FX->compare($yi) >= 0)) {
            goto M2;
        }
        ++$Wg[$m9 - $kJ];
        $FX = $FX->subtract($yi);
        $m9 = count($FX->value) - 1;
        goto IW;
        M2:
        $lI = $m9;
        eW:
        if (!($lI >= $kJ + 1)) {
            goto Uy;
        }
        $r9 =& $FX->value;
        $dR = array(isset($r9[$lI]) ? $r9[$lI] : 0, isset($r9[$lI - 1]) ? $r9[$lI - 1] : 0, isset($r9[$lI - 2]) ? $r9[$lI - 2] : 0);
        $Dw = array($vc[$kJ], $kJ > 0 ? $vc[$kJ - 1] : 0);
        $WE = $lI - $kJ - 1;
        if ($dR[0] == $Dw[0]) {
            goto An;
        }
        $Wg[$WE] = $this->_safe_divide($dR[0] * MATH_BIGINTEGER_BASE_FULL + $dR[1], $Dw[0]);
        goto nQ;
        An:
        $Wg[$WE] = MATH_BIGINTEGER_MAX_DIGIT;
        nQ:
        $QK = array($Dw[1], $Dw[0]);
        $C6->value = array($Wg[$WE]);
        $C6 = $C6->multiply($yi);
        $qx = array($dR[2], $dR[1], $dR[0]);
        Ai:
        if (!($C6->compare($it) > 0)) {
            goto hc;
        }
        --$Wg[$WE];
        $C6->value = array($Wg[$WE]);
        $C6 = $C6->multiply($yi);
        goto Ai;
        hc:
        $Z1 = $this->_array_repeat(0, $WE);
        $QK = array($Wg[$WE]);
        $yi = $yi->multiply($zR);
        $QK =& $yi->value;
        $QK = array_merge($Z1, $QK);
        $FX = $FX->subtract($yi);
        if (!($FX->compare($Sk) < 0)) {
            goto YE;
        }
        $QK = array_merge($Z1, $vc);
        $FX = $FX->add($yi);
        --$Wg[$WE];
        YE:
        $m9 = count($r9) - 1;
        YM:
        --$lI;
        goto eW;
        Uy:
        $FX->_rshift($Tl);
        $hb->is_negative = $iC != $bk;
        if (!$iC) {
            goto ak;
        }
        $zR->_rshift($Tl);
        $FX = $zR->subtract($FX);
        ak:
        return array($this->_normalize($hb), $this->_normalize($FX));
    }
    function _divide_digit($WQ, $xC)
    {
        $DF = 0;
        $jq = array();
        $lI = count($WQ) - 1;
        zA:
        if (!($lI >= 0)) {
            goto Ge;
        }
        $yi = MATH_BIGINTEGER_BASE_FULL * $DF + $WQ[$lI];
        $jq[$lI] = $this->_safe_divide($yi, $xC);
        $DF = (int) ($yi - $xC * $jq[$lI]);
        vZ:
        --$lI;
        goto zA;
        Ge:
        return array($jq, $DF);
    }
    function modPow($u_, $RD)
    {
        $RD = $this->bitmask !== false && $this->bitmask->compare($RD) < 0 ? $this->bitmask : $RD->abs();
        if (!($u_->compare(new Math_BigInteger()) < 0)) {
            goto vJ;
        }
        $u_ = $u_->abs();
        $yi = $this->modInverse($RD);
        if (!($yi === false)) {
            goto jY;
        }
        return false;
        jY:
        return $this->_normalize($yi->modPow($u_, $RD));
        vJ:
        if (!(MATH_BIGINTEGER_MODE == MATH_BIGINTEGER_MODE_GMP)) {
            goto sc;
        }
        $yi = new Math_BigInteger();
        $yi->value = gmp_powm($this->value, $u_->value, $RD->value);
        return $this->_normalize($yi);
        sc:
        if (!($this->compare(new Math_BigInteger()) < 0 || $this->compare($RD) > 0)) {
            goto Kn;
        }
        list(, $yi) = $this->divide($RD);
        return $yi->modPow($u_, $RD);
        Kn:
        if (!defined("\x4d\101\124\110\137\x42\x49\x47\111\x4e\x54\x45\107\105\122\137\x4f\x50\105\x4e\123\x53\114\137\105\x4e\101\102\114\105\104")) {
            goto f6;
        }
        $uH = array("\x6d\157\144\x75\154\165\x73" => $RD->toBytes(true), "\x70\x75\142\x6c\151\143\105\170\x70\157\156\x65\156\x74" => $u_->toBytes(true));
        $uH = array("\x6d\x6f\x64\165\154\x75\x73" => pack("\103\141\x2a\x61\x2a", 2, $this->_encodeASN1Length(strlen($uH["\x6d\157\x64\x75\154\165\163"])), $uH["\155\x6f\x64\165\154\x75\163"]), "\x70\x75\142\154\x69\143\x45\x78\160\157\x6e\x65\x6e\164" => pack("\x43\141\x2a\x61\52", 2, $this->_encodeASN1Length(strlen($uH["\x70\x75\142\x6c\x69\143\105\170\160\x6f\156\x65\x6e\164"])), $uH["\x70\165\x62\154\x69\x63\105\x78\x70\157\156\x65\156\164"]));
        $O3 = pack("\103\141\x2a\141\52\141\x2a", 48, $this->_encodeASN1Length(strlen($uH["\x6d\157\144\165\154\165\x73"]) + strlen($uH["\160\x75\x62\x6c\x69\143\x45\170\160\157\156\x65\156\164"])), $uH["\x6d\157\x64\165\x6c\165\163"], $uH["\x70\x75\x62\x6c\151\143\105\170\160\157\156\x65\156\x74"]);
        $gI = pack("\x48\x2a", "\x33\x30\60\x64\x30\66\x30\71\x32\141\x38\x36\64\70\70\66\146\67\60\144\x30\61\x30\x31\60\61\60\x35\60\60");
        $O3 = chr(0) . $O3;
        $O3 = chr(3) . $this->_encodeASN1Length(strlen($O3)) . $O3;
        $zv = pack("\103\141\x2a\141\x2a", 48, $this->_encodeASN1Length(strlen($gI . $O3)), $gI . $O3);
        $O3 = "\x2d\x2d\x2d\x2d\x2d\x42\x45\107\x49\116\40\x50\x55\x42\114\111\x43\x20\x4b\105\131\55\x2d\55\x2d\x2d\15\xa" . chunk_split(base64_encode($zv)) . "\55\x2d\55\55\x2d\105\x4e\104\x20\x50\125\x42\x4c\111\103\x20\113\105\131\55\x2d\x2d\x2d\55";
        $JG = str_pad($this->toBytes(), strlen($RD->toBytes(true)) - 1, "\x0", STR_PAD_LEFT);
        if (!openssl_public_encrypt($JG, $jq, $O3, OPENSSL_NO_PADDING)) {
            goto i9;
        }
        return new Math_BigInteger($jq, 256);
        i9:
        f6:
        if (!(MATH_BIGINTEGER_MODE == MATH_BIGINTEGER_MODE_BCMATH)) {
            goto vu;
        }
        $yi = new Math_BigInteger();
        $yi->value = bcpowmod($this->value, $u_->value, $RD->value, 0);
        return $this->_normalize($yi);
        vu:
        if (!empty($u_->value)) {
            goto m7;
        }
        $yi = new Math_BigInteger();
        $yi->value = array(1);
        return $this->_normalize($yi);
        m7:
        if (!($u_->value == array(1))) {
            goto vi;
        }
        list(, $yi) = $this->divide($RD);
        return $this->_normalize($yi);
        vi:
        if (!($u_->value == array(2))) {
            goto EI;
        }
        $yi = new Math_BigInteger();
        $yi->value = $this->_square($this->value);
        list(, $yi) = $yi->divide($RD);
        return $this->_normalize($yi);
        EI:
        return $this->_normalize($this->_slidingWindow($u_, $RD, MATH_BIGINTEGER_BARRETT));
        if (!($RD->value[0] & 1)) {
            goto XM;
        }
        return $this->_normalize($this->_slidingWindow($u_, $RD, MATH_BIGINTEGER_MONTGOMERY));
        XM:
        $lI = 0;
        ZN:
        if (!($lI < count($RD->value))) {
            goto cA;
        }
        if (!$RD->value[$lI]) {
            goto V8;
        }
        $yi = decbin($RD->value[$lI]);
        $NS = strlen($yi) - strrpos($yi, "\61") - 1;
        $NS += 26 * $lI;
        goto cA;
        V8:
        om:
        ++$lI;
        goto ZN;
        cA:
        $z0 = $RD->copy();
        $z0->_rshift($NS);
        $mZ = new Math_BigInteger();
        $mZ->value = array(1);
        $mZ->_lshift($NS);
        $YE = $z0->value != array(1) ? $this->_slidingWindow($u_, $z0, MATH_BIGINTEGER_MONTGOMERY) : new Math_BigInteger();
        $ob = $this->_slidingWindow($u_, $mZ, MATH_BIGINTEGER_POWEROF2);
        $CB = $mZ->modInverse($z0);
        $OT = $z0->modInverse($mZ);
        $jq = $YE->multiply($mZ);
        $jq = $jq->multiply($CB);
        $yi = $ob->multiply($z0);
        $yi = $yi->multiply($OT);
        $jq = $jq->add($yi);
        list(, $jq) = $jq->divide($RD);
        return $this->_normalize($jq);
    }
    function powMod($u_, $RD)
    {
        return $this->modPow($u_, $RD);
    }
    function _slidingWindow($u_, $RD, $U8)
    {
        static $lv = array(7, 25, 81, 241, 673, 1793);
        $j4 = $u_->value;
        $cp = count($j4) - 1;
        $LK = decbin($j4[$cp]);
        $lI = $cp - 1;
        t7:
        if (!($lI >= 0)) {
            goto A7;
        }
        $LK .= str_pad(decbin($j4[$lI]), MATH_BIGINTEGER_BASE, "\x30", STR_PAD_LEFT);
        J9:
        --$lI;
        goto t7;
        A7:
        $cp = strlen($LK);
        $lI = 0;
        $vZ = 1;
        lh:
        if (!($lI < count($lv) && $cp > $lv[$lI])) {
            goto zl;
        }
        pF:
        ++$vZ;
        ++$lI;
        goto lh;
        zl:
        $ej = $RD->value;
        $Lx = array();
        $Lx[1] = $this->_prepareReduce($this->value, $ej, $U8);
        $Lx[2] = $this->_squareReduce($Lx[1], $ej, $U8);
        $yi = 1 << $vZ - 1;
        $lI = 1;
        Lk:
        if (!($lI < $yi)) {
            goto GB;
        }
        $dN = $lI << 1;
        $Lx[$dN + 1] = $this->_multiplyReduce($Lx[$dN - 1], $Lx[2], $ej, $U8);
        eE:
        ++$lI;
        goto Lk;
        GB:
        $jq = array(1);
        $jq = $this->_prepareReduce($jq, $ej, $U8);
        $lI = 0;
        KK:
        if (!($lI < $cp)) {
            goto KA;
        }
        if (!$LK[$lI]) {
            goto w9;
        }
        $NS = $vZ - 1;
        BC:
        if (!($NS > 0)) {
            goto XL;
        }
        if (empty($LK[$lI + $NS])) {
            goto T6;
        }
        goto XL;
        T6:
        KR:
        --$NS;
        goto BC;
        XL:
        $WK = 0;
        No:
        if (!($WK <= $NS)) {
            goto Iy;
        }
        $jq = $this->_squareReduce($jq, $ej, $U8);
        rA:
        ++$WK;
        goto No;
        Iy:
        $jq = $this->_multiplyReduce($jq, $Lx[bindec(substr($LK, $lI, $NS + 1))], $ej, $U8);
        $lI += $NS + 1;
        goto vY;
        w9:
        $jq = $this->_squareReduce($jq, $ej, $U8);
        ++$lI;
        vY:
        WN:
        goto KK;
        KA:
        $yi = new Math_BigInteger();
        $yi->value = $this->_reduce($jq, $ej, $U8);
        return $yi;
    }
    function _reduce($FX, $RD, $U8)
    {
        switch ($U8) {
            case MATH_BIGINTEGER_MONTGOMERY:
                return $this->_montgomery($FX, $RD);
            case MATH_BIGINTEGER_BARRETT:
                return $this->_barrett($FX, $RD);
            case MATH_BIGINTEGER_POWEROF2:
                $C6 = new Math_BigInteger();
                $C6->value = $FX;
                $it = new Math_BigInteger();
                $it->value = $RD;
                return $FX->_mod2($RD);
            case MATH_BIGINTEGER_CLASSIC:
                $C6 = new Math_BigInteger();
                $C6->value = $FX;
                $it = new Math_BigInteger();
                $it->value = $RD;
                list(, $yi) = $C6->divide($it);
                return $yi->value;
            case MATH_BIGINTEGER_NONE:
                return $FX;
            default:
        }
        en:
        F7:
    }
    function _prepareReduce($FX, $RD, $U8)
    {
        if (!($U8 == MATH_BIGINTEGER_MONTGOMERY)) {
            goto ZP;
        }
        return $this->_prepMontgomery($FX, $RD);
        ZP:
        return $this->_reduce($FX, $RD, $U8);
    }
    function _multiplyReduce($FX, $zR, $RD, $U8)
    {
        if (!($U8 == MATH_BIGINTEGER_MONTGOMERY)) {
            goto lu;
        }
        return $this->_montgomeryMultiply($FX, $zR, $RD);
        lu:
        $yi = $this->_multiply($FX, false, $zR, false);
        return $this->_reduce($yi[MATH_BIGINTEGER_VALUE], $RD, $U8);
    }
    function _squareReduce($FX, $RD, $U8)
    {
        if (!($U8 == MATH_BIGINTEGER_MONTGOMERY)) {
            goto hq;
        }
        return $this->_montgomeryMultiply($FX, $FX, $RD);
        hq:
        return $this->_reduce($this->_square($FX), $RD, $U8);
    }
    function _mod2($RD)
    {
        $yi = new Math_BigInteger();
        $yi->value = array(1);
        return $this->bitwise_and($RD->subtract($yi));
    }
    function _barrett($RD, $jz)
    {
        static $vz = array(MATH_BIGINTEGER_VARIABLE => array(), MATH_BIGINTEGER_DATA => array());
        $Pv = count($jz);
        if (!(count($RD) > 2 * $Pv)) {
            goto gf;
        }
        $C6 = new Math_BigInteger();
        $it = new Math_BigInteger();
        $C6->value = $RD;
        $it->value = $jz;
        list(, $yi) = $C6->divide($it);
        return $yi->value;
        gf:
        if (!($Pv < 5)) {
            goto Me;
        }
        return $this->_regularBarrett($RD, $jz);
        Me:
        if (($Lb = array_search($jz, $vz[MATH_BIGINTEGER_VARIABLE])) === false) {
            goto Gf;
        }
        extract($vz[MATH_BIGINTEGER_DATA][$Lb]);
        goto aN;
        Gf:
        $Lb = count($vz[MATH_BIGINTEGER_VARIABLE]);
        $vz[MATH_BIGINTEGER_VARIABLE][] = $jz;
        $C6 = new Math_BigInteger();
        $Pj =& $C6->value;
        $Pj = $this->_array_repeat(0, $Pv + ($Pv >> 1));
        $Pj[] = 1;
        $it = new Math_BigInteger();
        $it->value = $jz;
        list($B7, $Y9) = $C6->divide($it);
        $B7 = $B7->value;
        $Y9 = $Y9->value;
        $vz[MATH_BIGINTEGER_DATA][] = array("\165" => $B7, "\155\61" => $Y9);
        aN:
        $Uj = $Pv + ($Pv >> 1);
        $bV = array_slice($RD, 0, $Uj);
        $Se = array_slice($RD, $Uj);
        $bV = $this->_trim($bV);
        $yi = $this->_multiply($Se, false, $Y9, false);
        $RD = $this->_add($bV, false, $yi[MATH_BIGINTEGER_VALUE], false);
        if (!($Pv & 1)) {
            goto gh;
        }
        return $this->_regularBarrett($RD[MATH_BIGINTEGER_VALUE], $jz);
        gh:
        $yi = array_slice($RD[MATH_BIGINTEGER_VALUE], $Pv - 1);
        $yi = $this->_multiply($yi, false, $B7, false);
        $yi = array_slice($yi[MATH_BIGINTEGER_VALUE], ($Pv >> 1) + 1);
        $yi = $this->_multiply($yi, false, $jz, false);
        $jq = $this->_subtract($RD[MATH_BIGINTEGER_VALUE], false, $yi[MATH_BIGINTEGER_VALUE], false);
        ML:
        if (!($this->_compare($jq[MATH_BIGINTEGER_VALUE], $jq[MATH_BIGINTEGER_SIGN], $jz, false) >= 0)) {
            goto O_;
        }
        $jq = $this->_subtract($jq[MATH_BIGINTEGER_VALUE], $jq[MATH_BIGINTEGER_SIGN], $jz, false);
        goto ML;
        O_:
        return $jq[MATH_BIGINTEGER_VALUE];
    }
    function _regularBarrett($FX, $RD)
    {
        static $vz = array(MATH_BIGINTEGER_VARIABLE => array(), MATH_BIGINTEGER_DATA => array());
        $ct = count($RD);
        if (!(count($FX) > 2 * $ct)) {
            goto Mf;
        }
        $C6 = new Math_BigInteger();
        $it = new Math_BigInteger();
        $C6->value = $FX;
        $it->value = $RD;
        list(, $yi) = $C6->divide($it);
        return $yi->value;
        Mf:
        if (!(($Lb = array_search($RD, $vz[MATH_BIGINTEGER_VARIABLE])) === false)) {
            goto Id;
        }
        $Lb = count($vz[MATH_BIGINTEGER_VARIABLE]);
        $vz[MATH_BIGINTEGER_VARIABLE][] = $RD;
        $C6 = new Math_BigInteger();
        $Pj =& $C6->value;
        $Pj = $this->_array_repeat(0, 2 * $ct);
        $Pj[] = 1;
        $it = new Math_BigInteger();
        $it->value = $RD;
        list($yi, ) = $C6->divide($it);
        $vz[MATH_BIGINTEGER_DATA][] = $yi->value;
        Id:
        $yi = array_slice($FX, $ct - 1);
        $yi = $this->_multiply($yi, false, $vz[MATH_BIGINTEGER_DATA][$Lb], false);
        $yi = array_slice($yi[MATH_BIGINTEGER_VALUE], $ct + 1);
        $jq = array_slice($FX, 0, $ct + 1);
        $yi = $this->_multiplyLower($yi, false, $RD, false, $ct + 1);
        if (!($this->_compare($jq, false, $yi[MATH_BIGINTEGER_VALUE], $yi[MATH_BIGINTEGER_SIGN]) < 0)) {
            goto gT;
        }
        $zH = $this->_array_repeat(0, $ct + 1);
        $zH[count($zH)] = 1;
        $jq = $this->_add($jq, false, $zH, false);
        $jq = $jq[MATH_BIGINTEGER_VALUE];
        gT:
        $jq = $this->_subtract($jq, false, $yi[MATH_BIGINTEGER_VALUE], $yi[MATH_BIGINTEGER_SIGN]);
        l4:
        if (!($this->_compare($jq[MATH_BIGINTEGER_VALUE], $jq[MATH_BIGINTEGER_SIGN], $RD, false) > 0)) {
            goto H_;
        }
        $jq = $this->_subtract($jq[MATH_BIGINTEGER_VALUE], $jq[MATH_BIGINTEGER_SIGN], $RD, false);
        goto l4;
        H_:
        return $jq[MATH_BIGINTEGER_VALUE];
    }
    function _multiplyLower($r9, $wN, $vc, $ps, $HQ)
    {
        $ht = count($r9);
        $Cq = count($vc);
        if (!(!$ht || !$Cq)) {
            goto HP;
        }
        return array(MATH_BIGINTEGER_VALUE => array(), MATH_BIGINTEGER_SIGN => false);
        HP:
        if (!($ht < $Cq)) {
            goto pI;
        }
        $yi = $r9;
        $r9 = $vc;
        $vc = $yi;
        $ht = count($r9);
        $Cq = count($vc);
        pI:
        $rC = $this->_array_repeat(0, $ht + $Cq);
        $DF = 0;
        $NS = 0;
        Zw:
        if (!($NS < $ht)) {
            goto u_;
        }
        $yi = $r9[$NS] * $vc[0] + $DF;
        $DF = MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31;
        $rC[$NS] = (int) ($yi - MATH_BIGINTEGER_BASE_FULL * $DF);
        Eb:
        ++$NS;
        goto Zw;
        u_:
        if (!($NS < $HQ)) {
            goto HC;
        }
        $rC[$NS] = $DF;
        HC:
        $lI = 1;
        v6:
        if (!($lI < $Cq)) {
            goto J_;
        }
        $DF = 0;
        $NS = 0;
        $WK = $lI;
        q4:
        if (!($NS < $ht && $WK < $HQ)) {
            goto Rq;
        }
        $yi = $rC[$WK] + $r9[$NS] * $vc[$lI] + $DF;
        $DF = MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31;
        $rC[$WK] = (int) ($yi - MATH_BIGINTEGER_BASE_FULL * $DF);
        JT:
        ++$NS;
        ++$WK;
        goto q4;
        Rq:
        if (!($WK < $HQ)) {
            goto lI;
        }
        $rC[$WK] = $DF;
        lI:
        eu:
        ++$lI;
        goto v6;
        J_:
        return array(MATH_BIGINTEGER_VALUE => $this->_trim($rC), MATH_BIGINTEGER_SIGN => $wN != $ps);
    }
    function _montgomery($FX, $RD)
    {
        static $vz = array(MATH_BIGINTEGER_VARIABLE => array(), MATH_BIGINTEGER_DATA => array());
        if (!(($Lb = array_search($RD, $vz[MATH_BIGINTEGER_VARIABLE])) === false)) {
            goto R5;
        }
        $Lb = count($vz[MATH_BIGINTEGER_VARIABLE]);
        $vz[MATH_BIGINTEGER_VARIABLE][] = $FX;
        $vz[MATH_BIGINTEGER_DATA][] = $this->_modInverse67108864($RD);
        R5:
        $WK = count($RD);
        $jq = array(MATH_BIGINTEGER_VALUE => $FX);
        $lI = 0;
        kG:
        if (!($lI < $WK)) {
            goto MI;
        }
        $yi = $jq[MATH_BIGINTEGER_VALUE][$lI] * $vz[MATH_BIGINTEGER_DATA][$Lb];
        $yi = $yi - MATH_BIGINTEGER_BASE_FULL * (MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31);
        $yi = $this->_regularMultiply(array($yi), $RD);
        $yi = array_merge($this->_array_repeat(0, $lI), $yi);
        $jq = $this->_add($jq[MATH_BIGINTEGER_VALUE], false, $yi, false);
        gl:
        ++$lI;
        goto kG;
        MI:
        $jq[MATH_BIGINTEGER_VALUE] = array_slice($jq[MATH_BIGINTEGER_VALUE], $WK);
        if (!($this->_compare($jq, false, $RD, false) >= 0)) {
            goto b_;
        }
        $jq = $this->_subtract($jq[MATH_BIGINTEGER_VALUE], false, $RD, false);
        b_:
        return $jq[MATH_BIGINTEGER_VALUE];
    }
    function _montgomeryMultiply($FX, $zR, $jz)
    {
        $yi = $this->_multiply($FX, false, $zR, false);
        return $this->_montgomery($yi[MATH_BIGINTEGER_VALUE], $jz);
        static $vz = array(MATH_BIGINTEGER_VARIABLE => array(), MATH_BIGINTEGER_DATA => array());
        if (!(($Lb = array_search($jz, $vz[MATH_BIGINTEGER_VARIABLE])) === false)) {
            goto wT;
        }
        $Lb = count($vz[MATH_BIGINTEGER_VARIABLE]);
        $vz[MATH_BIGINTEGER_VARIABLE][] = $jz;
        $vz[MATH_BIGINTEGER_DATA][] = $this->_modInverse67108864($jz);
        wT:
        $RD = max(count($FX), count($zR), count($jz));
        $FX = array_pad($FX, $RD, 0);
        $zR = array_pad($zR, $RD, 0);
        $jz = array_pad($jz, $RD, 0);
        $rt = array(MATH_BIGINTEGER_VALUE => $this->_array_repeat(0, $RD + 1));
        $lI = 0;
        Fi:
        if (!($lI < $RD)) {
            goto wj;
        }
        $yi = $rt[MATH_BIGINTEGER_VALUE][0] + $FX[$lI] * $zR[0];
        $yi = $yi - MATH_BIGINTEGER_BASE_FULL * (MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31);
        $yi = $yi * $vz[MATH_BIGINTEGER_DATA][$Lb];
        $yi = $yi - MATH_BIGINTEGER_BASE_FULL * (MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31);
        $yi = $this->_add($this->_regularMultiply(array($FX[$lI]), $zR), false, $this->_regularMultiply(array($yi), $jz), false);
        $rt = $this->_add($rt[MATH_BIGINTEGER_VALUE], false, $yi[MATH_BIGINTEGER_VALUE], false);
        $rt[MATH_BIGINTEGER_VALUE] = array_slice($rt[MATH_BIGINTEGER_VALUE], 1);
        tC:
        ++$lI;
        goto Fi;
        wj:
        if (!($this->_compare($rt[MATH_BIGINTEGER_VALUE], false, $jz, false) >= 0)) {
            goto wU;
        }
        $rt = $this->_subtract($rt[MATH_BIGINTEGER_VALUE], false, $jz, false);
        wU:
        return $rt[MATH_BIGINTEGER_VALUE];
    }
    function _prepMontgomery($FX, $RD)
    {
        $C6 = new Math_BigInteger();
        $C6->value = array_merge($this->_array_repeat(0, count($RD)), $FX);
        $it = new Math_BigInteger();
        $it->value = $RD;
        list(, $yi) = $C6->divide($it);
        return $yi->value;
    }
    function _modInverse67108864($FX)
    {
        $FX = -$FX[0];
        $jq = $FX & 0x3;
        $jq = $jq * (2 - $FX * $jq) & 0xf;
        $jq = $jq * (2 - ($FX & 0xff) * $jq) & 0xff;
        $jq = $jq * (2 - ($FX & 0xffff) * $jq & 0xffff) & 0xffff;
        $jq = fmod($jq * (2 - fmod($FX * $jq, MATH_BIGINTEGER_BASE_FULL)), MATH_BIGINTEGER_BASE_FULL);
        return $jq & MATH_BIGINTEGER_MAX_DIGIT;
    }
    function modInverse($RD)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi = new Math_BigInteger();
                $yi->value = gmp_invert($this->value, $RD->value);
                return $yi->value === false ? false : $this->_normalize($yi);
        }
        NM:
        XF:
        static $Sk, $nB;
        if (isset($Sk)) {
            goto Ks;
        }
        $Sk = new Math_BigInteger();
        $nB = new Math_BigInteger(1);
        Ks:
        $RD = $RD->abs();
        if (!($this->compare($Sk) < 0)) {
            goto wP;
        }
        $yi = $this->abs();
        $yi = $yi->modInverse($RD);
        return $this->_normalize($RD->subtract($yi));
        wP:
        extract($this->extendedGCD($RD));
        if ($Kc->equals($nB)) {
            goto qA;
        }
        return false;
        qA:
        $FX = $FX->compare($Sk) < 0 ? $FX->add($RD) : $FX;
        return $this->compare($Sk) < 0 ? $this->_normalize($RD->subtract($FX)) : $this->_normalize($FX);
    }
    function extendedGCD($RD)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                extract(gmp_gcdext($this->value, $RD->value));
                return array("\147\x63\144" => $this->_normalize(new Math_BigInteger($jX)), "\x78" => $this->_normalize(new Math_BigInteger($Db)), "\171" => $this->_normalize(new Math_BigInteger($uE)));
            case MATH_BIGINTEGER_MODE_BCMATH:
                $B7 = $this->value;
                $yh = $RD->value;
                $rt = "\61";
                $C2 = "\x30";
                $x8 = "\60";
                $gN = "\x31";
                eX:
                if (!(bccomp($yh, "\60", 0) != 0)) {
                    goto eM;
                }
                $f8 = bcdiv($B7, $yh, 0);
                $yi = $B7;
                $B7 = $yh;
                $yh = bcsub($yi, bcmul($yh, $f8, 0), 0);
                $yi = $rt;
                $rt = $x8;
                $x8 = bcsub($yi, bcmul($rt, $f8, 0), 0);
                $yi = $C2;
                $C2 = $gN;
                $gN = bcsub($yi, bcmul($C2, $f8, 0), 0);
                goto eX;
                eM:
                return array("\147\x63\x64" => $this->_normalize(new Math_BigInteger($B7)), "\x78" => $this->_normalize(new Math_BigInteger($rt)), "\171" => $this->_normalize(new Math_BigInteger($C2)));
        }
        OS:
        Rw:
        $zR = $RD->copy();
        $FX = $this->copy();
        $jX = new Math_BigInteger();
        $jX->value = array(1);
        JF:
        if ($FX->value[0] & 1 || $zR->value[0] & 1) {
            goto cu;
        }
        $FX->_rshift(1);
        $zR->_rshift(1);
        $jX->_lshift(1);
        goto JF;
        cu:
        $B7 = $FX->copy();
        $yh = $zR->copy();
        $rt = new Math_BigInteger();
        $C2 = new Math_BigInteger();
        $x8 = new Math_BigInteger();
        $gN = new Math_BigInteger();
        $rt->value = $gN->value = $jX->value = array(1);
        $C2->value = $x8->value = array();
        CY:
        if (empty($B7->value)) {
            goto h5;
        }
        pM:
        if ($B7->value[0] & 1) {
            goto rW;
        }
        $B7->_rshift(1);
        if (!(!empty($rt->value) && $rt->value[0] & 1 || !empty($C2->value) && $C2->value[0] & 1)) {
            goto iJ;
        }
        $rt = $rt->add($zR);
        $C2 = $C2->subtract($FX);
        iJ:
        $rt->_rshift(1);
        $C2->_rshift(1);
        goto pM;
        rW:
        TE:
        if ($yh->value[0] & 1) {
            goto FR;
        }
        $yh->_rshift(1);
        if (!(!empty($gN->value) && $gN->value[0] & 1 || !empty($x8->value) && $x8->value[0] & 1)) {
            goto Wz;
        }
        $x8 = $x8->add($zR);
        $gN = $gN->subtract($FX);
        Wz:
        $x8->_rshift(1);
        $gN->_rshift(1);
        goto TE;
        FR:
        if ($B7->compare($yh) >= 0) {
            goto sf;
        }
        $yh = $yh->subtract($B7);
        $x8 = $x8->subtract($rt);
        $gN = $gN->subtract($C2);
        goto F5;
        sf:
        $B7 = $B7->subtract($yh);
        $rt = $rt->subtract($x8);
        $C2 = $C2->subtract($gN);
        F5:
        goto CY;
        h5:
        return array("\147\x63\144" => $this->_normalize($jX->multiply($yh)), "\170" => $this->_normalize($x8), "\x79" => $this->_normalize($gN));
    }
    function gcd($RD)
    {
        extract($this->extendedGCD($RD));
        return $Kc;
    }
    function abs()
    {
        $yi = new Math_BigInteger();
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi->value = gmp_abs($this->value);
                goto LO;
            case MATH_BIGINTEGER_MODE_BCMATH:
                $yi->value = bccomp($this->value, "\x30", 0) < 0 ? substr($this->value, 1) : $this->value;
                goto LO;
            default:
                $yi->value = $this->value;
        }
        Xu:
        LO:
        return $yi;
    }
    function compare($zR)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                return gmp_cmp($this->value, $zR->value);
            case MATH_BIGINTEGER_MODE_BCMATH:
                return bccomp($this->value, $zR->value, 0);
        }
        Ld:
        zx:
        return $this->_compare($this->value, $this->is_negative, $zR->value, $zR->is_negative);
    }
    function _compare($r9, $wN, $vc, $ps)
    {
        if (!($wN != $ps)) {
            goto kg;
        }
        return !$wN && $ps ? 1 : -1;
        kg:
        $jq = $wN ? -1 : 1;
        if (!(count($r9) != count($vc))) {
            goto CG;
        }
        return count($r9) > count($vc) ? $jq : -$jq;
        CG:
        $wr = max(count($r9), count($vc));
        $r9 = array_pad($r9, $wr, 0);
        $vc = array_pad($vc, $wr, 0);
        $lI = count($r9) - 1;
        F6:
        if (!($lI >= 0)) {
            goto rH;
        }
        if (!($r9[$lI] != $vc[$lI])) {
            goto LF;
        }
        return $r9[$lI] > $vc[$lI] ? $jq : -$jq;
        LF:
        Jo:
        --$lI;
        goto F6;
        rH:
        return 0;
    }
    function equals($FX)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                return gmp_cmp($this->value, $FX->value) == 0;
            default:
                return $this->value === $FX->value && $this->is_negative == $FX->is_negative;
        }
        Cv:
        Xm:
    }
    function setPrecision($mo)
    {
        $this->precision = $mo;
        if (MATH_BIGINTEGER_MODE != MATH_BIGINTEGER_MODE_BCMATH) {
            goto jX;
        }
        $this->bitmask = new Math_BigInteger(bcpow("\62", $mo, 0));
        goto Ie;
        jX:
        $this->bitmask = new Math_BigInteger(chr((1 << ($mo & 0x7)) - 1) . str_repeat(chr(0xff), $mo >> 3), 256);
        Ie:
        $yi = $this->_normalize($this);
        $this->value = $yi->value;
    }
    function bitwise_and($FX)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi = new Math_BigInteger();
                $yi->value = gmp_and($this->value, $FX->value);
                return $this->_normalize($yi);
            case MATH_BIGINTEGER_MODE_BCMATH:
                $Hi = $this->toBytes();
                $El = $FX->toBytes();
                $ib = max(strlen($Hi), strlen($El));
                $Hi = str_pad($Hi, $ib, chr(0), STR_PAD_LEFT);
                $El = str_pad($El, $ib, chr(0), STR_PAD_LEFT);
                return $this->_normalize(new Math_BigInteger($Hi & $El, 256));
        }
        g7:
        n8:
        $jq = $this->copy();
        $ib = min(count($FX->value), count($this->value));
        $jq->value = array_slice($jq->value, 0, $ib);
        $lI = 0;
        Gl:
        if (!($lI < $ib)) {
            goto Bv;
        }
        $jq->value[$lI] &= $FX->value[$lI];
        yW:
        ++$lI;
        goto Gl;
        Bv:
        return $this->_normalize($jq);
    }
    function bitwise_or($FX)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi = new Math_BigInteger();
                $yi->value = gmp_or($this->value, $FX->value);
                return $this->_normalize($yi);
            case MATH_BIGINTEGER_MODE_BCMATH:
                $Hi = $this->toBytes();
                $El = $FX->toBytes();
                $ib = max(strlen($Hi), strlen($El));
                $Hi = str_pad($Hi, $ib, chr(0), STR_PAD_LEFT);
                $El = str_pad($El, $ib, chr(0), STR_PAD_LEFT);
                return $this->_normalize(new Math_BigInteger($Hi | $El, 256));
        }
        WU:
        fM:
        $ib = max(count($this->value), count($FX->value));
        $jq = $this->copy();
        $jq->value = array_pad($jq->value, $ib, 0);
        $FX->value = array_pad($FX->value, $ib, 0);
        $lI = 0;
        Iv:
        if (!($lI < $ib)) {
            goto KD;
        }
        $jq->value[$lI] |= $FX->value[$lI];
        bp:
        ++$lI;
        goto Iv;
        KD:
        return $this->_normalize($jq);
    }
    function bitwise_xor($FX)
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                $yi = new Math_BigInteger();
                $yi->value = gmp_xor(gmp_abs($this->value), gmp_abs($FX->value));
                return $this->_normalize($yi);
            case MATH_BIGINTEGER_MODE_BCMATH:
                $Hi = $this->toBytes();
                $El = $FX->toBytes();
                $ib = max(strlen($Hi), strlen($El));
                $Hi = str_pad($Hi, $ib, chr(0), STR_PAD_LEFT);
                $El = str_pad($El, $ib, chr(0), STR_PAD_LEFT);
                return $this->_normalize(new Math_BigInteger($Hi ^ $El, 256));
        }
        Jb:
        yi:
        $ib = max(count($this->value), count($FX->value));
        $jq = $this->copy();
        $jq->is_negative = false;
        $jq->value = array_pad($jq->value, $ib, 0);
        $FX->value = array_pad($FX->value, $ib, 0);
        $lI = 0;
        wd:
        if (!($lI < $ib)) {
            goto K_;
        }
        $jq->value[$lI] ^= $FX->value[$lI];
        vw:
        ++$lI;
        goto wd;
        K_:
        return $this->_normalize($jq);
    }
    function bitwise_not()
    {
        $yi = $this->toBytes();
        if (!($yi == '')) {
            goto SB;
        }
        return $this->_normalize(new Math_BigInteger());
        SB:
        $fv = decbin(ord($yi[0]));
        $yi = ~$yi;
        $VG = decbin(ord($yi[0]));
        if (!(strlen($VG) == 8)) {
            goto rG;
        }
        $VG = substr($VG, strpos($VG, "\60"));
        rG:
        $yi[0] = chr(bindec($VG));
        $ed = strlen($fv) + 8 * strlen($yi) - 8;
        $eC = $this->precision - $ed;
        if (!($eC <= 0)) {
            goto R2;
        }
        return $this->_normalize(new Math_BigInteger($yi, 256));
        R2:
        $Ui = chr((1 << ($eC & 0x7)) - 1) . str_repeat(chr(0xff), $eC >> 3);
        $this->_base256_lshift($Ui, $ed);
        $yi = str_pad($yi, strlen($Ui), chr(0), STR_PAD_LEFT);
        return $this->_normalize(new Math_BigInteger($Ui | $yi, 256));
    }
    function bitwise_rightShift($Tl)
    {
        $yi = new Math_BigInteger();
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                static $o8;
                if (isset($o8)) {
                    goto V1;
                }
                $o8 = gmp_init("\62");
                V1:
                $yi->value = gmp_div_q($this->value, gmp_pow($o8, $Tl));
                goto Zk;
            case MATH_BIGINTEGER_MODE_BCMATH:
                $yi->value = bcdiv($this->value, bcpow("\x32", $Tl, 0), 0);
                goto Zk;
            default:
                $yi->value = $this->value;
                $yi->_rshift($Tl);
        }
        DG:
        Zk:
        return $this->_normalize($yi);
    }
    function bitwise_leftShift($Tl)
    {
        $yi = new Math_BigInteger();
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                static $o8;
                if (isset($o8)) {
                    goto Af;
                }
                $o8 = gmp_init("\62");
                Af:
                $yi->value = gmp_mul($this->value, gmp_pow($o8, $Tl));
                goto DW;
            case MATH_BIGINTEGER_MODE_BCMATH:
                $yi->value = bcmul($this->value, bcpow("\x32", $Tl, 0), 0);
                goto DW;
            default:
                $yi->value = $this->value;
                $yi->_lshift($Tl);
        }
        h6:
        DW:
        return $this->_normalize($yi);
    }
    function bitwise_leftRotate($Tl)
    {
        $mo = $this->toBytes();
        if ($this->precision > 0) {
            goto TH;
        }
        $yi = ord($mo[0]);
        $lI = 0;
        fm:
        if (!($yi >> $lI)) {
            goto ED;
        }
        CE:
        ++$lI;
        goto fm;
        ED:
        $yw = 8 * strlen($mo) - 8 + $lI;
        $sD = chr((1 << ($yw & 0x7)) - 1) . str_repeat(chr(0xff), $yw >> 3);
        goto T_;
        TH:
        $yw = $this->precision;
        if (MATH_BIGINTEGER_MODE == MATH_BIGINTEGER_MODE_BCMATH) {
            goto KF;
        }
        $sD = $this->bitmask->toBytes();
        goto S2;
        KF:
        $sD = $this->bitmask->subtract(new Math_BigInteger(1));
        $sD = $sD->toBytes();
        S2:
        T_:
        if (!($Tl < 0)) {
            goto Wm;
        }
        $Tl += $yw;
        Wm:
        $Tl %= $yw;
        if ($Tl) {
            goto NF;
        }
        return $this->copy();
        NF:
        $Hi = $this->bitwise_leftShift($Tl);
        $Hi = $Hi->bitwise_and(new Math_BigInteger($sD, 256));
        $El = $this->bitwise_rightShift($yw - $Tl);
        $jq = MATH_BIGINTEGER_MODE != MATH_BIGINTEGER_MODE_BCMATH ? $Hi->bitwise_or($El) : $Hi->add($El);
        return $this->_normalize($jq);
    }
    function bitwise_rightRotate($Tl)
    {
        return $this->bitwise_leftRotate(-$Tl);
    }
    function setRandomGenerator($FD)
    {
    }
    function _random_number_helper($wr)
    {
        if (function_exists("\x63\162\171\x70\164\x5f\162\141\x6e\144\x6f\155\137\163\x74\162\151\x6e\147")) {
            goto OE;
        }
        $dU = '';
        if (!($wr & 1)) {
            goto he;
        }
        $dU .= chr(mt_rand(0, 255));
        he:
        $O6 = $wr >> 1;
        $lI = 0;
        XS:
        if (!($lI < $O6)) {
            goto ay;
        }
        $dU .= pack("\156", mt_rand(0, 0xffff));
        ZT:
        ++$lI;
        goto XS;
        ay:
        goto Uo;
        OE:
        $dU = crypt_random_string($wr);
        Uo:
        return new Math_BigInteger($dU, 256);
    }
    function random($Mw, $lm = false)
    {
        if (!($Mw === false)) {
            goto RA;
        }
        return false;
        RA:
        if ($lm === false) {
            goto Dp;
        }
        $M8 = $Mw;
        $iQ = $lm;
        goto v9;
        Dp:
        $iQ = $Mw;
        $M8 = $this;
        v9:
        $zM = $iQ->compare($M8);
        if (!$zM) {
            goto PN;
        }
        if ($zM < 0) {
            goto wE;
        }
        goto Si;
        PN:
        return $this->_normalize($M8);
        goto Si;
        wE:
        $yi = $iQ;
        $iQ = $M8;
        $M8 = $yi;
        Si:
        static $nB;
        if (isset($nB)) {
            goto pk;
        }
        $nB = new Math_BigInteger(1);
        pk:
        $iQ = $iQ->subtract($M8->subtract($nB));
        $wr = strlen(ltrim($iQ->toBytes(), chr(0)));
        $LQ = new Math_BigInteger(chr(1) . str_repeat("\x0", $wr), 256);
        $dU = $this->_random_number_helper($wr);
        list($uk) = $LQ->divide($iQ);
        $uk = $uk->multiply($iQ);
        n5:
        if (!($dU->compare($uk) >= 0)) {
            goto Qq;
        }
        $dU = $dU->subtract($uk);
        $LQ = $LQ->subtract($uk);
        $dU = $dU->bitwise_leftShift(8);
        $dU = $dU->add($this->_random_number_helper(1));
        $LQ = $LQ->bitwise_leftShift(8);
        list($uk) = $LQ->divide($iQ);
        $uk = $uk->multiply($iQ);
        goto n5;
        Qq:
        list(, $dU) = $dU->divide($iQ);
        return $this->_normalize($dU->add($M8));
    }
    function randomPrime($Mw, $lm = false, $PV = false)
    {
        if (!($Mw === false)) {
            goto uB;
        }
        return false;
        uB:
        if ($lm === false) {
            goto uQ;
        }
        $M8 = $Mw;
        $iQ = $lm;
        goto q0;
        uQ:
        $iQ = $Mw;
        $M8 = $this;
        q0:
        $zM = $iQ->compare($M8);
        if (!$zM) {
            goto cm;
        }
        if ($zM < 0) {
            goto aD;
        }
        goto bu;
        cm:
        return $M8->isPrime() ? $M8 : false;
        goto bu;
        aD:
        $yi = $iQ;
        $iQ = $M8;
        $M8 = $yi;
        bu:
        static $nB, $o8;
        if (isset($nB)) {
            goto ZV;
        }
        $nB = new Math_BigInteger(1);
        $o8 = new Math_BigInteger(2);
        ZV:
        $Mv = time();
        $FX = $this->random($M8, $iQ);
        if (!(MATH_BIGINTEGER_MODE == MATH_BIGINTEGER_MODE_GMP && extension_loaded("\x67\x6d\x70") && version_compare(PHP_VERSION, "\65\x2e\62\x2e\60", "\x3e\75"))) {
            goto nS;
        }
        $lu = new Math_BigInteger();
        $lu->value = gmp_nextprime($FX->value);
        if (!($lu->compare($iQ) <= 0)) {
            goto h4;
        }
        return $lu;
        h4:
        if ($M8->equals($FX)) {
            goto Cz;
        }
        $FX = $FX->subtract($nB);
        Cz:
        return $FX->randomPrime($M8, $FX);
        nS:
        if (!$FX->equals($o8)) {
            goto kf;
        }
        return $FX;
        kf:
        $FX->_make_odd();
        if (!($FX->compare($iQ) > 0)) {
            goto wF;
        }
        if (!$M8->equals($iQ)) {
            goto nE;
        }
        return false;
        nE:
        $FX = $M8->copy();
        $FX->_make_odd();
        wF:
        $ya = $FX->copy();
        rk:
        if (!true) {
            goto oB;
        }
        if (!($PV !== false && time() - $Mv > $PV)) {
            goto F3;
        }
        return false;
        F3:
        if (!$FX->isPrime()) {
            goto nl;
        }
        return $FX;
        nl:
        $FX = $FX->add($o8);
        if (!($FX->compare($iQ) > 0)) {
            goto Rd;
        }
        $FX = $M8->copy();
        if (!$FX->equals($o8)) {
            goto JH;
        }
        return $FX;
        JH:
        $FX->_make_odd();
        Rd:
        if (!$FX->equals($ya)) {
            goto Fd;
        }
        return false;
        Fd:
        goto rk;
        oB:
    }
    function _make_odd()
    {
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                gmp_setbit($this->value, 0);
                goto sg;
            case MATH_BIGINTEGER_MODE_BCMATH:
                if (!($this->value[strlen($this->value) - 1] % 2 == 0)) {
                    goto lU;
                }
                $this->value = bcadd($this->value, "\x31");
                lU:
                goto sg;
            default:
                $this->value[0] |= 1;
        }
        ym:
        sg:
    }
    function isPrime($uE = false)
    {
        $ib = strlen($this->toBytes());
        if ($uE) {
            goto IA;
        }
        if ($ib >= 163) {
            goto M8;
        }
        if ($ib >= 106) {
            goto JU;
        }
        if ($ib >= 81) {
            goto ve;
        }
        if ($ib >= 68) {
            goto kP;
        }
        if ($ib >= 56) {
            goto yO;
        }
        if ($ib >= 50) {
            goto Q5;
        }
        if ($ib >= 43) {
            goto Ma;
        }
        if ($ib >= 37) {
            goto YP;
        }
        if ($ib >= 31) {
            goto o1;
        }
        if ($ib >= 25) {
            goto md;
        }
        if ($ib >= 18) {
            goto ZA;
        }
        $uE = 27;
        goto B4;
        ZA:
        $uE = 18;
        B4:
        goto Dv;
        md:
        $uE = 15;
        Dv:
        goto kc;
        o1:
        $uE = 12;
        kc:
        goto cY;
        YP:
        $uE = 9;
        cY:
        goto xq;
        Ma:
        $uE = 8;
        xq:
        goto La;
        Q5:
        $uE = 7;
        La:
        goto Oc;
        yO:
        $uE = 6;
        Oc:
        goto A5;
        kP:
        $uE = 5;
        A5:
        goto FL;
        ve:
        $uE = 4;
        FL:
        goto H0;
        JU:
        $uE = 3;
        H0:
        goto V0;
        M8:
        $uE = 2;
        V0:
        IA:
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                return gmp_prob_prime($this->value, $uE) != 0;
            case MATH_BIGINTEGER_MODE_BCMATH:
                if (!($this->value === "\62")) {
                    goto H6;
                }
                return true;
                H6:
                if (!($this->value[strlen($this->value) - 1] % 2 == 0)) {
                    goto br;
                }
                return false;
                br:
                goto oL;
            default:
                if (!($this->value == array(2))) {
                    goto Y5;
                }
                return true;
                Y5:
                if (!(~$this->value[0] & 1)) {
                    goto TQ;
                }
                return false;
                TQ:
        }
        K1:
        oL:
        static $Oh, $Sk, $nB, $o8;
        if (isset($Oh)) {
            goto Hb;
        }
        $Oh = array(3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997);
        if (!(MATH_BIGINTEGER_MODE != MATH_BIGINTEGER_MODE_INTERNAL)) {
            goto PK;
        }
        $lI = 0;
        yR:
        if (!($lI < count($Oh))) {
            goto BL;
        }
        $Oh[$lI] = new Math_BigInteger($Oh[$lI]);
        VA:
        ++$lI;
        goto yR;
        BL:
        PK:
        $Sk = new Math_BigInteger();
        $nB = new Math_BigInteger(1);
        $o8 = new Math_BigInteger(2);
        Hb:
        if (!$this->equals($nB)) {
            goto FO;
        }
        return false;
        FO:
        if (MATH_BIGINTEGER_MODE != MATH_BIGINTEGER_MODE_INTERNAL) {
            goto nu;
        }
        $nI = $this->value;
        foreach ($Oh as $pc) {
            list(, $sK) = $this->_divide_digit($nI, $pc);
            if ($sK) {
                goto k0;
            }
            return count($nI) == 1 && $nI[0] == $pc;
            k0:
            ti:
        }
        TG:
        goto lz;
        nu:
        foreach ($Oh as $pc) {
            list(, $sK) = $this->divide($pc);
            if (!$sK->equals($Sk)) {
                goto p6;
            }
            return $this->equals($pc);
            p6:
            gZ:
        }
        qg:
        lz:
        $RD = $this->copy();
        $aT = $RD->subtract($nB);
        $OI = $RD->subtract($o8);
        $sK = $aT->copy();
        $m_ = $sK->value;
        if (MATH_BIGINTEGER_MODE == MATH_BIGINTEGER_MODE_BCMATH) {
            goto WC;
        }
        $lI = 0;
        $z3 = count($m_);
        Nr:
        if (!($lI < $z3)) {
            goto FS;
        }
        $yi = ~$m_[$lI] & 0xffffff;
        $NS = 1;
        ye:
        if (!($yi >> $NS & 1)) {
            goto JB;
        }
        sD:
        ++$NS;
        goto ye;
        JB:
        if (!($NS != 25)) {
            goto dL;
        }
        goto FS;
        dL:
        Bn:
        ++$lI;
        goto Nr;
        FS:
        $Db = 26 * $lI + $NS;
        $sK->_rshift($Db);
        goto CH;
        WC:
        $Db = 0;
        AJ:
        if (!($sK->value[strlen($sK->value) - 1] % 2 == 0)) {
            goto xd;
        }
        $sK->value = bcdiv($sK->value, "\62", 0);
        ++$Db;
        goto AJ;
        xd:
        CH:
        $lI = 0;
        g1:
        if (!($lI < $uE)) {
            goto V6;
        }
        $rt = $this->random($o8, $OI);
        $zR = $rt->modPow($sK, $RD);
        if (!(!$zR->equals($nB) && !$zR->equals($aT))) {
            goto TO;
        }
        $NS = 1;
        yg:
        if (!($NS < $Db && !$zR->equals($aT))) {
            goto QR;
        }
        $zR = $zR->modPow($o8, $RD);
        if (!$zR->equals($nB)) {
            goto In;
        }
        return false;
        In:
        fu:
        ++$NS;
        goto yg;
        QR:
        if ($zR->equals($aT)) {
            goto w1;
        }
        return false;
        w1:
        TO:
        cn:
        ++$lI;
        goto g1;
        V6:
        return true;
    }
    function _lshift($Tl)
    {
        if (!($Tl == 0)) {
            goto wO;
        }
        return;
        wO:
        $W0 = (int) ($Tl / MATH_BIGINTEGER_BASE);
        $Tl %= MATH_BIGINTEGER_BASE;
        $Tl = 1 << $Tl;
        $DF = 0;
        $lI = 0;
        xh:
        if (!($lI < count($this->value))) {
            goto K0;
        }
        $yi = $this->value[$lI] * $Tl + $DF;
        $DF = MATH_BIGINTEGER_BASE === 26 ? intval($yi / 0x4000000) : $yi >> 31;
        $this->value[$lI] = (int) ($yi - $DF * MATH_BIGINTEGER_BASE_FULL);
        tZ:
        ++$lI;
        goto xh;
        K0:
        if (!$DF) {
            goto Tf;
        }
        $this->value[count($this->value)] = $DF;
        Tf:
        XI:
        if (!$W0--) {
            goto X9;
        }
        array_unshift($this->value, 0);
        goto XI;
        X9:
    }
    function _rshift($Tl)
    {
        if (!($Tl == 0)) {
            goto hB;
        }
        return;
        hB:
        $W0 = (int) ($Tl / MATH_BIGINTEGER_BASE);
        $Tl %= MATH_BIGINTEGER_BASE;
        $EO = MATH_BIGINTEGER_BASE - $Tl;
        $As = (1 << $Tl) - 1;
        if (!$W0) {
            goto Mx;
        }
        $this->value = array_slice($this->value, $W0);
        Mx:
        $DF = 0;
        $lI = count($this->value) - 1;
        vs:
        if (!($lI >= 0)) {
            goto L1;
        }
        $yi = $this->value[$lI] >> $Tl | $DF;
        $DF = ($this->value[$lI] & $As) << $EO;
        $this->value[$lI] = $yi;
        Qd:
        --$lI;
        goto vs;
        L1:
        $this->value = $this->_trim($this->value);
    }
    function _normalize($jq)
    {
        $jq->precision = $this->precision;
        $jq->bitmask = $this->bitmask;
        switch (MATH_BIGINTEGER_MODE) {
            case MATH_BIGINTEGER_MODE_GMP:
                if (!($this->bitmask !== false)) {
                    goto AU;
                }
                $jq->value = gmp_and($jq->value, $jq->bitmask->value);
                AU:
                return $jq;
            case MATH_BIGINTEGER_MODE_BCMATH:
                if (empty($jq->bitmask->value)) {
                    goto P6;
                }
                $jq->value = bcmod($jq->value, $jq->bitmask->value);
                P6:
                return $jq;
        }
        Gh:
        pG:
        $nI =& $jq->value;
        if (count($nI)) {
            goto xf;
        }
        return $jq;
        xf:
        $nI = $this->_trim($nI);
        if (empty($jq->bitmask->value)) {
            goto Kk;
        }
        $ib = min(count($nI), count($this->bitmask->value));
        $nI = array_slice($nI, 0, $ib);
        $lI = 0;
        OU:
        if (!($lI < $ib)) {
            goto AZ;
        }
        $nI[$lI] = $nI[$lI] & $this->bitmask->value[$lI];
        mX:
        ++$lI;
        goto OU;
        AZ:
        Kk:
        return $jq;
    }
    function _trim($nI)
    {
        $lI = count($nI) - 1;
        Hz:
        if (!($lI >= 0)) {
            goto Y9;
        }
        if (!$nI[$lI]) {
            goto H3;
        }
        goto Y9;
        H3:
        unset($nI[$lI]);
        WG:
        --$lI;
        goto Hz;
        Y9:
        return $nI;
    }
    function _array_repeat($Kn, $nU)
    {
        return $nU ? array_fill(0, $nU, $Kn) : array();
    }
    function _base256_lshift(&$FX, $Tl)
    {
        if (!($Tl == 0)) {
            goto vl;
        }
        return;
        vl:
        $BD = $Tl >> 3;
        $Tl &= 7;
        $DF = 0;
        $lI = strlen($FX) - 1;
        UK9:
        if (!($lI >= 0)) {
            goto Iek;
        }
        $yi = ord($FX[$lI]) << $Tl | $DF;
        $FX[$lI] = chr($yi);
        $DF = $yi >> 8;
        xI2:
        --$lI;
        goto UK9;
        Iek:
        $DF = $DF != 0 ? chr($DF) : '';
        $FX = $DF . $FX . str_repeat(chr(0), $BD);
    }
    function _base256_rshift(&$FX, $Tl)
    {
        if (!($Tl == 0)) {
            goto dmg;
        }
        $FX = ltrim($FX, chr(0));
        return '';
        dmg:
        $BD = $Tl >> 3;
        $Tl &= 7;
        $KB = '';
        if (!$BD) {
            goto MUm;
        }
        $Mv = $BD > strlen($FX) ? -strlen($FX) : -$BD;
        $KB = substr($FX, $Mv);
        $FX = substr($FX, 0, -$BD);
        MUm:
        $DF = 0;
        $EO = 8 - $Tl;
        $lI = 0;
        HE3:
        if (!($lI < strlen($FX))) {
            goto TWn;
        }
        $yi = ord($FX[$lI]) >> $Tl | $DF;
        $DF = ord($FX[$lI]) << $EO & 0xff;
        $FX[$lI] = chr($yi);
        TXW:
        ++$lI;
        goto HE3;
        TWn:
        $FX = ltrim($FX, chr(0));
        $KB = chr($DF >> $EO) . $KB;
        return ltrim($KB, chr(0));
    }
    function _int2bytes($FX)
    {
        return ltrim(pack("\x4e", $FX), chr(0));
    }
    function _bytes2int($FX)
    {
        $yi = unpack("\x4e\151\156\164", str_pad($FX, 4, chr(0), STR_PAD_LEFT));
        return $yi["\x69\x6e\x74"];
    }
    function _encodeASN1Length($ib)
    {
        if (!($ib <= 0x7f)) {
            goto bDM;
        }
        return chr($ib);
        bDM:
        $yi = ltrim(pack("\x4e", $ib), chr(0));
        return pack("\103\141\x2a", 0x80 | strlen($yi), $yi);
    }
    function _safe_divide($FX, $zR)
    {
        if (!(MATH_BIGINTEGER_BASE === 26)) {
            goto yqO;
        }
        return (int) ($FX / $zR);
        yqO:
        return ($FX - $FX % $zR) / $zR;
    }
}
