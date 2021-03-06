//this example code unpacks a RLE'd nametable into the VRAM
//you can create the source data using NES Screen Tool

#include "neslib.h"

#include "test.h"	//packed nametable data

const unsigned char palette[16]={ 0x0f,0x21,0x10,0x30,0x0f,0x14,0x21,0x31,0x0f,0x29,0x16,0x26,0x0f,0x09,0x19,0x29 };	//palette data


void main(void)
{
	//rendering is disabled at the startup, and palette is all black

	pal_bg(palette);//set background palette from an array

	unrle_vram(test,0x2000);//unpack nametable into the VRAM

	ppu_on_all();//enable rendering

	while(1);//do nothing, infinite loop
}