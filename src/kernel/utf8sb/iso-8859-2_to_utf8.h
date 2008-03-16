/*
 * Copyright (c) 1996-1999 by Sun Microsystems, Inc.
 * All rights reserved.
 */

#ifndef _ISO_8859_2_TO_UTF_8_H_
#define _ISO_8859_2_TO_UTF_8_H_

#pragma ident   "@(#)iso-8859-2_to_utf8.h	1.1 99/03/05 SMI"

static const to_utf8_table_component_t sb_u8_tbl[256] = {
/* 0x00 */  {  0x00000000, 1  },
/* 0x01 */  {  0x00000001, 1  },
/* 0x02 */  {  0x00000002, 1  },
/* 0x03 */  {  0x00000003, 1  },
/* 0x04 */  {  0x00000004, 1  },
/* 0x05 */  {  0x00000005, 1  },
/* 0x06 */  {  0x00000006, 1  },
/* 0x07 */  {  0x00000007, 1  },
/* 0x08 */  {  0x00000008, 1  },
/* 0x09 */  {  0x00000009, 1  },
/* 0x0A */  {  0x0000000A, 1  },
/* 0x0B */  {  0x0000000B, 1  },
/* 0x0C */  {  0x0000000C, 1  },
/* 0x0D */  {  0x0000000D, 1  },
/* 0x0E */  {  0x0000000E, 1  },
/* 0x0F */  {  0x0000000F, 1  },
/* 0x10 */  {  0x00000010, 1  },
/* 0x11 */  {  0x00000011, 1  },
/* 0x12 */  {  0x00000012, 1  },
/* 0x13 */  {  0x00000013, 1  },
/* 0x14 */  {  0x00000014, 1  },
/* 0x15 */  {  0x00000015, 1  },
/* 0x16 */  {  0x00000016, 1  },
/* 0x17 */  {  0x00000017, 1  },
/* 0x18 */  {  0x00000018, 1  },
/* 0x19 */  {  0x00000019, 1  },
/* 0x1A */  {  0x0000001A, 1  },
/* 0x1B */  {  0x0000001B, 1  },
/* 0x1C */  {  0x0000001C, 1  },
/* 0x1D */  {  0x0000001D, 1  },
/* 0x1E */  {  0x0000001E, 1  },
/* 0x1F */  {  0x0000001F, 1  },
/* 0x20 */  {  0x00000020, 1  },
/* 0x21 */  {  0x00000021, 1  },
/* 0x22 */  {  0x00000022, 1  },
/* 0x23 */  {  0x00000023, 1  },
/* 0x24 */  {  0x00000024, 1  },
/* 0x25 */  {  0x00000025, 1  },
/* 0x26 */  {  0x00000026, 1  },
/* 0x27 */  {  0x00000027, 1  },
/* 0x28 */  {  0x00000028, 1  },
/* 0x29 */  {  0x00000029, 1  },
/* 0x2A */  {  0x0000002A, 1  },
/* 0x2B */  {  0x0000002B, 1  },
/* 0x2C */  {  0x0000002C, 1  },
/* 0x2D */  {  0x0000002D, 1  },
/* 0x2E */  {  0x0000002E, 1  },
/* 0x2F */  {  0x0000002F, 1  },
/* 0x30 */  {  0x00000030, 1  },
/* 0x31 */  {  0x00000031, 1  },
/* 0x32 */  {  0x00000032, 1  },
/* 0x33 */  {  0x00000033, 1  },
/* 0x34 */  {  0x00000034, 1  },
/* 0x35 */  {  0x00000035, 1  },
/* 0x36 */  {  0x00000036, 1  },
/* 0x37 */  {  0x00000037, 1  },
/* 0x38 */  {  0x00000038, 1  },
/* 0x39 */  {  0x00000039, 1  },
/* 0x3A */  {  0x0000003A, 1  },
/* 0x3B */  {  0x0000003B, 1  },
/* 0x3C */  {  0x0000003C, 1  },
/* 0x3D */  {  0x0000003D, 1  },
/* 0x3E */  {  0x0000003E, 1  },
/* 0x3F */  {  0x0000003F, 1  },
/* 0x40 */  {  0x00000040, 1  },
/* 0x41 */  {  0x00000041, 1  },
/* 0x42 */  {  0x00000042, 1  },
/* 0x43 */  {  0x00000043, 1  },
/* 0x44 */  {  0x00000044, 1  },
/* 0x45 */  {  0x00000045, 1  },
/* 0x46 */  {  0x00000046, 1  },
/* 0x47 */  {  0x00000047, 1  },
/* 0x48 */  {  0x00000048, 1  },
/* 0x49 */  {  0x00000049, 1  },
/* 0x4A */  {  0x0000004A, 1  },
/* 0x4B */  {  0x0000004B, 1  },
/* 0x4C */  {  0x0000004C, 1  },
/* 0x4D */  {  0x0000004D, 1  },
/* 0x4E */  {  0x0000004E, 1  },
/* 0x4F */  {  0x0000004F, 1  },
/* 0x50 */  {  0x00000050, 1  },
/* 0x51 */  {  0x00000051, 1  },
/* 0x52 */  {  0x00000052, 1  },
/* 0x53 */  {  0x00000053, 1  },
/* 0x54 */  {  0x00000054, 1  },
/* 0x55 */  {  0x00000055, 1  },
/* 0x56 */  {  0x00000056, 1  },
/* 0x57 */  {  0x00000057, 1  },
/* 0x58 */  {  0x00000058, 1  },
/* 0x59 */  {  0x00000059, 1  },
/* 0x5A */  {  0x0000005A, 1  },
/* 0x5B */  {  0x0000005B, 1  },
/* 0x5C */  {  0x0000005C, 1  },
/* 0x5D */  {  0x0000005D, 1  },
/* 0x5E */  {  0x0000005E, 1  },
/* 0x5F */  {  0x0000005F, 1  },
/* 0x60 */  {  0x00000060, 1  },
/* 0x61 */  {  0x00000061, 1  },
/* 0x62 */  {  0x00000062, 1  },
/* 0x63 */  {  0x00000063, 1  },
/* 0x64 */  {  0x00000064, 1  },
/* 0x65 */  {  0x00000065, 1  },
/* 0x66 */  {  0x00000066, 1  },
/* 0x67 */  {  0x00000067, 1  },
/* 0x68 */  {  0x00000068, 1  },
/* 0x69 */  {  0x00000069, 1  },
/* 0x6A */  {  0x0000006A, 1  },
/* 0x6B */  {  0x0000006B, 1  },
/* 0x6C */  {  0x0000006C, 1  },
/* 0x6D */  {  0x0000006D, 1  },
/* 0x6E */  {  0x0000006E, 1  },
/* 0x6F */  {  0x0000006F, 1  },
/* 0x70 */  {  0x00000070, 1  },
/* 0x71 */  {  0x00000071, 1  },
/* 0x72 */  {  0x00000072, 1  },
/* 0x73 */  {  0x00000073, 1  },
/* 0x74 */  {  0x00000074, 1  },
/* 0x75 */  {  0x00000075, 1  },
/* 0x76 */  {  0x00000076, 1  },
/* 0x77 */  {  0x00000077, 1  },
/* 0x78 */  {  0x00000078, 1  },
/* 0x79 */  {  0x00000079, 1  },
/* 0x7A */  {  0x0000007A, 1  },
/* 0x7B */  {  0x0000007B, 1  },
/* 0x7C */  {  0x0000007C, 1  },
/* 0x7D */  {  0x0000007D, 1  },
/* 0x7E */  {  0x0000007E, 1  },
/* 0x7F */  {  0x0000007F, 1  },
/* 0x80 */  {  0x0000C280, 2  },
/* 0x81 */  {  0x0000C281, 2  },
/* 0x82 */  {  0x0000C282, 2  },
/* 0x83 */  {  0x0000C283, 2  },
/* 0x84 */  {  0x0000C284, 2  },
/* 0x85 */  {  0x0000C285, 2  },
/* 0x86 */  {  0x0000C286, 2  },
/* 0x87 */  {  0x0000C287, 2  },
/* 0x88 */  {  0x0000C288, 2  },
/* 0x89 */  {  0x0000C289, 2  },
/* 0x8A */  {  0x0000C28A, 2  },
/* 0x8B */  {  0x0000C28B, 2  },
/* 0x8C */  {  0x0000C28C, 2  },
/* 0x8D */  {  0x0000C28D, 2  },
/* 0x8E */  {  0x0000C28E, 2  },
/* 0x8F */  {  0x0000C28F, 2  },
/* 0x90 */  {  0x0000C290, 2  },
/* 0x91 */  {  0x0000C291, 2  },
/* 0x92 */  {  0x0000C292, 2  },
/* 0x93 */  {  0x0000C293, 2  },
/* 0x94 */  {  0x0000C294, 2  },
/* 0x95 */  {  0x0000C295, 2  },
/* 0x96 */  {  0x0000C296, 2  },
/* 0x97 */  {  0x0000C297, 2  },
/* 0x98 */  {  0x0000C298, 2  },
/* 0x99 */  {  0x0000C299, 2  },
/* 0x9A */  {  0x0000C29A, 2  },
/* 0x9B */  {  0x0000C29B, 2  },
/* 0x9C */  {  0x0000C29C, 2  },
/* 0x9D */  {  0x0000C29D, 2  },
/* 0x9E */  {  0x0000C29E, 2  },
/* 0x9F */  {  0x0000C29F, 2  },
/* 0xA0 */  {  0x0000C2A0, 2  },
/* 0xA1 */  {  0x0000C484, 2  },
/* 0xA2 */  {  0x0000CB98, 2  },
/* 0xA3 */  {  0x0000C581, 2  },
/* 0xA4 */  {  0x0000C2A4, 2  },
/* 0xA5 */  {  0x0000C4BD, 2  },
/* 0xA6 */  {  0x0000C59A, 2  },
/* 0xA7 */  {  0x0000C2A7, 2  },
/* 0xA8 */  {  0x0000C2A8, 2  },
/* 0xA9 */  {  0x0000C5A0, 2  },
/* 0xAA */  {  0x0000C59E, 2  },
/* 0xAB */  {  0x0000C5A4, 2  },
/* 0xAC */  {  0x0000C5B9, 2  },
/* 0xAD */  {  0x0000C2AD, 2  },
/* 0xAE */  {  0x0000C5BD, 2  },
/* 0xAF */  {  0x0000C5BB, 2  },
/* 0xB0 */  {  0x0000C2B0, 2  },
/* 0xB1 */  {  0x0000C485, 2  },
/* 0xB2 */  {  0x0000CB9B, 2  },
/* 0xB3 */  {  0x0000C582, 2  },
/* 0xB4 */  {  0x0000C2B4, 2  },
/* 0xB5 */  {  0x0000C4BE, 2  },
/* 0xB6 */  {  0x0000C59B, 2  },
/* 0xB7 */  {  0x0000CB87, 2  },
/* 0xB8 */  {  0x0000C2B8, 2  },
/* 0xB9 */  {  0x0000C5A1, 2  },
/* 0xBA */  {  0x0000C59F, 2  },
/* 0xBB */  {  0x0000C5A5, 2  },
/* 0xBC */  {  0x0000C5BA, 2  },
/* 0xBD */  {  0x0000CB9D, 2  },
/* 0xBE */  {  0x0000C5BE, 2  },
/* 0xBF */  {  0x0000C5BC, 2  },
/* 0xC0 */  {  0x0000C594, 2  },
/* 0xC1 */  {  0x0000C381, 2  },
/* 0xC2 */  {  0x0000C382, 2  },
/* 0xC3 */  {  0x0000C482, 2  },
/* 0xC4 */  {  0x0000C384, 2  },
/* 0xC5 */  {  0x0000C4B9, 2  },
/* 0xC6 */  {  0x0000C486, 2  },
/* 0xC7 */  {  0x0000C387, 2  },
/* 0xC8 */  {  0x0000C48C, 2  },
/* 0xC9 */  {  0x0000C389, 2  },
/* 0xCA */  {  0x0000C498, 2  },
/* 0xCB */  {  0x0000C38B, 2  },
/* 0xCC */  {  0x0000C49A, 2  },
/* 0xCD */  {  0x0000C38D, 2  },
/* 0xCE */  {  0x0000C38E, 2  },
/* 0xCF */  {  0x0000C48E, 2  },
/* 0xD0 */  {  0x0000C490, 2  },
/* 0xD1 */  {  0x0000C583, 2  },
/* 0xD2 */  {  0x0000C587, 2  },
/* 0xD3 */  {  0x0000C393, 2  },
/* 0xD4 */  {  0x0000C394, 2  },
/* 0xD5 */  {  0x0000C590, 2  },
/* 0xD6 */  {  0x0000C396, 2  },
/* 0xD7 */  {  0x0000C397, 2  },
/* 0xD8 */  {  0x0000C598, 2  },
/* 0xD9 */  {  0x0000C5AE, 2  },
/* 0xDA */  {  0x0000C39A, 2  },
/* 0xDB */  {  0x0000C5B0, 2  },
/* 0xDC */  {  0x0000C39C, 2  },
/* 0xDD */  {  0x0000C39D, 2  },
/* 0xDE */  {  0x0000C5A2, 2  },
/* 0xDF */  {  0x0000C39F, 2  },
/* 0xE0 */  {  0x0000C595, 2  },
/* 0xE1 */  {  0x0000C3A1, 2  },
/* 0xE2 */  {  0x0000C3A2, 2  },
/* 0xE3 */  {  0x0000C483, 2  },
/* 0xE4 */  {  0x0000C3A4, 2  },
/* 0xE5 */  {  0x0000C4BA, 2  },
/* 0xE6 */  {  0x0000C487, 2  },
/* 0xE7 */  {  0x0000C3A7, 2  },
/* 0xE8 */  {  0x0000C48D, 2  },
/* 0xE9 */  {  0x0000C3A9, 2  },
/* 0xEA */  {  0x0000C499, 2  },
/* 0xEB */  {  0x0000C3AB, 2  },
/* 0xEC */  {  0x0000C49B, 2  },
/* 0xED */  {  0x0000C3AD, 2  },
/* 0xEE */  {  0x0000C3AE, 2  },
/* 0xEF */  {  0x0000C48F, 2  },
/* 0xF0 */  {  0x0000C491, 2  },
/* 0xF1 */  {  0x0000C584, 2  },
/* 0xF2 */  {  0x0000C588, 2  },
/* 0xF3 */  {  0x0000C3B3, 2  },
/* 0xF4 */  {  0x0000C3B4, 2  },
/* 0xF5 */  {  0x0000C591, 2  },
/* 0xF6 */  {  0x0000C3B6, 2  },
/* 0xF7 */  {  0x0000C3B7, 2  },
/* 0xF8 */  {  0x0000C599, 2  },
/* 0xF9 */  {  0x0000C5AF, 2  },
/* 0xFA */  {  0x0000C3BA, 2  },
/* 0xFB */  {  0x0000C5B1, 2  },
/* 0xFC */  {  0x0000C3BC, 2  },
/* 0xFD */  {  0x0000C3BD, 2  },
/* 0xFE */  {  0x0000C5A3, 2  },
/* 0xFF */  {  0x0000CB99, 2  },
};

#endif	/* _ISO_8859_2_TO_UTF_8_H_ */