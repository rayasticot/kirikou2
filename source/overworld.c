#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

void overWorld(){

    while(1){
		
		mainLoop();
		scanKeys();
		kirikouUpdate();
		//uiUpdate(); Cassé
		if(current.obj_x[npcpoint] != 0){
			npcUpdate(npcpoint, mx, my);
		}
		if(current.obj_x[cavepoint] != 0){
			caveUpdate(cavepoint, current, dung[levelindex][0]);
		}
		if(current.obj_x[bolepoint] != 0){
			boleUpdate(bolepoint, current);
		}
		if(current.obj_x[boatpoint] != 0){
			boatUpdate(boatpoint);
		}
		if(end == true){
			break;
		}
	}
}