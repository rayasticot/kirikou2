#ifndef BOAT_H
#define BOAT_H
void boatUpdate(int i){
    if(checkCollision(x, y, 16, 32, current.obj_x[i], current.obj_y[i], 32, 32) == true){
        switch(gameState){
            case 1:
                levelindex += 1;
                switchSprite(1);
                Ocean(spain[0][2]);
                break;
        }
    }
}
#endif