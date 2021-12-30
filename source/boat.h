#ifndef BOAT_H
#define BOAT_H
void boatUpdate(int i){
    if(checkCollision(x, y, 16, 32, current.obj_x[i], current.obj_y[i], 32, 32) == true){
        levelindex += 1;
        switch(gameState){
            case 1:
                Ocean(spain[1][2]);
                break;
        }
    }
}
#endif