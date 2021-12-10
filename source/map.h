#ifndef MAP_BENIN_H
#define MAP_BENIN_H


/*
    1 = maison
*/

void setLevel(){
    benin[1][1].object[0] = 1;
	benin[1][1].obj_x[0] = 112;
	benin[1][1].obj_y[0] = 64;
	benin[1][1].background = "bg/level1";

    benin[1][2].object[0] = 1;
    benin[1][2].obj_x[0] = 56;
	benin[1][2].obj_y[0] = 64;
    benin[1][2].object[1] = 1;
    benin[1][2].obj_x[1] = 192;
	benin[1][2].obj_y[1] = 24;
    benin[1][2].object[2] = 1;
    benin[1][2].obj_x[2] = 184;
	benin[1][2].obj_y[2] = 128;
    benin[1][2].object[3] = 2;
    benin[1][2].obj_x[3] = 96;
    benin[1][2].obj_y[3] = 120;
    benin[1][2].npcsprite = 2;
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
    
    benin[2][1].object[0] = 1;
    benin[2][1].obj_x[0] = 88;
    benin[2][1].obj_y[0] = 24;
    benin[2][1].object[1] = 1;
    benin[2][1].obj_x[1] = 168;
    benin[2][1].obj_y[1] = 16;
    benin[2][1].object[2] = 2;
    benin[2][1].obj_x[2] = 176;
    benin[2][1].obj_y[2] = 64;
    benin[2][1].npcsprite = 3;
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

    benin[2][2].object[0] = 1;
    benin[2][2].obj_x[0] = 16;
    benin[2][2].obj_y[0] = 24;
    benin[2][2].object[1] = 2;
    benin[2][2].obj_x[1] = 88;
    benin[2][2].obj_y[1] = 32;
    benin[2][2].npcsprite = 4;
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

    benin[0][1].object[0] = 1;
    benin[0][1].obj_x[0] = 184;
    benin[0][1].obj_y[0] = 16;
    benin[0][1].object[1] = 1;
    benin[0][1].obj_x[1] = 40;
    benin[0][1].obj_y[1] = 56;
    benin[0][1].object[2] = 1;
    benin[0][1].obj_x[2] = 104;
    benin[0][1].obj_y[2] = 96;
    benin[0][1].object[3] = 1;
    benin[0][1].obj_x[3] = 184;
    benin[0][1].obj_y[3] = 120;
    benin[0][1].object[4] = 2;
    benin[0][1].obj_x[4] = 192;
    benin[0][1].obj_y[4] = 64;
    benin[0][1].npcsprite = 5;
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

    benin[2][0].object[0] = 1;
    benin[2][0].obj_x[0] = 48;
    benin[2][0].obj_y[0] = 136;
    benin[2][0].object[1] = 1;
    benin[2][0].obj_x[1] = 144;
    benin[2][0].obj_y[1] = 160;
    benin[2][0].object[0] = 1;
    benin[2][0].obj_x[0] = 200;
    benin[2][0].obj_y[0] = 112;

    benin[1][0].object[0] = 1;
    benin[1][0].obj_x[0] = 24;
    benin[1][0].obj_y[0] = 24;
    benin[1][0].object[1] = 1;
    benin[1][0].obj_x[1] = 104;
    benin[1][0].obj_y[1] = 32;
    benin[1][0].object[2] = 1;
    benin[1][0].obj_x[2] = 56;
    benin[1][0].obj_y[2] = 112;
    benin[1][0].object[3] = 1;
    benin[1][0].obj_x[3] = 184;
    benin[1][0].obj_y[3] = 64;
    benin[1][0].object[4] = 3;
    benin[1][0].obj_x[4] = 200;
    benin[1][0].obj_y[4] = 136;



    dung[0][0].background = "bg/bgcave";
    dung[0][0].object[0] = 4;
    dung[0][0].obj_x[0] = 200;
    dung[0][0].obj_y[0] = 32;
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

}
#endif