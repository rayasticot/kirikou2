#ifndef KIRIKOU_H
#define KIRIKOU_H

int x;
int y;
int tx;
int ty;
int mx = 1;
int my = 1;
int bulx;
int buly;
bool buldir = false;
bool bul = false;
bool lock = false;

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
void kirikouGunStart(){
    NF_CreateSprite(1, 0, 8, 8, x, y);
}
void kirikouGunUpdate(){
    if(KEY_RIGHT & keysHeld()){
        x += 1;
        NF_HflipSprite(1, 0, false);
    }
    if(KEY_LEFT & keysHeld()){
        x -= 1;
        NF_HflipSprite(1, 0, true);
    }
    if(KEY_DOWN & keysHeld()){
        y += 1;
    }
    if(KEY_UP & keysHeld()){
        y -= 1;
    }
    if(x > 256 && mx < 2){
        opos = cpos;
        cpos += 1;
        x = 0;
        loadRoom(dung[0][cpos], dung[0][opos]);
    }
    if(KEY_A & keysDown()){
        if(lock == false){
            bulx = x;
            buly = y;
            bul = true;
            lock = true;
            buldir = NF_GetSpriteHflip(1, 0);
            NF_CreateSprite(1, 12, 10, 10, bulx, buly);
        }
    }
    NF_MoveSprite(1, 0, x, y);
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
void bulletUpdate(){
    if(bul == true){
        if(buldir == false){
            bulx += 3;
        }
        else{
            bulx -= 3;
        }
        if(bulx < 0 || bulx > 256){
            bul = false;
            lock = false;
        }
        NF_MoveSprite(1, 12, bulx, buly);
    }
}
#endif