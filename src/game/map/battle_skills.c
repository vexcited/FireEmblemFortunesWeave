#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8e5690(void);
__int64 game_map_BattleSkills_Add_lambda0_Invoke(__int64 result, int* a2);

__int64 game_map_BattleSkills_Add_lambda0_Invoke(__int64 result, int* a2)
{
  __int64* v2;
  int v3;
  int v4;
  char v5;
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *(__int64**)(result + 8);
  v3 = *(unsigned __int8*)(result + 16);
  v4 = *a2;
  v5 = *(_BYTE*)(*(_QWORD*)(result + 24) + 16LL);
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
  v7 = *(unsigned __int16*)(v6 + 16) + (v3 << 12) +
       ((*(unsigned __int8*)(v6 + 115) << 24) |
        (*(unsigned __int8*)(v6 + 114) << 16));
  v8 = v2[1];
  v9 = v2[2];
  if (v8 >= v9) {
    v11 = *v2;
    v12 = v8 - *v2;
    v13 = 1 - 0x5555555555555555LL * (v12 >> 2);
    if (v13 > 0x1555555555555555LL) {
      GameRoutine_8e5690();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - v11) >> 2);
    if (2 * v15 > v13) {
      v13 = 2 * v15;
    }
    if (v15 >= 0xAAAAAAAAAAAAAAALL) {
      v16 = 0x1555555555555555LL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 > 0x1555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + v12;
    *(_BYTE*)v18 = v5;
    *(_BYTE*)(v18 + 1) = v3;
    *(_DWORD*)(v18 + 4) = v4;
    *(_DWORD*)(v18 + 8) = v7;
    v10 = v17 + v12 + 12;
    result = memcpy(v17, v11, v12);
    *v2 = v17;
    v2[1] = v10;
    v2[2] = v17 + 12 * v16;
    if (v11 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19, (_QWORD)(v11));
    }
  }
  else {
    *(_BYTE*)v8 = v5;
    *(_BYTE*)(v8 + 1) = v3;
    v10 = v8 + 12;
    *(_DWORD*)(v8 + 4) = v4;
    *(_DWORD*)(v8 + 8) = v7;
  }
  v2[1] = v10;
  return result;
}

#pragma GCC visibility pop
