#pragma once

#include <stdint.h>

namespace fw::rtld {

using CrtCallback = void (*)();

void InitializeCrt();
void FinalizeCrt();
void RunCrtDestructors(uintptr_t handle, uint64_t first, uint64_t last);
CrtCallback GetLoaderReadyCallback();
CrtCallback GetModuleInitializerCallback();
CrtCallback GetModuleFinalizerCallback();
void MarkLoaderReady();

}
