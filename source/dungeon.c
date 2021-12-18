#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"


void Dungeon(){

	kirikouGunStart();

    while(1){
		
		mainLoop();
		scanKeys();
		kirikouGunUpdate();
		bulletUpdate();
		for(int i = 0; i < 10; i++){
			skullUpdate(i);
		}
		if(cpos == 4){
			gameState += 1;
			x = old.obj_x[4];
			y = old.obj_y[4];
    		NF_CreateSprite(1, 0, 0, 0, x, y);
			loadRoom(old, current);
			break;
		}
	}
}