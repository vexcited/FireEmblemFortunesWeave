#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e5a5e0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_GambitCameraSpotName_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 GameData_220f8c8;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD);
__int64 GambitCameraSpotName_Unknown2(__int64 a1);
__int64 GambitCameraSpotName_Destructor(__int64 result);
__int64 GambitCameraSpotName_DeletingDestructor(__int64 a1);

__int64 GambitCameraSpotName_Unknown2(__int64 a1)
{
  char v1;
  int v2;
  __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  int v9;
  unsigned __int8* v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int* v19;
  int v20;
  __int64 v21;
  __int64 v23;
  int v24;

  v1 = *(_BYTE*)(a1 + 92);
  v2 = *(_DWORD*)(a1 + 88);
  v23 = *(_QWORD*)(a1 + 80);
  v4 = *(_QWORD*)(a1 + 48);
  v24 = v2;
  *(_BYTE*)(*(_QWORD*)(v4 + 96) + 149LL) = v1;
  v5 = *(unsigned __int8**)(a1 + 72);
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 96LL);
  LOBYTE(v4) = *(_BYTE*)(a1 + 56);
  v7 = (unsigned __int8*)(a1 + 57);
  if ((v4 & 1) != 0) {
    v8 = v5;
  }
  else {
    v8 = v7;
  }
  if (v8 == nullptr) {
    goto LABEL_18;
  }
  v11 = *v8;
  v10 = v8 + 1;
  v9 = v11;
  if (v11 != 0) {
    v12 = 0;
    do {
      v12 = v9 - v12 + 32 * v12;
      v13 = *v10++;
      v9 = v13;
    } while (v13 != 0);
  }
  else {
    v12 = 0;
  }
  v14 = *(_QWORD*)(GameData_220f8c8 + 8);
  v15 = *(_QWORD*)(GameData_220f8c8 + 16);
  v16 = v15 - v14;
  if (v15 == v14) {
    goto LABEL_18;
  }
  v17 = 0;
  v18 = 0x4EC4EC4EC4EC4EC5LL * (v16 >> 3);
  v19 = (int*)(v14 + 24);
  while (1) {
    v20 = *v19;
    v19 += 26;
    if (v12 == v20) {
      break;
    }
    if (v18 == ++v17) {
      goto LABEL_18;
    }
  }
  if (v17 < 1) {
  LABEL_18:
    v21 = 0;
  }
  else {
    if (v18 <= (unsigned int)v17) {
      GameRoutine_d38e30(v6);
    }
    v21 = v14 + 104LL * (unsigned int)v17;
  }
  return GameRoutine_e5a5e0(v6, v21, &v23);
}

__int64 GambitCameraSpotName_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = game_combat_GambitCameraSpotName_vtable;
  if ((*(_BYTE*)(result + 56) & 1) != 0 && *(_QWORD*)(result + 72) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  *(_QWORD*)result = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(result + 24) & 1) != 0 && *(_QWORD*)(result + 40) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

__int64 GambitCameraSpotName_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_GambitCameraSpotName_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0 && *(_QWORD*)(a1 + 72) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
}

#pragma GCC visibility pop
