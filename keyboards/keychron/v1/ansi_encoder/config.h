/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define SNLED27351_CURRENT_TUNE {0xA6, 0xA6, 0x50, 0xA6, 0xA6, 0x50, 0xA6, 0xA6, 0x50, 0xA6, 0xA6, 0x50}

/* Encoder Configuration */
#define ENCODER_DEFAULT_POS 0x3

/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 45

#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM 200

#define QUICK_TAP_TERM 100
// #define PERMISSIVE_HOLD
//
#define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_RIGHT_CTRL

// Neutralize left alt, left GUI, right GUI and left Control+Shift
#define MODS_TO_NEUTRALIZE {MOD_BIT(KC_LEFT_ALT), MOD_BIT(KC_LEFT_GUI), MOD_BIT(KC_RIGHT_GUI), MOD_BIT(KC_LEFT_CTRL) | MOD_BIT(KC_LEFT_SHIFT)}
