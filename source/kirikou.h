#ifndef KIRIKOU_H
#define KIRIKOU_H

int x;
int y;
int mx = 1;
int my = 1;
int bulx;
int buly;
bool buldir = false;
bool bul = false;
bool lock = false;

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
    if(x > 256){
        x = 256;
        if(mx < 2){
            pos[mx][my] = 0;
            mx += 1;
            x = 0;
            movementCheckFin();
        }
    }
    if(x < -16){
        x = -16;
        if(mx > 0){
            pos[mx][my] = 0;
            mx -= 1;
            x = 240;
            movementCheckFin();
        }
    }
    if(y > 192){
        y = 192;
        if(my < 2){
            pos[mx][my] = 0;
            my += 1;
            y = 0;
            movementCheckFin();
        }
    }
    if(y < -32){
        y = -32;
        if(my > 0){
            pos[mx][my] = 0;
            my -= 1;
            y = 160;
            movementCheckFin();
        }
    }
    NF_MoveSprite(1, 0, x, y);
}
void kirikouGunStart(){
    NF_CreateSprite(1, 0, 4, 4, x, y);
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
    if(x > 256){
        opos = cpos;
        cpos += 1;
        x = 0;
        loadRoom(dung[gameState][cpos], dung[gameState][opos]);
    }
    if(x < -16){
        x = -16;
    }
    if(y > 192){
        y = 192;
    }
    if(y < -32){
        y = -32;
    }
    if(KEY_A & keysDown()){
        if(lock == false){
            bulx = x;
            buly = y;
            bul = true;
            lock = true;
            buldir = NF_GetSpriteHflip(1, 0);
            NF_CreateSprite(1, 12, 2, 2, bulx, buly);
        }
    }
    NF_MoveSprite(1, 0, x, y);
}
void movementCheckFin(){
    pos[mx][my] = 1;
    switch(levelindex){ // Je suis un flemmard :) :) :) :) :) :)
        case 0:
            loadRoom(benin[mx][my], current);
            break;
        case 1:
            loadRoom(spain[mx][my], current);
            break;
        case 2:
            loadRoom(franc[mx][my], current);
            break;
        case 3:
            loadRoom(retour[mx][my], current);
            break;
    }
}
void bulletUpdate(){
    if(bul == true){
        if(buldir == false){
            bulx += 3;
        }
        else{
            bulx -= 3;
        }
        if(bulx < -16 || bulx > 256){
            bul = false;
            lock = false;
        }
        NF_MoveSprite(1, 12, bulx, buly);
    }
}
#endif