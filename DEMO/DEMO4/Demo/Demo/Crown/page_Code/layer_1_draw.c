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
   /* Object {464f3cc7-db61-4961-bf45-60608c3c6bc8}, Name:crown, Type: crown*/
    SGPI_Crown input_464f3cc7db614961bf4560608c3c6bc8;
    input_464f3cc7db614961bf4560608c3c6bc8 = sgpi_crown_initial(input_464f3cc7db614961bf4560608c3c6bc8);
    Point point_464f3cc7db614961bf4560608c3c6bc8 = relative_point((Point){-7.00001/width,46/height}, origin);
    input_464f3cc7db614961bf4560608c3c6bc8.center = point_464f3cc7db614961bf4560608c3c6bc8;
    input_464f3cc7db614961bf4560608c3c6bc8.radius = 185.00/width;
    Interval angle_464f3cc7db614961bf4560608c3c6bc8;
    angle_464f3cc7db614961bf4560608c3c6bc8.start = 30;
    angle_464f3cc7db614961bf4560608c3c6bc8.end = 150;
    input_464f3cc7db614961bf4560608c3c6bc8.angle = angle_464f3cc7db614961bf4560608c3c6bc8;
    input_464f3cc7db614961bf4560608c3c6bc8.clockwise = false;
    input_464f3cc7db614961bf4560608c3c6bc8.thickness = 60/width;
    PropertyArc appearance_464f3cc7db614961bf4560608c3c6bc8;
    appearance_464f3cc7db614961bf4560608c3c6bc8 = sgpi_propertyArc_initial(appearance_464f3cc7db614961bf4560608c3c6bc8);
    appearance_464f3cc7db614961bf4560608c3c6bc8.lineWidth = line_width_table[0];
    appearance_464f3cc7db614961bf4560608c3c6bc8.lineStipple = line_stipple_table[0];
    appearance_464f3cc7db614961bf4560608c3c6bc8.lineCap = 1;
    appearance_464f3cc7db614961bf4560608c3c6bc8.haloing = true;
    appearance_464f3cc7db614961bf4560608c3c6bc8.haloColor = (Color){ 0, 0, 0, 255 };
    appearance_464f3cc7db614961bf4560608c3c6bc8.outlineColor = color_table[21];
    appearance_464f3cc7db614961bf4560608c3c6bc8.outlineOpacity = 255.00;
    appearance_464f3cc7db614961bf4560608c3c6bc8.filling = true;
    appearance_464f3cc7db614961bf4560608c3c6bc8.fillColor = color_table[61];
    appearance_464f3cc7db614961bf4560608c3c6bc8.fillOpacity = 255.00;
    appearance_464f3cc7db614961bf4560608c3c6bc8.polygonSmooth = true;
    Texture texture_464f3cc7db614961bf4560608c3c6bc8;
    texture_464f3cc7db614961bf4560608c3c6bc8.horizAlign = 0;
    texture_464f3cc7db614961bf4560608c3c6bc8.horizPattern = 1.0;
    texture_464f3cc7db614961bf4560608c3c6bc8.vertAlign = 0;
    texture_464f3cc7db614961bf4560608c3c6bc8.vertPattern = 1.0;
    texture_464f3cc7db614961bf4560608c3c6bc8.id = -1;
    appearance_464f3cc7db614961bf4560608c3c6bc8.texture = texture_464f3cc7db614961bf4560608c3c6bc8;
    appearance_464f3cc7db614961bf4560608c3c6bc8.modulate = false;
    sgpi_crown(input_464f3cc7db614961bf4560608c3c6bc8, appearance_464f3cc7db614961bf4560608c3c6bc8);
// === GCG generate sgpi code End ===

}