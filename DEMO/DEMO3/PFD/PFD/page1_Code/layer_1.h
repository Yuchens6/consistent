#ifndef LAYER_1_H_INCLUDED
#define LAYER_1_H_INCLUDED

#include "sgpi-struct.h"
/* Accessors */
#ifndef symbology_layer_1_G_PN_ALTI
#define symbology_layer_1_G_PN_ALTI(_C_) ((_C_)->PN_ALTI) 
#define symbology_layer_1_S_PN_ALTI(_C_,_V_) (_C_)->PN_ALTI = (_V_)
#endif /* symbology_layer_1_G_PN_ALTI */
#ifndef symbology_layer_1_G_PN_AIRSPEED
#define symbology_layer_1_G_PN_AIRSPEED(_C_) ((_C_)->PN_AIRSPEED) 
#define symbology_layer_1_S_PN_AIRSPEED(_C_,_V_) (_C_)->PN_AIRSPEED = (_V_)
#endif /* symbology_layer_1_G_PN_AIRSPEED */
#ifndef symbology_layer_1_G_PN_PITCH_ANGLE
#define symbology_layer_1_G_PN_PITCH_ANGLE(_C_) ((_C_)->PN_PITCH_ANGLE) 
#define symbology_layer_1_S_PN_PITCH_ANGLE(_C_,_V_) (_C_)->PN_PITCH_ANGLE = (_V_)
#endif /* symbology_layer_1_G_PN_PITCH_ANGLE */
#ifndef symbology_layer_1_G_PN_ROLL_ANGLE
#define symbology_layer_1_G_PN_ROLL_ANGLE(_C_) ((_C_)->PN_ROLL_ANGLE) 
#define symbology_layer_1_S_PN_ROLL_ANGLE(_C_,_V_) (_C_)->PN_ROLL_ANGLE = (_V_)
#endif /* symbology_layer_1_G_PN_ROLL_ANGLE */
#ifndef symbology_layer_1_G_PN_ALTI_1
#define symbology_layer_1_G_PN_ALTI_1(_C_) ((_C_)->PN_ALTI_1) 
#define symbology_layer_1_S_PN_ALTI_1(_C_,_V_) (_C_)->PN_ALTI_1 = (_V_)
#endif /* symbology_layer_1_G_PN_ALTI_1 */
#ifndef symbology_layer_1_G_PN_AIRSPEED_1
#define symbology_layer_1_G_PN_AIRSPEED_1(_C_) ((_C_)->PN_AIRSPEED_1) 
#define symbology_layer_1_S_PN_AIRSPEED_1(_C_,_V_) (_C_)->PN_AIRSPEED_1 = (_V_)
#endif /* symbology_layer_1_G_PN_AIRSPEED_1 */
#ifndef symbology_layer_1_G_PN_ALTI_2
#define symbology_layer_1_G_PN_ALTI_2(_C_) ((_C_)->PN_ALTI_2) 
#define symbology_layer_1_S_PN_ALTI_2(_C_,_V_) (_C_)->PN_ALTI_2 = (_V_)
#endif /* symbology_layer_1_G_PN_ALTI_2 */

/* Context for object symbology_layer_1 */
typedef struct type_symbology_layer_1
{
  /* declaration of variables */
  /* ----------------------------inputs--------------------------- */
  int PN_ALTI;
  int PN_AIRSPEED;
  double PN_PITCH_ANGLE;
  double PN_ROLL_ANGLE;
  double PN_ALTI_1;
  double PN_AIRSPEED_1;
  int PN_ALTI_2;
} type_symbology_layer_1;

/* Associated functions */
bool RectangleActiveAreaGetStatus(float x, float y, float first_x, float first_y, float third_x, float third_y);



#endif // LAYER_1_H_INCLUDED
