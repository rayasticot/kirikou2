#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

struct map{
    u8 object[10];
    u8 obj_x[10];
    u8 obj_y[10];
	u8 npcsprite;

	char* sound0;
	char* sound1;
	char* sound2;
	char* sound3;
	char* sound4;

	int hz1;
	int hz2;
	int hz3;
	int hz4;
	int hz5;

    char* background;
};
struct map benin[3][3];

int pos[3][3] = {
	{0, 0, 0},
	{0, 1, 0},
	{0, 0, 0}
};

int npcpoint;


void loadRoom(u8 x, u8 y);

#include "functions.h"
#include "kirikou.h"
#include "map_benin.h"
#include "npc.h"

int main(int argc, char **argv) {


	NF_Set2D(0, 0);
	NF_Set2D(1, 0);
	NF_SetRootFolder("NITROFS");
	NF_InitSpriteBuffers();
	NF_InitSpriteSys(0);
	NF_InitSpriteSys(1);
	NF_InitTiledBgBuffers();
	NF_InitTiledBgSys(0);
	NF_InitTiledBgSys(1);
	soundEnable();
	NF_InitRawSoundBuffers();
	NF_InitCmapBuffers();

	NF_LoadRawSound("sound/benin/npc0/h0", 0, 11025, 0);

    loadSprite(1, "sprite/nada", 0, 16, 32, false);
    loadSprite(1, "sprite/maison", 1, 32, 32, false);
    loadSprite(1, "sprite/npc0", 2, 16, 32, false);
    loadSprite(1, "sprite/npc1", 3, 16, 32, false);
    loadSprite(1, "sprite/npc2", 4, 16, 32, false);
    loadSprite(1, "sprite/npc3", 5, 16, 32, false);

	NF_LoadTiledBg("bg/level1", "bg/level1", 256, 256);

	setLevel();

	Title();

	kirikouStart(120, 120);
	loadRoom(1, 1);

	while(1){
		
		mainLoop();
		scanKeys();
		kirikouUpdate();
		if(benin[mx][my].obj_x[npcpoint] != 0){
			npcUpdate(npcpoint, mx, my);
		}

	}

	return 0;
}
void loadRoom(u8 x, u8 y){
	soundKill(0);
	NF_ResetRawSoundBuffers();
	for(int i = 0; i <= 10; i++){
		if(benin[tx][ty].object[i] > 0){
			NF_DeleteSprite(1, i+1);
		}
		else{
			break;
		}
	}
	for(int i = 0; i <= 10; i++){
		if(benin[x][y].object[i] > 0){
			switch(benin[x][y].object[i]){
				case 1:
					NF_CreateSprite(1, i+1, 1, 1, benin[x][y].obj_x[i], benin[x][y].obj_y[i]);
					npcpoint = -1;
					break;
				case 2:
					npcStart(i, benin[x][y].obj_x[i], benin[x][y].obj_y[i], benin[x][y].npcsprite);
					npcpoint = i;
					break;
			}
		}
		else{
			break;
		}
	}
	if(benin[x][y].sound0 != NULL){
		NF_LoadRawSound(benin[x][y].sound0, 1, benin[x][y].hz1, 0);
	}
	if(benin[x][y].sound1 != NULL){
		NF_LoadRawSound(benin[x][y].sound1, 2, benin[x][y].hz2, 0);
	}
	if(benin[x][y].sound2 != NULL){
		NF_LoadRawSound(benin[x][y].sound2, 3, benin[x][y].hz3, 0);
	}
	if(benin[x][y].sound3 != NULL){
		NF_LoadRawSound(benin[x][y].sound3, 4, benin[x][y].hz4, 0);
	}
	if(benin[x][y].sound4 != NULL){
		NF_LoadRawSound(benin[x][y].sound4, 5, benin[x][y].hz5, 0);
	}
	if(benin[x][y].background != NULL){
		NF_CreateTiledBg(1, 3, benin[x][y].background);
	}
}