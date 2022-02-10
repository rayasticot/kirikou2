#ifndef VARS_H
#define VARS_H
extern int x;
extern int y;
extern int mx;
extern int my;
extern int bulx;
extern int buly;
extern bool bul;
extern bool lock;
extern int pos[3][3];

extern int npcpoint;
extern int cavepoint;
extern int skullpoint;
extern int bolepoint;
extern int boatpoint;
extern int skullnum;
extern int gameState;
extern int levelindex;
extern bool skullLive[10];
extern int skullx[10];
extern int skully[10];
extern int dir[10];
extern int cpos;
extern int opos;
extern bool alive;
extern bool dingue;

extern struct map benin[3][3];
extern struct map spain[3][3];
extern struct map franc[3][3];
extern struct map chine[3][3];
extern struct map retour[3][3];
extern struct map dung[5][4];
extern struct spritelist list[5];
extern struct cinematic cinema[10];
extern struct map current;
extern struct map old;
#endif