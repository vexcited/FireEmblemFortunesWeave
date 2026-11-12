#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
InfoDialog_Unknown84_alt1(__int64 result) __asm__("InfoDialog_Unknown84");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void InfoDialog_Unknown84(__int64 a1);

void InfoDialog_Unknown84(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  int v6;
  unsigned __int64 v7;
  const char* v8;
  __int64 v9;
  struct {
    __int16 v10;
    char gap10_[6];
    unsigned __int64 v11;
    const char* v12;
  } v10_;

  v1 = *(unsigned __int8*)(a1 + 1496);
  v2 = *(_QWORD*)(a1 + 1504);
  v10_.v10 = 0;
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0 || *(_QWORD*)(a1 + 1552) != 0) {
    GameRoutine_1a09ce0_alt1((__int64)&v10_.v10, "Target", 6u);
  }
  if (*(_QWORD*)(a1 + 1624) != *(_QWORD*)(a1 + 1616)) {
    GameRoutine_1a09ce0_alt1((__int64)&v10_.v10, "Unit", 4u);
  }
  if ((*(_DWORD*)(a1 + 1568) & 0x80000000) == 0 ||
      (*(_DWORD*)(a1 + 1572) & 0x80000000) == 0 ||
      (*(_DWORD*)(a1 + 1576) & 0x80000000) == 0 || *(_WORD*)(a1 + 1580) != 0) {
    GameRoutine_1a09ce0_alt1((__int64)&v10_.v10, "Resource", 8u);
  }
  v6 = v10_.v10 & 1;
  v7 = (unsigned __int64)(unsigned __int8)v10_.v10 >> 1;
  if (v6 != 0) {
    v7 = v10_.v11;
  }
  if (v7 != 0) {
    if (v6 != 0) {
      v8 = v10_.v12;
    }
    else {
      v8 = (char*)&v10_.v10 + 1;
    }
    LayoutAccessor_1562cf0(a1 + 848, v8);
    v6 = v10_.v10 & 1;
  }
  if (v6 != 0 && v10_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v12);
  }
}

#pragma GCC visibility pop
