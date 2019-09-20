/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_3P8SP_SET_A_H
#define FIMC_IS_CIS_3P8SP_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-3p8sp.h"

const u32 sensor_3p8sp_setfile_A_Global[] = {
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F38,	0x02,
	0x6F12,	0x0088,	0x02,
	0x6F12,	0x0D70,	0x02,
	0x3604,	0x0002,	0x02,
	0x3606,	0x0103,	0x02,
	0xF496,	0x0048,	0x02,
	0xF43A,	0x0015,	0x02,
	0xF484,	0x0006,	0x02,
	0xF440,	0x00AF,	0x02,
	0xF442,	0x44C6,	0x02,
	0xF408,	0xFFF7,	0x02,
	0x3664,	0x0019,	0x02,
	0xF494,	0x0010,	0x02,
	0x367A,	0x0100,	0x02,
	0x362A,	0x0104,	0x02,
	0x362E,	0x0404,	0x02,
	0x32B2,	0x0008,	0x02,
	0x3286,	0x0003,	0x02,
	0x328A,	0x0005,	0x02,
	0xF47C,	0x001F,	0x02,
	0xF62E,	0x00C5,	0x02,
	0xF630,	0x00CD,	0x02,
	0xF632,	0x00DD,	0x02,
	0xF634,	0x00E5,	0x02,
	0xF636,	0x00F5,	0x02,
	0xF638,	0x00FD,	0x02,
	0xF63A,	0x010D,	0x02,
	0xF63C,	0x0115,	0x02,
	0xF63E,	0x0125,	0x02,
	0xF640,	0x012D,	0x02,
	0x1006,	0x0004,	0x02,
	0x3070,	0x0000,	0x02,
	0x31C0,	0x00C8,	0x02,
	0x31A4,	0x0102,	0x02,
	0x30D4,	0x0300,	0x02,
};

/*
 * [Mode Information]
 *	0: 4608 x 3456 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	1: 4608 x 2592 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	2: 4608 x 2240 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	3: 4608 x 2176 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	4: 3456 x 3456 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	5: 2304 x 1728 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	6: 2304 x 1728 @60,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	7: 2304 x 1296 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	8: 2304 x 1120 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	9: 2304 x 1088 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	10: 1728 x 1728 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 *	11: 1152 x 648 @120,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1456, MIPI Mclk(Mhz): 26
 */

const u32 sensor_3p8sp_setfile_A_4608x3456_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x0018,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x0D80,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0x0000,	0x02,
	0x36C6,	0x0000,	0x02,
	0x36C8,	0x0000,	0x02,
	0x36CA,	0x0000,	0x02,
	0x36CC,	0x0000,	0x02,
	0x36CE,	0x0000,	0x02,
	0x36D0,	0x0000,	0x02,
	0x36D2,	0x0000,	0x02,
	0x36D4,	0x0000,	0x02,
	0x36D6,	0x0000,	0x02,
	0x36D8,	0x0000,	0x02,
	0x36DA,	0x0000,	0x02,
	0x36DC,	0x0000,	0x02,
	0x36DE,	0x0000,	0x02,
	0x36E0,	0x0000,	0x02,
	0x36E2,	0x0000,	0x02,
};

const u32 sensor_3p8sp_setfile_A_4608x2592_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x01C8,	0x02,
	0x034A,	0x0BE7,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x0A20,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0x0000,	0x02,
	0x36C6,	0x0000,	0x02,
	0x36C8,	0x0000,	0x02,
	0x36CA,	0x0000,	0x02,
	0x36CC,	0x0000,	0x02,
	0x36CE,	0x0000,	0x02,
	0x36D0,	0x0000,	0x02,
	0x36D2,	0x0000,	0x02,
	0x36D4,	0x0000,	0x02,
	0x36D6,	0x0000,	0x02,
	0x36D8,	0x0000,	0x02,
	0x36DA,	0x0000,	0x02,
	0x36DC,	0x0000,	0x02,
	0x36DE,	0x0000,	0x02,
	0x36E0,	0x0000,	0x02,
	0x36E2,	0x0000,	0x02,
};

const u32 sensor_3p8sp_setfile_A_4608x2240_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x0278,	0x02,
	0x034A,	0x0B39,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x08C2,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0x0000,	0x02,
	0x36C6,	0x0000,	0x02,
	0x36C8,	0x0000,	0x02,
	0x36CA,	0x0000,	0x02,
	0x36CC,	0x0000,	0x02,
	0x36CE,	0x0000,	0x02,
	0x36D0,	0x0000,	0x02,
	0x36D2,	0x0000,	0x02,
	0x36D4,	0x0000,	0x02,
	0x36D6,	0x0000,	0x02,
	0x36D8,	0x0000,	0x02,
	0x36DA,	0x0000,	0x02,
	0x36DC,	0x0000,	0x02,
	0x36DE,	0x0000,	0x02,
	0x36E0,	0x0000,	0x02,
	0x36E2,	0x0000,	0x02,
};

const u32 sensor_3p8sp_setfile_A_4608x2176_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x0298,	0x02,
	0x034A,	0x0B17,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x0880,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0x0000,	0x02,
	0x36C6,	0x0000,	0x02,
	0x36C8,	0x0000,	0x02,
	0x36CA,	0x0000,	0x02,
	0x36CC,	0x0000,	0x02,
	0x36CE,	0x0000,	0x02,
	0x36D0,	0x0000,	0x02,
	0x36D2,	0x0000,	0x02,
	0x36D4,	0x0000,	0x02,
	0x36D6,	0x0000,	0x02,
	0x36D8,	0x0000,	0x02,
	0x36DA,	0x0000,	0x02,
	0x36DC,	0x0000,	0x02,
	0x36DE,	0x0000,	0x02,
	0x36E0,	0x0000,	0x02,
	0x36E2,	0x0000,	0x02,
};

const u32 sensor_3p8sp_setfile_A_3456x3456_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0258,	0x02,
	0x0348,	0x0FD7,	0x02,
	0x0346,	0x0018,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x0D80,	0x02,
	0x034E,	0x0D80,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0x0000,	0x02,
	0x36C6,	0x0000,	0x02,
	0x36C8,	0x0000,	0x02,
	0x36CA,	0x0000,	0x02,
	0x36CC,	0x0000,	0x02,
	0x36CE,	0x0000,	0x02,
	0x36D0,	0x0000,	0x02,
	0x36D2,	0x0000,	0x02,
	0x36D4,	0x0000,	0x02,
	0x36D6,	0x0000,	0x02,
	0x36D8,	0x0000,	0x02,
	0x36DA,	0x0000,	0x02,
	0x36DC,	0x0000,	0x02,
	0x36DE,	0x0000,	0x02,
	0x36E0,	0x0000,	0x02,
	0x36E2,	0x0000,	0x02,
};

const u32 sensor_3p8sp_setfile_A_2304x1728_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x0018,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x0900,	0x02,
	0x034E,	0x06C0,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0003,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0xFFE6,	0x02,
	0x36C6,	0xFFE6,	0x02,
	0x36C8,	0xFFE6,	0x02,
	0x36CA,	0xFFE6,	0x02,
	0x36CC,	0xFFE6,	0x02,
	0x36CE,	0xFFE6,	0x02,
	0x36D0,	0xFFE6,	0x02,
	0x36D2,	0xFFE6,	0x02,
	0x36D4,	0xFFE6,	0x02,
	0x36D6,	0xFFE6,	0x02,
	0x36D8,	0xFFE6,	0x02,
	0x36DA,	0xFFE6,	0x02,
	0x36DC,	0xFFE6,	0x02,
	0x36DE,	0xFFE6,	0x02,
	0x36E0,	0xFFE6,	0x02,
	0x36E2,	0xFFE6,	0x02,
};

const u32 sensor_3p8sp_setfile_A_2304x1728_60fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x0018,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x0900,	0x02,
	0x034E,	0x06C0,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x071E,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0003,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0xFFE6,	0x02,
	0x36C6,	0xFFE6,	0x02,
	0x36C8,	0xFFE6,	0x02,
	0x36CA,	0xFFE6,	0x02,
	0x36CC,	0xFFE6,	0x02,
	0x36CE,	0xFFE6,	0x02,
	0x36D0,	0xFFE6,	0x02,
	0x36D2,	0xFFE6,	0x02,
	0x36D4,	0xFFE6,	0x02,
	0x36D6,	0xFFE6,	0x02,
	0x36D8,	0xFFE6,	0x02,
	0x36DA,	0xFFE6,	0x02,
	0x36DC,	0xFFE6,	0x02,
	0x36DE,	0xFFE6,	0x02,
	0x36E0,	0xFFE6,	0x02,
	0x36E2,	0xFFE6,	0x02,
};

const u32 sensor_3p8sp_setfile_A_2304x1296_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x01C8,	0x02,
	0x034A,	0x0BE7,	0x02,
	0x034C,	0x0900,	0x02,
	0x034E,	0x0510,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0003,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0xFFE6,	0x02,
	0x36C6,	0xFFE6,	0x02,
	0x36C8,	0xFFE6,	0x02,
	0x36CA,	0xFFE6,	0x02,
	0x36CC,	0xFFE6,	0x02,
	0x36CE,	0xFFE6,	0x02,
	0x36D0,	0xFFE6,	0x02,
	0x36D2,	0xFFE6,	0x02,
	0x36D4,	0xFFE6,	0x02,
	0x36D6,	0xFFE6,	0x02,
	0x36D8,	0xFFE6,	0x02,
	0x36DA,	0xFFE6,	0x02,
	0x36DC,	0xFFE6,	0x02,
	0x36DE,	0xFFE6,	0x02,
	0x36E0,	0xFFE6,	0x02,
	0x36E2,	0xFFE6,	0x02,
};

const u32 sensor_3p8sp_setfile_A_2304x1120_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x0278,	0x02,
	0x034A,	0x0B39,	0x02,
	0x034C,	0x0900,	0x02,
	0x034E,	0x0460,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0003,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0xFFE6,	0x02,
	0x36C6,	0xFFE6,	0x02,
	0x36C8,	0xFFE6,	0x02,
	0x36CA,	0xFFE6,	0x02,
	0x36CC,	0xFFE6,	0x02,
	0x36CE,	0xFFE6,	0x02,
	0x36D0,	0xFFE6,	0x02,
	0x36D2,	0xFFE6,	0x02,
	0x36D4,	0xFFE6,	0x02,
	0x36D6,	0xFFE6,	0x02,
	0x36D8,	0xFFE6,	0x02,
	0x36DA,	0xFFE6,	0x02,
	0x36DC,	0xFFE6,	0x02,
	0x36DE,	0xFFE6,	0x02,
	0x36E0,	0xFFE6,	0x02,
	0x36E2,	0xFFE6,	0x02,
};

const u32 sensor_3p8sp_setfile_A_2304x1088_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1217,	0x02,
	0x0346,	0x0298,	0x02,
	0x034A,	0x0B17,	0x02,
	0x034C,	0x0900,	0x02,
	0x034E,	0x0440,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0003,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0xFFE6,	0x02,
	0x36C6,	0xFFE6,	0x02,
	0x36C8,	0xFFE6,	0x02,
	0x36CA,	0xFFE6,	0x02,
	0x36CC,	0xFFE6,	0x02,
	0x36CE,	0xFFE6,	0x02,
	0x36D0,	0xFFE6,	0x02,
	0x36D2,	0xFFE6,	0x02,
	0x36D4,	0xFFE6,	0x02,
	0x36D6,	0xFFE6,	0x02,
	0x36D8,	0xFFE6,	0x02,
	0x36DA,	0xFFE6,	0x02,
	0x36DC,	0xFFE6,	0x02,
	0x36DE,	0xFFE6,	0x02,
	0x36E0,	0xFFE6,	0x02,
	0x36E2,	0xFFE6,	0x02,
};

const u32 sensor_3p8sp_setfile_A_1728x1728_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0258,	0x02,
	0x0348,	0x0FD7,	0x02,
	0x0346,	0x0018,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x06C0,	0x02,
	0x034E,	0x06C0,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x0E3B,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0003,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x317A,	0x0130,	0x02,
	0x36C4,	0xFFE6,	0x02,
	0x36C6,	0xFFE6,	0x02,
	0x36C8,	0xFFE6,	0x02,
	0x36CA,	0xFFE6,	0x02,
	0x36CC,	0xFFE6,	0x02,
	0x36CE,	0xFFE6,	0x02,
	0x36D0,	0xFFE6,	0x02,
	0x36D2,	0xFFE6,	0x02,
	0x36D4,	0xFFE6,	0x02,
	0x36D6,	0xFFE6,	0x02,
	0x36D8,	0xFFE6,	0x02,
	0x36DA,	0xFFE6,	0x02,
	0x36DC,	0xFFE6,	0x02,
	0x36DE,	0xFFE6,	0x02,
	0x36E0,	0xFFE6,	0x02,
	0x36E2,	0xFFE6,	0x02,
};

const u32 sensor_3p8sp_setfile_A_1152x648_120fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x0071,	0x02,
	0x030E,	0x0070,	0x02,
	0x3644,	0x008B,	0x02,
	0x0344,	0x0498,	0x02,
	0x0348,	0x0D97,	0x02,
	0x0346,	0x0448,	0x02,
	0x034A,	0x0957,	0x02,
	0x034C,	0x0480,	0x02,
	0x034E,	0x0288,	0x02,
	0x0342,	0x1400,	0x02,
	0x0340,	0x038F,	0x02,
	0x0202,	0x0200,	0x02,
	0x0200,	0x0618,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0003,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x317A,	0x0045,	0x02,
	0x36C4,	0xFFE6,	0x02,
	0x36C6,	0xFFE6,	0x02,
	0x36C8,	0xFFE6,	0x02,
	0x36CA,	0xFFE6,	0x02,
	0x36CC,	0xFFE6,	0x02,
	0x36CE,	0xFFE6,	0x02,
	0x36D0,	0xFFE6,	0x02,
	0x36D2,	0xFFE6,	0x02,
	0x36D4,	0xFFE6,	0x02,
	0x36D6,	0xFFE6,	0x02,
	0x36D8,	0xFFE6,	0x02,
	0x36DA,	0xFFE6,	0x02,
	0x36DC,	0xFFE6,	0x02,
	0x36DE,	0xFFE6,	0x02,
	0x36E0,	0xFFE6,	0x02,
	0x36E2,	0xFFE6,	0x02,
};


const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_4608x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_4608x2592_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_4608x2240_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_4608x2176_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_3456x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_2304x1728_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_2304x1728_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x071E, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_2304x1296_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_2304x1120_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_2304x1088_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_1728x1728_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E3B, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3p8sp_pllinfo_A_1152x648_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, 	/* ext_clk */
	1456 * 1000 * 1000, 		/* mipi_datarate */
	559620000,  				/* pclk  = VT pix CLK (this value is different by cis) */
	0x038F, 					/* frame_length_lines */
	0x1400, 					/* line_length_pck */
};

static const u32 *sensor_3p8sp_setfiles_A[] = {
	sensor_3p8sp_setfile_A_4608x3456_30fps,
	sensor_3p8sp_setfile_A_4608x2592_30fps,
	sensor_3p8sp_setfile_A_4608x2240_30fps,
	sensor_3p8sp_setfile_A_4608x2176_30fps,
	sensor_3p8sp_setfile_A_3456x3456_30fps,
	sensor_3p8sp_setfile_A_2304x1728_30fps,
	sensor_3p8sp_setfile_A_2304x1728_60fps,
	sensor_3p8sp_setfile_A_2304x1296_30fps,
	sensor_3p8sp_setfile_A_2304x1120_30fps,
	sensor_3p8sp_setfile_A_2304x1088_30fps,
	sensor_3p8sp_setfile_A_1728x1728_30fps,
	sensor_3p8sp_setfile_A_1152x648_120fps,
};

static const u32 sensor_3p8sp_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_3p8sp_setfile_A_4608x3456_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_4608x2592_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_4608x2240_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_4608x2176_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_3456x3456_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_2304x1728_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_2304x1728_60fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_2304x1296_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_2304x1120_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_2304x1088_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_1728x1728_30fps),
	ARRAY_SIZE(sensor_3p8sp_setfile_A_1152x648_120fps),
};

static const struct sensor_pll_info_compact *sensor_3p8sp_pllinfos_A[] = {
	&sensor_3p8sp_pllinfo_A_4608x3456_30fps,
	&sensor_3p8sp_pllinfo_A_4608x2592_30fps,
	&sensor_3p8sp_pllinfo_A_4608x2240_30fps,
	&sensor_3p8sp_pllinfo_A_4608x2176_30fps,
	&sensor_3p8sp_pllinfo_A_3456x3456_30fps,
	&sensor_3p8sp_pllinfo_A_2304x1728_30fps,
	&sensor_3p8sp_pllinfo_A_2304x1728_60fps,
	&sensor_3p8sp_pllinfo_A_2304x1296_30fps,
	&sensor_3p8sp_pllinfo_A_2304x1120_30fps,
	&sensor_3p8sp_pllinfo_A_2304x1088_30fps,
	&sensor_3p8sp_pllinfo_A_1728x1728_30fps,
	&sensor_3p8sp_pllinfo_A_1152x648_120fps,
};
#endif

