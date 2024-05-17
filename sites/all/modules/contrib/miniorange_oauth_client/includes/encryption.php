<?php


class AESEncryption
{
    public static function encrypt_data($Z_, $Lb)
    {
        $Lb = openssl_digest($Lb, "\163\x68\141\x32\x35\x36");
        $Bl = "\101\105\123\55\x31\x32\x38\55\x43\x42\x43";
        $eW = openssl_cipher_iv_length($Bl);
        $Vg = openssl_random_pseudo_bytes($eW);
        $oV = openssl_encrypt($Z_, $Bl, $Lb, OPENSSL_RAW_DATA || OPENSSL_ZERO_PADDING, $Vg);
        return base64_encode($Vg . $oV);
    }
    public static function decrypt_data($Z_, $Lb, $Bl = "\x41\x45\123\x2d\61\x32\x38\x2d\103\x42\x43")
    {
        $iq = base64_decode($Z_);
        $Lb = openssl_digest($Lb, "\x73\150\141\62\x35\x36");
        $eW = openssl_cipher_iv_length($Bl);
        $Vg = substr($iq, 0, $eW);
        $Z_ = substr($iq, $eW);
        $DE = openssl_decrypt($Z_, $Bl, $Lb, OPENSSL_RAW_DATA || OPENSSL_ZERO_PADDING, $Vg);
        return $DE;
    }
}
