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
    benin[1][2].sound0 = "sound/benin/npc0/h0";
    benin[1][2].hz1 = 11025;
    benin[1][2].sound1 = "sound/benin/npc0/h1";
    benin[1][2].hz2 = 11025;
    benin[1][2].sound2 = "sound/benin/npc0/h2";
    benin[1][2].hz3 = 11025;
    benin[1][2].sound3 = "sound/benin/npc0/h3";
    benin[1][2].hz4 = 11025;
    benin[1][2].sound4 = "sound/benin/npc0/h4";
    benin[1][2].hz5 = 11025;
    


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

    benin[2][1].sound0 = "sound/benin/npc1/h0";
    benin[2][1].hz1 = 11025;
    benin[2][1].sound1 = "sound/benin/npc1/h1";
    benin[2][1].hz2 = 11025;
    benin[2][1].sound2 = "sound/benin/npc1/h2";
    benin[2][1].hz3 = 8000;
    benin[2][1].sound3 = "sound/benin/npc1/h3";
    benin[2][1].hz4 = 11025;
    benin[2][1].sound4 = "sound/benin/npc1/h4";
    benin[2][1].hz5 = 11025;



    benin[2][2].object[0] = 1;
    benin[2][2].obj_x[0] = 16;
    benin[2][2].obj_y[0] = 24;

    benin[2][2].object[1] = 2;
    benin[2][2].obj_x[1] = 88;
    benin[2][2].obj_y[1] = 32;
    benin[2][2].npcsprite = 4;

    benin[2][2].sound0 = "sound/benin/npc2/h0";
    benin[2][2].hz1 = 11025;
    benin[2][2].sound1 = "sound/benin/npc2/h1";
    benin[2][2].hz2 = 11025;
    benin[2][2].sound2 = "sound/benin/npc2/h2";
    benin[2][2].hz3 = 11025;
    benin[2][2].sound3 = "sound/benin/npc2/h3";
    benin[2][2].hz4 = 11025;
    benin[2][2].sound4 = "sound/benin/npc2/h4";
    benin[2][2].hz5 = 11025;



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

    benin[0][1].sound0 = "sound/benin/npc3/h0";
    benin[0][1].hz1 = 11025;
    benin[0][1].sound1 = "sound/benin/npc3/h1";
    benin[0][1].hz2 = 11025;
    benin[0][1].sound2 = "sound/benin/npc3/h2";
    benin[0][1].hz3 = 11025;
    benin[0][1].sound3 = "sound/benin/npc3/h3";
    benin[0][1].hz4 = 11025;
    benin[0][1].sound4 = "sound/benin/npc3/h4";
    benin[0][1].hz5 = 11025;



    benin[2][0].object[0] = 1;
    benin[2][0].obj_x[0] = 48;
    benin[2][0].obj_y[0] = 136;

    benin[2][0].object[1] = 1;
    benin[2][0].obj_x[1] = 144;
    benin[2][0].obj_y[1] = 160;

    benin[2][0].object[0] = 1;
    benin[2][0].obj_x[0] = 200;
    benin[2][0].obj_y[0] = 112;



    benin[0][2]

}
void setCine(){
    cinema[0].sprite1 = 5;
    cinema[0].x1[0] = 56;
    cinema[0].y1[0] = 64;

    cinema[0].sprite2 = 4;
    cinema[0].x2[0] = 144;
    cinema[0].y2[0] = 64;

    cinema[0].time[0] = 120;

    cinema[0].x1[1] = 112;
    cinema[0].y1[1] = 64;
    
    cinema[0].x2[1] = 232;
    cinema[0].y2[1] = 64;

    cinema[0].time[1] = 120;
}
#endif