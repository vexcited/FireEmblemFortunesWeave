#pragma once

#include <stdint.h>

namespace fw::rtld {

int RegisterCrtDestructor(void (*function)(void*), void* argument,
                          uintptr_t handle);

}
