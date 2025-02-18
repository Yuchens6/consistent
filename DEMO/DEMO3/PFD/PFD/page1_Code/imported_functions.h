#ifndef IMPORTED_FUNCTIONS_H_INCLUDED
#define IMPORTED_FUNCTIONS_H_INCLUDED

#include "sgpi-struct.h"


/* Imported functions */
extern void aol_locate(int pPointer, float* pX, float* pY);
extern void aol_pointer(int pPointer, bool* pPressed, bool* pReleased, int* pButton, float* pX, float* pY, int* pModifiers);
double cal_minus(double x, double y);
double cal_negation(double x);
Point cal_origin(Point firstpoint, double width, double height);
Point relative_point(Point point, Point origin);
Point add_point(Point point, Point origin);



#endif // IMPORTED_FUNCTIONS_H_INCLUDED
