#pragma once

#include <stdint.h>

namespace nn::applet {

bool GetDesirableKeyboardLayout(uint32_t* pOutValue);
void SetDesirableKeyboardLayout(uint32_t value);

}
