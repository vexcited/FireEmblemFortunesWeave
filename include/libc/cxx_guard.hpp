#pragma once

#include <stdint.h>

extern "C" int __cxa_guard_acquire(uint64_t* guard);
extern "C" void __cxa_guard_release(uint64_t* guard);
extern "C" void __cxa_guard_abort(uint64_t* guard);
