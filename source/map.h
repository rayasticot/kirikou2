#ifndef MAP_BENIN_H
#define MAP_BENIN_H


/*
    1 = maison
    2 = NPC
    3 = entree cave
    4 = skoulete
*/

void setLevel(){
    benin[1][1].object[0] = 1;
	benin[1][1].obj_x[0] = 112;
	benin[1][1].obj_y[0] = 64;
    benin[1][1].object[7] = 8;
    benin[1][1].obj_x[7] = 104;
    benin[1][1].obj_y[7] = 8;
    benin[1][1].object[1] = 8;
    benin[1][1].obj_x[1] = 176;
    benin[1][1].obj_y[1] = 16;
    benin[1][1].object[2] = 8;
    benin[1][1].obj_x[2] = 200;
    benin[1][1].obj_y[2] = 80;
    benin[1][1].object[3] = 8;
    benin[1][1].obj_x[3] = 192;
    benin[1][1].obj_y[3] = 152;
    benin[1][1].object[4] = 8;
    benin[1][1].obj_x[4] = 80;
    benin[1][1].obj_y[4] = 152;
    benin[1][1].object[5] = 8;
    benin[1][1].obj_x[5] = 40;
    benin[1][1].obj_y[5] = 104;
    benin[1][1].object[6] = 8;
    benin[1][1].obj_x[6] = 32;
    benin[1][1].obj_y[6] = 32;
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
    benin[1][2].object[5] = 2;
    benin[1][2].obj_x[5] = 96;
    benin[1][2].obj_y[5] = 120;
    benin[1][2].object[3] = 8;
    benin[1][2].obj_x[3] = 136;
    benin[1][2].obj_y[3] = 64;
    benin[1][2].object[4] = 8;
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
    
    benin[2][1].object[0] = 1;
    benin[2][1].obj_x[0] = 88;
    benin[2][1].obj_y[0] = 24;
    benin[2][1].object[1] = 1;
    benin[2][1].obj_x[1] = 168;
    benin[2][1].obj_y[1] = 16;
    benin[2][1].object[6] = 2;
    benin[2][1].obj_x[6] = 176;
    benin[2][1].obj_y[6] = 64;
    benin[2][1].object[2] = 9;
    benin[2][1].obj_x[2] = 200;
    benin[2][1].obj_y[2] = 112;
    benin[2][1].object[3] = 8;
    benin[2][1].obj_x[3] = 112;
    benin[2][1].obj_y[3] = 80;
    benin[2][1].object[4] = 8;
    benin[2][1].obj_x[4] = 80;
    benin[2][1].obj_y[4] = 152;
    benin[2][1].object[5] = 1;
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

    benin[2][2].object[0] = 1;
    benin[2][2].obj_x[0] = 16;
    benin[2][2].obj_y[0] = 24;
    benin[2][2].object[6] = 2;
    benin[2][2].obj_x[6] = 88;
    benin[2][2].obj_y[6] = 32;
    benin[2][2].object[1] = 7;
    benin[2][2].obj_x[1] = 168;
    benin[2][2].obj_y[1] = 88;
    benin[2][2].object[2] = 8;
    benin[2][2].obj_x[2] = 184;
    benin[2][2].obj_y[2] = 8;
    benin[2][2].object[3] = 9;
    benin[2][2].obj_x[3] = 32;
    benin[2][2].obj_y[3] = 88;
    benin[2][2].object[4] = 8;
    benin[2][2].obj_x[4] = 112;
    benin[2][2].obj_y[4] = 136;
    benin[2][2].object[5] = 8;
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

    benin[0][1].object[0] = 7;
    benin[0][1].obj_x[0] = 184;
    benin[0][1].obj_y[0] = 16;
    benin[0][1].object[1] = 1;
    benin[0][1].obj_x[1] = 40;
    benin[0][1].obj_y[1] = 56;
    benin[0][1].object[2] = 8;
    benin[0][1].obj_x[2] = 104;
    benin[0][1].obj_y[2] = 96;
    benin[0][1].object[3] = 1;
    benin[0][1].obj_x[3] = 184;
    benin[0][1].obj_y[3] = 120;
    benin[0][1].object[6] = 2;
    benin[0][1].obj_x[6] = 192;
    benin[0][1].obj_y[6] = 64;
    benin[0][1].object[4] = 8;
    benin[0][1].obj_x[4] = 104;
    benin[0][1].obj_y[4] = 24;
    benin[0][1].object[5] = 8;
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

    benin[2][0].object[0] = 1;
    benin[2][0].obj_x[0] = 48;
    benin[2][0].obj_y[0] = 136;
    benin[2][0].object[1] = 1;
    benin[2][0].obj_x[1] = 144;
    benin[2][0].obj_y[1] = 160;
    benin[2][0].object[2] = 1;
    benin[2][0].obj_x[2] = 200;
    benin[2][0].obj_y[2] = 112;
    benin[2][0].object[7] = 5;
    benin[2][0].obj_x[7] = 104;
    benin[2][0].obj_y[7] = 40;
    benin[2][0].object[3] = 8;
    benin[2][0].obj_x[3] = 24;
    benin[2][0].obj_y[3] = 24;
    benin[2][0].object[4] = 8;
    benin[2][0].obj_x[4] = 40;
    benin[2][0].obj_y[4] = 80;
    benin[2][0].object[5] = 9;
    benin[2][0].obj_x[5] = 128;
    benin[2][0].obj_y[5] = 96;
    benin[2][0].object[6] = 1;
    benin[2][0].obj_x[6] = 192;
    benin[2][0].obj_y[6] = 24;
    benin[2][0].npcsprite = 12;
    benin[2][0].cinematic = 3;

    benin[1][0].object[0] = 1;
    benin[1][0].obj_x[0] = 24;
    benin[1][0].obj_y[0] = 24;
    benin[1][0].object[1] = 8;
    benin[1][0].obj_x[1] = 104;
    benin[1][0].obj_y[1] = 32;
    benin[1][0].object[2] = 1;
    benin[1][0].obj_x[2] = 56;
    benin[1][0].obj_y[2] = 112;
    benin[1][0].object[3] = 9;
    benin[1][0].obj_x[3] = 184;
    benin[1][0].obj_y[3] = 64;
    benin[1][0].object[4] = 3;
    benin[1][0].obj_x[4] = 128;
    benin[1][0].obj_y[4] = 76;
	benin[1][0].background = "bg/level1";

    benin[0][2].object[0] = 1;
    benin[0][2].obj_x[0] = 56;
    benin[0][2].obj_y[0] = 24;
    benin[0][2].object[1] = 7;
    benin[0][2].obj_x[1] = 184;
    benin[0][2].obj_y[1] = 72;
    benin[0][2].object[2] = 6;
    benin[0][2].obj_x[2] = 104;
    benin[0][2].obj_y[2] = 144;



    dung[0][0].background = "bg/bgcave";
    dung[0][0].object[0] = 4;
    dung[0][0].obj_x[0] = 200;
    dung[0][0].obj_y[0] = 128;

    dung[0][1].object[0] = 4;
    dung[0][1].obj_x[0] = 184;
    dung[0][1].obj_y[0] = 24;
    dung[0][1].object[1] = 4;
    dung[0][1].obj_x[1] = 184;
    dung[0][1].obj_y[1] = 136;

    dung[0][2].object[0] = 4;
    dung[0][2].obj_x[0] = 192;
    dung[0][2].obj_y[0] = 24;
    dung[0][2].object[1] = 4;
    dung[0][2].obj_x[1] = 192;
    dung[0][2].obj_y[1] = 80;
    dung[0][2].object[2] = 4;
    dung[0][2].obj_x[2] = 192;
    dung[0][2].obj_y[2] = 136;

    dung[0][3].object[0] = 4;
    dung[0][3].obj_x[0] = 208;
    dung[0][3].obj_y[0] = 16;
    dung[0][3].object[1] = 4;
    dung[0][3].obj_x[1] = 208;
    dung[0][3].obj_y[1] = 144;
    dung[0][3].object[2] = 4;
    dung[0][3].obj_x[2] = 136;
    dung[0][3].obj_y[2] = 80;


    //0.2;1.2;1.0;1.1;2.1
    spain[0][2].object[0] = 5;
    spain[0][2].obj_x[0] = 120;
    spain[0][2].obj_y[0] = 32;
    spain[0][2].background = "bg/green";
    spain[0][2].npcsprite = 12;
    spain[0][2].cinematic = 4;
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