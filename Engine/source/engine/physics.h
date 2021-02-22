#pragma once

#include "core.h"

#define SHAPE_FULL			0
#define SHAPE_PLATFORM		1

#define SET_TILE_DATA(i, shape, coll)	tile_types[i] = (shape) | (coll << 4)

extern unsigned int tileTypes[128];

extern unsigned int entity_physics(Entity *ent, int hitMask, int detectMask);
//extern unsigned int collide_rect(int x, int y, int width, int height);
//extern unsigned int collide_entity(unsigned int ID);
