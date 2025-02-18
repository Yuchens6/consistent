#ifndef SDY_EVENTS_H_INCLUDED
#define SDY_EVENTS_H_INCLUDED

#include "sgpi-struct.h"

typedef void (*T_CURSOR_POS_REQUEST_CALLBACK)(void*, int, float, float);

typedef struct {
    int id; /* pointer id */
    float position[2];
    int button;
    bool pressed;
    bool released;
    int modifiers;
} sdy_pointer_event_t;

typedef struct {
    int id; /* keyboard id */
    int keycode;
    bool pressed;
    bool released;
    int modifiers;
} sdy_keyboard_event_t;

#endif // SDY_EVENTS_H_INCLUDED
