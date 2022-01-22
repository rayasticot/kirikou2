#ifndef MAP_BENIN_H
#define MAP_BENIN_H


#define MAISON 1
#define NPC 2
#define CAVE 3
#define SKLT 4
#define BOLE 5
#define BOAT 6
#define OBJ1 7
#define OBJ2 8
#define OBJ3 9

void setLevel(){
    benin[1][1].object[0] = MAISON;
	benin[1][1].obj_x[0] = 112;
	benin[1][1].obj_y[0] = 64;
    benin[1][1].object[7] = OBJ2;
    benin[1][1].obj_x[7] = 104;
    benin[1][1].obj_y[7] = 8;
    benin[1][1].object[1] = OBJ2;
    benin[1][1].obj_x[1] = 176;
    benin[1][1].obj_y[1] = 16;
    benin[1][1].object[2] = OBJ2;
    benin[1][1].obj_x[2] = 200;
    benin[1][1].obj_y[2] = 80;
    benin[1][1].object[3] = OBJ2;
    benin[1][1].obj_x[3] = 192;
    benin[1][1].obj_y[3] = 152;
    benin[1][1].object[4] = OBJ2;
    benin[1][1].obj_x[4] = 80;
    benin[1][1].obj_y[4] = 152;
    benin[1][1].object[5] = OBJ2;
    benin[1][1].obj_x[5] = 40;
    benin[1][1].obj_y[5] = 104;
    benin[1][1].object[6] = OBJ2;
    benin[1][1].obj_x[6] = 32;
    benin[1][1].obj_y[6] = 32;
	benin[1][1].background = "bg/level1";

    benin[1][2].object[0] = MAISON;
    benin[1][2].obj_x[0] = 56;
	benin[1][2].obj_y[0] = 64;
    benin[1][2].object[1] = MAISON;
    benin[1][2].obj_x[1] = 192;
	benin[1][2].obj_y[1] = 24;
    benin[1][2].object[2] = MAISON;
    benin[1][2].obj_x[2] = 184;
	benin[1][2].obj_y[2] = 128;
    benin[1][2].object[5] = NPC;
    benin[1][2].obj_x[5] = 96;
    benin[1][2].obj_y[5] = 120;
    benin[1][2].object[3] = OBJ2;
    benin[1][2].obj_x[3] = 136;
    benin[1][2].obj_y[3] = 64;
    benin[1][2].object[4] = OBJ2;
    benin[1][2].obj_x[4] = 24;
    benin[1][2].obj_y[4] = 136;
    benin[1][2].npcsprite = 7;
	benin[1][2].background = "bg/level1";
    benin[1][2].sound[0] = "sound/benin/npc0/h0";
    benin[1][2].hz[0] = 11025;
    benin[1][2].sound[1] = "sound/benin/npc0/h1";
    benin[1][2].hz[1] = 11025;
    benin[1][2].sound[2] = "sound/benin/npc0/h2";
    benin[1][2].hz[2] = 11025;
    benin[1][2].sound[3] = "sound/benin/npc0/h3";
    benin[1][2].hz[3] = 11025;
    benin[1][2].sound[4] = "sound/benin/npc0/h4";
    benin[1][2].hz[4] = 11025;
    
    benin[2][1].object[0] = MAISON;
    benin[2][1].obj_x[0] = 88;
    benin[2][1].obj_y[0] = 24;
    benin[2][1].object[1] = MAISON;
    benin[2][1].obj_x[1] = 168;
    benin[2][1].obj_y[1] = 16;
    benin[2][1].object[6] = NPC;
    benin[2][1].obj_x[6] = 176;
    benin[2][1].obj_y[6] = 64;
    benin[2][1].object[2] = OBJ3;
    benin[2][1].obj_x[2] = 200;
    benin[2][1].obj_y[2] = 112;
    benin[2][1].object[3] = OBJ2;
    benin[2][1].obj_x[3] = 112;
    benin[2][1].obj_y[3] = 80;
    benin[2][1].object[4] = OBJ2;
    benin[2][1].obj_x[4] = 80;
    benin[2][1].obj_y[4] = 152;
    benin[2][1].object[5] = MAISON;
    benin[2][1].obj_x[5] = 32;
    benin[2][1].obj_y[5] = 88;
    benin[2][1].npcsprite = 8;
    benin[2][1].sound[0] = "sound/benin/npc1/h0";
    benin[2][1].hz[0] = 11025;
    benin[2][1].sound[1] = "sound/benin/npc1/h1";
    benin[2][1].hz[1] = 11025;
    benin[2][1].sound[2] = "sound/benin/npc1/h2";
    benin[2][1].hz[2] = 8000;
    benin[2][1].sound[3] = "sound/benin/npc1/h3";
    benin[2][1].hz[3] = 11025;
    benin[2][1].sound[4] = "sound/benin/npc1/h4";
    benin[2][1].hz[4] = 11025;

    benin[2][2].object[0] = MAISON;
    benin[2][2].obj_x[0] = 16;
    benin[2][2].obj_y[0] = 24;
    benin[2][2].object[6] = NPC;
    benin[2][2].obj_x[6] = 88;
    benin[2][2].obj_y[6] = 32;
    benin[2][2].object[1] = OBJ1;
    benin[2][2].obj_x[1] = 168;
    benin[2][2].obj_y[1] = 88;
    benin[2][2].object[2] = OBJ2;
    benin[2][2].obj_x[2] = 184;
    benin[2][2].obj_y[2] = 8;
    benin[2][2].object[3] = OBJ3;
    benin[2][2].obj_x[3] = 32;
    benin[2][2].obj_y[3] = 88;
    benin[2][2].object[4] = OBJ2;
    benin[2][2].obj_x[4] = 112;
    benin[2][2].obj_y[4] = 136;
    benin[2][2].object[5] = OBJ2;
    benin[2][2].obj_x[5] = 200;
    benin[2][2].obj_y[5] = 144;
    benin[2][2].npcsprite = 9;
    benin[2][2].sound[0] = "sound/benin/npc2/h0";
    benin[2][2].hz[0] = 11025;
    benin[2][2].sound[1] = "sound/benin/npc2/h1";
    benin[2][2].hz[1] = 11025;
    benin[2][2].sound[2] = "sound/benin/npc2/h2";
    benin[2][2].hz[2] = 11025;
    benin[2][2].sound[3] = "sound/benin/npc2/h3";
    benin[2][2].hz[3] = 11025;
    benin[2][2].sound[4] = "sound/benin/npc2/h4";
    benin[2][2].hz[4] = 11025;

    benin[0][1].object[0] = OBJ1;
    benin[0][1].obj_x[0] = 184;
    benin[0][1].obj_y[0] = 16;
    benin[0][1].object[1] = MAISON;
    benin[0][1].obj_x[1] = 40;
    benin[0][1].obj_y[1] = 56;
    benin[0][1].object[2] = OBJ2;
    benin[0][1].obj_x[2] = 104;
    benin[0][1].obj_y[2] = 96;
    benin[0][1].object[3] = MAISON;
    benin[0][1].obj_x[3] = 184;
    benin[0][1].obj_y[3] = 120;
    benin[0][1].object[6] = NPC;
    benin[0][1].obj_x[6] = 192;
    benin[0][1].obj_y[6] = 64;
    benin[0][1].object[4] = OBJ2;
    benin[0][1].obj_x[4] = 104;
    benin[0][1].obj_y[4] = 24;
    benin[0][1].object[5] = OBJ2;
    benin[0][1].obj_x[5] = 40;
    benin[0][1].obj_y[5] = 128;
    benin[0][1].npcsprite = 10;
    benin[0][1].sound[0] = "sound/benin/npc3/h0";
    benin[0][1].hz[0] = 11025;
    benin[0][1].sound[1] = "sound/benin/npc3/h1";
    benin[0][1].hz[1] = 11025;
    benin[0][1].sound[2] = "sound/benin/npc3/h2";
    benin[0][1].hz[2] = 11025;
    benin[0][1].sound[3] = "sound/benin/npc3/h3";
    benin[0][1].hz[3] = 11025;
    benin[0][1].sound[4] = "sound/benin/npc3/h4";
    benin[0][1].hz[4] = 11025;

    benin[2][0].object[0] = MAISON;
    benin[2][0].obj_x[0] = 48;
    benin[2][0].obj_y[0] = 136;
    benin[2][0].object[1] = MAISON;
    benin[2][0].obj_x[1] = 144;
    benin[2][0].obj_y[1] = 160;
    benin[2][0].object[2] = MAISON;
    benin[2][0].obj_x[2] = 200;
    benin[2][0].obj_y[2] = 112;
    benin[2][0].object[7] = BOLE;
    benin[2][0].obj_x[7] = 104;
    benin[2][0].obj_y[7] = 40;
    benin[2][0].object[3] = OBJ2;
    benin[2][0].obj_x[3] = 24;
    benin[2][0].obj_y[3] = 24;
    benin[2][0].object[4] = OBJ2;
    benin[2][0].obj_x[4] = 40;
    benin[2][0].obj_y[4] = 80;
    benin[2][0].object[5] = OBJ3;
    benin[2][0].obj_x[5] = 128;
    benin[2][0].obj_y[5] = 96;
    benin[2][0].object[6] = MAISON;
    benin[2][0].obj_x[6] = 192;
    benin[2][0].obj_y[6] = 24;
    benin[2][0].npcsprite = 12;
    benin[2][0].cinematic = 3;

    benin[1][0].object[0] = MAISON;
    benin[1][0].obj_x[0] = 24;
    benin[1][0].obj_y[0] = 24;
    benin[1][0].object[1] = OBJ2;
    benin[1][0].obj_x[1] = 104;
    benin[1][0].obj_y[1] = 32;
    benin[1][0].object[2] = MAISON;
    benin[1][0].obj_x[2] = 56;
    benin[1][0].obj_y[2] = 112;
    benin[1][0].object[3] = OBJ3;
    benin[1][0].obj_x[3] = 184;
    benin[1][0].obj_y[3] = 64;
    benin[1][0].object[4] = CAVE;
    benin[1][0].obj_x[4] = 128;
    benin[1][0].obj_y[4] = 76;
	benin[1][0].background = "bg/level1";

    benin[0][2].object[0] = MAISON;
    benin[0][2].obj_x[0] = 56;
    benin[0][2].obj_y[0] = 24;
    benin[0][2].object[1] = OBJ1;
    benin[0][2].obj_x[1] = 184;
    benin[0][2].obj_y[1] = 72;
    benin[0][2].object[2] = BOAT;
    benin[0][2].obj_x[2] = 104;
    benin[0][2].obj_y[2] = 144;



    dung[0][0].background = "bg/bgcave";
    dung[0][0].object[0] = SKLT;
    dung[0][0].obj_x[0] = 200;
    dung[0][0].obj_y[0] = 128;

    dung[0][1].object[0] = SKLT;
    dung[0][1].obj_x[0] = 184;
    dung[0][1].obj_y[0] = 24;
    dung[0][1].object[1] = SKLT;
    dung[0][1].obj_x[1] = 184;
    dung[0][1].obj_y[1] = 136;

    dung[0][2].object[0] = SKLT;
    dung[0][2].obj_x[0] = 192;
    dung[0][2].obj_y[0] = 24;
    dung[0][2].object[1] = SKLT;
    dung[0][2].obj_x[1] = 192;
    dung[0][2].obj_y[1] = 80;
    dung[0][2].object[2] = SKLT;
    dung[0][2].obj_x[2] = 192;
    dung[0][2].obj_y[2] = 136;

    dung[0][3].object[0] = SKLT;
    dung[0][3].obj_x[0] = 208;
    dung[0][3].obj_y[0] = 16;
    dung[0][3].object[1] = SKLT;
    dung[0][3].obj_x[1] = 208;
    dung[0][3].obj_y[1] = 144;
    dung[0][3].object[2] = SKLT;
    dung[0][3].obj_x[2] = 136;
    dung[0][3].obj_y[2] = 80;



    spain[0][2].object[0] = OBJ1;
    spain[0][2].obj_x[0] = 24;
    spain[0][2].obj_y[0] = 128;
    spain[0][2].object[1] = OBJ1;
    spain[0][2].obj_x[1] = 192;
    spain[0][2].obj_y[1] = 16;
    spain[0][2].object[2] = OBJ1;
    spain[0][2].obj_x[2] = 200;
    spain[0][2].obj_y[2] = 96;
    spain[0][2].object[3] = BOAT;
    spain[0][2].obj_x[3] = 104;
    spain[0][2].obj_y[3] = 144;
    spain[0][2].background = "bg/green";

    spain[1][2].object[0] = OBJ1;
    spain[1][2].obj_x[0] = 16;
    spain[1][2].obj_y[0] = 144;
    spain[1][2].object[1] = OBJ1;
    spain[1][2].obj_x[1] = 32;
    spain[1][2].obj_y[1] = 40;
    spain[1][2].object[2] = OBJ1;
    spain[1][2].obj_x[2] = 120;
    spain[1][2].obj_y[2] = 8;
    spain[1][2].object[3] = OBJ1;
    spain[1][2].obj_x[3] = 184;
    spain[1][2].obj_y[3] = 72;
    spain[1][2].object[4] = OBJ1;
    spain[1][2].obj_x[4] = 184;
    spain[1][2].obj_y[4] = 144;
    spain[1][2].object[5] = OBJ3;
    spain[1][2].obj_x[5] = 88;
    spain[1][2].obj_y[5] = 72;
    spain[1][2].object[6] = NPC;
    spain[1][2].obj_x[6] = 96;
    spain[1][2].obj_y[6] = 128;
    spain[1][2].npcsprite = 7;
    spain[1][2].sound[0] = "sound/spain/npc0/h0";
    spain[1][2].hz[0] = 11025;
    spain[1][2].sound[1] = "sound/spain/npc0/h1";
    spain[1][2].hz[1] = 11025;
    spain[1][2].sound[2] = "sound/spain/npc0/h2";
    spain[1][2].hz[2] = 11025;
    spain[1][2].sound[3] = "sound/spain/npc0/h0";
    spain[1][2].hz[3] = 11025;
    spain[1][2].sound[4] = "sound/spain/npc0/h1";
    spain[1][2].hz[4] = 11025;

    spain[1][1].object[0] = MAISON;
    spain[1][1].obj_x[0] = 160;
    spain[1][1].obj_y[0] = 96;
    spain[1][1].object[1] = OBJ1;
    spain[1][1].obj_x[1] = 200;
    spain[1][1].obj_y[1] = 48;
    spain[1][1].object[2] = OBJ1;
    spain[1][1].obj_x[2] = 136;
    spain[1][1].obj_y[2] = 16;
    spain[1][1].object[3] = OBJ1;
    spain[1][1].obj_x[3] = 64;
    spain[1][1].obj_y[3] = 16;
    spain[1][1].object[4] = OBJ2;
    spain[1][1].obj_x[4] = 16;
    spain[1][1].obj_y[4] = 48;
    spain[1][1].object[5] = OBJ2;
    spain[1][1].obj_x[5] = 56;
    spain[1][1].obj_y[5] = 104;
    spain[1][1].object[6] = OBJ1;
    spain[1][1].obj_x[6] = 56;
    spain[1][1].obj_y[6] = 152;
    spain[1][1].object[7] = OBJ1;
    spain[1][1].obj_x[7] = 0;
    spain[1][1].obj_y[7] = 120;
    spain[1][1].object[8] = NPC;
    spain[1][1].obj_x[8] = 128;
    spain[1][1].obj_y[8] = 128;
    spain[1][1].npcsprite = 9;
    spain[1][1].sound[0] = "sound/spain/npc1/h0";
    spain[1][1].hz[0] = 11025;
    spain[1][1].sound[1] = "sound/spain/npc1/h1";
    spain[1][1].hz[1] = 11025;
    spain[1][1].sound[2] = "sound/spain/npc1/h2";
    spain[1][1].hz[2] = 11025;
    spain[1][1].sound[3] = "sound/spain/npc1/h0";
    spain[1][1].hz[3] = 11025;
    spain[1][1].sound[4] = "sound/spain/npc1/h1";
    spain[1][1].hz[4] = 11025;

    spain[1][0].object[0] = MAISON;
    spain[1][0].obj_x[0] = 72;
    spain[1][0].obj_y[0] = 32;
    spain[1][0].object[1] = OBJ1;
    spain[1][0].obj_x[1] = 16;
    spain[1][0].obj_y[1] = 16;
    spain[1][0].object[2] = OBJ1;
    spain[1][0].obj_x[2] = 24;
    spain[1][0].obj_y[2] = 80;
    spain[1][0].object[3] = OBJ2;
    spain[1][0].obj_x[3] = 112;
    spain[1][0].obj_y[3] = 120;
    spain[1][0].object[4] = OBJ2;
    spain[1][0].obj_x[4] = 160;
    spain[1][0].obj_y[4] = 136;
    spain[1][0].object[5] = OBJ2;
    spain[1][0].obj_x[5] = 208;
    spain[1][0].obj_y[5] = 120;
    spain[1][0].object[6] = OBJ3;
    spain[1][0].obj_x[6] = 16;
    spain[1][0].obj_y[6] = 136;
    spain[1][0].object[7] = NPC;
    spain[1][0].obj_x[7] = 160;
    spain[1][0].obj_y[7] = 72;
    spain[1][0].npcsprite = 10;
    spain[1][0].sound[0] = "sound/spain/npc2/h0";
    spain[1][0].hz[0] = 11025;
    spain[1][0].sound[1] = "sound/spain/npc2/h1";
    spain[1][0].hz[1] = 11025;
    spain[1][0].sound[2] = "sound/spain/npc2/h2";
    spain[1][0].hz[2] = 11025;
    spain[1][0].sound[3] = "sound/spain/npc2/h0";
    spain[1][0].hz[3] = 11025;
    spain[1][0].sound[4] = "sound/spain/npc2/h1";
    spain[1][0].hz[4] = 11025;

    spain[0][1].object[0] = MAISON;
    spain[0][1].obj_x[0] = 32;
    spain[0][1].obj_y[0] = 24;
    spain[0][1].object[8] = BOLE;
    spain[0][1].obj_x[8] = 120;
    spain[0][1].obj_y[8] = 32;
    spain[0][1].object[2] = OBJ1;
    spain[0][1].obj_x[2] = 176;
    spain[0][1].obj_y[2] = 0;
    spain[0][1].object[3] = OBJ1;
    spain[0][1].obj_x[3] = 168;
    spain[0][1].obj_y[3] = 56;
    spain[0][1].object[4] = OBJ1;
    spain[0][1].obj_x[4] = 128;
    spain[0][1].obj_y[4] = 96;
    spain[0][1].object[5] = OBJ1;
    spain[0][1].obj_x[5] = 88;
    spain[0][1].obj_y[5] = 104;
    spain[0][1].object[6] = OBJ1;
    spain[0][1].obj_x[6] = 40;
    spain[0][1].obj_y[6] = 112;
    spain[0][1].object[7] = OBJ1;
    spain[0][1].obj_x[7] = 0;
    spain[0][1].obj_y[7] = 112;
    spain[0][1].object[1] = OBJ2;
    spain[0][1].obj_x[1] = 200;
    spain[0][1].obj_y[1] = 144;
    spain[0][1].npcsprite = 12;
    spain[0][1].cinematic = 4;

    spain[2][0].object[0] = OBJ1;
    spain[2][0].obj_x[0] = 112;
    spain[2][0].obj_y[0] = 32;
    spain[2][0].object[1] = OBJ1;
    spain[2][0].obj_x[1] = 152;
    spain[2][0].obj_y[1] = 56;
    spain[2][0].object[2] = OBJ1;
    spain[2][0].obj_x[2] = 168;
    spain[2][0].obj_y[2] = 96;
    spain[2][0].object[3] = OBJ1;
    spain[2][0].obj_x[3] = 112;
    spain[2][0].obj_y[3] = 120;
    spain[2][0].object[4] = OBJ1;
    spain[2][0].obj_x[4] = 64;
    spain[2][0].obj_y[4] = 128;
    spain[2][0].object[5] = OBJ1;
    spain[2][0].obj_x[5] = 72;
    spain[2][0].obj_y[5] = 88;
    spain[2][0].object[6] = OBJ1;
    spain[2][0].obj_x[6] = 40;
    spain[2][0].obj_y[6] = 72;
    spain[2][0].object[7] = OBJ1;
    spain[2][0].obj_x[7] = 72;
    spain[2][0].obj_y[7] = 48;
    spain[2][0].object[8] = CAVE;
    spain[2][0].obj_x[8] = 112;
    spain[2][0].obj_y[8] = 72;
    spain[2][0].background = "bg/green";

    spain[2][1].object[0] = OBJ1;
    spain[2][1].obj_x[0] = 152;
    spain[2][1].obj_y[0] = 56;
    spain[2][1].object[1] = OBJ1;
    spain[2][1].obj_x[1] = 112;
    spain[2][1].obj_y[1] = 24;
    spain[2][1].object[2] = OBJ1;
    spain[2][1].obj_x[2] = 80;
    spain[2][1].obj_y[2] = 24;
    spain[2][1].object[3] = OBJ1;
    spain[2][1].obj_x[3] = 48;
    spain[2][1].obj_y[3] = 16;
    spain[2][1].object[4] = OBJ1;
    spain[2][1].obj_x[4] = 8;
    spain[2][1].obj_y[4] = 40;
    spain[2][1].object[5] = OBJ1;
    spain[2][1].obj_x[5] = 8;
    spain[2][1].obj_y[5] = 80;
    spain[2][1].object[6] = OBJ1;
    spain[2][1].obj_x[6] = 56;
    spain[2][1].obj_y[6] = 128;
    spain[2][1].object[7] = MAISON;
    spain[2][1].obj_x[7] = 48;
    spain[2][1].obj_y[7] = 56;
    spain[2][1].object[8] = NPC;
    spain[2][1].obj_x[8] = 120;
    spain[2][1].obj_y[8] = 80;
    spain[2][1].npcsprite = 8;
    spain[2][1].sound[0] = "sound/spain/npc3/h0";
    spain[2][1].hz[0] = 11025;
    spain[2][1].sound[1] = "sound/spain/npc3/h1";
    spain[2][1].hz[1] = 11025;
    spain[2][1].sound[2] = "sound/spain/npc3/h2";
    spain[2][1].hz[2] = 11025;
    spain[2][1].sound[3] = "sound/spain/npc3/h0";
    spain[2][1].hz[3] = 11025;
    spain[2][1].sound[4] = "sound/spain/npc3/h1";
    spain[2][1].hz[4] = 11025;

    spain[2][2].object[0] = OBJ3;
    spain[2][2].obj_x[0] = 72;
    spain[2][2].obj_y[0] = 24;
    spain[2][2].object[1] = OBJ2;
    spain[2][2].obj_x[1] = 16;
    spain[2][2].obj_y[1] = 48;
    spain[2][2].object[2] = OBJ2;
    spain[2][2].obj_x[2] = 40;
    spain[2][2].obj_y[2] = 88;
    spain[2][2].object[3] = OBJ2;
    spain[2][2].obj_x[3] = 96;
    spain[2][2].obj_y[3] = 128;
    spain[2][2].object[4] = OBJ2;
    spain[2][2].obj_x[4] = 88;
    spain[2][2].obj_y[4] = 64;
    spain[2][2].object[5] = OBJ2;
    spain[2][2].obj_x[5] = 136;
    spain[2][2].obj_y[5] = 80;
    spain[2][2].object[6] = OBJ2;
    spain[2][2].obj_x[6] = 176;
    spain[2][2].obj_y[6] = 32;
    spain[2][2].object[7] = OBJ2;
    spain[2][2].obj_x[7] = 184;
    spain[2][2].obj_y[7] = 96;

}
void setCine(){

    cinema[0].bg[0] = "bg/dodjiback";
    cinema[0].sound[0] = "sound/cine0";
    cinema[0].hz[0] = 11025;
    cinema[0].time[0] = 370;

    cinema[0].bg[1] = "bg/kiriback";
    cinema[0].sound[1] = "sound/cine1";
    cinema[0].hz[1] = 11025;
    cinema[0].time[1] = 240;

    cinema[0].bg[2] = "bg/dodjiback";
    cinema[0].sound[2] = "sound/cine2";
    cinema[0].hz[2] = 11025;
    cinema[0].time[2] = 180;

    cinema[1].bg[0] = "bg/guncine";
    cinema[1].sound[0] = "sound/void";
    cinema[1].hz[0] = 11025;
    cinema[1].time[0] = 120;

    cinema[1].bg[1] = "bg/guncine1";
    cinema[1].sound[1] = "sound/ouais";
    cinema[1].hz[1] = 11025;
    cinema[1].time[1] = 120;

    cinema[2].bg[0] = "bg/dead";
    cinema[2].sound[0] = "sound/crie";
    cinema[2].hz[0] = 11025;
    cinema[2].time[0] = 180;

    cinema[3].bg[0] = "bg/houche";
    cinema[3].sound[0] = "sound/benin/houche";
    cinema[3].hz[0] = 11025;
    cinema[3].time[0] = 720;

    cinema[4].bg[0] = "bg/repito";
    cinema[4].sound[0] = "sound/spain/repito";
    cinema[4].hz[0] = 8000;
    cinema[4].time[0] = 1620;

}
#endif