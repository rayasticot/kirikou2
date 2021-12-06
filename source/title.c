#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>


void Title(){
    NF_LoadTiledBg("bg/kirikou2", "bg/kirikou2", 256, 256);
    NF_CreateTiledBg(0, 3, "bg/kirikou2");

    while(1){
        scanKeys();
        
        NF_SpriteOamSet(0);
        NF_SpriteOamSet(1);

        swiWaitForVBlank();

        oamUpdate(&oamMain);
        oamUpdate(&oamSub);

        if(KEY_START & keysHeld()){
            break;
        }
    }
}