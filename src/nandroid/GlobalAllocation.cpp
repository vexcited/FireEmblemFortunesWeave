#include <new>
#include <stddef.h>

namespace nandroid {

void *GlobalOperatorNew(size_t size) {
  return ::operator new(size);
}

void GlobalOperatorDelete(void *pointer, size_t size) noexcept {
  ::operator delete(pointer, size);
}

void *GlobalOperatorNewArray(size_t size) {
  return ::operator new[](size);
}

void GlobalOperatorDeleteArray(void *pointer) noexcept {
  ::operator delete[](pointer);
}

}
