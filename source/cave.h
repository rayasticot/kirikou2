#ifndef CAVE_H
#define CAVE_H
void caveStart(int i, int x, int y){
	NF_CreateSprite(1, i+1, 7, 7, x, y);
}
void npcUpdate(int i, int posx, int posy){
    if(checkCollision(x, y, 16, 32, benin[posx][posy].obj_x[i], benin[posx][posy].obj_y[i], 32, 32) == true){
        
    }
}
#endif