#include "sprites.h" 
const unsigned int SPR_char_idle[128] = { 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x00000000, 0x11310000, 0x11311100, 0x13111110, 0x13111111, 0x11111133, 
0x00000033, 0x00000300, 0x00000030, 0x00000113, 0x00011111, 0x00011111, 0x00111111, 0x00111111, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x10000000, 0x10000000, 0x10000000, 0x10000000, 0x10000000, 0x00000000, 0x00000000, 0x00000000, 0x11333311, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x00111111, 0x00155211, 0x11155221, 0x11155221, 0x11115211, 0x11111111, 0x11111111, 0x11111111, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x11111110, 0x11111110, 0x11111100, 0x11444400, 0x44444400, 0x44444440, 0x11444440, 0x11114440, 
0x01111111, 0x01111111, 0x01111111, 0x00111111, 0x00004444, 0x00044444, 0x00044441, 0x00444555, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x51114440, 0x55144440, 0x54444300, 0x43333300, 0x33333000, 0x66630000, 0x66660000, 0x66660000, 
0x00444555, 0x00444555, 0x00444455, 0x00044444, 0x00003333, 0x00000003, 0x00000066, 0x00000666, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 

}; 
const unsigned int SPR_char_roll[128] = { 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00033330, 0x11310003, 0x13111100, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000111, 0x00111111, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x10000000, 0x10000000, 0x10000000, 0x10000000, 0x10000000, 0x11111110, 0x11333111, 0x11111331, 0x11111113, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x01112211, 0x11221111, 0x12221111, 0x12211111, 0x12111111, 0x12111111, 0x11111111, 0x11111111, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 
0x10000000, 0x10000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x44444111, 0x44444444, 0x44411144, 0x51111444, 0x51144330, 0x33333330, 0x66633300, 0x66330000, 
0x11144444, 0x61444444, 0x64455544, 0x46455555, 0x46644555, 0x04663333, 0x00666666, 0x00006666, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 

}; 
const unsigned short PAL_character[16] = { 
0x0000, 0x3299, 0x7FFF, 0x0867, 0x7BDE, 0x3646, 0x5DFA, 0x1884, 0x1CA8, 0x1D51, 0x329B, 0x1BDF, 0x1AED, 0x15A9, 0x112A, 0x1CE6, 

}; 
const unsigned short PAL_test[16] = { 
0x0000, 0x1884, 0x1CA8, 0x18EC, 0x1D51, 0x11DB, 0x329B, 0x4F1D, 0x1BDF, 0x2B93, 0x1AED, 0x3646, 0x15A9, 0x112A, 0x1CE6, 0x5DFA, 

}; 
const unsigned int particles[24] = { 
0x00000000, 0x00000000, 0x00000000, 0x00044000, 0x00044000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00111000, 0x01776100, 0x01677610, 0x00164100, 0x00011000, 0x00000000, 
0x00000000, 0x00111100, 0x01677610, 0x01777710, 0x01477610, 0x00166410, 0x00011100, 0x00000000, 
}; 
const unsigned short BG_sample_ase[1024] = { 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0002, 0x0003, 0x0003, 0x0004, 0x0005, 0x0006, 0x0006, 0x0006, 
0x0007, 0x0008, 0x0401, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0009, 0x000A, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000C, 0x000D, 0x000E, 0x000F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0011, 0x0012, 0x0013, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0014, 0x0015, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0016, 0x0017, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0018, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0019, 0x001A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x001B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x001C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x001D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x001E, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x001F, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0801, 0x0020, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0801, 0x0020, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0021, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0801, 0x0022, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0023, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x041A, 0x0024, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0025, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0026, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0027, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0028, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0029, 0x002A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0C1A, 0x002B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x002C, 0x002D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0C17, 0x0C16, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x002E, 0x002F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0030, 0x0031, 0x0032, 0x0033, 0x000B, 0x000B, 0x0034, 0x0035, 
0x0036, 0x0037, 0x0038, 0x002D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

}; 
const unsigned short BG_sample_bmp[1024] = { 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 
0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0003, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x0004, 0x0000, 0x000A, 0x000B, 0x000C, 
0x000D, 0x0C07, 0x0C07, 0x0C07, 0x0C07, 0x000E, 0x000F, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0011, 0x0012, 0x0013, 0x0C02, 0x0014, 0x0015, 0x0016, 0x0017, 0x080F, 0x0018, 0x0019, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x001A, 0x001B, 0x001C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x001D, 0x001E, 0x001F, 0x0000, 0x0000, 0x001A, 0x0020, 0x0021, 0x0022, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0023, 0x0024, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0025, 0x0026, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0027, 0x0024, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0025, 0x0425, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x081A, 0x0028, 0x0029, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x002A, 0x002B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x002C, 0x002D, 0x002E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x002F, 0x000C, 0x0030, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x081A, 0x0031, 0x0032, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0033, 0x0034, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0035, 0x0036, 0x0037, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0038, 0x000C, 0x0039, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x003A, 0x003B, 0x003C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x003D, 0x0412, 0x003E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x081A, 0x003F, 0x0816, 0x0040, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x001A, 0x0041, 0x0042, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0043, 0x0044, 0x0816, 0x0045, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0046, 0x042D, 0x0047, 0x0000, 0x0000, 0x0000, 0x081A, 0x0048, 
0x0416, 0x0049, 0x004A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x004B, 0x004C, 0x0C1A, 0x0000, 0x0C37, 0x004D, 0x004E, 
0x004F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0050, 0x000C, 0x0051, 0x0C1F, 0x0052, 0x0053, 0x0054, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x005A, 0x005B, 0x003B, 0x005C, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x005D, 0x0C16, 0x005E, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x005F, 0x045F, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

}; 
const unsigned int BGT_sample_ase[456] = { 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x70000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77777700, 0x77777777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x70000000, 0x77707777, 0x77777777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77777770, 0x77777777, 0x77777777, 0x77777777, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00077777, 0x77777777, 0x77777777, 0x77777777, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00077777, 0x77777777, 0x00000000, 0x00000000, 0x00000000, 0x77000000, 0x77770000, 0x77777000, 0x77777700, 0x77777770, 
0x77700000, 0x77777000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 
0x00007777, 0x07777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00000000, 0x00000000, 0x00000077, 0x00077777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000777, 0x07777777, 0x77777777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000777, 
0x00000000, 0x70000000, 0x77000000, 0x77700000, 0x77770000, 0x77777000, 0x77777000, 0x77777700, 0x07777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 
0x00000000, 0x00000077, 0x00007777, 0x00777777, 0x07777777, 0x77777777, 0x77777777, 0x77777777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000777, 0x00007777, 
0x00000000, 0x00000000, 0x00000000, 0x70000000, 0x70000000, 0x77000000, 0x77000000, 0x77700000, 0x77777770, 0x77777770, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 
0x00077777, 0x00777777, 0x07777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000077, 0x00000777, 0x00007777, 
0x77700000, 0x77770000, 0x77770000, 0x77770000, 0x77777000, 0x77777000, 0x77777000, 0x77777700, 0x00077777, 0x00077777, 0x00777777, 0x07777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000007, 0x77777700, 0x77777770, 0x77777770, 0x77777770, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 
0x00000077, 0x00000777, 0x00007777, 0x00007777, 0x00007777, 0x00077777, 0x00077777, 0x00777777, 0x00777777, 0x00777777, 0x07777777, 0x07777777, 0x07777777, 0x07777777, 0x07777777, 0x77777777, 
0x77777770, 0x77777770, 0x77777770, 0x77777770, 0x77777770, 0x77777700, 0x77777700, 0x77777000, 0x77777000, 0x77777000, 0x77770000, 0x77770000, 0x77770000, 0x77700000, 0x77700000, 0x77000000, 
0x77777777, 0x77777777, 0x77777770, 0x77777700, 0x77777000, 0x77770000, 0x77700000, 0x77000000, 0x77777777, 0x77777777, 0x77777777, 0x07777777, 0x07777777, 0x07777777, 0x07777777, 0x07777777, 
0x77777777, 0x77777777, 0x77777770, 0x77777700, 0x77777700, 0x77777700, 0x77777700, 0x77777700, 0x07777777, 0x00777777, 0x00777777, 0x00777777, 0x00777777, 0x00077777, 0x00077777, 0x00077777, 
0x77777700, 0x77777700, 0x77777770, 0x77777770, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00077777, 0x00007777, 0x00007777, 0x00000777, 0x00000077, 0x00000077, 0x00000007, 0x00000000, 
0x70000000, 0x70000000, 0x70000000, 0x70000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x07777777, 0x00777777, 0x00077777, 0x00007777, 0x00000777, 0x00000077, 0x00000007, 0x00000000, 
0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00777777, 0x00077777, 0x00000777, 
0x00777777, 0x00077777, 0x00000777, 0x00000077, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777770, 0x77777770, 0x77777700, 0x77777000, 
0x77777777, 0x77777777, 0x07777777, 0x00777777, 0x00077777, 0x00007777, 0x00000777, 0x00000007, 0x00000077, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x07777777, 0x00077777, 0x77777777, 0x00777777, 0x00077777, 0x00007777, 0x00000077, 0x00000007, 0x00000000, 0x00000000, 
0x77770000, 0x77000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777700, 0x77000000, 0x00000000, 0x00000000, 0x00000000, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777700, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777770, 0x00000000, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00007777, 0x00000000, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x07777777, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00000777, 0x00000000, 0x00000000, 0x00000000, 
0x77777777, 0x77777777, 0x00007777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
}; 
const unsigned int BGT_sample_bmp[768] = { 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 0xFFFFFF00, 0xFFFFFFFF, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0FFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x0000FFFF, 0x00000000, 0x00000000, 0x00000000, 0xF0000000, 0xFF000000, 0xFFF00000, 0xFFFF0000, 0xFFFF0000, 
0x00000000, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0x00000000, 0x00000FFF, 0x0FFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000FFF, 0x000FFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0x00000000, 0x00000000, 0x00000000, 0xF0000000, 0xFFF00000, 0xFFFFF000, 0xFFFFFFF0, 0xFFFFFFFF, 0xFF000000, 0xFFFFF000, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000000F, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFF0000, 0x00FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0x00000000, 0x00000000, 0x0000000F, 0x000000FF, 0x00000FFF, 0x00000FFF, 0x0000FFFF, 0x000FFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF0000000, 0xF0000000, 
0xFFFFF000, 0xFFFFFF00, 0xFFFFFFF0, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x000FFFFF, 0x0000FFFF, 0x00000FFF, 0x00000FFF, 0x000000FF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFF0000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF00, 0xFFF00000, 
0x00FFFFFF, 0x0FFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000000, 0xFF000000, 0xFFFF0000, 0xFFFFF00F, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00FFFFFF, 0x0000FFFF, 0x000000FF, 0x00000000, 0x00000000, 0x000FFFFF, 0x00000FFF, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0xF0000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFF0, 0xFFFFF000, 0xFFFFF000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 
0x000FFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xFF000000, 0xFF000000, 0xFFF00000, 0xFFF00000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFFF000, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 0x00FFFFFF, 0x000000FF, 0x0000000F, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0xFFFFFFFF, 0xFFFFFFF0, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFF000, 0xFFFF0000, 0xFFF00000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF0F, 0x0FFFF000, 
0x000FFFFF, 0x0000FFFF, 0x00000FFF, 0x000000FF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 
0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 
0x00FFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x000FFFFF, 0x000FFFFF, 0x000FFFFF, 0x000FFFFF, 0x000FFFFF, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFFF000, 0xFFFFF000, 
0xFFFFFF00, 0xFFFFFF00, 0xFFFFFFF0, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x000FFFFF, 0x0000FFFF, 0x0000FFFF, 0x00000FFF, 0x00000FFF, 0x000000FF, 
0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFF00000, 0x000FFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 0xFFFFFFFF, 
0xF0000000, 0xFF000000, 0xFF000000, 0xFFF00000, 0xFFF00000, 0xFFFF0000, 0xFFFF0000, 0xFFFFF000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 
0x000000FF, 0x000000FF, 0x0000000F, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFF00000, 0xFFF00000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF0000000, 0xF0000000, 0x00000000, 
0x00000000, 0x00000000, 0x0000000F, 0x0000000F, 0x000000FF, 0x000000FF, 0x00000FFF, 0x0000FFFF, 0xFFFFF000, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFFF0, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 
0x00FFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x000FFFFF, 0x0000FFFF, 0x0000FFFF, 0x0000FFFF, 0x00000FFF, 0xFFFFFFFF, 0xFFFFFFF0, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFF000, 0xFFFFF000, 0xFFFF0000, 0xFFFF0000, 
0x0000FFFF, 0x000FFFFF, 0x000FFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 0xFFFFFFFF, 0xFF000000, 0xFFF00000, 0xFFFF0000, 0xFFFFF000, 0xFFFFF000, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFFF0, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0FFFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x000FFFFF, 0x00000FFF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0xFFF00000, 0xFFF00000, 0xFF000000, 0xFF000000, 0xF0000000, 0xF0000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000F, 0x0000000F, 0x000000FF, 0x000000FF, 0x00000FFF, 0x0000FFFF, 0x0000FFFF, 
0x00000000, 0x00000000, 0xF0000000, 0xFF000000, 0xFFFF0000, 0xFFFFF000, 0xFFFFFF00, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0FFFFFFF, 
0x0000FFFF, 0x0000FFFF, 0x00000FFF, 0x000000FF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFFF0, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFF000, 0xFFFF0000, 0xFFF00000, 0xFFF00000, 0xFF000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000F, 0x000000FF, 0x000000FF, 0x00000000, 0xF0000000, 0xFF000000, 0xFFF00000, 0xFFFF0000, 0xFFFFF000, 0xFFFFFFF0, 0xFFFFFFFF, 
0x00FFFFFF, 0x000FFFFF, 0x0000FFFF, 0x00000FFF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF0, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFF000, 0xFFFF0000, 
0x00000FFF, 0x0000FFFF, 0x0000FFFF, 0x000FFFFF, 0x00FFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 0xFFFF0000, 0xFFFFF000, 
0xFF000000, 0xFFFF0000, 0xFFFFF000, 0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x000FFFFF, 0x0000FFFF, 0x00000FFF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 
0xFFF00000, 0xFFF00000, 0xFF000000, 0xF0000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000F, 0x000000FF, 0x000000FF, 0x00000FFF, 0x00000FFF, 0x0000FFFF, 0x000FFFFF, 0x000FFFFF, 
0x00000000, 0x00000000, 0x00000000, 0xFF000000, 0xFFFF0000, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0FFFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x00000FFF, 0x0000000F, 
0x0000FFFF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF00, 0xFFFFF000, 0xFFFFF000, 0xFFFF0000, 0xFFFF0000, 0xFFF00000, 0xFFF00000, 0xFFF00000, 
0x00FFFFFF, 0x00FFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 0x0FFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFF000000, 0xFFF00000, 0xFFFFF000, 0xFFFFFF00, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0FFFFFFF, 0x000FFFFF, 0x0FFFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x0000FFFF, 0x00000FFF, 0x0000000F, 0x00000000, 0x00000000, 
0xFF000000, 0xFF000000, 0xF0000000, 0xF0000000, 0xF0000000, 0xF0000000, 0x00000000, 0x00000000, 0x0000000F, 0x0000000F, 0x0000000F, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000FFF, 0x00000FFF, 
0xFFFF0000, 0xFFFFF000, 0xFFFFFF00, 0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x0000FFFF, 0x00000FFF, 
0x0000FFFF, 0x00000FFF, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFF0, 0xFFFFFFF0, 0xFFFFFFF0, 0xFFFFFFF0, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 
0x00000FFF, 0x00000FFF, 0x0000FFFF, 0x0000FFFF, 0x0000FFFF, 0x0000FFFF, 0x000FFFFF, 0x000FFFFF, 0xFFF00000, 0xFFFF0000, 0xFFFFF000, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFFF0, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0FFFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x0000FFFF, 0x0000FFFF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0xFFFFFF00, 0xFFFFF000, 0xFFFFF000, 0xFFFFF000, 0xFFFF0000, 0xFFFF0000, 0xFFF00000, 0xFFF00000, 0xF00FFFFF, 0xF0FFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0x0000FFFF, 0x00000FFF, 0x00000FFF, 0x000000FF, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 0xFF000000, 0xF0000000, 0xF0000000, 0xF0000000, 0x00000000, 0x00000000, 0x00000000, 
0x0FFFFFFF, 0x0FFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x000FFFFF, 0x000FFFFF, 0x0000FFFF, 0xFFF00000, 0xFF000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 

}; 
const unsigned int TILE_test[160] = { 
0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x77777777, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 
0x77777777, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x77777777, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x77777777, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 0x71111111, 
0x77777777, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x77777777, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 
0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 

}; 
