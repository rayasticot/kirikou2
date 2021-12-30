#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

int const pox[3] = {48, 112, 176};
int const poy[3] = {24, 80, 136};


void setUi(){
    int zx = 0;
    int zy = 0;
    for(int i = 20; i < 29; i++){
        NF_CreateSprite(0, i, 1, 1, pox[zx], pox[zy]);
        if(zx == 2){
            zx = 0;
            zy += 1;
        }
        else{
            zx += 1;
        }
    }
}
void uiUpdate(){
    int zx = 0;
    int zy = 0;
    for(int i = 20; i < 29; i++){
        if(pos[zx][zy] == 0){
            NF_MoveSprite(0, i, 256, 192);
        }
        else{
            NF_MoveSprite(0, i, pox[zx], pox[zy]);
        }
        if(zx == 2){
            zx = 0;
            zy += 1;
        }
        else{
            zx += 1;
        }
    }
}