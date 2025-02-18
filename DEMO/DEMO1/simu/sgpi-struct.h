/*
'Software Name: sgpi
'Version: V0.3.5
'Designer: Li Chao
'Author: Li Chao
'Creation Date: 2023/05/05
'Update Date: 2023/09/07
*/

#ifndef SGPI_STRUCT_H
#define SGPI_STRUCT_H

#include <gl/gl.h> // 20230904 for supporting OpenGL
#include <ctype.h>
// For _Bool on coding
#include<stdbool.h>
#define bool _Bool
#define true 1
#define false 0
#define doubleValidValue 1e-6

#define BMP24BitFormat 3
#define BMP32BitFormat 4

typedef unsigned int uint;

// 1 - NDC - Normalized Device Coordinate for OpenGL standard coordinate system
// 2 - OAQ - OpenGL Alpha Quadrant coordinate system
// 3 - SUC - Screen Up Coordinate system
// 4 - SDC - Screen Down Coordinate system
enum CoordinateSystem {SGPI_NDC = 1, SGPI_OAQ, SGPI_SUC, SGPI_SDC};

typedef struct
{
    uint from;
    uint to;
    double width;
    double height;
    double x_offset;
    double y_offset;
} Coordinate;

typedef int sgpi; // TODO Migrate code on July 12, 2023
typedef int sgpi_surface; // TODO Migrate code on July 12, 2023

typedef struct
{
    double start;
    double end;
} Interval;

typedef struct
{
    double x;
    double y;
} Point;

typedef struct
{
    Point startPoint;
    Point endPoint;
} Line;

typedef struct
{
    Point center;
    double radius;
    Interval angle;
    bool clockwise;
} SGPI_Arc;

typedef struct
{
    double angle;
    bool clockwise;
} ArcSegment;

typedef struct
{
    Point center;
    double horizontalRadius;
    double verticalRadius;
    Interval angle;
    bool clockwise;
} SGPI_ArcEllipse;

typedef struct
{
    Point center;
    double radius;
    double thickness;
    Interval angle;
    bool clockwise;
} SGPI_Crown;

typedef struct
{
    Point center;
    double radius;
} SGPI_Circle;

typedef struct
{
    Point center;
    double horizontalRadius;
    double verticalRadius;
} SGPI_Ellipse;

typedef struct
{
    Point firstPoint;
    Point thirdPoint;
    double* angle; //array number: 4; initialize item's default value: 0
    bool* clockwise; //array number: 4; initialize item's default value: 0
} SGPI_Rectangle;

typedef struct
{
    uint pointCount;
    Point* point; //array number: pointCount
    double* angle; //array number: pointCount; initialize item's default value: 0
    bool* clockwise; //array number: pointCount; initialize item's default value: 0
} SGPI_Lines, SGPI_Shape;

typedef struct
{
    char* horizAlign; // value range:  "left"; "right"; "center", default value: "center"
    double horizPattern; // -1("*"); 1; 2; 3; 4; 5; 10; 20;
    char* vertAlign;  // value range:  "top"; "bottom"; "middle", default value: "middle"
    double vertPattern; // value range: -1("*"); 1; 2; 3; 4; 5; 10; 20;
    int id;
} Texture;

typedef struct
{
    uint lineWidth;
    uint lineStipple;
    char* lineCap; // value range: "round"; "square"; default value: "square"
    bool haloing;
    int haloColor;
    int outlineColor;
    uint outlineOpacity;
} PropertyLines; //legacy name: DrawProperties1;  // for sgpi_lines_2

typedef struct
{
    uint lineWidth;
    uint lineStipple;
    char* lineCap; // value range: "round"; "square"; default value: "square"
    bool haloing;
    int haloColor;
    int outlineColor;
    uint outlineOpacity;
    int fillColor;
    uint fillOpacity;
    bool polygonSmooth;
    Texture texture;
    bool modulate;
} PropertyArc; //legacy name: DrawProperties2;
// for sgpi_fan_2; sgpi_arc_ellipse_2; sgpi_circle_2; sgpi_ellipse_2; sgpi_crown_2

typedef struct
{
    uint lineWidth;
    uint lineStipple;
    char* lineCap; // value range: "round"; "square"; default value: "square"
    bool haloing;
    int haloColor;
    int outlineColor;
    uint outlineOpacity;
    int fillColor;
    uint fillOpacity;
    bool polygonSmooth;
    bool textureControl; // diff with DrawProperties2
    Texture texture;
    bool modulate;
    bool tessellate; // diff with DrawProperties2
} PropertyPolygon; //legacy name: DrawProperties3; // for sgpi_rectangle_2; sgpi_shape_2

typedef struct
{
    Point position;
    uint textureId; // Starting from 0
} Bitmap;

typedef struct
{
    GLint width;
    GLint height;
    GLint dataLength;
    GLubyte* data;
} Pixel;

typedef struct
{
    GLint width;
    GLint height;
    GLint dataLength;
    GLenum format;
    GLenum type;
    GLvoid * data;
} Image;
#endif
