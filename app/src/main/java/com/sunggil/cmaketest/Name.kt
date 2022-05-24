package com.sunggil.cmaketest

object Name {
    init {
        System.loadLibrary("native-lib")
    }

    /**
     * vision testString
     * @return
     */
    external fun a() : String?
}
