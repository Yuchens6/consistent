#ifndef IMPORTED_FUNCTIONS_H_INCLUDED
#define IMPORTED_FUNCTIONS_H_INCLUDED

#include "sgpi-struct.h"

#include "color_table.h"
#include "line_stipple_table.h"
#include "line_width_table.h"

/* Imported functions */
extern void aol_locate(int pPointer, float* pX, float* pY);
extern void aol_pointer(int pPointer, GLboolean* pPressed, GLboolean* pReleased, int* pButton, float* pX, float* pY, int* pModifiers);
double cal_minus(double x, double y);
double cal_negation(double x);
Point cal_origin(Point firstpoint, double width, double height);
Point relative_point(Point point, Point origin);
Point add_point(Point point, Point origin);
Point cal_translation(Point start, Point end, Point reference, Point origin, double startValue, double endValue, GLboolean startLocked, GLboolean endLocked, double funValue);


typedef void (*SGPI_LINES)(
            SGPI_Lines input,
            PropertyLines appearance);
typedef void (*SGPI_FAN)(
            SGPI_Arc input,
            PropertyArc appearance);
typedef void (*SGPI_CIRCLE)(
            SGPI_Circle input,
            PropertyArc appearance);
typedef void (*SGPI_ELLIPSE)(
            SGPI_Ellipse input,
            PropertyArc appearance);
typedef void (*SGPI_ARC_ELLIPSE)(
            SGPI_ArcEllipse input,
            PropertyArc appearance);
typedef void (*SGPI_CROWN)(
            SGPI_Crown input,
            PropertyArc appearance);
typedef void (*SGPI_RECTANGLE)(
            SGPI_Rectangle input,
            PropertyPolygon appearance);
typedef void (*SGPI_SHAPE)(
            SGPI_Shape input,
            PropertyPolygon appearance);

/*typedef void (*SGPI_SHOW_TEXT)(
            Point p,
            int fontSize,
            const char* text,
            int colorIndex);
typedef void (*SGPI_FONT)(
            const int fontSize,
            const int characterSet,
            const char* face,
            uint* fontListID);
typedef void (*SGPI_DRAW_TEXT)(
            Point position,
            const uint fontListID,
            const char* text);
typedef void (*SGPI_SCALE_PIXEL_IMAGE)(
            const GLfloat x,
            const GLfloat y);
typedef void (*SGPI_PIXEL_IMAGE)(
            const Point position,
            Pixel pixel);
typedef void (*SGPI_READ_BMP_FILE)(
            const char* bmpName,
            const int bitFormat,
            Pixel* pixel);
typedef void (*SGPI_DRAW_PIXEL)(
            const Point position,
            Pixel pixel);
typedef int (*CALCULATE_PIXEL_DATA_LENGTH)(int width, int height, int bitFormat);
typedef void (*CONVERT_ARRAY_TYPE)(int width, int height, int length, const GLuint* a, GLubyte* b);*/



typedef void (*SGPI_SCISSOR)(const int x, const int y,
            const GLuint width, const GLuint height);
typedef void (*SGPI_CLIP_PLANE)(const GLboolean maskActivity, const Point clipStartPoint,
            const float clipAngle, const GLboolean clockwise);
typedef void (*SGPI_CLIP_BOX)(const GLboolean maskActivity, const GLboolean clipInside,
			const Point firstPoint, const Point thirdPoint);
typedef void (*SGPI_CLIP_STENCIL)(const GLboolean maskActivity, const SGPI_Shape input);




typedef void (*SGPI_TRANSLATE)(double x, double y,double z);
typedef void (*SGPI_SCALE)(double x, double y,double z);
typedef void (*SGPI_ROTATE)(double angle, double x, double y,double z);


typedef GLboolean (*SGPI_IS_IN_RECTANGLE)(Point p, SGPI_Rectangle rectangle);
typedef GLboolean (*SGPI_IS_IN_CIRCLE)(Point p, SGPI_Circle circle);
typedef GLboolean (*SGPI_IS_IN_SHAPE)(Point p, SGPI_Shape shape);

/*typedef void (*SGPI_INDEX_RGB_COLOR)(sgpi* sg, int index );

typedef void (*SGPI_COORDINATE_BITMAP)(Coordinate co, Bitmap* input);
typedef void (*SGPI_COORDINATE_SHAPE)(Coordinate co, SGPI_Shape* input);
typedef void (*SGPI_COORDINATE_LINES)(Coordinate co, SGPI_Lines* input);
typedef void (*SGPI_COORDINATE_RECTANGLE)(Coordinate co, SGPI_Rectangle* input);
typedef void (*SGPI_COORDINATE_ELLIPSE)(Coordinate co, SGPI_Ellipse* input);
typedef void (*SGPI_COORDINATE_CIRCLE)(Coordinate co, SGPI_Circle* input);
typedef void (*SGPI_COORDINATE_CROWN)(Coordinate co, SGPI_Crown* input);
typedef void (*SGPI_COORDINATE_ARCELLIPSE)(Coordinate co, SGPI_ArcEllipse* input);
typedef void (*SGPI_COORDINATE_HRADIUS)(Coordinate co, double* hradius);
typedef void (*SGPI_COORDINATE_VRADIUS)(Coordinate co, double* vradius);
typedef void (*SGPI_COORDINATE_ARCSEGMENT)(Coordinate co, ArcSegment* input);
typedef void (*SGPI_COORDINATE_ARC)(Coordinate co, SGPI_Arc* input);
typedef void (*SGPI_COORDINATE_CLOCKWISE)(Coordinate co, GLboolean* clockwise);
typedef void (*SGPI_COORDINATE_ANGLE)(Coordinate co, double* angle);
typedef void (*SGPI_COORDINATE_RADIUS)(Coordinate co, double* radius);
typedef void (*SGPI_COORDINATE_LINE)(Coordinate co, Line* input);
typedef void (*SGPI_COORDINATE_POINT)(Coordinate co, Point* p);
typedef void (*SGPI_COORDINATE_VALUE)(Coordinate co, double* width, double*height);*/


/*sgpi-struct.h*/
SGPI_LINES sgpi_lines;
SGPI_FAN sgpi_fan;
SGPI_CIRCLE sgpi_circle;
SGPI_ELLIPSE sgpi_ellipse;
SGPI_ARC_ELLIPSE sgpi_arc_ellipse ;
SGPI_CROWN sgpi_crown;
SGPI_RECTANGLE sgpi_rectangle;
SGPI_SHAPE sgpi_shape;

SGPI_SCISSOR sgpi_scissor;
SGPI_CLIP_PLANE sgpi_clip_plane;
SGPI_CLIP_BOX sgpi_clip_box;
SGPI_CLIP_STENCIL sgpi_clip_stencil;

SGPI_TRANSLATE sgpi_translate;
SGPI_SCALE sgpi_scale;
SGPI_ROTATE sgpi_rotate;

SGPI_IS_IN_RECTANGLE sgpi_is_in_rectangle;
SGPI_IS_IN_CIRCLE sgpi_is_in_circle;
SGPI_IS_IN_SHAPE sgpi_is_in_shape;


/*initial.c*/
SGPI_Lines sgpi_line_initial(SGPI_Lines input);
SGPI_Circle sgpi_circle_initial(SGPI_Circle input);
SGPI_Rectangle sgpi_rectangle_initial(SGPI_Rectangle input);
SGPI_Arc sgpi_arc_initial(SGPI_Arc input);
SGPI_ArcEllipse sgpi_arcEllipse_initial(SGPI_ArcEllipse input);
SGPI_Ellipse sgpi_ellipse_initial(SGPI_Ellipse input);
SGPI_Crown sgpi_crown_initial(SGPI_Crown input);
SGPI_Shape sgpi_shape_initial(SGPI_Shape input);
PropertyLines sgpi_propertyLines_initial(PropertyLines appearance);
PropertyArc sgpi_propertyArc_initial(PropertyArc appearance);
PropertyPolygon sgpi_propertyPolygon_initial(PropertyPolygon appearance);




#endif // IMPORTED_FUNCTIONS_H_INCLUDED
