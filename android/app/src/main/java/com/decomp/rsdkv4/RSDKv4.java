package com.decomp.rsdkv4;

import android.Manifest;

import java.io.File;

import org.libsdl.app.*;


public class RSDKv4 extends SDLActivity {
    public String getBasePath() {
        String p = getApplicationContext().getExternalFilesDir(null).toString();
        new File(p).mkdirs();
        return p + "/";
    }
}
