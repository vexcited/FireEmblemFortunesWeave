#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a934d0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void Layout_c1d100(PSEUDO_X8, __int64 result,
                                              unsigned __int64, __int64,
                                              unsigned __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2020(unsigned __int16*, _WORD*);
__int64 GameRoutine_21c0(unsigned int*, unsigned int*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 Value_2500(__int64*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
bool GameRoutine_c05690(_QWORD*, __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int128 GameData_1a83440;
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fd2c20[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern char GameData_1a9f09e;
extern char GameData_1b80a34[5];
float GameStringReads_c3cd70(__int64, char*);
void __attribute__((noreturn)) String_60a1d0();
__int64 wld_map_WindLoader_create(int8x16_t* a1, __int64 a2,
                                  unsigned __int64 a3, char* a4, __int64* a5);
__int64 WindLoader_c72960(int8x16_t* a1);
__int64 WindLoader_c72b30(__int64 result, char a2);
__int64* WindLoader_c72c80(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                           __int64 a4, unsigned __int64 a5);
__int64 WindLoader_c734b0(__int64** a1, __int64* a2);
__int64 GameRoutine_1fa0(void);
__int64 GameRoutine_1fd0(_QWORD, _QWORD);
__int64 GameRoutine_2020_alt1(_QWORD, _QWORD) __asm__("GameRoutine_2020");
__int64 GameRoutine_21c0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_21c0");
__int64 GameRoutine_60a060_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_60a060");
__int64 GameRoutine_c05690_alt1(_QWORD, _QWORD) __asm__("GameRoutine_c05690");
__int64 Value_2500_alt1(_QWORD, _QWORD, _QWORD) __asm__("Value_2500");
__int64 WindLoader_c734b0_alt1(_QWORD, _QWORD) __asm__("WindLoader_c734b0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcmp_alt1(_QWORD, _QWORD) __asm__("memcmp");
__int64 memset_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    _QWORD) __asm__("memset");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64* GameData_212ce30;
__int64 wld_map_WindLoader_create_lambda0_Invoke(__int64 result, __int64* a2);

__int64 wld_map_WindLoader_create(int8x16_t* a1, __int64 a2,
                                  unsigned __int64 a3, char* a4, __int64* a5)
{

#pragma clang fp contract(off)
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  char v17;
  char v18;
  char v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 (**v23)();
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 result;
  unsigned __int64 v34;
  unsigned int v35;
  int8x16_t v36;
  int v37;
  unsigned int v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    unsigned __int64 v45;
    __int64 v46;
  } v45_;
  struct {
    _QWORD v47[2];
    __int64 v48;
  } v47_;
  struct {
    __int64 (**v49)();
    int8x16_t* v50;
    __int64 v51;
    char* v52;
    __int64* v53;
  } v49_;
  struct {
    __int64 (**v54)();
    int8x16_t* v55;
    char* v56;
  } v54_;

  v10 = fw_memory_g_heap_manager_ptr;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v11[2] = 0;
  v12 = LANES128(a1[11]).n128_u64[1];
  v11[8] = 0;
  *v11 = GameData_1fbf780;
  v11[1] = 0;
  LANES128(a1[11]).n128_u64[0] = (unsigned __int64)(v11 + 4);
  LANES128(a1[11]).n128_u64[1] = (unsigned __int64)v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = (_QWORD*)LANES128(a1[11]).n128_u64[0];
  v49_.v49 = GameData_1fd2c20;
  v49_.v50 = a1;
  v49_.v53 = (__int64*)&v49_.v49;
  GameRoutine_a934d0(&v49_.v49, v13);
  if (v49_.v53 == (__int64*)&v49_.v49) {
    v14 = 32;
    goto LABEL_8;
  }
  if (v49_.v53 != nullptr) {
    v14 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v49_.v53 + v14))((__int64)v49_.v53);
  }
  v47_.v48 = 0;
  v47_.v47[0] = 0;
  v47_.v47[1] = 0;
  if (a5 == nullptr) {
    goto LABEL_28;
  }
  WindLoader_c72c80(&v54_.v54, a2, a3, (__int64)a4, (unsigned __int64)a5);
  if (((unsigned __int8)v54_.v54 & 1) != 0) {
    v15 = (unsigned __int64)v54_.v55;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
  }
  if (((unsigned __int8)v54_.v54 & 1) != 0) {
    v16 = v54_.v56;
  }
  else {
    v16 = (char*)&v54_.v54 + 1;
  }
  v17 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
      **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
      *(_QWORD*)(game_g_frame_clock + 13432), v16, v15, 2);
  v18 = (char)v54_.v54;
  v19 = v17;
  if ((v17 & 1) != 0) {
    if (((unsigned __int8)v54_.v54 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)&v49_.v49, (__int64)v54_.v56,
                                    (unsigned __int64)v54_.v55);
      v18 = (char)v54_.v54;
    }
    else {
      v49_.v49 = v54_.v54;
      v49_.v50 = v54_.v55;
      v49_.v51 = (__int64)v54_.v56;
    }
    v49_.v52 = a4;
    v49_.v53 = a5;
  }
  if ((v18 & 1) != 0 && v54_.v56 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v20);
  }
  if ((v19 & 1) != 0) {
    v21 = v49_.v52;
    v22 = (unsigned __int64)v49_.v53;
  }
  else {
  LABEL_28:
    WindLoader_c72c80(&v54_.v54, a2, a3, (__int64)&GameData_1a9f09e, 0);
    v21 = &GameData_1a9f09e;
    v22 = 0;
    v49_.v53 = nullptr;
    v49_.v49 = v54_.v54;
    v49_.v50 = v54_.v55;
    v49_.v51 = (__int64)v54_.v56;
    v49_.v52 = &GameData_1a9f09e;
  }
  v23 = v49_.v49;
  LOWORD(v49_.v49) = 0;
  v54_.v54 = v23;
  v54_.v55 = v49_.v50;
  v54_.v56 = (char*)v49_.v51;
  GameRoutine_60a060((char*)v47_.v47, (__int64)v21, v22);
  if (((unsigned __int8)v49_.v49 & 1) != 0 && v49_.v51 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v24);
  }
  if (((unsigned __int8)v54_.v54 & 1) != 0) {
    v25 = (unsigned __int64)v54_.v55;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
  }
  if (((unsigned __int8)v54_.v54 & 1) != 0) {
    v26 = v54_.v56;
  }
  else {
    v26 = (char*)&v54_.v54 + 1;
  }
  if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
           **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
           *(_QWORD*)(game_g_frame_clock + 13432), v26, v25, 2) &
       1) != 0) {
    v28 = (unsigned __int64)v54_.v55;
    v27 = (__int64)v54_.v56;
    LANES128(a1[1]).n128_u32[0] = 1;
    v29 = *(_QWORD*)(game_g_frame_clock + 13432);
    if (((unsigned __int8)v54_.v54 & 1) != 0) {
      v30 = (char*)v27;
    }
    else {
      v30 = (char*)&v54_.v54 + 1;
    }
    if (((unsigned __int8)v54_.v54 & 1) != 0) {
      v31 = v28;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
    }
    v32 = LANES128(a1[11]).n128_u64[1];
    v45_.v45 = LANES128(a1[11]).n128_u64[0];
    v45_.v46 = v32;
    if (v32 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                memory_order_relaxed);
    }
    LANES128(a1[10]).n128_u64[1] =
        (*(__int64 (**)(__int64, char*, unsigned __int64, unsigned __int64*,
                        __int64))(*(_QWORD*)v29 + 16LL))(v29, v30, v31,
                                                         &v45_.v45, 255);
    result = v45_.v46;
    if (v45_.v46 != 0) {
      result = std___1___shared_weak_count___release_weak(v45_.v46);
    }
    if ((v47_.v47[0] & 1) == 0) {
      goto LABEL_79;
    }
  LABEL_75:
    if (v47_.v48 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v43 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v43);
    }
    goto LABEL_79;
  }
  result = LANES128(*(a1)).n128_i64[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v34 = LANES128(*(a1)).n128_u64[0];
      if (LANES128(*(a1)).n128_u64[0] != 0) {
        if (LANES128(a1[4]).n128_u8[0] != 0) {
          v35 = -1;
        }
        else {
          v35 = 0;
        }
        v36 = vbslq_s8(vdupq_n_s32(v35), a1[3],
                       COERCE_AS(int8x16_t, GameData_1a83440));
        if (LANES128(a1[5]).n128_u8[4] != 0) {
          v37 = LANES128(a1[5]).n128_i32[0];
        }
        else {
          v37 = 1;
        }
        if (LANES128(a1[10]).n128_u8[0] == 1 &&
            (LANES128(a1[9]).n128_u8[0] & 1) != 0) {
          v38 = LANES128(a1[7]).n128_u8[0] != 0 ? -1 : 0;
          v36 = vbslq_s8(vdupq_n_s32(v38), a1[6], v36);
          if (LANES128(a1[8]).n128_u8[4] != 0) {
            v37 = LANES128(a1[8]).n128_i32[0];
          }
        }
        v39 = vmulq_f32(v36, v36);
        LANES128(v39).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                .n64_u64[0];
        LANES128(v39).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                .n64_u64[0];
        LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
        v40 = vrsqrteq_f32(v39);
        v41 = vmulq_f32(v40, vrsqrtsq_f32(v40, vmulq_f32(v39, v40)));
        *(int8x16_t*)(*(_QWORD*)(v34 + 288) + 464LL) = vbicq_s8(
            vmulq_f32(v36,
                      vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v39, v41)))),
            vceqzq_f32(v39));
        if (v37 >= 2) {
          v37 = 2;
        }
        *(_DWORD*)(*(_QWORD*)(v34 + 288) + 480LL) =
            *(_DWORD*)&GameData_1b80a34[4 * v37];
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v42 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v42);
      }
    }
  }
  LANES128(a1[1]).n128_u32[0] = 2;
  if ((v47_.v47[0] & 1) != 0) {
    goto LABEL_75;
  }
LABEL_79:
  if (((unsigned __int8)v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v44 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v44);
  }
  return result;
}

__int64 WindLoader_c72960(int8x16_t* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  int8x16_t v7;
  int v8;
  unsigned int v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 result;

  v1 = LANES128(a1[10]).n128_i64[1];
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
    LANES128(a1[10]).n128_u64[1] = 0;
  }
  if (LANES128(a1[5]).n128_u8[4] == 1) {
    LANES128(a1[5]).n128_u8[4] = 0;
  }
  if (LANES128(a1[4]).n128_u8[0] == 1) {
    LANES128(a1[4]).n128_u8[0] = 0;
  }
  if (LANES128(a1[9]).n128_u8[0] == 1) {
    LANES128(a1[9]).n128_u8[0] = 0;
  }
  v3 = LANES128(*(a1)).n128_u64[1];
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = LANES128(*(a1)).n128_u64[0];
      if (LANES128(*(a1)).n128_u64[0] != 0) {
        if (LANES128(a1[4]).n128_u8[0] != 0) {
          v6 = -1;
        }
        else {
          v6 = 0;
        }
        v7 = vbslq_s8(vdupq_n_s32(v6), a1[3],
                      COERCE_AS(int8x16_t, GameData_1a83440));
        if (LANES128(a1[5]).n128_u8[4] != 0) {
          v8 = LANES128(a1[5]).n128_i32[0];
        }
        else {
          v8 = 1;
        }
        if (LANES128(a1[10]).n128_u8[0] == 1 &&
            (LANES128(a1[9]).n128_u8[0] & 1) != 0) {
          v9 = LANES128(a1[7]).n128_u8[0] != 0 ? -1 : 0;
          v7 = vbslq_s8(vdupq_n_s32(v9), a1[6], v7);
          if (LANES128(a1[8]).n128_u8[4] != 0) {
            v8 = LANES128(a1[8]).n128_i32[0];
          }
        }
        v10 = vmulq_f32(v7, v7);
        LANES128(v10).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_u64[0];
        LANES128(v10).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_u64[0];
        LANES128(v10).n128_u64[1] = LANES128(v10).n128_u64[0];
        v11 = vrsqrteq_f32(v10);
        v12 = vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v10, v11)));
        *(int8x16_t*)(*(_QWORD*)(v5 + 288) + 464LL) = vbicq_s8(
            vmulq_f32(v7,
                      vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v10, v12)))),
            vceqzq_f32(v10));
        if (v8 >= 2) {
          v8 = 2;
        }
        *(_DWORD*)(*(_QWORD*)(v5 + 288) + 480LL) =
            *(_DWORD*)&GameData_1b80a34[4 * v8];
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v13 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  v14 = LANES128(a1[11]).n128_u64[1];
  LANES128(a1[1]).n128_u32[0] = 0;
  if (v14 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = LANES128(*(a1)).n128_i64[1];
    if (result == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  (*(void (**)(unsigned __int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v14);
  result = LANES128(*(a1)).n128_i64[1];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 WindLoader_c72b30(__int64 result, char a2)
{

#pragma clang fp contract(off)
  int8x16_t* v2;
  unsigned __int64 v3;
  unsigned int v4;
  int8x16_t v5;
  int v6;
  unsigned int v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  __int64 v11;

  if (*(_BYTE*)(result + 160) != (a2 & 1)) {
    v2 = (int8x16_t*)result;
    *(_BYTE*)(result + 160) = a2 & 1;
    result = *(_QWORD*)(result + 8);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v3 = LANES128(*(v2)).n128_u64[0];
        if (LANES128(*(v2)).n128_u64[0] != 0) {
          if (LANES128(v2[4]).n128_u8[0] != 0) {
            v4 = -1;
          }
          else {
            v4 = 0;
          }
          v5 = vbslq_s8(vdupq_n_s32(v4), v2[3],
                        COERCE_AS(int8x16_t, GameData_1a83440));
          if (LANES128(v2[5]).n128_u8[4] != 0) {
            v6 = LANES128(v2[5]).n128_i32[0];
          }
          else {
            v6 = 1;
          }
          if (LANES128(v2[10]).n128_u8[0] == 1 &&
              (LANES128(v2[9]).n128_u8[0] & 1) != 0) {
            v7 = LANES128(v2[7]).n128_u8[0] != 0 ? -1 : 0;
            v5 = vbslq_s8(vdupq_n_s32(v7), v2[6], v5);
            if (LANES128(v2[8]).n128_u8[4] != 0) {
              v6 = LANES128(v2[8]).n128_i32[0];
            }
          }
          v8 = vmulq_f32(v5, v5);
          LANES128(v8).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(float32x2_t,
                                LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v8).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
          v9 = vrsqrteq_f32(v8);
          v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
          *(int8x16_t*)(*(_QWORD*)(v3 + 288) + 464LL) = vbicq_s8(
              vmulq_f32(v5,
                        vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10)))),
              vceqzq_f32(v8));
          if (v6 >= 2) {
            v6 = 2;
          }
          *(_DWORD*)(*(_QWORD*)(v3 + 288) + 480LL) =
              *(_DWORD*)&GameData_1b80a34[4 * v6];
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v11 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          return std___1___shared_weak_count___release_weak(v11);
        }
      }
    }
  }
  return result;
}

__int64* WindLoader_c72c80(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                           __int64 a4, unsigned __int64 a5)
{
  __int64* v8;
  char* v9;
  char* v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64* result;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v31;
    unsigned __int64 v32;
    char* v33;
  } v31_;
  struct {
    _QWORD v34[2];
    char* v35;
  } v34_;
  struct {
    _QWORD v36[2];
    __int64 v37;
  } v36_;
  struct {
    _QWORD v38[2];
    __int64 v39;
  } v38_;
  struct {
    __int16 v40;
    char gap106_[6];
    unsigned __int64 v41;
    char* v42;
  } v40_;

  Layout_c1d100((void*)(&v40_.v40), a4, a5, (__int64)&GameData_1a9f09e, 0);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v34_.v34[0] = 33;
  v34_.v34[1] = 28;
  v34_.v35 = v9;
  strcpy(v9, "Contents:/Graphics/Settings/");
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(*v8, v11, 16, 0);
    v31_.v32 = a3;
    v31_.v33 = v10;
    v31_.v31 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v31_.v31) = 2 * a3;
  v10 = (char*)&v31_.v31 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove(v10, a2, a3);
  }
  v10[a3] = 0;
  if ((v31_.v31 & 1) != 0) {
    v12 = v31_.v33;
  }
  else {
    v12 = (char*)&v31_.v31 + 1;
  }
  if ((v31_.v31 & 1) != 0) {
    v13 = v31_.v32;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v31_.v31 >> 1;
  }
  v14 = (_QWORD*)GameRoutine_1a09ce0(v34_.v34, v12, v13);
  v16 = v14[1];
  v15 = v14[2];
  v36_.v36[0] = *v14;
  v36_.v36[1] = v16;
  v36_.v37 = v15;
  v14[1] = 0;
  v14[2] = 0;
  *v14 = 0;
  if ((v40_.v40 & 1) != 0) {
    v17 = v40_.v42;
  }
  else {
    v17 = (char*)&v40_.v40 + 1;
  }
  if ((v40_.v40 & 1) != 0) {
    v18 = v40_.v41;
  }
  else {
    v18 = (unsigned __int64)(unsigned __int8)v40_.v40 >> 1;
  }
  v19 = (_QWORD*)GameRoutine_1a09ce0(v36_.v36, v17, v18);
  v21 = v19[1];
  v20 = v19[2];
  v38_.v38[0] = *v19;
  v38_.v38[1] = v21;
  v38_.v39 = v20;
  v19[1] = 0;
  v19[2] = 0;
  *v19 = 0;
  result = (__int64*)GameRoutine_1a09ce0(v38_.v38, ".wind", 5);
  v23 = *result;
  v24 = result[1];
  *result = 0;
  result[1] = 0;
  *a1 = v23;
  a1[1] = v24;
  v25 = result[2];
  result[2] = 0;
  a1[2] = v25;
  if ((v38_.v38[0] & 1) != 0 && v38_.v39 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v26 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v8 + v26);
  }
  if ((v36_.v36[0] & 1) != 0 && v36_.v37 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v27 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v8 + v27);
  }
  if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v28 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v8 + v28);
  }
  if ((v34_.v34[0] & 1) != 0 && v34_.v35 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v29 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v8 + v29);
  }
  if ((v40_.v40 & 1) != 0 && v40_.v42 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v30 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(*v8 + v30);
  }
  return result;
}

__int64 wld_map_WindLoader_create_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int8x16_t* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  __int64 v16;
  char v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  _BOOL4 v21;
  long double v22;
  _BOOL4 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  int8x16_t v33;
  int v34;
  unsigned int v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD v43[7];
  __int16 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  _QWORD v48[4];
  __int64 v49;
  unsigned __int64 v50;
  char* v51;
  int8x16_t* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  int v55;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 592);
  if (v3 != 0) {
    v43[6] = 0;
    v4 = *(int8x16_t**)(result + 8);
    v5 = *(_QWORD*)(v2 + 576);
    v45 = 0;
    v43[4] = -1;
    v43[5] = 0;
    v44 = 257;
    v46 = v3;
    v47 = v5;
    v43[0] = GameData_212ce30 + 2;
    memset(&v43[1], 0, 24);
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 544, 16, 0);
    *(_QWORD*)v7 = 0;
    *(_BYTE*)(v7 + 12) = 0;
    v42 = (_QWORD*)v7;
    *(_DWORD*)(v7 + 8) = -1;
    *(_QWORD*)(v7 + 16) = v7 + 32;
    *(_QWORD*)(v7 + 24) = v7 + 32;
    GameRoutine_1fa0();
    GameRoutine_1fd0(v7, v43);
    LOBYTE(v50) = 0;
    LOBYTE(v49) = 14;
    v52 = v4 + 2;
    *(_DWORD*)((char*)&v49 + 1) = 1936876918;
    HIDWORD(v49) = 1852795251;
    if ((GameRoutine_c05690_alt1(&v42, &v49) & 1) != 0) {
      GameRoutine_21c0_alt1(v42, v52);
    }
    if ((v49 & 1) != 0 && v51 != nullptr) {
      v9 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v9, v8);
    }
    v52 = v4 + 3;
    v49 = 0x6D617261700ALL;
    WindLoader_c734b0_alt1(&v42, &v49);
    v50 = 0;
    v51 = nullptr;
    v49 = 0;
    LOWORD(v48[0]) = 0;
    GameRoutine_2020_alt1(v42, v48);
    v10 = SLOWORD(v48[0]);
    v11 = fw_memory_HeapManager_Allocate_alt1(*v6, SLOWORD(v48[0]), 16, 0);
    memset_alt1(v11, 0, v10, v12, v13, v14);
    Value_2500_alt1(v42, v11, v10);
    GameRoutine_60a060_alt1(&v49, v11, SLOWORD(v48[0]));
    v16 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v16, v15);
    v17 = v49;
    v48[0] = 0x6D6172615078650ELL;
    v48[1] = 0;
    v18 = v51;
    if ((v49 & 1) != 0) {
      v19 = v50;
    }
    else {
      v19 = (unsigned __int64)(unsigned __int8)v49 >> 1;
    }
    if ((v49 & 1) != 0) {
      v20 = v51;
    }
    else {
      v20 = (char*)&v49 + 1;
    }
    v21 = memcmp_alt1((char*)v48 + 1, v20) == 0;
    v23 = v19 == 7 && v21;
    if ((v17 & 1) != 0 && v18 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v24, v22);
    }
    if (v23) {
      v55 = 0;
      GameRoutine_21c0_alt1(v42, &v55);
      if (v55 != 0) {
        LOBYTE(v49) = 0;
        LOBYTE(v51) = 0;
        LOBYTE(v53) = 0;
        BYTE4(v53) = 0;
        LOWORD(v48[0]) = 0;
        v48[3] = &v49;
        WindLoader_c734b0_alt1(&v42, v48);
        v25 = (unsigned __int64)v52;
        if (LANES128(v4[9]).n128_u8[0] == 1) {
          LANES128(v4[7]).n128_u64[0] = (unsigned __int64)v51;
          LANES128(v4[7]).n128_u64[1] = v25;
          LANES128(v4[8]).n128_u64[0] = v53;
          v26 = v50;
          LANES128(v4[6]).n128_u64[0] = v49;
          LANES128(v4[6]).n128_u64[1] = v26;
        }
        else {
          LANES128(v4[7]).n128_u64[0] = (unsigned __int64)v51;
          LANES128(v4[7]).n128_u64[1] = v25;
          v27 = v54;
          LANES128(v4[8]).n128_u64[0] = v53;
          LANES128(v4[8]).n128_u64[1] = v27;
          v28 = v50;
          LANES128(v4[6]).n128_u64[0] = v49;
          LANES128(v4[6]).n128_u64[1] = v28;
          LANES128(v4[9]).n128_u8[0] = 1;
        }
      }
      else if (LANES128(v4[9]).n128_u8[0] == 1) {
        LANES128(v4[9]).n128_u8[0] = 0;
      }
    }
    v29 = LANES128(*(v4)).n128_u64[1];
    if (v29 != 0) {
      v30 = std___1___shared_weak_count_lock(v29);
      if (v30 != 0) {
        v31 = LANES128(*(v4)).n128_u64[0];
        if (LANES128(*(v4)).n128_u64[0] != 0) {
          if (LANES128(v4[4]).n128_u8[0] != 0) {
            v32 = -1;
          }
          else {
            v32 = 0;
          }
          v33 = vbslq_s8(vdupq_n_s32(v32), v4[3],
                         COERCE_AS(int8x16_t, GameData_1a83440));
          if (LANES128(v4[5]).n128_u8[4] != 0) {
            v34 = LANES128(v4[5]).n128_i32[0];
          }
          else {
            v34 = 1;
          }
          if (LANES128(v4[10]).n128_u8[0] == 1 &&
              (LANES128(v4[9]).n128_u8[0] & 1) != 0) {
            v35 = LANES128(v4[7]).n128_u8[0] != 0 ? -1 : 0;
            v33 = vbslq_s8(vdupq_n_s32(v35), v4[6], v33);
            if (LANES128(v4[8]).n128_u8[4] != 0) {
              v34 = LANES128(v4[8]).n128_i32[0];
            }
          }
          v36 = vmulq_f32(v33, v33);
          LANES128(v36).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v36).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
          v37 = vrsqrteq_f32(v36);
          v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
          v22 = COERCE_LONG_DOUBLE(vbicq_s8(
              vmulq_f32(v33,
                        vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
              vceqzq_f32(v36)));
          *(long double*)(*(_QWORD*)(v31 + 288) + 464LL) = v22;
          if (v34 >= 2) {
            v34 = 2;
          }
          LODWORD(v22) = *(_DWORD*)&GameData_1b80a34[4 * v34];
          *(_DWORD*)(*(_QWORD*)(v31 + 288) + 480LL) = LODWORD(v22);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v39 = v30;
          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
          std___1___shared_weak_count___release_weak(v39);
        }
      }
    }
    *v42 = 0;
    v40 = v42;
    v42 = nullptr;
    if (v40 != nullptr) {
      v41 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v41, v22);
    }
    result = (*(__int64 (**)(_QWORD*))(v43[0] + 24LL))(v43);
    LANES128(v4[1]).n128_u32[0] = 2;
  }
  return result;
}

__int64 WindLoader_c734b0(__int64** a1, __int64* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v13;
  __int64 v14;
  int v15;
  char v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 result;
  _BOOL4 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v35;
  char v36;
  char* v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  _BOOL4 v41;
  _BOOL4 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v53;
  char v54;
  char* v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v58;
  _BOOL4 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    char* v65;
    unsigned int* v66;
  } v63_;
  unsigned int v67;
  struct {
    __int64 v68;
    __int64 v69;
    char* v70;
  } v68_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v63_.v63, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v63_.v63 = *a2;
    v63_.v64 = v4;
    v63_.v65 = (char*)a2[2];
  }
  if ((v63_.v63 & 1) != 0) {
    v5 = v63_.v64;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  }
  if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v63_.v64 = 0;
  v63_.v65 = nullptr;
  v63_.v63 = 0;
  LOWORD(v68_.v68) = 0;
  GameRoutine_2020((unsigned __int16*)v7, &v68_.v68);
  v8 = (__int16)v68_.v68;
  v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                      (__int16)v68_.v68, 16, 0);
  memset(v9, 0, v8);
  Value_2500(*a1, v9, v8);
  GameRoutine_60a060((char*)&v63_.v63, v9, (__int16)v68_.v68);
  v13 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v13);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v68_.v68, a2[2], a2[1]);
  }
  else {
    v14 = a2[1];
    v68_.v68 = *a2;
    v68_.v69 = v14;
    v68_.v70 = (char*)a2[2];
  }
  v15 = v63_.v63 & 1;
  v16 = v68_.v68;
  if (v15 != 0) {
    v17 = v63_.v65;
  }
  else {
    v17 = (char*)&v63_.v63 + 1;
  }
  v18 = v68_.v70;
  if ((v63_.v63 & 1) != 0) {
    v19 = v63_.v64;
  }
  else {
    v19 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  }
  if ((v68_.v68 & 1) != 0) {
    v20 = v68_.v69;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v68_.v68 >> 1;
  }
  if ((v68_.v68 & 1) != 0) {
    v21 = v68_.v70;
  }
  else {
    v21 = (char*)&v68_.v68 + 1;
  }
  if (v19 >= v20) {
    v22 = v20;
  }
  else {
    v22 = v19;
  }
  result = memcmp(v21, v17, v22);
  v25 = (_DWORD)result == 0 && v20 == v19;
  if ((v16 & 1) != 0 && v18 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v26 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v26);
    v15 = v63_.v63 & 1;
  }
  if (v15 != 0 && v63_.v65 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v27);
  }
  if (v25) {
  LABEL_50:
    v28 = *a1;
    v29 = a2[3];
    v63_.v64 = 0;
    v63_.v65 = nullptr;
    v63_.v63 = 0;
    LOWORD(v68_.v68) = 0;
    GameRoutine_2020((unsigned __int16*)v28, &v68_.v68);
    v30 = (__int16)v68_.v68;
    v31 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                         (__int16)v68_.v68, 16, 0);
    memset(v31, 0, v30);
    Value_2500(*a1, v31, v30);
    GameRoutine_60a060((char*)&v63_.v63, v31, (__int16)v68_.v68);
    v35 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35);
    v36 = v63_.v63;
    v68_.v68 = 0x6974636572696412LL;
    v68_.v69 = 28271;
    v37 = v63_.v65;
    if ((v63_.v63 & 1) != 0) {
      v38 = v63_.v64;
    }
    else {
      v38 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
    }
    if ((v63_.v63 & 1) != 0) {
      v39 = v63_.v65;
    }
    else {
      v39 = (char*)&v63_.v63 + 1;
    }
    if (v38 >= 9) {
      v40 = 9;
    }
    else {
      v40 = v38;
    }
    v41 = memcmp((char*)&v68_.v68 + 1, v39, v40) == 0;
    v42 = v38 == 9 && v41;
    if ((v36 & 1) != 0 && v37 != nullptr) {
      v43 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v43);
    }
    v44 = *a1;
    if (v42) {
      v67 = 0;
      GameRoutine_21c0((unsigned int*)v44, &v67);
      if (v67 != 0) {
        LOWORD(v63_.v63) = 0;
        v63_.v66 = (unsigned int*)&v68_.v68;
        GameStringReads_c3cd70((__int64)a1, (char*)&v63_.v63);
        if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
          v45 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v45);
        }
        v46 = *(_BYTE*)(v29 + 16);
        v47 = v68_.v69;
        *(_QWORD*)v29 = v68_.v68;
        *(_QWORD*)(v29 + 8) = v47;
        if ((v46 & 1) == 0) {
          *(_BYTE*)(v29 + 16) = 1;
        }
      }
      else if (*(_BYTE*)(v29 + 16) == 1) {
        *(_BYTE*)(v29 + 16) = 0;
      }
      v44 = *a1;
    }
    v63_.v64 = 0;
    v63_.v65 = nullptr;
    v63_.v63 = 0;
    LOWORD(v68_.v68) = 0;
    GameRoutine_2020((unsigned __int16*)v44, &v68_.v68);
    v48 = (__int16)v68_.v68;
    v49 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                         (__int16)v68_.v68, 16, 0);
    memset(v49, 0, v48);
    Value_2500(*a1, v49, v48);
    GameRoutine_60a060((char*)&v63_.v63, v49, (__int16)v68_.v68);
    v53 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v53);
    v54 = v63_.v63;
    v68_.v68 = 0x654C646565707314LL;
    v68_.v69 = 7103862;
    v55 = v63_.v65;
    if ((v63_.v63 & 1) != 0) {
      v56 = v63_.v64;
    }
    else {
      v56 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
    }
    if ((v63_.v63 & 1) != 0) {
      v57 = v63_.v65;
    }
    else {
      v57 = (char*)&v63_.v63 + 1;
    }
    if (v56 >= 0xA) {
      v58 = 10;
    }
    else {
      v58 = v56;
    }
    result = memcmp((char*)&v68_.v68 + 1, v57, v58);
    v59 = v56 == 10 && result == 0;
    if ((v54 & 1) != 0 && v55 != nullptr) {
      v60 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v60 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v60);
    }
    if (v59) {
      v61 = *a1;
      LODWORD(v68_.v68) = 0;
      result = GameRoutine_21c0((unsigned int*)v61, (unsigned int*)&v68_.v68);
      if ((_DWORD)v68_.v68 != 0) {
        LOWORD(v63_.v63) = 0;
        v63_.v66 = &v67;
        result = GameRoutine_c05690(a1, (__int64)&v63_.v63);
        if ((result & 1) != 0) {
          result = GameRoutine_21c0((unsigned int*)*a1, v63_.v66);
        }
        if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
          v62 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v62 = 56;
          }
          result =
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v62);
        }
        *(_DWORD*)(v29 + 32) = v67;
        *(_BYTE*)(v29 + 36) = 1;
      }
      else if (*(_BYTE*)(v29 + 36) == 1) {
        *(_BYTE*)(v29 + 36) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
