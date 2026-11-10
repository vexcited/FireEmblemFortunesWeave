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
__int64 CharacterBuilder_a577c0(__int64 result, __int64, int, __int64, __int64,
                                __int64);
__int64 Model_a66980(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fbfd68[])();
extern __int64 as_g_base_frame_counter;
unsigned __int64 CharacterBuilder_a585e0(unsigned __int64 result, __int64);
void GameRoutine_a58fe0(__int64, __int64, float32x4_t*, char, float32x4_t _Q0,
                        double, double, double, double, long double);
_QWORD* wld_ClothModule_ClothModule(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6);
void wld_ClothModule_ClothModule_lambda0_Invoke(__int64 a1, float32x4_t a2,
                                                double a3, double a4, double a5,
                                                double a6, long double a7);

_QWORD* wld_ClothModule_ClothModule(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6;
  atomic_uchar* v9;
  unsigned __int8 explicit;
  int* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _QWORD* result;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  v6 = a1 + 24;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 52) = 0;
  *(_DWORD*)(a1 + 59) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_BYTE*)(a1 + 88) = 0;
  *(_QWORD*)a1 = wld_ClothModule_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 48) = 1065353216;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = a3 + 24;
  *(_QWORD*)(a1 + 80) = a4 + 32;
  v9 = (atomic_uchar*)GameData_212df10;
  *(_BYTE*)(a1 + 92) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  explicit = atomic_load_explicit(v9, memory_order_acquire);
  v11 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
    *v11 = wld_Crc32(0, "ModelModule", 11);
    __cxa_guard_release(GameData_212df10, v22, v23, v24);
  }
  v12 = *(_QWORD*)(a2 + 512);
  v13 = v12;
  do {
    v14 = *(_DWORD*)(v13 - 16);
    v13 -= 16;
    v12 -= 16;
  } while (v14 != *v11);
  v15 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 24LL);
  CharacterBuilder_a577c0(*(_QWORD*)(a1 + 72), v15, 0, 0, a5, a6);
  result = (_QWORD*)CharacterBuilder_a585e0(v6, v15);
  if (*(_QWORD*)(a1 + 24) != *(_QWORD*)(a1 + 32)) {
    if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
      *v11 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(GameData_212df10, v25, v26, v27);
    }
    v17 = *(_QWORD*)(a2 + 512);
    v18 = v17;
    do {
      v19 = *(_DWORD*)(v18 - 16);
      v18 -= 16;
      v17 -= 16;
    } while (v19 != *v11);
    v20 = *(_QWORD*)(*(_QWORD*)(v17 + 8) + 24LL);
    v29 = v28;
    v28[0] = GameData_1fbfd68;
    v28[1] = a1;
    *(_DWORD*)(a1 + 88) = Model_a66980(v20, v28, 2);
    result = v29;
    *(_BYTE*)(a1 + 92) = 1;
    if (result == v28) {
      v21 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v21 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v21))(result);
  }
  return result;
}

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

void wld_ClothModule_ClothModule_lambda0_Invoke(__int64 a1, float32x4_t a2,
                                                double a3, double a4, double a5,
                                                double a6, long double a7)
{
  __int64 v7;

  v7 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v7 + 16) == 1) {
    ((uint32_t*)&a2)[0] = *(_DWORD*)(as_g_base_frame_counter + 156);
    GameRoutine_a58fe0(v7 + 24, *(_QWORD*)(v7 + 72), *(float32x4_t**)(v7 + 80),
                       *(_BYTE*)(v7 + 96), a2, a3, a4, a5, a6, a7);
  }
}

#pragma GCC visibility pop
