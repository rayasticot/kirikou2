#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

void Ocean(struct map next){
    int boatx = 256;
    soundKill(0);
	NF_ResetRawSoundBuffers();
	for(int i = 0; i <= 10; i++){
		if(old.object[i] > 0){
			NF_MoveSprite(1, i+1, 256, 192);
		}
		else{
			break;
		}
	}

    NF_CreateSprite(1, 1, 12, 12, boatx, 128);
    while(boatx > -32){
        boatx -= 4;
        NF_MoveSprite(1, 1, boatx, 128);
    }
    loadCine(0);
}