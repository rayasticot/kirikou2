#ifndef KIRIKOU_H
#define KIRIKOU_H

int x;
int y;
int tx;
int ty;
int mx = 1;
int my = 1;
int cpos = 0;

void movementCheck();
void movementCheckFin();


void kirikouStart(int px, int py){
    NF_CreateSprite(1, 0, 0, 0, px, py);
    x = px;
    y = py;
}
void kirikouUpdate(){
    if(KEY_RIGHT & keysHeld()){
        x += 1;
    }
    if(KEY_LEFT & keysHeld()){
        x -= 1;
    }
    if(KEY_DOWN & keysHeld()){
        y += 1;
    }
    if(KEY_UP & keysHeld()){
        y -= 1;
    }
    if(x > 256 && mx < 2){
        movementCheck();
        mx += 1;
        x = 0;
        movementCheckFin();
    }
    if(x < -16 && mx > 0){
        movementCheck();
        mx -= 1;
        x = 240;
        movementCheckFin();
    }
    if(y > 192 && my < 2){
        movementCheck();
        my += 1;
        y = 0;
        movementCheckFin();
    }
    if(y < -32 && my > 0){
        movementCheck();
        my -= 1;
        y = 160;
        movementCheckFin();
    }
    NF_MoveSprite(1, 0, x, y);
}
void kirikouGunUpdate(){
    if(KEY_RIGHT & keysHeld()){
        x += 1;
    }
    if(KEY_LEFT & keysHeld()){
        x -= 1;
    }
    if(KEY_DOWN & keysHeld()){
        y += 1;
    }
    if(KEY_UP & keysHeld()){
        y -= 1;
    }
    if(x > 256 && mx < 2){
        cpos += 1;
        x = 0;
        loadRoom(dung0[cpos], dung0[cpos-1]);
    }
}
void movementCheck(){
    tx = mx;
    ty = my;
    pos[mx][my] = 0;
}
void movementCheckFin(){
    pos[mx][my] = 1;
    loadRoom(benin[mx][my], benin[tx][ty]);
}
#endif