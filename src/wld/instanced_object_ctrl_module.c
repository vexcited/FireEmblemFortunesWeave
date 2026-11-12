#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19862d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212eab0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212df08;
extern int* GameData_212eaa8;
void __attribute__((noreturn)) GameRoutine_193bda0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 InstancedObjectCtrlModule_Unknown7_alt1(__int64 result) __asm__(
    "InstancedObjectCtrlModule_Unknown7");
__int64 InstancedObjectCtrlModule_193b8a0(__int64 result, __int64 a2);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
float32x4_t InstanceModel_19862d0(__int64, int, float32x4_t*, float32x4_t*,
                                  float32x4_t*, float32x4_t result);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void InstancedObjectCtrlModule_Unknown7(_QWORD* a1, long double a2);
__int64 GameRoutine_193b020(__int64*, __int64, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
void GameRoutine_1943530(_QWORD*, int);
void InstancedObjectCtrlModule_193bb40(__int64 a1);

void InstancedObjectCtrlModule_Unknown7(_QWORD* a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  float32x4_t** v13;
  float32x4_t* v14;
  bool v15;
  bool v16;
  _BOOL4 v17;
  float32x4_t* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;

  v2 = a1[1];
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v5 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
    *v5 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
    __cxa_guard_release_alt1((__int64)GameData_212df10);
  }
  v6 = *(_QWORD*)(v2 + 512);
  v7 = v6;
  do {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
  } while (v8 != *v5);
  v9 = a1[6] - a1[5];
  if (v9 != 0) {
    v10 = 0;
    v11 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 32LL);
    v12 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
    do {
      v13 = (float32x4_t**)(a1[5] + 24 * v10);
      v14 = v13[1];
      if ((LANES128(v14[7]).n128_u8[2] & 1) != 0 ||
          (LANES128(v14[7]).n128_f32[2] >= 0x1.0000000000000p+0f
               ? (v15 = LANES128(v14[7]).n128_f32[3] < 0x1.0000000000000p+0f)
               : (v15 = true),
           v15 || ((LODWORD(a2) = LANES128(v14[8]).n128_u32[0],
                    *(float*)&a2 <= 0x0.0p+0f)
                       ? (v16 = LANES128(v14[8]).n128_f32[1] <
                                0x1.0000000000000p+0f)
                       : (v16 = true),
                   v16))) {
        v23 = *(_QWORD*)(v11 + 160);
        v24 = (unsigned __int64)(int)v10 >> 6;
        v25 = *(_QWORD*)(v23 + 8 * v24);
        if ((v25 & (1LL << v10)) != 0) {
          *(_QWORD*)(v23 + 8 * v24) = v25 & ~(1LL << v10);
          *(_BYTE*)(v11 + 141) = 1;
        }
      }
      else {
        v17 = false;
        *(_BYTE*)(LANES128(v14[1]).n128_u64[1] + 32) = 0;
        v18 = *v13;
        if (LANES128((*v13)[18]).n128_u8[1] == 1 &&
            (LANES128(v18[18]).n128_u8[0] & 1) != 0) {
          if ((LANES128(v18[18]).n128_u8[12] & 0xFD) == 1) {
            v17 = false;
          }
          else {
            do {
              v18 = (float32x4_t*)LANES128(v18[46]).n128_u64[0];
              v17 = v18 == nullptr;
            } while (v18 != nullptr && LANES128(v18[18]).n128_u8[1] == 1 &&
                     LANES128(v18[18]).n128_u8[0] == 1 &&
                     (LANES128(v18[18]).n128_u8[12] & 0xFD) != 1);
          }
        }
        v19 = *(_QWORD*)(v11 + 160);
        v20 = (unsigned __int64)(int)v10 >> 6;
        v21 = 1LL << v10;
        v22 = *(_QWORD*)(v19 + 8 * v20);
        if (v17 != ((v22 & (1LL << v10)) != 0)) {
          if (v17) {
            *(_QWORD*)(v19 + 8 * v20) = v22 | v21;
          }
          else {
            *(_QWORD*)(v19 + 8 * v20) = v22 & ~v21;
            *(_BYTE*)(v11 + 141) = 1;
          }
        }
        *(float32x4_t*)&a2 = InstanceModel_19862d0(
            v11, v10, *v13 + 22, *v13 + 20, *v13 + 19, *(float32x4_t*)&a2);
      }
      ++v10;
    } while (v10 != v12);
  }
}

__int64 InstancedObjectCtrlModule_193b8a0(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned __int8 v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v2 = result;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v4 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v28 = a2;
    result = __cxa_guard_acquire(GameData_212df10);
    a2 = v28;
    if ((_DWORD)result != 0) {
      *v4 = wld_Crc32(0, "ModelModule", 11);
      result = __cxa_guard_release(GameData_212df10);
      a2 = v28;
    }
  }
  v5 = *(_QWORD*)(a2 + 512);
  v6 = v5;
  while (v6 != *(_QWORD*)(a2 + 504)) {
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
    if (v7 == *v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        goto LABEL_8;
      }
      break;
    }
  }
  v8 = 0;

LABEL_8:
  v9 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eab0,
                            memory_order_acquire);
  v10 = GameData_212eaa8;
  if ((v9 & 1) == 0) {
    v29 = a2;
    result = __cxa_guard_acquire(GameData_212eab0);
    a2 = v29;
    if ((_DWORD)result != 0) {
      *v10 = wld_Crc32(0, "LODModule", 9);
      result = __cxa_guard_release(GameData_212eab0);
      a2 = v29;
    }
  }
  v11 = *(_QWORD*)(a2 + 512);
  v12 = v11;
  while (v12 != *(_QWORD*)(a2 + 504)) {
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    v11 -= 16;
    if (v13 == *v10) {
      if (*(_QWORD*)(a2 + 512) != v11) {
        v14 = *(_QWORD*)(v11 + 8);
        goto LABEL_15;
      }
      break;
    }
  }
  v14 = 0;

LABEL_15:
  v16 = *(_QWORD**)(v2 + 48);
  v15 = *(_QWORD*)(v2 + 56);
  if ((unsigned __int64)v16 >= v15) {
    v18 = *(_QWORD*)(v2 + 40);
    v19 = (char*)v16 - v18;
    v20 = 1 - 0x5555555555555555LL * (((__int64)v16 - v18) >> 3);
    if (v20 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_193bda0();
    }
    v21 = fw_memory_g_heap_manager_ptr;
    v22 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - v18) >> 3);
    if (2 * v22 > v20) {
      v20 = 2 * v22;
    }
    if (v22 >= 0x555555555555555LL) {
      v23 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v23 = v20;
    }
    if (v23 != 0) {
      if (v23 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v24 = a2;
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v23, 16, 0);
      a2 = v24;
    }
    else {
      v25 = 0;
    }
    v26 = &v19[v25];
    *(_QWORD*)v26 = a2;
    *((_QWORD*)v26 + 1) = v8;
    *((_QWORD*)v26 + 2) = v14;
    v17 = (__int64)&v19[v25 + 24];
    result = memcpy(v25, v18, v19);
    *(_QWORD*)(v2 + 40) = v25;
    *(_QWORD*)(v2 + 48) = v17;
    *(_QWORD*)(v2 + 56) = v25 + 24 * v23;
    if (v18 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27);
    }
  }
  else {
    *v16 = a2;
    v16[1] = v8;
    v17 = (__int64)(v16 + 3);
    v16[2] = v14;
  }
  *(_QWORD*)(v2 + 48) = v17;
  if (v14 != 0) {
    *(_BYTE*)(v2 + 64) = 1;
  }
  return result;
}

void InstancedObjectCtrlModule_193bb40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *(_QWORD*)(a1 + 32);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(_QWORD*)(a1 + 24);
      v5 = v3;
      if (v4 != 0) {
        v6 = *(_QWORD*)(a1 + 8);
        v7 = 0xAAAAAAAAAAAAAAABLL *
             ((__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 3);
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212df10, memory_order_acquire);
        v9 = GameData_212df08;
        if ((explicit & 1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
          *v9 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
          __cxa_guard_release_alt1((__int64)GameData_212df10);
        }
        v10 = *(_QWORD*)(v6 + 512);
        v11 = v10;
        while (v11 != *(_QWORD*)(v6 + 504)) {
          v12 = *(_DWORD*)(v11 - 16);
          v11 -= 16;
          v10 -= 16;
          if (v12 == *v9) {
            if (*(_QWORD*)(v6 + 512) != v10) {
              v13 = *(_QWORD*)(v10 + 8);
              goto LABEL_11;
            }
            break;
          }
        }
        v13 = 0;
      LABEL_11:
        v14 = 80;
        if (*(_QWORD*)(v13 + 32) == 0) {
          v14 = 72;
        }
        v15 = *(_QWORD*)(v13 + v14);
        if (*(unsigned __int16*)(v4 + 50) == HIWORD(v15) &&
            *(unsigned __int16*)(*(_QWORD*)(v4 + 88) +
                                 16LL * (unsigned int)v15 + 8) == WORD2(v15)) {
          v16 = *(_QWORD*)(v4 + 296);
          if (*(int*)(v16 + 16) >= 1) {
            v17 = 0;
            v18 = 0;
            v19 = (unsigned int)v15;
            do {
              GameRoutine_1943530(
                  (_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 80) + v17) + 32 * v19),
                  v7);
              ++v18;
              v17 += 24;
            } while (v18 < *(int*)(v16 + 16));
          }
        }
        if (*(_BYTE*)(a1 + 64) == 1 && (int)v7 >= 1) {
          v21 = v7 & 0x7FFFFFFF;
          v22 = 16;
          v23 = 0;
          do {
            v24 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + v22);
            if (*(_DWORD*)(v24 + 208) == 1) {
              if (*(_QWORD*)(v13 + 32) != 0) {
                v25 = 80;
              }
              else {
                v25 = 72;
              }
              GameRoutine_193b020((__int64*)(v24 + 40), *(_QWORD*)(v13 + v25),
                                  v23);
            }
            ++v23;
            v22 += 24;
          } while (v21 != v23);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
}

#pragma GCC visibility pop
