#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

struct map{
    u8 object[10];
    u8 obj_x[10];
    u8 obj_y[10];
	u8 npcsprite;

	char* sound[5];
	int hz[5];

    char* background;

	u8 cinematic;
};
struct cinematic{
	int time[5];

	char* sound[5];
	int hz[5];

	char* bg[5];
};
struct map benin[3][3];
struct map dung0[5];
struct cinematic cinema[10];

int pos[3][3] = {
	{0, 0, 0},
	{0, 1, 0},
	{0, 0, 0}
};

int npcpoint;
int cavepoint;

struct map current;


void loadRoom(struct map carte, struct map old);
void loadCine(int id);

#include "functions.h"
#include "kirikou.h"
#include "map.h"
#include "npc.h"
#include "cave.h"

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
    loadSprite(1, "sprite/cave", 7, 32, 32, false);

	NF_LoadTiledBg("bg/level1", "bg/level1", 256, 256);
	NF_LoadTiledBg("bg/dodjiback", "bg/dodjiback", 256, 256);
	NF_LoadTiledBg("bg/kiriback", "bg/kiriback", 256, 256);
	NF_LoadTiledBg("bg/bgcave", "bg/bgcave", 256, 256);

	setLevel();
	setCine();

	Title();

	loadCine(0);
	kirikouStart(120, 120);
	loadRoom(benin[1][1], benin[tx][ty]);

	while(1){
		
		mainLoop();
		scanKeys();
		kirikouUpdate();
		if(current.obj_x[npcpoint] != 0){
			npcUpdate(npcpoint, mx, my);
		}
		if(current.obj_x[cavepoint] != 0){
			caveUpdate(cavepoint, current, dung0[0]);
		}

	}

	return 0;
}
void loadRoom(struct map carte, struct map old){
	soundKill(0);
	NF_ResetRawSoundBuffers();
	for(int i = 0; i <= 10; i++){
		if(old.object[i] > 0){
			NF_DeleteSprite(1, i+1);
		}
		else{
			break;
		}
	}
	for(int i = 0; i <= 10; i++){
		if(carte.object[i] > 0){
			switch(carte.object[i]){
				case 1:
					NF_CreateSprite(1, i+1, 1, 1, carte.obj_x[i], carte.obj_y[i]);
					npcpoint = -1;
					cavepoint = -1;
					break;
				case 2:
					npcStart(i, carte.obj_x[i], carte.obj_y[i], carte.npcsprite);
					npcpoint = i;
					break;
				case 3:
					caveStart(i, carte.obj_x[i], carte.obj_y[i]);
					cavepoint = i;
					break;


			}
		}
		else{
			break;
		}
	}
	for(int i = 0; i < 5; i++){
		if(carte.sound[i] != NULL){
			NF_LoadRawSound(carte.sound[i], i+1, carte.hz[i], 0);
		}
	}
	if(carte.background != NULL){
		NF_CreateTiledBg(1, 3, carte.background);
	}
	current = carte;
}
void loadCine(int id){
	NF_CreateTiledBg(0, 3, cinema[id].bg[0]);
	NF_LoadRawSound(cinema[id].sound[0], 1, cinema[id].hz[0], 0);
	NF_PlayRawSound(1, 127, 64, false, 0);
	for(int i = 1; i < 5; i++){
		if(cinema[id].sound[i] != 0){
			NF_LoadRawSound(cinema[id].sound[i], i+1, cinema[id].hz[i], 0);
		}
	}
	for(int i = 0; i < cinema[id].time[0]; i++){
		mainLoop();
	}
	for(int i = 1; i < 5; i++){
		if(cinema[id].sound[i] != 0){
			NF_PlayRawSound(i+1, 127, 64, false, 0);
		}
		if(cinema[id].bg[i] != 0){
			NF_CreateTiledBg(0, 3, cinema[id].bg[i]);
		}
		for(int f = 0; f < cinema[id].time[i]; f++){
			mainLoop();
		}
	}
	NF_CreateTiledBg(0, 3, "bg/level1");
}