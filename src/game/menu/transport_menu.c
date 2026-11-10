#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20aa0d0;
extern __int64 GameData_21c99b8;
extern __int64* GameData_212e008[9];
__int64 TransportMenu_170b5f0(__int64 a1);
bool game_menu_TransportMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 game_menu_TransportMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                             _QWORD* a2,
                                                             _QWORD** a3);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 GameRoutine_15724c0(__int64*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20aa298[7];
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 TransportMenu_170b4c0(__int64 a1);

__int64 TransportMenu_170b4c0(__int64 a1)
{
  int v1;
  __int64 v2;
  unsigned __int8 v4;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = v1 - 1;
  if (v4 > 6u) {
    v5 = "MID_Menu_All";
  }
  else {
    v5 = GameData_20aa298[v4];
  }
  v6 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], v5, 0);
  if (v6 != nullptr) {
    v7 = (__int64)v6;
    v8 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952),
                                       (__int64)"Menu_T_Type");
    if (v8 != 0) {
      GameRoutine_156c5d0(v8, v7, 0);
    }
  }
  v9 = LayoutAccessor_155fbe0((__int64*)(a1 + 952), (__int64)"L_Num");
  return GameRoutine_15724c0(v9);
}

__int64 TransportMenu_170b5f0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20aa0d0, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070(&v7, a1 + 848, "L_ItemDetail");
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      result = v8;
      if (v8 != 0) {
        v5 = std___1___shared_weak_count_lock(v8);
        if (v5 != 0) {
          v6 = v5;
          if (v7 != 0) {
            GameRoutine_15d2540(v7, v4, 0);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            std___1___shared_weak_count___release_weak(v6);
          }
        }
        result = v8;
        if (v8 != 0) {
          return std___1___shared_weak_count___release_weak(v8);
        }
      }
    }
  }
  return result;
}

bool game_menu_TransportMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  int v3;
  __int64 v4;

  v3 = **(unsigned __int8**)(a1 + 8);
  v4 =
      *(unsigned __int16*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v3 == 16) {
    return (_DWORD)v4 != 0;
  }
  else {
    return **(unsigned __int8**)(a1 + 8) ==
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8 * v4) +
                               72LL);
  }
}

__int64 game_menu_TransportMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                             _QWORD* a2,
                                                             _QWORD** a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[3];
  char v11;
  _QWORD v12[3];
  char v13;

  v3 = *a2;
  v4 = *a3;
  v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  v6 = (*(__int64 (**)(_QWORD*))(*v4 + 560LL))(v4);
  v7 = *(_QWORD*)(v3 + 88);
  v12[2] = 0;
  v13 = 0;
  v10[2] = 0;
  v11 = 0;
  v12[0] = v5;
  v12[1] = v7;
  v8 = v4[11];
  v10[0] = v6;
  v10[1] = v8;
  return GameRoutine_19ef8e0(v12, v10) & 1;
}

#pragma GCC visibility pop
