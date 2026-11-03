#pragma once

#include <stddef.h>

namespace fw::libcxx {

using NewHandler = void (*)();

extern NewHandler NewHandlerSlot asm("__cxa_new_handler");
NewHandler GetNewHandler() asm("_ZSt15get_new_handlerv");
NewHandler SetNewHandler(NewHandler handler) asm("_ZSt15set_new_handlerPFvvE");

void* Allocate(size_t size) asm("_Znwm");
void* AllocateArray(size_t size) asm("_Znam");
void* AllocateAligned(size_t size, size_t alignment)
  asm("_ZnwmSt11align_val_t");
void* AllocateAlignedArray(size_t size, size_t alignment)
  asm("_ZnamSt11align_val_t");

void Release(void* pointer) asm("_ZdlPv");
void ReleaseNothrow(void* pointer, const void* tag)
  asm("_ZdlPvRKSt9nothrow_t");
void ReleaseSized(void* pointer, size_t size) asm("_ZdlPvm");
void ReleaseArray(void* pointer) asm("_ZdaPv");
void ReleaseArrayNothrow(void* pointer, const void* tag)
  asm("_ZdaPvRKSt9nothrow_t");
void ReleaseArraySized(void* pointer, size_t size) asm("_ZdaPvm");

void ReleaseAligned(void* pointer, size_t alignment)
  asm("_ZdlPvSt11align_val_t");
void ReleaseAlignedNothrow(void* pointer, size_t alignment, const void* tag)
  asm("_ZdlPvSt11align_val_tRKSt9nothrow_t");
void ReleaseAlignedSized(void* pointer, size_t size, size_t alignment)
  asm("_ZdlPvmSt11align_val_t");
void ReleaseAlignedArray(void* pointer, size_t alignment)
  asm("_ZdaPvSt11align_val_t");
void ReleaseAlignedArrayNothrow(void* pointer, size_t alignment, const void* tag)
  asm("_ZdaPvSt11align_val_tRKSt9nothrow_t");
void ReleaseAlignedArraySized(void* pointer, size_t size, size_t alignment)
  asm("_ZdaPvmSt11align_val_t");

}
