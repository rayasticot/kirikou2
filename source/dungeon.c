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
	}
}