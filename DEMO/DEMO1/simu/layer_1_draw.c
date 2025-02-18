#include "main.h"
#include "imported_functions.h"

/* module specific includes */
#include "layer_1.h"

void symbology_layer_1_draw(type_symbology_layer_1* pContext)
{
    double height = 400.000000;
    double width = 400.000000;
    Point origin = {0,0};
    Point pre_origin = {0,0};
    Point offset_origin = {0,0};
    sgpi_translate(NULL, -1, 1, 0);
    sgpi_scale(NULL, 1, -1, 1);
    // === GCG generate sgpi code Start ===
   /* Object _35a842d1a4e64e02b237182109d5f3f6, Name:rectangle, Type: rectangle*/
    SGPI_Rectangle input_35a842d1a4e64e02b237182109d5f3f6;
    input_35a842d1a4e64e02b237182109d5f3f6 = sgpi_rectangle_initial(input_35a842d1a4e64e02b237182109d5f3f6);
    Point firstPoint_35a842d1a4e64e02b237182109d5f3f6 = relative_point((Point){90/width,150/height}, origin);
    input_35a842d1a4e64e02b237182109d5f3f6.firstPoint = firstPoint_35a842d1a4e64e02b237182109d5f3f6;
    Point thirdPoint_35a842d1a4e64e02b237182109d5f3f6 = relative_point((Point){310/width,260/height}, origin);
    input_35a842d1a4e64e02b237182109d5f3f6.thirdPoint = thirdPoint_35a842d1a4e64e02b237182109d5f3f6;
    double angle_35a842d1a4e64e02b237182109d5f3f6[] = {0.0,0.0,0.0,0.0};
    input_35a842d1a4e64e02b237182109d5f3f6.angle = angle_35a842d1a4e64e02b237182109d5f3f6;
    bool clockwise_35a842d1a4e64e02b237182109d5f3f6[] = {false,false,false,false};
    input_35a842d1a4e64e02b237182109d5f3f6.clockwise = clockwise_35a842d1a4e64e02b237182109d5f3f6;
    PropertyPolygon appearance_35a842d1a4e64e02b237182109d5f3f6;
    appearance_35a842d1a4e64e02b237182109d5f3f6 = sgpi_propertyPolygon_initial(appearance_35a842d1a4e64e02b237182109d5f3f6);
    appearance_35a842d1a4e64e02b237182109d5f3f6.lineStipple = 0;
    appearance_35a842d1a4e64e02b237182109d5f3f6.lineCap = "round";
    appearance_35a842d1a4e64e02b237182109d5f3f6.haloing = true;
    appearance_35a842d1a4e64e02b237182109d5f3f6.haloColor = -1;
    appearance_35a842d1a4e64e02b237182109d5f3f6.outlineColor = symbology_layer_1_G_outlinecolor(pContext);
    appearance_35a842d1a4e64e02b237182109d5f3f6.outlineOpacity = 255;
    appearance_35a842d1a4e64e02b237182109d5f3f6.fillColor = symbology_layer_1_G_inside(pContext) ?31:11;
    appearance_35a842d1a4e64e02b237182109d5f3f6.fillOpacity = 255;
    appearance_35a842d1a4e64e02b237182109d5f3f6.polygonSmooth = true;
    Texture texture_35a842d1a4e64e02b237182109d5f3f6;
    texture_35a842d1a4e64e02b237182109d5f3f6.horizAlign = "center";
    texture_35a842d1a4e64e02b237182109d5f3f6.horizPattern = 1.0;
    texture_35a842d1a4e64e02b237182109d5f3f6.vertAlign = "middle";
    texture_35a842d1a4e64e02b237182109d5f3f6.vertPattern = 1.0;
    texture_35a842d1a4e64e02b237182109d5f3f6.id = -1;
    appearance_35a842d1a4e64e02b237182109d5f3f6.texture = texture_35a842d1a4e64e02b237182109d5f3f6;
    appearance_35a842d1a4e64e02b237182109d5f3f6.modulate = false;
    appearance_35a842d1a4e64e02b237182109d5f3f6.tessellate = false;
    appearance_35a842d1a4e64e02b237182109d5f3f6.lineWidth = 0;
    sgpi_rectangle(NULL, input_35a842d1a4e64e02b237182109d5f3f6, appearance_35a842d1a4e64e02b237182109d5f3f6);
   /* Object _e015244b1b30447f9af499088e5b6804, Name:rectanglearea, Type: rectangleArea*/
    float __e015244b1b30447f9af499088e5b6804X = 0.0;
    float __e015244b1b30447f9af499088e5b6804Y = 0.0;
    aol_locate(-1L, (&__e015244b1b30447f9af499088e5b6804X), (&__e015244b1b30447f9af499088e5b6804Y));
    Point point_e015244b1b30447f9af499088e5b6804 = {__e015244b1b30447f9af499088e5b6804X, __e015244b1b30447f9af499088e5b6804Y};
    SGPI_Rectangle input_e015244b1b30447f9af499088e5b6804;
    input_e015244b1b30447f9af499088e5b6804 = sgpi_rectangle_initial(input_e015244b1b30447f9af499088e5b6804);
    Point firstPoint_e015244b1b30447f9af499088e5b6804 = relative_point((Point){99/width,152/height}, origin);
    input_e015244b1b30447f9af499088e5b6804.firstPoint = firstPoint_e015244b1b30447f9af499088e5b6804;
    Point thirdPoint_e015244b1b30447f9af499088e5b6804 = relative_point((Point){299/width,252/height}, origin);
    input_e015244b1b30447f9af499088e5b6804.thirdPoint = thirdPoint_e015244b1b30447f9af499088e5b6804;
    double angle_e015244b1b30447f9af499088e5b6804[] = {0.0,0.0,0.0,0.0};
    input_e015244b1b30447f9af499088e5b6804.angle = angle_e015244b1b30447f9af499088e5b6804;
    bool clockwise_e015244b1b30447f9af499088e5b6804[] = {false,false,false,false};
    input_e015244b1b30447f9af499088e5b6804.clockwise = clockwise_e015244b1b30447f9af499088e5b6804;
    symbology_layer_1_G_inside(pContext) = sgpi_is_in_rectangle(point_e015244b1b30447f9af499088e5b6804, input_e015244b1b30447f9af499088e5b6804);

// === GCG generate sgpi code End ===

    sgpi_scale(NULL, 1, -1, 1);    sgpi_translate(NULL, 1, -1, 0);


}