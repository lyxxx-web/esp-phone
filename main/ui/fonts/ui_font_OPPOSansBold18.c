/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:/Users/luoyunxin/SquareLine/assets/OPPOSans-Bold.ttf -o C:/Users/luoyunxin/SquareLine/assets\ui_font_OPPOSansBold18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_OPPOSANSBOLD18
#define UI_FONT_OPPOSANSBOLD18 1
#endif

#if UI_FONT_OPPOSANSBOLD18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xdb, 0x6d, 0xb6, 0xd8, 0x7f, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0xc, 0x60, 0xcc, 0x18, 0xc7, 0xff, 0x7f, 0xf1,
    0x8c, 0x19, 0x83, 0x18, 0xff, 0xef, 0xfe, 0x31,
    0x83, 0x30, 0x63, 0x6, 0x30,

    /* U+0024 "$" */
    0xc, 0x3, 0x3, 0xf1, 0xfe, 0xed, 0xb3, 0x3c,
    0xc3, 0xb0, 0x7f, 0x7, 0xe0, 0xdd, 0x33, 0xcc,
    0xfb, 0x77, 0xf8, 0xfc, 0xc, 0x3, 0x0,

    /* U+0025 "%" */
    0x38, 0x10, 0xf8, 0x63, 0x18, 0x86, 0x33, 0xc,
    0x6c, 0xf, 0x98, 0x1f, 0x60, 0x0, 0xde, 0x3,
    0x7e, 0xe, 0xcc, 0x19, 0x98, 0x73, 0x30, 0xc7,
    0xe3, 0x7, 0x80,

    /* U+0026 "&" */
    0xe, 0x3, 0xf8, 0x31, 0x83, 0x18, 0x31, 0x83,
    0xf0, 0x3e, 0x7, 0xe4, 0xe7, 0x6c, 0x3e, 0xc1,
    0xee, 0x1c, 0x7f, 0xe3, 0xe7,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x39, 0x98, 0xce, 0x63, 0x18, 0xc6, 0x31, 0x8e,
    0x31, 0x86, 0x38,

    /* U+0029 ")" */
    0xe3, 0xc, 0x63, 0x8c, 0x63, 0x18, 0xc6, 0x33,
    0x98, 0xcc, 0xe0,

    /* U+002A "*" */
    0x18, 0x18, 0xff, 0x3c, 0x3c, 0x66, 0x0,

    /* U+002B "+" */
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xff, 0xff, 0xf0,
    0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+002C "," */
    0xff, 0xbc,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x3, 0x3, 0x81, 0x80, 0xc0, 0xe0, 0x60, 0x70,
    0x30, 0x38, 0x18, 0xc, 0xe, 0x6, 0x7, 0x0,

    /* U+0030 "0" */
    0x1e, 0x1f, 0xc6, 0x1b, 0x87, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3e, 0x1d, 0x86, 0x7f,
    0x87, 0x80,

    /* U+0031 "1" */
    0x19, 0xdf, 0xf9, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c,

    /* U+0032 "2" */
    0x1f, 0x1f, 0xe7, 0x1f, 0x83, 0x0, 0xc0, 0x30,
    0x38, 0x3c, 0x1e, 0x1e, 0x7, 0x3, 0x80, 0xff,
    0xff, 0xf0,

    /* U+0033 "3" */
    0x7f, 0xdf, 0xf0, 0x18, 0x1c, 0xe, 0x7, 0xc1,
    0xf8, 0x7, 0x0, 0xc0, 0x36, 0xd, 0xc7, 0x7f,
    0x87, 0xc0,

    /* U+0034 "4" */
    0x6, 0x1, 0xc0, 0x30, 0xe, 0x1, 0x98, 0x73,
    0xc, 0x63, 0x8c, 0x61, 0x9f, 0xff, 0xff, 0x80,
    0xc0, 0x18, 0x3, 0x0,

    /* U+0035 "5" */
    0x3f, 0x8f, 0xe3, 0x1, 0xc0, 0x70, 0x1b, 0xc7,
    0xf9, 0xc7, 0x0, 0xc0, 0x3e, 0xd, 0xc7, 0x7f,
    0x87, 0xc0,

    /* U+0036 "6" */
    0x1f, 0xf, 0xe6, 0x1d, 0x0, 0xdf, 0x3f, 0xef,
    0x1f, 0x83, 0xc0, 0xf0, 0x3e, 0xd, 0x86, 0x3f,
    0x87, 0xc0,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0xe0, 0xe0, 0x60, 0x70, 0x30,
    0x38, 0x18, 0x1c, 0xe, 0x6, 0x3, 0x1, 0x80,

    /* U+0038 "8" */
    0x1f, 0xf, 0xe7, 0x1d, 0x83, 0x71, 0xcf, 0xe3,
    0xf9, 0x87, 0xc0, 0xf0, 0x3c, 0xf, 0x87, 0x7f,
    0x8f, 0xc0,

    /* U+0039 "9" */
    0x3e, 0x1f, 0xce, 0x1b, 0x3, 0xc0, 0xf0, 0x7e,
    0x1d, 0xff, 0x3e, 0xc0, 0x34, 0x1b, 0x8e, 0x7f,
    0xf, 0x80,

    /* U+003A ":" */
    0xff, 0x80, 0x7, 0xfc,

    /* U+003B ";" */
    0xff, 0x80, 0x7, 0xfd, 0xe0,

    /* U+003C "<" */
    0x1, 0xc1, 0xf3, 0xf3, 0xe0, 0xf0, 0x1f, 0x81,
    0xfc, 0xf, 0x0, 0x40,

    /* U+003D "=" */
    0xff, 0xff, 0xf0, 0x0, 0x0, 0xff, 0xff, 0xf0,

    /* U+003E ">" */
    0xc0, 0x3e, 0x3, 0xf0, 0x1f, 0x3, 0xc7, 0xef,
    0xc3, 0x80, 0x0, 0x0,

    /* U+003F "?" */
    0x3c, 0xfe, 0xe3, 0xc3, 0x3, 0x6, 0x1c, 0x38,
    0x30, 0x30, 0x0, 0x38, 0x38, 0x38,

    /* U+0040 "@" */
    0x3, 0xf0, 0x7, 0xfe, 0xf, 0x7, 0x86, 0x0,
    0xe6, 0x1d, 0xb3, 0x3e, 0xcf, 0x18, 0xc7, 0x9c,
    0x63, 0xcc, 0x31, 0xe6, 0x18, 0xf3, 0x1c, 0x79,
    0x8e, 0x6e, 0x7f, 0xf3, 0x3c, 0xf1, 0xc0, 0x0,
    0x78, 0x10, 0x1f, 0xf8, 0x3, 0xf8, 0x0,

    /* U+0041 "A" */
    0x7, 0x80, 0x7c, 0x3, 0x60, 0x1b, 0x81, 0xcc,
    0xc, 0x60, 0x63, 0x87, 0xc, 0x3f, 0xe1, 0xff,
    0x9c, 0xc, 0xc0, 0x66, 0x3, 0xf0, 0xc,

    /* U+0042 "B" */
    0xff, 0x1f, 0xf3, 0x7, 0x60, 0x6c, 0xd, 0x83,
    0xbf, 0xe7, 0xfe, 0xc0, 0xf8, 0xf, 0x1, 0xe0,
    0x7f, 0xfd, 0xff, 0x0,

    /* U+0043 "C" */
    0xf, 0x83, 0xfc, 0x70, 0xe6, 0x7, 0xc0, 0x2c,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x3, 0x60,
    0x77, 0xe, 0x3f, 0xc0, 0xf8,

    /* U+0044 "D" */
    0xff, 0xf, 0xfc, 0xc0, 0xec, 0x6, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x6c, 0xe, 0xff, 0xcf, 0xf0,

    /* U+0045 "E" */
    0xff, 0xff, 0xfc, 0x3, 0x0, 0xc0, 0x30, 0xf,
    0xfb, 0xfe, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xff,
    0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xff, 0xfc, 0x3, 0x0, 0xc0, 0x30, 0xf,
    0xff, 0xff, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0x0,

    /* U+0047 "G" */
    0xf, 0xc1, 0xff, 0x1c, 0x1c, 0xc0, 0x7c, 0x0,
    0x60, 0x3, 0xf, 0xf8, 0x7f, 0xc0, 0x3e, 0x1,
    0xd8, 0x1e, 0xe1, 0xf3, 0xfd, 0x87, 0xcc,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xff, 0xff, 0xff, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x43, 0xe7, 0x7e, 0x3c,

    /* U+004B "K" */
    0xc1, 0xd8, 0x73, 0x1e, 0x67, 0x8d, 0xe1, 0xb8,
    0x3e, 0x7, 0xc0, 0xdc, 0x19, 0xc3, 0x1c, 0x61,
    0xcc, 0x1d, 0x81, 0xc0,

    /* U+004C "L" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xff, 0xfc,

    /* U+004D "M" */
    0xf0, 0x1f, 0xe0, 0x3f, 0xe0, 0xff, 0xc1, 0xfd,
    0x83, 0x7b, 0x8e, 0xf7, 0x1d, 0xe6, 0x33, 0xce,
    0xe7, 0x9d, 0xcf, 0x1b, 0x1e, 0x3e, 0x3c, 0x7c,
    0x78, 0x70, 0xc0,

    /* U+004E "N" */
    0xf0, 0x3f, 0x3, 0xf8, 0x3d, 0xc3, 0xdc, 0x3c,
    0xe3, 0xce, 0x3c, 0x73, 0xc7, 0x3c, 0x3b, 0xc3,
    0xbc, 0x1f, 0xc0, 0xfc, 0xf,

    /* U+004F "O" */
    0xf, 0x81, 0xff, 0x1c, 0x1c, 0xc0, 0x6c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xd8, 0xc, 0xe0, 0xe3, 0xfe, 0x7, 0xc0,

    /* U+0050 "P" */
    0xff, 0x3f, 0xec, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0x1f, 0xfe, 0xff, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0x0,

    /* U+0051 "Q" */
    0xf, 0x81, 0xff, 0x1c, 0x1c, 0xc0, 0x6c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x1c,
    0xd8, 0x7c, 0xe1, 0xe3, 0xff, 0x7, 0xf8, 0x0,
    0xe0,

    /* U+0052 "R" */
    0xff, 0x9f, 0xfb, 0x3, 0xe0, 0x3c, 0x7, 0x81,
    0xff, 0xf7, 0xfc, 0xc1, 0xd8, 0x1b, 0x3, 0xe0,
    0x7c, 0x7, 0x80, 0xc0,

    /* U+0053 "S" */
    0x1f, 0xf, 0xfb, 0x87, 0x60, 0x7c, 0x1, 0xe0,
    0x1f, 0xe0, 0xfe, 0x0, 0xe8, 0xf, 0x1, 0xf0,
    0x77, 0xfc, 0x3e, 0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xfc, 0x18, 0x3, 0x0, 0x60, 0xc,
    0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18, 0x3,
    0x0, 0x60, 0xc, 0x0,

    /* U+0055 "U" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xb0,
    0x67, 0xfc, 0x3e, 0x0,

    /* U+0056 "V" */
    0xe0, 0x1b, 0x1, 0xd8, 0xc, 0xe0, 0xe3, 0x7,
    0x18, 0x30, 0xe3, 0x83, 0x1c, 0x18, 0xc0, 0xee,
    0x3, 0x70, 0x1f, 0x0, 0xf8, 0x3, 0xc0,

    /* U+0057 "W" */
    0xe0, 0xe0, 0xec, 0x3e, 0x19, 0x86, 0xc3, 0x30,
    0xd8, 0xe7, 0x1b, 0x1c, 0xe3, 0x63, 0x8c, 0xee,
    0x61, 0x98, 0xcc, 0x33, 0x1b, 0x87, 0x63, 0x70,
    0xec, 0x6c, 0xf, 0x8f, 0x81, 0xe1, 0xf0, 0x3c,
    0x1e, 0x0,

    /* U+0058 "X" */
    0x60, 0x73, 0x87, 0xe, 0x38, 0x33, 0x81, 0xf8,
    0x7, 0xc0, 0x1c, 0x1, 0xe0, 0xf, 0x80, 0xee,
    0xe, 0x30, 0xe1, 0xc7, 0x7, 0x70, 0x18,

    /* U+0059 "Y" */
    0xe0, 0x77, 0xe, 0x30, 0xc3, 0x9c, 0x19, 0x81,
    0xf8, 0xf, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x1c, 0xe, 0x7, 0x1, 0x80,
    0xe0, 0x70, 0x38, 0xe, 0x7, 0x3, 0x80, 0xff,
    0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xff, 0xc0,

    /* U+005C "\\" */
    0xe0, 0x30, 0x18, 0x6, 0x3, 0x1, 0xc0, 0x60,
    0x38, 0xc, 0x7, 0x1, 0x80, 0xc0, 0x70, 0x18,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0xff, 0xc0,

    /* U+005E "^" */
    0xc, 0x3, 0x81, 0xe0, 0x6c, 0x3b, 0xc, 0x63,
    0x19, 0x87, 0x60, 0xc0,

    /* U+005F "_" */
    0xff, 0xff, 0xff,

    /* U+0060 "`" */
    0x71, 0x80,

    /* U+0061 "a" */
    0x3c, 0x7e, 0xe3, 0x3, 0x1f, 0x7b, 0xc3, 0xc7,
    0xff, 0x7b,

    /* U+0062 "b" */
    0xc0, 0x60, 0x30, 0x18, 0xd, 0xe7, 0xfb, 0x8f,
    0x83, 0xc1, 0xe0, 0xf0, 0x7c, 0x7f, 0xf6, 0xf0,

    /* U+0063 "c" */
    0x3e, 0x3f, 0xb8, 0xd8, 0x4c, 0x6, 0x3, 0x4,
    0xc7, 0x7f, 0x1f, 0x0,

    /* U+0064 "d" */
    0x1, 0x80, 0xc0, 0x60, 0x33, 0xdb, 0xff, 0x8f,
    0x83, 0xc1, 0xe0, 0xf0, 0x7c, 0x77, 0xf9, 0xec,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xb8, 0xd8, 0x3f, 0xff, 0xff, 0x1,
    0xc7, 0x7f, 0x1f, 0x0,

    /* U+0066 "f" */
    0x1e, 0x7c, 0xc1, 0x8f, 0xdf, 0x8c, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0x0,

    /* U+0067 "g" */
    0x3d, 0xbf, 0xf8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0x7f, 0x9e, 0xc0, 0x7c, 0x77, 0xf1, 0xf0,

    /* U+0068 "h" */
    0xc0, 0x60, 0x30, 0x18, 0xd, 0xf7, 0xfb, 0x8f,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xc,

    /* U+0069 "i" */
    0xff, 0x8d, 0xb6, 0xdb, 0x6d, 0x80,

    /* U+006A "j" */
    0x39, 0xce, 0x3, 0x18, 0xc6, 0x31, 0x8c, 0x63,
    0x18, 0xc6, 0xf7, 0x0,

    /* U+006B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x76, 0x73, 0x71,
    0xf0, 0xf0, 0x7c, 0x37, 0x19, 0xcc, 0x76, 0x38,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xde, 0x7b, 0xff, 0xfe, 0x38, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xf,
    0xc, 0x30,

    /* U+006E "n" */
    0xdf, 0x7f, 0xb8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+006F "o" */
    0x3e, 0x3f, 0xb8, 0xd8, 0x3c, 0x1e, 0xf, 0x6,
    0xc6, 0x7f, 0x1f, 0x0,

    /* U+0070 "p" */
    0xde, 0x7f, 0xb8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0xff, 0x6f, 0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0071 "q" */
    0x3d, 0xbf, 0xf8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0x7f, 0x9e, 0xc0, 0x60, 0x30, 0x18, 0xc,

    /* U+0072 "r" */
    0xdf, 0xfe, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+0073 "s" */
    0x3c, 0xfe, 0xc7, 0xc0, 0x7c, 0x1f, 0x43, 0xe3,
    0xff, 0x3c,

    /* U+0074 "t" */
    0x30, 0xc3, 0xc, 0xff, 0xf3, 0xc, 0x30, 0xc3,
    0xc, 0x3c, 0x70,

    /* U+0075 "u" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0xf,
    0x87, 0xff, 0xbe, 0xc0,

    /* U+0076 "v" */
    0xe1, 0xd8, 0x66, 0x39, 0xce, 0x73, 0xc, 0xc3,
    0x70, 0xf8, 0x1e, 0x7, 0x80,

    /* U+0077 "w" */
    0xe3, 0x8e, 0xc7, 0x19, 0x9e, 0x33, 0x36, 0xe7,
    0x6d, 0xc6, 0xdb, 0xd, 0x36, 0x1e, 0x3c, 0x3c,
    0x78, 0x78, 0xe0,

    /* U+0078 "x" */
    0xe3, 0xb1, 0x8d, 0xc7, 0xc1, 0xc0, 0xe0, 0xf8,
    0xee, 0x63, 0x71, 0xc0,

    /* U+0079 "y" */
    0x61, 0xd8, 0x67, 0x18, 0xce, 0x33, 0xe, 0xc1,
    0xf0, 0x78, 0x1e, 0x3, 0x80, 0xc0, 0x70, 0x78,
    0x1c, 0x0,

    /* U+007A "z" */
    0xff, 0xff, 0x7, 0xe, 0x1c, 0x38, 0x70, 0xe0,
    0xff, 0xff,

    /* U+007B "{" */
    0x1e, 0x7c, 0xc1, 0x83, 0x6, 0xc, 0x18, 0xe1,
    0xc0, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x3e, 0x3c,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xf1, 0xf0, 0x60, 0xc1, 0x83, 0x6, 0xc, 0xe,
    0x1c, 0x60, 0xc1, 0x83, 0x6, 0xc, 0xf9, 0xe0,

    /* U+007E "~" */
    0x70, 0xdf, 0x3c, 0xfb, 0xe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 67, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 77, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 118, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 10, .adv_w = 233, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 185, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 54, .adv_w = 261, .box_w = 15, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 203, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 64, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 103, .adv_w = 95, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 114, .adv_w = 95, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 125, .adv_w = 123, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 132, .adv_w = 165, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 145, .adv_w = 64, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 147, .adv_w = 108, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 149, .adv_w = 62, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 136, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 124, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 169, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 166, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 167, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 176, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 150, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 176, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 176, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 69, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 69, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 347, .adv_w = 174, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 359, .adv_w = 177, .box_w = 10, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 367, .adv_w = 174, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 379, .adv_w = 144, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 296, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 432, .adv_w = 212, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 194, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 212, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 211, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 176, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 222, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 217, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 69, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 152, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 193, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 161, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 269, .box_w = 15, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 221, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 223, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 189, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 223, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 764, .adv_w = 204, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 194, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 187, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 207, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 844, .adv_w = 212, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 303, .box_w = 19, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 201, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 193, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 189, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 103, .box_w = 5, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 975, .adv_w = 136, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 991, .adv_w = 103, .box_w = 5, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1003, .adv_w = 172, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1015, .adv_w = 185, .box_w = 12, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1018, .adv_w = 81, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 1020, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1030, .adv_w = 169, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1046, .adv_w = 155, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 169, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 105, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1099, .adv_w = 169, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1115, .adv_w = 166, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 62, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 61, .box_w = 5, .box_h = 18, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1149, .adv_w = 154, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1165, .adv_w = 62, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1169, .adv_w = 250, .box_w = 14, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 165, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 169, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1227, .adv_w = 169, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1243, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1251, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1261, .adv_w = 109, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 156, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 238, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 146, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1328, .adv_w = 154, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1346, .adv_w = 139, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1356, .adv_w = 111, .box_w = 7, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1372, .adv_w = 95, .box_w = 2, .box_h = 19, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1377, .adv_w = 111, .box_w = 7, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1393, .adv_w = 168, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 5}
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
    -6, 0, 0, 0, -6, 0, -6, -3,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0,
    0, -25, 0, 6, 0, 0, 0, 0,
    0, 0, -28, -6, -50, -3, 6, 0,
    0, 3, 0, 0, 0, 0, -13, -6,
    3, -6, 0, 0, 0, -6, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    0, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 3, 0, -13, 0, 16, -3, -3,
    0, 0, 0, 0, 0, -10, -13, -6,
    10, 0, 6, 6, 0, 10, 0, 0,
    -6, -10, 0, 0, 0, 28, -3, 0,
    0, -3, -10, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -25, -3, -47,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, -10, -6, 6, -6, 0, 0, 0,
    -6, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 3, 0, 3, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -22, 3, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 6,
    -13, 6, 0, -31, -6, -31, -19, 3,
    -31, 0, 0, 0, -4, -6, -4, 0,
    13, 0, 2, -13, -6, -19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, -10, 0, 6,
    3, -13, 0, -3, 0, 0, 0, 0,
    -9, 5, -10, 0, -25, 0, -19, -6,
    -16, -25, 0, 0, 0, 1, 0, 1,
    0, 0, 0, 0, -6, 0, -2, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -50, -7, 3, -3, 3,
    -22, -6, 19, -6, 0, 0, 0, 0,
    0, -28, -13, -44, -6, 10, 0, 0,
    0, 0, 0, 0, 0, -28, -31, -6,
    -31, 0, 0, -21, -29, -6, -19, -16,
    -13, -22, 0, 0, 0, 0, 0, -6,
    0, 6, -3, 0, -4, 1, 0, -3,
    -1, 0, 1, -9, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, -6, 0,
    -6, 0, -3, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    1, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 3, 0, 3, 3, -10, 4, 1,
    5, 4, 1, -10, 1, 2, -1, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 3, -3, 5, 0,
    2, -1, 1, 0, 1, 1, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -19, -10, 0, -6, 0, 0, 0, 3,
    0, 3, -10, 0, 4, 1, 4, -10,
    4, -3, 0, 3, 0, 0, 0, 0,
    0, 0, -18, 0, -16, 0, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    3, 0, 4, -3, 2, 3, 2, 0,
    1, 3, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, -3, 0, 6,
    0, 0, 0, 0, 0, -2, 3, 2,
    4, 1, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 3, -13, 10, 0,
    -13, -19, -22, -25, -5, 3, 2, 3,
    -22, -7, 10, -2, 1, 0, -6, 0,
    0, -23, 0, -34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -20, -22, -6,
    -22, 0, 0, -10, -16, 0, -13, -10,
    -6, -13, 0, 0, 0, -3, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 2, -4, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, -13,
    0, 0, 0, 0, -22, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 3, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, -6,
    -3, -28, 0, 0, 0, -25, 0, 6,
    -9, 0, -6, -13, 0, 0, -6, 0,
    -6, 0, 0, 3, 0, -22, 0, 0,
    -10, 0, -3, -30, -9, -22, -17, 0,
    -31, 0, 0, 0, -4, -6, -4, 0,
    0, 0, 0, -11, -9, -16, 0, 0,
    0, 0, -3, 0, 4, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, -3, 1, -4, -3,
    -6, -10, 0, 0, 0, 2, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, -6, 0,
    0, -3, 3, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    0, -6, 0, 0, 0, -5, 0, 0,
    0, 0, -7, -6, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, -6, 0, 0, -10,
    -3, 0, -13, 5, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, -10, 2, -6, 0, -12, 0,
    -6, -5, -13, -16, -11, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -4, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    -6, 10, 3, 0, -25, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -16, 3, -41, 0,
    1, 0, 0, 0, 0, 0, 0, 0,
    -2, -1, 0, -1, 2, 2, -1, 0,
    2, -1, 1, 0, 0, 0, 0, -6,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, -14, 0, -10, -6, -3, -16, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -2, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, -10, 0, 6,
    -28, 0, 0, -6, 0, 0, -10, 0,
    10, 0, 0, 0, 0, 0, 0, 7,
    -15, -3, -3, 3, -2, 0, 0, 0,
    4, 0, 0, -1, -9, 0, -9, 0,
    0, 0, 0, 0, -8, -22, 0, 0,
    0, 0, -47, 0, 0, 0, -47, 0,
    6, -19, 13, 0, -28, 0, 0, -6,
    0, -6, 0, 0, 3, 0, -25, 0,
    3, -13, 0, -4, -38, -10, -28, -19,
    0, -38, 0, 0, 3, -3, 0, -3,
    0, 0, 0, 0, 0, -3, -19, 0,
    0, -6, 0, 0, 0, -6, 0, 0,
    0, -25, 0, -28, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 6,
    0, -22, 3, -47, 3, 0, 0, 0,
    0, -13, -7, 0, 0, -4, -3, 0,
    -3, 0, 2, 1, 0, 0, -1, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -2, -3, -3, -5, 0,
    -3, -1, 0, -10, 0, 0, -1, -7,
    0, -7, 0, 0, 0, 0, 0, -3,
    -2, 0, 0, 0, 0, -3, 0, 6,
    -6, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, -3, 0, 3, 2, -4,
    0, -4, 0, 0, -10, 0, 0, 0,
    1, 0, 1, 0, 0, 0, 0, -1,
    2, -5, 0, 0, -6, 0, 6, 0,
    -13, 10, 3, 0, -31, -25, -41, -6,
    0, 0, 0, -22, 0, 0, 0, 0,
    -13, 0, 6, 0, -30, -12, -47, -5,
    4, 0, 4, 3, 0, 6, 0, 0,
    -31, -31, 0, -31, 3, 3, -25, -35,
    0, -26, -35, -25, -25, -6, 0, 0,
    0, -10, 6, 0, 0, -25, -19, -28,
    -6, 0, 0, 0, -16, 0, 0, 0,
    0, 0, 0, 3, 0, -22, -6, -28,
    -2, 4, 0, 0, 0, 0, 0, 0,
    0, -21, -21, 0, -21, 3, 0, -18,
    -19, 0, -16, -11, -6, -13, -3, 0,
    3, 0, -10, 6, 0, 0, -19, -6,
    -22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, -17, -5,
    -22, -1, 3, 0, 0, 0, 0, 0,
    0, 0, -15, -15, 0, -15, 3, 0,
    -10, -10, 0, -10, -6, -3, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    -16, 0, -13, -6, 0, 0, -13, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, -9, 0, -9, 0,
    0, 0, 0, 0, -6, -13, 0, 0,
    -6, 0, 0, 0, -16, 10, 0, 0,
    -31, -25, -38, -6, 0, 0, 0, -25,
    0, 0, -6, 0, -22, 0, -3, 0,
    -31, -16, -50, -10, 6, 0, 0, 0,
    0, 0, 0, 0, -33, -38, 0, -38,
    0, 0, -28, -36, -9, -26, -21, -22,
    -19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, -5, -7, 0,
    -7, 0, 0, 0, 0, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -28, 0,
    -22, -16, 0, -28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, 0,
    -6, -6, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, -13, 0, 0, 0, 0, 0, -35,
    0, -19, -13, 0, -22, 0, 0, 0,
    -1, 0, -1, 0, 0, 0, 0, -1,
    -1, -4, 0, 0, 0, 0, -6, 0,
    0, -10, -6, 0, -4, 1, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, 0, -16, 0, 0, 0, 6, 0,
    -31, 0, 0, 0, 0, -35, 0, -22,
    0, 2, -1, 2, 0, 0, 0, 1,
    -3, 0, -4, -5, -3, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, -13, 0, 0, 0, 0,
    0, -28, 0, -16, -6, 0, -25, 0,
    0, 2, 0, 5, 0, 0, 0, 0,
    1, 2, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, 0, -1, 0, -19, 0, 0, 0,
    0, 0, -31, 0, -16, -6, 0, -31,
    0, 0, 0, 3, 0, 3, 0, 0,
    0, 1, 0, 0, -3, 0, -1, 0,
    0, 13, 0, -3, 16, 10, 0, -13,
    -10, -13, 0, 0, 0, 0, -6, 0,
    13, 0, 3, 3, 0, 13, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -6, 2, -6, 3,
    0, -1, -2, 3, 0, 2, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -13, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, -6, 0, 0, 0, 0,
    0, -13, 0, -10, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, -25, 0,
    0, 0, 0, -23, 0, 0, -2, -9,
    0, -9, 0, 0, 0, 0, 1, 0,
    0, 0, 0, -6, 0, 3, 0, 0,
    0, 0, 0, -22, -6, -13, 3, 6,
    0, -6, -6, 0, -10, 0, 6, 7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    -2, 5, -2, 0, 0, 0, 1, 5,
    0, 5, 7, 5, 0, 0, -6, 0,
    3, 0, -6, 0, 1, 0, 1, 0,
    -6, 0, 0, 0, 0, -6, 0, 0,
    2, 0, -16, 0, 0, 0, 0, 0,
    -19, 0, -10, 0, 0, -34, 0, 0,
    1, 1, 3, 1, 0, 0, 0, 2,
    1, 0, -2, -1, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 6, -6, 3,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 3, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -10, 0,
    0, 0, -6, -1, -6, 0, 0, 0,
    -1, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, -22, 0, -6, 0, 0, -19,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, -6, -10, 0, 0, -16,
    -3, -13, 0, 0, 0, 0, -6, 0,
    -10, 0, 0, 0, 0, -10, -3, -13,
    0, -10, 0, -35, 0, 0, 0, -13,
    -25, -16, 0, -5, -4, 5, -4, 0,
    0, 0, -3, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, -25, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 5, -5,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    -10, 0, -6, 0, 0, 0, 0, 0,
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
const lv_font_t ui_font_OPPOSansBold18 = {
#else
lv_font_t ui_font_OPPOSansBold18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_OPPOSANSBOLD18*/

