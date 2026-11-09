#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c99b8;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);
__int64 ItemResult_Unknown29(__int64 result);

__int64 ItemResult_Unknown29(__int64 result)
{
  __int64 v1;
  __int64 v2;
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
  char* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  _QWORD* v18;
  char v19;
  __int64 v20;
  __int64 v21;

  v1 = *(_QWORD*)(result + 824);
  v2 = *(_QWORD*)(result + 832);
  v3 = v2 - v1;
  if (v2 != v1) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v3 >> 4)) >=
        0x24924924924924ALL) {
      GameRoutine_e66f80(result);
    }
    v4 = result;
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v3, 16, 0);
    v7 = 0;
    do {
      v11 = v1 + v7;
      v12 = v6 + v7;
      *(_DWORD*)v12 = *(_DWORD*)(v1 + v7);
      *(_QWORD*)(v12 + 4) = *(_QWORD*)(v1 + v7 + 4);
      if (*(_BYTE*)(v1 + v7 + 12) != 0) {
        v8 = *(_QWORD*)(v11 + 12);
      }
      else {
        v8 = 0;
      }
      *(_QWORD*)(v12 + 48) = 0;
      v9 = v12 + 48;
      *(_QWORD*)(v12 + 12) = v8;
      *(_WORD*)(v12 + 26) = 0;
      *(_DWORD*)(v12 + 28) = 0;
      *(_QWORD*)(v12 + 40) = v12 + 48;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      GameRoutine_930b90(v12 + 24, v11 + 24);
      v10 = *(_QWORD*)(v11 + 88);
      v7 += 112;
      *(_DWORD*)(v9 + 48) = *(_DWORD*)(v11 + 96);
      *(_QWORD*)(v9 + 40) = v10;
      *(_WORD*)(v9 + 56) = *(_WORD*)(v11 + 104);
    } while (v1 + v7 != v2);
    if (v7 == 112 && *(_WORD*)(v6 + 4) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                             8LL * *(unsigned __int16*)(v6 + 4)) +
                  73LL) != 18) {
      if ((*(_BYTE*)(v4 + 272) & 1) != 0) {
        *(_QWORD*)(v4 + 280) = 17;
        v13 = *(char**)(v4 + 288);
      }
      else {
        *(_BYTE*)(v4 + 272) = 34;
        v13 = (char*)(v4 + 273);
      }
      strcpy(v13, "Layout/Common.arc");
      GameRoutine_60a020(v4 + 296, "Common_TlpResultTlp_GetRewardInfo");
      *(_BYTE*)(v4 + 896) = 1;
    }
    do {
      v15 = v6 + v7;
      v16 = *(_BYTE*)(v6 + v7 - 48);
      *(_DWORD*)(v15 - 80) = 0;
      *(_QWORD*)(v15 - 88) = 0;
      if ((v16 & 1) != 0) {
        **(_BYTE**)(v15 - 32) = 0;
        *(_QWORD*)(v15 - 40) = 0;
      }
      else {
        *(_WORD*)(v15 - 48) = 0;
      }
      v17 = v6 + v7;
      v18 = (_QWORD*)(v6 + v7 - 64);
      GameRoutine_6e3b50(v6 + v7 - 72, *v18);
      v19 = *(_BYTE*)(v15 - 48);
      *(_QWORD*)(v17 - 56) = 0;
      *(_QWORD*)(v17 - 72) = v18;
      *v18 = 0;
      if ((v19 & 1) != 0) {
        v14 = *(_QWORD*)(v17 - 32);
        if (v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v20 = 128;
          }
          else {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v20);
          v14 = *(_QWORD*)(v17 - 64);
        }
      }
      else {
        v14 = 0;
      }
      GameRoutine_6e3b50(v6 + v7 - 72, v14);
      v7 -= 112;
    } while (v7 != 0);
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v21);
  }
  return result;
}

#pragma GCC visibility pop
