#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"


void overWorld(){

    while(1){
		
		mainLoop();
		scanKeys();
		kirikouUpdate();
		if(current.obj_x[npcpoint] != 0){
			npcUpdate(npcpoint, mx, my);
		}
		if(current.obj_x[cavepoint] != 0){
			caveUpdate(cavepoint, current, dung[0][0]);
		}

	}
}