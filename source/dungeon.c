#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"


void Dungeon(){

	kirikouGunStart();
	alive = true;
	dingue = true;
	NF_PlayRawSound(12, 127, 64, true, 0);

    while(1){
		
		mainLoop();
		scanKeys();
		kirikouGunUpdate();
		bulletUpdate();
		for(int i = 0; i < 10; i++){
			skullUpdate(i);
		}
		if(cpos == 4){
			dingue = false;
			cpos = 0;
			gameState += 1;
			x = old.obj_x[4];
			y = old.obj_y[4];
    		NF_CreateSprite(1, 0, 0, 0, x, y);
			for(int i = 0; i < 10; i++){
				skullDeath(i);
			}
			soundKill(0);
			soundKill(1);
			soundKill(2);

			if(levelindex == 2){
				loadCine(9);
			}
			loadRoom(old, current);
    		NF_MoveSprite(1, 12, 256, 192);
			break;
		}
		if(alive == false){
			dingue = false;
			Dead();
			break;
		}
	}
}