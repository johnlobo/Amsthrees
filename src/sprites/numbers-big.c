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

#include "numbers-big.h"

const u8 G_numbers_big[10][3 * 11] = {
//0
    {
        0xe4, 0xcc, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xe4, 0xd8,
        0xd8, 0xe4, 0xd8,
        0xd8, 0xd8, 0xd8,
        0xd8, 0xd8, 0xd8,
        0xcc, 0xf0, 0xd8,
        0xcc, 0xf0, 0xd8,
        0xe4, 0xcc, 0xf0,
        0xe4, 0xcc, 0xf0
    },
//1
    {
        0xf0, 0xd8, 0xf0,
        0xe4, 0xd8, 0xf0,
        0xd8, 0xd8, 0xf0,
        0xf0, 0xd8, 0xf0,
        0xf0, 0xd8, 0xf0,
        0xf0, 0xd8, 0xf0,
        0xf0, 0xd8, 0xf0,
        0xf0, 0xd8, 0xf0,
        0xf0, 0xd8, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xcc, 0xcc, 0xd8
    },
//2
    {
        0xe4, 0xcc, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xf0, 0xf0, 0xd8,
        0xf0, 0xe4, 0xd8,
        0xf0, 0xcc, 0xf0,
        0xe4, 0xd8, 0xf0,
        0xcc, 0xf0, 0xf0,
        0xd8, 0xf0, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xcc, 0xcc, 0xd8
    },
//3
    {
        0xe4, 0xcc, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xf0, 0xf0, 0xd8,
        0xf0, 0xcc, 0xd8,
        0xf0, 0xcc, 0xf0,
        0xf0, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xe4, 0xcc, 0xf0,
        0xe4, 0xcc, 0xf0
    },
//4
    {
        0xf0, 0xe4, 0xd8,
        0xf0, 0xcc, 0xd8,
        0xe4, 0xd8, 0xd8,
        0xe4, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xcc, 0xcc, 0xd8,
        0xcc, 0xcc, 0xd8,
        0xf0, 0xf0, 0xd8,
        0xf0, 0xf0, 0xd8,
        0xf0, 0xf0, 0xd8
    },
//5
    {
        0xcc, 0xcc, 0xd8,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xf0,
        0xcc, 0xcc, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xf0, 0xf0, 0xd8,
        0xf0, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xe4, 0xcc, 0xf0,
        0xe4, 0xcc, 0xf0
    },
//6
    {
        0xe4, 0xcc, 0xd8,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xf0,
        0xd8, 0xf0, 0xf0,
        0xcc, 0xcc, 0xf0,
        0xcc, 0xcc, 0xf0,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xe4, 0xcc, 0xf0,
        0xe4, 0xcc, 0xf0
    },
//7
    {
        0xcc, 0xcc, 0xd8,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xf0, 0xf0, 0xd8,
        0xf0, 0xe4, 0xd8,
        0xf0, 0xe4, 0xf0,
        0xf0, 0xcc, 0xf0,
        0xe4, 0xd8, 0xf0,
        0xe4, 0xf0, 0xf0,
        0xe4, 0xf0, 0xf0,
        0xe4, 0xf0, 0xf0
    },
//8
    {
        0xe4, 0xcc, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xcc, 0xcc, 0xd8,
        0xe4, 0xcc, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xe4, 0xcc, 0xf0,
        0xe4, 0xcc, 0xf0
    },
//9
    {
        0xe4, 0xcc, 0xf0,
        0xcc, 0xcc, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xd8, 0xf0, 0xd8,
        0xcc, 0xcc, 0xd8,
        0xe4, 0xcc, 0xd8,
        0xf0, 0xe4, 0xd8,
        0xf0, 0xe4, 0xd8,
        0xf0, 0xcc, 0xf0,
        0xe4, 0xd8, 0xf0,
        0xe4, 0xf0, 0xf0
    }
};