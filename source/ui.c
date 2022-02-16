#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

int const pox[3] = {80, 112, 144};
int const poy[3] = {8, 40, 72};


void setUi(){
    int zx = 0;
    int zy = 0;
    NF_CreateSprite(0, 20, 1, 1, pox[zx], pox[zy]);
    if(zx == 2){
        zx = 0;
        zy += 1;
    }
    else{
        zx += 1;
    }
}
void uiUpdate(){
    int zx = 0;
    int zy = 0;
    NF_MoveSprite(0, 20, pox[zx], pox[zy]);
    if(zx == 2){
        zx = 0;
        zy += 1;
    }
    else{
        zx += 1;
    }
}