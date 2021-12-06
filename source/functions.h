#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void loadSprite(int screen, char* url, int slot, int size_x, int size_y, bool anim){
	
	NF_LoadSpriteGfx(url, slot, size_x, size_y);
	NF_LoadSpritePal(url, slot);
	NF_VramSpriteGfx(screen, slot, slot, anim);
	NF_VramSpritePal(screen, slot, slot);
	
}
void mainLoop(){
	
	NF_SpriteOamSet(0);
	NF_SpriteOamSet(1);

	swiWaitForVBlank();

	oamUpdate(&oamMain);
	oamUpdate(&oamSub);

}
bool checkCollision(int x1, int y1, int sx1, int sy1, int x2, int y2, int sx2, int sy2){
	bool bouf = false;
	if(x1+sx1 > x2 && x1 < x2+sx2){
		if(y1+sy1 > y2 && y1 < y2+sy2){
			bouf = true;
		}
	}
	return bouf;
}
void Title();
#endif