#ifndef BOAT_H
#define BOAT_H
void boatUpdate(int i){
    if(checkCollision(x, y, 16, 32, current.obj_x[i], current.obj_y[i], 32, 32) == true){
        switch(gameState){
            case 1:
                if(levelindex == 0){
                    levelindex += 1;
                    Ocean(spain[0][2]);
                }
                break;
            case 2:
                if(levelindex == 1){
                    levelindex += 1;
                    Ocean(franc[0][2]);
                }
                break;
        }
    }
}
#endif