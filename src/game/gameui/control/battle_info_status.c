#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_1886290(_QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_18a82e0(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64* GameRoutine_19ad4e0(__int64);
extern _UNKNOWN GameData_1a8b170;
extern _UNKNOWN GameData_2259520;
extern _UNKNOWN* GameData_2130ea8;
extern __int64 GameData_2259510;
extern __int64 GameData_2259518;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* GameData_2130ea0;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64* BattleInfoStatus_19ad660(__int64 a1, __int64 a2, int a3, char a4);
bool BattleInfoStatus_19ad8a0(_QWORD* a1);
__int64 BattleInfoStatus_19ad9c0(__int64 result, __int64* a2);

__int64* BattleInfoStatus_19ad660(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64* result;
  __int64* v9;
  __int64 v11;
  __int64 v12;
  int v13;
  const char* v14;
  _QWORD v15[4];
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  if (a2 != 0) {
    v15[0] = "Num";
    v15[1] = 3;
    result = (__int64*)Element_1886290(a1, v15);
    v9 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                              memory_order_acquire) &
         1) == 0) {
      result = (__int64*)__cxa_guard_acquire(GameData_2130ea8);
      if ((_DWORD)result != 0) {
        *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
        result = (__int64*)__cxa_guard_release(GameData_2130ea8);
      }
    }
    if (v9 != nullptr) {
      result = (__int64*)(*(__int64 (**)(__int64*))(*v9 + 16))(v9);
      if (result == GameData_2130ea0) {
        goto LABEL_11;
      }
      do {
        result = (__int64*)*result;
      } while (result != GameData_2130ea0 && result != nullptr);
      if (result != nullptr) {
      LABEL_11:
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v11 = *msg_MessageManager_instance__ptr[0];
        v22 = -1;
        v23 = -1;
        v24 = -1;
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v15[0] = GameData_212e348 + 2;
        v15[1] = 0xFFFF0001FFFF0000LL;
        v15[2] = 0xFFFF0004FFFF0002LL;
        v15[3] = 0xFFFF0006FFFF0005LL;
        v30 = 8;
        v16 = -65529;
        v17 = -65528;
        GameRoutine_a4dbe0(v11, "MID_Sys_Percent", 0, v15);
        result = (__int64*)GameRoutine_156c910(v9, "%d%s", 2,
                                               (const char*)(unsigned int)a3);
      }
    }
    if ((a4 & 1) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259520,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_2259520) != 0) {
        GameData_2259518 = (__int64)&GameData_1a8b170;
        GameData_2259510 = game_HashString(&GameData_1a8b170);
        __cxa_guard_release(&GameData_2259520);
      }
      if (game_GameModeData_instance_ != 0 &&
          (v12 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48),
               &GameData_2259510)) != 0) {
        v13 = *(_DWORD*)(v12 + 32);
      }
      else {
        v13 = 100;
      }
      if (a3 >= v13) {
        v14 = "Caution_On";
      }
      else {
        v14 = "Caution_Off";
      }
      result = (__int64*)LayoutAccessor_1562cf0(a1 + 88, v14);
    }
  }
  else {
    result = GameRoutine_19ad4e0(a1);
  }
  *(_QWORD*)(a1 + 1080) = a2;
  *(_DWORD*)(a1 + 1088) = a3;
  *(_BYTE*)(a1 + 1092) = a4 & 1;
  return result;
}

bool BattleInfoStatus_19ad8a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
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
    return a1[135] != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return a1[135] != 0;
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
  return (v8 & 1) != 0 && a1[135] != 0;
}

__int64 BattleInfoStatus_19ad9c0(__int64 result, __int64* a2)
{
  __int64 v3;

  if (*(_QWORD*)(result + 1080) != 0) {
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v3 = result;
        result = *a2;
        if (*a2 != 0) {
          result = GameRoutine_18a82e0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          return std___1___shared_weak_count___release_weak(v3);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
