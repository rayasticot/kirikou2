#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "struct.h"

struct map benin[3][3];
struct map spain[3][3];
struct map franc[3][3];
struct map chine[3][3];
struct map retour[3][3];
struct map dung[5][4];
struct spritelist list[5];
struct cinematic cinema[10];

int pos[3][3] = {
	{0, 0, 0},
	{0, 1, 0},
	{0, 0, 0}
};

int npcpoint;
int cavepoint;
int skullpoint;
int bolepoint;
int boatpoint;
int skullnum;
int gameState = 0;
int levelindex = 0;
int skullx[10];
int skully[10];
int dir[10];
bool skullLive[10];
bool gun = false;
int cpos = 0;
int opos = 0;
bool alive = true;

struct map current;
struct map old;


#include "declarations.h"
#include "functions.h"
#include "kirikou.h"
#include "bole.h"
#include "map.h"
#include "npc.h"
#include "boat.h"
#include "cave.h"
#include "skull.h"
#include "boat.h"

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
    loadSprite(0, "sprite/ui", 1, 32, 32, false);
    loadSprite(1, "sprite/bullets", 2, 8, 8, false);
    loadSprite(1, "sprite/skulate", 3, 32, 32, false);
    loadSprite(1, "sprite/kirikougun", 4, 16, 32, false);
    loadSprite(1, "sprite/titanic", 5, 32, 32, false);

	switchSprite(0);

	NF_LoadTiledBg("bg/level1", "bg/level1", 256, 256);
	NF_LoadTiledBg("bg/dodjiback", "bg/dodjiback", 256, 256);
	NF_LoadTiledBg("bg/kiriback", "bg/kiriback", 256, 256);
	NF_LoadTiledBg("bg/level4", "bg/bgcave", 256, 256);
	NF_LoadTiledBg("bg/guncine", "bg/guncine", 256, 256);
	NF_LoadTiledBg("bg/guncine1", "bg/guncine1", 256, 256);
	NF_LoadTiledBg("bg/dead", "bg/dead", 256, 256);
	NF_LoadTiledBg("bg/houche", "bg/houche", 256, 256);
	NF_LoadTiledBg("bg/sea", "bg/sea", 256, 256);
	NF_LoadTiledBg("bg/green", "bg/green", 256, 256);
	NF_LoadTiledBg("bg/repito", "bg/repito", 256, 256);

	setLevel();
	setCine();

	Title();

	loadCine(0);
	kirikouStart(120, 120);
	loadRoom(benin[1][1], benin[1][1]);
	setUi();
	overWorld();

	while(1){
		
		mainLoop();
		scanKeys();
		kirikouUpdate();
		if(current.obj_x[npcpoint] != 0){
			npcUpdate(npcpoint, mx, my);
		}
		if(current.obj_x[cavepoint] != 0){
			caveUpdate(cavepoint, current, dung[0][0]);
		}

	}

	return 0;
}