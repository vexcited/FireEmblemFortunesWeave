#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProxyMemSnd_Unknown2(__int64 a1, __int64 a2, int a3);
__int64 ProxyMemSnd_Unknown3_alt1(__int64 a1,
                                  __int64 a2) __asm__("ProxyMemSnd_Unknown3");
extern int GameData_21fa820;
extern int GameData_21fa870;
extern int GameData_21fa8c0;
__int64 ProxyMemSnd_Unknown6();
__int64 ProxyMemSnd_Unknown7();
__int64 ProxyMemSnd_Unknown8();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProxyMemSnd_Unknown3(__int64 a1, __int64 a2);
__int64 ProxyMemSnd_Unknown6() { return (unsigned __int16)GameData_21fa820; }

__int64 ProxyMemSnd_Unknown7() { return (unsigned __int16)GameData_21fa870; }

__int64 ProxyMemSnd_Unknown8() { return (unsigned __int16)GameData_21fa8c0; }

__int64 ProxyMemSnd_Unknown2(__int64 a1, __int64 a2, int a3)
{
  return fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        a2, a3, 2);
}

void ProxyMemSnd_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (a2 != 0) {
    v2 = 288;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 360LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a2);
  }
}

#pragma GCC visibility pop
