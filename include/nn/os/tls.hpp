#pragma once

#include "nn/os/managers.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct ThreadType;

ThreadType* GetCurrentThread();
Result SdkAllocateTlsSlot(TlsSlot* output, void (*destructor)(uintptr_t));
void FreeTlsSlot(TlsSlot slot);
uintptr_t GetTlsValue(TlsSlot slot);
void SetTlsValue(TlsSlot slot, uintptr_t value);

}
