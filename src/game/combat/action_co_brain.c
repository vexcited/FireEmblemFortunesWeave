#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_combat_ActionCoBrain_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern int GameData_1bb1d5c[];
__int64 ActionCoBrain_Unknown7(__int64 a1);
char* ActionCoBrain_Destructor(__int64 a1);
_QWORD* ActionCoBrain_DeletingDestructor(_QWORD* result);
__int64 ActionCoBrain_Unknown2(_QWORD* a1);

__int64 ActionCoBrain_Unknown7(__int64 a1)
{
  __int64 v1;
  __int64 result;
  int v3;

  if (*(_DWORD*)(a1 + 92) != 0) {
    *(_WORD*)(a1 + 100) = 0;
    *(_QWORD*)(a1 + 92) = 0;
  }
  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 48) = 0;
  result = *(_QWORD*)(v1 + 368);
  v3 = *(_DWORD*)(result + 120);
  if (v3 > 119788727) {
    if (v3 <= 1131178863) {
      if (v3 != 119788728 && v3 != 501870813) {
        return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
      }
    }
    else if (v3 != 1131178864 && v3 != 1188437166 && v3 != 1817091785) {
      return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
    }
  }
  else if (v3 <= -1070254889) {
    if (v3 != -1101902990 && v3 != -1072101930) {
      return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
    }
  }
  else if (v3 != -1070254888 && v3 != -589947500 && v3 != -574916402) {
    return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
  }
  return result;
}

char* ActionCoBrain_Destructor(__int64 a1)
{
  return (char*)GameData_1bb1d5c + GameData_1bb1d5c[*(int*)(a1 + 92)];
}

_QWORD* ActionCoBrain_DeletingDestructor(_QWORD* result)
{
  *result = game_combat_ActionCoBrain_vtable;
  return result;
}

__int64 ActionCoBrain_Unknown2(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_combat_ActionCoBrain_vtable;
  v1 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v1, a1);
}

#pragma GCC visibility pop
