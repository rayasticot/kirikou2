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
extern int skullnum;
extern bool skullLive[10];
extern int skullx[10];
extern int skully[10];
extern int dir[10];

extern struct map benin[3][3];
extern struct map dung[5][4];
extern struct cinematic cinema[10];
extern struct map current;
#endif