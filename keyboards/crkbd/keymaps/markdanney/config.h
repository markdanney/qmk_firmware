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

// #define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT

// #define QUICK_TAP_TERM 0
// #define TAPPING_TERM 100
#define TAPPING_TOGGLE 3

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_KEYPRESSES                                       // reacts to keypresses
#    define RGB_DISABLE_WHEN_USB_SUSPENDED                              // turn off effects when suspended
#    define RGB_MATRIX_SLEEP                                            // turn off effects when suspended
#    define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#    define RGB_MATRIX_LED_FLUSH_LIMIT 16                               // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)

#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150                           // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#    define RGB_MATRIX_DEFAULT_HUE 237
#    define RGB_MATRIX_DEFAULT_SAT 254
#    define RGB_MATRIX_DEFAULT_VAL 90

#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define RGB_MATRIX_TYPING_HEATMAP_SLIM

#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP
#endif // RGB_MATRIX_ENABLE

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#undef SPACE_CADET_ENABLE
#define DOG_ENABLE

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define SPLIT_WPM_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LED_STATE_ENABLE

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT
