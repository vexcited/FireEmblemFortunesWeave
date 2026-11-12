#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a9f60(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 StatusTotal_19acc40(_QWORD* a1);
__int64 StatusTotal_19acd60(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1888c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_211fec0[])();
extern __int64 (*GameData_211fee8[])();
extern __int64 (*GameData_211ff28[])();
extern __int64 (*GameData_2120100[])();
extern __int64 (*GameData_2120128[])();
extern __int64 (
    *game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr
        [])();
extern __int64 (*game_gameui_control_StatusTotal_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void StatusTotal_19ac7b0(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2, __int64 a3);
__int64 StatusTotal_19ac9e0(__int64 a1, int a2, int a3, int a4,
                            unsigned __int8 a5, int a6);
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

__attribute__((swiftcall)) void StatusTotal_19ac7b0(PSEUDO_X8 x8_, __int64 a1,
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

  v8 = (_QWORD*)LayoutEx_579160_alt1(1104, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_211ff28;
  GameRoutine_18b26a0_alt1((__int64)(v8 + 3), a1, a2, a3);
  *((_DWORD*)v10 + 275) = 0;
  v10[3] = game_gameui_control_StatusTotal_vtable;
  v10[12] = GameData_211fec0;
  v10[132] = GameData_211fee8;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *v12 = "L_Num";
  v12[1] = 5;
  v13 = (const char*)GameRoutine_576600_alt1(a1, "L_Num");
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
  v10[12] = GameData_2120100;
  v10[132] = GameData_2120128;
}

__int64 StatusTotal_19ac9e0(__int64 a1, int a2, int a3, int a4,
                            unsigned __int8 a5, int a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  const char* v26;
  char v27;
  char v28;
  int v29;
  char v31;
  int v32;
  __int64 v33;
  __int64 v34;

  LayoutAccessor_1560070((void*)(&v33), a1 + 88, "L_Num");
  result = v34;
  if (v34 == 0) {
    goto LABEL_46;
  }
  v13 = std___1___shared_weak_count_lock(v34);
  v14 = v33;
  result = v34;
  if (v34 != 0) {
    result = std___1___shared_weak_count___release_weak(v34);
  }
  if (v13 == 0 || v14 == 0) {
    if (v13 == 0) {
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v16 = (a2 > a3) & a5;
  v17 = ui_LayoutAccessor_FindPane(v14, "T_Num");
  if (v17 != 0) {
    v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
    if (v18 != 0) {
      v19 = v18;
      if (a2 == a3 || (a5 & 1) == 0) {
        v20 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        v21 = Pane_58f8a0(v18);
        if (v21 != 0) {
        LABEL_20:
          *(_DWORD*)(v21 + 12) = v20;
        }
      }
      else {
        v20 = *(_DWORD*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                         (_QWORD)GameData_212da30);
        v32 = *(_DWORD*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                         (_QWORD)GameData_212da30 + 4);
        v21 = Pane_58f8a0(v18);
        if (v21 != 0) {
          if (((a2 > a3) & a5) != 0) {
            v20 = v32;
          }
          goto LABEL_20;
        }
      }
      GameRoutine_156c910(v19, "%d", 1);
      v16 = (a2 > a3) & a5;
    }
  }
  v22 = ui_LayoutAccessor_FindPane(v14, "IconUpDown");
  if (v22 != 0) {
    v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
    if (v23 != 0) {
      v24 = *(_BYTE*)(v23 + 88);
      if (a2 == a3 || (a5 & 1) == 0) {
        v28 = v24 & 0xFE;
      }
      else {
        v25 = v23;
        *(_BYTE*)(v23 + 88) = v24 | 1;
        if (v16 != 0) {
          v26 = "Up";
        }
        else {
          v26 = "Down";
        }
        LayoutAccessor_1562680(v14, v26, 1.0f);
        v27 = *(_BYTE*)(v25 + 88);
        v23 = v25;
        *(_DWORD*)(v25 + 68) = 0;
        v28 = v27 | 0x10;
      }
      *(_BYTE*)(v23 + 88) = v28;
    }
  }
  result = ui_LayoutAccessor_FindPane(v14, "IconMax");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      if (a6 >= 0) {
        v29 = a6;
      }
      else {
        v29 = a3;
      }
      if (a4 <= 0 || v29 < a4) {
        v31 = *(_BYTE*)(result + 88) & 0xFE;
      }
      else {
        v31 = (*(_BYTE*)(result + 88) & 0xFE) + 1;
      }
      *(_BYTE*)(result + 88) = v31;
    }
  }
LABEL_44:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
LABEL_46:
  *(_DWORD*)(a1 + 1076) = a2;
  return result;
}

__int64 StatusTotal_19acc40(_QWORD* a1)
{
  __int64 v2;
  char v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) != 0 &&
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) != 0) {
    v2 = *(_QWORD*)(a1[1] + 24LL);
    while (1) {
      v2 = *(_QWORD*)(v2 + 24);
      if (v2 == 0) {
        break;
      }
      if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
        goto LABEL_6;
      }
    }
    v5 = a1[40];
    if (v5 != 0 &&
        (v6 = a1[39], v7 = a1[40],
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                   memory_order_relaxed),
         v8 = std___1___shared_weak_count_lock(v7),
         std___1___shared_weak_count___release_weak(v5), v8 != 0)) {
      if (v6 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 144LL))(v6) & 1) != 0) {
          LODWORD(v6) = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6) ^ 1;
        }
        else {
          LOBYTE(v6) = 1;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    else {
      LOBYTE(v6) = 0;
    }
    v3 = v6 ^ 1;
  }
  else {
  LABEL_6:
    v3 = 0;
  }
  return v3 & 1;
}

__int64 StatusTotal_19acd60(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        result = GameRoutine_18a9f60(result, *(unsigned int*)(a1 + 1076));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
