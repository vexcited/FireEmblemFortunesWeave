#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::nlibsdk {

struct alignas(8) ThreadAttributes {
  uint8_t storage[40];
};

uint32_t GetLibraryVersion() asm("nnmem_nlib_getversion");
uint32_t GetCompilerVersion() asm("nnmem_nlib_compiler_version");
int InitializeThreadAttributes(ThreadAttributes* attributes)
  asm("nnmem_nlib_thread_attr_init");
int DestroyThreadAttributes(ThreadAttributes* attributes)
  asm("nnmem_nlib_thread_attr_destroy");
int SetThreadAttributeInteger(ThreadAttributes* attributes, int key, int value)
  asm("nnmem_nlib_thread_attr_setint");
int GetThreadAttributeInteger(ThreadAttributes* attributes, int key, int* value)
  asm("nnmem_nlib_thread_attr_getint");
int SetThreadAttributePointer(ThreadAttributes* attributes, int key, void* value)
  asm("nnmem_nlib_thread_attr_setptr");
int GetThreadAttributePointer(ThreadAttributes* attributes, int key, void** value)
  asm("nnmem_nlib_thread_attr_getptr");
int SetThreadAttributeStack(ThreadAttributes* attributes, void* stack,
  size_t size) asm("nnmem_nlib_thread_attr_setstack");
int GetThreadAttributeStack(ThreadAttributes* attributes, void** stack,
  size_t* size) asm("nnmem_nlib_thread_attr_getstack");

}
