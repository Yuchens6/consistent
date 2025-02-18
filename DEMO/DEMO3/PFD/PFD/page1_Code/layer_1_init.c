#include "main.h"
#include "imported_functions.h"

/* module specific includes */
#include "layer_1.h"

void symbology_layer_1_init(type_symbology_layer_1* pContext)
{
  symbology_layer_1_S_PN_ALTI(pContext, 0);
  symbology_layer_1_S_PN_AIRSPEED(pContext, 0);
  symbology_layer_1_S_PN_PITCH_ANGLE(pContext, 0.0);
  symbology_layer_1_S_PN_ROLL_ANGLE(pContext, 0.0);
  symbology_layer_1_S_PN_ALTI_1(pContext, 0.0);
  symbology_layer_1_S_PN_AIRSPEED_1(pContext, 0.0);
  symbology_layer_1_S_PN_ALTI_2(pContext, 0);
} 
