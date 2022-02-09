#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "include.h"

void setMinus(){
	npcpoint = -1;
	cavepoint = -1;
	bolepoint = -1;
	boatpoint = -1;
}
void loadRoom(struct map carte, struct map old){
	uiUpdate();
	skullnum = 0;
	soundKill(0);
	NF_ResetRawSoundBuffers();
	for(int i = 0; i <= 10; i++){
		if(old.object[i] > 0){
			NF_MoveSprite(1, i+1, 256, 192);
		}
		else{
			break;
		}
	}
	for(int i = 0; i <= 10; i++){
		if(carte.object[i] > 0){
			switch(carte.object[i]){
				case 1:
					NF_CreateSprite(1, i+1, 6, 6, carte.obj_x[i], carte.obj_y[i]);
					setMinus();
					break;
				case 2:
					npcStart(i, carte.obj_x[i], carte.obj_y[i], carte.npcsprite);
					npcpoint = i;
					break;
				case 3:
					caveStart(i, carte.obj_x[i], carte.obj_y[i]);
					cavepoint = i;
					break;
				case 4:
					skullStart(i, current, carte.obj_x[i], carte.obj_y[i], 3);
					if(skullpoint == 0){
						skullpoint = i;
					}
					skullnum += 1;
					break;
				case 5:
					boleStart(i, carte, carte.obj_x[i], carte.obj_y[i]);
					bolepoint = i;
					break;
				case 6:
					NF_CreateSprite(1, i+1, 5, 5, carte.obj_x[i], carte.obj_y[i]);
					boatpoint = i;
					break;
				case 7:
					NF_CreateSprite(1, i+1, 13, 13, carte.obj_x[i], carte.obj_y[i]);
					setMinus();
					break;
				case 8:
					NF_CreateSprite(1, i+1, 14, 14, carte.obj_x[i], carte.obj_y[i]);
					setMinus();
					break;
				case 9:
					NF_CreateSprite(1, i+1, 15, 15, carte.obj_x[i], carte.obj_y[i]);
					setMinus();
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
	NF_ResetRawSoundBuffers();
	NF_CreateTiledBg(0, 3, cinema[id].bg[0]);
	NF_LoadRawSound(cinema[id].sound[0], 1, cinema[id].hz[0], 0);
	NF_PlayRawSound(1, 127, 64, false, 0);
	for(int i = 1; i < 5; i++){
		if(cinema[id].sound[i] != NULL){
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
	topSwitch();
}
void topSwitch(){
	switch(levelindex){
		case 0:
			NF_CreateTiledBg(0, 3, "bg/level1");
			break;
		case 1:
			NF_CreateTiledBg(0, 3, "bg/green");
			break;
		case 2:
			NF_CreateTiledBg(0, 3, "bg/rue");
			break;
	}
}
void switchSprite(int level){
	for(int i = 0; i < 11; i++){
		if(list[level].link[i] != 0){
			loadSprite(1, list[level].link[i], i+6, list[level].size_x[i], list[level].size_y[i], false);
		}
		else{
			break;
		}
	}
}
void unloadLevelSprite(){ // Tous les slots doivent déjà être pris
	for(int i = 0; i < 10; i++){
		NF_UnloadSpriteGfx(i+6);
		NF_UnloadSpritePal(i+6);
		NF_FreeSpriteGfx(1, i+6);
	}
}