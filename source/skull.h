#ifndef SKULL_H
#define SKULL_H
int dir = 0; //0: left 1: right
int skullx;
int skully;

void skullStart(int i, int x, int y, int sprite){
	NF_CreateSprite(1, i+1, sprite, sprite, x, y);
    NF_HflipSprite(1, i+1, true);
    skullx = x;
    skully = y;
}
void skullUpdate(int i, struct map carte){
    if(skullx < 0){
        dir = 1;
        NF_HflipSprite(1, i+1, false);
    }
    if(skullx > 216){
        dir = 0;
        NF_HflipSprite(1, i+1, true);
    }
    if(dir == 0){
        skullx -= 2;
    }
    else{
        skullx += 2;
    }
    NF_MoveSprite(1, i+1, skullx, skully);
    if(checkCollision(x, y, 16, 32, skullx, skully, 32, 32) == true){
        NF_Error(666, "DEAD", 3);
    }
    if(checkCollision(bulx, buly, 8, 8, skullx, skully, 32, 32) == true){
        NF_Error(11, "DEAD", 3);
    }
}
#endif