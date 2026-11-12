#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1b00(_QWORD, float);
extern __int64 (*game_hub_DungeonRouteParts_vtable[])();
__int64 DungeonRouteParts_Destructor(__int64 result);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 DungeonRouteParts_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "DungeonRouteParts_DeletingDestructor");
__int64 game_14a1b00(__int64*, float);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DungeonRouteParts_DeletingDestructor(_QWORD* a1);

__int64 DungeonRouteParts_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = game_hub_DungeonRouteParts_vtable;
  v1 = *(_QWORD*)(result + 80);
  if (v1 != 0) {
    v2 = result;
    result = *(_QWORD*)(v1 + 8);
    *(_BYTE*)v1 = 0;
    v3 = *(_QWORD*)result;
    if (*(_QWORD*)result != 0) {
      if (*(_DWORD*)(v3 + 16) == *(_DWORD*)(result + 8)) {
        *(_BYTE*)(v3 + 33) = 0;
        if (*(_BYTE*)v1 != 0) {
          goto LABEL_7;
        }
      }
      result = *(_QWORD*)(v1 + 8);
    }
    result = GameRoutine_14a1b00(result, 0.0);
  LABEL_7:
    *(_QWORD*)(v2 + 80) = 0;
  }
  return result;
}

void DungeonRouteParts_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_hub_DungeonRouteParts_vtable;
  v2 = a1[10];
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    *(_BYTE*)v2 = 0;
    v4 = *(_QWORD*)v3;
    if (*(_QWORD*)v3 != 0 && *(_DWORD*)(v4 + 16) == *(_DWORD*)(v3 + 8)) {
      *(_BYTE*)(v4 + 33) = 0;
      if (*(_BYTE*)v2 != 0) {
      LABEL_7:
        a1[10] = 0;
        goto LABEL_8;
      }
      v3 = *(_QWORD*)(v2 + 8);
    }
    game_14a1b00((__int64*)v3, 0x0.0p+0f);
    goto LABEL_7;
  }
LABEL_8:
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

#pragma GCC visibility pop
