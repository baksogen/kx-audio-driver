// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov and Max Mikhailov, 2001-2005.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

// 10kX microcode
// Patch name: 'epiloglt_k2'

const char *epiloglt_k2_copyright="Copyright (c) Eugene Gavrilov, 2003-2004.";
const char *epiloglt_k2_engine="kX";
const char *epiloglt_k2_comment="";
const char *epiloglt_k2_created="05/11/2003";
const char *epiloglt_k2_guid="f88a3e59-ed54-4fb6-9b7d-4e213ed150f2";

const char *epiloglt_k2_name="epiloglt_k2";
int epiloglt_k2_itramsize=0,epiloglt_k2_xtramsize=0;

dsp_register_info epiloglt_k2_info[]={
	{ "spdif0_l",0x4000,0x7,0xffff,0x0 },
	{ "spdif0_r",0x4001,0x7,0xffff,0x0 },
	{ "spdif1_l",0x4002,0x7,0xffff,0x0 },
	{ "spdif1_r",0x4003,0x7,0xffff,0x0 },
	{ "spdif2_l",0x4004,0x7,0xffff,0x0 },
	{ "spdif2_r",0x4005,0x7,0xffff,0x0 },
	{ "spdif3_l",0x4006,0x7,0xffff,0x0 },
	{ "spdif3_r",0x4007,0x7,0xffff,0x0 },
	{ "i2s0_l",0x4008,0x7,0xffff,0x0 },
	{ "i2s0_r",0x4009,0x7,0xffff,0x0 },
	{ "i2s1_l",0x400a,0x7,0xffff,0x0 },
	{ "i2s1_r",0x400b,0x7,0xffff,0x0 },
	{ "i2s2_l",0x400c,0x7,0xffff,0x0 },
	{ "i2s2_r",0x400d,0x7,0xffff,0x0 },
	{ "i2s3_l",0x400e,0x7,0xffff,0x0 },
	{ "i2s3_r",0x400f,0x7,0xffff,0x0 },
	{ "ac97_l",0x4010,0x7,0xffff,0x0 },
	{ "ac97_r",0x4011,0x7,0xffff,0x0 },
	{ "ac97_sl",0x4012,0x7,0xffff,0x0 },
	{ "ac97_sr",0x4013,0x7,0xffff,0x0 },
	{ "ac97_c",0x4014,0x7,0xffff,0x0 },
	{ "ac97_lfe",0x4015,0x7,0xffff,0x0 },
	{ "recl",0x4016,0x7,0xffff,0x0 },
	{ "recr",0x4017,0x7,0xffff,0x0 },
	{ "rec_mic",0x4018,0x7,0xffff,0x0 },
	{ "asio0",0x4019,0x7,0xffff,0x0 },
	{ "asio1",0x401a,0x7,0xffff,0x0 },
	{ "asio2",0x401b,0x7,0xffff,0x0 },
	{ "asio3",0x401c,0x7,0xffff,0x0 },
	{ "asio4",0x401d,0x7,0xffff,0x0 },
	{ "asio5",0x401e,0x7,0xffff,0x0 },
	{ "asio6",0x401f,0x7,0xffff,0x0 },
	{ "asio7",0x4020,0x7,0xffff,0x0 },
	{ "asio8",0x4021,0x7,0xffff,0x0 },
	{ "asio9",0x4022,0x7,0xffff,0x0 },
	{ "asio10",0x4023,0x7,0xffff,0x0 },
	{ "asio11",0x4024,0x7,0xffff,0x0 },
	{ "asio12",0x4025,0x7,0xffff,0x0 },
	{ "asio13",0x4026,0x7,0xffff,0x0 },
	{ "asio14",0x4027,0x7,0xffff,0x0 },
	{ "asio15",0x4028,0x7,0xffff,0x0 },
};

dsp_code epiloglt_k2_code[]={ { 0xff } };
