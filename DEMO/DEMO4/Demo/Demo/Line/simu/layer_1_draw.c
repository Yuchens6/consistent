#include "imported_functions.h"

/* module specific includes */
#include "layer_1.h"

void symbology_layer_1_draw(type_symbology_layer_1* pContext)
{
     GLfloat height = 400.000000;
     GLfloat width = 400.000000;
    Point origin = {0,0};
    Point pre_origin = {0,0};
    Point offset_origin = {0,0};
    // === GCG generate sgpi code Start ===
   /* Object _0b9b7e1aee644adaad4159850c37746e, Name:line, Type: line*/
    SGPI_Lines input_0b9b7e1aee644adaad4159850c37746e;
    input_0b9b7e1aee644adaad4159850c37746e = sgpi_line_initial(input_0b9b7e1aee644adaad4159850c37746e);
    Point points_0b9b7e1aee644adaad4159850c37746e[] = {relative_point((Point){-205/width,88/height}, origin),relative_point((Point){-133/width,-136/height}, origin),relative_point((Point){72/width,103/height}, origin),relative_point((Point){178/width,-130/height}, origin)};
    input_0b9b7e1aee644adaad4159850c37746e.point = points_0b9b7e1aee644adaad4159850c37746e;
     GLfloat angle_0b9b7e1aee644adaad4159850c37746e[] = {0,0,0,0};
    input_0b9b7e1aee644adaad4159850c37746e.angle = angle_0b9b7e1aee644adaad4159850c37746e;
    GLboolean clockwise_0b9b7e1aee644adaad4159850c37746e[] = {false,false,false,false};
    input_0b9b7e1aee644adaad4159850c37746e.clockwise = clockwise_0b9b7e1aee644adaad4159850c37746e;
    input_0b9b7e1aee644adaad4159850c37746e.pointCount = 4;
    PropertyLines appearance_0b9b7e1aee644adaad4159850c37746e;
    appearance_0b9b7e1aee644adaad4159850c37746e = sgpi_propertyLines_initial(appearance_0b9b7e1aee644adaad4159850c37746e);
    appearance_0b9b7e1aee644adaad4159850c37746e.lineWidth = line_width_table[0];
    appearance_0b9b7e1aee644adaad4159850c37746e.lineStipple = line_stipple_table[0];
    appearance_0b9b7e1aee644adaad4159850c37746e.lineCap = 1;
    appearance_0b9b7e1aee644adaad4159850c37746e.haloing = true;
    appearance_0b9b7e1aee644adaad4159850c37746e.haloColor = (Color){ 0, 0, 0, 255 };
    appearance_0b9b7e1aee644adaad4159850c37746e.outlineColor = color_table[15];
    appearance_0b9b7e1aee644adaad4159850c37746e.outlineOpacity = 255.00;
    sgpi_lines(input_0b9b7e1aee644adaad4159850c37746e, appearance_0b9b7e1aee644adaad4159850c37746e);
// === GCG generate sgpi code End ===

}