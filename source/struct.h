#ifndef STRUCT_H
#define STRUCT_H
struct map{
    u8 object[10];
    u16 obj_x[10];
    u16 obj_y[10];
	u8 npcsprite;

	char* sound[5];
	int hz[5];

    char* background;

	u8 cinematic;
};
struct cinematic{
	u16 time[8];

	char* sound[8];
	int hz[8];

	char* bg[8];
};
struct spritelist{
	char* link[11];
	u8 size_x[11];
	u8 size_y[11];
};
#endif