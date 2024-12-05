/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:/Users/luoyunxin/SquareLine/assets/OPPOSans-Regular.ttf -o C:/Users/luoyunxin/SquareLine/assets\ui_font_OPPOSansRegular20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_OPPOSANSREGULAR20
#define UI_FONT_OPPOSANSREGULAR20 1
#endif

#if UI_FONT_OPPOSANSREGULAR20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xfc, 0x3,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x6, 0x30, 0x21, 0x1, 0x8, 0x18, 0xc0, 0xc6,
    0x3f, 0xfc, 0x21, 0x1, 0x18, 0x18, 0xc0, 0xc6,
    0x3f, 0xfc, 0x21, 0x3, 0x18, 0x18, 0xc0, 0xc6,
    0x6, 0x20,

    /* U+0024 "$" */
    0x6, 0x0, 0xc0, 0x7e, 0x3f, 0xee, 0x6d, 0x8c,
    0xf1, 0x86, 0x30, 0x76, 0x7, 0xf0, 0x3f, 0x3,
    0x70, 0x67, 0x8c, 0xf1, 0x9f, 0x37, 0x7f, 0xc3,
    0xf0, 0x18, 0x3, 0x0,

    /* U+0025 "%" */
    0x38, 0x18, 0x6c, 0x10, 0xc6, 0x30, 0xc6, 0x20,
    0xc6, 0x60, 0xc6, 0x40, 0x6c, 0xc0, 0x38, 0x80,
    0x1, 0x9c, 0x3, 0x36, 0x2, 0x63, 0x6, 0x63,
    0x4, 0x63, 0xc, 0x63, 0x8, 0x36, 0x18, 0x1c,

    /* U+0026 "&" */
    0xf, 0x0, 0x66, 0x3, 0xc, 0xc, 0x30, 0x30,
    0xc0, 0x66, 0x1, 0xf0, 0x7, 0x80, 0x7e, 0x1,
    0x8c, 0x6c, 0x19, 0xb0, 0x76, 0xc0, 0xf3, 0x1,
    0xc6, 0xf, 0x87, 0xe6,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x19, 0xcc, 0xc6, 0x33, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x8c, 0x61, 0x8c, 0x30,

    /* U+0029 ")" */
    0xc7, 0x18, 0xe3, 0x18, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0xe6, 0x33, 0x19, 0x80,

    /* U+002A "*" */
    0x18, 0x18, 0xdb, 0x7e, 0x3c, 0x24, 0x66,

    /* U+002B "+" */
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xff, 0xc3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+002C "," */
    0xe5, 0xe0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x1, 0x81, 0x80, 0xc0, 0xc0, 0x60, 0x20, 0x30,
    0x18, 0x18, 0xc, 0xc, 0x6, 0x2, 0x3, 0x1,
    0x81, 0x80,

    /* U+0030 "0" */
    0x1f, 0x6, 0x31, 0x83, 0x30, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x36, 0xc, 0xc1, 0x8c, 0x60, 0xf8,

    /* U+0031 "1" */
    0xc, 0x73, 0xff, 0xcc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc3,

    /* U+0032 "2" */
    0x1f, 0x18, 0x66, 0xf, 0x3, 0x0, 0xc0, 0x30,
    0x1c, 0xe, 0xf, 0x87, 0xc7, 0xc1, 0xc0, 0xe0,
    0x30, 0xc, 0x3, 0xff,

    /* U+0033 "3" */
    0x7f, 0xc0, 0x38, 0x6, 0x1, 0x80, 0x60, 0x1c,
    0x7, 0xe0, 0x6, 0x0, 0x60, 0xc, 0x1, 0xa0,
    0x36, 0x6, 0xc1, 0x8c, 0x70, 0xf8,

    /* U+0034 "4" */
    0x3, 0x0, 0x60, 0x6, 0x0, 0xe0, 0xc, 0x0,
    0xcc, 0x18, 0xc3, 0x8c, 0x30, 0xc7, 0xc, 0x60,
    0xcf, 0xff, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc,

    /* U+0035 "5" */
    0x3f, 0xc4, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0,
    0x1f, 0xe3, 0x86, 0x20, 0x60, 0xc, 0x1, 0x80,
    0x36, 0x6, 0xc1, 0x8c, 0x70, 0xf8,

    /* U+0036 "6" */
    0x1f, 0x6, 0x19, 0x83, 0x30, 0x2c, 0x1, 0x80,
    0x33, 0xe7, 0x86, 0xe0, 0xfc, 0xf, 0x1, 0xe0,
    0x36, 0x6, 0xc1, 0x8c, 0x70, 0xf8,

    /* U+0037 "7" */
    0xff, 0xc0, 0x70, 0x18, 0xc, 0x7, 0x1, 0x80,
    0xc0, 0x30, 0xc, 0x6, 0x1, 0x80, 0x60, 0x30,
    0xc, 0x3, 0x0, 0xc0,

    /* U+0038 "8" */
    0x1f, 0x6, 0x31, 0x83, 0x30, 0x66, 0xc, 0xc1,
    0x8c, 0x60, 0xf8, 0x71, 0xc8, 0x1b, 0x1, 0xe0,
    0x3c, 0x7, 0x81, 0xdc, 0x30, 0xf8,

    /* U+0039 "9" */
    0x1f, 0xe, 0x31, 0x83, 0x60, 0x6c, 0x7, 0x80,
    0xf0, 0x3f, 0x7, 0x61, 0xe7, 0xcc, 0x1, 0x80,
    0x34, 0xd, 0xc1, 0x9c, 0x60, 0xf8,

    /* U+003A ":" */
    0xc0, 0x0, 0xc,

    /* U+003B ";" */
    0xe0, 0x0, 0x0, 0x3, 0x97, 0x80,

    /* U+003C "<" */
    0x0, 0xc0, 0xf1, 0xf3, 0xe0, 0xc0, 0x3e, 0x1,
    0xf0, 0xf, 0x0, 0xc0,

    /* U+003D "=" */
    0xff, 0xc0, 0x0, 0x0, 0x0, 0xff, 0xc0,

    /* U+003E ">" */
    0xc0, 0x3c, 0x3, 0xe0, 0x1f, 0x0, 0xc1, 0xf3,
    0xe3, 0xc0, 0xc0, 0x0,

    /* U+003F "?" */
    0x1f, 0x18, 0x6c, 0xf, 0x3, 0x0, 0xc0, 0x30,
    0x1c, 0x1e, 0xf, 0x7, 0x1, 0x80, 0x60, 0x18,
    0x0, 0x0, 0x0, 0x60,

    /* U+0040 "@" */
    0x3, 0xf8, 0x1, 0xc1, 0xc0, 0x60, 0xc, 0x18,
    0x0, 0xc6, 0x0, 0xc, 0xc1, 0xe9, 0x98, 0x67,
    0x1e, 0x18, 0x63, 0xc3, 0xc, 0x78, 0xc1, 0x8f,
    0x18, 0x21, 0xe3, 0xc, 0x3c, 0x61, 0x87, 0x8c,
    0x31, 0x98, 0xca, 0x33, 0x1e, 0x38, 0x30, 0x0,
    0x3, 0x0, 0x0, 0x38, 0x18, 0x1, 0xfe, 0x0,

    /* U+0041 "A" */
    0x7, 0x80, 0x1e, 0x0, 0x78, 0x3, 0x30, 0xc,
    0xc0, 0x33, 0x1, 0x86, 0x6, 0x18, 0x18, 0x60,
    0xc0, 0xc3, 0xff, 0xc, 0x6, 0x60, 0x19, 0x80,
    0x66, 0x0, 0xf0, 0x3,

    /* U+0042 "B" */
    0xff, 0x8c, 0xc, 0xc0, 0x6c, 0x6, 0xc0, 0x6c,
    0x6, 0xc0, 0xcf, 0xf8, 0xc0, 0xec, 0x7, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x6f, 0xfc,

    /* U+0043 "C" */
    0xf, 0xc0, 0xc3, 0x8c, 0xc, 0xc0, 0x34, 0x1,
    0xe0, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x80, 0x36, 0x1, 0x98, 0x18, 0x61,
    0xc1, 0xf8,

    /* U+0044 "D" */
    0xff, 0x6, 0x6, 0x30, 0x19, 0x80, 0x6c, 0x3,
    0x60, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x7, 0x80, 0x6c, 0x3, 0x60, 0x33, 0x3,
    0x1f, 0xf0,

    /* U+0045 "E" */
    0xff, 0xf8, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x7, 0xfe, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x7, 0xff,

    /* U+0046 "F" */
    0xff, 0xf8, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xff, 0xd8, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0,

    /* U+0047 "G" */
    0xf, 0xc0, 0x61, 0xc3, 0x1, 0x98, 0x6, 0x40,
    0xb, 0x0, 0xc, 0x0, 0x30, 0x0, 0xc1, 0xff,
    0x0, 0x3c, 0x0, 0xd0, 0x3, 0x60, 0x1c, 0xc0,
    0xf3, 0x86, 0xc3, 0xf3,

    /* U+0048 "H" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3f, 0xff, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x1e, 0xd,
    0x8c, 0x7c,

    /* U+004B "K" */
    0xc0, 0xec, 0xc, 0xc1, 0x8c, 0x30, 0xc6, 0xc,
    0xc0, 0xd8, 0xf, 0x0, 0xf8, 0xd, 0xc0, 0xce,
    0xc, 0x70, 0xc3, 0x8c, 0x1c, 0xc0, 0xcc, 0x6,

    /* U+004C "L" */
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0xc, 0x3, 0xff,

    /* U+004D "M" */
    0xf0, 0xf, 0xf0, 0xf, 0xf0, 0xf, 0xd8, 0x1b,
    0xd8, 0x1b, 0xd8, 0x1b, 0xcc, 0x1b, 0xcc, 0x33,
    0xcc, 0x33, 0xce, 0x33, 0xc6, 0x63, 0xc6, 0x63,
    0xc6, 0x63, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+004E "N" */
    0xf0, 0x1f, 0x80, 0xfe, 0x7, 0xb0, 0x3c, 0xc1,
    0xe6, 0xf, 0x18, 0x78, 0xc3, 0xc3, 0x1e, 0x18,
    0xf0, 0x67, 0x83, 0xbc, 0xd, 0xe0, 0x7f, 0x1,
    0xf8, 0xf,

    /* U+004F "O" */
    0xf, 0xc0, 0x61, 0x83, 0x3, 0x18, 0x6, 0x40,
    0x1b, 0x0, 0x3c, 0x0, 0xf0, 0x3, 0xc0, 0xf,
    0x0, 0x3c, 0x0, 0xd0, 0x6, 0x60, 0x18, 0xc0,
    0xc1, 0x86, 0x3, 0xf0,

    /* U+0050 "P" */
    0xff, 0x18, 0x1b, 0x3, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x6, 0xc0, 0xdf, 0xe3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0,

    /* U+0051 "Q" */
    0xf, 0xc0, 0x61, 0x83, 0x3, 0x18, 0x6, 0x40,
    0x1b, 0x0, 0x3c, 0x0, 0xf0, 0x3, 0xc0, 0xf,
    0x0, 0x3c, 0x0, 0xd0, 0x67, 0x60, 0xd8, 0xc3,
    0xe1, 0x87, 0x3, 0xfe, 0x0, 0xc,

    /* U+0052 "R" */
    0xff, 0xcc, 0x6, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x6, 0xff, 0x8c, 0xc, 0xc0,
    0x6c, 0x6, 0xc0, 0x6c, 0x3, 0xc0, 0x3c, 0x3,

    /* U+0053 "S" */
    0xf, 0xc1, 0x83, 0x8, 0xc, 0xc0, 0x36, 0x0,
    0x38, 0x1, 0xfc, 0x7, 0xfc, 0x1f, 0xf0, 0x7,
    0xc0, 0xe, 0x40, 0x36, 0x1, 0xb8, 0x8, 0xe0,
    0xc1, 0xf8,

    /* U+0054 "T" */
    0xff, 0xf0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60,

    /* U+0055 "U" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x36, 0x6, 0x30, 0xc1, 0xf8,

    /* U+0056 "V" */
    0xc0, 0xd, 0x80, 0x76, 0x1, 0x98, 0x6, 0x30,
    0x38, 0xc0, 0xc3, 0x3, 0x6, 0x18, 0x18, 0x60,
    0x71, 0x80, 0xcc, 0x3, 0x30, 0xe, 0xc0, 0x1e,
    0x0, 0x78, 0x0, 0xe0,

    /* U+0057 "W" */
    0xc0, 0xe0, 0x78, 0x3c, 0x1b, 0x7, 0x83, 0x60,
    0xd0, 0x6e, 0x1b, 0xc, 0xc2, 0x61, 0x98, 0xcc,
    0x63, 0x19, 0x8c, 0x63, 0x11, 0x86, 0x63, 0x30,
    0xd8, 0x66, 0x1b, 0xd, 0x83, 0x61, 0xb0, 0x6c,
    0x1e, 0x7, 0x3, 0xc0, 0xe0, 0x78,

    /* U+0058 "X" */
    0x60, 0x3b, 0x81, 0x8c, 0x18, 0x31, 0xc1, 0xcc,
    0x6, 0xc0, 0x1e, 0x0, 0xe0, 0x7, 0x0, 0x6c,
    0x7, 0x70, 0x31, 0x83, 0x6, 0x38, 0x39, 0x80,
    0xd8, 0x3,

    /* U+0059 "Y" */
    0xc0, 0x37, 0x3, 0x98, 0x18, 0x61, 0x83, 0xc,
    0xc, 0xc0, 0x7e, 0x1, 0xe0, 0x6, 0x0, 0x30,
    0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18,
    0x0, 0xc0,

    /* U+005A "Z" */
    0xff, 0xe0, 0x1c, 0x3, 0x0, 0xc0, 0x38, 0x6,
    0x1, 0xc0, 0x30, 0xc, 0x3, 0x80, 0x60, 0x18,
    0x3, 0x0, 0xc0, 0x38, 0x7, 0xff,

    /* U+005B "[" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xc6, 0x31, 0xf0,

    /* U+005C "\\" */
    0xc0, 0x30, 0x18, 0xc, 0x3, 0x1, 0x80, 0x60,
    0x30, 0xc, 0x6, 0x1, 0x0, 0xc0, 0x60, 0x18,
    0xc, 0x3,

    /* U+005D "]" */
    0xf8, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0x18, 0xc7, 0xf0,

    /* U+005E "^" */
    0xc, 0x3, 0x1, 0xe0, 0x58, 0x33, 0x8, 0xc6,
    0x19, 0x86, 0xc0, 0xb0, 0x30,

    /* U+005F "_" */
    0xff, 0xf8,

    /* U+0060 "`" */
    0xc6, 0x60,

    /* U+0061 "a" */
    0x3e, 0x31, 0xb0, 0x60, 0x30, 0xfb, 0xff, 0xc7,
    0x83, 0xc1, 0xe1, 0xdf, 0x60,

    /* U+0062 "b" */
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x37, 0xcf,
    0x1b, 0x86, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xf8, 0x6f, 0x1b, 0x7c,

    /* U+0063 "c" */
    0x1f, 0x1c, 0x66, 0xf, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x2, 0x60, 0xdc, 0x61, 0xe0,

    /* U+0064 "d" */
    0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xcf, 0xb6,
    0x3d, 0x87, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xd8, 0x76, 0x3c, 0xfb,

    /* U+0065 "e" */
    0x1e, 0x1c, 0x66, 0x1b, 0x3, 0xc0, 0xff, 0xfc,
    0x3, 0x0, 0x60, 0xd8, 0x61, 0xf0,

    /* U+0066 "f" */
    0x1e, 0x60, 0xc1, 0x83, 0x1f, 0x8c, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,

    /* U+0067 "g" */
    0x3e, 0xd8, 0xf6, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0xd8, 0xf3, 0xec, 0x3, 0x40,
    0xd8, 0x63, 0xe0,

    /* U+0068 "h" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0xf3, 0xcd,
    0xc3, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0x7, 0x83,

    /* U+0069 "i" */
    0xc0, 0x3f, 0xff, 0xff,

    /* U+006A "j" */
    0x30, 0x0, 0x3, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x3e,

    /* U+006B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x1b, 0x19,
    0x98, 0xd8, 0x78, 0x3c, 0x1b, 0xc, 0xc6, 0x33,
    0x1d, 0x87,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xdf, 0x3c, 0xe3, 0xe6, 0xe1, 0xc3, 0xc1, 0x83,
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83,
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83,

    /* U+006E "n" */
    0xde, 0x79, 0xb8, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+006F "o" */
    0x1e, 0x18, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0x98, 0x61, 0xe0,

    /* U+0070 "p" */
    0xdf, 0x3c, 0x6e, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xe1, 0xbc, 0x6d, 0xf3, 0x0, 0xc0,
    0x30, 0xc, 0x0,

    /* U+0071 "q" */
    0x3e, 0xd8, 0xf6, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0xd8, 0xf3, 0xec, 0x3, 0x0,
    0xc0, 0x30, 0xc,

    /* U+0072 "r" */
    0xdf, 0xe3, 0x86, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0073 "s" */
    0x3e, 0x31, 0xb0, 0x78, 0xf, 0xc3, 0xf8, 0x3e,
    0x3, 0xc1, 0xf1, 0x8f, 0x80,

    /* U+0074 "t" */
    0x30, 0xc3, 0xc, 0xfc, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc1, 0xc0,

    /* U+0075 "u" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0xb3, 0xcf, 0x60,

    /* U+0076 "v" */
    0xc0, 0xd8, 0x36, 0x19, 0x86, 0x31, 0x8c, 0xc3,
    0x30, 0x6c, 0x1e, 0x7, 0x80, 0xe0,

    /* U+0077 "w" */
    0x61, 0x86, 0xc7, 0xd, 0x8f, 0x1b, 0x1e, 0x36,
    0x24, 0xc6, 0xc9, 0x8d, 0x9b, 0x1b, 0x36, 0x34,
    0x28, 0x38, 0x70, 0x70, 0xe0,

    /* U+0078 "x" */
    0xc1, 0x98, 0xe3, 0x30, 0xd8, 0x1e, 0x7, 0x1,
    0xe0, 0xd8, 0x73, 0x18, 0x6c, 0x18,

    /* U+0079 "y" */
    0xe0, 0xd8, 0x36, 0x19, 0x86, 0x31, 0x8c, 0xc1,
    0x30, 0x68, 0x1e, 0x3, 0x80, 0xc0, 0x30, 0xc,
    0x6, 0x7, 0x0,

    /* U+007A "z" */
    0xff, 0x7, 0x6, 0xc, 0xc, 0x18, 0x30, 0x30,
    0x60, 0xe0, 0xff,

    /* U+007B "{" */
    0x1e, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x31,
    0x80, 0x81, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60,
    0xc0, 0xf0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xf0, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x10, 0x18, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x30,
    0x67, 0x80,

    /* U+007E "~" */
    0x78, 0x79, 0x8f, 0xf, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 74, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 82, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 115, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 8, .adv_w = 259, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 208, .box_w = 11, .box_h = 20, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 62, .adv_w = 281, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 226, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 60, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 123, .adv_w = 99, .box_w = 5, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 136, .adv_w = 99, .box_w = 5, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 149, .adv_w = 139, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 156, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 169, .adv_w = 65, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 171, .adv_w = 114, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 172, .adv_w = 63, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 141, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 199, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 126, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 188, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 183, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 195, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 185, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 191, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 164, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 195, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 191, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 73, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 73, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 408, .adv_w = 190, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 420, .adv_w = 191, .box_w = 10, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 427, .adv_w = 190, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 439, .adv_w = 160, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 328, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 507, .adv_w = 227, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 215, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 234, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 233, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 202, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 193, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 247, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 236, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 72, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 162, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 203, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 179, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 241, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 246, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 208, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 246, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 911, .adv_w = 222, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 210, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 203, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 985, .adv_w = 230, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1009, .adv_w = 227, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1037, .adv_w = 325, .box_w = 19, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 210, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 207, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 210, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 104, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1162, .adv_w = 141, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1180, .adv_w = 104, .box_w = 5, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1193, .adv_w = 188, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1206, .adv_w = 206, .box_w = 13, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1208, .adv_w = 84, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 1210, .adv_w = 170, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 185, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1243, .adv_w = 167, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1257, .adv_w = 185, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 175, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 106, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1305, .adv_w = 185, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1324, .adv_w = 181, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1342, .adv_w = 64, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1346, .adv_w = 63, .box_w = 4, .box_h = 20, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1356, .adv_w = 158, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1374, .adv_w = 64, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1378, .adv_w = 273, .box_w = 16, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1400, .adv_w = 181, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1413, .adv_w = 179, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1427, .adv_w = 185, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1446, .adv_w = 185, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1465, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1475, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1488, .adv_w = 112, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1500, .adv_w = 179, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1513, .adv_w = 164, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1527, .adv_w = 254, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1548, .adv_w = 153, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1562, .adv_w = 164, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1581, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1592, .adv_w = 116, .box_w = 7, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1610, .adv_w = 109, .box_w = 2, .box_h = 21, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1616, .adv_w = 116, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1634, .adv_w = 183, .box_w = 11, .box_h = 3, .ofs_x = 1, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 2, 3, 0, 0, 0, 4,
    3, 5, 0, 6, 7, 8, 9, 8,
    10, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 11, 20, 20, 0, 21, 7,
    22, 23, 24, 25, 26, 27, 28, 29,
    30, 0, 0, 31, 32, 33, 0, 0,
    27, 34, 27, 35, 36, 37, 31, 38,
    39, 40, 41, 42, 5, 43, 0, 0,
    0, 0, 44, 45, 46, 0, 47, 48,
    49, 44, 0, 50, 51, 0, 44, 44,
    45, 45, 49, 52, 53, 54, 55, 56,
    56, 57, 56, 58, 5, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 3, 0, 0, 4, 5,
    3, 0, 6, 7, 8, 9, 10, 9,
    11, 12, 13, 14, 15, 16, 17, 12,
    18, 19, 20, 21, 21, 8, 22, 0,
    23, 24, 25, 0, 26, 0, 0, 0,
    26, 0, 0, 27, 0, 0, 0, 0,
    26, 0, 26, 0, 28, 29, 30, 31,
    32, 33, 34, 35, 0, 36, 6, 0,
    0, 0, 37, 0, 38, 38, 38, 39,
    40, 0, 41, 42, 0, 0, 43, 43,
    38, 43, 38, 43, 44, 45, 46, 47,
    47, 48, 47, 49, 0, 0, 6, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, -7, 0, -7, -4,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0,
    0, -31, 0, 10, 0, 0, 0, 0,
    0, 0, -31, -7, -45, -4, 7, 0,
    0, 1, 0, 0, 0, 0, -12, -8,
    7, -8, 0, 0, 0, -7, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 4, 0, -14, 0, 15, -4, -4,
    0, 0, 0, 0, 0, -11, -14, -7,
    11, 0, 11, 2, 0, 7, 0, 0,
    -7, -11, 0, 0, 0, 29, -4, 0,
    0, -4, -11, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -31, -4, -45,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, -8, -7, 7, -7, 0, 0, 0,
    -7, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 1, 0, 4, 0, -16,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -26, 4, 0, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 7,
    -14, 7, 0, -35, -7, -35, -21, 4,
    -35, 0, 0, 0, -5, -10, -5, 0,
    13, 0, -1, -19, -11, -24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, -8, -3, 4,
    1, -12, 0, -6, 0, 0, 0, 0,
    -7, 3, -8, 0, -33, 0, -24, -12,
    -15, -33, 0, 0, 0, 1, 0, 1,
    0, 0, 0, 0, -7, 0, -3, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -43, -7, 4, -4, 4,
    -25, -4, 16, -7, 0, 0, 0, 0,
    0, -33, -14, -44, -5, 11, 0, 0,
    0, 0, 0, 0, 0, -29, -35, -2,
    -35, 0, 0, -22, -29, -7, -19, -18,
    -14, -22, 0, 0, 0, 0, 0, -7,
    0, 7, -4, 0, -3, 3, 3, -2,
    -1, 1, 1, -9, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, -7, 0,
    -7, 0, -4, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, -2, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 4, 0, 1, 4, -11, 4, 0,
    3, 3, -3, -17, -1, -4, -4, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 4, -4, 3, 0,
    1, -2, -1, 0, 2, 1, -2, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -21, -11, 0, -6, 0, 0, 0, 4,
    4, 1, -11, 0, 1, 2, 3, -9,
    3, -2, 0, 4, 0, 0, 0, 0,
    0, 0, -21, 0, -15, 0, 0, -21,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, -1, 0, 0, 0,
    1, 0, 2, -4, 0, 2, 1, 0,
    -3, 1, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, -4, 0, 7,
    0, 0, 0, 0, 0, -2, 2, 3,
    2, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 7, -12, 13, 0,
    -14, -21, -25, -31, -3, 4, 2, 4,
    -22, -5, 14, -4, 4, 0, -10, 0,
    0, -28, 0, -37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -23, -25, -7,
    -25, 0, 0, -14, -18, 0, -14, -11,
    -7, -14, 0, 0, 0, -4, 0, -4,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -2, 1, -8, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, -11,
    0, 0, 0, 0, -22, 0, 0, 0,
    -3, 7, -3, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 4, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -22, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, -7,
    -4, -31, 0, 0, 0, -31, 0, 7,
    -7, 0, -7, -14, 0, 0, -7, 0,
    -7, 0, 0, 4, 0, -22, 0, 0,
    -11, 0, -5, -32, -11, -25, -21, 0,
    -33, 0, 0, 0, -5, -7, -5, 0,
    0, 0, 0, -14, -8, -18, 0, 0,
    0, 0, -4, 0, 4, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, -4, 0, -5, -6,
    -4, -11, 0, 0, 1, 3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, -7, 0,
    0, -6, 4, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, -7, 0, 0, 0, -8, 0, 0,
    0, 0, -7, -7, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, -7, 0, 0, -11,
    -4, 0, -14, 3, -11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -11, 2, -7, 0, -15, 0,
    -7, -6, -12, -17, -15, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, -7, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    -8, 13, 4, 0, -28, 0, -15, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -20, 1, -48, 0,
    1, 0, 0, 0, 0, 0, 0, 0,
    -3, -1, 0, -1, 3, 3, -2, 0,
    2, -3, 1, 0, 0, 0, 0, -7,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, -17, 0, -11, -9, -4, -19, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -3, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, -8, 0, 7,
    -31, 0, 0, -7, 0, 0, -11, 0,
    11, 0, 0, 0, 0, 0, 0, 3,
    -17, -1, -3, 4, -5, 0, 0, 0,
    4, 0, 0, -3, -9, 0, -9, 0,
    0, 0, 0, 0, -8, -19, 0, 0,
    0, 0, -45, 0, 0, 0, -58, 0,
    7, -26, 14, 0, -28, 0, 0, -7,
    0, -7, 0, 0, 4, 0, -33, 0,
    4, -14, 0, -3, -45, -10, -31, -24,
    0, -42, 0, 0, 3, -4, 0, -4,
    0, 0, 0, 0, 0, -4, -21, 0,
    0, -7, 0, 0, 0, -10, 0, 0,
    0, -28, 0, -34, 0, 0, 0, 0,
    -11, 0, 0, 0, 0, 0, 0, 4,
    0, -25, 3, -58, 4, -1, 0, -1,
    -3, -12, -6, 0, 0, -4, -5, 0,
    -5, 0, 3, 0, 0, 0, -3, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -4, -3, 0, -9, -1,
    -5, 0, 0, -12, 0, 0, -1, -9,
    0, -9, 0, 0, 0, 0, 0, -5,
    -4, 0, 0, 0, 0, -4, 0, 4,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, -3, 0, 4, 2, -8,
    0, -4, -4, 0, -11, 0, 0, 0,
    3, 0, 3, 0, 0, 0, 0, -1,
    2, -7, 0, 0, -7, 0, 7, 0,
    -19, 11, 4, 0, -35, -33, -43, -7,
    0, 0, 0, -26, 0, 0, 0, 0,
    -11, 0, 5, 0, -32, -15, -47, -6,
    4, 0, 4, 4, 0, 5, 0, 0,
    -37, -35, 0, -35, 4, 4, -31, -33,
    0, -33, -33, -26, -28, -7, 0, 0,
    0, -13, 11, 0, 0, -26, -24, -34,
    -7, 0, 0, 0, -18, 0, 0, 0,
    0, 0, 0, 4, 0, -25, -7, -29,
    -2, 4, 0, 0, 0, 0, 0, 0,
    0, -20, -24, 0, -24, 3, 0, -18,
    -20, 0, -15, -16, -7, -14, -4, 0,
    2, 0, -11, 4, 0, 0, -21, -12,
    -25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, -21, -6,
    -25, -2, 4, 0, 0, 0, 0, 0,
    0, 0, -18, -20, 0, -20, 1, 0,
    -13, -11, 0, -15, -10, -6, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    -15, 0, -11, -7, 0, 0, -11, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, -5, 0, -5, 0,
    0, 0, 0, 0, -5, -14, 0, 0,
    -7, 0, 0, 0, -20, 7, 0, 0,
    -35, -33, -50, -7, 0, 0, 0, -25,
    0, 0, -7, 0, -22, 0, -1, 0,
    -33, -17, -51, -9, 5, 0, 0, 0,
    0, 0, 0, 0, -36, -35, 0, -35,
    0, 0, -31, -35, -10, -28, -27, -25,
    -21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -15, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, -2, -12, 0,
    -12, 0, 0, 0, 0, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -26, 0,
    -25, -18, 0, -26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    -7, -7, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, -17, 0, 0, 0, 0, 0, -38,
    0, -21, -12, 0, -22, 0, 0, 0,
    -1, 1, -1, 0, 0, 0, 0, -1,
    -1, -5, 0, 0, 0, 0, -7, 0,
    0, -11, -7, 0, -5, 1, 0, 0,
    0, 0, 0, 0, 0, -14, 0, 0,
    -3, 0, -18, 0, 0, 0, 7, 0,
    -35, 0, 0, 0, 0, -35, 0, -25,
    0, 3, -2, 3, 0, 0, 0, 1,
    -4, 0, -4, -3, -2, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, -14, 0, 0, 0, 0,
    0, -31, 0, -18, -7, 0, -31, 0,
    0, 2, 0, 4, 0, 0, 0, 0,
    1, 3, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    0, 0, -4, 0, -21, 0, 0, 0,
    0, 0, -38, 0, -15, -7, 0, -9,
    0, 0, 0, 4, -1, 4, 0, 0,
    0, 2, 0, 0, -3, 0, -1, 0,
    0, 15, 0, -4, 15, 13, 0, -13,
    -11, -9, 0, 0, 0, 0, -7, 0,
    14, 0, 4, 4, 0, 14, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -7, 2, -7, 3,
    0, -1, -1, 3, 0, 3, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, -12, 0, 0, 0, 0,
    0, -14, 0, -11, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, -30, 0,
    0, 0, 0, -25, 0, 0, -2, -10,
    0, -10, 0, 0, 0, 0, 1, 0,
    0, 0, 0, -7, 0, 4, 0, 0,
    0, 0, 0, -27, -10, -14, 4, 7,
    0, -7, -7, 0, -11, 0, 7, 7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 6, -4, 0, 0, 0, 0, 6,
    0, 3, 5, 5, 0, 0, -4, 0,
    4, 0, -7, 0, 0, 0, 2, 0,
    -7, 0, 0, 0, 0, -7, 0, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    -21, 0, -11, 0, 0, -34, 0, 0,
    1, 1, 0, 1, 0, 0, 0, 2,
    1, 0, -4, -2, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 4, -7, 4,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 4, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, -5, -1, -5, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, -22, 0, -7, 0, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, -7, -11, 0, 0, -20,
    -3, -14, 0, 0, 0, 0, -7, 0,
    -11, 0, 0, 0, 0, -1, -4, -12,
    0, -11, 0, -33, 0, 0, 0, -14,
    -28, -15, 0, -3, -4, 4, -4, 0,
    0, 0, -3, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, -26, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 4, -3,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, 0,
    -11, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 58,
    .right_class_cnt     = 49,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_OPPOSansRegular20 = {
#else
lv_font_t ui_font_OPPOSansRegular20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_OPPOSANSREGULAR20*/

