/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

// clang-format off

const ckled2001_led PROGMEM g_ckled2001_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to CKLED2001 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, I_1,    G_1,    H_1},
    // {0, I_2,    G_2,    H_2},
    {0, I_3,    G_3,    H_3},
    {0, I_4,    G_4,    H_4},
    {0, I_5,    G_5,    H_5},
    {0, I_6,    G_6,    H_6},
    // {0, I_7,    G_7,    H_7},
    {0, I_8,    G_8,    H_8},
    {0, I_9,    G_9,    H_9},
    {0, I_10,   G_10,   H_10},
    {0, I_11,   G_11,   H_11},
    {0, I_12,   G_12,   H_12},
    {0, I_13,   G_13,   H_13},
    {0, I_14,   G_14,   H_14},
    {0, I_15,   G_15,   H_15},
    {0, I_16,   G_16,   H_16},
    {0, L_12,   J_12,   K_12},
    {0, L_13,   J_13,   K_13},
    {0, L_14,   J_14,   K_14},

    {0, C_1,    A_1,    B_1},
    {0, C_2,    A_2,    B_2},
    {0, C_3,    A_3,    B_3},
    {0, C_4,    A_4,    B_4},
    {0, C_5,    A_5,    B_5},
    {0, C_6,    A_6,    B_6},
    {0, C_7,    A_7,    B_7},
    {0, C_8,    A_8,    B_8},
    {0, C_9,    A_9,    B_9},
    {0, C_10,   A_10,   B_10},
    {0, C_11,   A_11,   B_11},
    {0, C_12,   A_12,   B_12},
    {0, C_13,   A_13,   B_13},
    {0, C_14,   A_14,   B_14},
    {0, C_16,   A_16,   B_16},
    {0, L_9,    J_9,    K_9},
    {0, L_10,   J_10,   K_10},
    {0, L_11,   J_11,   K_11},

    {0, F_1,    D_1,    E_1},
    {0, F_2,    D_2,    E_2},
    {0, F_3,    D_3,    E_3},
    {0, F_4,    D_4,    E_4},
    {0, F_5,    D_5,    E_5},
    {0, F_6,    D_6,    E_6},
    {0, F_7,    D_7,    E_7},
    {0, F_8,    D_8,    E_8},
    {0, F_9,    D_9,    E_9},
    {0, F_10,   D_10,   E_10},
    {0, F_11,   D_11,   E_11},
    {0, F_12,   D_12,   E_12},
    {0, F_13,   D_13,   E_13},
    {0, F_14,   D_14,   E_14},
    {0, F_15,   D_15,   E_15},
    {0, F_16,   D_16,   E_16},
    {0, L_15,   J_15,   K_15},
    {0, L_16,   J_16,   K_16},

    {1, C_16,   A_16,   B_16},
    {1, C_15,   A_15,   B_15},
    {1, C_14,   A_14,   B_14},
    {1, C_13,   A_13,   B_13},
    {1, C_12,   A_12,   B_12},
    {1, C_11,   A_11,   B_11},
    {1, C_10,   A_10,   B_10},
    {1, C_9,    A_9,    B_9},
    {1, C_8,    A_8,    B_8},
    {1, C_7,    A_7,    B_7},
    {1, C_6,    A_6,    B_6},
    {1, C_5,    A_5,    B_5},
    {1, C_3,    A_3,    B_3},
    {1, C_1,    A_1,    B_1},
    {1, L_3,    J_3,    K_3},
    {1, L_4,    J_4,    K_4},

    {1, I_16,   G_16,   H_16},
    {1, I_14,   G_14,   H_14},
    {1, I_13,   G_13,   H_13},
    {1, I_12,   G_12,   H_12},
    {1, I_11,   G_11,   H_11},
    {1, I_10,   G_10,   H_10},
    {1, I_9,    G_9,    H_9},
    {1, I_8,    G_8,    H_8},
    {1, I_7,    G_7,    H_7},
    {1, I_6,    G_6,    H_6},
    {1, I_5,    G_5,    H_5},
    {1, I_3,    G_3,    H_3},
    {1, I_2,    G_2,    H_2},
    {1, I_1,    G_1,    H_1},
    {1, L_5,    J_5,    K_5},
    {1, L_6,    J_6,    K_6},
    {1, L_7,    J_7,    K_7},

    {1, F_16,   D_16,   E_16},
    {1, F_15,   D_15,   E_15},
    {1, F_14,   D_14,   E_14},
    {1, F_10,   D_10,   E_10},
    {1, F_6,    D_6,    E_6},
    {1, F_5,    D_5,    E_5},
    {1, F_4,    D_4,    E_4},
    {1, F_3,    D_3,    E_3},
    {1, F_2,    D_2,    E_2},
    {1, F_1,    D_1,    E_1},
    {1, L_1,    J_1,    K_1},
    {1, L_2,    J_2,    K_2},
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {  0, __,  1,  2,  3,  4, __,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15 },
        { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, __, 31, 32, 33 },
        { 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 52, 49, 50, 51 },
        { 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 16, 65, 34, 66, 67, 68 },
        { 69, __, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, __, 80, 81, 82, 83, 84 },
        { 86, 87, 88, __, __, 85, 89, __, __, __, 90, 91, 92, 93, 94, 95, 96, 97 }
    },
    {
        // LED Index to Physical Position
        {0,0},           {24,0},  {36,0},  {48,0},  {60,0},  {78,0},  {90,0},  {103,0},  {115,0},  {133,0},  {145,0},  {157,0},  {169,0},            {184,0},  {196,0},  {208,0},  {224,0},
        {0,15}, {12,15}, {24,15}, {36,15}, {48,15}, {60,15}, {72,15}, {85,15}, {97,15},  {109,15}, {121,15}, {133,15}, {145,15}, {163,15},           {188,15}, {200,15}, {212,15}, {224,15},
        {3,26}, {18,26}, {30,26}, {42,26}, {54,26}, {66,26}, {78,26}, {91,26}, {103,26}, {115,26}, {127,26}, {139,26}, {151,26}, {166,26},           {188,26}, {200,26}, {212,26}, {224,32},
        {5,38}, {21,38}, {33,38}, {45,38}, {57,38}, {69,38}, {81,38}, {94,38}, {106,38}, {118,38}, {130,38}, {142,38},           {161,38},           {188,38}, {200,38}, {212,38},
        {8,49},          {27,49}, {39,49}, {51,49}, {63,49}, {75,49}, {88,49}, {100,49}, {112,49}, {124,49}, {136,49},           {152,49}, {172,52}, {188,49}, {200,49}, {212,49}, {224,55},
        {1,61}, {17,61}, {32,61},                            {77,61},                              {121,61}, {133,61}, {145,61}, {160,64}, {172,64}, {184,64}, {200,61}, {212,61},
    },
    {
        // RGB LED Index to Flag
        1,    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1, 1, 1, 1,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    8, 4, 4, 4,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4, 4,
        8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,    4, 4, 4,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1, 1, 4, 4, 4, 4,
        1, 1, 1,          4,          1, 4, 1, 1, 1, 4, 4, 4,
    }
};

#endif

#if defined(ENCODER_ENABLE) && defined(PAL_USE_CALLBACKS)

void encoder0_pad_cb(void *param) {
    (void)param;

    encoder_inerrupt_read(0);
}

void encoder1_pad_cb(void *param) {
    (void)param;

    encoder_inerrupt_read(1);
}

void encoder_interrupt_init(void) {
    pin_t encoders_pad_a[NUM_ENCODERS] = ENCODERS_PAD_A;
    pin_t encoders_pad_b[NUM_ENCODERS] = ENCODERS_PAD_B;
    for (uint8_t i = 0; i < NUM_ENCODERS; i++) {
        palEnableLineEvent(encoders_pad_a[i], PAL_EVENT_MODE_BOTH_EDGES);
        palEnableLineEvent(encoders_pad_b[i], PAL_EVENT_MODE_BOTH_EDGES);
    }
    if (NUM_ENCODERS > 0) {
        palSetLineCallback(encoders_pad_a[0], encoder0_pad_cb, NULL);
        palSetLineCallback(encoders_pad_b[0], encoder0_pad_cb, NULL);
    }
    if (NUM_ENCODERS > 1) {
        palSetLineCallback(encoders_pad_a[1], encoder1_pad_cb, NULL);
        palSetLineCallback(encoders_pad_b[1], encoder1_pad_cb, NULL);
    }
}

void keyboard_post_init_kb(void) {
    encoder_interrupt_init();
    // allow user keymaps to do custom post_init
    keyboard_post_init_user();
}

#endif
