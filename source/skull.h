#ifndef SKULL_H
#define SKULL_H

void skullDeath(int i);

void skullStart(int i, struct map carte, int px, int py, int sprite){
	NF_CreateSprite(1, i+1, sprite, sprite, px, py);
    NF_HflipSprite(1, i+1, true);
    skullx[i] = px;
    skully[i] = py;
    skullLive[i] = true;
    dir[i] = 0;
}
void skullUpdate(int i){
    if(skullx[i] < 0){
        dir[i] = 1;
        NF_HflipSprite(1, i+1, false);
    }
    if(skullx[i] > 216){
        dir[i] = 0;
        NF_HflipSprite(1, i+1, true);
    }
    if(dir[i] == 0){
        skullx[i] -= 2;
    }
    else{
        skullx[i] += 2;
    }
    NF_MoveSprite(1, i+1, skullx[i], skully[i]);
    if(checkCollision(x, y, 16, 32, skullx[i], skully[i], 32, 32) == true){
        alive = false;
    }
    if(checkCollision(bulx, buly, 8, 8, skullx[i], skully[i], 32, 32) == true){
        skullDeath(i);
    }
}
void skullDeath(int i){
    skully[i] = 220;
    NF_HflipSprite(1, i+1, false);
    NF_MoveSprite(1, i+1, 256, 220);
    skullLive[i] = false;
}
#endif