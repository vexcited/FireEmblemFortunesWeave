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

// arm_neon.h names a rounding conversion across widths only from clang 22.
#if __clang_major__ < 22
#define PSEUDO_ROUNDING(mode, round) \
  static inline __attribute__((always_inline)) long long \
  vcvt##mode##s_s64_f32(float x) \
  { \
    return (long long)round##f(x); \
  } \
  static inline __attribute__((always_inline)) unsigned long long \
  vcvt##mode##s_u64_f32(float x) \
  { \
    return (unsigned long long)round##f(x); \
  } \
  static inline __attribute__((always_inline)) int \
  vcvt##mode##d_s32_f64(double x) \
  { \
    return (int)round(x); \
  } \
  static inline __attribute__((always_inline)) unsigned \
  vcvt##mode##d_u32_f64(double x) \
  { \
    return (unsigned)round(x); \
  }
PSEUDO_ROUNDING(n, __builtin_roundeven)
PSEUDO_ROUNDING(p, __builtin_ceil)
PSEUDO_ROUNDING(m, __builtin_floor)
PSEUDO_ROUNDING(a, __builtin_round)
#undef PSEUDO_ROUNDING
#endif

// No arm_neon.h names a fixed point conversion across widths. A scale by a
// power of two is exact, so each rounds once like its instruction.
#define PSEUDO_FIXED(n) ((n) < 64 ? (double)(1ull << ((n) & 63)) : 0x1p64)
#define vcvts_n_f32_s64(x, n) \
  ((float)(long long)(x) / (float)PSEUDO_FIXED(n))
#define vcvts_n_f32_u64(x, n) \
  ((float)(unsigned long long)(x) / (float)PSEUDO_FIXED(n))
#define vcvtd_n_f64_s32(x, n) ((double)(int)(x) / PSEUDO_FIXED(n))
#define vcvtd_n_f64_u32(x, n) ((double)(unsigned)(x) / PSEUDO_FIXED(n))
#define vcvts_n_s64_f32(x, n) \
  ((long long)((float)(x) * (float)PSEUDO_FIXED(n)))
#define vcvts_n_u64_f32(x, n) \
  ((unsigned long long)((float)(x) * (float)PSEUDO_FIXED(n)))
#define vcvtd_n_s32_f64(x, n) ((int)((double)(x) * PSEUDO_FIXED(n)))
#define vcvtd_n_u32_f64(x, n) ((unsigned)((double)(x) * PSEUDO_FIXED(n)))

// The listing writes a product by one lane as a call.
#define vmuls_n_f32(a, b) ((float)(a) * (float)(b))

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

#define __rbit32(x) __builtin_bitreverse32(x)
#define __rbit64(x) __builtin_bitreverse64(x)

#define bswap16(x) __builtin_bswap16(x)
#define bswap32(x) __builtin_bswap32(x)
#define bswap64(x) __builtin_bswap64(x)

// The bytes of every 16 bit half change places.
#define __rev16(x) \
  ({ \
    unsigned long long value_ = (unsigned long long)(x); \
    (__typeof__(x))((value_ & 0xFF00FF00FF00FF00ULL) >> 8 \
      | (value_ & 0x00FF00FF00FF00FFULL) << 8); \
  })

// A bit cast between two types, the smaller one sets the byte count.
#define COERCE_AS(type, x) \
  ({ \
    __typeof__(x) from_ = (x); \
    type to_; \
    __builtin_memset(&to_, 0, sizeof(to_)); \
    __builtin_memcpy(&to_, &from_, \
      sizeof(to_) < sizeof(from_) ? sizeof(to_) : sizeof(from_)); \
    to_; \
  })
#define COERCE_FLOAT(x) COERCE_AS(float, x)
#define COERCE_DOUBLE(x) COERCE_AS(double, x)
#define COERCE_LONG_DOUBLE(x) COERCE_AS(long double, x)
#define COERCE_INT(x) COERCE_AS(int, x)
#define COERCE_UNSIGNED_INT(x) COERCE_AS(unsigned int, x)
#define COERCE__INT64(x) COERCE_AS(__int64, x)
#define COERCE_UNSIGNED_INT64(x) COERCE_AS(unsigned __int64, x)
#define COERCE_UNSIGNED_INT128(x) COERCE_AS(unsigned __int128, x)
#define COERCE_FLOAT32X2_T(x) COERCE_AS(float32x2_t, x)
#define COERCE_FLOAT32X4_T(x) COERCE_AS(float32x4_t, x)
#define COERCE_INT32X4_T(x) COERCE_AS(int32x4_t, x)
#define COERCE_INT8X16_T(x) COERCE_AS(int8x16_t, x)

// The lanes of a vector register, under the member names of the listing.
union PseudoLanes64 {
  unsigned long long n64_u64[1];
  unsigned int n64_u32[2];
  unsigned short n64_u16[4];
  unsigned char n64_u8[8];
  long long n64_i64[1];
  int n64_i32[2];
  short n64_i16[4];
  signed char n64_i8[8];
  float n64_f32[2];
  double n64_f64[1];
};

union PseudoLanes128 {
  unsigned long long n128_u64[2];
  unsigned int n128_u32[4];
  unsigned short n128_u16[8];
  unsigned char n128_u8[16];
  long long n128_i64[2];
  int n128_i32[4];
  short n128_i16[8];
  signed char n128_i8[16];
  float n128_f32[4];
  double n128_f64[2];
};

// The first pair reaches the lanes of a stored vector, the second pair
// copies a temporary one.
#define LANES64(x) (*(union PseudoLanes64 *)&(x))
#define LANES128(x) (*(union PseudoLanes128 *)&(x))
#define LANES64_OF(x) COERCE_AS(union PseudoLanes64, x)
#define LANES128_OF(x) COERCE_AS(union PseudoLanes128, x)

// The listing names the short and the long lane form alike.
#undef vmuls_lane_f32
#define vmuls_lane_f32(a, v, lane) \
  ({ \
    __typeof__(v) lanes_ = (v); \
    (float)(a) * ((float *)&lanes_)[lane]; \
  })

// The flags of an addition or a subtraction in the wider operand type.
// A helper left out of line would count as a call the original never makes.
#define PSEUDO_INLINE static inline __attribute__((always_inline))

#define PSEUDO_FLAG(helper, x, y) \
  ({ \
    __typeof__(x) x_ = (x); \
    __typeof__(y) y_ = (y); \
    helper((unsigned long long)x_, (unsigned long long)y_, \
      8 * (sizeof(x_) < sizeof(y_) ? sizeof(y_) : sizeof(x_))); \
  })

PSEUDO_INLINE int pseudo_overflow_add(unsigned long long x,
  unsigned long long y, unsigned bits)
{
  return (~(x ^ y) & (x ^ (x + y))) >> (bits - 1) & 1;
}

PSEUDO_INLINE int pseudo_overflow_sub(unsigned long long x,
  unsigned long long y, unsigned bits)
{
  return ((x ^ y) & (x ^ (x - y))) >> (bits - 1) & 1;
}

PSEUDO_INLINE int pseudo_carry_add(unsigned long long x,
  unsigned long long y, unsigned bits)
{
  unsigned long long mask = ~0ULL >> (64 - bits);

  return ((x + y) & mask) < (x & mask);
}

PSEUDO_INLINE int pseudo_carry_sub(unsigned long long x,
  unsigned long long y, unsigned bits)
{
  unsigned long long mask = ~0ULL >> (64 - bits);

  return (x & mask) < (y & mask);
}

#define __OFADD__(x, y) PSEUDO_FLAG(pseudo_overflow_add, x, y)
#define __OFSUB__(x, y) PSEUDO_FLAG(pseudo_overflow_sub, x, y)
#define __CFADD__(x, y) PSEUDO_FLAG(pseudo_carry_add, x, y)
#define __CFSUB__(x, y) PSEUDO_FLAG(pseudo_carry_sub, x, y)

// The value a register holds at this point, read without any instruction.
#define PSEUDO_REGISTER(type, name, constraint) \
  ({ \
    register type value_ __asm__(name); \
    __asm__ volatile("" : constraint(value_)); \
    value_; \
  })

#define PSEUDO_X8 __attribute__((swift_indirect_result)) void *

// The compiler takes the object X8 points to for one pointer wide and drops
// the stores past it, so the address goes through a barrier first.
#define PSEUDO_X8_VALUE(p) \
  ({ \
    unsigned long long value_ = (unsigned long long)(p); \
    __asm__("" : "+r"(value_)); \
    value_; \
  })

// A function that takes X8 is declared without a result, the register that
// holds it is read right after the call.
#define X8CALL_X0(type, call) \
  ({ \
    call; \
    (type)PSEUDO_REGISTER(unsigned long long, "x0", "=r"); \
  })
#define X8CALL_S0(type, call) \
  ({ \
    call; \
    PSEUDO_REGISTER(type, "s0", "=w"); \
  })
#define X8CALL_D0(type, call) \
  ({ \
    call; \
    PSEUDO_REGISTER(type, "d0", "=w"); \
  })
#define X8CALL_V0(type, call) \
  ({ \
    call; \
    PSEUDO_REGISTER(type, "v0", "=w"); \
  })
