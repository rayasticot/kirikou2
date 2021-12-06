#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>


void Title(){
    NF_LoadTiledBg("bg/kirikoutitle", "bg/kirikoutitle", 256, 256);
    NF_CreateTiledBg(0, 3, "bg/kirikoutitle");

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