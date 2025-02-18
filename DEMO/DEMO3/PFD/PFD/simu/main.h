#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <windows.h>
#include <Windowsx.h>
#include <gl/gl.h>
#include "sgpi-struct.h"
#include "specific.h"
#include "target_configuration.h"

typedef void (*SGPI_LINES)(sgpi* sg,
            SGPI_Lines input,
            PropertyLines appearance);
typedef void (*SGPI_FAN)(sgpi* sg,
            SGPI_Arc input,
            PropertyArc appearance);
typedef void (*SGPI_CIRCLE)(sgpi* sg,
            SGPI_Circle input,
            PropertyArc appearance);
typedef void (*SGPI_ELLIPSE)(sgpi* sg,
            SGPI_Ellipse input,
            PropertyArc appearance);
typedef void (*SGPI_ARC_ELLIPSE)(sgpi* sg,
            SGPI_ArcEllipse input,
            PropertyArc appearance);
typedef void (*SGPI_CROWN)(sgpi* sg,
            SGPI_Crown input,
            PropertyArc appearance);
typedef void (*SGPI_RECTANGLE)(sgpi* sg,
            SGPI_Rectangle input,
            PropertyPolygon appearance);
typedef void (*SGPI_SHAPE)(sgpi* sg,
            SGPI_Shape input,
            PropertyPolygon appearance);

typedef void (*SGPI_SHOW_TEXT)(sgpi* sg,
            Point p,
            int fontSize,
            const char* text,
            int colorIndex);
typedef void (*SGPI_FONT)(sgpi* sg,
            const int fontSize,
            const int characterSet,
            const char* face,
            uint* fontListID);
typedef void (*SGPI_TEXT)(sgpi* sg,
            Point position,
            const uint fontListID,
            const char* text);
typedef void (*SGPI_SCALE_PIXEL_IMAGE)(sgpi* sg,
            const GLfloat x,
            const GLfloat y);
typedef void (*SGPI_PIXEL_IMAGE)(sgpi* sg,
            const Point position,
            Pixel pixel);
typedef void (*SGPI_READ_BMP_FILE)(sgpi* sg,
            const char* bmpName,
            const int bitFormat,
            Pixel* pixel);
typedef void (*SGPI_DRAW_PIXEL)(sgpi* sg,
            const Point position,
            Pixel pixel);
typedef int (*CALCULATE_PIXEL_DATA_LENGTH)(int width, int height, int bitFormat);
typedef void (*CONVERT_ARRAY_TYPE)(int width, int height, int length, const GLuint* a, GLubyte* b);



typedef void (*SGPI_SCISSOR)(sgpi* sg, const int x, const int y,
            const uint width, const uint height);


typedef void (*SGPI_TRANSLATE)(sgpi* sg,
            double x, double y,double z);
typedef void (*SGPI_SCALE)(sgpi* sg,
            double x, double y,double z);
typedef void (*SGPI_ROTATE)(sgpi* sg,
            double angle, double x, double y,double z);


typedef bool (*SGPI_IS_IN_RECTANGLE)(Point p, SGPI_Rectangle rectangle);
typedef bool (*SGPI_IS_IN_CIRCLE)(Point p, SGPI_Circle circle);
typedef bool (*SGPI_IS_IN_SHAPE)(Point p, SGPI_Shape shape);

typedef void (*SGPI_INDEX_RGB_COLOR)(sgpi* sg, int index );

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
typedef void (*SGPI_COORDINATE_CLOCKWISE)(Coordinate co, bool* clockwise);
typedef void (*SGPI_COORDINATE_ANGLE)(Coordinate co, double* angle);
typedef void (*SGPI_COORDINATE_RADIUS)(Coordinate co, double* radius);
typedef void (*SGPI_COORDINATE_LINE)(Coordinate co, Line* input);
typedef void (*SGPI_COORDINATE_POINT)(Coordinate co, Point* p);
typedef void (*SGPI_COORDINATE_VALUE)(Coordinate co, double* width, double*height);


/*sgpi-struct.h*/
SGPI_LINES sgpi_lines;
SGPI_FAN sgpi_fan;
SGPI_CIRCLE sgpi_circle;
SGPI_ELLIPSE sgpi_ellipse;
SGPI_ARC_ELLIPSE sgpi_arc_ellipse ;
SGPI_CROWN sgpi_crown;
SGPI_RECTANGLE sgpi_rectangle;
SGPI_SHAPE sgpi_shape;
SGPI_SHOW_TEXT sgpi_show_text;
SGPI_FONT sgpi_font;
SGPI_TEXT sgpi_text;
SGPI_SCALE_PIXEL_IMAGE sgpi_scale_pixel_image;
SGPI_PIXEL_IMAGE sgpi_pixel_image;
SGPI_READ_BMP_FILE sgpi_read_bmp_file;
SGPI_DRAW_PIXEL sgpi_draw_pixel;
CALCULATE_PIXEL_DATA_LENGTH calculate_pixel_data_length;
CONVERT_ARRAY_TYPE convert_array_type;

SGPI_SCISSOR sgpi_scissor;

SGPI_TRANSLATE sgpi_translate;
SGPI_SCALE sgpi_scale;
SGPI_ROTATE sgpi_rotate;

SGPI_IS_IN_RECTANGLE sgpi_is_in_rectangle;
SGPI_IS_IN_CIRCLE sgpi_is_in_circle;
SGPI_IS_IN_SHAPE sgpi_is_in_shape;

SGPI_INDEX_RGB_COLOR sgpi_index_rgb_color;

SGPI_COORDINATE_BITMAP sgpi_coordinate_bitmap;
SGPI_COORDINATE_SHAPE sgpi_coordinate_shape;
SGPI_COORDINATE_LINES sgpi_coordinate_lines;
SGPI_COORDINATE_RECTANGLE sgpi_coordinate_rectangle;
SGPI_COORDINATE_ELLIPSE sgpi_coordinate_ellipse;
SGPI_COORDINATE_CIRCLE sgpi_coordinate_circle;
SGPI_COORDINATE_CROWN sgpi_coordinate_crown;
SGPI_COORDINATE_ARCELLIPSE sgpi_coordinate_arcellipse;
SGPI_COORDINATE_HRADIUS sgpi_coordinate_hradius;
SGPI_COORDINATE_VRADIUS sgpi_coordinate_vradius;
SGPI_COORDINATE_ARCSEGMENT sgpi_coordinate_arcsegment;
SGPI_COORDINATE_ARC sgpi_coordinate_arc;
SGPI_COORDINATE_CLOCKWISE sgpi_coordinate_clockwise;
SGPI_COORDINATE_ANGLE sgpi_coordinate_angle;
SGPI_COORDINATE_RADIUS sgpi_coordinate_radius;
SGPI_COORDINATE_LINE sgpi_coordinate_line;
SGPI_COORDINATE_POINT sgpi_coordinate_point;
SGPI_COORDINATE_VALUE sgpi_coordinate_value;

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
Coordinate co4_1_initial(Coordinate co, double width, double height);
Coordinate co4_3_initial(Coordinate co, double width, double height);


/*sdy_events.h*/
sdy_pointer_event_t pointer_event;
sdy_keyboard_event_t keyboard_event;


/*main.c*/
uint fontListID;
void load();
void MouseInitial();
void KeyboardInitial();
void MouseReset();
void KeyboardReset();
int getH();
int getW();
void record_mouse_event(int button, int pressed, int released, int modifiers);
void record_keyboard_event(int key, int pressed, int released, int modifiers);


double screen_x_offset;
double screen_y_offset;

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);
void EnableOpenGL(HWND hwnd, HDC*, HGLRC*);
void DisableOpenGL(HWND, HDC, HGLRC);

#endif // MAIN_H_INCLUDED
