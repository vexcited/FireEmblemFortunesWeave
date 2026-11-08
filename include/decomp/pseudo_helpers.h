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
