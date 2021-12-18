#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

void Dead(){
    loadCine(2);
    NF_HflipSprite(1, 0, false);
    for(int i = 0; i < 10; i++){
		skullDeath(i);
	}
    NF_MoveSprite(1, 12, 256, 192);
    NF_CreateSprite(1, 0, 0, 0, x, y);
    cpos = 0;
    loadRoom(old, current);
}