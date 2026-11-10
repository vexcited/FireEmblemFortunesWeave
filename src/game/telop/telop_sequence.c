#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1374ee0(_QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 TelopSequence_1374e00_alt1(_QWORD) __asm__("TelopSequence_1374e00");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 TelopSequence_1374cc0(_BYTE* a1, char a2);
__int64 TelopSequence_1374e00(_BYTE* a1);
__int64 TelopSequence_1375be0(_QWORD* a1);

__int64 TelopSequence_1374cc0(_BYTE* a1, char a2)
{
  _BYTE* v2;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = a1 + 168;
  v5 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
  GameRoutine_1560070(&v12, v2, v5);
  result = v13;
  if (v13 != 0) {
    v7 = std___1___shared_weak_count_lock(v13);
    if (v7 != 0) {
      v8 = v12;
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v9);
      }
      result = v13;
      if (v13 != 0) {
        result = std___1___shared_weak_count___release_weak(v13);
      }
      if (v8 != 0) {
        v10 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
        result = ui_LayoutAccessor_IsPaneVisible(v2, v10);
        if ((a2 & 1) != (result & 1)) {
          LayoutAccessor_155d940(a1 + 440);
          if ((a2 & 1) != 0) {
            TelopSequence_1374e00_alt1(a1);
          }
          else {
            LayoutAccessor_155cda0(a1 + 440, "Out", 0);
            LayoutAccessor_155d940(a1 + 440);
            a1[800] = 0;
          }
          v11 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
          return ui_LayoutAccessor_SetPaneVisible(v2, v11, a2 & 1);
        }
      }
    }
    else {
      result = v13;
      if (v13 != 0) {
        return std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return result;
}

__int64 TelopSequence_1374e00(_BYTE* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
  if (result != 0) {
    v3 = result;
    GameRoutine_1560070(&v7, a1 + 168, result);
    result = v8;
    if (v8 != 0) {
      v4 = std___1___shared_weak_count_lock(v8);
      if (v4 != 0) {
        v5 = v7;
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v6);
        }
        result = v8;
        if (v8 != 0) {
          result = std___1___shared_weak_count___release_weak(v8);
        }
        if (v5 != 0 && (a1[800] & 1) == 0) {
          GameRoutine_1374ee0(a1, v3);
          result = LayoutAccessor_155cda0(a1 + 440, "In", 0);
          a1[800] = 1;
        }
      }
      else {
        result = v8;
        if (v8 != 0) {
          return std___1___shared_weak_count___release_weak(v8);
        }
      }
    }
  }
  return result;
}

__int64 TelopSequence_1375be0(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;

  if (a1[57] != 0) {
    v3 = a1[56];
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = a1[55];
        if (v5 != 0) {
          v1 = *(unsigned __int8*)(v5 + 24);
          v6 = v5 + 152;
          if (v1 == 0) {
            v6 = 0;
          }
          v7 = v6 != a1[57];
        }
        else {
          v7 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v7) {
            goto LABEL_11;
          }
        }
        else {
          v9 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v9);
          if (v7) {
            goto LABEL_11;
          }
        }
        if ((v1 & 1) == 0) {
          goto LABEL_18;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v8 = a1[56];
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_18;
      }
    LABEL_16:
      v10 = a1[68];
      if (v10 != 0 && *(float*)(v10 + 60) != 0.0) {
        goto LABEL_20;
      }
    }
  }
LABEL_18:
  v11 = (*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1);
  if (a1[99] == 0 || (GameRoutine_173fe30() & 1) == 0) {
    v12 = LayoutAccessor_1563280(a1 + 21, v11, 0) ^ 1;
    return v12 & 1;
  }
LABEL_20:
  v12 = 0;
  return v12 & 1;
}

#pragma GCC visibility pop
