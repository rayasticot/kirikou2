#ifndef BOLE_H
#define BOLE_H

void boleStart(int i, struct map carte, int px, int py){
    NF_CreateSprite(1, i+1, carte.npcsprite, carte.npcsprite, px, py);
}
void boleUpdate(int i, struct map carte){
    if(checkCollision(x, y, 16, 32, carte.obj_x[i], carte.obj_y[i], 32, 32) == true){
        loadCine(carte.cinematic);
        if(KEY_LEFT & keysHeld()){
            x = carte.obj_x[i]-32;
        }
        if(KEY_RIGHT & keysHeld()){
            x = carte.obj_x[i]+32;
        }
        if(KEY_UP & keysHeld()){
            y = carte.obj_y[i]-32;
        }
        if(KEY_DOWN & keysHeld()){
            y = carte.obj_y[i]+32;
        }
    }
}
#endif