#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

u8 karaba_h = 0;
u8 karaba_life = 10;
u16 timer = 0;
u8 invtime = 0;
s16 tempx = 224;
bool karaba_dir = false;
bool karaba_inv = false;

void Karaba(){
    if(karaba_h == 0){
        karaba_dir = false;
    }
    if(karaba_h == 128){
        karaba_dir = true;
    }
    if(karaba_dir == true){
        karaba_h -= 2;
    }
    else{
        karaba_h += 2;
    }
    NF_MoveSprite(1, 19, tempx, karaba_h);
    if(checkCollision(x, y, 16, 32, tempx, karaba_h, 32, 64) == true){
        alive = false;
    }
    if(timer == 240){
	    NF_PlayRawSound(11, 127, 127, false, 0);
    }
    if(timer > 300){
        tempx -= 4;
        if(tempx < x-16){
            tempx = 224;
            timer = 0;
        }
    }
    if(checkCollision(bulx, buly, 8, 8, tempx, karaba_h, 32, 64) == true){
        bul = false;
        lock = false;
        bulx = 256;
        NF_MoveSprite(1, 12, bulx, buly);
        if(karaba_inv == false){
            karaba_life--;
	        NF_PlayRawSound(10, 127, 64, false, 0);
            karaba_inv = true;
            NF_VramSpritePal(1, 3, 5);
            invtime = 0;

            if(karaba_life == 0){
                NF_MoveSprite(1, 19, 256, 192);
                end = true;
            }
        }
    }
    if(karaba_inv == true){
        invtime++;
        if(invtime == 128){
	        NF_VramSpritePal(1, 5, 5);
            karaba_inv = false;
            invtime = 0;
        }
    }
    timer++;
}

void Boss(){

    NF_UnloadSpriteGfx(5);
	NF_UnloadSpritePal(5);
	NF_FreeSpriteGfx(1, 5);

    loadSprite(1, "sprite/re/karaba", 5, 32, 64, false);
    NF_CreateSprite(1, 19, 5, 5, 224, 0);

    soundKill(0);
	soundKill(1);
	soundKill(2);

    loadCine(10);

    NF_LoadRawSound("sound/kara2", 10, 11025, 0);
	NF_LoadRawSound("sound/kara3", 11, 11025, 0);
	NF_LoadRawSound("sound/zzz", 12, 11025, 0);

    NF_PlayRawSound(12, 127, 64, true, 0);

    karaba_h = 0;
    karaba_life = 10;
    timer = 0;
    tempx = 224;
    karaba_dir = false;

    while(1){
        mainLoop();
		scanKeys();
		kirikouGunUpdate();
		bulletUpdate();
        Karaba();
        if(end == true){
            soundKill(0);
			soundKill(1);
			soundKill(2);
            loadCine(11);
            NF_MoveSprite(1, 0, 256, 192);
            break;
        }
        if(alive == false){
            soundKill(0);
			soundKill(1);
			soundKill(2);
            Dead();
			break;
		}
    }
}