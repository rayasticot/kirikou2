#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void loadSprite(int screen, char* url, int slot, int size_x, int size_y, bool anim);
void mainLoop();
bool checkCollision(int x1, int y1, int sx1, int sy1, int x2, int y2, int sx2, int sy2);
void Title();
void loadRoom(struct map carte, struct map old);
void loadCine(int id);
void topSwitch();
void overWorld();
void caveStart(int i, int x, int y);
void caveUpdate(int i, struct map curr, struct map neww);
void kirikouStart(int px, int py);
void kirikouUpdate();
void kirikouGunStart();
void kirikouGunUpdate();
void bulletUpdate();
void npcStart(int i, int x, int y, int sprite);
void npcUpdate(int i, int posx, int posy);
void skullStart(int i, struct map carte, int px, int py, int sprite);
void skullUpdate(int i);
void skullDeath(int i);
void Dungeon();
void Dead();
void uiUpdate();
void boleStart(int i, struct map carte, int px, int py);
void boleUpdate(int i, struct map carte);
void boatStart(int i, int px, int py);
void boatUpdate(int i);
void Ocean(struct map next);
void setUi();
void uiUpdate();
#endif