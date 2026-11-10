#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1450640(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8a0;
extern char GameData_1ac552d[];
extern char* GameData_2119210;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) StableSceneDiff_1956990() { __udf(0x8002u); };
__int64 game_facility_StableSceneDiff_SetCamera_lambda0_Invoke(__int64 a1);

__int64 game_facility_StableSceneDiff_SetCamera_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[2];
  char* v9;

  v1 = game_util_Format(
      GameData_1ac552d,
      (&GameData_2119210)[*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                       8LL *
                                           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 +
                                                                                     8) +
                                                                          96LL) +
                                                               24LL)) +
                            32LL)]);
  v2 = strlen(v1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v8[1] = v3;
    v9 = v4;
    v8[0] = v5 | 1;
  }
  else {
    LOBYTE(v8[0]) = 2 * v2;
    v4 = (char*)v8 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v4, v1, v3);
LABEL_10:
  v4[v3] = 0;
  result = GameRoutine_1450640(v8);
  if ((v8[0] & 1) != 0 && v9 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

#pragma GCC visibility pop
