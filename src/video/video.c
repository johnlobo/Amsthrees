//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of Space Moves
//  Copyright (C) 2015 Toni Ramírez (@AmstradGamer)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//------------------------------------------------------------------------------


#include "video.h"


const u8 G_graphics_palette[16] = { 1, 24, 20, 6, 26, 0, 2, 8, 10, 12, 14, 16, 18, 22, 24, 16};



//////////////////////////////////////////////////////////////////
// setupVideo
//
//
//
// Returns:
//    void
//
void setUpVideo() {

    //Disable firmware
    cpct_disableFirmware();

    cpct_fw2hw(G_graphics_palette, 16);
    cpct_setPalette  (G_graphics_palette, 16);
    cpct_setBorder(G_graphics_palette[5]);
    cpct_setVideoMode(0);
    clearScreen();

}

//////////////////////////////////////////////////////////////////
// clearScreen
//
//
//
// Returns:
//    void
//
void clearScreen() {
    // Clear Screen
    cpct_memset(CPCT_VMEM_START, cpct_px2byteM0(5,5), 0x4000);
}

//////////////////////////////////////////////////////////////////
// clearVideo
//
//
//
// Returns:
//    void
//
void clearWindow(u8 xPos, u8 yPos, u8 width, u8 height) {

    u8* pvideo = cpct_getScreenPtr(CPCT_VMEM_START, xPos, yPos);
    cpct_drawSolidBox(pvideo, cpct_px2byteM0(5,5), width, height);

}
