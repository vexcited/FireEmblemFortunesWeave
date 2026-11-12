#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cf4c10(__int64);
__int64 GameRoutine_cfa2a0(__int64 result, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 (*game_zview_CharacterController_StateStay_Main_vtable[])();
extern __int64 (*game_zview_CharacterController_StateStay_ToStayPos_vtable[])();
extern __int64 (*game_zview_CharacterController_StateStay_WaitStick_vtable[])();
extern __int64 (*game_zview_CharacterController_StateStay_vtable[])();
extern __int64 GameData_21d96b8;
extern __int64 GameData_22110ac;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ec58[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cfa280(void);
__int64 StateStay_Unknown3(__int64 a1);
_QWORD* StateStay_Unknown5(_QWORD* result);
__int64 StateStay_Unknown4(__int64 a1);
__int64 StateStay_DeletingDestructor(_QWORD* a1);
__int64 StateStay_Unknown2(__int64 a1);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_cfa280_alt1() __asm__("GameRoutine_cfa280");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 StateStay_Unknown3(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 result;

  *(_BYTE*)(a1 + 16) =
      (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 384LL) & 0x40000000) !=
      0;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v4 = v3;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[12] = 0;
  v3[13] = 0;
  *v3 = GameData_212ec58[0] + 2;
  v3[1] = 0;
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = v4;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    v4 = *(_QWORD**)(a1 + 24);
  }
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 16, 16, 0);
  *v6 = game_zview_CharacterController_StateStay_WaitStick_vtable;
  v6[1] = a1;
  v8 = (_QWORD*)v4[4];
  v7 = v4[5];
  if ((unsigned __int64)v8 >= v7) {
    v10 = v4[3];
    v11 = (unsigned __int64)v8 - v10;
    v12 = ((__int64)v8 - v10) >> 3;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v14 = v7 - v10;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v13;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        goto LABEL_59;
      }
      v16 = v6;
      v17 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v15, 16, 0);
      v6 = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v15;
    v19 = v17 + v11 - 8 * v12;
    *(_QWORD*)(v17 + v11) = v6;
    v9 = v17 + v11 + 8;
    memcpy_alt1(v19, v10, v11);
    v4[3] = v19;
    v4[4] = v9;
    v4[5] = v18;
    if (v10 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v20, v10);
    }
  }
  else {
    *v8 = v6;
    v9 = (__int64)(v8 + 1);
  }
  v4[4] = v9;
  v21 = *(_QWORD**)(a1 + 24);
  v22 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 16, 16, 0);
  *v22 = game_zview_CharacterController_StateStay_Main_vtable;
  v22[1] = a1;
  v24 = (_QWORD*)v21[4];
  v23 = v21[5];
  if ((unsigned __int64)v24 >= v23) {
    v26 = v21[3];
    v27 = (unsigned __int64)v24 - v26;
    v28 = ((__int64)v24 - v26) >> 3;
    v29 = v28 + 1;
    if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v30 = v23 - v26;
    if (v30 >> 2 > v29) {
      v29 = v30 >> 2;
    }
    if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
      v31 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v31 = v29;
    }
    if (v31 != 0) {
      if (v31 >> 61 != 0) {
        goto LABEL_59;
      }
      v32 = v22;
      v33 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v31, 16, 0);
      v22 = v32;
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v31;
    v35 = v33 + v27 - 8 * v28;
    *(_QWORD*)(v33 + v27) = v22;
    v25 = v33 + v27 + 8;
    memcpy_alt1(v35, v26, v27);
    v21[3] = v35;
    v21[4] = v25;
    v21[5] = v34;
    if (v26 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v2 + v36, v26);
    }
  }
  else {
    *v24 = v22;
    v25 = (__int64)(v24 + 1);
  }
  v21[4] = v25;
  v37 = *(_QWORD**)(a1 + 24);
  v38 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 24, 16, 0);
  v38[1] = a1;
  v38[2] = 0;
  *v38 = game_zview_CharacterController_StateStay_ToStayPos_vtable;
  v40 = (_QWORD*)v37[4];
  v39 = v37[5];
  if ((unsigned __int64)v40 < v39) {
    *v40 = v38;
    v41 = (__int64)(v40 + 1);
    goto LABEL_51;
  }
  v42 = v37[3];
  v43 = (unsigned __int64)v40 - v42;
  v44 = ((__int64)v40 - v42) >> 3;
  v45 = v44 + 1;
  if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
  LABEL_58:
    GameRoutine_cfa280_alt1();
  }
  v46 = v39 - v42;
  if (v46 >> 2 > v45) {
    v45 = v46 >> 2;
  }
  if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
    v47 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v47 = v45;
  }
  if (v47 != 0) {
    if (v47 >> 61 == 0) {
      v48 = v38;
      v49 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v47, 16, 0);
      v38 = v48;
      goto LABEL_47;
    }
  LABEL_59:
    GameRoutine_60a210_alt1();
  }
  v49 = 0;
LABEL_47:
  v50 = v49 + 8 * v47;
  v51 = v49 + v43 - 8 * v44;
  *(_QWORD*)(v49 + v43) = v38;
  v41 = v49 + v43 + 8;
  memcpy_alt1(v51, v42, v43);
  v37[3] = v51;
  v37[4] = v41;
  v37[5] = v50;
  if (v42 != 0) {
    v52 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v52, v42);
  }
LABEL_51:
  v37[4] = v41;
  result = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 20) = 1;
  }
  if ((*(_BYTE*)(result + 96) & 1) == 0 && (*(_BYTE*)(result + 97) & 1) != 0) {
    result = WaitRelease_cfa2a0(result);
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 128LL) |= 2u;
  return result;
}

_QWORD* StateStay_Unknown5(_QWORD* result)
{
  __int64 v1;
  int v2;
  _QWORD* v3;
  _QWORD* v4;

  if (*((_BYTE*)result + 16) == 1 && *((_BYTE*)result + 17) != 0) {
    *((_BYTE*)result + 17) = 0;
    v1 = GameData_21d96b8;
    v2 = *(_DWORD*)(GameData_21d96b8 + 40) - 1;
    *(_DWORD*)(GameData_21d96b8 + 40) = v2;
    if (v2 == 0) {
      v3 = result;
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 32) + 8LL))(v1 + 32);
      result = v3;
    }
  }
  v4 = (_QWORD*)result[3];
  result[3] = 0;
  if (v4 != nullptr) {
    return X8CALL_X0(
        _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                     *v4 + 8LL))((void*)v4, v4));
  }
  return result;
}

__int64 StateStay_Unknown4(__int64 a1)
{
  int v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v2 = __cxa_guard_acquire(&GameData_22110b8);
    a1 = v3;
    if (v2 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a1 = v3;
    }
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 584LL) = GameData_22110ac;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 600LL) = 0;
  return GameRoutine_cf4c10(*(_QWORD*)(a1 + 24));
}

__int64 StateStay_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_zview_CharacterController_StateStay_vtable;
  v2 = a1[3];
  a1[3] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 StateStay_Unknown2(__int64 a1)
{
  __int64 result;

  *(_WORD*)(a1 + 16) = 0;
  result = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  if (*(_BYTE*)(a1 + 40) == 1) {
    *(_BYTE*)(a1 + 40) = 0;
  }
  return result;
}

#pragma GCC visibility pop
