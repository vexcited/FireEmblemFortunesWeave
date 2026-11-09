#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcSaveLoader_vtable)();
extern __int64 (*game_anonymous_ProcSaveReload_vtable[])();
extern __int64 GameData_21eea58;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
__int64 ProcSaveSkip_DeletingDestructor(__int64 a1);
__int64 ProcSaveSkip_Unknown18(__int64 result);

__int64 ProcSaveSkip_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)a1 = game_anonymous_ProcSaveReload_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 184) & 1) != 0 && *(_QWORD*)(a1 + 200) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = &game_anonymous_ProcSaveLoader_vtable;
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 160);
    if (v4 == v5) {
      goto LABEL_17;
    }
    v6 = *(_QWORD*)(a1 + 160);
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0 && *(_QWORD*)(v5 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8);
      }
      v5 = v6;
    } while (v6 != v4);
    v9 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v4;
    if (v9 != 0) {
    LABEL_17:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v10);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v11);
}

__int64 ProcSaveSkip_Unknown18(__int64 result)
{
  __int64 v1;
  char* v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  char* v6;

  v1 = GameData_21eea58;
  if ((*(_BYTE*)(result + 184) & 1) != 0) {
    v2 = *(char**)(result + 200);
  }
  else {
    v2 = (char*)(result + 185);
  }
  if (GameData_21eea58 == 0) {
    return result;
  }
  v3 = *(_BYTE*)(result + 176);
  *(_BYTE*)GameData_21eea58 = 0;
  *(_DWORD*)(v1 + 4) = -1;
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    **(_BYTE**)(v1 + 24) = 0;
    *(_QWORD*)(v1 + 16) = 0;
  }
  else {
    *(_WORD*)(v1 + 8) = 0;
  }
  v4 = *(_QWORD**)(v1 + 80);
  *(_QWORD*)(v1 + 80) = 0;
  if (v4 == (_QWORD*)(v1 + 48)) {
    v5 = 32;
    goto LABEL_13;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
    v1 = GameData_21eea58;
  }
  v6 = &GameData_1a9f09e;
  *(_BYTE*)v1 = v3;
  if (v2 != nullptr && *v2 != 0) {
    v6 = v2;
  }
  return GameRoutine_60a020(GameData_21eea58 + 8, v6);
}

#pragma GCC visibility pop
