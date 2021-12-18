#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

void Dead(){
    loadCine(2);
    NF_CreateSprite(1, 0, 0, 0, x, y);
    loadRoom(old, current);
}