/*
 * Copyright (C) 2016 MediaTek Inc.
 * Copyright (C) 2021 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _MTK_DATA_HW_ROUNDEDPATTERN_H_
#define _MTK_DATA_HW_ROUNDEDPATTERN_H_

#define ROUND_CORNER_H_TOP 208
#define ROUND_CORNER_H_BOT 171

static unsigned char top_rc_pattern[] = {
	0x9f, 0x0, 0x31, 0x2, 0xb7, 0x1, 0x81, 0x2, 0x11, 0x11, 0x99, 0x3, 0x37, 0x4, 0x31, 0x1, 0xdf, 0xdf, 0xdf, 0xdf, 0xbf, 0xbf, 0xbf, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x6f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x50, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x60, 0x60, 0x6f, 0x80, 0x90, 0x9f, 0xbf, 0xcf, 0xef, 0xdf, 0xcf, 0xbf, 0x9f, 0x90, 0x80, 0x6f, 0x60, 0x60, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x6f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0xbf, 0xbf, 0xbf, 0xcf, 0xdf, 0xdf, 0xdf, 0xfe,
	0x8c, 0x0, 0x10, 0x2, 0xbf, 0x1, 0x79, 0x2, 0x7, 0x7, 0xac, 0x3, 0x37, 0x4, 0x10, 0x1, 0xdf, 0xdf, 0xbf, 0xaf, 0x9f, 0x9f, 0x80, 0x80, 0x60, 0x60, 0x60, 0x40, 0x40, 0x20, 0x20, 0x20, 0x20, 0x40, 0x50, 0x80, 0x9f, 0xbf, 0xef, 0xdf, 0xaf, 0x9f, 0x6f, 0x60, 0x30, 0x20, 0x20, 0x20, 0x30, 0x40, 0x40, 0x50, 0x60, 0x60, 0x80, 0x80, 0x9f, 0x9f, 0xbf, 0xbf, 0xcf, 0xdf, 0xfe,
	0x7f, 0x0, 0xb, 0x2, 0xc4, 0x1, 0x73, 0x2, 0x5, 0x6, 0xb9, 0x3, 0x37, 0x4, 0xb, 0x1, 0xef, 0xdf, 0xbf, 0x9f, 0x9f, 0x80, 0x60, 0x60, 0x40, 0x20, 0x20, 0x10, 0x40, 0x6f, 0xa0, 0xcf, 0xef, 0xbf, 0x90, 0x60, 0x30, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x80, 0x90, 0xaf, 0xbf, 0xcf, 0xef, 0xfe,
	0x76, 0x0, 0x9, 0x2, 0xc9, 0x1, 0x6f, 0x2, 0x4, 0x4, 0xc2, 0x3, 0x37, 0x4, 0x8, 0x1, 0xef, 0xcf, 0xaf, 0x90, 0x6f, 0x60, 0x40, 0x20, 0x10, 0x40, 0x6f, 0xaf, 0xef, 0xef, 0x9f, 0x6f, 0x30, 0x20, 0x40, 0x50, 0x6f, 0x90, 0xaf, 0xbf, 0xef, 0xfe,
	0x6f, 0x0, 0x7, 0x2, 0xcc, 0x1, 0x6c, 0x2, 0x3, 0x3, 0xc9, 0x3, 0x37, 0x4, 0x6, 0x1, 0xdf, 0xaf, 0x90, 0x6f, 0x50, 0x20, 0x10, 0x40, 0x80, 0xbf, 0xbf, 0x6f, 0x30, 0x30, 0x40, 0x6f, 0x90, 0xbf, 0xcf, 0xfe,
	0x69, 0x0, 0x5, 0x2, 0xcf, 0x1, 0x69, 0x2, 0x3, 0x3, 0xcf, 0x3, 0x37, 0x4, 0x5, 0x1, 0xcf, 0x9f, 0x6f, 0x60, 0x20, 0x20, 0x60, 0xbf, 0xbf, 0x6f, 0x10, 0x30, 0x50, 0x80, 0xaf, 0xcf, 0xfe,
	0x63, 0x0, 0x5, 0x2, 0xd2, 0x1, 0x66, 0x2, 0x3, 0x3, 0xd5, 0x3, 0x37, 0x4, 0x5, 0x1, 0xef, 0xbf, 0x90, 0x60, 0x20, 0x20, 0x60, 0xdf, 0xbf, 0x6f, 0x10, 0x30, 0x50, 0x90, 0xbf, 0xef, 0xfe,
	0x5f, 0x0, 0x4, 0x2, 0xd4, 0x1, 0x64, 0x2, 0x2, 0x2, 0xd9, 0x3, 0x37, 0x4, 0x4, 0x1, 0xcf, 0x90, 0x60, 0x20, 0x40, 0xaf, 0xbf, 0x40, 0x30, 0x50, 0x90, 0xbf, 0xfe,
	0x5a, 0x0, 0x5, 0x2, 0xd6, 0x1, 0x62, 0x2, 0x2, 0x2, 0xde, 0x3, 0x37, 0x4, 0x4, 0x1, 0xef, 0xbf, 0x80, 0x40, 0x10, 0x20, 0xa0, 0x9f, 0x20, 0x40, 0x6f, 0xbf, 0xef, 0xfe,
	0x57, 0x0, 0x4, 0x2, 0xd8, 0x1, 0x60, 0x2, 0x2, 0x2, 0xe1, 0x3, 0x37, 0x4, 0x3, 0x1, 0xbf, 0x80, 0x40, 0x10, 0x20, 0xa0, 0x9f, 0x20, 0x40, 0x80, 0xbf, 0xfe,
	0x53, 0x0, 0x4, 0x2, 0xda, 0x1, 0x5e, 0x2, 0x2, 0x2, 0xe5, 0x3, 0x37, 0x4, 0x4, 0x1, 0xef, 0x9f, 0x60, 0x10, 0x31, 0xdf, 0xbf, 0x40, 0x10, 0x50, 0xa0, 0xdf, 0xfe,
	0x50, 0x0, 0x3, 0x2, 0xdc, 0x1, 0x5c, 0x2, 0x2, 0x2, 0xe8, 0x3, 0x37, 0x4, 0x3, 0x1, 0xef, 0x90, 0x40, 0x70, 0xef, 0xee, 0x5f, 0x40, 0xa0, 0xdf, 0xfe,
	0x4d, 0x0, 0x3, 0x2, 0xdd, 0x1, 0x5b, 0x2, 0x2, 0x2, 0xeb, 0x3, 0x37, 0x4, 0x3, 0x1, 0xef, 0x90, 0x40, 0x21, 0xcf, 0xae, 0x10, 0x40, 0xa0, 0xdf, 0xfe,
	0x4b, 0x0, 0x3, 0x2, 0xde, 0x1, 0x59, 0x2, 0x1, 0x2, 0xed, 0x3, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x40, 0x10, 0x80, 0xee, 0x70, 0x40, 0xa0, 0xfe,
	0x48, 0x0, 0x3, 0x2, 0xe0, 0x1, 0x58, 0x2, 0x2, 0x2, 0xf0, 0x3, 0x37, 0x4, 0x3, 0x1, 0xef, 0x80, 0x10, 0x41, 0xdf, 0xde, 0x30, 0x20, 0x60, 0xdf, 0xfe,
	0x46, 0x0, 0x2, 0x2, 0xe1, 0x1, 0x57, 0x2, 0x2, 0x2, 0xf2, 0x3, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x40, 0x21, 0xdf, 0xce, 0x20, 0x40, 0xa0, 0xfe,
	0x43, 0x0, 0x3, 0x2, 0xe2, 0x1, 0x56, 0x2, 0x2, 0x2, 0xf4, 0x3, 0x37, 0x4, 0x2, 0x1, 0xef, 0x90, 0x30, 0x21, 0xcf, 0xae, 0x10, 0x20, 0xa0, 0xfe,
	0x41, 0x0, 0x3, 0x2, 0xe3, 0x1, 0x55, 0x2, 0x2, 0x1, 0xf7, 0x3, 0x37, 0x4, 0x3, 0x1, 0xef, 0x80, 0x10, 0x11, 0xcf, 0x9f, 0x20, 0x80, 0xdf, 0xfe,
	0x3f, 0x0, 0x3, 0x2, 0xe4, 0x1, 0x54, 0x2, 0x2, 0x1, 0xf9, 0x3, 0x37, 0x4, 0x3, 0x1, 0xef, 0x80, 0x10, 0x11, 0xcf, 0x9f, 0x20, 0x80, 0xdf, 0xfe,
	0x3e, 0x0, 0x2, 0x2, 0xe5, 0x1, 0x53, 0x2, 0x2, 0x1, 0xfa, 0x3, 0x37, 0x4, 0x2, 0x1, 0x90, 0x10, 0x11, 0xdf, 0xce, 0x20, 0xa0, 0xfe,
	0x3c, 0x0, 0x2, 0x2, 0xe6, 0x1, 0x52, 0x2, 0x2, 0x2, 0xfc, 0x3, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x20, 0x21, 0xdf, 0xde, 0x10, 0x20, 0xa0, 0xfe,
	0x3a, 0x0, 0x2, 0x2, 0xe7, 0x1, 0x51, 0x2, 0x2, 0x2, 0xfe, 0x3, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x40, 0x21, 0xef, 0xde, 0x20, 0x31, 0xdf, 0xfe,
	0x38, 0x0, 0x2, 0x2, 0xe7, 0x1, 0x50, 0x2, 0x1, 0x2, 0x0, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x80, 0x51, 0xfe, 0x30, 0x70, 0xef, 0xfe,
	0x37, 0x0, 0x2, 0x2, 0xe8, 0x1, 0x4f, 0x2, 0x2, 0x2, 0x1, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x20, 0x1, 0x90, 0xfe, 0x70, 0x20, 0xa0, 0xfe,
	0x35, 0x0, 0x2, 0x2, 0xe9, 0x1, 0x4f, 0x2, 0x2, 0x1, 0x3, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x70, 0x1, 0xbf, 0x9e, 0x60, 0xdf, 0xfe,
	0x34, 0x0, 0x2, 0x2, 0xea, 0x1, 0x4e, 0x2, 0x2, 0x2, 0x4, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x20, 0x21, 0xef, 0xde, 0x20, 0x21, 0xbf, 0xfe,
	0x33, 0x0, 0x1, 0x2, 0xea, 0x1, 0x4d, 0x2, 0x1, 0x2, 0x5, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x71, 0xfe, 0x40, 0x80, 0xfe,
	0x31, 0x0, 0x2, 0x2, 0xeb, 0x1, 0x4d, 0x2, 0x2, 0x1, 0x7, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x40, 0x1, 0xaf, 0x8f, 0x21, 0xdf, 0xfe,
	0x30, 0x0, 0x2, 0x2, 0xec, 0x1, 0x4c, 0x2, 0x2, 0x2, 0x8, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x10, 0x11, 0xef, 0xde, 0x10, 0x21, 0xaf, 0xfe,
	0x2f, 0x0, 0x1, 0x2, 0xec, 0x1, 0x4b, 0x2, 0x1, 0x2, 0x9, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x71, 0xfe, 0x40, 0x80, 0xfe,
	0x2d, 0x0, 0x2, 0x2, 0xed, 0x1, 0x4b, 0x2, 0x2, 0x1, 0xa, 0x4, 0x37, 0x4, 0x1, 0x1, 0xef, 0x60, 0x1, 0xbf, 0x8f, 0x71, 0xfe,
	0x2c, 0x0, 0x2, 0x2, 0xee, 0x1, 0x4a, 0x2, 0x2, 0x2, 0xc, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x30, 0x21, 0xef, 0xde, 0x20, 0x31, 0xdf, 0xfe,
	0x2b, 0x0, 0x2, 0x2, 0xee, 0x1, 0x49, 0x2, 0x1, 0x2, 0xd, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x71, 0xfe, 0x5f, 0x21, 0xdf, 0xfe,
	0x2a, 0x0, 0x2, 0x2, 0xef, 0x1, 0x49, 0x2, 0x2, 0x1, 0xe, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x20, 0x1, 0xbf, 0x8f, 0x21, 0xcf, 0xfe,
	0x29, 0x0, 0x2, 0x2, 0xf0, 0x1, 0x48, 0x2, 0x2, 0x2, 0xf, 0x4, 0x37, 0x4, 0x2, 0x1, 0xaf, 0x10, 0x21, 0xef, 0xde, 0x10, 0x11, 0xaf, 0xfe,
	0x28, 0x0, 0x1, 0x2, 0xf0, 0x1, 0x47, 0x2, 0x1, 0x2, 0x10, 0x4, 0x37, 0x4, 0x2, 0x1, 0xa0, 0x51, 0xfe, 0x20, 0x1, 0xa0, 0xfe,
	0x27, 0x0, 0x1, 0x2, 0xf1, 0x1, 0x47, 0x2, 0x2, 0x1, 0x11, 0x4, 0x37, 0x4, 0x2, 0x1, 0x90, 0x1, 0x90, 0x80, 0x1, 0x90, 0xfe,
	0x26, 0x0, 0x1, 0x2, 0xf2, 0x1, 0x46, 0x2, 0x2, 0x1, 0x12, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x1, 0xbf, 0x8f, 0x80, 0xfe,
	0x25, 0x0, 0x1, 0x2, 0xf3, 0x1, 0x45, 0x2, 0x2, 0x2, 0x13, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x11, 0xdf, 0xce, 0x10, 0x80, 0xfe,
	0x24, 0x0, 0x1, 0x2, 0xf4, 0x1, 0x44, 0x2, 0x2, 0x2, 0x14, 0x4, 0x37, 0x4, 0x2, 0x1, 0x90, 0x21, 0xdf, 0xde, 0x20, 0x1, 0x90, 0xfe,
	0x23, 0x0, 0x1, 0x2, 0xf5, 0x1, 0x43, 0x2, 0x2, 0x2, 0x15, 0x4, 0x37, 0x4, 0x2, 0x1, 0xa0, 0x31, 0xef, 0xde, 0x20, 0x1, 0xa0, 0xfe,
	0x22, 0x0, 0x1, 0x2, 0xf6, 0x1, 0x42, 0x2, 0x2, 0x2, 0x16, 0x4, 0x37, 0x4, 0x2, 0x1, 0xaf, 0x31, 0xef, 0xde, 0x20, 0x1, 0xbf, 0xfe,
	0x21, 0x0, 0x2, 0x2, 0xf7, 0x1, 0x41, 0x2, 0x2, 0x2, 0x17, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x10, 0x31, 0xef, 0xde, 0x20, 0x11, 0xcf, 0xfe,
	0x20, 0x0, 0x2, 0x2, 0xf8, 0x1, 0x40, 0x2, 0x2, 0x2, 0x18, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x31, 0xdf, 0xde, 0x20, 0x21, 0xdf, 0xfe,
	0x1f, 0x0, 0x2, 0x2, 0xf9, 0x1, 0x3f, 0x2, 0x2, 0x2, 0x19, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x21, 0xdf, 0xce, 0x20, 0x21, 0xdf, 0xfe,
	0x1e, 0x0, 0x2, 0x2, 0xfa, 0x1, 0x3e, 0x2, 0x2, 0x2, 0x1a, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x30, 0x21, 0xcf, 0x9f, 0x10, 0x31, 0xef, 0xfe,
	0x1e, 0x0, 0x1, 0x2, 0xfb, 0x1, 0x3d, 0x2, 0x1, 0x1, 0x1a, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x80, 0x80, 0x61, 0xfe,
	0x1d, 0x0, 0x1, 0x2, 0xfd, 0x1, 0x3b, 0x2, 0x2, 0x2, 0x1b, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x60, 0xdf, 0xde, 0x40, 0x80, 0xfe,
	0x1c, 0x0, 0x1, 0x2, 0xfe, 0x1, 0x3a, 0x2, 0x2, 0x2, 0x1c, 0x4, 0x37, 0x4, 0x2, 0x1, 0xaf, 0x21, 0xbf, 0xae, 0x10, 0x1, 0xbf, 0xfe,
	0x1b, 0x0, 0x2, 0x2, 0x0, 0x2, 0x38, 0x2, 0x2, 0x2, 0x1d, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x60, 0xdf, 0xde, 0x50, 0x11, 0xdf, 0xfe,
	0x1b, 0x0, 0x1, 0x2, 0x1, 0x2, 0x37, 0x2, 0x2, 0x2, 0x1d, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x20, 0xa0, 0x80, 0x10, 0x41, 0xfe,
	0x1a, 0x0, 0x1, 0x2, 0x3, 0x2, 0x35, 0x2, 0x2, 0x2, 0x1e, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x21, 0xbf, 0xbe, 0x20, 0x71, 0xfe,
	0x19, 0x0, 0x1, 0x2, 0x5, 0x2, 0x33, 0x2, 0x2, 0x2, 0x1f, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x40, 0xbf, 0xbf, 0x40, 0x1, 0xbf, 0xfe,
	0x18, 0x0, 0x2, 0x2, 0x7, 0x2, 0x30, 0x2, 0x2, 0x3, 0x20, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x30, 0xa0, 0xef, 0x90, 0x40, 0x21, 0xef, 0xfe,
	0x18, 0x0, 0x1, 0x2, 0xa, 0x2, 0x2e, 0x2, 0x3, 0x3, 0x20, 0x4, 0x37, 0x4, 0x1, 0x1, 0x5f, 0x20, 0x60, 0xdf, 0xbf, 0x6f, 0x10, 0x71, 0xfe,
	0x17, 0x0, 0x1, 0x2, 0xd, 0x2, 0x2b, 0x2, 0x3, 0x3, 0x21, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x30, 0x80, 0xcf, 0xbf, 0x80, 0x20, 0x1, 0xbf, 0xfe,
	0x16, 0x0, 0x2, 0x2, 0x11, 0x2, 0x26, 0x2, 0x4, 0x5, 0x22, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x20, 0x20, 0x50, 0xa0, 0xcf, 0xef, 0xcf, 0x90, 0x50, 0x10, 0x21, 0xef, 0xfe,
	0x16, 0x0, 0x1, 0x2, 0x19, 0x2, 0x1f, 0x2, 0x7, 0x7, 0x22, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x40, 0x50, 0x80, 0xaf, 0xbf, 0xcf, 0xdf, 0xdf, 0xdf, 0xbf, 0x9f, 0x80, 0x60, 0x30, 0x80, 0xfe,
	0x15, 0x0, 0x1, 0x1, 0x23, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x1, 0xdf, 0xfe,
	0x15, 0x0, 0x1, 0x1, 0x23, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x41, 0xfe,
	0x14, 0x0, 0x1, 0x1, 0x24, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xbf, 0xfe,
	0x14, 0x0, 0x1, 0x1, 0x24, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x21, 0xfe,
	0x13, 0x0, 0x1, 0x1, 0x25, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0x90, 0xfe,
	0x12, 0x0, 0x2, 0x1, 0x26, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x11, 0xef, 0xfe,
	0x12, 0x0, 0x1, 0x1, 0x26, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x11, 0x0, 0x2, 0x1, 0x27, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x11, 0xef, 0xfe,
	0x11, 0x0, 0x1, 0x1, 0x27, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x11, 0x0, 0x1, 0x1, 0x28, 0x4, 0x37, 0x4, 0x2, 0x1, 0x20, 0x11, 0xef, 0xfe,
	0x10, 0x0, 0x1, 0x1, 0x28, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0x90, 0xfe,
	0x10, 0x0, 0x1, 0x1, 0x28, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x31, 0xfe,
	0xf, 0x0, 0x1, 0x1, 0x29, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xbf, 0xfe,
	0xf, 0x0, 0x1, 0x1, 0x29, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x1, 0xef, 0xfe,
	0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x37, 0x4, 0x1, 0x1, 0x5f, 0x80, 0xfe,
	0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x11, 0xfe,
	0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xbf, 0xfe,
	0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x11, 0xef, 0xfe,
	0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0x90, 0xfe,
	0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x1, 0xef, 0xfe,
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0x90, 0xfe,
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x1, 0xef, 0xfe,
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xa0, 0xfe,
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x37, 0x4, 0x1, 0x1, 0x4f, 0x61, 0xfe,
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x11, 0xfe,
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xbf, 0xfe,
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x11, 0xef, 0xfe,
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xbf, 0xfe,
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x80, 0xfe,
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x8, 0x0, 0x0, 0x1, 0x30, 0x4, 0x37, 0x4, 0x1, 0x1, 0x11, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xcf, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x2, 0x1, 0x90, 0x1, 0x90, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x1, 0x1, 0x4f, 0x61, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x21, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x1, 0xef, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xbf, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x2, 0x1, 0x90, 0x1, 0x90, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x1, 0x1, 0x4f, 0x61, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x21, 0xfe,
	0x6, 0x0, 0x0, 0x1, 0x32, 0x4, 0x37, 0x4, 0x1, 0x1, 0x1, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x1, 0xcf, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x2, 0x1, 0xb0, 0x1, 0xa0, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x71, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x1, 0x1, 0x4f, 0x61, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x21, 0xfe,
	0x5, 0x0, 0x0, 0x1, 0x33, 0x4, 0x37, 0x4, 0x1, 0x1, 0x1, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x1, 0xdf, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xaf, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x2, 0x1, 0x90, 0x1, 0x90, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x71, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x51, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x21, 0xfe,
	0x4, 0x0, 0x0, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x11, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x1, 0xef, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xcf, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x2, 0x1, 0xb0, 0x1, 0xaf, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x2, 0x1, 0x90, 0x1, 0x90, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x70, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x4f, 0x60, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x21, 0xfe,
	0x3, 0x0, 0x0, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x11, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x1, 0xef, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x1, 0xdf, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xbf, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0xb0, 0x1, 0xa0, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0x90, 0x1, 0xa0, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x60, 0x61, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x4f, 0x60, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x21, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x21, 0xfe,
	0x2, 0x0, 0x0, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x1, 0xfe,
	0x2, 0x0, 0x0, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x1, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xdf, 0x1, 0xdf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xcf, 0x1, 0xdf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xbf, 0x1, 0xbf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xbf, 0x1, 0xaf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0x9f, 0x1, 0xa0, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0x9f, 0x1, 0xa0, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x80, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x80, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x60, 0x61, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x60, 0x61, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x4f, 0x60, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x40, 0x41, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x40, 0x41, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x30, 0x21, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x20, 0x21, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x20, 0x21, 0xfe,
	0x1, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x1, 0xfe,
	0x1, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x1, 0xfe,
	0x1, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x1, 0xfe,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x1, 0xde,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x1, 0xde,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x1, 0xde,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcf, 0x1, 0xde,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x1, 0xbe,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x1, 0xbe,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x1, 0xbe,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x1, 0xae,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x9f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x9f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x9f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x9f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x7f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0x6f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x50,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,

	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x30,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4f, 0x40,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0x70,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x80,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x8f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x9f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x9f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x1, 0x9f,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb0, 0x1, 0xbe,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x1, 0xbe,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x1, 0xbe,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcf, 0x1, 0xce,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x1, 0xde,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x1, 0xde,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xef, 0x1, 0xee,
	0x1, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x1, 0xfe,
	0x1, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x1, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x20, 0x11, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x20, 0x21, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x20, 0x31, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x40, 0x41, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x40, 0x41, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x60, 0x61, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x60, 0x61, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x80, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x80, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0x9f, 0x1, 0xa0, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0x9f, 0x1, 0xaf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xbf, 0x1, 0xbf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xcf, 0x1, 0xbf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x3, 0x0, 0xdf, 0x1, 0xdf, 0xfe,
	0x1, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0xef, 0x1, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x1, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x21, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x41, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x4f, 0x41, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x60, 0x61, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0x90, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0xb0, 0x1, 0xaf, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x1, 0xbf, 0xfe,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x1, 0xef, 0xfe,
	0x3, 0x0, 0x0, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x1, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x21, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x60, 0x61, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xaf, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x1, 0xbf, 0xfe,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x1, 0xef, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x11, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x41, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x60, 0x51, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x1, 0x1, 0x90, 0x80, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x2, 0x1, 0xb0, 0x1, 0xaf, 0xfe,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x1, 0xcf, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x11, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x41, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x71, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xa0, 0xfe,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x1, 0xcf, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x1, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x71, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xaf, 0xfe,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x1, 0xdf, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x1, 0x1, 0x20, 0x31, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x61, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x1, 0xaf, 0xfe,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x1, 0xdf, 0xfe,
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x31, 0xfe,
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x71, 0xfe,
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xbf, 0xfe,
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x21, 0xfe,
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x61, 0xfe,
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xaf, 0xfe,
	0x9, 0x0, 0x2, 0x1, 0x2e, 0x4, 0x37, 0x4, 0x1, 0x1, 0xef, 0x10, 0x11, 0xfe,
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x61, 0xfe,
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xbf, 0xfe,
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x21, 0xfe,
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x61, 0xfe,
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x1, 0xdf, 0xfe,
	0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xa0, 0xfe,
	0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x37, 0x4, 0x1, 0x1, 0x10, 0x21, 0xfe,
	0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x37, 0x4, 0x2, 0x1, 0x80, 0x1, 0xa0, 0xfe,
	0xd, 0x0, 0x2, 0x1, 0x2b, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x10, 0x21, 0xdf, 0xfe,
	0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0xe, 0x0, 0x2, 0x1, 0x2a, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x10, 0x21, 0xdf, 0xfe,
	0xf, 0x0, 0x1, 0x1, 0x29, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0xf, 0x0, 0x2, 0x1, 0x29, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x10, 0x21, 0xdf, 0xfe,
	0x10, 0x0, 0x1, 0x1, 0x28, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x10, 0x0, 0x2, 0x1, 0x27, 0x4, 0x37, 0x4, 0x1, 0x1, 0xef, 0x20, 0x21, 0xfe,
	0x11, 0x0, 0x1, 0x1, 0x27, 0x4, 0x37, 0x4, 0x2, 0x1, 0xaf, 0x1, 0xa0, 0xfe,
	0x12, 0x0, 0x1, 0x1, 0x26, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x51, 0xfe,
	0x12, 0x0, 0x2, 0x1, 0x26, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x10, 0x1, 0xdf, 0xfe,
	0x13, 0x0, 0x1, 0x1, 0x25, 0x4, 0x37, 0x4, 0x1, 0x1, 0x80, 0x80, 0xfe,
	0x14, 0x0, 0x1, 0x1, 0x24, 0x4, 0x37, 0x4, 0x1, 0x1, 0x30, 0x21, 0xfe,
	0x14, 0x0, 0x1, 0x1, 0x24, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x1, 0xdf, 0xfe,
	0x15, 0x0, 0x1, 0x1, 0x23, 0x4, 0x37, 0x4, 0x1, 0x1, 0x8f, 0x80, 0xfe,
	0x16, 0x0, 0x1, 0x1, 0x22, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x16, 0x0, 0x2, 0x1, 0x22, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x21, 0xdf, 0xfe,
	0x17, 0x0, 0x1, 0x1, 0x21, 0x4, 0x37, 0x4, 0x2, 0x1, 0xbf, 0x1, 0xcf, 0xfe,
	0x18, 0x0, 0x1, 0x1, 0x20, 0x4, 0x37, 0x4, 0x1, 0x1, 0x8f, 0x80, 0xfe,
	0x19, 0x0, 0x1, 0x1, 0x1f, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x70, 0xfe,
	0x1a, 0x0, 0x1, 0x1, 0x1e, 0x4, 0x37, 0x4, 0x1, 0x1, 0x40, 0x41, 0xfe,
	0x1a, 0x0, 0x2, 0x1, 0x1e, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x20, 0x21, 0xef, 0xfe,
	0x1b, 0x0, 0x2, 0x1, 0x1d, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x21, 0xdf, 0xfe,
	0x1c, 0x0, 0x2, 0x1, 0x1c, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x21, 0xdf, 0xfe,
	0x1d, 0x0, 0x2, 0x1, 0x1b, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x10, 0x21, 0xdf, 0xfe,
	0x1e, 0x0, 0x2, 0x1, 0x1a, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x10, 0x11, 0xcf, 0xfe,
	0x1f, 0x0, 0x2, 0x1, 0x19, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x10, 0x11, 0xcf, 0xfe,
	0x20, 0x0, 0x2, 0x1, 0x18, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x20, 0x11, 0xcf, 0xfe,
	0x21, 0x0, 0x2, 0x1, 0x17, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x21, 0xdf, 0xfe,
	0x22, 0x0, 0x2, 0x1, 0x16, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x21, 0xdf, 0xfe,
	0x23, 0x0, 0x2, 0x1, 0x15, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x21, 0xdf, 0xfe,
	0x24, 0x0, 0x2, 0x1, 0x14, 0x4, 0x37, 0x4, 0x2, 0x1, 0xef, 0x40, 0x41, 0xef, 0xfe,
	0x26, 0x0, 0x1, 0x1, 0x12, 0x4, 0x37, 0x4, 0x1, 0x1, 0x70, 0x70, 0xfe,
	0x27, 0x0, 0x1, 0x1, 0x11, 0x4, 0x37, 0x4, 0x2, 0x1, 0x7f, 0x1, 0x8f, 0xfe,
	0x28, 0x0, 0x2, 0x1, 0x10, 0x4, 0x37, 0x4, 0x2, 0x1, 0xcf, 0x20, 0x21, 0xbf, 0xfe,
	0x29, 0x0, 0x2, 0x1, 0xf, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x40, 0x41, 0xdf, 0xfe,
	0x2b, 0x0, 0x1, 0x1, 0xd, 0x4, 0x37, 0x4, 0x2, 0x1, 0x7f, 0x1, 0x8f, 0xfe,
	0x2c, 0x0, 0x2, 0x1, 0xc, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x20, 0x31, 0xcf, 0xfe,
	0x2e, 0x0, 0x1, 0x1, 0xa, 0x4, 0x37, 0x4, 0x2, 0x1, 0x7f, 0x10, 0x80, 0xfe,
	0x2f, 0x0, 0x2, 0x1, 0x9, 0x4, 0x37, 0x4, 0x2, 0x1, 0xdf, 0x4f, 0x41, 0xdf, 0xfe,
	0x31, 0x0, 0x2, 0x1, 0x7, 0x4, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x20, 0x21, 0xaf, 0xfe,
	0x33, 0x0, 0x2, 0x1, 0x6, 0x4, 0x37, 0x4, 0x3, 0x1, 0x7f, 0x20, 0x10, 0x7f, 0xef, 0xfe,
	0x34, 0x0, 0x3, 0x1, 0x4, 0x4, 0x37, 0x4, 0x3, 0x1, 0xdf, 0x7f, 0x20, 0x10, 0x7f, 0xef, 0xfe,
	0x36, 0x0, 0x3, 0x1, 0x2, 0x4, 0x37, 0x4, 0x3, 0x1, 0xdf, 0x7f, 0x20, 0x10, 0x7f, 0xef, 0xfe,
	0x38, 0x0, 0x3, 0x1, 0x0, 0x4, 0x37, 0x4, 0x3, 0x1, 0xdf, 0x9f, 0x20, 0x10, 0x7f, 0xef, 0xfe,
	0x3b, 0x0, 0x2, 0x1, 0xfd, 0x3, 0x37, 0x4, 0x2, 0x1, 0x9f, 0x40, 0x40, 0xbf, 0xfe,
	0x3d, 0x0, 0x3, 0x1, 0xfb, 0x3, 0x37, 0x4, 0x3, 0x1, 0xdf, 0x5f, 0x20, 0x10, 0x7f, 0xef, 0xfe,
	0x40, 0x0, 0x3, 0x1, 0xf8, 0x3, 0x37, 0x4, 0x3, 0x1, 0xbf, 0x5f, 0x10, 0x10, 0x6f, 0xbf, 0xfe,
	0x43, 0x0, 0x3, 0x1, 0xf5, 0x3, 0x37, 0x4, 0x3, 0x1, 0xaf, 0x5f, 0x20, 0x10, 0x6f, 0xbf, 0xfe,
	0x46, 0x0, 0x3, 0x1, 0xf2, 0x3, 0x37, 0x4, 0x3, 0x1, 0xbf, 0x6f, 0x30, 0x40, 0x7f, 0xbf, 0xfe,
	0x49, 0x0, 0x4, 0x1, 0xef, 0x3, 0x37, 0x4, 0x4, 0x1, 0xdf, 0xaf, 0x5f, 0x30, 0x20, 0x6f, 0x9f, 0xef, 0xfe,
	0x4d, 0x0, 0x4, 0x1, 0xeb, 0x3, 0x37, 0x4, 0x5, 0x1, 0xdf, 0xaf, 0x6f, 0x40, 0x10, 0x40, 0x6f, 0xaf, 0xef, 0xfe,
	0x52, 0x0, 0x5, 0x1, 0xe6, 0x3, 0x37, 0x4, 0x5, 0x1, 0xcf, 0x9f, 0x6f, 0x40, 0x10, 0x10, 0x30, 0x6f, 0x9f, 0xcf, 0xfe,
	0x57, 0x0, 0x6, 0x1, 0xe1, 0x3, 0x37, 0x4, 0x6, 0x1, 0xcf, 0xaf, 0x80, 0x50, 0x40, 0x10, 0x10, 0x30, 0x60, 0x90, 0xaf, 0xdf, 0xfe,
	0x5d, 0x0, 0x7, 0x1, 0xdb, 0x3, 0x37, 0x4, 0x7, 0x1, 0xef, 0xbf, 0xaf, 0x80, 0x60, 0x40, 0x20, 0x20, 0x50, 0x60, 0x80, 0x9f, 0xcf, 0xef, 0xfe,
	0x65, 0x0, 0x9, 0x1, 0xd3, 0x3, 0x37, 0x4, 0xa, 0x1, 0xef, 0xbf, 0xaf, 0x90, 0x80, 0x60, 0x40, 0x40, 0x20, 0x10, 0x20, 0x30, 0x50, 0x60, 0x80, 0x9f, 0xaf, 0xcf, 0xdf, 0xfe,
	0x70, 0x0, 0xe, 0x1, 0xc8, 0x3, 0x37, 0x4, 0xe, 0x1, 0xdf, 0xbf, 0xbf, 0xaf, 0x9f, 0x80, 0x80, 0x60, 0x60, 0x40, 0x40, 0x30, 0x20, 0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x60, 0x60, 0x80, 0x80, 0x9f, 0x9f, 0xbf, 0xcf, 0xdf, 0xfe,
	0x80, 0x0, 0x2b, 0x1, 0xb8, 0x3, 0x1e, 0x4, 0x2b, 0x1a, 0xef, 0xdf, 0xdf, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 0x9f, 0x9f, 0x90, 0x80, 0x80, 0x80, 0x80, 0x6f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x50, 0x60, 0x60, 0x60, 0x60, 0x60, 0x6f, 0x80, 0x80, 0x80, 0x80, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0xbf, 0xbf, 0xcf, 0xdf, 0xdf, 0xef, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd,
};

#endif