#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

#include "struct.h"

struct map benin[3][3];
struct map spain[3][3];
struct map franc[3][3];
struct map retour[3][3];
struct map dung[4][4];
struct spritelist list[5];
struct cinematic cinema[12];

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
bool dingue = false;
bool end = false;

struct map current;
struct map old;


#include "spritelist.h"
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

	setList();
	switchSprite(0);

	NF_LoadTiledBg("bg/level1", "bg/level1", 256, 256);
	NF_LoadTiledBg("bg/c1", "bg/c1", 256, 256);
	NF_LoadTiledBg("bg/c2", "bg/c2", 256, 256);
	NF_LoadTiledBg("bg/c3", "bg/c3", 256, 256);
	NF_LoadTiledBg("bg/c4", "bg/c4", 256, 256);
	NF_LoadTiledBg("bg/kiriback", "bg/kiriback", 256, 256);
	NF_LoadTiledBg("bg/level4", "bg/bgcave", 256, 256);
	NF_LoadTiledBg("bg/guncine", "bg/guncine", 256, 256);
	NF_LoadTiledBg("bg/guncine1", "bg/guncine1", 256, 256);
	NF_LoadTiledBg("bg/dead", "bg/dead", 256, 256);
	NF_LoadTiledBg("bg/houche", "bg/houche", 256, 256);
	NF_LoadTiledBg("bg/mer", "bg/sea", 256, 256);
	NF_LoadTiledBg("bg/green", "bg/green", 256, 256);
	NF_LoadTiledBg("bg/repito", "bg/repito", 256, 256);
	NF_LoadTiledBg("bg/blacke", "bg/blacke", 256, 256);
	NF_LoadTiledBg("bg/level4", "bg/rue", 256, 256);
	NF_LoadTiledBg("bg/zetv", "bg/zetv", 256, 256);
	NF_LoadTiledBg("bg/daronne", "bg/daronne", 256, 256);
	NF_LoadTiledBg("bg/geotte", "bg/geotte", 256, 256);
	NF_LoadTiledBg("bg/karaba", "bg/karaba", 256, 256);
	NF_LoadTiledBg("bg/end0", "bg/end0", 256, 256);
	NF_LoadTiledBg("bg/end1", "bg/end1", 256, 256);
	NF_LoadTiledBg("bg/end2", "bg/end2", 256, 256);

	setLevel();
	setCine();

	Title();

	loadCine(0);
	kirikouStart(120, 120);
	loadRoom(benin[1][1], benin[1][1]);
	setUi();
	overWorld();
	Credits();

	while(1){
		mainLoop();
	}

	return 0;
}