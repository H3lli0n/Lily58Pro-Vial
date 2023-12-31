/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* VIAL UID for Lily58*/
#define VIAL_KEYBOARD_UID {0x7E, 0xFD, 0xFC, 0x5B, 0x7D, 0x39, 0x48, 0x06}

/* VIAL secure unlock keystroke - currently both big keys (typ. SPACE/ENTER) */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {4, 4}

/* Space reduction */
#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#define VIAL_TAP_DANCE_ENTRIES 20
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* Select hand configuration */
#define EE_HANDS 

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 20000

/* Luna Pet by helltm */
/* Glcdfont for layers state */
#ifdef OLED_ENABLE
#    undef OLED_FONT_H
#    define OLED_FONT_H "keyboards/lily58/rev1/keymaps/hellion/glcdfont.c"
#    define SPLIT_OLED_ENABLE
#    define OLED_TIMEOUT 300000
#    define OLED_UPDATE_INTERVAL 10
#    define ANIM_SIZE 96
#    define MIN_WALK_SPEED      10
#    define MIN_RUN_SPEED       40
#    define ANIM_FRAME_DURATION 200
#endif

#ifdef WPM_ENABLE
#    define SPLIT_WPM_ENABLE
#endif
