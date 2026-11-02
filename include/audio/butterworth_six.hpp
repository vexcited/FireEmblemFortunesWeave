#pragma once

#include "audio/butterworth.hpp"

namespace fw::audio {

void ApplyButterworth6(nerd::Butterworth* filter, const int16_t* input,
                       int16_t* output, size_t count, size_t stride)
  asm("_ZN4nerd11Butterworth6Apply6EPKsPsmm");

}
