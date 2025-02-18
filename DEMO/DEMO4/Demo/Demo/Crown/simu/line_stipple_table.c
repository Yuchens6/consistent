#include "line_stipple_table.h"

/* Line stipple table definition */
const Stipple line_stipple_table[5] = 
{
{ {   0,   0,   0,   0,   0,   0}, {   0,   0,   0,   0,   0,   0},   1,   0},  /*     0  solid  pattern : LS0 */
{{   12,   12,    0,    0,    0,    0 },{    1,    0,    0,    0,    0,    0 },   0,   2},  /*     1  dashed  pattern : LS1 */
{{    8,    8,    0,    0,    0,    0 },{    1,    0,    0,    0,    0,    0 },   0,   2},  /*     2  dashed  pattern : LS2 */
{{    1,    6,    0,    0,    0,    0 },{    1,    0,    0,    0,    0,    0 },   0,   2},  /*     3  dashed  pattern : LS3 */
{{    1,    8,    8,    8,    0,    0 },{    1,    0,    1,    0,    0,    0 },   0,   4},  /*     4  dashed  pattern : LS4 */
};