// Software Name: SGPI - Designer&Author: Li Chao - Update Date: 2024/07/09
#ifndef SGPI_STRUCT_H
#define SGPI_STRUCT_H

#include "GLSC/gl.h"

#define true 1
#define false 0
#define GLfloatValidValue 1e-6
#define BMP24BitFormat 3
#define BMP32BitFormat 4

#define LineCap_Square 0
#define LineCap_Round 1
#define HorizAlign_Center 0
#define HorizAlign_Left 1
#define HorizAlign_Right 2
#define VertAlign_Middle 0
#define VertAlign_Top 1
#define VertAlign_Bottom 2

typedef struct
{
    GLubyte red;
    GLubyte green;
    GLubyte blue;
    GLubyte alpha;
} Color;

typedef struct {
    GLuint* unitSize;
    GLboolean* unitType;
    GLboolean type;
    GLuint count;
} Stipple;

typedef struct {
    GLfloat line;
    GLfloat halo;
    GLfloat color;
} LineWidth;

typedef struct
{
    GLfloat start;
    GLfloat end;
} Interval;

typedef struct
{
    GLfloat x;
    GLfloat y;
} Point;

typedef struct
{
    Point first;
    Point secord;
    Point third;
} Triangle;

typedef struct
{
    Point start;
    Point end;
} Line;

typedef struct
{
    GLfloat angle;
    GLboolean clockwise;
} ArcSegment;

typedef struct
{
    Point center;
    GLfloat radius;
    Interval angle;
    GLboolean clockwise;
} SGPI_Arc;

typedef struct
{
    Point center;
    GLfloat horizontalRadius;
    GLfloat verticalRadius;
    Interval angle;
    GLboolean clockwise;
} SGPI_ArcEllipse;

typedef struct
{
    Point center;
    GLfloat radius;
    GLfloat thickness;
    Interval angle;
    GLboolean clockwise;
} SGPI_Crown;

typedef struct
{
    Point center;
    GLfloat radius;
} SGPI_Circle;

typedef struct
{
    Point center;
    GLfloat horizontalRadius;
    GLfloat verticalRadius;
} SGPI_Ellipse;

typedef struct
{
    Point firstPoint;
    Point thirdPoint;
    GLfloat* angle;
    GLboolean* clockwise;
} SGPI_Rectangle;

typedef struct
{
    GLuint pointCount;
    Point* point;
    GLfloat* angle;
    GLboolean* clockwise;
} SGPI_Lines, SGPI_Shape;

typedef struct
{
    GLenum horizAlign;
    GLint horizPattern;
    GLenum vertAlign;
    GLint vertPattern;
    GLint id;
} Texture;

typedef struct
{
    GLuint charSize;
    GLuint charCount;
    GLuint width;
    GLuint height;
    GLuint charWidth;
    GLuint charHeight;
    GLint id;
} Font;

 typedef struct
{
    Point position;
    GLuint textureId;
} Bitmap;

typedef struct
{
    GLint width;
    GLint height;
    GLubyte* data;
} Pixel;

typedef struct
{
    LineWidth lineWidth;
    Stipple lineStipple;
    GLenum lineCap;
    GLboolean haloing;
    Color haloColor;
    Color outlineColor;
    GLubyte outlineOpacity;
} PropertyLines;

typedef struct
{
    LineWidth lineWidth;
    Stipple lineStipple;
    GLenum lineCap;
    GLboolean haloing;
    Color haloColor;
    Color outlineColor;
    GLubyte outlineOpacity;
    GLboolean filling;
    Color fillColor;
    GLubyte fillOpacity;
    GLboolean polygonSmooth;
    Texture texture;
    GLboolean modulate;
} PropertyArc;

typedef struct
{
    LineWidth lineWidth;
    Stipple lineStipple;
    GLenum lineCap;
    GLboolean haloing;
    Color haloColor;
    Color outlineColor;
    GLubyte outlineOpacity;
    GLboolean filling;
    Color fillColor;
    GLubyte fillOpacity;
    GLboolean polygonSmooth;
    GLboolean textureControl;
    Texture texture;
    GLboolean modulate;
    GLboolean tessellate;
} PropertyPolygon;

#endif
