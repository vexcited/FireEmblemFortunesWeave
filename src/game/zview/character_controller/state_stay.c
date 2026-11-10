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

__int64 StateStay_Unknown3(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
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
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  long double v37;
  unsigned __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 result;

  *(_BYTE*)(a1 + 16) =
      (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 384LL) & 0x40000000) !=
      0;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
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
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 16, 16, 0);
  *v6 = game_zview_CharacterController_StateStay_WaitStick_vtable;
  v6[1] = a1;
  v8 = (_QWORD*)v4[4];
  v7 = v4[5];
  if ((unsigned __int64)v8 >= v7) {
    v10 = v4[3];
    v11 = (char*)v8 - v10;
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
      v17 = fw_memory_HeapManager_Allocate(*v2, 8 * v15, 16, 0);
      v6 = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v15;
    v19 = (__int64)&v11[v17 + -8 * v12];
    *(_QWORD*)&v11[v17] = v6;
    v9 = (__int64)&v11[v17 + 8];
    memcpy(v19, v10, v11);
    v4[3] = v19;
    v4[4] = v9;
    v4[5] = v18;
    if (v10 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v20, v10);
    }
  }
  else {
    *v8 = v6;
    v9 = (__int64)(v8 + 1);
  }
  v4[4] = v9;
  v21 = *(_QWORD**)(a1 + 24);
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 16, 16, 0);
  *v6 = game_zview_CharacterController_StateStay_Main_vtable;
  v6[1] = a1;
  v23 = (_QWORD*)v21[4];
  v22 = v21[5];
  if ((unsigned __int64)v23 >= v22) {
    v25 = v21[3];
    v26 = (char*)v23 - v25;
    v27 = ((__int64)v23 - v25) >> 3;
    v28 = v27 + 1;
    if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v29 = v22 - v25;
    if (v29 >> 2 > v28) {
      v28 = v29 >> 2;
    }
    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 >> 61 != 0) {
        goto LABEL_59;
      }
      v31 = v6;
      v32 = fw_memory_HeapManager_Allocate(*v2, 8 * v30, 16, 0);
      v6 = v31;
    }
    else {
      v32 = 0;
    }
    v33 = v32 + 8 * v30;
    v34 = (__int64)&v26[v32 + -8 * v27];
    *(_QWORD*)&v26[v32] = v6;
    v24 = (__int64)&v26[v32 + 8];
    memcpy(v34, v25, v26);
    v21[3] = v34;
    v21[4] = v24;
    v21[5] = v33;
    if (v25 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v35, v25);
    }
  }
  else {
    *v23 = v6;
    v24 = (__int64)(v23 + 1);
  }
  v21[4] = v24;
  v36 = *(_QWORD**)(a1 + 24);
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 24, 16, 0);
  v6[1] = a1;
  v6[2] = 0;
  *v6 = game_zview_CharacterController_StateStay_ToStayPos_vtable;
  v39 = (_QWORD*)v36[4];
  v38 = v36[5];
  if ((unsigned __int64)v39 < v38) {
    *v39 = v6;
    v40 = (__int64)(v39 + 1);
    goto LABEL_51;
  }
  v41 = v36[3];
  v42 = (char*)v39 - v41;
  v43 = ((__int64)v39 - v41) >> 3;
  v44 = v43 + 1;
  if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
  LABEL_58:
    GameRoutine_cfa280();
  }
  v45 = v38 - v41;
  if (v45 >> 2 > v44) {
    v44 = v45 >> 2;
  }
  if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
    v46 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v46 = v44;
  }
  if (v46 != 0) {
    if (v46 >> 61 == 0) {
      v47 = v6;
      v48 = fw_memory_HeapManager_Allocate(*v2, 8 * v46, 16, 0);
      v6 = v47;
      goto LABEL_47;
    }
  LABEL_59:
    GameRoutine_60a210(v6);
  }
  v48 = 0;

LABEL_47:
  v49 = v48 + 8 * v46;
  v50 = (__int64)&v42[v48 + -8 * v43];
  *(_QWORD*)&v42[v48] = v6;
  v40 = (__int64)&v42[v48 + 8];
  memcpy(v50, v41, v42);
  v36[3] = v50;
  v36[4] = v40;
  v36[5] = v49;
  if (v41 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v51, v41);
  }

LABEL_51:
  v36[4] = v40;
  result = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 20) = 1;
  }
  if ((*(_BYTE*)(result + 96) & 1) == 0 && (*(_BYTE*)(result + 97) & 1) != 0) {
    result = GameRoutine_cfa2a0(result, v37);
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
