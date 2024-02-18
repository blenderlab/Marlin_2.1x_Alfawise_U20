/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2023 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../fontdata.h"

#if HAS_GRAPHICAL_TFT && TFT_FONT == UNIFONT

// NotoSans_Medium Greek 40pt, capital 'A' height: 29px, width: 100%, range: 0x0386-0x03ce, glyphs: 63
extern const uint8_t NotoSans_Medium_Greek_29[10140] = {
  130,29,134,3,206,3,38,246, // unifont_t
  // 0x0386  Ά
  29,29,232,29,0,0,15,252,0,10,164,0,0,0,15,248,0,31,252,0,0,0,31,240,0,63,253,0,0,0,63,208,0,63,254,0,0,0,63,128,0,191,255,0,0,0,127,0,0,255,127,128,0,0,125,0,1,254,63,192,0,0,0,0,2,253,47,208,0,0,0,0,3,252,31,224,0,0,0,0,7,248,15,240,0,0,0,0,15,244,11,244,0,0,0,0,15,240,7,252,0,0,0,0,47,224,3,252,0,0,0,0,63,208,2,254,0,0,0,0,127,192,1,255,0,0,0,0,191,128,0,255,64,0,0,0,255,0,0,191,128,0,0,1,255,255,255,255,192,0,0,3,255,255,255,255,208,0,0,3,255,255,255,255,240,0,0,11,255,255,255,255,240,0,0,15,244,0,0,15,248,0,0,31,240,0,0,11,252,0,0,47,224,0,0,3,253,0,0,63,208,0,0,3,254,0,0,127,192,0,0,1,255,0,0,255,128,0,0,0,255,64,0,255,64,0,0,0,191,192,2,255,0,0,0,0,127,192,
  // 0x0387  ·
  255,
  // 0x0388  Έ
  27,29,203,30,0,0,15,252,2,170,170,170,168,15,248,3,255,255,255,252,31,240,3,255,255,255,252,63,208,3,255,255,255,252,63,128,3,253,0,0,0,127,0,3,253,0,0,0,125,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,255,170,170,164,0,0,3,255,255,255,244,0,0,3,255,255,255,244,0,0,3,255,255,255,244,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,253,0,0,0,0,0,3,255,170,170,168,0,0,3,255,255,255,252,0,0,3,255,255,255,252,0,0,3,255,255,255,252,
  // 0x0389  Ή
  34,29,5,37,0,0,15,252,2,168,0,0,0,42,128,15,248,3,253,0,0,0,63,208,31,240,3,253,0,0,0,63,208,63,208,3,253,0,0,0,63,208,63,128,3,253,0,0,0,63,208,127,0,3,253,0,0,0,63,208,125,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,255,170,170,170,191,208,0,0,3,255,255,255,255,255,208,0,0,3,255,255,255,255,255,208,0,0,3,255,255,255,255,255,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,0,0,3,253,0,0,0,63,208,
  // 0x038a  Ί
  21,29,174,22,0,0,15,252,10,170,170,64,15,248,31,255,255,128,31,240,31,255,255,128,63,208,2,255,249,0,63,128,0,63,208,0,127,0,0,63,208,0,125,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,127,224,0,0,0,11,255,255,64,0,0,31,255,255,128,0,0,31,255,255,128,
  // 0x038b  ΋
  255,
  // 0x038c  Ό
  35,30,14,37,0,255,15,252,0,0,111,255,144,0,0,15,248,0,11,255,255,254,0,0,31,240,0,127,255,255,255,208,0,63,208,1,255,255,255,255,244,0,63,128,7,255,208,0,127,253,0,127,0,15,253,0,0,7,255,0,125,0,47,248,0,0,1,255,128,0,0,63,240,0,0,0,255,192,0,0,127,208,0,0,0,127,208,0,0,191,192,0,0,0,63,224,0,0,255,128,0,0,0,47,240,0,0,255,128,0,0,0,47,240,0,0,255,64,0,0,0,31,240,0,1,255,64,0,0,0,31,240,0,1,255,0,0,0,0,31,244,0,1,255,64,0,0,0,31,240,0,0,255,64,0,0,0,31,240,0,0,255,64,0,0,0,31,240,0,0,255,128,0,0,0,47,240,0,0,255,192,0,0,0,63,224,0,0,191,192,0,0,0,63,208,0,0,63,224,0,0,0,191,192,0,0,63,240,0,0,0,255,128,0,0,31,252,0,0,3,255,0,0,0,11,255,64,0,31,254,0,0,0,3,255,249,86,255,252,0,0,0,0,255,255,255,255,224,0,0,0,0,47,255,255,255,64,0,0,0,0,2,255,255,244,0,0,0,0,0,0,1,84,0,0,0,
  // 0x038d  ΍
  255,
  // 0x038e  Ύ
  32,29,232,33,0,0,15,252,26,160,0,0,0,170,15,248,15,248,0,0,2,255,31,240,11,252,0,0,3,253,63,208,3,254,0,0,11,252,63,128,2,255,0,0,15,244,127,0,0,255,128,0,47,240,125,0,0,127,192,0,63,208,0,0,0,63,224,0,191,128,0,0,0,31,240,1,255,0,0,0,0,15,248,3,254,0,0,0,0,7,252,7,252,0,0,0,0,3,255,15,248,0,0,0,0,0,255,95,240,0,0,0,0,0,191,255,208,0,0,0,0,0,63,255,192,0,0,0,0,0,47,255,64,0,0,0,0,0,15,255,0,0,0,0,0,0,11,253,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,0,0,0,0,3,252,0,0,
  // 0x038f  Ώ
  34,29,5,35,0,0,15,252,0,1,191,254,64,0,0,15,248,0,31,255,255,248,0,0,31,240,0,255,255,255,255,128,0,63,208,3,255,255,191,255,224,0,63,128,15,255,64,0,191,248,0,127,0,63,252,0,0,31,253,0,125,0,127,240,0,0,7,255,0,0,0,255,192,0,0,2,255,64,0,0,255,128,0,0,0,255,192,0,1,255,0,0,0,0,191,192,0,2,255,0,0,0,0,127,208,0,3,255,0,0,0,0,63,208,0,3,254,0,0,0,0,63,208,0,3,254,0,0,0,0,63,224,0,3,254,0,0,0,0,63,208,0,3,254,0,0,0,0,63,208,0,2,255,0,0,0,0,63,192,0,1,255,0,0,0,0,127,192,0,0,255,64,0,0,0,191,128,0,0,191,128,0,0,0,255,64,0,0,63,192,0,0,2,255,0,0,0,47,224,0,0,3,252,0,0,0,15,248,0,0,15,244,0,0,0,3,253,0,0,63,224,0,0,0,0,255,128,0,255,128,0,0,2,170,255,224,3,255,170,160,0,3,255,255,240,7,255,255,240,0,3,255,255,240,7,255,255,240,0,3,255,255,240,7,255,255,240,
  // 0x0390  ΐ
  255,
  // 0x0391  Α
  26,29,203,26,0,0,0,0,2,169,0,0,0,0,0,11,255,0,0,0,0,0,15,255,0,0,0,0,0,31,255,128,0,0,0,0,47,255,192,0,0,0,0,63,175,208,0,0,0,0,127,95,224,0,0,0,0,255,15,240,0,0,0,1,255,11,244,0,0,0,2,253,7,252,0,0,0,3,252,3,252,0,0,0,7,252,2,254,0,0,0,15,244,1,255,0,0,0,15,240,0,255,64,0,0,47,224,0,191,128,0,0,63,208,0,63,192,0,0,127,192,0,63,208,0,0,191,255,255,255,240,0,0,255,255,255,255,240,0,1,255,255,255,255,248,0,3,255,255,255,255,252,0,3,252,0,0,3,253,0,11,252,0,0,3,254,0,15,248,0,0,1,255,0,31,240,0,0,0,255,64,47,240,0,0,0,191,192,63,208,0,0,0,127,192,127,192,0,0,0,63,224,255,128,0,0,0,47,240,
  // 0x0392  Β
  20,29,145,26,4,0,170,170,165,0,0,255,255,255,249,0,255,255,255,255,192,255,255,255,255,240,255,0,1,191,248,255,0,0,31,252,255,0,0,11,252,255,0,0,7,252,255,0,0,7,252,255,0,0,7,252,255,0,0,15,248,255,0,0,47,240,255,170,171,255,192,255,255,255,249,0,255,255,255,254,0,255,255,255,255,224,255,0,0,111,248,255,0,0,11,253,255,0,0,3,255,255,0,0,2,255,255,0,0,1,255,255,0,0,2,255,255,0,0,3,255,255,0,0,7,254,255,0,0,31,253,255,170,171,255,248,255,255,255,255,224,255,255,255,255,64,255,255,255,228,0,
  // 0x0393  Γ
  15,29,116,20,4,0,170,170,170,168,255,255,255,252,255,255,255,252,255,255,255,252,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,
  // 0x0394  Δ
  26,29,203,26,0,0,0,0,6,168,0,0,0,0,0,11,254,0,0,0,0,0,15,255,0,0,0,0,0,47,255,64,0,0,0,0,63,255,192,0,0,0,0,127,175,192,0,0,0,0,191,95,224,0,0,0,0,255,15,240,0,0,0,1,254,11,244,0,0,0,3,252,7,252,0,0,0,7,252,3,252,0,0,0,11,244,2,254,0,0,0,15,240,0,255,0,0,0,31,224,0,255,64,0,0,63,208,0,127,192,0,0,63,192,0,63,192,0,0,191,128,0,47,224,0,0,255,0,0,31,240,0,1,255,0,0,15,244,0,3,253,0,0,11,248,0,3,252,0,0,3,252,0,11,248,0,0,3,253,0,15,244,0,0,1,255,0,31,240,0,0,0,255,64,63,224,0,0,0,191,128,63,255,255,255,255,255,192,191,255,255,255,255,255,208,191,255,255,255,255,255,224,191,255,255,255,255,255,224,
  // 0x0395  Ε
  16,29,116,22,4,0,170,170,170,169,255,255,255,255,255,255,255,255,255,255,255,255,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,234,170,168,255,255,255,252,255,255,255,252,255,255,255,252,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,234,170,170,255,255,255,255,255,255,255,255,255,255,255,255,
  // 0x0396  Ζ
  21,29,174,23,1,0,42,170,170,170,170,0,63,255,255,255,255,0,63,255,255,255,255,0,63,255,255,255,255,0,0,0,0,7,254,0,0,0,0,15,252,0,0,0,0,47,240,0,0,0,0,127,224,0,0,0,0,255,192,0,0,0,2,255,0,0,0,0,7,254,0,0,0,0,15,252,0,0,0,0,47,240,0,0,0,0,127,208,0,0,0,0,255,192,0,0,0,2,255,0,0,0,0,7,253,0,0,0,0,15,252,0,0,0,0,47,240,0,0,0,0,127,208,0,0,0,0,255,192,0,0,0,2,255,0,0,0,0,7,253,0,0,0,0,15,252,0,0,0,0,47,240,0,0,0,0,127,250,170,170,170,64,191,255,255,255,255,128,191,255,255,255,255,128,191,255,255,255,255,128,
  // 0x0397  Η
  22,29,174,30,4,0,170,0,0,0,10,160,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,234,170,170,191,240,255,255,255,255,255,240,255,255,255,255,255,240,255,255,255,255,255,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,255,0,0,0,15,240,
  // 0x0398  Θ
  27,30,210,31,2,255,0,0,27,255,228,0,0,0,7,255,255,255,64,0,0,47,255,255,255,240,0,0,191,255,239,255,252,0,2,255,224,0,31,255,0,7,255,64,0,2,255,128,15,252,0,0,0,255,208,31,248,0,0,0,63,224,47,240,0,0,0,47,240,63,224,0,0,0,31,244,63,208,0,0,0,15,248,127,192,0,0,0,15,252,127,192,85,85,84,11,252,191,192,255,255,253,11,252,191,192,255,255,253,11,252,191,192,255,255,253,11,252,191,192,85,85,84,11,252,127,192,0,0,0,15,252,127,208,0,0,0,15,248,63,224,0,0,0,15,244,63,240,0,0,0,47,240,31,244,0,0,0,63,240,15,252,0,0,0,191,208,11,254,0,0,1,255,192,3,255,192,0,11,255,64,0,255,254,85,191,254,0,0,63,255,255,255,244,0,0,11,255,255,255,208,0,0,0,191,255,249,0,0,0,0,1,85,0,0,0,
  // 0x0399  Ι
  12,29,87,14,1,0,106,170,169,127,255,254,127,255,254,11,255,228,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,1,255,128,127,255,253,127,255,254,127,255,254,
  // 0x039a  Κ
  21,29,174,25,4,0,170,0,0,0,170,64,255,0,0,3,255,0,255,0,0,15,252,0,255,0,0,47,244,0,255,0,0,127,208,0,255,0,1,255,128,0,255,0,3,254,0,0,255,0,15,252,0,0,255,0,63,240,0,0,255,0,255,192,0,0,255,2,255,0,0,0,255,11,253,0,0,0,255,31,244,0,0,0,255,127,244,0,0,0,255,255,252,0,0,0,255,255,255,0,0,0,255,242,255,128,0,0,255,192,255,208,0,0,255,0,63,240,0,0,255,0,31,248,0,0,255,0,15,253,0,0,255,0,3,255,0,0,255,0,1,255,128,0,255,0,0,191,208,0,255,0,0,63,240,0,255,0,0,15,252,0,255,0,0,11,254,0,255,0,0,3,255,0,255,0,0,0,255,192,
  // 0x039b  Λ
  25,29,203,25,0,0,0,0,10,168,0,0,0,0,0,15,252,0,0,0,0,0,31,254,0,0,0,0,0,63,255,0,0,0,0,0,63,255,64,0,0,0,0,191,127,128,0,0,0,0,255,63,192,0,0,0,1,254,47,208,0,0,0,2,253,15,224,0,0,0,3,252,15,240,0,0,0,7,248,11,244,0,0,0,11,244,3,252,0,0,0,15,240,3,252,0,0,0,31,224,2,253,0,0,0,63,208,1,255,0,0,0,63,192,0,255,0,0,0,191,128,0,191,128,0,0,255,64,0,127,192,0,0,255,0,0,63,208,0,2,254,0,0,47,224,0,3,253,0,0,31,240,0,7,252,0,0,15,244,0,11,248,0,0,11,248,0,15,244,0,0,7,252,0,31,240,0,0,3,253,0,47,224,0,0,2,255,0,63,208,0,0,1,255,0,127,192,0,0,0,255,128,255,128,0,0,0,191,192,
  // 0x039c  Μ
  29,29,232,37,4,0,170,160,0,0,0,2,170,128,255,244,0,0,0,11,255,192,255,248,0,0,0,15,255,192,255,252,0,0,0,31,255,192,255,253,0,0,0,47,255,192,254,255,0,0,0,63,191,192,254,255,0,0,0,127,127,192,254,127,64,0,0,255,63,192,254,63,192,0,0,253,63,192,254,47,192,0,2,252,63,192,254,31,224,0,3,248,63,192,254,15,240,0,7,244,127,192,254,11,244,0,11,240,127,192,254,7,248,0,15,224,127,192,254,3,252,0,31,208,127,192,254,2,253,0,63,192,127,192,254,0,254,0,63,128,127,192,254,0,255,0,191,0,127,192,254,0,191,64,255,0,127,192,254,0,63,193,253,0,127,192,254,0,63,194,252,0,127,192,254,0,31,211,248,0,127,192,254,0,15,247,244,0,127,192,254,0,11,255,240,0,127,192,254,0,7,255,224,0,127,192,254,0,3,255,192,0,127,192,254,0,2,255,192,0,127,192,254,0,1,255,128,0,127,192,254,0,0,255,0,0,127,192,
  // 0x039d  Ν
  23,29,174,31,4,0,170,128,0,0,1,168,255,224,0,0,3,252,255,244,0,0,3,252,255,252,0,0,3,252,255,254,0,0,3,252,255,255,0,0,3,252,254,255,192,0,3,252,253,127,208,0,3,252,254,63,240,0,3,252,254,15,248,0,3,252,254,11,253,0,3,252,254,3,255,0,3,252,254,1,255,128,3,252,254,0,191,192,3,252,254,0,63,240,3,252,254,0,31,244,3,252,254,0,15,252,2,252,254,0,3,254,2,252,254,0,2,255,66,252,254,0,0,255,194,252,254,0,0,127,226,252,254,0,0,47,242,252,254,0,0,15,254,252,254,0,0,7,255,252,254,0,0,3,255,252,254,0,0,0,255,252,254,0,0,0,191,252,254,0,0,0,63,252,254,0,0,0,31,252,
  // 0x039e  Ξ
  21,29,174,25,2,0,26,170,170,170,169,0,63,255,255,255,255,0,63,255,255,255,255,0,63,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,255,255,255,240,0,3,255,255,255,240,0,3,255,255,255,240,0,3,255,255,255,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,255,255,255,255,64,191,255,255,255,255,128,191,255,255,255,255,128,191,255,255,255,255,128,
  // 0x039f  Ο
  27,30,210,31,2,255,0,0,27,255,228,0,0,0,7,255,255,255,64,0,0,47,255,255,255,240,0,0,191,255,239,255,252,0,2,255,224,0,31,255,0,7,255,64,0,2,255,128,15,252,0,0,0,255,208,31,248,0,0,0,63,224,47,240,0,0,0,47,240,63,224,0,0,0,31,244,63,208,0,0,0,15,248,127,192,0,0,0,15,252,127,192,0,0,0,11,252,191,192,0,0,0,11,252,191,192,0,0,0,11,252,191,192,0,0,0,11,252,191,192,0,0,0,11,252,127,192,0,0,0,15,252,127,208,0,0,0,15,248,63,224,0,0,0,15,244,63,240,0,0,0,47,240,31,244,0,0,0,63,240,15,252,0,0,0,191,208,11,254,0,0,1,255,192,3,255,192,0,11,255,64,0,255,254,85,191,254,0,0,63,255,255,255,244,0,0,11,255,255,255,208,0,0,0,191,255,249,0,0,0,0,1,85,0,0,0,
  // 0x03a0  Π
  22,29,174,30,4,0,170,170,170,170,170,144,255,255,255,255,255,224,255,255,255,255,255,224,255,255,255,255,255,224,255,64,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,255,0,0,0,47,224,
  // 0x03a1  Ρ
  19,29,145,24,4,0,170,170,148,0,0,255,255,255,224,0,255,255,255,254,0,255,255,255,255,128,255,0,7,255,208,255,0,0,127,240,255,0,0,47,240,255,0,0,15,244,255,0,0,15,244,255,0,0,15,244,255,0,0,15,244,255,0,0,31,240,255,0,0,63,240,255,0,1,255,208,255,150,175,255,192,255,255,255,255,0,255,255,255,248,0,255,255,254,64,0,255,64,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,
  // 0x03a2  ΢
  255,
  // 0x03a3  Σ
  21,29,174,23,1,0,42,170,170,170,170,0,63,255,255,255,255,0,63,255,255,255,255,0,63,255,255,255,255,0,47,248,0,0,0,0,15,253,0,0,0,0,3,255,0,0,0,0,0,255,192,0,0,0,0,127,240,0,0,0,0,31,248,0,0,0,0,11,254,0,0,0,0,2,255,64,0,0,0,0,255,208,0,0,0,0,63,240,0,0,0,0,47,240,0,0,0,0,127,192,0,0,0,1,255,64,0,0,0,3,254,0,0,0,0,15,248,0,0,0,0,47,240,0,0,0,0,191,192,0,0,0,1,255,64,0,0,0,3,253,0,0,0,0,15,248,0,0,0,0,63,240,0,0,0,0,191,250,175,255,255,64,191,255,255,255,255,128,191,255,255,255,255,128,191,255,255,255,255,128,
  // 0x03a4  Τ
  22,29,174,23,0,0,106,170,170,170,170,160,127,255,255,255,255,240,127,255,255,255,255,240,127,255,255,255,255,240,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,0,0,63,208,0,0,
  // 0x03a5  Υ
  23,29,174,23,0,0,106,64,0,0,6,168,127,192,0,0,15,248,63,240,0,0,31,240,31,244,0,0,63,224,15,252,0,0,127,192,7,253,0,0,255,128,2,255,0,1,255,0,0,255,64,3,253,0,0,191,192,11,252,0,0,63,208,15,244,0,0,47,240,47,240,0,0,15,244,63,208,0,0,7,252,191,128,0,0,3,254,255,0,0,0,1,255,254,0,0,0,0,255,252,0,0,0,0,127,248,0,0,0,0,63,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,0,0,31,240,0,0,
  // 0x03a6  Φ
  31,30,240,34,2,255,0,0,0,42,128,0,0,0,0,0,0,63,208,0,0,0,0,0,0,63,208,0,0,0,0,0,107,255,254,144,0,0,0,27,255,255,255,255,64,0,0,191,255,255,255,255,244,0,3,255,255,191,255,255,254,0,15,255,64,63,208,27,255,64,47,248,0,63,208,1,255,192,63,224,0,63,208,0,63,224,127,192,0,63,208,0,47,240,191,128,0,63,208,0,15,240,255,64,0,63,208,0,15,244,255,64,0,63,208,0,15,244,255,64,0,63,208,0,15,244,255,64,0,63,208,0,15,244,255,128,0,63,208,0,15,240,191,192,0,63,208,0,31,240,63,208,0,63,208,0,63,224,63,240,0,63,208,0,191,192,15,253,0,63,208,3,255,128,7,255,228,63,209,111,255,0,1,255,255,255,255,255,252,0,0,47,255,255,255,255,208,0,0,2,255,255,255,249,0,0,0,0,1,127,229,0,0,0,0,0,0,63,208,0,0,0,0,0,0,63,208,0,0,0,0,0,0,63,208,0,0,0,0,0,0,0,0,0,0,0,
  // 0x03a7  Χ
  24,29,174,24,0,0,42,144,0,0,2,168,47,240,0,0,11,252,15,252,0,0,31,244,7,253,0,0,63,224,2,255,0,0,191,192,0,255,128,0,255,64,0,127,192,3,254,0,0,47,240,7,252,0,0,15,244,15,244,0,0,7,252,47,224,0,0,3,254,63,192,0,0,0,255,255,64,0,0,0,127,255,0,0,0,0,63,252,0,0,0,0,47,252,0,0,0,0,127,254,0,0,0,0,255,255,0,0,0,2,255,191,192,0,0,3,252,63,208,0,0,15,248,31,240,0,0,31,240,15,252,0,0,63,208,3,253,0,0,191,128,2,255,0,1,255,0,0,255,128,3,253,0,0,127,208,11,252,0,0,63,240,31,244,0,0,15,248,63,224,0,0,11,253,191,192,0,0,3,255,
  // 0x03a8  Ψ
  27,29,203,34,3,0,42,64,0,169,0,2,168,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,127,192,1,255,0,7,252,63,192,1,255,0,11,248,63,192,1,255,0,15,248,63,224,1,255,0,15,244,31,240,1,255,0,47,240,15,252,1,255,0,191,208,7,255,145,255,7,255,192,2,255,255,255,255,255,0,0,127,255,255,255,248,0,0,11,255,255,255,128,0,0,0,22,255,80,0,0,0,0,1,255,0,0,0,0,0,1,255,0,0,0,0,0,1,255,0,0,0,0,0,1,255,0,0,0,0,0,1,255,0,0,0,0,0,1,255,0,0,0,0,0,1,255,0,0,0,
  // 0x03a9  Ω
  27,29,203,29,1,0,0,0,27,255,160,0,0,0,7,255,255,255,64,0,0,47,255,255,255,224,0,0,255,255,239,255,252,0,2,255,224,0,47,255,0,7,255,0,0,3,255,128,15,252,0,0,0,255,208,47,244,0,0,0,127,224,63,240,0,0,0,47,240,63,224,0,0,0,31,244,127,208,0,0,0,15,248,191,192,0,0,0,15,248,191,192,0,0,0,15,252,191,192,0,0,0,11,252,191,192,0,0,0,11,252,127,192,0,0,0,11,248,127,192,0,0,0,15,248,63,208,0,0,0,15,244,63,224,0,0,0,31,240,31,240,0,0,0,47,224,15,244,0,0,0,63,192,7,252,0,0,0,255,64,2,255,0,0,2,255,0,0,191,128,0,11,252,0,0,47,240,0,47,224,0,170,175,252,0,255,234,168,255,255,252,0,255,255,252,255,255,252,0,255,255,252,255,255,252,0,255,255,252,
  // 0x03aa  Ϊ
  255,
  // 0x03ab  Ϋ
  255,
  // 0x03ac  ά
  23,32,192,25,2,255,0,0,11,253,0,0,0,0,15,252,0,0,0,0,15,244,0,0,0,0,31,224,0,0,0,0,47,192,0,0,0,0,63,64,0,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,253,0,169,0,0,255,255,208,253,0,3,255,255,249,253,0,15,255,170,255,253,0,47,248,0,47,253,0,63,240,0,15,253,0,127,192,0,7,253,0,191,192,0,3,253,0,191,128,0,3,253,0,255,128,0,2,253,0,255,64,0,2,253,0,255,64,0,2,253,0,255,64,0,2,253,0,255,128,0,2,253,0,191,128,0,3,253,0,127,192,0,3,253,0,63,208,0,11,253,0,63,240,0,15,254,0,31,254,0,191,255,64,11,255,255,253,255,244,2,255,255,240,191,244,0,127,255,128,63,244,0,1,80,0,1,64,
  // 0x03ad  έ
  17,32,160,19,1,255,0,0,11,253,0,0,0,15,248,0,0,0,31,240,0,0,0,47,208,0,0,0,63,192,0,0,0,63,0,0,0,0,125,0,0,0,0,0,0,0,0,0,0,0,0,0,27,255,164,0,1,255,255,255,64,7,255,255,255,128,15,254,86,255,0,31,244,0,6,0,31,224,0,0,0,31,224,0,0,0,31,240,0,0,0,15,248,0,0,0,3,255,255,128,0,0,127,255,192,0,1,255,255,192,0,15,254,149,64,0,47,240,0,0,0,63,208,0,0,0,127,192,0,0,0,127,192,0,0,0,63,224,0,0,0,63,249,0,27,64,15,255,255,255,64,7,255,255,255,64,0,191,255,254,0,0,1,85,0,0,
  // 0x03ae  ή
  19,41,205,25,3,246,0,0,255,192,0,0,1,255,64,0,0,2,254,0,0,0,3,252,0,0,0,7,244,0,0,0,11,240,0,0,0,11,192,0,0,0,0,0,0,0,0,0,0,0,0,105,0,191,228,0,191,11,255,255,0,191,63,255,255,192,191,255,170,255,224,191,248,0,63,240,191,240,0,15,244,191,208,0,15,244,191,192,0,11,248,191,192,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,6,164,
  // 0x03af  ί
  10,32,96,14,3,255,2,255,64,3,254,0,7,252,0,11,244,0,15,240,0,31,192,0,31,64,0,0,0,0,0,0,0,106,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,191,128,0,191,192,0,127,224,16,63,255,240,31,255,240,3,255,240,0,21,64,
  // 0x03b0  ΰ
  255,
  // 0x03b1  α
  23,23,138,25,2,255,0,27,253,0,169,0,0,255,255,208,253,0,3,255,255,249,253,0,15,255,170,255,253,0,47,248,0,47,253,0,63,240,0,15,253,0,127,192,0,7,253,0,191,192,0,3,253,0,191,128,0,3,253,0,255,128,0,2,253,0,255,64,0,2,253,0,255,64,0,2,253,0,255,64,0,2,253,0,255,128,0,2,253,0,191,128,0,3,253,0,127,192,0,3,253,0,63,208,0,11,253,0,63,240,0,15,254,0,31,254,0,191,255,64,11,255,255,253,255,244,2,255,255,240,191,244,0,127,255,128,63,244,0,1,80,0,1,64,
  // 0x03b2  β
  20,41,205,25,3,246,0,1,105,64,0,0,127,255,248,0,3,255,255,255,0,15,255,255,255,192,31,252,0,255,224,63,240,0,63,240,127,192,0,31,240,127,192,0,15,244,191,128,0,15,244,191,128,0,15,240,191,128,0,31,240,191,128,0,63,208,191,128,0,191,192,191,130,171,254,0,191,131,255,224,0,191,131,255,249,0,191,130,175,255,128,191,128,0,127,240,191,128,0,15,248,191,128,0,7,252,191,128,0,3,253,191,128,0,2,254,191,128,0,2,254,191,128,0,2,254,191,128,0,3,254,191,128,0,7,253,191,192,0,15,252,191,249,0,191,244,191,255,255,255,224,191,255,255,255,64,191,159,255,248,0,191,128,85,0,0,191,128,0,0,0,191,128,0,0,0,191,128,0,0,0,191,128,0,0,0,191,128,0,0,0,191,128,0,0,0,191,128,0,0,0,191,128,0,0,0,106,64,0,0,0,
  // 0x03b3  γ
  20,31,155,21,0,247,170,64,0,0,170,191,128,0,1,255,127,192,0,1,255,63,208,0,1,255,47,224,0,1,255,15,240,0,2,254,15,244,0,2,254,7,248,0,3,253,3,252,0,3,252,3,253,0,3,252,1,254,0,7,248,0,255,0,11,244,0,191,64,15,240,0,127,128,47,224,0,63,192,63,192,0,47,208,191,128,0,31,224,255,0,0,15,243,253,0,0,11,255,252,0,0,3,255,240,0,0,3,255,192,0,0,2,255,64,0,0,1,255,0,0,0,1,255,0,0,0,1,255,0,0,0,1,255,0,0,0,1,255,0,0,0,1,255,0,0,0,1,255,0,0,0,1,255,0,0,0,0,85,0,0,
  // 0x03b4  δ
  21,32,192,24,1,255,0,0,22,148,0,0,0,2,255,255,208,0,0,15,255,255,252,0,0,63,255,255,254,0,0,191,208,2,252,0,0,255,64,0,36,0,0,255,0,0,0,0,0,255,64,0,0,0,0,191,192,0,0,0,0,127,244,0,0,0,0,31,254,0,0,0,0,7,255,224,0,0,0,2,255,253,0,0,0,47,255,255,128,0,0,255,224,255,240,0,3,255,0,47,248,0,15,252,0,7,253,0,31,240,0,2,255,0,63,224,0,0,255,0,63,208,0,0,255,64,63,192,0,0,191,128,127,192,0,0,191,128,127,192,0,0,191,128,63,192,0,0,191,128,63,224,0,0,255,64,47,240,0,2,255,0,31,252,0,7,254,0,11,255,64,111,252,0,3,255,255,255,244,0,0,191,255,255,192,0,0,11,255,253,0,0,0,0,21,64,0,0,
  // 0x03b5  ε
  17,23,115,19,1,255,0,27,255,164,0,1,255,255,255,64,7,255,255,255,128,15,254,86,255,0,31,244,0,6,0,31,224,0,0,0,31,224,0,0,0,31,240,0,0,0,15,248,0,0,0,3,255,255,128,0,0,127,255,192,0,1,255,255,192,0,15,254,149,64,0,47,240,0,0,0,63,208,0,0,0,127,192,0,0,0,127,192,0,0,0,63,224,0,0,0,63,249,0,27,64,15,255,255,255,64,7,255,255,255,64,0,191,255,254,0,0,1,85,0,0,
  // 0x03b6  ζ
  17,40,200,19,2,247,21,85,85,85,0,63,255,255,255,128,63,255,255,255,128,47,255,251,255,64,0,0,3,254,0,0,0,11,252,0,0,0,31,240,0,0,0,63,208,0,0,0,255,128,0,0,3,255,0,0,0,11,252,0,0,0,31,244,0,0,0,63,224,0,0,0,255,192,0,0,2,255,0,0,0,3,253,0,0,0,15,248,0,0,0,31,240,0,0,0,63,224,0,0,0,127,192,0,0,0,191,192,0,0,0,255,128,0,0,0,255,64,0,0,0,255,128,0,0,0,255,192,0,0,0,191,208,0,0,0,63,248,0,0,0,47,255,144,0,0,11,255,255,144,0,1,255,255,252,0,0,31,255,255,0,0,0,111,255,64,0,0,1,255,64,0,0,0,255,64,0,0,0,255,64,0,0,0,255,0,0,0,1,255,0,0,0,2,253,0,0,0,3,252,0,0,0,0,0,0,
  // 0x03b7  η
  19,32,160,25,3,246,105,0,191,228,0,191,11,255,255,0,191,63,255,255,192,191,255,170,255,224,191,248,0,63,240,191,240,0,15,244,191,208,0,15,244,191,192,0,11,248,191,192,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,191,128,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,6,164,
  // 0x03b8  θ
  20,32,160,24,2,255,0,1,105,64,0,0,47,255,244,0,0,255,255,255,0,3,255,255,255,128,11,253,0,191,208,15,244,0,31,240,47,240,0,15,244,63,208,0,7,248,63,192,0,3,252,127,192,0,3,253,191,128,0,2,253,191,128,0,2,254,255,64,0,2,254,255,64,0,1,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,128,0,2,255,255,64,0,1,255,191,64,0,2,254,191,128,0,2,254,127,128,0,2,253,127,192,0,3,253,63,192,0,3,252,47,208,0,7,252,31,240,0,15,244,15,244,0,47,240,7,254,0,191,208,2,255,255,255,128,0,191,255,254,0,0,31,255,244,0,0,0,85,0,0,
  // 0x03b9  ι
  10,23,69,14,3,255,106,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,255,64,0,191,128,0,191,192,0,127,224,16,63,255,240,31,255,240,3,255,240,0,21,64,
  // 0x03ba  κ
  19,22,110,22,3,0,106,64,0,26,160,191,128,0,127,224,191,128,0,255,128,191,128,3,255,0,191,128,15,252,0,191,128,47,240,0,191,128,191,208,0,191,129,255,64,0,191,131,254,0,0,191,143,248,0,0,191,191,248,0,0,191,255,253,0,0,191,255,255,0,0,191,244,255,192,0,191,192,127,224,0,191,128,47,244,0,191,128,15,252,0,191,128,3,255,0,191,128,1,255,128,191,128,0,191,208,191,128,0,63,240,191,128,0,15,248,
  // 0x03bb  λ
  22,32,192,21,0,255,106,80,0,0,0,0,255,254,0,0,0,0,255,255,192,0,0,0,255,255,224,0,0,0,0,47,244,0,0,0,0,11,252,0,0,0,0,3,252,0,0,0,0,2,254,0,0,0,0,0,255,0,0,0,0,0,255,64,0,0,0,1,255,192,0,0,0,2,255,192,0,0,0,3,255,224,0,0,0,7,255,240,0,0,0,11,251,244,0,0,0,15,231,248,0,0,0,31,211,252,0,0,0,63,195,253,0,0,0,63,129,255,0,0,0,191,64,255,0,0,0,255,0,191,128,0,1,255,0,127,192,0,2,254,0,63,208,0,3,252,0,47,224,0,7,252,0,31,240,0,15,248,0,15,244,0,15,244,0,11,252,0,31,240,0,7,253,0,63,224,0,3,255,208,63,208,0,1,255,208,191,192,0,0,191,208,0,0,0,0,5,0,
  // 0x03bc  μ
  22,32,192,26,3,246,106,64,0,2,164,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,7,252,0,191,128,0,11,252,0,191,128,0,11,252,0,191,128,0,15,252,0,191,192,0,31,252,0,191,224,0,63,252,0,191,249,2,255,254,0,191,255,255,247,255,224,191,255,255,225,255,224,191,95,255,64,191,224,191,64,80,0,5,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,106,64,0,0,0,0,
  // 0x03bd  ν
  20,22,110,21,0,0,170,64,0,0,170,191,128,0,1,255,127,192,0,1,255,63,208,0,1,255,47,224,0,1,255,15,240,0,2,254,15,244,0,2,254,7,248,0,3,253,3,252,0,3,252,3,253,0,3,252,1,254,0,7,248,0,255,0,11,244,0,191,64,15,240,0,127,128,47,224,0,63,192,63,192,0,47,208,191,128,0,31,224,255,0,0,15,243,254,0,0,11,255,252,0,0,3,255,240,0,0,3,255,208,0,0,2,255,64,0,
  // 0x03be  ξ
  17,40,200,20,2,247,21,85,85,85,64,47,255,255,255,128,47,255,255,255,128,47,239,255,234,64,0,127,144,0,0,2,253,0,0,0,11,240,0,0,0,31,240,0,0,0,31,224,0,0,0,47,224,0,0,0,47,224,0,0,0,31,244,0,0,0,15,253,0,0,0,3,255,234,170,0,0,127,255,255,0,0,47,255,255,0,2,255,254,170,0,15,253,0,0,0,47,240,0,0,0,63,192,0,0,0,191,128,0,0,0,255,64,0,0,0,255,64,0,0,0,255,128,0,0,0,255,192,0,0,0,191,208,0,0,0,63,248,0,0,0,47,255,144,0,0,11,255,255,144,0,1,255,255,252,0,0,27,255,255,0,0,0,111,255,64,0,0,1,255,128,0,0,0,191,128,0,0,0,191,64,0,0,0,255,0,0,0,0,255,0,0,0,2,254,0,0,0,3,252,0,0,0,0,0,0,
  // 0x03bf  ο
  21,23,138,24,2,255,0,6,255,144,0,0,0,127,255,254,0,0,2,255,255,255,192,0,11,255,234,255,240,0,31,252,0,47,248,0,63,240,0,11,252,0,63,208,0,3,254,0,127,192,0,2,255,0,191,128,0,1,255,0,255,128,0,0,255,0,255,64,0,0,255,64,255,64,0,0,255,64,255,128,0,0,255,0,255,128,0,0,255,0,191,192,0,1,255,0,127,192,0,2,254,0,63,224,0,3,253,0,31,244,0,15,252,0,15,254,64,127,244,0,3,255,255,255,208,0,0,255,255,255,64,0,0,31,255,248,0,0,0,0,85,0,0,0,
  // 0x03c0  π
  26,23,161,27,0,255,42,170,170,170,170,170,160,127,255,255,255,255,255,240,127,255,255,255,255,255,240,42,191,250,170,191,250,160,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,31,240,0,0,63,208,0,15,240,0,0,63,208,0,15,248,0,0,63,208,0,15,255,224,0,63,208,0,7,255,224,0,63,208,0,1,255,224,0,0,0,0,0,21,0,
  // 0x03c1  ρ
  20,32,160,24,2,246,0,6,255,144,0,0,63,255,254,0,1,255,255,255,192,3,255,235,255,240,15,252,0,47,248,31,240,0,11,252,47,224,0,3,253,63,208,0,2,254,63,192,0,2,255,63,192,0,1,255,127,192,0,1,255,127,192,0,0,255,127,192,0,1,255,127,192,0,1,255,127,192,0,2,255,127,192,0,3,254,127,192,0,7,252,127,224,0,15,248,127,254,64,191,240,127,255,255,255,208,127,255,255,255,64,127,203,255,248,0,127,192,21,0,0,127,192,0,0,0,127,192,0,0,0,127,192,0,0,0,127,192,0,0,0,127,192,0,0,0,127,192,0,0,0,127,192,0,0,0,127,192,0,0,0,42,128,0,0,0,
  // 0x03c2  ς
  17,31,155,20,2,247,0,6,255,228,0,0,127,255,255,0,2,255,255,255,0,11,255,234,253,0,31,252,0,8,0,63,240,0,0,0,63,208,0,0,0,127,192,0,0,0,191,128,0,0,0,255,128,0,0,0,255,64,0,0,0,255,64,0,0,0,255,128,0,0,0,255,128,0,0,0,191,192,0,0,0,127,208,0,0,0,63,240,0,0,0,47,252,0,0,0,15,255,208,0,0,3,255,255,128,0,0,191,255,248,0,0,11,255,255,0,0,0,111,255,0,0,0,1,255,64,0,0,0,255,64,0,0,0,255,64,0,0,0,255,0,0,0,1,255,0,0,0,2,253,0,0,0,3,252,0,0,0,0,0,0,
  // 0x03c3  σ
  22,23,138,25,2,255,0,0,90,170,170,144,0,31,255,255,255,224,0,255,255,255,255,224,7,255,254,191,234,144,15,254,0,47,208,0,47,244,0,15,240,0,63,208,0,7,248,0,127,192,0,3,252,0,191,128,0,3,253,0,255,128,0,2,254,0,255,64,0,1,255,0,255,64,0,1,255,0,255,64,0,1,255,0,255,128,0,2,254,0,191,128,0,3,254,0,127,192,0,3,253,0,63,208,0,11,252,0,47,244,0,31,248,0,15,254,65,191,240,0,7,255,255,255,192,0,1,255,255,255,0,0,0,31,255,244,0,0,0,0,85,0,0,0,
  // 0x03c4  τ
  19,23,115,20,0,255,42,170,170,170,164,127,255,255,255,252,127,255,255,255,252,42,175,254,170,168,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,248,0,0,0,11,252,0,0,0,7,252,0,0,0,3,255,64,16,0,3,255,255,224,0,0,255,255,224,0,0,47,255,224,0,0,1,84,0,
  // 0x03c5  υ
  19,23,115,24,3,255,106,0,0,26,144,255,64,0,47,224,255,64,0,31,240,255,64,0,15,240,255,64,0,15,244,255,64,0,15,244,255,64,0,15,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,15,244,255,64,0,15,244,191,128,0,31,240,191,192,0,63,224,127,208,0,191,208,63,248,6,255,128,31,255,255,255,0,11,255,255,252,0,1,255,255,208,0,0,5,84,0,0,
  // 0x03c6  φ
  26,41,31,30,2,246,0,0,1,84,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,107,254,144,0,0,0,31,255,255,255,64,0,0,255,255,255,255,224,0,3,255,235,254,255,252,0,15,254,3,252,11,255,0,47,244,3,252,1,255,128,63,224,3,252,0,191,192,127,192,3,252,0,63,208,191,192,3,252,0,47,224,255,128,3,252,0,47,240,255,128,3,252,0,31,240,255,128,3,252,0,31,240,255,128,3,252,0,31,240,191,128,3,252,0,47,240,127,192,3,252,0,63,224,63,208,3,252,0,127,208,47,240,3,252,0,255,192,15,252,3,252,3,255,64,7,255,131,252,47,253,0,1,255,255,255,255,244,0,0,47,255,255,255,192,0,0,2,255,255,249,0,0,0,0,3,253,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,3,252,0,0,0,0,0,2,168,0,0,0,
  // 0x03c7  χ
  23,32,192,24,1,246,106,0,0,0,6,164,255,224,0,0,15,244,255,244,0,0,47,224,255,252,0,0,63,192,3,254,0,0,191,128,1,255,0,0,255,0,0,255,128,3,253,0,0,127,192,7,252,0,0,63,224,15,240,0,0,31,240,31,224,0,0,15,248,63,192,0,0,7,252,191,64,0,0,3,254,255,0,0,0,1,255,253,0,0,0,0,255,248,0,0,0,0,127,240,0,0,0,0,63,224,0,0,0,0,191,240,0,0,0,0,255,244,0,0,0,3,255,252,0,0,0,7,251,253,0,0,0,15,241,255,0,0,0,47,208,255,64,0,0,127,192,191,192,0,0,255,64,63,208,0,2,254,0,47,240,0,3,252,0,15,244,0,15,244,0,11,253,0,31,240,0,3,255,252,63,208,0,1,255,252,191,128,0,0,127,252,170,0,0,0,6,148,
  // 0x03c8  ψ
  25,41,31,31,3,246,0,0,1,80,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,106,0,11,244,0,170,0,255,0,11,244,0,255,0,255,0,11,244,0,191,64,255,0,11,244,0,191,128,255,0,11,244,0,127,128,255,0,11,244,0,63,192,255,0,11,244,0,63,192,255,0,11,244,0,63,192,255,0,11,244,0,63,192,255,0,11,244,0,63,192,255,0,11,244,0,63,192,255,0,11,244,0,63,192,255,0,11,244,0,63,192,255,64,11,244,0,63,192,191,64,11,244,0,127,192,127,128,11,244,0,191,128,63,208,11,244,1,255,0,63,240,11,244,7,254,0,15,254,75,248,127,252,0,7,255,255,255,255,240,0,1,255,255,255,255,128,0,0,27,255,255,248,0,0,0,0,27,248,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,11,244,0,0,0,0,0,6,164,0,0,0,
  // 0x03c9  ω
  29,23,184,33,2,255,0,170,0,0,0,42,64,0,2,253,0,0,0,47,208,0,7,252,0,0,0,15,240,0,15,244,0,0,0,11,248,0,31,240,0,0,0,3,252,0,47,208,0,0,0,2,253,0,63,192,0,0,0,1,254,0,63,192,0,21,0,0,255,0,127,192,0,191,64,0,255,0,127,128,0,191,64,0,255,0,127,128,0,191,64,0,255,64,191,128,0,191,64,0,255,64,127,128,0,191,64,0,255,0,127,128,0,191,64,0,255,0,127,192,0,191,64,0,255,0,63,192,0,255,128,1,255,0,63,208,0,255,192,2,254,0,31,240,1,255,192,3,253,0,15,253,7,247,244,31,252,0,7,255,255,227,255,255,240,0,2,255,255,193,255,255,208,0,0,127,254,0,127,254,0,0,0,1,80,0,1,80,0,0,
  // 0x03ca  ϊ
  255,
  // 0x03cb  ϋ
  255,
  // 0x03cc  ό
  21,32,192,24,2,255,0,0,3,255,0,0,0,0,7,253,0,0,0,0,11,248,0,0,0,0,15,240,0,0,0,0,31,208,0,0,0,0,47,128,0,0,0,0,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,255,144,0,0,0,127,255,254,0,0,2,255,255,255,192,0,11,255,234,255,240,0,31,252,0,47,248,0,63,240,0,11,252,0,63,208,0,3,254,0,127,192,0,2,255,0,191,128,0,1,255,0,255,128,0,0,255,0,255,64,0,0,255,64,255,64,0,0,255,64,255,128,0,0,255,0,255,128,0,0,255,0,191,192,0,1,255,0,127,192,0,2,254,0,63,224,0,3,253,0,31,244,0,15,252,0,15,254,64,127,244,0,3,255,255,255,208,0,0,255,255,255,64,0,0,31,255,248,0,0,0,0,85,0,0,0,
  // 0x03cd  ύ
  19,32,160,24,3,255,0,0,47,244,0,0,0,63,224,0,0,0,127,192,0,0,0,191,64,0,0,0,255,0,0,0,0,252,0,0,0,1,244,0,0,0,0,0,0,0,0,0,0,0,0,106,0,0,26,144,255,64,0,47,224,255,64,0,31,240,255,64,0,15,240,255,64,0,15,244,255,64,0,15,244,255,64,0,15,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,11,248,255,64,0,15,244,255,64,0,15,244,191,128,0,31,240,191,192,0,63,224,127,208,0,191,208,63,248,6,255,128,31,255,255,255,0,11,255,255,252,0,1,255,255,208,0,0,5,84,0,0,
  // 0x03ce  ώ
  29,32,0,33,2,255,0,0,0,3,255,0,0,0,0,0,0,3,253,0,0,0,0,0,0,11,252,0,0,0,0,0,0,15,240,0,0,0,0,0,0,15,224,0,0,0,0,0,0,31,192,0,0,0,0,0,0,47,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,170,0,0,0,42,64,0,2,253,0,0,0,47,208,0,7,252,0,0,0,15,240,0,15,244,0,0,0,11,248,0,31,240,0,0,0,3,252,0,47,208,0,0,0,2,253,0,63,192,0,0,0,1,254,0,63,192,0,21,0,0,255,0,127,192,0,191,64,0,255,0,127,128,0,191,64,0,255,0,127,128,0,191,64,0,255,64,191,128,0,191,64,0,255,64,127,128,0,191,64,0,255,0,127,128,0,191,64,0,255,0,127,192,0,191,64,0,255,0,63,192,0,255,128,1,255,0,63,208,0,255,192,2,254,0,31,240,1,255,192,3,253,0,15,253,7,247,244,31,252,0,7,255,255,227,255,255,240,0,2,255,255,193,255,255,208,0,0,127,254,0,127,254,0,0,0,1,80,0,1,80,0,0,
};

#endif // HAS_GRAPHICAL_TFT
