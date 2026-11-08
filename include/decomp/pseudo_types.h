#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Integer spellings of the recovered pseudocode, compiled with -fsigned-char
// so a plain char stays signed like in the analysis.
#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long
#define __fastcall
#define __cdecl
#define __return_ptr

typedef uint8_t _BYTE;
typedef uint16_t _WORD;
typedef uint32_t _DWORD;
typedef uint64_t _QWORD;
typedef unsigned __int128 _OWORD;
typedef uint8_t _BOOL1;
typedef int32_t _BOOL4;
typedef int64_t _BOOL8;
typedef char _UNKNOWN;

#ifndef nullptr
#define nullptr ((void*)0)
#endif

#define BYTEn(x, n) (*((_BYTE*)&(x) + (n)))
#define WORDn(x, n) (*((_WORD*)&(x) + (n)))
#define DWORDn(x, n) (*((_DWORD*)&(x) + (n)))
#define SBYTEn(x, n) (*((int8_t*)&(x) + (n)))
#define SWORDn(x, n) (*((int16_t*)&(x) + (n)))
#define SDWORDn(x, n) (*((int32_t*)&(x) + (n)))

#define LOBYTE(x) BYTEn(x, 0)
#define LOWORD(x) WORDn(x, 0)
#define LODWORD(x) DWORDn(x, 0)
#define HIBYTE(x) BYTEn(x, sizeof(x) - 1)
#define HIWORD(x) WORDn(x, sizeof(x) / 2 - 1)
#define HIDWORD(x) DWORDn(x, 1)
#define SLOBYTE(x) SBYTEn(x, 0)
#define SLOWORD(x) SWORDn(x, 0)
#define SLODWORD(x) SDWORDn(x, 0)
#define SHIBYTE(x) SBYTEn(x, sizeof(x) - 1)
#define SHIWORD(x) SWORDn(x, sizeof(x) / 2 - 1)
#define SHIDWORD(x) SDWORDn(x, 1)

#define BYTE1(x) BYTEn(x, 1)
#define BYTE2(x) BYTEn(x, 2)
#define BYTE3(x) BYTEn(x, 3)
#define BYTE4(x) BYTEn(x, 4)
#define BYTE5(x) BYTEn(x, 5)
#define BYTE6(x) BYTEn(x, 6)
#define BYTE7(x) BYTEn(x, 7)
#define SBYTE1(x) SBYTEn(x, 1)
#define SBYTE2(x) SBYTEn(x, 2)
#define SBYTE3(x) SBYTEn(x, 3)
#define SBYTE4(x) SBYTEn(x, 4)
#define SBYTE5(x) SBYTEn(x, 5)
#define SBYTE6(x) SBYTEn(x, 6)
#define DWORD1(x) DWORDn(x, 1)
#define DWORD2(x) DWORDn(x, 2)
#define DWORD3(x) DWORDn(x, 3)
#define SDWORD1(x) SDWORDn(x, 1)
#define SDWORD2(x) SDWORDn(x, 2)
#define SDWORD3(x) SDWORDn(x, 3)
#define WORD1(x) WORDn(x, 1)
#define WORD2(x) WORDn(x, 2)
#define WORD3(x) WORDn(x, 3)
#define SWORD1(x) SWORDn(x, 1)
#define SWORD2(x) SWORDn(x, 2)
#define SWORD3(x) SWORDn(x, 3)

#define __PAIR32__(high, low) \
  (((uint32_t)(high) << 16) | (uint16_t)(low))
#define __PAIR64__(high, low) \
  (((uint64_t)(high) << 32) | (uint32_t)(low))

#define __ROL1__(x, n) \
  ((uint8_t)(((uint8_t)(x) << ((n) & 7)) | ((uint8_t)(x) >> (-(n) & 7))))
#define __ROL2__(x, n) \
  ((uint16_t)(((uint16_t)(x) << ((n) & 15)) | \
    ((uint16_t)(x) >> (-(n) & 15))))
#define __ROL4__(x, n) \
  ((uint32_t)(((uint32_t)(x) << ((n) & 31)) | \
    ((uint32_t)(x) >> (-(n) & 31))))
#define __ROL8__(x, n) \
  ((uint64_t)(((uint64_t)(x) << ((n) & 63)) | \
    ((uint64_t)(x) >> (-(n) & 63))))
#define __ROR1__(x, n) __ROL1__(x, -(n))
#define __ROR2__(x, n) __ROL2__(x, -(n))
#define __ROR4__(x, n) __ROL4__(x, -(n))
#define __ROR8__(x, n) __ROL8__(x, -(n))

// The atomic helpers take plain pointers, stores list the value first.
typedef uint8_t atomic_uchar;
typedef uint16_t atomic_ushort;
typedef uint32_t atomic_uint;
typedef uint64_t atomic_ulong;
typedef uint64_t atomic_ullong;
typedef int8_t atomic_schar;
typedef int16_t atomic_short;
typedef int32_t atomic_int;
typedef int64_t atomic_long;
typedef int64_t atomic_llong;
typedef bool atomic_bool;

#define memory_order_relaxed __ATOMIC_RELAXED
#define memory_order_consume __ATOMIC_CONSUME
#define memory_order_acquire __ATOMIC_ACQUIRE
#define memory_order_release __ATOMIC_RELEASE
#define memory_order_acq_rel __ATOMIC_ACQ_REL
#define memory_order_seq_cst __ATOMIC_SEQ_CST

#define atomic_load(p) __atomic_load_n((p), __ATOMIC_SEQ_CST)
#define atomic_load_explicit(p, order) __atomic_load_n((p), (order))
#define atomic_store(v, p) __atomic_store_n((p), (v), __ATOMIC_SEQ_CST)
#define atomic_store_explicit(v, p, order) \
  __atomic_store_n((p), (v), (order))
#define atomic_exchange(p, v) __atomic_exchange_n((p), (v), __ATOMIC_SEQ_CST)
#define atomic_exchange_explicit(p, v, order) \
  __atomic_exchange_n((p), (v), (order))
#define atomic_fetch_add(p, v) __atomic_fetch_add((p), (v), __ATOMIC_SEQ_CST)
#define atomic_fetch_add_explicit(p, v, order) \
  __atomic_fetch_add((p), (v), (order))
#define atomic_fetch_sub(p, v) __atomic_fetch_sub((p), (v), __ATOMIC_SEQ_CST)
#define atomic_fetch_sub_explicit(p, v, order) \
  __atomic_fetch_sub((p), (v), (order))
#define atomic_fetch_or(p, v) __atomic_fetch_or((p), (v), __ATOMIC_SEQ_CST)
#define atomic_fetch_or_explicit(p, v, order) \
  __atomic_fetch_or((p), (v), (order))
#define atomic_fetch_and(p, v) __atomic_fetch_and((p), (v), __ATOMIC_SEQ_CST)
#define atomic_fetch_and_explicit(p, v, order) \
  __atomic_fetch_and((p), (v), (order))

#define __udf(x) __builtin_trap()
