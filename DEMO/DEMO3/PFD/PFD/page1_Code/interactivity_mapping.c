#include "sdy_events.h"
#include "target_configuration.h"
#include "imported_functions.h"
#include <stddef.h>


/* Pointer storage */
static sdy_pointer_event_t pointer_events[MAX_POINTERS] = {0};
static int last_pointer_event = 0;

/* Keyboard storage */
static sdy_keyboard_event_t keyboard_events[MAX_KEYBOARDS] = {0};
static int last_keyboard_event = 0;


/* Setter functions for pointer and keyboard */

void BHVR_Pointer(const sdy_pointer_event_t *evt){
  int index;
  for (index=0; index<MAX_POINTERS; index++) {
    if (index >= last_pointer_event) {
      last_pointer_event++;
      pointer_events[index] = *evt;
      break;
    }
    else if (pointer_events[index].id == evt->id) {
      pointer_events[index] = *evt;
      break;
    }
  }
}

void BHVR_Keyboard(const sdy_keyboard_event_t *evt){
  int index;
  for (index=0; index<MAX_KEYBOARDS; index++) {
    if (index >= last_keyboard_event) {
      last_keyboard_event++;
      keyboard_events[index] = *evt;
      break;
    }
    else if (keyboard_events[index].id == evt->id) {
      keyboard_events[index] = *evt;
      break;
    }
  }
}



/* Imported functions for REDACE Display GCG Code */

void aol_locate(int pPointer, float* pX, float* pY) {
  int index;
  for (index=0; index<last_pointer_event; index++) {
    const sdy_pointer_event_t *lPointerEvent = &pointer_events[index];
    if ((pPointer == -1) || (lPointerEvent->id == -1) || (pPointer == lPointerEvent->id)) {
      if (pX != NULL) *pX = lPointerEvent->position[0];
      if (pY != NULL) *pY = lPointerEvent->position[1];
      break;
    }
  }
}

void aol_pointer(int pPointer, bool* pPressed, bool* pReleased, int* pButton, float* pX, float* pY, int* pModifiers) {
  int index;
  for (index=0; index<last_pointer_event; index++) {
    const sdy_pointer_event_t *lPointerEvent = &pointer_events[index];
    if ((pPointer == -1) || (lPointerEvent->id == -1) || (pPointer == lPointerEvent->id)) {
      if (pPressed != NULL) *pPressed = lPointerEvent->pressed;
      if (pReleased != NULL) *pReleased = lPointerEvent->released;
      if (pButton != NULL) *pButton = lPointerEvent->button;
      if (pX != NULL) *pX =  lPointerEvent->position[0];
      if (pY != NULL) *pY =  lPointerEvent->position[1];
      if (pModifiers != NULL) *pModifiers =  lPointerEvent->modifiers;
      break;
    }
  }
}

void aol_keyboard(int pKeyboard, bool* pPressed, bool* pReleased, long* pCode, int* pModifiers) {
  int index;
  for (index=0; index<last_keyboard_event; index++) {
    const sdy_keyboard_event_t *lKeyboardEvent = &keyboard_events[index];
    if ((pKeyboard == -1) || (lKeyboardEvent->id == -1) || (pKeyboard == lKeyboardEvent->id)) {
      if (pPressed != NULL) *pPressed = lKeyboardEvent->pressed;
      if (pReleased != NULL) *pReleased = lKeyboardEvent->released;
      if (pCode != NULL) *pCode = lKeyboardEvent->keycode;
      if (pModifiers != NULL) *pModifiers = lKeyboardEvent->modifiers;
      break;
    }
  }
}


double cal_minus(double x, double y){
    return x-y;
}

double cal_negation(double x){
    return -x;
}


Point cal_origin(Point firstpoint, double width, double height){
    Point origin;
    origin.x = firstpoint.x + width / 2.0;
    origin.y = firstpoint.y + height / 2.0;
    return origin;
}

Point relative_point(Point point, Point origin){
    Point relative;
    relative.x = point.x - origin.x;
    relative.y = point.y - origin.y;
    return relative;
}

Point add_point(Point point, Point origin){
    Point add;
    add.x = point.x + origin.x;
    add.y = point.y + origin.y;
    return add;
}
