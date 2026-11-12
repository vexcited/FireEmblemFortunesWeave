#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AssetTableFile_7e74e0(_QWORD);
__int64 SpineSlotChecker_1923b20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_21108a0[7];
__int64 SpineBuildArgument_Unknown16_alt1(__int64 result, __int64 a2) __asm__(
    "SpineBuildArgument_Unknown16");
__int64 SpineBuildArgument_Unknown17(__int64 result, __int64 a2);
__int64
SpineSlotChecker_1923b20_alt1(__int64 result,
                              __int64) __asm__("SpineSlotChecker_1923b20");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpineBuildArgument_Unknown16(__int64 a1, __int64 a2);

void SpineBuildArgument_Unknown16(__int64 a1, __int64 a2)
{
  _BYTE* v2;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    __int64 v10;
  } v9_;

  if (a2 != 0) {
    v2 = *(_BYTE**)(a2 + 40);
    if (v2 != nullptr && *v2 != 0) {
      v9_.v9[1] = 0;
      v9_.v10 = 0;
      v9_.v9[0] = 0;
      v5 = SpineSlotChecker_1923b20_alt1((__int64)v9_.v9, a2);
      v6 = (*(_BYTE*)v5 & 1) != 0 ? *(_QWORD*)(v5 + 16) : v5 + 1;
      (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, v6);
      v7 = (unsigned int)*(unsigned __int8*)(a2 + 48) - 1 > 6
               ? "Contents:/UI/Face/Default.sprop"
               : GameData_21108a0[(unsigned __int8)(*(_BYTE*)(a2 + 48) - 1)];
      (*(void (**)(__int64, char*))(*(_QWORD*)a1 + 88LL))(a1, v7);
      if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9_.v10);
      }
    }
  }
}

__int64 SpineBuildArgument_Unknown17(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  if (a2 != 0) {
    v2 = result;
    v3 = AssetTableFile_7e74e0(a2);
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 128LL))(v2, v3);
  }
  return result;
}

#pragma GCC visibility pop
