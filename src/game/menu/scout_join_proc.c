#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameSubquestData_1259ea0(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125c2c0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212c7b0[11];
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ScoutJoinProc_f6ca00(__int64 a1);

__n128 ScoutJoinProc_f6ca00(__int64 a1)
{
  __int64 v2;
  __n128 result;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;

  if (*(_QWORD*)(a1 + 152) != 0) {
    v2 = *(_QWORD*)GameData_212c7b0[0];
    if (*(_QWORD*)GameData_212c7b0[0] != 0) {
      v12 = nullptr;
      v13 = 0;
      v11 = nullptr;
      GameSubquestData_1259ea0(v2, &v11, 1);
      v4 = v11;
      v5 = v12;
      if (v11 != v12) {
        v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        do {
          v7 = *v4;
          if (*(_QWORD*)(*(_QWORD*)*v4 + 408LL) == *(_QWORD*)(a1 + 152)) {
            v8 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 8, 16, 0);
            *v8 = v7;
            v14 = v8;
            v15 = v8 + 1;
            v16 = v8 + 1;
            GameSubquestData_125c2c0();
            if (*(_QWORD*)(*v6 + 200LL) != 0) {
              v9 = 128;
            }
            else {
              v9 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v6 + v9);
          }
          ++v4;
        } while (v4 != v5);
        v4 = v11;
      }
      if (v4 != nullptr) {
        v12 = v4;
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
