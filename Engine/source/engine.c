#include "engine.h"
#include <tonc.h>

#include "pixtro_basic.h"

#include "levels.h"
#include "load_data.h"
#include "character.h"

void update();
void render();

void on_update() {
	cam_x = FIXED2INT(entities[0].x);
	cam_y = FIXED2INT(entities[0].y);
}

void init() {
	
	LOAD_ENTITY(character, 0);
	
	LOAD_TILESET(test);
	
	load_bg_pal(PAL_test, 0);
	load_obj_pal(PAL_character, 0);
	
	load_sprite(SPR_char_idle, 0, SPRITE32x32);
	
	set_layer_priority(1, 1);
	set_layer_priority(2, 2);
	set_layer_priority(3, 3);
	
	LOAD_BG(sample_ase, 1);
	
	set_foreground_count(1);
	finalize_layers();
	
	load_collision((unsigned char*)LVL_test);
	load_midground(0);
	load_entities();
	
	reset_cam();
	
	custom_update = &on_update;
	
}

void init_settings() {
	
}