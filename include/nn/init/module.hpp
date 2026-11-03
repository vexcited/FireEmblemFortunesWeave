#pragma once

#include <stdint.h>

extern "C" void nninitInitializeSdkModule();
extern "C" void nninitFinalizeSdkModule();

namespace nn::init::detail {

void InitializePthreadDefaults();
void SetPthreadDefaultCoreMask(uint64_t mask);

}
