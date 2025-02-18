#include "main.h"
#include <stdio.h>

extern void BHVR_Pointer(const sdy_pointer_event_t * evt);
//extern void BHVR_Keyboard(const sdy_keyboard_event_t *evt);
type_symbology_layer_1 symbology_layer_1_ctx;

int shift_pressed = 0;
int control_pressed = 0;

//double factor_x = 0.25, factor_y = 0.25;

void load()
{
    screen_x_offset = 17 / getW();
    screen_y_offset = 42 / getH();

   HINSTANCE hDLL = LoadLibraryA("sgpi-opengl.dll");

    sgpi_lines = (SGPI_LINES)GetProcAddress(hDLL, "sgpi_lines");
    sgpi_fan = (SGPI_FAN)GetProcAddress(hDLL, "sgpi_fan");
    sgpi_circle = (SGPI_CIRCLE)GetProcAddress(hDLL, "sgpi_circle");
    sgpi_ellipse = (SGPI_ELLIPSE)GetProcAddress(hDLL, "sgpi_ellipse");
    sgpi_arc_ellipse =
            (SGPI_ARC_ELLIPSE)GetProcAddress(hDLL, "sgpi_arc_ellipse");
    sgpi_crown = (SGPI_CROWN)GetProcAddress(hDLL, "sgpi_crown");
    sgpi_rectangle =
            (SGPI_RECTANGLE)GetProcAddress(hDLL, "sgpi_rectangle");
    sgpi_shape = (SGPI_SHAPE)GetProcAddress(hDLL, "sgpi_shape");
    sgpi_show_text =
             (SGPI_SHOW_TEXT)GetProcAddress(hDLL, "sgpi_show_text");
    sgpi_font = (SGPI_FONT)GetProcAddress(hDLL, "sgpi_font");
    sgpi_text = (SGPI_TEXT)GetProcAddress(hDLL, "sgpi_text");
    sgpi_scissor = (SGPI_SCISSOR)GetProcAddress(hDLL, "sgpi_scissor");
    sgpi_scale_pixel_image = (SGPI_SCALE_PIXEL_IMAGE)GetProcAddress(hDLL, "sgpi_scale_pixel_image");
    sgpi_pixel_image = (SGPI_PIXEL_IMAGE)GetProcAddress(hDLL, "sgpi_pixel_image");
    sgpi_read_bmp_file = (SGPI_READ_BMP_FILE)GetProcAddress(hDLL, "sgpi_read_bmp_file");
    sgpi_draw_pixel = (SGPI_DRAW_PIXEL)GetProcAddress(hDLL, "sgpi_draw_pixel");
    calculate_pixel_data_length = (CALCULATE_PIXEL_DATA_LENGTH)GetProcAddress(hDLL, "calculate_pixel_data_length");
    convert_array_type = (CONVERT_ARRAY_TYPE)GetProcAddress(hDLL, "convert_array_type");
    sgpi_translate = (SGPI_TRANSLATE)GetProcAddress(hDLL, "sgpi_translate");
    sgpi_scale = (SGPI_SCALE)GetProcAddress(hDLL, "sgpi_scale");
    sgpi_rotate = (SGPI_ROTATE)GetProcAddress(hDLL, "sgpi_rotate");
    sgpi_is_in_rectangle = (SGPI_IS_IN_RECTANGLE)GetProcAddress(hDLL, "sgpi_is_in_rectangle");
    sgpi_is_in_circle = (SGPI_IS_IN_CIRCLE)GetProcAddress(hDLL, "sgpi_is_in_circle");
    sgpi_is_in_shape = (SGPI_IS_IN_SHAPE)GetProcAddress(hDLL, "sgpi_is_in_shape");
    sgpi_index_rgb_color = (SGPI_INDEX_RGB_COLOR)GetProcAddress(hDLL, "sgpi_index_rgb_color");

    sgpi_coordinate_bitmap = (SGPI_COORDINATE_BITMAP)GetProcAddress(hDLL, "sgpi_coordinate_bitmap");
    sgpi_coordinate_shape = (SGPI_COORDINATE_SHAPE)GetProcAddress(hDLL, "sgpi_coordinate_shape");
    sgpi_coordinate_lines = (SGPI_COORDINATE_LINES)GetProcAddress(hDLL, "sgpi_coordinate_lines");
    sgpi_coordinate_rectangle = (SGPI_COORDINATE_RECTANGLE)GetProcAddress(hDLL, "sgpi_coordinate_rectangle");
    sgpi_coordinate_ellipse = (SGPI_COORDINATE_ELLIPSE)GetProcAddress(hDLL, "sgpi_coordinate_ellipse");
    sgpi_coordinate_circle = (SGPI_COORDINATE_CIRCLE)GetProcAddress(hDLL, "sgpi_coordinate_circle");
    sgpi_coordinate_crown = (SGPI_COORDINATE_CROWN)GetProcAddress(hDLL, "sgpi_coordinate_crown");
    sgpi_coordinate_arcellipse = (SGPI_COORDINATE_ARCELLIPSE)GetProcAddress(hDLL, "sgpi_coordinate_arcellipse");
    sgpi_coordinate_hradius = (SGPI_COORDINATE_HRADIUS)GetProcAddress(hDLL, "sgpi_coordinate_hradius");
    sgpi_coordinate_vradius = (SGPI_COORDINATE_VRADIUS)GetProcAddress(hDLL, "sgpi_coordinate_vradius");
    sgpi_coordinate_arcsegment = (SGPI_COORDINATE_ARCSEGMENT)GetProcAddress(hDLL, "sgpi_coordinate_arcsegment");
    sgpi_coordinate_arc = (SGPI_COORDINATE_ARC)GetProcAddress(hDLL, "sgpi_coordinate_arc");
    sgpi_coordinate_clockwise = (SGPI_COORDINATE_CLOCKWISE)GetProcAddress(hDLL, "sgpi_coordinate_clockwise");
    sgpi_coordinate_angle = (SGPI_COORDINATE_ANGLE)GetProcAddress(hDLL, "sgpi_coordinate_angle");
    sgpi_coordinate_radius = (SGPI_COORDINATE_RADIUS)GetProcAddress(hDLL, "sgpi_coordinate_radius");
    sgpi_coordinate_line = (SGPI_COORDINATE_LINE)GetProcAddress(hDLL, "sgpi_coordinate_line");
    sgpi_coordinate_point = (SGPI_COORDINATE_POINT)GetProcAddress(hDLL, "sgpi_coordinate_point");
    sgpi_coordinate_value = (SGPI_COORDINATE_VALUE)GetProcAddress(hDLL, "sgpi_coordinate_value");

//    Pixel temp_pixel;
//    sgpi_read_bmp_file(NULL, "./texture/test.bmp", BMP24BitFormat, &pixel);
//    printf("pixel.height = %d, pixel.width = %d", pixel.height, pixel.width);
}

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
    WNDCLASSEX wcex;
    HWND hwnd;
    HDC hDC;
    HGLRC hRC;
    MSG msg;
    BOOL bQuit = FALSE;
    //float theta = 0.0f;

    /* register window class */
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_OWNDC;
    wcex.lpfnWndProc = WindowProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = "CallSGPI";
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);;

    if (!RegisterClassEx(&wcex))
        return 0;
    load();


    /* create main window */
    hwnd = CreateWindowEx(0,
                          "CallSGPI",
                          "Draw graphic by SGPI-OpenGL dynamic link library",
                          WS_OVERLAPPEDWINDOW,
                          CW_USEDEFAULT,
                          CW_USEDEFAULT,
                          getW(),
                          getH(),
                          NULL,
                          NULL,
                          hInstance,
                          NULL);

    ShowWindow(hwnd, nCmdShow);

    /* enable OpenGL for the window */
    EnableOpenGL(hwnd, &hDC, &hRC);

    /* Initialize event properties */
    MouseInitial();
    KeyboardInitial();
    /* Initialize font properties */
    uint temp_fontListID;
    sgpi_font(NULL, 27, ANSI_CHARSET, "Calibri", &temp_fontListID);
    fontListID = temp_fontListID;

    int acc = 0;
    bool init = 1;

    /* program main loop */
    while (!bQuit)
    {
        /* check for messages */
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
        else
        {
            /* OpenGL animation code goes here */
            // TODO Replace with sgpi_initialization
            glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glPushMatrix();
            BHVR_Pointer(&pointer_event);//鼠标事件参数传递
//            BHVR_Keyboard(&keyboard_event);//键盘事件参数传递

            if(acc != 0 && init != 0)
                init = 0;
            draw_once(init);

            acc++;


//            Sleep(5);
            MouseReset();
            KeyboardReset();

            glPopMatrix();

            SwapBuffers(hDC);

            //theta += 1.0f;


            Sleep (1);
        }
    }

    /* shutdown OpenGL */
    DisableOpenGL(hwnd, hDC, hRC);
    /* destroy the window explicitly */
    DestroyWindow(hwnd);


    return msg.wParam;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static int loc_main_key_down = 0;
    static int loc_keyboard_modifier = 0;

    switch (uMsg)
    {
        case WM_LBUTTONDOWN:
            record_mouse_event(1, 1, 0, wParam);
            return 0;
        case WM_LBUTTONUP:
            record_mouse_event(1, 0, 1, wParam);
            return 0;
        case WM_RBUTTONDOWN:
            record_mouse_event(2, 1, 0, wParam);
            return 0;
        case WM_RBUTTONUP:
            record_mouse_event(2, 0, 1, wParam);
            return 0;
        case WM_MBUTTONDOWN:
            record_mouse_event(3, 1, 0, wParam);
            return 0;
        case WM_MBUTTONUP:
            record_mouse_event(3, 0, 1, wParam);
            return 0;

        case WM_MOUSEMOVE:
            {
                int x = GET_X_LPARAM(lParam);
                int y = GET_Y_LPARAM(lParam);
                pointer_event.position[0] = (1.0 + screen_x_offset) * x * 2.0 / getW() ;
                pointer_event.position[1] = (1.0 + screen_y_offset) * y * 2.0 / getH() ;
            }
            return 0;

        case WM_CHAR:
        {
            loc_main_key_down = (int) wParam;
            if (shift_pressed && control_pressed) {
                loc_keyboard_modifier = 3;
            }
            else if (shift_pressed) {
                loc_keyboard_modifier = 1;
            }
            else if (control_pressed) {
                loc_keyboard_modifier = 2;
            }
            else {
                loc_keyboard_modifier = 0;
            }

            record_keyboard_event(loc_main_key_down, 1, 0, loc_keyboard_modifier);
            return 0;
        }

        case WM_KEYDOWN:
        {

            switch ((int) wParam) {
            case VK_SHIFT:
                shift_pressed = 1;
                break;

            case VK_CONTROL:
                control_pressed = 1;
                break;

            default:
                break;
            }

            loc_main_key_down = 0;
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }

        case WM_KEYUP:
        {
            switch ((int) wParam) {
            case VK_SHIFT:
                shift_pressed = 0;
                loc_keyboard_modifier -= 1;
                break;

            case VK_CONTROL:
                control_pressed = 0;
                loc_keyboard_modifier -= 2;
                break;
            default:
                break;
            }

            if (loc_main_key_down) {
                if (shift_pressed && control_pressed) {
                    loc_keyboard_modifier = 3;
                }
                else if (shift_pressed) {
                    loc_keyboard_modifier = 1;
                }
                else if (control_pressed) {
                    loc_keyboard_modifier = 2;
                }
                else {
                    loc_keyboard_modifier = 0;
                }

                record_keyboard_event(loc_main_key_down, 0, 1, loc_keyboard_modifier);
                loc_main_key_down = 0;
            }
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }
//        case WM_LBUTTONDOWN:  //按下鼠标左键
//            {
//                pointer_event.pressed = TRUE;
//                pointer_event.released = FALSE;
////                MessageBox(hwnd, "Left mouse button clicked!", "Mouse Event", MB_OK | MB_ICONINFORMATION);
//            }
//            break;
//        case WM_LBUTTONUP:  //松开鼠标左键
//            {
//                pointer_event.pressed = FALSE;
//                pointer_event.released = TRUE;
////                MessageBox(hwnd, "Right mouse button clicked!", "Mouse Event", MB_OK | MB_ICONINFORMATION);
//            }
//            break;
//         case WM_MOUSEMOVE:  //鼠标移动
//            {
//                int x = GET_X_LPARAM(lParam);
//                int y = GET_Y_LPARAM(lParam);
//                pointer_event.position[0] = (1.0 + screen_x_offset) * x * 2.0 / getW() ;
//                pointer_event.position[1] = (1.0 + screen_y_offset) * y * 2.0 / getH() ;
//            }
//            break;

        case WM_CLOSE:
            PostQuitMessage(0);
        break;

        case WM_DESTROY:
            return 0;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}



void EnableOpenGL(HWND hwnd, HDC* hDC, HGLRC* hRC)
{
    PIXELFORMATDESCRIPTOR pfd;

    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC(hwnd);

    /* set the pixel format for the DC */
    ZeroMemory(&pfd, sizeof(pfd));

    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW |
                  PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;

    iFormat = ChoosePixelFormat(*hDC, &pfd);

    SetPixelFormat(*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext(*hDC);

    wglMakeCurrent(*hDC, *hRC);
}

void DisableOpenGL (HWND hwnd, HDC hDC, HGLRC hRC)
{
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(hRC);
    ReleaseDC(hwnd, hDC);
}


int getW()
{
    return target_screen_width;
}

int getH()
{
    return target_screen_height;
}

void MouseInitial()
{
    pointer_event.position[0] = 0.0;
    pointer_event.position[1] = 0.0;
    pointer_event.button = 0;
    pointer_event.pressed = 0;
    pointer_event.released = 0;
    pointer_event.modifiers = 0;
}

void KeyboardInitial()
{
    keyboard_event.pressed = 0;
    keyboard_event.released = 0;
    keyboard_event.keycode = 0;
    keyboard_event.modifiers = 0;
}

void MouseReset()
{
    pointer_event.released = 0;
    pointer_event.button = 0;
    //pointer_event.pressed = 0;
}

void KeyboardReset()
{
    //keyboard_event.pressed = 0;
    keyboard_event.released = 0;
    keyboard_event.keycode = 0;
}


void record_mouse_event(int button, int pressed, int released, int modifiers)
{
    pointer_event.pressed = (bool) pressed;
    pointer_event.released = (bool) released;
    pointer_event.button = button;
    pointer_event.modifiers = modifiers;
}

void record_keyboard_event(int key, int pressed, int released, int modifiers)
{
    keyboard_event.pressed = (bool) pressed;
    keyboard_event.released = (bool) released;
    keyboard_event.keycode = key;
    keyboard_event.modifiers = modifiers;
}

