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
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1888c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_21202f0[])();
extern __int64 (*GameData_2120318[])();
extern __int64 (*GameData_2120378[])();
extern __int64 (*GameData_2120550[])();
extern __int64 (*GameData_2120578[])();
extern __int64 (*game_gameui_control_BattleInfoStatus_vtable[])();
extern __int64 (
    *game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr
        [])();
extern __int64 GameData_2120338;
extern __int64 GameData_2120348;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2120330;
extern char* GameData_2120340;
__attribute__((swiftcall)) void
BattleInfoStatus_19ad260(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__int64* BattleInfoStatus_19ad4e0(__int64 a1);
__int64 GameRoutine_18b26a0_alt1(__int64, __int64, __int64,
                                 __int64) __asm__("GameRoutine_18b26a0");
__int64 GameRoutine_576600_alt1(__int64,
                                const char*) __asm__("GameRoutine_576600");
__int64 LayoutEx_579160_alt1(__int64, __int64) __asm__("LayoutEx_579160");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 ui_control_1888c80(__int64, __int64, __int64);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void

BattleInfoStatus_19ad260(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  const char* v16;
  __int64 v17;
  struct {
    const char* v18;
    unsigned __int64 v19;
  } v18_;

  v8 = (_QWORD*)LayoutEx_579160_alt1(1120, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2120378;
  GameRoutine_18b26a0_alt1((__int64)(v8 + 3), a1, a2, a3);
  v10[138] = 0;
  v10[3] = game_gameui_control_BattleInfoStatus_vtable;
  v10[12] = GameData_21202f0;
  v10[132] = GameData_2120318;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v13 = GameData_2120338;
  *(_QWORD*)v12 = GameData_2120330;
  *(_QWORD*)(v12 + 8) = v13;
  v14 = GameData_2120348;
  *(_QWORD*)(v12 + 16) = GameData_2120340;
  *(_QWORD*)(v12 + 24) = v14;
  v15 = (const char*)GameRoutine_576600_alt1(a1, "Num");
  if (v15 != nullptr) {
    v18_.v18 = v15;
    v18_.v19 = strlen_alt1(v15);
    if (v18_.v19 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12, (__int64)&v18_.v18);
    }
  }
  v16 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v12 + 16));
  if (v16 != nullptr) {
    v18_.v18 = v16;
    v18_.v19 = strlen_alt1(v16);
    if (v18_.v19 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 16, (__int64)&v18_.v18);
    }
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v17, v12);
  *a4 = v9;
  a4[1] = v10;
  v10[3] =
      game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr;
  v10[12] = GameData_2120550;
  v10[132] = GameData_2120578;
}

__int64* BattleInfoStatus_19ad4e0(__int64 a1)
{
  __int64* result;
  __int64* v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v9[0] = "Num";
  v9[1] = 3;
  result = (__int64*)Element_1886290(a1, v9);
  v3 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8);
    if ((_DWORD)result != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v3 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v3 + 16))(v3);
    if (result == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != GameData_2130ea0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v5 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v6 = Pane_58f8a0(v3);
      if (v6 != 0) {
        *(_DWORD*)(v6 + 12) = v5;
      }
      v12 = -1;
      v13 = -1;
      v14 = -1;
      v15 = -1;
      v7 = *msg_MessageManager_instance__ptr[0];
      v16 = -1;
      v17 = -1;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v9[0] = GameData_212e348 + 2;
      v9[1] = 0xFFFF0001FFFF0000LL;
      v9[2] = 0xFFFF0004FFFF0002LL;
      v9[3] = 0xFFFF0006FFFF0005LL;
      v24 = 8;
      v10 = -65529;
      v11 = -65528;
      v8 = GameRoutine_a4dbe0(v7, "MID_Sys_ValueEmpty", 0, v9);
      GameRoutine_156c5d0(v3, v8, 0);
      return (__int64*)LayoutAccessor_1562cf0(a1 + 88, "Caution_Off");
    }
  }
  return result;
}

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
