<?php


define("\103\122\x59\x50\124\137\x48\x41\123\x48\x5f\x4d\x4f\x44\x45\137\111\x4e\124\x45\122\116\x41\114", 1);
define("\103\122\131\x50\124\x5f\x48\101\x53\x48\x5f\115\x4f\104\x45\x5f\115\x48\101\x53\x48", 2);
define("\x43\122\131\x50\124\x5f\110\101\123\110\x5f\x4d\x4f\104\105\x5f\x48\x41\123\x48", 3);
class Crypt_Hash
{
    var $hashParam;
    var $b;
    var $l = false;
    var $hash;
    var $key = false;
    var $opad;
    var $ipad;
    function __construct($Os = "\163\x68\x61\61")
    {
        if (defined("\x43\x52\x59\x50\x54\x5f\110\x41\x53\x48\x5f\x4d\117\x44\x45")) {
            goto Yi;
        }
        switch (true) {
            case extension_loaded("\x68\x61\x73\150"):
                define("\103\x52\131\x50\124\x5f\110\x41\123\x48\137\x4d\x4f\104\x45", CRYPT_HASH_MODE_HASH);
                goto Am;
            case extension_loaded("\155\150\x61\163\x68"):
                define("\x43\122\x59\120\x54\137\110\101\x53\110\x5f\x4d\117\x44\105", CRYPT_HASH_MODE_MHASH);
                goto Am;
            default:
                define("\103\x52\131\120\x54\137\x48\101\x53\x48\137\115\x4f\104\x45", CRYPT_HASH_MODE_INTERNAL);
        }
        H2:
        Am:
        Yi:
        $this->setHash($Os);
    }
    function Crypt_Hash($Os = "\x73\150\x61\61")
    {
        $this->__construct($Os);
    }
    function setKey($Lb = false)
    {
        $this->key = $Lb;
    }
    function getHash()
    {
        return $this->hashParam;
    }
    function setHash($Os)
    {
        $this->hashParam = $Os = strtolower($Os);
        switch ($Os) {
            case "\155\x64\65\x2d\71\66":
            case "\163\150\141\x31\x2d\71\66":
            case "\x73\150\x61\62\x35\x36\x2d\x39\66":
            case "\x73\150\141\65\x31\62\x2d\x39\66":
                $Os = substr($Os, 0, -3);
                $this->l = 12;
                goto LA;
            case "\155\144\x32":
            case "\155\x64\x35":
                $this->l = 16;
                goto LA;
            case "\163\150\x61\x31":
                $this->l = 20;
                goto LA;
            case "\x73\x68\x61\x32\65\x36":
                $this->l = 32;
                goto LA;
            case "\x73\x68\x61\x33\x38\x34":
                $this->l = 48;
                goto LA;
            case "\163\150\141\x35\61\62":
                $this->l = 64;
        }
        Cd:
        LA:
        switch ($Os) {
            case "\155\144\62":
                $U8 = CRYPT_HASH_MODE == CRYPT_HASH_MODE_HASH && in_array("\x6d\144\x32", hash_algos()) ? CRYPT_HASH_MODE_HASH : CRYPT_HASH_MODE_INTERNAL;
                goto w3;
            case "\163\x68\141\63\70\x34":
            case "\163\150\x61\65\x31\62":
                $U8 = CRYPT_HASH_MODE == CRYPT_HASH_MODE_MHASH ? CRYPT_HASH_MODE_INTERNAL : CRYPT_HASH_MODE;
                goto w3;
            default:
                $U8 = CRYPT_HASH_MODE;
        }
        XD:
        w3:
        switch ($U8) {
            case CRYPT_HASH_MODE_MHASH:
                switch ($Os) {
                    case "\155\x64\65":
                        $this->hash = MHASH_MD5;
                        goto Yt;
                    case "\163\150\x61\62\65\66":
                        $this->hash = MHASH_SHA256;
                        goto Yt;
                    case "\163\x68\x61\61":
                    default:
                        $this->hash = MHASH_SHA1;
                }
                az:
                Yt:
                return;
            case CRYPT_HASH_MODE_HASH:
                switch ($Os) {
                    case "\155\x64\65":
                        $this->hash = "\155\144\65";
                        return;
                    case "\155\x64\x32":
                    case "\163\150\141\62\x35\x36":
                    case "\163\x68\x61\63\x38\64":
                    case "\163\x68\x61\65\61\62":
                        $this->hash = $Os;
                        return;
                    case "\163\x68\x61\x31":
                    default:
                        $this->hash = "\x73\150\141\x31";
                }
                c9:
                qr:
                return;
        }
        Py:
        hS:
        switch ($Os) {
            case "\155\x64\62":
                $this->b = 16;
                $this->hash = array($this, "\137\155\x64\62");
                goto Wr;
            case "\x6d\144\x35":
                $this->b = 64;
                $this->hash = array($this, "\137\x6d\144\65");
                goto Wr;
            case "\163\150\x61\62\x35\66":
                $this->b = 64;
                $this->hash = array($this, "\137\x73\150\141\x32\x35\x36");
                goto Wr;
            case "\x73\150\x61\63\70\64":
            case "\163\150\x61\65\61\x32":
                $this->b = 128;
                $this->hash = array($this, "\x5f\163\150\x61\x35\x31\62");
                goto Wr;
            case "\163\150\141\x31":
            default:
                $this->b = 64;
                $this->hash = array($this, "\137\163\150\141\x31");
        }
        iY:
        Wr:
        $this->ipad = str_repeat(chr(0x36), $this->b);
        $this->opad = str_repeat(chr(0x5c), $this->b);
    }
    function hash($e9)
    {
        $U8 = is_array($this->hash) ? CRYPT_HASH_MODE_INTERNAL : CRYPT_HASH_MODE;
        if (!empty($this->key) || is_string($this->key)) {
            goto Kb;
        }
        switch ($U8) {
            case CRYPT_HASH_MODE_MHASH:
                $UP = mhash($this->hash, $e9);
                goto bd;
            case CRYPT_HASH_MODE_HASH:
                $UP = hash($this->hash, $e9, true);
                goto bd;
            case CRYPT_HASH_MODE_INTERNAL:
                $UP = call_user_func($this->hash, $e9);
        }
        i6:
        bd:
        goto Sg;
        Kb:
        switch ($U8) {
            case CRYPT_HASH_MODE_MHASH:
                $UP = mhash($this->hash, $e9, $this->key);
                goto fe;
            case CRYPT_HASH_MODE_HASH:
                $UP = hash_hmac($this->hash, $e9, $this->key, true);
                goto fe;
            case CRYPT_HASH_MODE_INTERNAL:
                $Lb = strlen($this->key) > $this->b ? call_user_func($this->hash, $this->key) : $this->key;
                $Lb = str_pad($Lb, $this->b, chr(0));
                $yi = $this->ipad ^ $Lb;
                $yi .= $e9;
                $yi = call_user_func($this->hash, $yi);
                $UP = $this->opad ^ $Lb;
                $UP .= $yi;
                $UP = call_user_func($this->hash, $UP);
        }
        w6:
        fe:
        Sg:
        return substr($UP, 0, $this->l);
    }
    function getLength()
    {
        return $this->l;
    }
    function _md5($jz)
    {
        return pack("\110\x2a", md5($jz));
    }
    function _sha1($jz)
    {
        return pack("\x48\x2a", sha1($jz));
    }
    function _md2($jz)
    {
        static $Db = array(41, 46, 67, 201, 162, 216, 124, 1, 61, 54, 84, 161, 236, 240, 6, 19, 98, 167, 5, 243, 192, 199, 115, 140, 152, 147, 43, 217, 188, 76, 130, 202, 30, 155, 87, 60, 253, 212, 224, 22, 103, 66, 111, 24, 138, 23, 229, 18, 190, 78, 196, 214, 218, 158, 222, 73, 160, 251, 245, 142, 187, 47, 238, 122, 169, 104, 121, 145, 21, 178, 7, 63, 148, 194, 16, 137, 11, 34, 95, 33, 128, 127, 93, 154, 90, 144, 50, 39, 53, 62, 204, 231, 191, 247, 151, 3, 255, 25, 48, 179, 72, 165, 181, 209, 215, 94, 146, 42, 172, 86, 170, 198, 79, 184, 56, 210, 150, 164, 125, 182, 118, 252, 107, 226, 156, 116, 4, 241, 69, 157, 112, 89, 100, 113, 135, 32, 134, 91, 207, 101, 230, 45, 168, 2, 27, 96, 37, 173, 174, 176, 185, 246, 28, 70, 97, 105, 52, 64, 126, 15, 85, 71, 163, 35, 221, 81, 175, 58, 195, 92, 249, 206, 186, 197, 234, 38, 44, 83, 13, 110, 133, 40, 132, 9, 211, 223, 205, 244, 65, 129, 77, 82, 106, 220, 55, 200, 108, 193, 171, 250, 36, 225, 123, 8, 12, 189, 177, 74, 120, 136, 149, 139, 227, 99, 232, 109, 233, 203, 213, 254, 59, 0, 29, 57, 242, 239, 183, 14, 102, 88, 208, 228, 166, 119, 114, 248, 235, 117, 75, 10, 49, 68, 80, 180, 143, 237, 31, 26, 219, 153, 141, 51, 159, 17, 131, 20);
        $PQ = 16 - (strlen($jz) & 0xf);
        $jz .= str_repeat(chr($PQ), $PQ);
        $ib = strlen($jz);
        $x8 = str_repeat(chr(0), 16);
        $S6 = chr(0);
        $lI = 0;
        pa:
        if (!($lI < $ib)) {
            goto vR;
        }
        $NS = 0;
        EA:
        if (!($NS < 16)) {
            goto o5;
        }
        $x8[$NS] = chr($Db[ord($jz[$lI + $NS] ^ $S6)] ^ ord($x8[$NS]));
        $S6 = $x8[$NS];
        Yz:
        $NS++;
        goto EA;
        o5:
        LI:
        $lI += 16;
        goto pa;
        vR:
        $jz .= $x8;
        $ib += 16;
        $FX = str_repeat(chr(0), 48);
        $lI = 0;
        jV:
        if (!($lI < $ib)) {
            goto zh;
        }
        $NS = 0;
        mu:
        if (!($NS < 16)) {
            goto W1;
        }
        $FX[$NS + 16] = $jz[$lI + $NS];
        $FX[$NS + 32] = $FX[$NS + 16] ^ $FX[$NS];
        i8:
        $NS++;
        goto mu;
        W1:
        $uE = chr(0);
        $NS = 0;
        uX:
        if (!($NS < 18)) {
            goto QN;
        }
        $WK = 0;
        Wx:
        if (!($WK < 48)) {
            goto Kh;
        }
        $FX[$WK] = $uE = $FX[$WK] ^ chr($Db[ord($uE)]);
        bi:
        $WK++;
        goto Wx;
        Kh:
        $uE = chr(ord($uE) + $NS);
        np:
        $NS++;
        goto uX;
        QN:
        I2:
        $lI += 16;
        goto jV;
        zh:
        return substr($FX, 0, 16);
    }
    function _sha256($jz)
    {
        if (!extension_loaded("\163\x75\150\x6f\163\151\x6e")) {
            goto cy;
        }
        return pack("\x48\52", sha256($jz));
        cy:
        $Os = array(0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19);
        static $WK = array(0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786, 0xfc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da, 0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x6ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070, 0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2);
        $ib = strlen($jz);
        $jz .= str_repeat(chr(0), 64 - ($ib + 8 & 0x3f));
        $jz[$ib] = chr(0x80);
        $jz .= pack("\116\62", 0, $ib << 3);
        $zf = str_split($jz, 64);
        foreach ($zf as $b7) {
            $fS = array();
            $lI = 0;
            SL:
            if (!($lI < 16)) {
                goto Av;
            }
            extract(unpack("\116\x74\145\155\x70", $this->_string_shift($b7, 4)));
            $fS[] = $yi;
            rM:
            $lI++;
            goto SL;
            Av:
            $lI = 16;
            oG:
            if (!($lI < 64)) {
                goto VD;
            }
            $kG = $this->_rightRotate($fS[$lI - 15], 7) ^ $this->_rightRotate($fS[$lI - 15], 18) ^ $this->_rightShift($fS[$lI - 15], 3);
            $ia = $this->_rightRotate($fS[$lI - 2], 17) ^ $this->_rightRotate($fS[$lI - 2], 19) ^ $this->_rightShift($fS[$lI - 2], 10);
            $fS[$lI] = $this->_add($fS[$lI - 16], $kG, $fS[$lI - 7], $ia);
            Yu:
            $lI++;
            goto oG;
            VD:
            list($rt, $C2, $x8, $gN, $u_, $fR, $jX, $Zc) = $Os;
            $lI = 0;
            hh:
            if (!($lI < 64)) {
                goto wu;
            }
            $kG = $this->_rightRotate($rt, 2) ^ $this->_rightRotate($rt, 13) ^ $this->_rightRotate($rt, 22);
            $yJ = $rt & $C2 ^ $rt & $x8 ^ $C2 & $x8;
            $Kw = $this->_add($kG, $yJ);
            $ia = $this->_rightRotate($u_, 6) ^ $this->_rightRotate($u_, 11) ^ $this->_rightRotate($u_, 25);
            $IF = $u_ & $fR ^ $this->_not($u_) & $jX;
            $xw = $this->_add($Zc, $ia, $IF, $WK[$lI], $fS[$lI]);
            $Zc = $jX;
            $jX = $fR;
            $fR = $u_;
            $u_ = $this->_add($gN, $xw);
            $gN = $x8;
            $x8 = $C2;
            $C2 = $rt;
            $rt = $this->_add($xw, $Kw);
            cM:
            $lI++;
            goto hh;
            wu:
            $Os = array($this->_add($Os[0], $rt), $this->_add($Os[1], $C2), $this->_add($Os[2], $x8), $this->_add($Os[3], $gN), $this->_add($Os[4], $u_), $this->_add($Os[5], $fR), $this->_add($Os[6], $jX), $this->_add($Os[7], $Zc));
            fD:
        }
        dx:
        return pack("\x4e\70", $Os[0], $Os[1], $Os[2], $Os[3], $Os[4], $Os[5], $Os[6], $Os[7]);
    }
    function _sha512($jz)
    {
        if (class_exists("\x4d\x61\164\x68\137\102\x69\x67\x49\156\x74\x65\147\x65\x72")) {
            goto MK;
        }
        include_once "\115\141\x74\150\x2f\102\x69\147\x49\x6e\x74\x65\x67\145\x72\x2e\x70\150\160";
        MK:
        static $Kv, $XA, $WK;
        if (isset($WK)) {
            goto o9;
        }
        $Kv = array("\143\x62\x62\x62\71\x64\x35\144\x63\61\60\65\x39\x65\x64\x38", "\x36\x32\71\x61\62\71\62\141\x33\x36\67\143\x64\x35\60\67", "\x39\x31\65\x39\60\x31\65\x61\63\60\67\60\144\144\61\67", "\61\x35\x32\146\145\143\x64\70\x66\x37\60\x65\x35\71\63\71", "\x36\67\x33\x33\x32\x36\x36\67\146\x66\143\60\60\x62\63\x31", "\x38\145\142\64\64\x61\70\67\x36\x38\x35\x38\x31\x35\x31\61", "\x64\142\x30\x63\x32\x65\x30\144\x36\64\146\71\x38\x66\x61\67", "\64\x37\x62\65\x34\x38\x31\x64\x62\145\146\141\x34\x66\141\x34");
        $XA = array("\x36\x61\x30\71\145\66\x36\67\x66\x33\142\143\x63\71\60\70", "\142\142\x36\x37\141\x65\70\x35\x38\64\143\x61\141\x37\63\142", "\63\143\x36\145\x66\x33\67\x32\146\x65\x39\x34\x66\70\62\142", "\x61\x35\64\x66\146\65\x33\141\x35\x66\61\144\x33\66\146\x31", "\65\x31\60\145\x35\62\x37\146\x61\144\145\x36\x38\62\144\x31", "\x39\x62\60\65\x36\x38\70\143\62\x62\x33\x65\66\x63\61\x66", "\x31\146\70\x33\144\71\141\x62\x66\x62\64\x31\142\x64\66\142", "\65\x62\x65\x30\143\x64\x31\71\x31\x33\67\145\62\x31\67\x39");
        $lI = 0;
        DF:
        if (!($lI < 8)) {
            goto QT;
        }
        $Kv[$lI] = new Math_BigInteger($Kv[$lI], 16);
        $Kv[$lI]->setPrecision(64);
        $XA[$lI] = new Math_BigInteger($XA[$lI], 16);
        $XA[$lI]->setPrecision(64);
        hC:
        $lI++;
        goto DF;
        QT:
        $WK = array("\64\62\70\x61\62\146\71\70\144\x37\62\70\x61\145\62\x32", "\x37\x31\x33\x37\64\64\x39\x31\x32\63\145\146\x36\x35\143\x64", "\x62\x35\143\60\146\142\x63\146\145\x63\64\144\63\142\62\146", "\145\x39\142\65\144\x62\x61\65\70\61\x38\71\144\x62\142\143", "\63\x39\65\66\x63\62\65\x62\146\63\x34\x38\142\x35\x33\x38", "\65\x39\146\x31\61\x31\146\61\x62\x36\60\65\x64\x30\61\x39", "\71\x32\63\x66\x38\x32\x61\x34\x61\x66\x31\x39\64\146\x39\x62", "\141\142\x31\x63\x35\x65\144\65\144\141\66\x64\70\61\61\x38", "\x64\x38\x30\x37\x61\141\x39\x38\141\x33\60\x33\60\62\64\x32", "\61\x32\x38\63\x35\x62\x30\x31\x34\x35\67\x30\x36\146\142\145", "\x32\64\x33\x31\x38\x35\142\145\64\x65\x65\x34\x62\62\x38\143", "\x35\x35\x30\x63\x37\x64\x63\63\144\x35\146\146\x62\64\x65\x32", "\x37\x32\142\x65\65\x64\x37\x34\x66\62\x37\142\70\x39\x36\146", "\x38\60\144\x65\x62\61\146\x65\x33\x62\x31\66\71\66\142\61", "\x39\142\x64\x63\60\66\141\67\62\x35\143\67\61\62\x33\x35", "\x63\61\71\142\146\x31\67\x34\143\146\x36\71\x32\x36\x39\64", "\x65\64\x39\142\x36\x39\143\61\x39\x65\146\61\64\141\144\62", "\x65\x66\x62\x65\64\67\x38\66\63\70\64\146\62\x35\x65\63", "\60\x66\143\61\71\x64\143\66\70\x62\x38\143\144\x35\142\65", "\62\64\x30\x63\141\x31\143\x63\67\67\141\x63\71\143\x36\x35", "\62\x64\x65\71\x32\143\x36\x66\x35\71\x32\142\60\x32\x37\65", "\64\x61\x37\64\70\x34\x61\x61\x36\145\x61\x36\x65\64\70\63", "\65\x63\142\x30\x61\x39\144\143\x62\x64\64\x31\146\142\144\x34", "\x37\66\x66\71\x38\70\x64\141\x38\63\x31\x31\65\63\142\65", "\71\x38\63\x65\x35\x31\x35\x32\145\x65\x36\66\144\146\x61\x62", "\141\70\63\61\x63\x36\x36\144\x32\144\x62\x34\x33\x32\61\60", "\142\x30\x30\x33\62\67\x63\70\x39\x38\x66\x62\x32\x31\63\x66", "\x62\x66\x35\x39\67\x66\x63\x37\x62\145\145\146\x30\x65\145\x34", "\x63\66\145\x30\60\142\146\63\63\x64\141\70\x38\146\x63\x32", "\x64\65\x61\x37\71\x31\x34\x37\71\x33\60\141\x61\67\x32\65", "\60\x36\143\x61\66\63\x35\61\145\60\60\63\x38\62\x36\x66", "\x31\x34\62\71\x32\x39\66\x37\60\141\60\145\66\x65\67\60", "\x32\x37\x62\67\x30\141\x38\x35\x34\66\x64\x32\62\146\146\143", "\x32\x65\61\x62\x32\61\63\70\65\143\x32\66\143\71\62\x36", "\x34\x64\62\143\x36\x64\x66\x63\x35\141\x63\x34\62\x61\145\x64", "\65\x33\63\x38\60\x64\61\63\71\144\71\x35\x62\63\144\x66", "\x36\x35\60\x61\67\63\x35\64\70\x62\x61\146\x36\63\144\x65", "\x37\66\66\141\60\x61\x62\142\63\143\67\x37\142\62\141\x38", "\x38\61\143\x32\143\71\62\x65\x34\67\145\144\141\x65\145\x36", "\71\62\67\62\62\143\x38\x35\61\x34\x38\62\x33\65\x33\142", "\141\x32\x62\x66\x65\x38\x61\61\64\143\x66\x31\x30\63\66\x34", "\141\70\x31\141\66\x36\64\142\142\143\x34\x32\63\60\60\x31", "\143\62\64\x62\70\x62\x37\x30\x64\60\146\x38\x39\x37\71\x31", "\x63\67\x36\x63\x35\61\141\63\x30\x36\x35\64\142\145\63\x30", "\144\x31\x39\62\x65\70\x31\x39\144\x36\x65\x66\x35\62\61\x38", "\x64\66\x39\71\60\66\x32\64\x35\65\x36\x35\x61\71\x31\x30", "\146\64\60\x65\x33\x35\x38\x35\65\67\67\61\62\60\x32\x61", "\61\60\66\x61\x61\x30\67\x30\63\x32\x62\142\144\x31\142\x38", "\x31\71\x61\64\x63\x31\x31\66\142\70\x64\62\144\60\x63\x38", "\61\x65\x33\67\66\x63\60\70\65\61\64\61\x61\x62\x35\x33", "\62\x37\64\70\67\67\x34\143\144\x66\70\145\x65\142\71\71", "\63\x34\x62\x30\142\x63\x62\x35\145\x31\x39\142\x34\x38\141\70", "\63\x39\x31\143\x30\143\142\63\x63\x35\143\71\65\x61\66\x33", "\x34\145\144\x38\141\x61\x34\141\145\63\x34\x31\70\x61\143\x62", "\x35\142\71\x63\x63\x61\x34\146\67\x37\66\x33\145\63\x37\63", "\66\70\62\x65\66\146\146\63\144\x36\x62\x32\x62\x38\x61\63", "\x37\x34\x38\x66\70\62\145\x65\65\x64\x65\x66\x62\x32\x66\x63", "\x37\70\x61\65\66\63\x36\146\x34\x33\61\x37\62\x66\x36\x30", "\x38\64\x63\x38\x37\70\61\x34\141\x31\146\60\x61\x62\x37\x32", "\70\143\x63\x37\60\62\60\x38\x31\x61\x36\64\x33\71\145\143", "\x39\x30\142\x65\x66\146\x66\x61\x32\x33\x36\63\61\145\62\x38", "\x61\64\65\60\x36\143\x65\142\x64\x65\70\x32\142\144\145\x39", "\142\x65\x66\71\141\x33\x66\x37\x62\62\x63\66\67\71\61\x35", "\x63\66\67\61\x37\70\x66\x32\x65\63\x37\62\x35\x33\x32\142", "\143\141\x32\x37\x33\145\143\145\145\x61\x32\66\x36\61\x39\143", "\144\61\x38\66\142\x38\x63\x37\62\x31\143\x30\143\62\60\67", "\145\x61\144\141\x37\144\x64\66\143\x64\x65\x30\145\142\x31\145", "\x66\65\67\144\64\x66\x37\146\x65\145\66\145\x64\x31\x37\x38", "\60\x36\x66\60\66\x37\141\141\x37\62\61\67\66\146\142\x61", "\60\x61\66\63\67\x64\143\65\141\x32\143\x38\71\70\141\x36", "\x31\x31\x33\x66\x39\70\60\64\x62\145\x66\x39\x30\x64\x61\145", "\61\x62\67\x31\x30\x62\x33\x35\x31\63\61\x63\64\x37\x31\x62", "\62\70\x64\x62\x37\x37\146\x35\62\x33\x30\64\67\144\x38\x34", "\x33\62\143\141\x61\x62\x37\142\x34\60\x63\67\x32\x34\71\x33", "\63\x63\71\145\142\145\60\141\61\x35\143\71\142\x65\x62\143", "\64\x33\x31\x64\66\x37\143\64\x39\x63\61\60\60\x64\x34\x63", "\x34\x63\143\65\x64\x34\x62\x65\143\x62\x33\145\x34\x32\142\66", "\x35\x39\x37\x66\x32\71\71\143\x66\143\66\65\x37\145\62\x61", "\65\x66\x63\x62\x36\146\141\x62\63\x61\x64\66\146\141\x65\143", "\66\143\64\64\x31\71\70\143\x34\x61\x34\67\65\70\x31\67");
        $lI = 0;
        Jp:
        if (!($lI < 80)) {
            goto G5;
        }
        $WK[$lI] = new Math_BigInteger($WK[$lI], 16);
        Ur:
        $lI++;
        goto Jp;
        G5:
        o9:
        $Os = $this->l == 48 ? $Kv : $XA;
        $ib = strlen($jz);
        $jz .= str_repeat(chr(0), 128 - ($ib + 16 & 0x7f));
        $jz[$ib] = chr(0x80);
        $jz .= pack("\x4e\x34", 0, 0, 0, $ib << 3);
        $zf = str_split($jz, 128);
        foreach ($zf as $b7) {
            $fS = array();
            $lI = 0;
            Qo:
            if (!($lI < 16)) {
                goto h8;
            }
            $yi = new Math_BigInteger($this->_string_shift($b7, 8), 256);
            $yi->setPrecision(64);
            $fS[] = $yi;
            OD:
            $lI++;
            goto Qo;
            h8:
            $lI = 16;
            Ph:
            if (!($lI < 80)) {
                goto jw;
            }
            $yi = array($fS[$lI - 15]->bitwise_rightRotate(1), $fS[$lI - 15]->bitwise_rightRotate(8), $fS[$lI - 15]->bitwise_rightShift(7));
            $kG = $yi[0]->bitwise_xor($yi[1]);
            $kG = $kG->bitwise_xor($yi[2]);
            $yi = array($fS[$lI - 2]->bitwise_rightRotate(19), $fS[$lI - 2]->bitwise_rightRotate(61), $fS[$lI - 2]->bitwise_rightShift(6));
            $ia = $yi[0]->bitwise_xor($yi[1]);
            $ia = $ia->bitwise_xor($yi[2]);
            $fS[$lI] = $fS[$lI - 16]->copy();
            $fS[$lI] = $fS[$lI]->add($kG);
            $fS[$lI] = $fS[$lI]->add($fS[$lI - 7]);
            $fS[$lI] = $fS[$lI]->add($ia);
            Yp:
            $lI++;
            goto Ph;
            jw:
            $rt = $Os[0]->copy();
            $C2 = $Os[1]->copy();
            $x8 = $Os[2]->copy();
            $gN = $Os[3]->copy();
            $u_ = $Os[4]->copy();
            $fR = $Os[5]->copy();
            $jX = $Os[6]->copy();
            $Zc = $Os[7]->copy();
            $lI = 0;
            Gc:
            if (!($lI < 80)) {
                goto w8;
            }
            $yi = array($rt->bitwise_rightRotate(28), $rt->bitwise_rightRotate(34), $rt->bitwise_rightRotate(39));
            $kG = $yi[0]->bitwise_xor($yi[1]);
            $kG = $kG->bitwise_xor($yi[2]);
            $yi = array($rt->bitwise_and($C2), $rt->bitwise_and($x8), $C2->bitwise_and($x8));
            $yJ = $yi[0]->bitwise_xor($yi[1]);
            $yJ = $yJ->bitwise_xor($yi[2]);
            $Kw = $kG->add($yJ);
            $yi = array($u_->bitwise_rightRotate(14), $u_->bitwise_rightRotate(18), $u_->bitwise_rightRotate(41));
            $ia = $yi[0]->bitwise_xor($yi[1]);
            $ia = $ia->bitwise_xor($yi[2]);
            $yi = array($u_->bitwise_and($fR), $jX->bitwise_and($u_->bitwise_not()));
            $IF = $yi[0]->bitwise_xor($yi[1]);
            $xw = $Zc->add($ia);
            $xw = $xw->add($IF);
            $xw = $xw->add($WK[$lI]);
            $xw = $xw->add($fS[$lI]);
            $Zc = $jX->copy();
            $jX = $fR->copy();
            $fR = $u_->copy();
            $u_ = $gN->add($xw);
            $gN = $x8->copy();
            $x8 = $C2->copy();
            $C2 = $rt->copy();
            $rt = $xw->add($Kw);
            Tq:
            $lI++;
            goto Gc;
            w8:
            $Os = array($Os[0]->add($rt), $Os[1]->add($C2), $Os[2]->add($x8), $Os[3]->add($gN), $Os[4]->add($u_), $Os[5]->add($fR), $Os[6]->add($jX), $Os[7]->add($Zc));
            Ua:
        }
        H9:
        $yi = $Os[0]->toBytes() . $Os[1]->toBytes() . $Os[2]->toBytes() . $Os[3]->toBytes() . $Os[4]->toBytes() . $Os[5]->toBytes();
        if (!($this->l != 48)) {
            goto xF;
        }
        $yi .= $Os[6]->toBytes() . $Os[7]->toBytes();
        xF:
        return $yi;
    }
    function _rightRotate($Er, $av)
    {
        $bD = 32 - $av;
        $sD = (1 << $bD) - 1;
        return $Er << $bD & 0xffffffff | $Er >> $av & $sD;
    }
    function _rightShift($Er, $av)
    {
        $sD = (1 << 32 - $av) - 1;
        return $Er >> $av & $sD;
    }
    function _not($Er)
    {
        return ~$Er & 0xffffffff;
    }
    function _add()
    {
        static $C8;
        if (isset($C8)) {
            goto Ww;
        }
        $C8 = pow(2, 32);
        Ww:
        $jq = 0;
        $lN = func_get_args();
        foreach ($lN as $b1) {
            $jq += $b1 < 0 ? ($b1 & 0x7fffffff) + 0x80000000 : $b1;
            mS:
        }
        tg:
        switch (true) {
            case is_int($jq):
            case version_compare(PHP_VERSION, "\65\56\63\x2e\x30") >= 0 && (php_uname("\x6d") & "\337\xdf\xdf") != "\101\x52\x4d":
            case (PHP_OS & "\xdf\xdf\xdf") === "\127\111\116":
                return fmod($jq, $C8);
        }
        vM:
        Dm:
        return fmod($jq, 0x80000000) & 0x7fffffff | (fmod(floor($jq / 0x80000000), 2) & 1) << 31;
    }
    function _string_shift(&$vy, $J0 = 1)
    {
        $Hb = substr($vy, 0, $J0);
        $vy = substr($vy, $J0);
        return $Hb;
    }
}
