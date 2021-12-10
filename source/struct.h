#ifndef STRUCT_H
#define STRUCT_H
struct map{
    u8 object[10];
    u8 obj_x[10];
    u8 obj_y[10];
	u8 npcsprite;

	char* sound[5];
	int hz[5];

    char* background;

	u8 cinematic;
};
struct cinematic{
	int time[5];

	char* sound[5];
	int hz[5];

	char* bg[5];
};
#endif