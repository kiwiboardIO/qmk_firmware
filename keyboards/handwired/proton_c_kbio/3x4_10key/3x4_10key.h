#pragma once
#include "quantum.h"

// Any changes to the layout names and/or definitions must also be made to info.json
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array

#define LAYOUT_numpad_3x4( \
    K00, K01, K02, \
    K10, K11, K12, \
    K20, K21, K22, \
         K30       \
) \
{ \
    { K00,   K01,   K02 }, \
    { K10,   K11,   K12 }, \
    { K20,   K21,   K22 }, \
    { KC_NO, K30,   KC_NO }  \
}

/*  matrix layout
   * ,--------------.
   * | 00 | 01 | 02 |
   * |----|----|----|
   * | 10 | 11 | 12 |
   * |----|----|----|
   * | 20 | 21 | 22 |
   * |----|----|----|
   * |      30      |
   * `--------------'
 */