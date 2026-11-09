#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_173fac0(__int64, char);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak();
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 TelopRecruitResult_Unknown39(_QWORD* a1);

__int64 TelopRecruitResult_Unknown39(_QWORD* a1)
{
  _DWORD* v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 result;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;

  v1 = (_DWORD*)a1[106];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    GameRoutine_14a1390(a1 + 106, 1);
  }
  v3 = a1[118];
  if (v3 != 0) {
    if (*(_QWORD*)(v3 + 216) != *(_QWORD*)(v3 + 208)) {
      v4 = 0;
      v5 = ui_LayoutAccessor_empty__ptr[0];
      do {
        if (*(_QWORD*)(v3 + 168) != 0) {
          v6 = *(__int64**)(v3 + 168);
        }
        else {
          v6 = v5;
        }
        v7 = game_util_Format("L_MotivationGauge%02d", (unsigned int)v4);
        v8 = GameRoutine_155fbe0(v6, v7);
        LODWORD(v9) = 1.0;
        GameRoutine_1562680(v8, "Out", v9);
        ++v4;
      } while (
          0xAAAAAAAAAAAAAAABLL *
              ((__int64)(*(_QWORD*)(v3 + 216) - *(_QWORD*)(v3 + 208)) >> 3) >
          v4);
    }
    *(_DWORD*)(v3 + 232) = 6;
  }
  result = a1[145];
  if (result != 0) {
    result = GameRoutine_173fac0(result, 0);
  }
  v11 = (_DWORD*)a1[149];
  if (*(_QWORD*)v11 != 0 && *(_DWORD*)(*(_QWORD*)v11 + 16LL) == v11[2]) {
    v12 = a1[150];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      v18 = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v18 = 0;
    }
    v17 = v11;
    result = GameRoutine_14a1520(&v17, 1);
    v13 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      result = std___1___shared_weak_count___release_weak();
    }
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      result = std___1___shared_weak_count___release_weak();
    }
    *(_QWORD*)a1[149] = 0;
  }
  v14 = (_DWORD*)a1[147];
  if (*(_QWORD*)v14 != 0 && *(_DWORD*)(*(_QWORD*)v14 + 16LL) == v14[2]) {
    v15 = a1[148];
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      v18 = v15;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v18 = 0;
    }
    v17 = v14;
    result = GameRoutine_14a1520(&v17, 1);
    v16 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = std___1___shared_weak_count___release_weak();
    }
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      result = std___1___shared_weak_count___release_weak();
    }
    *(_QWORD*)a1[147] = 0;
  }
  return result;
}

#pragma GCC visibility pop
