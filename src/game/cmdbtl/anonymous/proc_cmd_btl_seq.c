#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_667c80(_QWORD);
__int64 GameRoutine_e61c90(__int64, __int64);
__int64 GameRoutine_eb9b60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_2216780;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlSeq_Unknown12(__int64 result);
__int64 ProcCmdBtlSeq_Unknown21();

__int64 ProcCmdBtlSeq_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 19;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 19) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

__int64 ProcCmdBtlSeq_Unknown21()
{
  __int64 v0;
  _QWORD v2[6];
  char v3;
  char v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;

  v4 = 0;
  v5 = 0;
  memset(v2, 0, sizeof(v2));
  v3 = 0;
  v21 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  LOBYTE(v19) = 0;
  v6 = 0x500000005LL;
  GameRoutine_eb9b60(v2);
  GameRoutine_e61c90((__int64)&GameData_2216780, (__int64)v2);
  if (v21 == 1 && v19 != 0) {
    v20 = v19;
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0);
  }
  return GameRoutine_667c80(v2);
}

#pragma GCC visibility pop
