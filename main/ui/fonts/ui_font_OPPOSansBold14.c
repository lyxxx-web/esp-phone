/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font C:/Users/luoyunxin/SquareLine/assets/OPPOSans-Bold.ttf -o C:/Users/luoyunxin/SquareLine/assets\ui_font_OPPOSansBold14.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_OPPOSANSBOLD14
#define UI_FONT_OPPOSANSBOLD14 1
#endif

#if UI_FONT_OPPOSANSBOLD14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc,

    /* U+0022 "\"" */
    0xff, 0xf0,

    /* U+0023 "#" */
    0x9, 0x82, 0x61, 0x99, 0xff, 0x19, 0x4, 0xc1,
    0x31, 0xfe, 0x32, 0xc, 0x82, 0x60,

    /* U+0024 "$" */
    0x8, 0x3c, 0x7e, 0xcb, 0xc8, 0xf8, 0x7e, 0xf,
    0xb, 0xcb, 0xef, 0x7e, 0x8, 0x8,

    /* U+0025 "%" */
    0x70, 0x8d, 0x98, 0xd9, 0xd, 0xb0, 0x72, 0x0,
    0x5e, 0x7, 0x30, 0xb3, 0xb, 0x31, 0x33, 0x21,
    0xe0,

    /* U+0026 "&" */
    0x3c, 0x19, 0x86, 0x61, 0xb8, 0x3c, 0x1e, 0xe,
    0xdb, 0x36, 0xc7, 0x39, 0xc3, 0xd8,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x36, 0x6e, 0xcc, 0xcc, 0xcc, 0xe6, 0x63,

    /* U+0029 ")" */
    0xc6, 0x66, 0x33, 0x33, 0x33, 0x76, 0x6c,

    /* U+002A "*" */
    0x25, 0x7e, 0xe5, 0x0,

    /* U+002B "+" */
    0x18, 0x30, 0x60, 0xcf, 0xe3, 0x6, 0xc,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x4, 0x18, 0x30, 0xc1, 0x86, 0xc, 0x10, 0x60,
    0xc3, 0x0,

    /* U+0030 "0" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0031 "1" */
    0x19, 0xff, 0xb1, 0x8c, 0x63, 0x18, 0xc6,

    /* U+0032 "2" */
    0x3c, 0x62, 0xc3, 0x3, 0x7, 0x1e, 0x3c, 0x78,
    0xe0, 0xc0, 0xff,

    /* U+0033 "3" */
    0xfe, 0x18, 0x61, 0x87, 0xc5, 0xc1, 0x83, 0x87,
    0x99, 0xe0,

    /* U+0034 "4" */
    0x18, 0x18, 0x30, 0x36, 0x66, 0x66, 0xc6, 0xff,
    0x6, 0x6, 0x6,

    /* U+0035 "5" */
    0x7e, 0x60, 0x60, 0x60, 0x7e, 0x67, 0x3, 0x3,
    0xc3, 0x66, 0x3c,

    /* U+0036 "6" */
    0x3c, 0x66, 0x42, 0xc0, 0xde, 0xe7, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0037 "7" */
    0xfe, 0xc, 0x30, 0xc1, 0x86, 0xc, 0x18, 0x20,
    0xc1, 0x80,

    /* U+0038 "8" */
    0x7e, 0xc3, 0xc3, 0xc3, 0x3c, 0x66, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xe7, 0x7b, 0x3,
    0x43, 0x66, 0x3c,

    /* U+003A ":" */
    0xc0, 0x3,

    /* U+003B ";" */
    0xc0, 0x3, 0x60,

    /* U+003C "<" */
    0x3, 0x1f, 0xf8, 0xc0, 0xf8, 0x1f, 0x3,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0x80, 0xf0, 0x3e, 0x7, 0x3e, 0xf0, 0xc0,

    /* U+003F "?" */
    0x3c, 0x8f, 0x18, 0x30, 0xe3, 0x8e, 0x18, 0x30,
    0x0, 0xc0,

    /* U+0040 "@" */
    0xf, 0xc0, 0x61, 0xc3, 0x1, 0x99, 0xd6, 0xcc,
    0xcf, 0x63, 0x3d, 0x8c, 0xf6, 0x23, 0xd8, 0x8f,
    0x67, 0x66, 0xe7, 0x18, 0x0, 0x38, 0x60, 0x3f,
    0x0,

    /* U+0041 "A" */
    0xe, 0x7, 0x81, 0xe0, 0x6c, 0x33, 0xc, 0xc3,
    0x19, 0xfe, 0x60, 0x90, 0x3c, 0xc,

    /* U+0042 "B" */
    0xfe, 0xc3, 0xc3, 0xc3, 0xc2, 0xfc, 0xc7, 0xc3,
    0xc3, 0xc3, 0xfe,

    /* U+0043 "C" */
    0x1f, 0x18, 0x66, 0xf, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x2, 0x60, 0xdc, 0x61, 0xf0,

    /* U+0044 "D" */
    0xfc, 0x61, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0x61, 0xbf, 0x0,

    /* U+0045 "E" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0,
    0xc0, 0xc0, 0xff,

    /* U+0046 "F" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x1f, 0x1c, 0x66, 0xf, 0x0, 0xc0, 0x31, 0xfc,
    0xf, 0x3, 0x61, 0xd8, 0x71, 0xec,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x7,
    0x8d, 0xf0,

    /* U+004B "K" */
    0xc3, 0x63, 0xb3, 0x9b, 0x8f, 0x87, 0x83, 0x61,
    0x98, 0xce, 0x63, 0xb0, 0xe0,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+004D "M" */
    0xe0, 0x7f, 0xf, 0xf0, 0xff, 0xf, 0xd9, 0xbd,
    0x9b, 0xd9, 0xbc, 0xf3, 0xcf, 0x3c, 0xf3, 0xc6,
    0x30,

    /* U+004E "N" */
    0xe1, 0xf8, 0xfc, 0x7b, 0x3d, 0x9e, 0x4f, 0x37,
    0x9b, 0xc7, 0xe3, 0xf0, 0xe0,

    /* U+004F "O" */
    0x1e, 0x18, 0x66, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0x98, 0x61, 0xe0,

    /* U+0050 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1e, 0x18, 0x66, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x33, 0x67, 0x98, 0xe1, 0xf8,

    /* U+0052 "R" */
    0xff, 0x61, 0xf0, 0x78, 0x3c, 0x3f, 0xf3, 0xd,
    0x86, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0053 "S" */
    0x3e, 0x31, 0xb0, 0x7c, 0xf, 0xe3, 0xf8, 0x7e,
    0x3, 0xc1, 0xf1, 0x8f, 0x80,

    /* U+0054 "T" */
    0xff, 0x8c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x8f, 0x80,

    /* U+0056 "V" */
    0xc0, 0xd8, 0x36, 0x19, 0x86, 0x31, 0x8c, 0xc3,
    0x30, 0x6c, 0x1e, 0x7, 0x80, 0xe0,

    /* U+0057 "W" */
    0xc3, 0x8d, 0x87, 0x19, 0x9a, 0x33, 0x34, 0x66,
    0x6c, 0xcc, 0xdb, 0x9, 0x36, 0x1e, 0x6c, 0x3c,
    0x58, 0x78, 0xf0, 0xf1, 0xc0,

    /* U+0058 "X" */
    0x61, 0x98, 0xe3, 0x30, 0x78, 0x1e, 0x7, 0x1,
    0xe0, 0xdc, 0x73, 0x18, 0x6c, 0x1c,

    /* U+0059 "Y" */
    0xe1, 0xd8, 0x63, 0x30, 0xcc, 0x1e, 0x7, 0x80,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+005A "Z" */
    0xff, 0x7, 0x6, 0xc, 0x1c, 0x18, 0x30, 0x30,
    0x60, 0xe0, 0xff,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf,

    /* U+005C "\\" */
    0xc0, 0xc1, 0x81, 0x3, 0x6, 0x6, 0xc, 0xc,
    0x18, 0x10,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x18, 0x1c, 0x3c, 0x36, 0x66, 0x62, 0x43,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x60,

    /* U+0061 "a" */
    0x7d, 0xcc, 0x19, 0xff, 0x78, 0xf3, 0xbf,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xee, 0xd8, 0xf1, 0xe3, 0xc7,
    0xdb, 0xf0,

    /* U+0063 "c" */
    0x3c, 0xcf, 0x16, 0xc, 0x18, 0x19, 0x9e,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xf6, 0xf8, 0xf1, 0xe3, 0xc6,
    0xdd, 0xf8,

    /* U+0065 "e" */
    0x38, 0x8f, 0x1f, 0xfc, 0x18, 0x99, 0x1e,

    /* U+0066 "f" */
    0x3b, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7e, 0xdf, 0x1e, 0x3c, 0x78, 0xdb, 0xbf, 0x7,
    0x8d, 0xf0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xee, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0xc3, 0xff, 0xfc,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x7d, 0xdb, 0x3c, 0x7c, 0xd9,
    0x9b, 0x18,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xfb, 0xbb, 0xbc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33,

    /* U+006E "n" */
    0xfd, 0xcf, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xdb, 0x1c,

    /* U+0070 "p" */
    0xfd, 0xdb, 0x1e, 0x3c, 0x78, 0xfb, 0x7e, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x7e, 0xdf, 0x1e, 0x3c, 0x78, 0xdb, 0xbf, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xdf, 0x31, 0x8c, 0x63, 0x18,

    /* U+0073 "s" */
    0x7d, 0x9f, 0x7, 0xe7, 0xe8, 0xf1, 0xbe,

    /* U+0074 "t" */
    0x63, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0xe,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf3, 0xbb,

    /* U+0076 "v" */
    0xc6, 0x46, 0x66, 0x64, 0x6c, 0x3c, 0x38, 0x38,

    /* U+0077 "w" */
    0xc6, 0x69, 0xcd, 0xb9, 0xb5, 0xb6, 0xb4, 0xf3,
    0x8e, 0x71, 0xce,

    /* U+0078 "x" */
    0xc6, 0xd8, 0xf1, 0xc3, 0x8d, 0x9b, 0x63,

    /* U+0079 "y" */
    0xc7, 0x8b, 0x32, 0x66, 0x8f, 0xe, 0x18, 0x30,
    0x63, 0x80,

    /* U+007A "z" */
    0xfc, 0x31, 0x8c, 0x31, 0x8c, 0x3f,

    /* U+007B "{" */
    0x3c, 0xc3, 0xc, 0x30, 0xcc, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xe1, 0x8c, 0x63, 0x18, 0x26, 0x31, 0x8c, 0x63,
    0x70,

    /* U+007E "~" */
    0x72, 0xde, 0x8e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 60, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 92, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 181, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 144, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 203, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 158, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 50, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 66, .adv_w = 74, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 73, .adv_w = 74, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 80, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 84, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 91, .adv_w = 50, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 92, .adv_w = 84, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 93, .adv_w = 48, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 106, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 97, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 132, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 130, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 117, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 54, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 54, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 213, .adv_w = 135, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 220, .adv_w = 138, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 224, .adv_w = 135, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 231, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 230, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 266, .adv_w = 165, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 165, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 164, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 173, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 168, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 54, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 118, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 150, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 209, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 172, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 173, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 173, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 159, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 146, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 165, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 235, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 156, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 150, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 80, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 605, .adv_w = 106, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 80, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 622, .adv_w = 134, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 629, .adv_w = 144, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 631, .adv_w = 63, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 632, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 81, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 690, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 48, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 47, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 710, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 48, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 195, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 757, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 767, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 121, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 185, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 829, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 86, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 846, .adv_w = 74, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 850, .adv_w = 86, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 859, .adv_w = 130, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
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
    -5, 0, 0, 0, -5, 0, -5, -2,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0,
    0, -19, 0, 5, 0, 0, 0, 0,
    0, 0, -22, -5, -39, -2, 5, 0,
    0, 2, 0, 0, 0, 0, -10, -5,
    2, -5, 0, 0, 0, -5, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 2, 0, -10, 0, 12, -2, -2,
    0, 0, 0, 0, 0, -7, -10, -5,
    7, 0, 5, 5, 0, 7, 0, 0,
    -5, -7, 0, 0, 0, 22, -2, 0,
    0, -2, -7, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, -2, -37,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, -7, -5, 5, -5, 0, 0, 0,
    -5, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 2, 0, 2, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -17, 2, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 5,
    -10, 5, 0, -24, -5, -24, -15, 2,
    -24, 0, 0, 0, -3, -5, -3, 0,
    10, 0, 2, -10, -5, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -10, -7, 0, 5,
    2, -10, 0, -2, 0, 0, 0, 0,
    -7, 4, -7, 0, -19, 0, -15, -5,
    -12, -19, 0, 0, 0, 1, 0, 1,
    0, 0, 0, 0, -5, 0, -2, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -39, -5, 2, -2, 2,
    -17, -5, 15, -5, 0, 0, 0, 0,
    0, -22, -10, -34, -4, 7, 0, 0,
    0, 0, 0, 0, 0, -22, -24, -5,
    -24, 0, 0, -16, -22, -5, -15, -12,
    -10, -17, 0, 0, 0, 0, 0, -5,
    0, 5, -2, 0, -3, 1, 0, -2,
    -1, 0, 0, -7, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, -5, 0,
    -5, 0, -2, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 2, 0, 2, 2, -7, 3, 1,
    4, 3, 1, -8, 1, 2, -1, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 2, -2, 4, 0,
    2, -1, 0, 0, 1, 1, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, -7, 0, -5, 0, 0, 0, 2,
    0, 2, -7, 0, 3, 1, 3, -7,
    3, -2, 0, 2, 0, 0, 0, 0,
    0, 0, -14, 0, -12, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    2, 0, 3, -2, 2, 2, 2, 0,
    1, 2, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, -2, 0, 5,
    0, 0, 0, 0, 0, -2, 2, 2,
    3, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 2, -10, 7, 0,
    -10, -15, -17, -19, -4, 2, 2, 2,
    -17, -6, 8, -2, 0, 0, -5, 0,
    0, -18, 0, -26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -16, -17, -5,
    -17, 0, 0, -7, -12, 0, -10, -7,
    -5, -10, 0, 0, 0, -2, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 2, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, -10,
    0, 0, 0, 0, -17, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 2, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -5,
    -2, -22, 0, 0, 0, -19, 0, 5,
    -7, 0, -5, -10, 0, 0, -5, 0,
    -5, 0, 0, 2, 0, -17, 0, 0,
    -7, 0, -3, -23, -7, -17, -13, 0,
    -24, 0, 0, 0, -3, -5, -3, 0,
    0, 0, 0, -9, -7, -12, 0, 0,
    0, 0, -2, 0, 3, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, -2, 1, -3, -2,
    -5, -7, 0, 0, 0, 2, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, -5, 0,
    0, -2, 2, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, -5, 0, 0, 0, -4, 0, 0,
    0, 0, -5, -4, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, -5, 0, 0, -7,
    -2, 0, -10, 4, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -7, 2, -5, 0, -9, 0,
    -5, -4, -10, -12, -8, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, -3, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    -5, 7, 2, 0, -19, 0, -12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -12, 2, -32, 0,
    1, 0, 0, 0, 0, 0, 0, 0,
    -2, -1, 0, -1, 2, 2, -1, 0,
    2, 0, 1, 0, 0, 0, 0, -5,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, -11, 0, -7, -4, -2, -12, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -2, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, -7, 0, 5,
    -22, 0, 0, -5, 0, 0, -7, 0,
    7, 0, 0, 0, 0, 0, 0, 5,
    -11, -2, -2, 2, -2, 0, 0, 0,
    3, 0, 0, -1, -7, 0, -7, 0,
    0, 0, 0, 0, -6, -17, 0, 0,
    0, 0, -37, 0, 0, 0, -37, 0,
    5, -15, 10, 0, -22, 0, 0, -5,
    0, -5, 0, 0, 2, 0, -19, 0,
    2, -10, 0, -3, -29, -7, -22, -15,
    0, -29, 0, 0, 2, -2, 0, -2,
    0, 0, 0, 0, 0, -2, -15, 0,
    0, -5, 0, 0, 0, -5, 0, 0,
    0, -19, 0, -22, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 5,
    0, -17, 2, -37, 2, 0, 0, 0,
    0, -10, -6, 0, 0, -3, -2, 0,
    -2, 0, 2, 0, 0, 0, -1, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -2, -2, -4, 0,
    -2, -1, 0, -8, 0, 0, -1, -5,
    0, -5, 0, 0, 0, 0, 0, -2,
    -2, 0, 0, 0, 0, -2, 0, 5,
    -5, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, -2, 0, 2, 2, -3,
    0, -3, 0, 0, -8, 0, 0, 0,
    1, 0, 1, 0, 0, 0, 0, -1,
    2, -4, 0, 0, -5, 0, 5, 0,
    -10, 7, 2, 0, -24, -19, -32, -5,
    0, 0, 0, -17, 0, 0, 0, 0,
    -10, 0, 5, 0, -23, -9, -37, -4,
    3, 0, 3, 2, 0, 5, 0, 0,
    -24, -24, 0, -24, 2, 2, -19, -27,
    0, -20, -27, -19, -19, -5, 0, 0,
    0, -7, 5, 0, 0, -19, -15, -22,
    -5, 0, 0, 0, -12, 0, 0, 0,
    0, 0, 0, 2, 0, -17, -5, -22,
    -2, 3, 0, 0, 0, 0, 0, 0,
    0, -17, -16, 0, -16, 2, 0, -14,
    -15, 0, -12, -9, -5, -10, -2, 0,
    2, 0, -7, 5, 0, 0, -15, -5,
    -17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, -13, -4,
    -17, -1, 2, 0, 0, 0, 0, 0,
    0, 0, -12, -11, 0, -11, 2, 0,
    -8, -7, 0, -8, -5, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    -12, 0, -10, -5, 0, 0, -10, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, -7, 0, -7, 0,
    0, 0, 0, 0, -5, -10, 0, 0,
    -5, 0, 0, 0, -12, 7, 0, 0,
    -24, -19, -29, -5, 0, 0, 0, -19,
    0, 0, -5, 0, -17, 0, -2, 0,
    -24, -12, -39, -8, 5, 0, 0, 0,
    0, 0, 0, 0, -26, -29, 0, -29,
    0, 0, -22, -28, -7, -20, -17, -17,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -4, -5, 0,
    -5, 0, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -22, 0,
    -17, -12, 0, -22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -11, 0, 0,
    -5, -5, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, -27,
    0, -15, -10, 0, -17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -3, 0, 0, 0, 0, -5, 0,
    0, -7, -5, 0, -3, 1, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    0, 0, -12, 0, 0, 0, 5, 0,
    -24, 0, 0, 0, 0, -27, 0, -17,
    0, 2, 0, 2, 0, 0, 0, 1,
    -3, 0, -3, -4, -2, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, -10, 0, 0, 0, 0,
    0, -22, 0, -12, -5, 0, -19, 0,
    0, 2, 0, 4, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, -1, 0, -15, 0, 0, 0,
    0, 0, -24, 0, -12, -5, 0, -24,
    0, 0, 0, 2, 0, 2, 0, 0,
    0, 1, 0, 0, -2, 0, -1, 0,
    0, 10, 0, -2, 12, 7, 0, -10,
    -7, -10, 0, 0, 0, 0, -5, 0,
    10, 0, 2, 2, 0, 10, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -4, 2, -4, 2,
    0, 0, -2, 2, 0, 2, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, -5, 0, 0, 0, 0,
    0, -10, 0, -7, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, -19, 0,
    0, 0, 0, -18, 0, 0, -2, -7,
    0, -7, 0, 0, 0, 0, 1, 0,
    0, 0, 0, -5, 0, 2, 0, 0,
    0, 0, 0, -17, -5, -10, 2, 5,
    0, -5, -5, 0, -7, 0, 5, 6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    -2, 4, -2, 0, 0, 0, 0, 4,
    0, 4, 5, 4, 0, 0, -5, 0,
    2, 0, -5, 0, 1, 0, 1, 0,
    -5, 0, 0, 0, 0, -5, 0, 0,
    2, 0, -12, 0, 0, 0, 0, 0,
    -15, 0, -7, 0, 0, -27, 0, 0,
    1, 1, 2, 1, 0, 0, 0, 2,
    1, 0, -2, -1, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 5, -5, 2,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 2, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, -5, -1, -5, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, -17, 0, -5, 0, 0, -15,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -5, -7, 0, 0, -12,
    -2, -10, 0, 0, 0, 0, -5, 0,
    -7, 0, 0, 0, 0, -7, -2, -10,
    0, -7, 0, -27, 0, 0, 0, -10,
    -19, -12, 0, -4, -3, 4, -3, 0,
    0, 0, -3, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, -19, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 4, -4,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, 0,
    -7, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
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
const lv_font_t ui_font_OPPOSansBold14 = {
#else
lv_font_t ui_font_OPPOSansBold14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_OPPOSANSBOLD14*/

