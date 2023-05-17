#ifndef KEYBOARD_TS
#define KEYBOARD_TS

#include "TS_DISCO_F429ZI.h"

enum KeyboardButtons{BUTTON_0, BUTTON_1, BUTTON_2, BUTTON_3, RELEASED};

class KeyboardTs{
    public:
        KeyboardTs();
        KeyboardButtons eRead();
    private:
        TS_DISCO_F429ZI ts;
        TS_StateTypeDef TS_State;
};

#endif
