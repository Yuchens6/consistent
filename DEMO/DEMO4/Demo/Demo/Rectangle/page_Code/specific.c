#include "specific.h"

type_symbology_layer_1 symbology_layer_1_ctx;

void draw_once(GLboolean init)
{
    if(init == 1)
    {
        symbology_layer_1_init(&symbology_layer_1_ctx);
    }

    symbology_layer_1_draw(&symbology_layer_1_ctx);

}