#ifndef NPC_H
#define NPC_H
int sindex = 1;
void npcStart(int i, int x, int y, int sprite){
	NF_CreateSprite(1, i+1, sprite, sprite, x, y);
}
void npcUpdate(int i, int posx, int posy){
    if(checkCollision(x, y, 16, 32, current.obj_x[i], current.obj_y[i], 16, 32) == true){
        soundKill(0);
        if(KEY_LEFT & keysHeld()){
            x = current.obj_x[i]-16;
        }
        if(KEY_RIGHT & keysHeld()){
            x = current.obj_x[i]+16;
        }
        if(KEY_UP & keysHeld()){
            y = current.obj_y[i]-32;
        }
        if(KEY_DOWN & keysHeld()){
            y = current.obj_y[i]+32;
        }
        NF_PlayRawSound(sindex, 127, 64, false, 0);
        if(sindex != 5){
            sindex += 1;
        }
        else{
            sindex = 1;
        }
    }
}
#endif