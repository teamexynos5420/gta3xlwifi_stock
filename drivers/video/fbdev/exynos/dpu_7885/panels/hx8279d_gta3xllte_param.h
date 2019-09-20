#ifndef __HX8279D_GTA3XLLTE_PARAM_H__
#define __HX8279D_GTA3XLLTE_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	117

#define HX8279D_ID_REG				0xFC
#define HX8279D_DUAL_REG				0xB1

#define HX8279D_ID_LEN				3 /* 1 */

#define PANEL_STATE_SUSPENED	0
#define PANEL_STATE_RESUMED		1
#define PANEL_STATE_SUSPENDING	2

struct mipi_cmd {
	u8 cmd[2];
};

static const struct mipi_cmd SEQ_CMD_TABLE[] = {
	{{0xB0, 0x06} },
	{{0xB8, 0xA5} },
	{{0xBC, 0x00} },
	{{0xC0, 0xA5} },
	{{0xC7, 0x0F} },
	{{0xD5, 0x32} },
	{{0xB8, 0x00} },
	{{0xC0, 0x00} },
	{{0xB0, 0x01} },
	{{0xE0, 0x26} },
	{{0xE1, 0x26} },
	{{0xDC, 0x00} },
	{{0xDD, 0x00} },
	{{0xCC, 0x26} },
	{{0xCD, 0x26} },
	{{0xC8, 0x00} },
	{{0xC9, 0x00} },
	{{0xD2, 0x03} },
	{{0xD3, 0x03} },
	{{0xE6, 0x04} },
	{{0xE7, 0x04} },
	{{0xC4, 0x09} },
	{{0xC5, 0x09} },
	{{0xD8, 0x0A} },
	{{0xD9, 0x0A} },
	{{0xC2, 0x0B} },
	{{0xC3, 0x0B} },
	{{0xD6, 0x0C} },
	{{0xD7, 0x0C} },
	{{0xC0, 0x05} },
	{{0xC1, 0x05} },
	{{0xD4, 0x06} },
	{{0xD5, 0x06} },
	{{0xCA, 0x07} },
	{{0xCB, 0x07} },
	{{0xDE, 0x08} },
	{{0xDF, 0x08} },
	{{0xB0, 0x03} },
	{{0xC8, 0x0B} },
	{{0xC9, 0x07} },
	{{0xC3, 0x00} },
	{{0xE7, 0x00} },
	{{0xC5, 0x2A} },
	{{0xDE, 0x2A} },
	{{0xCA, 0x43} },
	{{0xE4, 0xC0} },
	{{0xE5, 0x0D} },
	{{0xCB, 0x28} },
	{{0xB0, 0x00} },
	{{0xB6, 0x03} },
	{{0xBA, 0x87} },
	{{0xBF, 0x15} },
	{{0xC0, 0x0F} },
	{{0xC2, 0x09} },
	{{0xC3, 0x02} },
	{{0xC4, 0x0F} },
	{{0xC5, 0x02} },
	{{0xB0, 0x02} },
	{{0xC0, 0x00} },
	{{0xC1, 0x04} },
	{{0xC2, 0x15} },
	{{0xC3, 0x26} },
	{{0xC4, 0x2A} },
	{{0xC5, 0x2F} },
	{{0xC6, 0x32} },
	{{0xC7, 0x36} },
	{{0xC8, 0x3A} },
	{{0xC9, 0x37} },
	{{0xCA, 0x38} },
	{{0xCB, 0x37} },
	{{0xCC, 0x3F} },
	{{0xCD, 0x32} },
	{{0xCE, 0x34} },
	{{0xCF, 0x33} },
	{{0xD0, 0x07} },
	{{0xD2, 0x04} },
	{{0xD3, 0x0B} },
	{{0xD4, 0x17} },
	{{0xD5, 0x2B} },
	{{0xD6, 0x38} },
	{{0xD7, 0x3B} },
	{{0xD8, 0x3D} },
	{{0xD9, 0x3E} },
	{{0xDA, 0x3E} },
	{{0xDB, 0x3F} },
	{{0xDC, 0x3F} },
	{{0xDD, 0x3F} },
	{{0xDE, 0x3F} },
	{{0xDF, 0x32} },
	{{0xE0, 0x30} },
	{{0xE1, 0x2F} },
	{{0xE2, 0x00} },
	{{0xB0, 0x07} },
	{{0xB1, 0x00} },
	{{0xB2, 0x00} },
	{{0xB3, 0x0E} },
	{{0xB4, 0x1B} },
	{{0xB5, 0x2C} },
	{{0xB6, 0x39} },
	{{0xB7, 0x5B} },
	{{0xB8, 0x7C} },
	{{0xB9, 0xBC} },
	{{0xBA, 0xFB} },
	{{0xBB, 0x75} },
	{{0xBC, 0xF5} },
	{{0xBD, 0xF9} },
	{{0xBE, 0x7B} },
	{{0xBF, 0x01} },
	{{0xC0, 0x45} },
	{{0xC1, 0x85} },
	{{0xC2, 0xA1} },
	{{0xC3, 0xBF} },
	{{0xC4, 0xCF} },
	{{0xC5, 0xDE} },
	{{0xC6, 0xEE} },
	{{0xC7, 0xF8} },
	{{0xC8, 0xFC} },
	{{0xC9, 0x00} },
	{{0xCA, 0x00} },
	{{0xCB, 0x05} },
	{{0xCC, 0x6F} },
	{{0xCD, 0xFF} },
	{{0xCE, 0xFF} },
	{{0xB0, 0x08} },
	{{0xB1, 0x00} },
	{{0xB2, 0x02} },
	{{0xB3, 0x13} },
	{{0xB4, 0x1E} },
	{{0xB5, 0x2C} },
	{{0xB6, 0x39} },
	{{0xB7, 0x5C} },
	{{0xB8, 0x7C} },
	{{0xB9, 0xBC} },
	{{0xBA, 0xFB} },
	{{0xBB, 0x76} },
	{{0xBC, 0xF6} },
	{{0xBD, 0xFA} },
	{{0xBE, 0x7D} },
	{{0xBF, 0x03} },
	{{0xC0, 0x47} },
	{{0xC1, 0x86} },
	{{0xC2, 0xA3} },
	{{0xC3, 0xC0} },
	{{0xC4, 0xD0} },
	{{0xC5, 0xDF} },
	{{0xC6, 0xEE} },
	{{0xC7, 0xF9} },
	{{0xC8, 0xFC} },
	{{0xC9, 0x00} },
	{{0xCA, 0x00} },
	{{0xCB, 0x05} },
	{{0xCC, 0x6F} },
	{{0xCD, 0xFF} },
	{{0xCE, 0xFF} },
	{{0xB0, 0x09} },
	{{0xB1, 0x00} },
	{{0xB2, 0x10} },
	{{0xB3, 0x14} },
	{{0xB4, 0x1D} },
	{{0xB5, 0x2B} },
	{{0xB6, 0x38} },
	{{0xB7, 0x5B} },
	{{0xB8, 0x7C} },
	{{0xB9, 0xBD} },
	{{0xBA, 0xFE} },
	{{0xBB, 0x78} },
	{{0xBC, 0xFA} },
	{{0xBD, 0xFF} },
	{{0xBE, 0x80} },
	{{0xBF, 0x05} },
	{{0xC0, 0x47} },
	{{0xC1, 0x85} },
	{{0xC2, 0xA1} },
	{{0xC3, 0xBC} },
	{{0xC4, 0xCB} },
	{{0xC5, 0xD9} },
	{{0xC6, 0xE8} },
	{{0xC7, 0xEF} },
	{{0xC8, 0xF4} },
	{{0xC9, 0x00} },
	{{0xCA, 0x00} },
	{{0xCB, 0x05} },
	{{0xCC, 0x6F} },
	{{0xCD, 0xFF} },
	{{0xCE, 0xFF} },
	{{0xB0, 0x0A} },
	{{0xB1, 0x00} },
	{{0xB2, 0x00} },
	{{0xB3, 0x0E} },
	{{0xB4, 0x1B} },
	{{0xB5, 0x2C} },
	{{0xB6, 0x39} },
	{{0xB7, 0x5B} },
	{{0xB8, 0x7C} },
	{{0xB9, 0xBC} },
	{{0xBA, 0xFB} },
	{{0xBB, 0x75} },
	{{0xBC, 0xF5} },
	{{0xBD, 0xF9} },
	{{0xBE, 0x7B} },
	{{0xBF, 0x01} },
	{{0xC0, 0x45} },
	{{0xC1, 0x85} },
	{{0xC2, 0xA1} },
	{{0xC3, 0xBF} },
	{{0xC4, 0xCF} },
	{{0xC5, 0xDE} },
	{{0xC6, 0xEE} },
	{{0xC7, 0xF8} },
	{{0xC8, 0xFC} },
	{{0xC9, 0x00} },
	{{0xCA, 0x00} },
	{{0xCB, 0x05} },
	{{0xCC, 0x6F} },
	{{0xCD, 0xFF} },
	{{0xCE, 0xFF} },
	{{0xB0, 0x0B} },
	{{0xB1, 0x00} },
	{{0xB2, 0x02} },
	{{0xB3, 0x13} },
	{{0xB4, 0x1E} },
	{{0xB5, 0x2C} },
	{{0xB6, 0x39} },
	{{0xB7, 0x5C} },
	{{0xB8, 0x7C} },
	{{0xB9, 0xBC} },
	{{0xBA, 0xFB} },
	{{0xBB, 0x76} },
	{{0xBC, 0xF6} },
	{{0xBD, 0xFA} },
	{{0xBE, 0x7D} },
	{{0xBF, 0x03} },
	{{0xC0, 0x47} },
	{{0xC1, 0x86} },
	{{0xC2, 0xA3} },
	{{0xC3, 0xC0} },
	{{0xC4, 0xD0} },
	{{0xC5, 0xDF} },
	{{0xC6, 0xEE} },
	{{0xC7, 0xF9} },
	{{0xC8, 0xFC} },
	{{0xC9, 0x00} },
	{{0xCA, 0x00} },
	{{0xCB, 0x05} },
	{{0xCC, 0x6F} },
	{{0xCD, 0xFF} },
	{{0xCE, 0xFF} },
	{{0xB0, 0x0C} },
	{{0xB1, 0x00} },
	{{0xB2, 0x10} },
	{{0xB3, 0x14} },
	{{0xB4, 0x1D} },
	{{0xB5, 0x2B} },
	{{0xB6, 0x38} },
	{{0xB7, 0x5B} },
	{{0xB8, 0x7C} },
	{{0xB9, 0xBD} },
	{{0xBA, 0xFE} },
	{{0xBB, 0x78} },
	{{0xBC, 0xFA} },
	{{0xBD, 0xFF} },
	{{0xBE, 0x80} },
	{{0xBF, 0x05} },
	{{0xC0, 0x47} },
	{{0xC1, 0x85} },
	{{0xC2, 0xA1} },
	{{0xC3, 0xBC} },
	{{0xC4, 0xCB} },
	{{0xC5, 0xD9} },
	{{0xC6, 0xE8} },
	{{0xC7, 0xEF} },
	{{0xC8, 0xF4} },
	{{0xC9, 0x00} },
	{{0xCA, 0x00} },
	{{0xCB, 0x05} },
	{{0xCC, 0x6F} },
	{{0xCD, 0xFF} },
	{{0xCE, 0xFF} },
};

static unsigned char SEQ_SLEEP_IN[] = {
	0xB2, 0x00
};

static unsigned char SEQ_TABLE_0[] = {
	0xB0, 0x00
};

static unsigned char SEQ_TABLE_4[] = {
	0xB0, 0x04
};

static unsigned char SEQ_TABLE_5[] = {
	0xB0, 0x05
};

static unsigned char SEQ_EOTP_DISABLE[] = {
	0xB1, 0xE5
};

static const unsigned char SEQ_TLPX_80NS[] = {
	0xB3, 0x52
};

static unsigned char SEQ_DISPLAY_ON[] = {
	0xB3, 0x08
};

static unsigned char SEQ_DISPLAY_OFF[] = {
	0xB3, 0x8C // Display off, BL off
};

static unsigned char SEQ_SCREEN_OFF[] = {
	0xB3, 0x88 // Display off
};

static unsigned char SEQ_BL_00[] = {
	0xB8, 0x00 // BL off
};

/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	0, 1, 1, 2, 2, 3, 4, 4, 5, 6, /* 2: 1 */
	6, 7, 7, 8, 9, 9, 10, 11, 11, 12,
	13, 13, 14, 14, 15, 16, 16, 17, 18, 18,
	19, 20, 20, 21, 21, 22, 23, 23, 24, 25,
	25, 26, 27, 27, 28, 28, 29, 30, 30, 31,
	32, 32, 33, 34, 34, 35, 35, 36, 37, 37,
	38, 39, 39, 40, 40, 41, 42, 42, 43, 44,
	44, 45, 46, 46, 47, 47, 48, 49, 49, 50,
	51, 51, 52, 53, 53, 54, 54, 55, 56, 56,
	57, 58, 58, 59, 60, 60, 61, 61, 62, 63,
	63, 64, 65, 65, 66, 67, 67, 68, 68, 69,
	70, 70, 71, 72, 72, 73, 74, 74, 75, 75, /* 117: 74 */
	76, 76, 77, 78, 78, 79, 79, 80, 81, 81,
	82, 82, 83, 84, 84, 85, 85, 86, 87, 87,
	88, 88, 89, 90, 90, 91, 91, 92, 93, 93,
	94, 94, 95, 95, 96, 97, 97, 98, 98, 99,
	100, 100, 101, 101, 102, 103, 103, 104, 104, 105,
	106, 106, 107, 107, 108, 109, 109, 110, 110, 111,
	112, 112, 113, 113, 114, 115, 115, 116, 116, 117,
	117, 118, 119, 119, 120, 120, 121, 122, 122, 123,
	123, 124, 125, 125, 126, 126, 127, 128, 128, 129,
	129, 130, 131, 131, 132, 132, 133, 134, 134, 135,
	135, 136, 136, 137, 138, 138, 139, 139, 140, 141,
	141, 142, 142, 143, 144, 144, 145, 145, 146, 147,
	147, 148, 148, 149, 150, 150, 151, 151, 152, 153,
	153, 154, 154, 155, 156, 156, 156, 156, 156, 156, /* 255: 156 */
	156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
	156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
	156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
	156, 156, 156, 156, 156, 156, 156, 156, 156, 156,
	156, 156, 156, 156, 156, 199,
};

#endif /* __HX8279D_GTA3XLLTE_PARAM_H__ */

