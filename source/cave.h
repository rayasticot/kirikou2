#ifndef CAVE_H
#define CAVE_H
void caveStart(int i, int x, int y){
	NF_CreateSprite(1, i+1, 11, 11, x, y);
}
void caveUpdate(int i, struct map curr, struct map neww){
    if(checkCollision(x, y, 16, 32, curr.obj_x[i], curr.obj_y[i], 32, 32) == true){
        if(gameState == 0){
            old = current;
            loadRoom(neww, curr);
            x = 0;
            kirikouUpdate();
            loadCine(1);
            Dungeon();
        }
    }
}
#endif