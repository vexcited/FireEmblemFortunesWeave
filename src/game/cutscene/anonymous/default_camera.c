#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a831e0;
extern __int128 GameData_21a6120;
extern __int64 GameData_212c638;
extern __int64 GameData_21c6978;
__attribute__((swiftcall)) void DefaultCamera_DeletingDestructor(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void DefaultCamera_Unknown2(PSEUDO_X8 x8_);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN GameData_21a55c0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__attribute__((swiftcall)) void DefaultCamera_Destructor(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void DefaultCamera_Destructor(PSEUDO_X8 x8_)
{

#pragma clang fp contract(off)
  _OWORD* a1 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _OWORD* v5;
  long double v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  _OWORD* v10;
  _OWORD* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v1 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) != v1) {
    v2 = *(_QWORD*)(v1 - 8);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 24);
      v4 = *(_QWORD*)(v2 + 32);
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v3 != 0) {
        v5 = a1;
        v6 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v3 + 16LL))(v3),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
        a1 = v5;
        *(long double*)v5 = v6;
        v5[1] = v7;
        v5[2] = v8;
        v5[3] = v9;
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = a1;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v4),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
        a1 = v10;
        if (v3 != 0) {
          return;
        }
      }
      else if (v3 != 0) {
        return;
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v11 = a1;
    v12 = __cxa_guard_acquire_alt1((__int64)&GameData_21a55c0),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
    a1 = v11;
    if (v12 != 0) {
      v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v13;
      v14 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v14;
      v15 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v15;
      v16 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v16;
      __cxa_guard_release_alt1((__int64)&GameData_21a55c0),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
      a1 = v11;
    }
  }
  a1[2] = GameData_21a55a0;
  a1[3] = GameData_21a55b0;
  *a1 = GameData_21a5580;
  a1[1] = GameData_21a5590;
}

__attribute__((swiftcall)) void DefaultCamera_DeletingDestructor(PSEUDO_X8 x8_)
{
  _OWORD* a1 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _OWORD* v5;
  _OWORD* v6;
  int v7;
  __int64 v8;

  v1 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) != v1) {
    v2 = *(_QWORD*)(v1 - 8);
    if (v2 != 0) {
      v4 = *(_QWORD*)(v2 + 24);
      v3 = *(_QWORD*)(v2 + 32);
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v4 != 0) {
        *a1 = *(_OWORD*)(v4 + 16);
      }
      if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v5 = a1;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
        a1 = v5;
        if (v4 != 0) {
          return;
        }
      }
      else if (v4 != 0) {
        return;
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v6 = a1;
    v7 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v6;
    if (v7 != 0) {
      v8 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v8;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v6;
    }
  }
  *a1 = GameData_21a6120;
}

__attribute__((swiftcall)) void DefaultCamera_Unknown2(PSEUDO_X8 x8_)
{
  _OWORD* a1 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _OWORD* v5;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) == v1) {
    goto LABEL_10;
  }
  v2 = *(_QWORD*)(v1 - 8);
  if (v2 == 0) {
    goto LABEL_10;
  }
  v4 = *(_QWORD*)(v2 + 24);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 != 0) {
    *a1 = *(_OWORD*)(v4 + 32);
  }
  if (v3 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != 0) {
      result;
      return;
    }
    goto LABEL_10;
  }
  v5 = a1;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  result = std___1___shared_weak_count___release_weak_alt1(v3);
  a1 = v5;
  if (v4 == 0) {
  LABEL_10:
    *a1 = GameData_1a831e0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
