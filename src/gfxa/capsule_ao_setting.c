#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfxa_CapsuleAOSetting_vtable[])();
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
_QWORD* CapsuleAOSetting_Destructor(_QWORD* result);
__int64 CapsuleAOSetting_DeletingDestructor(__int64 a1);

_QWORD* CapsuleAOSetting_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = result[12];
  v2 = result;
  *result = gfxa_CapsuleAOSetting_vtable;
  result[7] = GameData_1fc23d8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[13] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v2[7] = GameData_212e530[0] + 16;
  if ((v2[8] & 1) != 0) {
    v6 = v2[10];
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v6);
    }
  }
  v8 = v2[4];
  *v2 = GameData_212e548[0] + 2;
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    v2[5] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  if ((v2[1] & 1) != 0) {
    v11 = v2[3];
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v11);
    }
  }
  return result;
}

__int64 CapsuleAOSetting_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)a1 = gfxa_CapsuleAOSetting_vtable;
  *(_QWORD*)(a1 + 56) = GameData_1fc23d8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 104) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  *(_QWORD*)(a1 + 56) = GameData_212e530[0] + 16;
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 80);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v6);
    }
  }
  v8 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = GameData_212e548[0] + 2;
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 40) = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 24);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v11);
    }
  }
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

#pragma GCC visibility pop
