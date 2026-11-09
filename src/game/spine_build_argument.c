#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AssetTableFile_7e74e0(_QWORD);
__int64 SpineSlotChecker_1923b20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_21108a0[7];
__int64 SpineBuildArgument_Unknown16(__int64 result, __int64 a2);
__int64 SpineBuildArgument_Unknown17(__int64 result, __int64 a2);

__int64 SpineBuildArgument_Unknown16(__int64 result, __int64 a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  _QWORD v9[2];
  __int64 v10;

  if (a2 != 0) {
    v2 = *(_BYTE**)(a2 + 40);
    if (v2 != nullptr && *v2 != 0) {
      v3 = result;
      v9[1] = 0;
      v10 = 0;
      v9[0] = 0;
      v5 = SpineSlotChecker_1923b20(v9);
      v6 = (*(_BYTE*)v5 & 1) != 0 ? *(_QWORD*)(v5 + 16) : v5 + 1;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 40LL))(v3, v6);
      v7 = (unsigned int)*(unsigned __int8*)(a2 + 48) - 1 > 6
               ? "Contents:/UI/Face/Default.sprop"
               : GameData_21108a0[(unsigned __int8)(*(_BYTE*)(a2 + 48) - 1)];
      result = (*(__int64 (**)(__int64, char*))(*(_QWORD*)v3 + 88LL))(v3, v7);
      if ((v9[0] & 1) != 0 && v10 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
      }
    }
  }
  return result;
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
