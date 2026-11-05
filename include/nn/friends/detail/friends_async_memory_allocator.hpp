#pragma once

#include <stddef.h>

namespace nn::friends::detail {

using AllocateFunction = void* (*)(size_t size);
using FreeFunction = void (*)(void* pointer, size_t size);

class AsyncMemoryAllocator {
 public:
  AsyncMemoryAllocator();
  AsyncMemoryAllocator(AsyncMemoryAllocator&& other);
  ~AsyncMemoryAllocator();

  AsyncMemoryAllocator& operator=(AsyncMemoryAllocator&& other);

  bool Allocate(size_t contextSize, size_t functionSize,
    size_t threadStackSize, AllocateFunction allocate, FreeFunction free);
  void Deallocate();
  FreeFunction GetDeallocateFunction() const;
  void* GetContextBuffer();
  void* GetFunctionBuffer();
  void* GetThreadStackBuffer();

 private:
  void MoveFrom(AsyncMemoryAllocator& other);

  void* m_Buffer;
  void* m_ThreadStack;
  size_t m_BufferSize;
  size_t m_ThreadStackSize;
  void* m_ContextBuffer;
  void* m_FunctionBuffer;
  void* m_ThreadStackBuffer;
  FreeFunction m_Free;
};

}
