#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 ItemSeq_8af940(__int64, __int64*, __int64, char**, char**, char);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64** GameRoutine_8af240(__int64** result, __int64**);
extern _UNKNOWN GameData_1abbb9c;
extern __int64 (*GameData_1fa9000[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* game_vstring_kEmpty_ptr[2];
unsigned __int64 GameRoutine_887920(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_6e5c60(void);
__int64 ProcGainHonorSeq_8b2d70(__int64 result);
_QWORD* game_anonymous_ProcGainHonorSeq_Lv_closure0_Clone(__int64 a1);
__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_CloneInto(__int64 result,
                                                              _QWORD* a2);
__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_Invoke(__int64 a1,
                                                           __int64* a2);

__int64 ProcGainHonorSeq_8b2d70(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = result;
    GameRoutine_887920(&v2, (__int64)&GameData_1abbb9c);
    return GameRoutine_162aea0(v1, &v2);
  }
  return result;
}

_QWORD* game_anonymous_ProcGainHonorSeq_Lv_closure0_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v3[2] = 0;
  v3[3] = 0;
  *v3 = GameData_1fa9000;
  v3[1] = 0;
  v5 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v6 = v4 - v5;
  if (v4 != v5) {
    if (v6 < 0) {
      GameRoutine_6e5c60();
    }
    v7 = fw_memory_HeapManager_Allocate(*v2, v4 - v5, 16, 0);
    v8 = v7 + v6;
    v3[1] = v7;
    v3[3] = v7 + v6;
    memcpy(v7, v5, v6);
    v3[2] = v8;
  }
  return v3;
}

__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_CloneInto(__int64 result,
                                                              _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  a2[2] = 0;
  a2[3] = 0;
  *a2 = GameData_1fa9000;
  a2[1] = 0;
  v3 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v4 = v2 - v3;
  if (v2 != v3) {
    if (v4 < 0) {
      GameRoutine_6e5c60();
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v2 - v3, 16, 0);
    v7 = v6 + v4;
    a2[1] = v6;
    a2[2] = v6;
    a2[3] = v6 + v4;
    result = memcpy(v6, v3, v4);
    a2[2] = v7;
  }
  return result;
}

__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64* v5[3];

  v2 = *a2;
  GameRoutine_8af240(v5, (__int64**)(a1 + 8));
  result =
      ItemSeq_8af940(v2, (__int64*)v5, 0, (char**)game_vstring_kEmpty_ptr[0],
                     (char**)game_vstring_kEmpty_ptr[0], 0);
  if (v5[0] != nullptr) {
    v5[1] = v5[0];
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

#pragma GCC visibility pop
