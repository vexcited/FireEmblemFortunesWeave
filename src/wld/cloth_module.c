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
__int64
ClothModule_Destructor_alt1(__int64 result) __asm__("ClothModule_Destructor");
__int64 ClothModule_DeletingDestructor(__int64 a1);
__int64 CharacterBuilder_a577c0(__int64 result, __int64, int, __int64, __int64,
                                __int64);
__int64 Model_a66980(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fbfd68[])();
extern __int64 as_g_base_frame_counter;
unsigned __int64 CharacterBuilder_a585e0(unsigned __int64 result, __int64);
void GameRoutine_a58fe0(__int64, __int64, float32x4_t*, char, float32x4_t _Q0,
                        double, double, double, double, long double);
_QWORD* wld_ClothModule_ClothModule_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6) __asm__("wld_ClothModule_ClothModule");
void wld_ClothModule_ClothModule_lambda0_Invoke(__int64 a1, float32x4_t a2,
                                                double a3, double a4, double a5,
                                                double a6, long double a7);
__int64* Model_a66d00_alt1(__int64* result, int) __asm__("Model_a66d00");
__int64 Model_a66980_alt1(__int64, __int64, int) __asm__("Model_a66980");
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void CharacterBuilder_a585e0_alt1(__int64*,
                                  __int64) __asm__("CharacterBuilder_a585e0");
void CharacterBuilder_a59790(__int64);
void GameHr_a577c0(__int64, __int64, int, char);
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void wld_ClothModule_ClothModule(__int64 a1, __int64 a2, __int64 a3,
                                 __int64 a4);
void ClothModule_Destructor(__int64 a1);

void wld_ClothModule_ClothModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v4;
  atomic_uchar* v7;
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  v4 = (__int64*)(a1 + 24);
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
  v7 = (atomic_uchar*)GameData_212df10;
  *(_BYTE*)(a1 + 92) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  explicit = atomic_load_explicit(v7, memory_order_acquire);
  v9 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
    *v9 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
    __cxa_guard_release_alt1((__int64)GameData_212df10);
  }
  v10 = *(_QWORD*)(a2 + 512);
  v11 = v10;
  do {
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    v10 -= 16;
  } while (v12 != *v9);
  v13 = *(_QWORD*)(*(_QWORD*)(v10 + 8) + 24LL);
  GameHr_a577c0(*(_QWORD*)(a1 + 72), v13, 0, 0);
  CharacterBuilder_a585e0_alt1(v4, v13);
  if (*(_QWORD*)(a1 + 24) != *(_QWORD*)(a1 + 32)) {
    if ((atomic_load_explicit(v7, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
      *v9 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
      __cxa_guard_release_alt1((__int64)GameData_212df10);
    }
    v14 = *(_QWORD*)(a2 + 512);
    v15 = v14;
    do {
      v16 = *(_DWORD*)(v15 - 16);
      v15 -= 16;
      v14 -= 16;
    } while (v16 != *v9);
    v17 = *(_QWORD*)(*(_QWORD*)(v14 + 8) + 24LL);
    v20_.v21 = v20_.v20;
    v20_.v20[0] = GameData_1fbfd68;
    v20_.v20[1] = a1;
    *(_DWORD*)(a1 + 88) = Model_a66980_alt1(v17, (__int64)v20_.v20, 2);
    v18 = v20_.v21;
    *(_BYTE*)(a1 + 92) = 1;
    if (v18 == v20_.v20) {
      v19 = 32;
    }
    else {
      if (v18 == nullptr) {
        return;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
  }
}

void ClothModule_Destructor(__int64 a1)
{
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

  *(_QWORD*)a1 = wld_ClothModule_vtable;
  if (*(_BYTE*)(a1 + 92) == 1) {
    v2 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v4 = GameData_212df08;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
      *v4 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
      __cxa_guard_release_alt1((__int64)GameData_212df10);
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
            if ((*(_BYTE*)(a1 + 92) & 1) == 0) {
              GameRoutine_8123d0_alt1();
            }
            Model_a66d00_alt1(*(__int64**)(v8 + 24), *(_DWORD*)(a1 + 88));
          }
        }
        break;
      }
    }
  }
  v9 = *(_QWORD*)(a1 + 24);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 32);
    if (v9 == v10) {
      goto LABEL_14;
    }
    do {
      v10 -= 176;
      CharacterBuilder_a59790(v10);
    } while (v10 != v9);
    v11 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 32) = v9;
    v9 = v11;
    if (v11 != 0) {
    LABEL_14:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v9);
    }
  }
}

__int64 ClothModule_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  ClothModule_Destructor_alt1(a1);
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
