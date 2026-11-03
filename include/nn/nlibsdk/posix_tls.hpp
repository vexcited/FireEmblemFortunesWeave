#pragma once

#include <stdint.h>

namespace nn::nlibsdk {

using PosixKeyDestructor = void (*)(void*);

int CreatePosixKey(uint32_t* output, PosixKeyDestructor destructor)
  asm("pthread_key_create");
int DeletePosixKey(uint32_t key) asm("pthread_key_delete");
void* GetPosixSpecific(uint32_t key) asm("pthread_getspecific");
int SetPosixSpecific(uint32_t key, const void* value)
  asm("pthread_setspecific");
int NotifyThreadPool(int kind, int waiting)
  asm("nnmem_nlib_threadpool_notify");

}
