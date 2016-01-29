/**
 * This file is part of Agnostic Dragon.
 *
 * Agnostic Dragon is free software : you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * as published by The Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * Agnostic Dragon is distributed in the hope that it will be
 * useful,
 *
 * But WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Agnostic Dragon.
 *
 *   If not, see <http://www.gnu.org/licenses/>.
 *
**/
#ifndef __AD__CONFIG_H__
#define __AD__CONFIG_H__

#include <Windows.h>
#include <string>

extern std::wstring AD_VER_STR;

struct ad_config_s
{
  struct {
    bool     aspect_correction = true;
    float    aspect_ratio      = (16.0f / 9.0f);
    bool     center_ui         = true;
    bool     fix_minimap       = true;
  } render;

  struct {
    bool     aspect_correct    = false;
    int      always_on_top     = 2;
    bool     temp_on_top       = false; // When the key combo is held
    uint16_t
             hold_on_top_key   = (uint16_t)'N';
    uint16_t
             toggle_on_top_key = (uint16_t)'N';
  } nametags;

  struct {
    std::wstring
            version            = AD_VER_STR;
    std::wstring
            injector           = L"d3d9.dll";
  } system;
};

extern ad_config_s config;

bool AD_LoadConfig (std::wstring name         = L"AgDrag");
void AD_SaveConfig (std::wstring name         = L"AgDrag",
                    bool         close_config = false);

#endif __AD__CONFIG_H__