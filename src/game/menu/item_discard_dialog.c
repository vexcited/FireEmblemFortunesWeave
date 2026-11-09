#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_menu_Dialog_Destroy_Dialog(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ItemDiscardDialog_DeletingDestructor(__int64 a1);

__int64 ItemDiscardDialog_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 1496);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 1504);
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = *(_QWORD*)(a1 + 1496);
    *(_QWORD*)(a1 + 1504) = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v1);
    }
  }
  game_menu_Dialog_Destroy_Dialog(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

#pragma GCC visibility pop
