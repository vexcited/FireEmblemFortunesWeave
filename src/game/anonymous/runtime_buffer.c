#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_anonymous_RuntimeBuffer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RuntimeBuffer_Destructor(__int64 result);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_anonymous_RuntimeBuffer_Build_closure_Invoke(__int64 result,
                                                          __int64 a2);

__int64 game_anonymous_RuntimeBuffer_Build_closure_Invoke(__int64 result,
                                                          __int64 a2)
{
  _DWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];
  char* v10;

  v2 = *(_DWORD**)(a2 + 8);
  if (v2 == nullptr || *v2 != -1712762035) {
    return result;
  }
  v3 = *(_QWORD*)(result + 8);
  v4 = strlen(*(_QWORD*)(a2 + 8));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v9[1] = v5;
    v10 = v6;
    v9[0] = v7 | 1;
  }
  else {
    LOBYTE(v9[0]) = 2 * v4;
    v6 = (char*)v9 + 1;
    if (v4 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v6, v2, v5);
LABEL_12:
  v6[v5] = 0;
  result = GameRoutine_7a8220(v3 + 352, v9);
  if ((v9[0] & 1) != 0 && v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  return result;
}

__int64 RuntimeBuffer_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;

  *(_QWORD*)result = game_anonymous_RuntimeBuffer_vtable;
  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    v1 = *(_QWORD*)(result + 24);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
  return result;
}

#pragma GCC visibility pop
