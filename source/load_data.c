#include "load_data.h"

#include "sprites.h"
#include "core.h"
#include "physics.h"
#include "math.h"


#define FIXED2BLOCK(n) ((n) >> (ACC + BLOCK_SHIFT))
#define BLOCK2FIXED(n) ((n) << (ACC + BLOCK_SHIFT))

#define INT2BLOCK(n) ((n) >> (BLOCK_SHIFT))
#define BLOCK2INT(n) ((n) << (BLOCK_SHIFT))

#define VIS_BLOCK_POS(x, y) (((x) & 0x1F) + (((y) & 0x1F) << 5))

#define X_TILE_BUFFER 1
#define Y_TILE_BUFFER 1

#ifdef LARGE_TILES

#define BLOCK_X		15
#define BLOCK_Y		10

#else

#define BLOCK_X		30
#define BLOCK_Y		20

#endif

unsigned short *visuals = (unsigned short*)0x2001000;
unsigned char *lvlInfo;

void LoadCollisionData(unsigned char *levelInfo){
	
	lvlInfo = levelInfo;
	
	width =  lvlInfo[0];
	height = lvlInfo[1];
	
	int index = width - 1;
	yShift = 0;
	
	while (index) {
		index >>= 1;
		++yShift;
	}
	
	unsigned int count = (lvlInfo[2]);
	unsigned int value = (lvlInfo[3]);
	
	lvlInfo += 4;
	
	unsigned char* cpyColl = (unsigned char*)&collisionData;
	
	int indexX, indexY;
	
	// decompress file data
	// --- COLLISION ---
	int r1 = (1 << yShift) - width;
	unsigned int countT;
	
	for (indexY = 0; indexY < height; ++indexY){// by row
		countT = (count > width) ? width : count; // get the mem set count value.  if larger than the width
		
		for (indexX = 0; indexX < width;)
		{
			memset(cpyColl, value, countT);
			count -= countT;
			indexX += countT;
			cpyColl += countT;
			
			if (indexX < width)
			{
				count = lvlInfo[0];
				
				countT = (count > (width - indexX)) ? (width - indexX) : count;	
				
				value = lvlInfo[1];
				lvlInfo += 2;
			}
		}
		cpyColl += r1;
	}
}
void LoadInVisualData(int index) {

	int r1 = (1 << yShift) - width, indexX, indexY;
	unsigned int count = lvlInfo[0], countT;
	unsigned int value = (lvlInfo[2] << 8) | lvlInfo[1];
	
	lvlInfo += 3;
	
	unsigned short* cpyColl = &visuals[0x2000 * index];
	
	for (indexY = 0; indexY < height; ++indexY){// by row
		countT = (count > width) ? width : count; // get the mem set count value.  if larger than the width
		
		for (indexX = 0; indexX < width;) {
			int a = countT;
			while (--a >= 0)
				cpyColl[a] = value;
			
			//memset(cpyColl, value, countT);
			count -= countT;
			indexX += countT;
			cpyColl += countT;
			
			if (indexX < width)
			{
				count = lvlInfo[0];
				
				countT = (count > (width - indexX)) ? (width - indexX) : count;	
				
				value = lvlInfo[2] << 8;
				value |= lvlInfo[1];
				
				lvlInfo += 3;
			}
		}
		cpyColl += r1;
	}
}
void LoadInEntityData() {
	
	maxEntities = 0;
	
	// unload entities
	{
		int index = 0;
		for (; index < ACTOR_LIMIT; ++index){
			
			if (ACTOR_PERSISTENT(PHYS_actors[index].flags))
			{
				PHYS_actors[maxEntities] = PHYS_actors[index];
				
				++maxEntities;
			}
			else{
				PHYS_actors[index].flags = 0;
			}
			
		}
	}
	
	// load entities
	unsigned char type;
	type = lvlInfo[0];
	lvlInfo += 1;
	
	while (type != 255) {
		unsigned char
			x = lvlInfo[0],
			y = lvlInfo[1];
		
		lvlInfo += 2;
		
		PHYS_actors[maxEntities].velX = 0;
		PHYS_actors[maxEntities].velY = 0;
		
		PHYS_actors[maxEntities].x = BLOCK2FIXED(x);
		PHYS_actors[maxEntities].y = BLOCK2FIXED(y);
		PHYS_actors[maxEntities].ID = type;
		
		lvlInfo += entity_inits[type](&maxEntities, lvlInfo);
		
		++maxEntities;
		
		type = lvlInfo[0];
		
		lvlInfo += 1;
	} 
}

#ifdef LARGE_TILES

#else
//*
void MoveCam() {
	int moveX = INT2BLOCK(camX) - INT2BLOCK(prevCamX),
		moveY = INT2BLOCK(camY) - INT2BLOCK(prevCamY);
	
	if (!moveX && !moveY)
		return;
	
	int xMin = INT2BLOCK(SIGNED_MIN(prevCamX, camX)) - 1;
	int xMax = INT2BLOCK(SIGNED_MAX(prevCamX, camX)) + BLOCK_X + 1;
	int yMin = INT2BLOCK(SIGNED_MIN(prevCamY, camY)) - 1;
	int yMax = INT2BLOCK(SIGNED_MAX(prevCamY, camY)) + BLOCK_Y + 1;
	
	unsigned short *foreground = &se_mem[FOREGROUND_LAYER][0];
	unsigned short *background = &se_mem[MIDGROUND_LAYER][0];
	int position;
	
	// Get the start X and Y rows needed to edit, and the direction each is needed to move.
	// Get the end destinations for x and y.
	
	int dirX = INT_SIGN(moveX), dirY = INT_SIGN(moveY);
	int startX = (dirX < 0) ? xMin : xMax, startY = (dirY < 0) ? yMin : yMax;
	int endX = startX + moveX, endY = startY + moveY;
	int min, max;
		
	if (startX != endX)
		startX -= dirX;
	if (startY != endY)
		startY -= dirY;
	
	if (dirX == 0)
		dirX = 1;
	if (dirY == 0)
		dirY = 1;
	
	do {
		
		if (startX != endX) {
			min = startY - (BLOCK_Y + 2) * dirY;
			max = startY;
			
			for (; min != max; min += dirY){
				position = VIS_BLOCK_POS(startX, min);
				
				foreground[position] = fgVisuals[startX + (min << yShift)];
				background[position] = bgVisuals[startX + (min << yShift)];
			}
			startX += dirX;
		}
		
		if (startY != endY) {
			
			min = startX - (BLOCK_X + 2) * dirX;
			max = startX;
			
			for (; min != max; min += dirX){
				position = VIS_BLOCK_POS(min, startY);
				
				foreground[position] = fgVisuals[min + (startY << yShift)];
				background[position] = bgVisuals[min + (startY << yShift)];
			}
			startY += dirY;
		}
	}
	while (startX != endX || startY != endY);
	
}
void ResetCam() {
	int x = INT2BLOCK(camX);
	int y = INT2BLOCK(camY);
	
	y -= Y_TILE_BUFFER;
	x -= X_TILE_BUFFER;
	x &= ~0x1;
	//int yMin = y;
	//int xMin = x - X_TILE_BUFFER;
	
	unsigned int position;
	unsigned int pos;
	
	unsigned short *foreground = se_mem[FOREGROUND_LAYER];
	unsigned short *background = se_mem[MIDGROUND_LAYER];
	
	if (ACTOR_ENTITY_TYPE(PHYS_actors[1].ID) == 10){
		memset(background, 0, 0x800);
		
		int val = 32;
		while (val > 0){
			--val;
			
			int p1 = VIS_BLOCK_POS(x, y);
			int p2 = (y << yShift) + x;
			
			memcpy(&foreground[p1], &fgVisuals[p2], 64 - (x << 1));
			
			p1 &= 0xFE0;
			p2 += 32 - x;
			
			memcpy(&foreground[p1], &fgVisuals[p2], (x << 1));
			++y;
			
		}
	}
	else {
		
		int val = 32;
		while (val > 0){
			--val;
			
			int p1 = VIS_BLOCK_POS(x, y);
			int p2 = (y << yShift) + x;
			++y;
			
			memcpy(&foreground[p1], &fgVisuals[p2], 64 - (x << 1));
			memcpy(&background[p1], &bgVisuals[p2], 64 - (x << 1));
			
			p1 &= 0xFE0;
			p2 += 32 - x;
			
			memcpy(&foreground[p1], &fgVisuals[p2], (x << 1));
			memcpy(&background[p1], &bgVisuals[p2], (x << 1));
			
		}
	}
}
//*/
#endif