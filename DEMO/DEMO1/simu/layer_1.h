#ifndef LAYER_1_H_INCLUDED
#define LAYER_1_H_INCLUDED

#include "sgpi-struct.h"
/* Accessors */
#ifndef symbology_layer_1_G_inside
#define symbology_layer_1_G_inside(_C_) ((_C_)->inside) 
#define symbology_layer_1_S_inside(_C_,_V_) (_C_)->inside = (_V_)
#endif /* symbology_layer_1_G_inside */
#ifndef symbology_layer_1_G_outlinecolor
#define symbology_layer_1_G_outlinecolor(_C_) ((_C_)->outlinecolor) 
#define symbology_layer_1_S_outlinecolor(_C_,_V_) (_C_)->outlinecolor = (_V_)
#endif /* symbology_layer_1_G_outlinecolor */

/* Context for object symbology_layer_1 */
typedef struct type_symbology_layer_1
{
  /* declaration of variables */
  /* ----------------------------inputs--------------------------- */
  int inside;
  /* ----------------------------inputs--------------------------- */
  int outlinecolor;
} type_symbology_layer_1;

/* Associated functions */
bool RectangleActiveAreaGetStatus(float x, float y, float first_x, float first_y, float third_x, float third_y);



#endif // LAYER_1_H_INCLUDED
