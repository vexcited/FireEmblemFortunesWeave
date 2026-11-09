#pragma once

#include "decomp/pseudo_types.h"

#define atomic_compare_exchange_strong(p, expected, desired) \
  __atomic_compare_exchange_n((p), (expected), (desired), false, \
    __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define atomic_compare_exchange_weak(p, expected, desired) \
  __atomic_compare_exchange_n((p), (expected), (desired), true, \
    __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define atomic_compare_exchange_strong_explicit(p, expected, desired, \
  success, failure) \
  __atomic_compare_exchange_n((p), (expected), (desired), false, \
    (success), (failure))
#define atomic_compare_exchange_weak_explicit(p, expected, desired, \
  success, failure) \
  __atomic_compare_exchange_n((p), (expected), (desired), true, \
    (success), (failure))
#define atomic_fetch_xor(p, v) __atomic_fetch_xor((p), (v), __ATOMIC_SEQ_CST)
#define atomic_fetch_xor_explicit(p, v, order) \
  __atomic_fetch_xor((p), (v), (order))

#define qmemcpy(target, source, size) \
  __builtin_memcpy((target), (source), (size))
#define __noreturn __attribute__((noreturn))

#include <arm_neon.h>

// The 128 bit register type, passed in a vector register like the original.
typedef unsigned char __n128 __attribute__((vector_size(16)));
typedef unsigned char __n64 __attribute__((vector_size(8)));

#define __clz(x) \
  _Generic((x), \
    unsigned long long: ((x) ? __builtin_clzll(x) : 64), \
    long long: ((x) ? __builtin_clzll(x) : 64), \
    unsigned long: ((x) ? __builtin_clzl(x) : 64), \
    long: ((x) ? __builtin_clzl(x) : 64), \
    default: ((x) ? __builtin_clz(x) : 32))
