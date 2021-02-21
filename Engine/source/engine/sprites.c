#include "sprites.h" 
const unsigned int SPR_test_anim[128] = { 
0x55000000, 0x55500000, 0x55550000, 0x55555000, 0x59555500, 0x59955550, 0x59995555, 0xFFFFFFFF, 0x00000055, 0x00000555, 0x00005555, 0x00055555, 0x00555595, 0x05555995, 0x55559995, 0xFFFFFFFF, 
0xFFFFFFFF, 0x59995555, 0x59955550, 0x59555500, 0x55555000, 0x55550000, 0x55500000, 0x55000000, 0xFFFFFFFF, 0x55559995, 0x05555995, 0x00555595, 0x00055555, 0x00005555, 0x00000555, 0x00000055, 
0x55000000, 0x55500000, 0x55550000, 0x55555000, 0x59955500, 0x59995550, 0x99995555, 0xFFFFFFFF, 0x00000055, 0x00000555, 0x00005555, 0x00055555, 0x00555995, 0x05559995, 0x55559999, 0xFFFFFFFF, 
0xFFFFFFFF, 0x99995555, 0x59995550, 0x59955500, 0x55555000, 0x55550000, 0x55500000, 0x55000000, 0xFFFFFFFF, 0x55559999, 0x05559995, 0x00555995, 0x00055555, 0x00005555, 0x00000555, 0x00000055, 
0x55000000, 0x55500000, 0x55550000, 0x59555000, 0x59995500, 0x99995550, 0x99999555, 0x9FFFFFFF, 0x00000055, 0x00000555, 0x00005555, 0x00055595, 0x00559995, 0x05559999, 0x55599999, 0xFFFFFFF9, 
0x9FFFFFFF, 0x99999555, 0x99995550, 0x59995500, 0x59555000, 0x55550000, 0x55500000, 0x55000000, 0xFFFFFFF9, 0x55599999, 0x05559999, 0x00559995, 0x00055595, 0x00005555, 0x00000555, 0x00000055, 
0x55000000, 0x55500000, 0x55550000, 0x55555000, 0x59955500, 0x59995550, 0x99995555, 0xFFFFFFFF, 0x00000055, 0x00000555, 0x00005555, 0x00055555, 0x00555995, 0x05559995, 0x55559999, 0xFFFFFFFF, 
0xFFFFFFFF, 0x99995555, 0x59995550, 0x59955500, 0x55555000, 0x55550000, 0x55500000, 0x55000000, 0xFFFFFFFF, 0x55559999, 0x05559995, 0x00555995, 0x00055555, 0x00005555, 0x00000555, 0x00000055, 

}; 
const unsigned short PAL_test[16] = { 
0x0000, 0x1884, 0x1CA8, 0x18EC, 0x1D51, 0x11DB, 0x329B, 0x4F1D, 0x1BDF, 0x2B93, 0x1AED, 0x3646, 0x15A9, 0x112A, 0x1CE6, 0x5DFA, 

}; 
const unsigned short PAL_test2[16] = { 
0x0000, 0x1884, 0x1884, 0x1884, 0x1884, 0x1884, 0x1884, 0x1884, 0x5DFA, 0x5DFA, 0x5DFA, 0x5DFA, 0x5DFA, 0x5DFA, 0x5DFA, 0x5DFA, 

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
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x0029, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0C1A, 0x002A, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x002B, 0x0C09, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0C17, 0x0C16, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 
0x000B, 0x000B, 0x000B, 0x002C, 0x002D, 0x0813, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x002E, 0x002F, 0x0030, 0x0031, 0x000B, 0x000B, 0x0032, 0x0033, 
0x0034, 0x0035, 0x0036, 0x0037, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
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
const unsigned int BGT_sample_ase[448] = { 
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
0x70000000, 0x70000000, 0x70000000, 0x70000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x07777777, 0x00777777, 0x00077777, 0x00007777, 0x00000777, 0x00000077, 0x00000007, 0x00000007, 
0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77000000, 0x77777777, 0x07777777, 0x00777777, 0x00077777, 0x00007777, 0x00000777, 0x00000077, 0x00000007, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777770, 0x77777770, 0x77777700, 0x77777000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00777777, 0x00077777, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x07777777, 0x00077777, 0x77777777, 0x77777777, 0x77777777, 0x00777777, 0x00000777, 0x00000007, 0x00000000, 0x00000000, 
0x77770000, 0x77000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777700, 0x77000000, 0x00000000, 0x00000000, 0x00000000, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777700, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777770, 0x00000000, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00007777, 0x00000000, 
0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x07777777, 0x00000000, 0x00000000, 0x77777777, 0x77777777, 0x77777777, 0x77777777, 0x00000777, 0x00000000, 0x00000000, 0x00000000, 
0x77777777, 0x77777777, 0x00007777, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000077, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 

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
const unsigned int TILE_test[64] = { 
0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x77777777, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 
0x77777777, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 0x11111117, 
0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0xEEEEEEEE, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 
0xEEEEEEEE, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 0x9999999E, 

}; 
