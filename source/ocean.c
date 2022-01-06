#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

void Ocean(struct map next){
    int boatx = 256;
    soundKill(0);
	NF_ResetRawSoundBuffers();
	for(int i = 0; i <= 10; i++){
		if(current.object[i] > 0){
			NF_MoveSprite(1, i+1, 256, 192);
		}
		else{
			break;
		}
	}
	NF_MoveSprite(1, 0, 256, 192);

	NF_CreateTiledBg(1, 3, "bg/sea");
    NF_CreateSprite(1, 1, 5, 5, boatx, 128);
    while(boatx > -32){
        mainLoop();
        boatx -= 2;
        NF_MoveSprite(1, 1, boatx, 128);
    }
	unloadLevelSprite();
    switchSprite(levelindex);
	NF_CreateTiledBg(0, 3, "bg/green");
    loadRoom(next, current);
	topSwitch();
}