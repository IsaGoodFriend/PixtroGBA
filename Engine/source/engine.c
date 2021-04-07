#include "engine.h"
#include "tonc_vscode.h"

#include "pixtro_basic.h"

#include "levels.h"
#include "load_data.h"
#include "character.h"
#include "coroutine.h"

void update();
void render();

void on_update() {
	if (cam_y < 80 + 64)
		++cam_y;
	if (cam_x < 120 + 64)
		++cam_x;
	//cam_x = 120 + 32;
	//cam_x = FIXED2INT(entities[0].x);
	//cam_y = FIXED2INT(entities[0].y) + entities[0].height - 10;
}

extern unsigned int lvl_width;

// Run before anything else happens in the game
void init() {
	
	set_foreground_count(1);
	finalize_layers();
	
	load_header((unsigned char*)LVL_test);
	load_midground(0);
	//load_entities();
	
	custom_update = &on_update;

	LOAD_BG(sample_ase, 1);
	LOAD_ENTITY(character, 0);
	LOAD_TILESET(all);
	
	cam_x = 120 + 16;
	reset_cam();

	load_bg_pal(PAL_test, 0);
	load_obj_pal(PAL_character, 0);
	load_sprite(SPR_char_idle, 0, SPRITE32x32);

}

// Run the first time the game is initialized.  Mainly used for setting default settings
void init_settings() {
	
}