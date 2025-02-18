#include "main.h"


SGPI_Lines sgpi_line_initial(SGPI_Lines input){
    Point point[] = {{0.0,0.0},{0.0,0.0}};
    input.point = point;
    double angle[] = {0.0,0.0};
    input.angle = angle;
    bool clockwise[] = {false,false};
    input.clockwise = clockwise;
    input.pointCount = 2;
    return input;
}/*Line initialize*/

SGPI_Circle sgpi_circle_initial(SGPI_Circle input){
    Point point = {0.0,0.0};
    input.center = point;
    double angle = 0.0;
    input.radius = 0;
    return input;
}/*Circle initialize*/

SGPI_Rectangle sgpi_rectangle_initial(SGPI_Rectangle input){
    Point firstPoint = {0.0,0.0};
    input.firstPoint = firstPoint;
    Point thirdPoint = {0.0,0.0};
    input.thirdPoint = thirdPoint;
    return input;
}/*SGPI_Rectangle initialize*/

SGPI_Arc sgpi_arc_initial(SGPI_Arc input){
    Point point = {0.0,0.0};
    input.center = point;
    Interval angle;
    angle.start = 0.0;
    angle.end = 0.0;
    input.angle = angle;
    input.clockwise = false;
    return input;
}/*SGPI_Arc initialize*/

SGPI_ArcEllipse sgpi_arcEllipse_initial(SGPI_ArcEllipse input){
    Point point = {0.0,0.0};
    input.center = point;
    input.horizontalRadius = 0;
    input.verticalRadius = 0;
    Interval angle;
    angle.start = 0.0;
    angle.end = 0.0;
    input.angle = angle;
    input.clockwise = false;
    return input;
}/*ArcEllipse initialize*/

SGPI_Ellipse sgpi_ellipse_initial(SGPI_Ellipse input){
    Point point = {0.0,0.0};
    input.center = point;
    input.horizontalRadius = 0;
    input.verticalRadius = 0.0;
    return input;
}/*SGPI_Ellipse initialize*/

SGPI_Crown sgpi_crown_initial(SGPI_Crown input){
    Point point = {0.0,0.0};
    input.center = point;
    input.radius = 0.0;
    Interval angle;
    angle.start = 0.0;
    angle.end = 0.0;
    input.angle = angle;
    input.clockwise = false;
    input.thickness = 0.0;
    return input;
}/*Crown initialize*/

SGPI_Shape sgpi_shape_initial(SGPI_Shape input){
    Point point[] = {{0.0,0.0},{0.0,0.0}};
    input.point = point;
    double angle[] = {0.000,0.000};
    input.angle = angle;
    bool clockwise[] = {false,false};
    input.clockwise = clockwise;
    input.pointCount = 2;
    return input;
}/*Shape initialize*/


PropertyLines sgpi_propertyLines_initial(PropertyLines appearance){
    appearance.lineWidth = 0;
    appearance.lineStipple = 0;
    appearance.lineCap = "square";
    appearance.haloing = true;
    appearance.haloColor = -1;
    appearance.outlineColor = -1;
    appearance.outlineOpacity = 255;
    return appearance;
}/*PropertyLines initialize*/

PropertyArc sgpi_propertyArc_initial(PropertyArc appearance){
    appearance.lineWidth = 0;
    appearance.lineStipple = 0;
    appearance.lineCap = "square";
    appearance.haloing = true;
    appearance.haloColor = -1;
    appearance.outlineColor = -1;
    appearance.outlineOpacity = 255;
    appearance.fillColor = -1;
    appearance.fillOpacity = 255;
    appearance.polygonSmooth = true;
    Texture texture;
    texture.horizAlign = "center";
    texture.horizPattern = -1.0;
    texture.vertAlign = "middle";
    texture.vertPattern = -1.0;
    texture.id = -1;
    appearance.texture = texture;
    appearance.modulate = false;
    return appearance;
}/*PropertyArc initialize*/

PropertyPolygon sgpi_propertyPolygon_initial(PropertyPolygon appearance){
    appearance.lineWidth = 0;
    appearance.lineStipple = 0;
    appearance.lineCap = "square";
    appearance.haloing = true;
    appearance.haloColor = -1;
    appearance.outlineColor = -1;
    appearance.outlineOpacity = 255;
    appearance.fillColor = -1;
    appearance.fillOpacity = 255;
    appearance.polygonSmooth = true;
    Texture texture;
    texture.horizAlign = "center";
    texture.horizPattern = -1.0;
    texture.vertAlign = "middle";
    texture.vertPattern = -1.0;
    texture.id = -1;
    appearance.texture = texture;
    appearance.modulate = false;
    appearance.tessellate = false;
    return appearance;
}/*PropertyPolygon initialize*/


Coordinate co4_1_initial(Coordinate co4_1, double width, double height){
    co4_1.from = 4;
    co4_1.to = 1;
    co4_1.width = width;
    co4_1.height = height;
    co4_1.x_offset = 0;
    co4_1.y_offset = 0;
    return co4_1;
}

Coordinate co4_3_initial(Coordinate co4_3, double width, double height){
    co4_3.from = 4;
    co4_3.to = 3;
    co4_3.width = width;
    co4_3.height = height;
    co4_3.x_offset = 0;
    co4_3.y_offset = 0;
    return co4_3;
}
