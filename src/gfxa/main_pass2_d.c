#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fcf3e0[])();
extern __int64 (*GameData_1fcf470[])();
extern __int64 (*GameData_1fcf500[])();
extern __int64 (*GameData_1fcf548[])();
extern __int64 (*GameData_1fcf5d8[])();
extern __int64 (*GameData_1fcf668[])();
extern __int64 (*GameData_1fcfa18[])();
extern __int64 (*GameData_1fcfaa8[])();
extern __int64 (*GameData_1fcfb38[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_b32f30(void);
__int64 gfxa_MainPass2D_SetupCapturePass(__int64 a1, __int64* a2);
__int64 gfxa_MainPass2D_SetupPrimivePass(__int64 a1, __int64* a2);
__int64 gfxa_MainPass2D_SetupSpinePass(__int64 a1, __int64* a2);

__int64 gfxa_MainPass2D_SetupCapturePass(__int64 a1, __int64* a2)
{
  int v2;
  _QWORD* v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];

  v2 = *((_DWORD*)a2 + 24);
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v7 = (char*)fw_memory_HeapManager_Allocate(*v5, 32, 16, 0);
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 80) = v2;
  *(_QWORD*)(v6 + 152) = a1;
  *(_QWORD*)(v6 + 16) = 24;
  *(_QWORD*)(v6 + 24) = v7;
  strcpy(v7, "CaptureUpscaledColorPass");
  *(_QWORD*)v6 = GameData_1fcf500;
  *(_QWORD*)(v6 + 8) = 33;
  *(_BYTE*)(v6 + 84) = 1;
  *(_QWORD*)(v6 + 96) = GameData_1fcf3e0;
  *(_QWORD*)(v6 + 144) = GameData_1fcf470;
  v9 = (__int64*)a2[1];
  v8 = a2[2];
  *(_QWORD*)(v6 + 128) = v6 + 96;
  *(_QWORD*)(v6 + 176) = v6 + 144;
  if ((unsigned __int64)v9 >= v8) {
    v11 = *a2;
    v12 = (__int64)v9 - *a2;
    v13 = (v12 >> 3) + 1;
    if (v13 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v14 = v8 - v11;
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
        GameRoutine_60a210();
      }
      v16 = fw_memory_HeapManager_Allocate(*v5, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v12 - 8 * (v12 >> 3);
    *(_QWORD*)(v16 + v12) = v6;
    v10 = v16 + v12 + 8;
    memcpy(v18, v11, v12);
    *a2 = v18;
    a2[1] = v10;
    a2[2] = v17;
    if (v11 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v5 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v19);
    }
  }
  else {
    *v9 = v6;
    v10 = (__int64)(v9 + 1);
  }
  a2[1] = v10;
  v20 = *(_QWORD*)(v10 - 8);
  v22[0] = a2;
  v22[1] = v20;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v20 + 16LL))(v20, v22);
}

__int64 gfxa_MainPass2D_SetupPrimivePass(__int64 a1, __int64* a2)
{
  int v2;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];

  v2 = *((_DWORD*)a2 + 24);
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  *(_DWORD*)(v6 + 80) = v2;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_BYTE*)(v6 + 8) = 30;
  *(_QWORD*)v6 = GameData_1fcf668;
  *(_BYTE*)(v6 + 84) = 1;
  strcpy((char*)(v6 + 9), "Primitive2DPass");
  *(_QWORD*)(v6 + 96) = GameData_1fcf548;
  *(_QWORD*)(v6 + 176) = v6 + 144;
  v8 = (__int64*)a2[1];
  v7 = a2[2];
  *(_QWORD*)(v6 + 128) = v6 + 96;
  *(_QWORD*)(v6 + 144) = GameData_1fcf5d8;
  *(_QWORD*)(v6 + 152) = a1;
  if ((unsigned __int64)v8 >= v7) {
    v10 = *a2;
    v11 = (__int64)v8 - *a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v13 = v7 - v10;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v12;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v15 = v6;
      v16 = fw_memory_HeapManager_Allocate(*v5, 8 * v14, 16, 0);
      v6 = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v6;
    v9 = v16 + v11 + 8;
    memcpy(v18, v10, v11);
    *a2 = v18;
    a2[1] = v9;
    a2[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v5 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v19);
    }
  }
  else {
    *v8 = v6;
    v9 = (__int64)(v8 + 1);
  }
  a2[1] = v9;
  v20 = *(_QWORD*)(v9 - 8);
  v22[0] = a2;
  v22[1] = v20;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v20 + 16LL))(v20, v22);
}

__int64 gfxa_MainPass2D_SetupSpinePass(__int64 a1, __int64* a2)
{
  int v2;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];

  v2 = *((_DWORD*)a2 + 24);
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  *(_DWORD*)(v6 + 80) = v2;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 152) = a1;
  *(_BYTE*)(v6 + 8) = 18;
  *(_BYTE*)(v6 + 84) = 1;
  *(_QWORD*)(v6 + 96) = GameData_1fcfa18;
  *(_QWORD*)(v6 + 128) = v6 + 96;
  strcpy((char*)(v6 + 9), "SpinePass");
  *(_QWORD*)v6 = GameData_1fcfb38;
  *(_QWORD*)(v6 + 144) = GameData_1fcfaa8;
  v8 = (__int64*)a2[1];
  v7 = a2[2];
  *(_QWORD*)(v6 + 176) = v6 + 144;
  if ((unsigned __int64)v8 >= v7) {
    v10 = *a2;
    v11 = (__int64)v8 - *a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v13 = v7 - v10;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v12;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v15 = v6;
      v16 = fw_memory_HeapManager_Allocate(*v5, 8 * v14, 16, 0);
      v6 = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v6;
    v9 = v16 + v11 + 8;
    memcpy(v18, v10, v11);
    *a2 = v18;
    a2[1] = v9;
    a2[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v5 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v19);
    }
  }
  else {
    *v8 = v6;
    v9 = (__int64)(v8 + 1);
  }
  a2[1] = v9;
  v20 = *(_QWORD*)(v9 - 8);
  v22[0] = a2;
  v22[1] = v20;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v20 + 16LL))(v20, v22);
}

#pragma GCC visibility pop
