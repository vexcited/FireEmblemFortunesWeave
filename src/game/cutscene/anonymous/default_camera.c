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
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  result = std___1___shared_weak_count___release_weak(v3);
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
