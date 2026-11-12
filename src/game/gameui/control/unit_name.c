#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_1886290(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
extern _UNKNOWN GameData_22416d8;
extern _UNKNOWN* GameData_2130ea8;
extern __int64 GameData_22416d0;
extern __int64* GameData_212e348;
extern __int64* GameData_2130ea0;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64* UnitName_19ab340(__int64 a1);
__int64* UnitName_19ab4a0(__int64 a1, __int64 a2);
__int64* UnitName_19ab5c0(__int64 a1, __int64 a2);
__int64 GameRoutine_1888c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_211f638[])();
extern __int64 (*GameData_211f660[])();
extern __int64 (*GameData_211f6a0[])();
extern __int64 (*GameData_211f878[])();
extern __int64 (*GameData_211f8a0[])();
extern __int64 (
    *game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr
        [])();
extern __int64 (*game_gameui_control_UnitName_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void UnitName_19ab100(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3);
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

__attribute__((swiftcall)) void UnitName_19ab100(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  const char* v13;
  __int64 v14;
  struct {
    const char* v15;
    unsigned __int64 v16;
  } v15_;

  v8 = (_QWORD*)LayoutEx_579160_alt1(1120, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_211f6a0;
  GameRoutine_18b26a0_alt1((__int64)(v8 + 3), a1, a2, a3);
  v10[138] = 0;
  v10[139] = 0;
  v10[3] = game_gameui_control_UnitName_vtable;
  v10[12] = GameData_211f638;
  v10[132] = GameData_211f660;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *v12 = "Name";
  v12[1] = 4;
  v13 = (const char*)GameRoutine_576600_alt1(a1, "Name");
  if (v13 != nullptr) {
    v15_.v15 = v13;
    v15_.v16 = strlen_alt1(v13);
    if (v15_.v16 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), (__int64)v12, (__int64)&v15_.v15);
    }
  }
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v14, (__int64)v12);
  *a4 = v9;
  a4[1] = v10;
  v10[3] =
      game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr;
  v10[12] = GameData_211f878;
  v10[132] = GameData_211f8a0;
}

__int64* UnitName_19ab340(__int64 a1)
{
  __int64* result;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  _QWORD v6[4];
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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

  v6[0] = "Name";
  v6[1] = 4;
  result = (__int64*)Element_1886290(a1, v6);
  v2 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8);
    if ((_DWORD)result != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v2 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v2 + 16))(v2);
    if (result == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != GameData_2130ea0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v9 = -1;
      v10 = -1;
      v11 = -1;
      v12 = -1;
      v4 = *msg_MessageManager_instance__ptr[0];
      v13 = -1;
      v14 = -1;
      v15 = -1;
      v16 = -1;
      v17 = -1;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v6[0] = GameData_212e348 + 2;
      v6[1] = 0xFFFF0001FFFF0000LL;
      v6[2] = 0xFFFF0004FFFF0002LL;
      v6[3] = 0xFFFF0006FFFF0005LL;
      v21 = 8;
      v7 = -65529;
      v8 = -65528;
      v5 = GameRoutine_a4dbe0(v4, "MID_Sys_ValueEmptyLong", 0, v6);
      return (__int64*)GameRoutine_156c5d0(v2, v5, 0);
    }
  }
  return result;
}

__int64* UnitName_19ab4a0(__int64 a1, __int64 a2)
{
  __int64* result;
  __int64* v5;
  __int64 v7;
  _QWORD v8[2];

  if (a2 != 0) {
    v8[0] = "Name";
    v8[1] = 4;
    result = (__int64*)Element_1886290(a1, v8);
    v5 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                              memory_order_acquire) &
         1) == 0) {
      result = (__int64*)__cxa_guard_acquire(&GameData_22416d8);
      if ((_DWORD)result != 0) {
        GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
        result = (__int64*)__cxa_guard_release(&GameData_22416d8);
      }
    }
    if (v5 != nullptr) {
      result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
      if (result == &GameData_22416d0) {
        goto LABEL_11;
      }
      do {
        result = (__int64*)*result;
      } while (result != &GameData_22416d0 && result != nullptr);
      if (result != nullptr) {
      LABEL_11:
        if (*(_BYTE*)(a2 + 2136) != 0) {
          v7 = GameRoutine_97b2f0(a2 + 2104);
        }
        else {
          v7 = GameRoutine_67ed20(*(_QWORD*)(a2 + 392));
        }
        result = (__int64*)GameRoutine_156c5d0(v5, v7, 0);
      }
    }
  }
  else {
    result = UnitName_19ab340(a1);
  }
  *(_QWORD*)(a1 + 1080) = a2;
  return result;
}

__int64* UnitName_19ab5c0(__int64 a1, __int64 a2)
{
  __int64* result;
  __int64* v5;
  __int64 v7;
  _QWORD v8[2];

  if (a2 != 0) {
    v8[0] = "Name";
    v8[1] = 4;
    result = (__int64*)Element_1886290(a1, v8);
    v5 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                              memory_order_acquire) &
         1) == 0) {
      result = (__int64*)__cxa_guard_acquire(&GameData_22416d8);
      if ((_DWORD)result != 0) {
        GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
        result = (__int64*)__cxa_guard_release(&GameData_22416d8);
      }
    }
    if (v5 != nullptr) {
      result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
      if (result == &GameData_22416d0) {
        goto LABEL_11;
      }
      do {
        result = (__int64*)*result;
      } while (result != &GameData_22416d0 && result != nullptr);
      if (result != nullptr) {
      LABEL_11:
        v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 816LL))(a2);
        result = (__int64*)GameRoutine_156c5d0(v5, v7, 0);
      }
    }
  }
  else {
    result = UnitName_19ab340(a1);
  }
  *(_QWORD*)(a1 + 1088) = a2;
  return result;
}

#pragma GCC visibility pop
