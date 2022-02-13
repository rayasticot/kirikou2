#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

u16 timmy = 0;
u16 jimmy = 0;
u8 james = 0;
char paul[7]; 


void Credits(){
    NF_MoveSprite(1, 0, 256, 192);

    NF_DeleteTiledBg(0, 3);
    NF_DeleteTiledBg(1, 3);
    NF_ResetTiledBgBuffers();

	NF_LoadTiledBg("bg/credits/cre0", "cre0", 256, 256);
	NF_LoadTiledBg("bg/credits/cre1", "cre1", 256, 256);
	NF_LoadTiledBg("bg/credits/cre2", "cre2", 256, 256);
	NF_LoadTiledBg("bg/credits/cre3", "cre3", 256, 256);
	NF_LoadTiledBg("bg/credits/cre4", "cre4", 256, 256);
	NF_LoadTiledBg("bg/credits/cre5", "cre5", 256, 256);
	NF_LoadTiledBg("bg/credits/cre6", "cre6", 256, 256);
	NF_LoadTiledBg("bg/credits/cre7", "cre7", 256, 256);
	NF_LoadTiledBg("bg/credits/cre8", "cre8", 256, 256);
    
    NF_ResetRawSoundBuffers();
    NF_LoadRawSound("sound/charte0", 0, 11025, 0);
    NF_LoadRawSound("sound/charte1", 1, 11025, 0);

    NF_CreateTiledBg(0, 3, "cre0");
    NF_PlayRawSound(0, 127, 64, false, 0);

    while(1){
        mainLoop();
        if(timmy == 1110){
            NF_PlayRawSound(1, 127, 64, false, 0);
        }
        if(jimmy == 270){
            james += 1;
            if(james == 9){
                break;
            }
            sprintf(paul, "cre%u", james);
            NF_CreateTiledBg(0, 3, paul);
            jimmy = 0;
        }
        timmy++;
        jimmy++;
    }
}
