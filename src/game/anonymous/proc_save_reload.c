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
__int64 ProcSaveReload_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcSaveReload_DeletingDestructor");
__int64 ProcSaveReload_Unknown18(__int64 result);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcSaveReload_DeletingDestructor(__int64 a1);

void ProcSaveReload_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_QWORD*)a1 = game_anonymous_ProcSaveReload_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 200);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  v5 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = &game_anonymous_ProcSaveLoader_vtable;
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 160);
    if (v5 == v6) {
      goto LABEL_17;
    }
    v7 = *(_QWORD*)(a1 + 160);
    do {
      v8 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v8 & 1) != 0) {
        v9 = *(_QWORD*)(v6 - 8);
        if (v9 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v10, v9);
        }
      }
      v6 = v7;
    } while (v7 != v5);
    v11 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v5;
    v5 = v11;
    if (v11 != 0) {
    LABEL_17:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v12, v5);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v13, a1);
}

__int64 ProcSaveReload_Unknown18(__int64 result)
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
    (*(void (**)(void*))(*v4 + v5))(v4);
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
