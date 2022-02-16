#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>


void Title(){
    NF_LoadTiledBg("bg/kirikou2", "bg/kirikou2", 256, 256);
    NF_LoadTiledBg("bg/tuto", "bg/tuto", 256, 256);
    NF_CreateTiledBg(0, 3, "bg/kirikou2");
    NF_CreateTiledBg(1, 3, "bg/tuto");

    while(1){
        scanKeys();
        
        NF_SpriteOamSet(0);
        NF_SpriteOamSet(1);

        swiWaitForVBlank();

        oamUpdate(&oamMain);
        oamUpdate(&oamSub);

        if(KEY_START & keysHeld()){
            NF_DeleteTiledBg(1, 3);
            NF_UnloadTiledBg("bg/tuto");
            break;
        }
        if(KEY_A & keysHeld()){
            NF_DeleteTiledBg(1, 3);
            NF_UnloadTiledBg("bg/tuto");
            break;
        }
    }
}