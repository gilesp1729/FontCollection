#include <gfxfont.h>

const uint8_t UISymbolSans12pt7bBitmaps[] PROGMEM = {
// 00 Test square
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X . . . . . . , . . . . . . . X |*/ 0x80, 0x01,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
// 01 Upper left arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X X X X X X X X X X . . . . . |*/ 0xFF, 0xE0,
/*| X X X X X X X X X X X . . . . . |*/ 0xFF, 0xE0,
/*| X X X X . . . , . . . . . . . . |*/ 0xF0, 0x00,
/*| X X . X X . . , . . . . . . . . |*/ 0xD8, 0x00,
/*| X X . . X X . , . . . . . . . . |*/ 0xCC, 0x00,
/*| X X . . . X X , . . . . . . . . |*/ 0xC6, 0x00,
/*| X X . . . . X X . . . . . . . . |*/ 0xC3, 0x00,
/*| X X . . . . . X X . . . . . . . |*/ 0xC1, 0x80,
/*| X X . . . . . , X X . . . . . . |*/ 0xC0, 0xC0,
/*| X X . . . . . , . X X . . . . . |*/ 0xC0, 0x60,
/*| . . . . . . . , . . X X . . . . |*/ 0x00, 0x30,
/*| . . . . . . . , . . . X X . . . |*/ 0x00, 0x18,
/*| . . . . . . . , . . . . X X . . |*/ 0x00, 0x0C,
/*| . . . . . . . , . . . . . X X . |*/ 0x00, 0x06,
/*| . . . . . . . , . . . . . . X X |*/ 0x00, 0x03,
// 02 Upper right arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . X X X X X X X X X X X |*/ 0x07, 0xFF,
/*| . . . . . X X X X X X X X X X X |*/ 0x07, 0xFF,
/*| . . . . . . . , . . . . X X X X |*/ 0x00, 0x0F,
/*| . . . . . . . , . . . X X . X X |*/ 0x00, 0x1B,
/*| . . . . . . . , . . X X . . X X |*/ 0x00, 0x33,
/*| . . . . . . . , . X X . . . X X |*/ 0x00, 0x63,
/*| . . . . . . . , X X . . . . X X |*/ 0x00, 0xC3,
/*| . . . . . . . X X . . . . . X X |*/ 0x01, 0x83,
/*| . . . . . . X X . . . . . . X X |*/ 0x03, 0x03,
/*| . . . . . X X , . . . . . . X X |*/ 0x06, 0x03,
/*| . . . . X X . , . . . . . . . . |*/ 0x0C, 0x00,
/*| . . . X X . . , . . . . . . . . |*/ 0x18, 0x00,
/*| . . X X . . . , . . . . . . . . |*/ 0x30, 0x00,
/*| . X X . . . . , . . . . . . . . |*/ 0x60, 0x00,
/*| X X . . . . . , . . . . . . . . |*/ 0xC0, 0x00,
//  03 Lower left arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . , . . . . . . X X |*/ 0x00, 0x03,
/*| . . . . . . . , . . . . . X X . |*/ 0x00, 0x06,
/*| . . . . . . . , . . . . X X . . |*/ 0x00, 0x0C,
/*| . . . . . . . , . . . X X . . . |*/ 0x00, 0x18,
/*| . . . . . . . , . . X X . . . . |*/ 0x00, 0x30,
/*| X X . . . . . , . X X . . . . . |*/ 0xC0, 0x60,
/*| X X . . . . . , X X . . . . . . |*/ 0xC0, 0xC0,
/*| X X . . . . . X X . . . . . . . |*/ 0xC1, 0x80,
/*| X X . . . . X X . . . . . . . . |*/ 0xC3, 0x00,
/*| X X . . . X X , . . . . . . . . |*/ 0xC6, 0x00,
/*| X X . . X X . , . . . . . . . . |*/ 0xCC, 0x00,
/*| X X . X X . . , . . . . . . . . |*/ 0xD8, 0x00,
/*| X X X X . . . , . . . . . . . . |*/ 0xF0, 0x00,
/*| X X X X X X X X X X X . . . . . |*/ 0xFF, 0xE0,
/*| X X X X X X X X X X X . . . . . |*/ 0xFF, 0xE0,
//  04 Lower right arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X . . . . . , . . . . . . . . |*/ 0xC0, 0x00,
/*| . X X . . . . , . . . . . . . . |*/ 0x60, 0x00,
/*| . . X X . . . , . . . . . . . . |*/ 0x30, 0x00,
/*| . . . X X . . , . . . . . . . . |*/ 0x18, 0x00,
/*| . . . . X X . , . . . . . . . . |*/ 0x0C, 0x00,
/*| . . . . . X X , . . . . . . X X |*/ 0x06, 0x03,
/*| . . . . . . X X . . . . . . X X |*/ 0x03, 0x03,
/*| . . . . . . . X X . . . . . X X |*/ 0x01, 0x83,
/*| . . . . . . . , X X . . . . X X |*/ 0x00, 0xC3,
/*| . . . . . . . , . X X . . . X X |*/ 0x00, 0x63,
/*| . . . . . . . , . . X X . . X X |*/ 0x00, 0x33,
/*| . . . . . . . , . . . X X . X X |*/ 0x00, 0x1B,
/*| . . . . . . . , . . . . X X X X |*/ 0x00, 0x0F,
/*| . . . . . X X X X X X X X X X X |*/ 0x07, 0xFF,
/*| . . . . . X X X X X X X X X X X |*/ 0x07, 0xFF,
//  05 Power symbol
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . X X . X X . X X . . . . |*/ 0x0D, 0xB0,
/*| . . . X X . . X X . . X X . . . |*/ 0x19, 0x98,
/*| . . X X . . . X X . . . X X . . |*/ 0x31, 0x8C,
/*| . X X . . . . X X . . . . X X . |*/ 0x61, 0x86,
/*| X X . . . . . X X . . . . . X X |*/ 0xC1, 0x83,
/*| X X . . . . . X X . . . . . X X |*/ 0xC1, 0x83,
/*| X X . . . . . X X . . . . . X X |*/ 0xC1, 0x83,
/*| X X . . . . . , . . . . . . X X |*/ 0xC0, 0x03,
/*| X X . . . . . , . . . . . . X X |*/ 0xC0, 0x03,
/*| . X X . . . . , . . . . . X X . |*/ 0x60, 0x06,
/*| . . X X . . . , . . . . X X . . |*/ 0x30, 0x0C,
/*| . . . X X X X X X X X X X . . . |*/ 0x1F, 0xF8,
/*| . . . . . X X X X X X . . . . . |*/ 0x07, 0xE0,
// 06 Skip left
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X . . . . . , . . . . . X . . |*/ 0xC0, 0x04,
/*| X X . . . . . , . . . X X X . . |*/ 0xC0, 0x1C,
/*| X X . . . . . , . X X X X X . . |*/ 0xC0, 0x7C,
/*| X X . . . . . X X X X X X X . . |*/ 0xC1, 0xFC,
/*| X X . . . X X X X X X X X X . . |*/ 0xC7, 0xFC,
/*| X X X X X X X X X X X X X X . . |*/ 0xFF, 0xFC,
/*| X X . . . X X X X X X X X X . . |*/ 0xC7, 0xFC,
/*| X X . . . . . X X X X X X X . . |*/ 0xC1, 0xFC,
/*| X X . . . . . , . X X X X X . . |*/ 0xC0, 0x7C,
/*| X X . . . . . , . . . X X X . . |*/ 0xC0, 0x1C,
/*| X X . . . . . , . . . . . X . . |*/ 0xC0, 0x04,
// 07 Rewind
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . X X . . . . . . X X |*/ 0x03, 0x03,
/*| . . . . . X X X . . . . . X X X |*/ 0x07, 0x07,
/*| . . . . X X X X . . . . X X X X |*/ 0x0F, 0x0F,
/*| . . . X X X X X . . . X X X X X |*/ 0x1F, 0x1F,
/*| . . X X X X X X . . X X X X X X |*/ 0x3F, 0x3F,
/*| . X X X X X X X . X X X X X X X |*/ 0x7F, 0x7F,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| . X X X X X X X . X X X X X X X |*/ 0x7F, 0x7F,
/*| . . X X X X X X . . X X X X X X |*/ 0x3F, 0x3F,
/*| . . . X X X X X . . . X X X X X |*/ 0x1F, 0x1F,
/*| . . . . X X X X . . . . X X X X |*/ 0x0F, 0x0F,
/*| . . . . . X X X . . . . . X X X |*/ 0x07, 0x07,
/*| . . . . . . X X . . . . . . X X |*/ 0x03, 0x03,
// 08 Play
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X . . . . . . , . . . . . . . . |*/ 0x80, 0x00,
/*| X X X . . . . , . . . . . . . . |*/ 0xE0, 0x00,
/*| X X X X X . . , . . . . . . . . |*/ 0xF8, 0x00,
/*| X X X X X X X , . . . . . . . . |*/ 0xFE, 0x00,
/*| X X X X X X X X X . . . . . . . |*/ 0xFF, 0x80,
/*| X X X X X X X X X X X . . . . . |*/ 0xFF, 0xE0,
/*| X X X X X X X X X X X X X . . . |*/ 0xFF, 0xF8,
/*| X X X X X X X X X X X . . . . . |*/ 0xFF, 0xE0,
/*| X X X X X X X X X . . . . . . . |*/ 0xFF, 0x80,
/*| X X X X X X X , . . . . . . . . |*/ 0xFE, 0x00,
/*| X X X X X . . , . . . . . . . . |*/ 0xF8, 0x00,
/*| X X X . . . . , . . . . . . . . |*/ 0xE0, 0x00,
/*| X . . . . . . , . . . . . . . . |*/ 0x80, 0x00,
// 09 ff
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X . . . . . , X X . . . . . . |*/ 0xC0, 0xC0,
/*| X X X . . . . , X X X . . . . . |*/ 0xE0, 0xE0,
/*| X X X X . . . , X X X X . . . . |*/ 0xF0, 0xF0,
/*| X X X X X . . , X X X X X . . . |*/ 0xF8, 0xF8,
/*| X X X X X X . , X X X X X X . . |*/ 0xFC, 0xFC,
/*| X X X X X X X , X X X X X X X . |*/ 0xFE, 0xFE,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X X X X X X X , X X X X X X X . |*/ 0xFE, 0xFE,
/*| X X X X X X . , X X X X X X . . |*/ 0xFC, 0xFC,
/*| X X X X X . . , X X X X X . . . |*/ 0xF8, 0xF8,
/*| X X X X . . . , X X X X . . . . |*/ 0xF0, 0xF0,
/*| X X X . . . . , X X X . . . . . |*/ 0xE0, 0xE0,
/*| X X . . . . . , X X . . . . . . |*/ 0xC0, 0xC0,
// 10 Skip Right
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . X . . . . , . . . . . . X X |*/ 0x20, 0x03,
/*| . . X X X . . , . . . . . . X X |*/ 0x38, 0x03,
/*| . . X X X X X , . . . . . . X X |*/ 0x3E, 0x03,
/*| . . X X X X X X X . . . . . X X |*/ 0x3F, 0x83,
/*| . . X X X X X X X X X . . . X X |*/ 0x3F, 0xE3,
/*| . . X X X X X X X X X X X X X X |*/ 0x3F, 0xFF,
/*| . . X X X X X X X X X . . . X X |*/ 0x3F, 0xE3,
/*| . . X X X X X X X . . . . . X X |*/ 0x3F, 0x83,
/*| . . X X X X X , . . . . . . X X |*/ 0x3E, 0x03,
/*| . . X X X . . , . . . . . . X X |*/ 0x38, 0x03,
/*| . . X . . . . , . . . . . . X X |*/ 0x20, 0x03,
// 11 pause
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
/*| . . . X X X . , X X X . . . . . |*/ 0x1C, 0xE0,
// 12 Stop
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
/*| . . X X X X X X X X X X . . . . |*/ 0x3F, 0xF0,
// 13 ch up
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X . . . . . . . . |*/ 0x01, 0x00,
/*| . . . . . . X X X . . . . . . . |*/ 0x03, 0x80,
/*| . . . . . X X X X X . . . . . . |*/ 0x07, 0xC0,
/*| . . . . X X X X X X X . . . . . |*/ 0x0F, 0xE0,
/*| . . . X X X X X X X X X . . . . |*/ 0x1F, 0xF0,
/*| . . X X X X X X X X X X X . . . |*/ 0x3F, 0xF8,
/*| . X X X X X X X X X X X X X . . |*/ 0x7F, 0xFC,
/*| X X X X X X X X X X X X X X X . |*/ 0xFF, 0xFE,
// 14 ch down
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X X X X X X X X X X X X X X . |*/ 0xFF, 0xFE,
/*| . X X X X X X X X X X X X X . . |*/ 0x7F, 0xFC,
/*| . . X X X X X X X X X X X . . . |*/ 0x3F, 0xF8,
/*| . . . X X X X X X X X X . . . . |*/ 0x1F, 0xF0,
/*| . . . . X X X X X X X . . . . . |*/ 0x0F, 0xE0,
/*| . . . . . X X X X X . . . . . . |*/ 0x07, 0xC0,
/*| . . . . . . X X X . . . . . . . |*/ 0x03, 0x80,
/*| . . . . . . . X . . . . . . . . |*/ 0x01, 0x00,
// 15 Page up
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xC0,
/*| . . . . . X X , . X X . . . . . |*/ 0x06, 0x60,
/*| . . . . X X . , . . X X . . . . |*/ 0x0C, 0x30,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . X X . . . , . . . . X X . . |*/ 0x30, 0x0C,
/*| . X X . . . . X X . . . . X X . |*/ 0x61, 0x86,
/*| X X . . . . X X X X . . . . X X |*/ 0xC3, 0xC3,
/*| . . . . . X X , . X X . . . . . |*/ 0x06, 0x60,
/*| . . . . X X . , . . X X . . . . |*/ 0x0C, 0x30,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . X X . . . , . . . . X X . . |*/ 0x30, 0x0C,
/*| . X X . . . . , . . . . . X X . |*/ 0x60, 0x06,
/*| X X . . . . . , . . . . . . X X |*/ 0xC0, 0x03,
// 16 Page down
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X . . . . . , . . . . . . X X |*/ 0xC0, 0x03,
/*| . X X . . . . , . . . . . X X . |*/ 0x60, 0x06,
/*| . . X X . . . , . . . . X X . . |*/ 0x30, 0x0C,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . . . X X . , . . X X . . . . |*/ 0x0C, 0x30,
/*| . . . . . X X , . X X . . . . . |*/ 0x06, 0x60,
/*| X X . . . . X X X X . . . . X X |*/ 0xC3, 0xC3,
/*| . X X . . . . X X . . . . X X . |*/ 0x61, 0x86,
/*| . . X X . . . , . . . . X X . . |*/ 0x30, 0x0C,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . . . X X . , . . X X . . . . |*/ 0x0C, 0x30,
/*| . . . . . X X , . X X . . . . . |*/ 0x06, 0x60,
/*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xC0,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
// 17 Bluetooth
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X X X . . . . . . |*/ 0x01, 0xC0,
/*| . . . . . . . X X X X . . . . . |*/ 0x01, 0xE0,
/*| . . . . . . . X X . X X . . . . |*/ 0x01, 0xB0,
/*| . . . . . . . X X . . X X . . . |*/ 0x01, 0x98,
/*| . . X X . . . X X . . . X X . . |*/ 0x31, 0x8C,
/*| . . . X X . . X X . . X X . . . |*/ 0x19, 0x98,
/*| . . . . X X . X X . X X . . . . |*/ 0x0D, 0xB0,
/*| . . . . . X X X X X X . . . . . |*/ 0x07, 0xE0,
/*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xC0,
/*| . . . . . X X X X X X . . . . . |*/ 0x07, 0xE0,
/*| . . . . X X . X X . X X . . . . |*/ 0x0D, 0xB0,
/*| . . . X X . . X X . . X X . . . |*/ 0x19, 0x98,
/*| . . X X . . . X X . . . X X . . |*/ 0x31, 0x8C,
/*| . . . . . . . X X . . X X . . . |*/ 0x01, 0x98,
/*| . . . . . . . X X . X X . . . . |*/ 0x01, 0xB0,
/*| . . . . . . . X X X X . . . . . |*/ 0x01, 0xE0,
/*| . . . . . . . X X X . . . . . . |*/ 0x01, 0xC0,
// 18 Up arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xC0,
/*| . . . . . X X X X X X . . . . . |*/ 0x07, 0xE0,
/*| . . . . X X . X X . X X . . . . |*/ 0x0D, 0xB0,
/*| . . . X X . . X X . . X X . . . |*/ 0x19, 0x98,
/*| . . X X . . . X X . . . X X . . |*/ 0x31, 0x8C,
/*| . X X . . . . X X . . . . X X . |*/ 0x61, 0x86,
/*| X X . . . . . X X . . . . . X X |*/ 0xC1, 0x83,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
// 19 Down arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| X X . . . . . X X . . . . . X X |*/ 0xC1, 0x83,
/*| . X X . . . . X X . . . . X X . |*/ 0x61, 0x86,
/*| . . X X . . . X X . . . X X . . |*/ 0x31, 0x8C,
/*| . . . X X . . X X . . X X . . . |*/ 0x19, 0x98,
/*| . . . . X X . X X . X X . . . . |*/ 0x0D, 0xB0,
/*| . . . . . X X X X X X . . . . . |*/ 0x07, 0xE0,
/*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xC0,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
// 20 Left arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . X X . . . . . . . . |*/ 0x03, 0x00,
/*| . . . . . X X , . . . . . . . . |*/ 0x06, 0x00,
/*| . . . . X X . , . . . . . . . . |*/ 0x0C, 0x00,
/*| . . . X X . . , . . . . . . . . |*/ 0x18, 0x00,
/*| . . X X . . . , . . . . . . . . |*/ 0x30, 0x00,
/*| . X X . . . . , . . . . . . . . |*/ 0x60, 0x00,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| . X X . . . . , . . . . . . . . |*/ 0x60, 0x00,
/*| . . X X . . . , . . . . . . . . |*/ 0x30, 0x00,
/*| . . . X X . . , . . . . . . . . |*/ 0x18, 0x00,
/*| . . . . X X . , . . . . . . . . |*/ 0x0C, 0x00,
/*| . . . . . X X , . . . . . . . . |*/ 0x06, 0x00,
/*| . . . . . . X X . . . . . . . . |*/ 0x03, 0x00,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
// 21 Right arrow
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
/*| . . . . . . . , X X . . . . . . |*/ 0x00, 0xC0,
/*| . . . . . . . , . X X . . . . . |*/ 0x00, 0x60,
/*| . . . . . . . , . . X X . . . . |*/ 0x00, 0x30,
/*| . . . . . . . , . . . X X . . . |*/ 0x00, 0x18,
/*| . . . . . . . , . . . . X X . . |*/ 0x00, 0x0C,
/*| . . . . . . . , . . . . . X X . |*/ 0x00, 0x06,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| . . . . . . . , . . . . . X X . |*/ 0x00, 0x06,
/*| . . . . . . . , . . . . X X . . |*/ 0x00, 0x0C,
/*| . . . . . . . , . . . X X . . . |*/ 0x00, 0x18,
/*| . . . . . . . , . . X X . . . . |*/ 0x00, 0x30,
/*| . . . . . . . , . X X . . . . . |*/ 0x00, 0x60,
/*| . . . . . . . , X X . . . . . . |*/ 0x00, 0xC0,
/*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
// 22 Return
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . X . . . , . . . . . . X X |*/ 0x10, 0x03,
/*| . . X X . . . , . . . . . . X X |*/ 0x30, 0x03,
/*| . X X X . . . , . . . . . . X X |*/ 0x70, 0x03,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| . X X X . . . , . . . . . . . . |*/ 0x70, 0x00,
/*| . . X X . . . , . . . . . . . . |*/ 0x30, 0x00,
/*| . . . X . . . , . . . . . . . . |*/ 0x10, 0x00,
// 23 Backspace
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . , X X X X X X X X |*/ 0x00, 0xFF,
/*| . . . . . . . X X X X X X X X X |*/ 0x01, 0xFF,
/*| . . . . . . X X . . . . . . X X |*/ 0x03, 0x03,
/*| . . . . . X X , . . . . . . X X |*/ 0x06, 0x03,
/*| . . . . X X . , . . . . . . X X |*/ 0x0C, 0x03,
/*| . . . X X . . , . . . . . . X X |*/ 0x18, 0x03,
/*| . . X X . . X X . . . X X . X X |*/ 0x33, 0x1B,
/*| . X X . . . . X X . X X . . X X |*/ 0x61, 0xB3,
/*| X X . . . . . , X X X . . . X X |*/ 0xC0, 0xE3,
/*| . X X . . . . X X . X X . . X X |*/ 0x61, 0xB3,
/*| . . X X . . X X . . . X X . X X |*/ 0x33, 0x1B,
/*| . . . X X . . , . . . . . . X X |*/ 0x18, 0x03,
/*| . . . . X X . , . . . . . . X X |*/ 0x0C, 0x03,
/*| . . . . . X X , . . . . . . X X |*/ 0x06, 0x03,
/*| . . . . . . X X . . . . . . X X |*/ 0x03, 0x03,
/*| . . . . . . . X X X X X X X X X |*/ 0x01, 0xFF,
/*| . . . . . . . , X X X X X X X X |*/ 0x00, 0xFF,
// 24 Delete
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . X X X . . . , . . . . . X . . |*/ 0x70, 0x04,
/*| . X X X X X . , . . . X X . . . |*/ 0x7C, 0x18,
/*| . . . X X X X , . . X X . . . . |*/ 0x1E, 0x30,
/*| . . . . . X X X . X X . . . . . |*/ 0x07, 0x60,
/*| . . . . . . . X X X . . . . . . |*/ 0x01, 0xC0,
/*| . . . . . . . X X X . . . . . . |*/ 0x01, 0xC0,
/*| . . . . . . X X . X X . . . . . |*/ 0x03, 0x60,
/*| . . . . X X X , . . X X . . . . |*/ 0x0E, 0x30,
/*| . . . X X X . , . . . X X . . . |*/ 0x1C, 0x18,
/*| . . X X X . . , . . . . X X . . |*/ 0x38, 0x0C,
/*| . . X X X . . , . . . . . . X . |*/ 0x38, 0x02,
// 25 Tick mark
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . . . , . . . . . . . X |*/ 0x00, 0x01,
/*| . . . . . . . , . . . . . X X . |*/ 0x00, 0x06,
/*| . . . . . . . , . . . . X X . . |*/ 0x00, 0x0C,
/*| . . . . . . . , . . . X X . . . |*/ 0x00, 0x18,
/*| . . . . . . . , . . X X . . . . |*/ 0x00, 0x30,
/*| . . . . . . . , . X X . . . . . |*/ 0x00, 0x60,
/*| X X X . . . . , X X . . . . . . |*/ 0xE0, 0xC0,
/*| . X X X . . X X X . . . . . . . |*/ 0x73, 0x80,
/*| . . X X X X X X . . . . . . . . |*/ 0x3F, 0x00,
/*| . . . X X X X , . . . . . . . . |*/ 0x1E, 0x00,
/*| . . . . X X X , . . . . . . . . |*/ 0x0E, 0x00,
// 26 Double less than
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| . . . . . X X , . . . . . X X . |*/ 0x06, 0x06,
/*| . . . . X X . , . . . . X X . . |*/ 0x0C, 0x0C,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . X X . . . , . . X X . . . . |*/ 0x30, 0x30,
/*| . X X . . . . , . X X . . . . . |*/ 0x60, 0x60,
/*| X X . . . . . , X X . . . . . . |*/ 0xC0, 0xC0,
/*| . X X . . . . , . X X . . . . . |*/ 0x60, 0x60,
/*| . . X X . . . , . . X X . . . . |*/ 0x30, 0x30,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . . . X X . , . . . . X X . . |*/ 0x0C, 0x0C,
/*| . . . . . X X , . . . . . X X . |*/ 0x06, 0x06,
// 27 Double greater than
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X . . . . . , X X . . . . . . |*/ 0xC0, 0xC0,
/*| . X X . . . . , . X X . . . . . |*/ 0x60, 0x60,
/*| . . X X . . . , . . X X . . . . |*/ 0x30, 0x30,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . . . X X . , . . . . X X . . |*/ 0x0C, 0x0C,
/*| . . . . . X X , . . . . . X X . |*/ 0x06, 0x06,
/*| . . . . X X . , . . . . X X . . |*/ 0x0C, 0x0C,
/*| . . . X X . . , . . . X X . . . |*/ 0x18, 0x18,
/*| . . X X . . . , . . X X . . . . |*/ 0x30, 0x30,
/*| . X X . . . . , . X X . . . . . |*/ 0x60, 0x60,
/*| X X . . . . . , X X . . . . . . |*/ 0xC0, 0xC0,
// 28 Hamburger
/*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| . . . . . . . , . . . . . . . . |*/ 0x00, 0x00,
/*| . . . . . . . , . . . . . . . . |*/ 0x00, 0x00,
/*| . . . . . . . , . . . . . . . . |*/ 0x00, 0x00,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| . . . . . . . , . . . . . . . . |*/ 0x00, 0x00,
/*| . . . . . . . , . . . . . . . . |*/ 0x00, 0x00,
/*| . . . . . . . , . . . . . . . . |*/ 0x00, 0x00,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
/*| X X X X X X X X X X X X X X X X |*/ 0xFF, 0xFF,
0x00};

const GFXglyph UISymbolSans12pt7bGlyphs[] PROGMEM = {
  {    0, 16, 21, 19,  3, -19 }, // 00 Test square
  {   42, 16, 15, 19,  3, -18 }, // 01 Upper left arrow
  {   72, 16, 15, 19,  3, -18 }, // 02 Upper right arrow
  {  102, 16, 15, 19,  3, -18 }, //  03 Lower left arrow
  {  132, 16, 15, 19,  3, -18 }, //  04 Lower right arrow
  {  162, 16, 16, 19,  3, -19 }, //  05 Power symbol
  {  194, 16, 11, 17,  3, -14 }, // 06 Skip left
  {  216, 16, 13, 19,  3, -16 }, // 07 Rewind
  {  242, 16, 13, 16,  3, -16 }, // 08 Play
  {  268, 16, 13, 19,  3, -16 }, // 09 ff
  {  294, 16, 11, 19,  3, -14 }, // 10 Skip Right
  {  316, 16, 10, 14,  3, -13 }, // 11 pause
  {  336, 16, 10, 15,  3, -13 }, // 12 Stop
  {  356, 16,  8, 18,  3, -11 }, // 13 ch up
  {  372, 16,  8, 18,  3, -11 }, // 14 ch down
  {  388, 16, 14, 19,  3, -17 }, // 15 Page up
  {  416, 16, 14, 19,  3, -17 }, // 16 Page down
  {  444, 16, 17, 17,  3, -19 }, // 17 Bluetooth
  {  478, 16, 15, 19,  3, -18 }, // 18 Up arrow
  {  508, 16, 15, 19,  3, -18 }, // 19 Down arrow
  {  538, 16, 16, 19,  3, -19 }, // 20 Left arrow
  {  570, 16, 16, 19,  3, -19 }, // 21 Right arrow
  {  602, 16,  8, 19,  3, -11 }, // 22 Return
  {  618, 16, 17, 19,  3, -19 }, // 23 Backspace
  {  652, 16, 11, 18,  3, -14 }, // 24 Delete
  {  674, 16, 11, 19,  3, -14 }, // 25 Tick mark
  {  696, 16, 11, 18,  3, -14 }, // 26 Double less than
  {  718, 16, 11, 18,  3, -14 }, // 27 Double greater than
  {  740, 16, 12, 19,  3, -15 }, // 28 Hamburger
  {    0, 16, 21, 19,  3, -19 }, // 29
  {    0, 16, 21, 19,  3, -19 }, // 30
  {    0, 16, 21, 19,  3, -19 }}; // 31
const GFXfont UISymbolSans12pt7b PROGMEM = {
  (uint8_t *)UISymbolSans12pt7bBitmaps,
  (GFXglyph*)UISymbolSans12pt7bGlyphs,
  0, 31, 31};
