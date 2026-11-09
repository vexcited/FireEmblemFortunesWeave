#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSkillLearn_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopSkillLearn_Unknown57(__int64 a1);
__int64 TelopSkillLearn_DeletingDestructor(_QWORD* a1);

__int64 TelopSkillLearn_Unknown57(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[4];
  int v8;

  *(_DWORD*)(a1 + 876) = 0;
  *(_DWORD*)(a1 + 940) = 0;
  v8 = 0;
  v7[0] = 0;
  *(_QWORD*)(a1 + 868) = 0;
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 496LL))(a1, &v8, v7);
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 504LL))(a1, &v8, v7);
  result = (*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 512LL))(
      a1, &v8, v7);
  v3 = *(_QWORD*)(a1 + 1184);
  v4 = *(_QWORD*)(a1 + 1176);
  if (v3 != v4) {
    v5 = *(_QWORD*)(a1 + 1176);
    do {
      v6 = v3 - (v4 + 8);
      if (v3 != v4 + 8) {
        result = memmove(v4, v4 + 8, v3 - (v4 + 8));
        v5 = *(_QWORD*)(a1 + 1176);
      }
      v3 = v4 + v6;
      v4 = v5;
      *(_QWORD*)(a1 + 1184) = v3;
    } while (v3 != v5);
  }
  return result;
}

__int64 TelopSkillLearn_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[151];
  *a1 = game_telop_TelopSkillLearn_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[152] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[148] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

#pragma GCC visibility pop
