#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopGetItemResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopCaptureFailAfterGetItemResult_Unknown56_alt1(__int64 a1) __asm__(
    "TelopCaptureFailAfterGetItemResult_Unknown56");
__int64 TelopCaptureFailAfterGetItemResult_DeletingDestructor(_QWORD* a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
void TelopCaptureFailAfterGetItemResult_Unknown56(__int64 a1);

void TelopCaptureFailAfterGetItemResult_Unknown56(__int64 a1)
{
  struct {
    char gap8_[1];
    char v2[15];
    __int64 v3;
  } v2_;

  LayoutAccessor_1562cf0(a1 + 168, "Type_TitleOff");
  strcpy(&v2_.v2[8], "On");
  *(_DWORD*)&v2_.v2[11] = 0;
  v2_.v3 = 0;
  strcpy(v2_.v2, "Pos_Tal");
  LayoutAccessor_1562cf0(a1 + 168, v2_.v2);
}

__int64 TelopCaptureFailAfterGetItemResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[149];
  *a1 = game_telop_TelopGetItemResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
  }
  v5 = a1[146];
  if (v5 != 0) {
    v6 = *(_QWORD*)v3;
    a1[147] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v5);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, a1);
}

#pragma GCC visibility pop
