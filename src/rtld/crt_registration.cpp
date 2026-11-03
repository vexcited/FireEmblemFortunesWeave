#include "rtld/crt_registration.hpp"

struct CrtDestructor {
  void (*function)(void*);
  void* argument;
  uintptr_t handle;
};

static_assert(sizeof(CrtDestructor) == 24);

extern "C" {
extern uint64_t CrtDestructorCount;
extern CrtDestructor CrtDestructorsBegin[];
extern CrtDestructor CrtDestructorsEnd[];
}

namespace fw::rtld {

int RegisterCrtDestructor(void (*function)(void*), void* argument,
                          uintptr_t handle) {
  if (!handle) {
    return -1;
  }

  uintptr_t distance = reinterpret_cast<uintptr_t>(CrtDestructorsEnd)
                       - reinterpret_cast<uintptr_t>(CrtDestructorsBegin);
  uint64_t capacity =
    uint64_t(int64_t(distance) >> 3) * 0xAAAAAAAAAAAAAAABULL;

  if (capacity <= CrtDestructorCount) {
    return -1;
  }

  uint64_t index =
    __atomic_fetch_add(&CrtDestructorCount, 1, __ATOMIC_ACQ_REL);

  if (capacity <= index) {
    return -1;
  }

  CrtDestructorsBegin[index] = {function, argument, handle};
  return 0;
}

}
