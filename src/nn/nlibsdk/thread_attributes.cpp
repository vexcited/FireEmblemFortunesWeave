#include "nn/nlibsdk/thread_attributes.hpp"

namespace nn::nlibsdk {

int DefaultPriority(int*) asm("nnmem_nlib_thread_priority_default");
void Notify(int, int) asm("nnmem_nlib_threadpool_notify");
int Lock(void*) asm("pthread_mutex_lock");
int Unlock(void*) asm("pthread_mutex_unlock");

namespace {

template<typename T>
T Read(ThreadAttributes* attributes, size_t offset) {
  T value;
  __builtin_memcpy(&value, attributes->storage + offset, sizeof(value));
  return value;
}

template<typename T>
void Write(ThreadAttributes* attributes, size_t offset, T value) {
  __builtin_memcpy(attributes->storage + offset, &value, sizeof(value));
}

void LockAttributes(ThreadAttributes* attributes) {
  Notify(1, 1);
  Lock(attributes);
  Notify(1, 0);
}

}

uint32_t GetLibraryVersion() {
  return 20231114;
}

uint32_t GetCompilerVersion() {
  return 210108;
}

int InitializeThreadAttributes(ThreadAttributes* attributes) {
  int priority = 0;
  Write<uint64_t>(attributes, 0, 1);
  Write<uint64_t>(attributes, 8, 0);

  if (DefaultPriority(&priority) == 0) {
    Write<int>(attributes, 16, priority);
  }

  Write<uint32_t>(attributes, 36, 0);
  Write<uint64_t>(attributes, 28, 0);
  Write<uint64_t>(attributes, 20, 0);
  return 0;
}

int DestroyThreadAttributes(ThreadAttributes*) {
  return 0;
}

int SetThreadAttributeInteger(ThreadAttributes* attributes, int key, int value) {
  LockAttributes(attributes);
  int result = 0;

  switch (key) {
    case 1:
      Write<int>(attributes, 8, value != 0);
      break;
    case 2:
      if (value < 0) {
        result = 22;
      }
      else {
        Write<uint64_t>(attributes, 32, uint32_t(value));
      }
      break;
    case 4:
      Write<int>(attributes, 16, value);
      break;
    case 5:
      Write<int>(attributes, 20, value);
      break;
    case 6:
      Write<int>(attributes, 12, value != 0);
      break;
    default:
      result = 22;
      break;
  }

  Unlock(attributes);
  return result;
}

int GetThreadAttributeInteger(ThreadAttributes* attributes, int key,
  int* value) {
  LockAttributes(attributes);
  int result = 0;

  switch (key) {
    case 1:
      *value = Read<int>(attributes, 8);
      break;
    case 2:
      *value = Read<int>(attributes, 32);
      break;
    case 4:
      *value = Read<int>(attributes, 16);
      break;
    case 5:
      *value = Read<int>(attributes, 20);
      break;
    case 6:
      *value = Read<int>(attributes, 12);
      break;
    default:
      result = 22;
      break;
  }

  Unlock(attributes);
  return result;
}

int SetThreadAttributePointer(ThreadAttributes*, int, void*) {
  return 22;
}

int GetThreadAttributePointer(ThreadAttributes*, int, void**) {
  return 22;
}

int SetThreadAttributeStack(ThreadAttributes* attributes, void* stack,
  size_t size) {
  LockAttributes(attributes);
  Write<void*>(attributes, 24, stack);
  Write<size_t>(attributes, 32, size);
  Unlock(attributes);
  return 0;
}

int GetThreadAttributeStack(ThreadAttributes* attributes, void** stack,
  size_t* size) {
  LockAttributes(attributes);
  *stack = Read<void*>(attributes, 24);
  *size = Read<size_t>(attributes, 32);
  Unlock(attributes);
  return 0;
}

}
