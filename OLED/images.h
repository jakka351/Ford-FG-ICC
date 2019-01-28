// This file is part of Ford FG HVAC Display.

// Ford FG HVAC Display is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// Ford FG HVAC Display is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with Ford FG HVAC Display.  If not, see <https://www.gnu.org/licenses/>.

 
// Ford FG HVAC Display - HVAC Images Code
// 
// Created by Kyle May in 2019.


#ifndef IMAGES_H
#define IMAGES_H

const PROGMEM char fan[] = {
    0x38, 0x00, 0x7C, 0x0C, 0xFE, 0x1C, 0xFE, 0x3E, 0xF8, 0x3E, 0xE0, 0x3F, 
    0xFC, 0x1F, 0xFE, 0x0F, 0xFF, 0x01, 0xDF, 0x07, 0xDE, 0x1F, 0xCE, 0x1F, 
    0x8C, 0x0F, 0x00, 0x03, };


const PROGMEM char pos_auto_icon[] = {
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0xE7, 
  0x00, 0x00, 0x00, 0xC3, 0x00, 0x00, 0x00, 0xC3, 0x00, 0x00, 0x00, 0xE7, 
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x73, 
  0x00, 0x00, 0x80, 0x63, 0x00, 0x00, 0x80, 0x61, 0x00, 0x00, 0x80, 0x71, 
  0x00, 0x00, 0x80, 0x31, 0x00, 0x00, 0xC0, 0x31, 0x00, 0x00, 0xC0, 0x30, 
  0x00, 0x00, 0xC0, 0x38, 0x00, 0xE0, 0xFF, 0x18, 0x00, 0xF0, 0x7F, 0x18, 
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0E, 
  0x00, 0x07, 0xFF, 0x07, 0x80, 0x83, 0xFF, 0x03, 0xC0, 0xC1, 0x01, 0x00, 
  0xC0, 0xE0, 0x00, 0x00, 0xC0, 0x70, 0x00, 0x00, 0xC0, 0x39, 0x00, 0x00, 
  0x80, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, };


const PROGMEM char pos_face_icon[] = {
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x04, 0x7F, 0x00, 0x00, 0x0C, 0x67, 
  0x00, 0xFF, 0x1F, 0xC3, 0x00, 0xFF, 0x1F, 0xC3, 0x00, 0x00, 0x0C, 0x67, 
  0x00, 0x00, 0x04, 0x7F, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x73, 
  0x00, 0x00, 0x80, 0x63, 0x00, 0x00, 0x80, 0x61, 0x00, 0x00, 0x80, 0x71, 
  0x00, 0x00, 0x80, 0x31, 0x00, 0x00, 0xC0, 0x31, 0x00, 0x00, 0xC0, 0x30, 
  0x00, 0x00, 0xC0, 0x38, 0x00, 0xE0, 0xFF, 0x18, 0x00, 0xF0, 0x7F, 0x18, 
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0E, 
  0x00, 0x07, 0xFF, 0x07, 0x80, 0x83, 0xFF, 0x03, 0xC0, 0xC1, 0x01, 0x00, 
  0xC0, 0xE0, 0x00, 0x00, 0xC0, 0x70, 0x00, 0x00, 0xC0, 0x39, 0x00, 0x00, 
  0x80, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, };

const PROGMEM char pos_floor_icon[] = {
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0xE7, 
  0x00, 0x00, 0x00, 0xC3, 0x00, 0x00, 0x00, 0xC3, 0x00, 0x00, 0x00, 0xE7, 
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3E, 0x03, 0x00, 0x00, 0x3F, 0x07, 0x00, 0x00, 0x73, 
  0x0E, 0x00, 0x80, 0x63, 0x1C, 0x00, 0x80, 0x61, 0x38, 0x00, 0x80, 0x71, 
  0x70, 0x02, 0x80, 0x31, 0xE0, 0x03, 0xC0, 0x31, 0xC0, 0x03, 0xC0, 0x30, 
  0xC0, 0x03, 0xC0, 0x38, 0xC0, 0xE1, 0xFF, 0x18, 0x00, 0xF0, 0x7F, 0x18, 
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0E, 
  0x00, 0x07, 0xFF, 0x07, 0x80, 0x83, 0xFF, 0x03, 0xC0, 0xC1, 0x01, 0x00, 
  0xC0, 0xE0, 0x00, 0x00, 0xC0, 0x70, 0x00, 0x00, 0xC0, 0x39, 0x00, 0x00, 
  0x80, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, };

const PROGMEM char pos_screen_icon[] = {
  0x00, 0x00, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0x7E, 0x00, 0x0E, 0x07, 0xE7, 
  0x80, 0x01, 0x0C, 0xC3, 0x80, 0x00, 0x08, 0xC3, 0x80, 0xA9, 0x0C, 0xE7, 
  0x00, 0xAB, 0x04, 0x7F, 0x00, 0xAA, 0x06, 0x3C, 0x00, 0xAE, 0x02, 0x00, 
  0x00, 0xFC, 0x03, 0x3E, 0x00, 0xA8, 0x00, 0x3F, 0x00, 0xA8, 0x00, 0x73, 
  0x00, 0x00, 0x80, 0x63, 0x00, 0x00, 0x80, 0x61, 0x00, 0x00, 0x80, 0x71, 
  0x00, 0x00, 0x80, 0x31, 0x00, 0x00, 0xC0, 0x31, 0x00, 0x00, 0xC0, 0x30, 
  0x00, 0x00, 0xC0, 0x38, 0x00, 0xE0, 0xFF, 0x18, 0x00, 0xF0, 0x7F, 0x18, 
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0E, 
  0x00, 0x07, 0xFF, 0x07, 0x80, 0x83, 0xFF, 0x03, 0xC0, 0xC1, 0x01, 0x00, 
  0xC0, 0xE0, 0x00, 0x00, 0xC0, 0x70, 0x00, 0x00, 0xC0, 0x39, 0x00, 0x00, 
  0x80, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, };

const PROGMEM char pos_face_floor_icon[] = {
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x04, 0x7E, 0x00, 0x00, 0x0C, 0xE7, 
  0x00, 0xFF, 0x1F, 0xC3, 0x00, 0xFF, 0x1F, 0xC3, 0x00, 0x00, 0x0C, 0xE7, 
  0x00, 0x00, 0x04, 0x7F, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3E, 0x03, 0x00, 0x00, 0x3F, 0x07, 0x00, 0x00, 0x73, 
  0x0E, 0x00, 0x80, 0x63, 0x1C, 0x00, 0x80, 0x61, 0x38, 0x00, 0x80, 0x71, 
  0x70, 0x02, 0x80, 0x31, 0xE0, 0x03, 0xC0, 0x31, 0xC0, 0x03, 0xC0, 0x30, 
  0xC0, 0x03, 0xC0, 0x38, 0xC0, 0xE1, 0xFF, 0x18, 0x00, 0xF0, 0x7F, 0x18, 
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0E, 
  0x00, 0x07, 0xFF, 0x07, 0x80, 0x83, 0xFF, 0x03, 0xC0, 0xC1, 0x01, 0x00, 
  0xC0, 0xE0, 0x00, 0x00, 0xC0, 0x70, 0x00, 0x00, 0xC0, 0x39, 0x00, 0x00, 
  0x80, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, };


const PROGMEM char pos_floor_screen_icon[] = {
  0x00, 0x00, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0x7E, 0x00, 0x0E, 0x07, 0xE7, 
  0x80, 0x01, 0x0C, 0xC3, 0x80, 0x00, 0x08, 0xC3, 0x80, 0xA9, 0x0C, 0xE7, 
  0x00, 0xAB, 0x04, 0x7F, 0x00, 0xAA, 0x06, 0x3C, 0x00, 0xAE, 0x02, 0x00, 
  0x00, 0xFC, 0x03, 0x3E, 0x03, 0xA8, 0x00, 0x3F, 0x07, 0xA8, 0x00, 0x73, 
  0x0E, 0x00, 0x80, 0x63, 0x1C, 0x00, 0x80, 0x61, 0x38, 0x00, 0x80, 0x71, 
  0x70, 0x02, 0x80, 0x31, 0xE0, 0x03, 0xC0, 0x31, 0xC0, 0x03, 0xC0, 0x30, 
  0xC0, 0x03, 0xC0, 0x38, 0xC0, 0xE1, 0xFF, 0x18, 0x00, 0xF0, 0x7F, 0x18, 
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0E, 
  0x00, 0x07, 0xFF, 0x07, 0x80, 0x83, 0xFF, 0x03, 0xC0, 0xC1, 0x01, 0x00, 
  0xC0, 0xE0, 0x00, 0x00, 0xC0, 0x70, 0x00, 0x00, 0xC0, 0x39, 0x00, 0x00, 
  0x80, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, };

const PROGMEM char ac_icon[] = {
    0x00, 0x00, 0x90, 0x00, 0x60, 0x00, 0x02, 0x04, 0x0C, 0x03, 0xF2, 0x04, 
    0xF2, 0x04, 0x0C, 0x03, 0x02, 0x04, 0x60, 0x00, 0x90, 0x00, 0x00, 0x00, 
};

#endif