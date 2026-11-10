#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a6430(__int64, char*, char*, __int64);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
extern char* GameData_2108ae8[10];
extern char* GameData_2108d90[5];
__int64 IconGimmick_18cae30(__int64* a1, unsigned int a2);
bool IconGimmick_18caf00(_QWORD* a1);
__int64 IconGimmick_18cb040(__int64 result, __int64* a2);

__int64 IconGimmick_18cae30(__int64* a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;

  if (a2 != -1 && *((_DWORD*)a1 + 269) != a2) {
    v4 = ui_LayoutAccessor_FindPane(a1 + 11, "Icon");
    if (v4 != 0) {
      v5 = __dynamic_cast(v4, GameData_212d670[0], GameData_212d678[0], 0);
      if (v5 != 0) {
        if (a2 > 4) {
          v6 = &GameData_1a9f09e;
        }
        else {
          v6 = GameData_2108d90[a2];
        }
        GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
      }
    }
  }
  v7 = *a1;
  *((_DWORD*)a1 + 269) = a2;
  return (*(__int64 (**)(__int64*, bool))(v7 + 40))(a1, a2 != -1);
}

bool IconGimmick_18caf00(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = a1[40];
  if (v4 == 0) {
    return *((_DWORD*)a1 + 269) != -1;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return *((_DWORD*)a1 + 269) != -1;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && *((_DWORD*)a1 + 269) != -1;
}

__int64 IconGimmick_18cb040(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char** v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *(unsigned int*)(result + 1076);
  if ((unsigned int)v2 <= 4 && a2[1] != 0) {
    v3 = result;
    result = std___1___shared_weak_count_lock(a2[1]);
    if (result != 0) {
      v5 = v3;
      v6 = *a2;
      v7 = result;
      if (v6 != 0) {
        v8 = &GameData_2108ae8[2 * v2];
        v9 = *v8;
        v10 = v8[1];
        v11 = ui_LayoutAccessor_FindPane(v5 + 88, "Icon");
        if (v11 != 0 && (v12 = __dynamic_cast(v11, GameData_212d670[0],
                                              GameData_212d678[0], 0)) != 0) {
          v13 = *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v12) + 24) + 8LL);
        }
        else {
          v13 = 0;
        }
        result = GameRoutine_18a6430(v6, v9, v10, v13);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
