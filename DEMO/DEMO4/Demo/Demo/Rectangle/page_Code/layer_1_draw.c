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
   /* Object _8bf7e3c30e1041b2b25f6997de5c77c3, Name:rectangle, Type: rectangle*/
    SGPI_Rectangle input_8bf7e3c30e1041b2b25f6997de5c77c3;
    input_8bf7e3c30e1041b2b25f6997de5c77c3 = sgpi_rectangle_initial(input_8bf7e3c30e1041b2b25f6997de5c77c3);
    Point firstPoint_8bf7e3c30e1041b2b25f6997de5c77c3 = relative_point((Point){-287/width,114/height}, origin);
    input_8bf7e3c30e1041b2b25f6997de5c77c3.firstPoint = firstPoint_8bf7e3c30e1041b2b25f6997de5c77c3;
    Point thirdPoint_8bf7e3c30e1041b2b25f6997de5c77c3 = relative_point((Point){-87/width,214/height}, origin);
    input_8bf7e3c30e1041b2b25f6997de5c77c3.thirdPoint = thirdPoint_8bf7e3c30e1041b2b25f6997de5c77c3;
     GLfloat angle_8bf7e3c30e1041b2b25f6997de5c77c3[] = {0.0,0.0,0.0,0.0};
    input_8bf7e3c30e1041b2b25f6997de5c77c3.angle = angle_8bf7e3c30e1041b2b25f6997de5c77c3;
    GLboolean clockwise_8bf7e3c30e1041b2b25f6997de5c77c3[] = {false,false,false,false};
    input_8bf7e3c30e1041b2b25f6997de5c77c3.clockwise = clockwise_8bf7e3c30e1041b2b25f6997de5c77c3;
    PropertyPolygon appearance_8bf7e3c30e1041b2b25f6997de5c77c3;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3 = sgpi_propertyPolygon_initial(appearance_8bf7e3c30e1041b2b25f6997de5c77c3);
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.lineStipple = line_stipple_table[0];
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.lineCap = 1;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.haloing = true;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.haloColor = (Color){ 0, 0, 0, 255 };
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.outlineColor = (Color){ 0, 0, 0, 255 };
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.outlineOpacity = 255.00;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.filling = true;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.fillColor = color_table[21];
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.fillOpacity = 255.00;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.polygonSmooth = true;
    Texture texture_8bf7e3c30e1041b2b25f6997de5c77c3;
    texture_8bf7e3c30e1041b2b25f6997de5c77c3.horizAlign = 0;
    texture_8bf7e3c30e1041b2b25f6997de5c77c3.horizPattern = 1.0;
    texture_8bf7e3c30e1041b2b25f6997de5c77c3.vertAlign = 0;
    texture_8bf7e3c30e1041b2b25f6997de5c77c3.vertPattern = 1.0;
    texture_8bf7e3c30e1041b2b25f6997de5c77c3.id = -1;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.texture = texture_8bf7e3c30e1041b2b25f6997de5c77c3;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.modulate = false;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.tessellate = false;
    appearance_8bf7e3c30e1041b2b25f6997de5c77c3.lineWidth = line_width_table[0];
    sgpi_rectangle(input_8bf7e3c30e1041b2b25f6997de5c77c3, appearance_8bf7e3c30e1041b2b25f6997de5c77c3);
   /* Object _bf9f664b667d4fc8a251a22325d4a7f9, Name:rectangle, Type: rectangle*/
    SGPI_Rectangle input_bf9f664b667d4fc8a251a22325d4a7f9;
    input_bf9f664b667d4fc8a251a22325d4a7f9 = sgpi_rectangle_initial(input_bf9f664b667d4fc8a251a22325d4a7f9);
    Point firstPoint_bf9f664b667d4fc8a251a22325d4a7f9 = relative_point((Point){65/width,-173/height}, origin);
    input_bf9f664b667d4fc8a251a22325d4a7f9.firstPoint = firstPoint_bf9f664b667d4fc8a251a22325d4a7f9;
    Point thirdPoint_bf9f664b667d4fc8a251a22325d4a7f9 = relative_point((Point){265/width,-73/height}, origin);
    input_bf9f664b667d4fc8a251a22325d4a7f9.thirdPoint = thirdPoint_bf9f664b667d4fc8a251a22325d4a7f9;
     GLfloat angle_bf9f664b667d4fc8a251a22325d4a7f9[] = {0.0,0.0,0.0,0.0};
    input_bf9f664b667d4fc8a251a22325d4a7f9.angle = angle_bf9f664b667d4fc8a251a22325d4a7f9;
    GLboolean clockwise_bf9f664b667d4fc8a251a22325d4a7f9[] = {false,false,false,false};
    input_bf9f664b667d4fc8a251a22325d4a7f9.clockwise = clockwise_bf9f664b667d4fc8a251a22325d4a7f9;
    PropertyPolygon appearance_bf9f664b667d4fc8a251a22325d4a7f9;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9 = sgpi_propertyPolygon_initial(appearance_bf9f664b667d4fc8a251a22325d4a7f9);
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.lineStipple = line_stipple_table[0];
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.lineCap = 1;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.haloing = true;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.haloColor = (Color){ 0, 0, 0, 255 };
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.outlineColor = color_table[45];
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.outlineOpacity = 255.00;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.filling = false;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.fillOpacity = 255.00;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.polygonSmooth = true;
    Texture texture_bf9f664b667d4fc8a251a22325d4a7f9;
    texture_bf9f664b667d4fc8a251a22325d4a7f9.horizAlign = 0;
    texture_bf9f664b667d4fc8a251a22325d4a7f9.horizPattern = 1.0;
    texture_bf9f664b667d4fc8a251a22325d4a7f9.vertAlign = 0;
    texture_bf9f664b667d4fc8a251a22325d4a7f9.vertPattern = 1.0;
    texture_bf9f664b667d4fc8a251a22325d4a7f9.id = -1;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.texture = texture_bf9f664b667d4fc8a251a22325d4a7f9;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.modulate = false;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.tessellate = false;
    appearance_bf9f664b667d4fc8a251a22325d4a7f9.lineWidth = line_width_table[0];
    sgpi_rectangle(input_bf9f664b667d4fc8a251a22325d4a7f9, appearance_bf9f664b667d4fc8a251a22325d4a7f9);
// === GCG generate sgpi code End ===

}