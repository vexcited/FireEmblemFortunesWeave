#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a59790(__int64 result);
__int64 Model_a66d00(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df10;
extern __int64 (*wld_ClothModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212df08;
void __attribute__((noreturn)) GameRoutine_8123d0(void);
__int64 ClothModule_Destructor(__int64 result);
__int64 ClothModule_DeletingDestructor(__int64 a1);

__int64 ClothModule_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = result;
  *(_QWORD*)result = wld_ClothModule_vtable;
  if (*(_BYTE*)(result + 92) == 1) {
    v2 = *(_QWORD*)(result + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v4 = GameData_212df08;
    if ((explicit & 1) == 0) {
      result = __cxa_guard_acquire(GameData_212df10);
      if ((_DWORD)result != 0) {
        *v4 = wld_Crc32(0, "ModelModule", 11);
        result = __cxa_guard_release(GameData_212df10, v13, v14, v15);
      }
    }
    v5 = *(_QWORD*)(v2 + 512);
    v6 = v5;
    while (v6 != *(_QWORD*)(v2 + 504)) {
      v7 = *(_DWORD*)(v6 - 16);
      v6 -= 16;
      v5 -= 16;
      if (v7 == *v4) {
        if (*(_QWORD*)(v2 + 512) != v5) {
          v8 = *(_QWORD*)(v5 + 8);
          if (v8 != 0) {
            if ((*(_BYTE*)(v1 + 92) & 1) == 0) {
              GameRoutine_8123d0();
            }
            result =
                Model_a66d00(*(_QWORD*)(v8 + 24), *(unsigned int*)(v1 + 88));
          }
        }
        break;
      }
    }
  }
  v9 = *(_QWORD*)(v1 + 24);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v1 + 32);
    if (v9 == v10) {
      goto LABEL_14;
    }
    do {
      v10 -= 176;
      result = GameRoutine_a59790(v10);
    } while (v10 != v9);
    v11 = *(_QWORD*)(v1 + 24);
    *(_QWORD*)(v1 + 32) = v9;
    if (v11 != 0) {
    LABEL_14:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    }
  }
  return result;
}

__int64 ClothModule_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  ClothModule_Destructor(a1);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

#pragma GCC visibility pop
