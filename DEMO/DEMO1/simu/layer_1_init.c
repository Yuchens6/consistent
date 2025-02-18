#include "main.h"
#include "imported_functions.h"

/* module specific includes */
#include "layer_1.h"

void symbology_layer_1_init(type_symbology_layer_1* pContext)
{
  symbology_layer_1_S_inside(pContext, 0);
  symbology_layer_1_S_outlinecolor(pContext, 41);
} 
