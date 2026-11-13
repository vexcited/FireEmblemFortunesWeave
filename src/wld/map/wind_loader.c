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
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
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
__int64 wld_map_WindLoader_create_alt1(
    int8x16_t* a1, __int64 a2, unsigned __int64 a3, char* a4,
    __int64* a5) __asm__("wld_map_WindLoader_create");
__int64 WindLoader_c72960(int8x16_t* a1);
__int64 WindLoader_c72b30(__int64 result, char a2);
__int64* WindLoader_c72c80(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                           __int64 a4, unsigned __int64 a5);
__int64 WindLoader_c734b0_alt3(__int64** a1,
                               __int64* a2) __asm__("WindLoader_c734b0");
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
__int64 GameRoutine_1fa0_alt1(__int64, int) __asm__("GameRoutine_1fa0");
__int64 GameRoutine_1fd0_alt1(__int64, __int64) __asm__("GameRoutine_1fd0");
__int64 memset_alt2(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 timeline_2020(unsigned __int16*, _WORD*);
__int64 timeline_21c0(unsigned int*, unsigned int*);
extern __int64 GameData_212ce30_alt1 __asm__("GameData_212ce30");
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 Value_2500_alt2(__int64*, __int64,
                                 unsigned __int64) __asm__("Value_2500");
void WindLoader_c734b0_alt2(__int64**, __int64*) __asm__("WindLoader_c734b0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
bool GameRoutine_c05690_alt2(__int64**, __int64) __asm__("GameRoutine_c05690");
void WindLoader_c72c80_alt1(_QWORD*, __int64, unsigned __int64, __int64,
                            unsigned __int64) __asm__("WindLoader_c72c80");
void wld_map_WindLoader_create(int8x16_t* a1, __int64 a2, unsigned __int64 a3,
                               __int64 a4, unsigned __int64 a5);
void WindLoader_c734b0(__int64** a1, __int64* a2);

void wld_map_WindLoader_create(int8x16_t* a1, __int64 a2, unsigned __int64 a3,
                               __int64 a4, unsigned __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned int v36;
  int8x16_t v37;
  int v38;
  unsigned int v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    unsigned __int64 v46;
    __int64 v47;
  } v46_;
  struct {
    _QWORD v48[2];
    __int64 v49;
  } v48_;
  struct {
    __int64 (**v50)();
    unsigned __int64 v51;
    char* v52;
    char* v53;
    __int64* v54;
  } v50_;
  struct {
    __int64 (**v55)();
    unsigned __int64 v56;
    char* v57;
  } v55_;

  v10 = fw_memory_g_heap_manager_ptr;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v11[2] = 0;
  v12 = LANES128(a1[11]).n128_i64[1];
  v11[8] = 0;
  *v11 = GameData_1fbf780;
  v11[1] = 0;
  LANES128(a1[11]).n128_u64[0] = (unsigned __int64)(v11 + 4);
  LANES128(a1[11]).n128_u64[1] = (unsigned __int64)v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = (_QWORD*)LANES128(a1[11]).n128_u64[0];
  v50_.v50 = GameData_1fd2c20;
  v50_.v51 = (unsigned __int64)a1;
  v50_.v54 = (__int64*)&v50_.v50;
  GameRoutine_a934d0(&v50_.v50, v13);
  if (v50_.v54 == (__int64*)&v50_.v50) {
    v14 = 32;
    goto LABEL_8;
  }
  if (v50_.v54 != nullptr) {
    v14 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v50_.v54 + v14))((__int64)v50_.v54);
  }
  v48_.v49 = 0;
  v48_.v48[0] = 0;
  v48_.v48[1] = 0;
  if (a5 == 0) {
    goto LABEL_28;
  }
  WindLoader_c72c80_alt1(&v55_.v55, a2, a3, a4, a5);
  if (((unsigned __int8)v55_.v55 & 1) != 0) {
    v15 = v55_.v56;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
  }
  if (((unsigned __int8)v55_.v55 & 1) != 0) {
    v16 = v55_.v57;
  }
  else {
    v16 = (char*)&v55_.v55 + 1;
  }
  v17 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
      **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
      *(_QWORD*)(game_g_frame_clock + 13432), v16, v15, 2);
  v18 = (char)v55_.v55;
  v19 = v17;
  if ((v17 & 1) != 0) {
    if (((unsigned __int8)v55_.v55 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)&v50_.v50, (__int64)v55_.v57,
                                    v55_.v56);
      v18 = (char)v55_.v55;
    }
    else {
      v50_.v50 = v55_.v55;
      v50_.v51 = v55_.v56;
      v50_.v52 = v55_.v57;
    }
    v50_.v53 = (char*)a4;
    v50_.v54 = (__int64*)a5;
  }
  if ((v18 & 1) != 0 && v55_.v57 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v20, (__int64)v55_.v57);
  }
  if ((v19 & 1) != 0) {
    v21 = v50_.v53;
    v22 = (unsigned __int64)v50_.v54;
  }
  else {
  LABEL_28:
    WindLoader_c72c80_alt1(&v55_.v55, a2, a3, (__int64)&GameData_1a9f09e, 0);
    v21 = &GameData_1a9f09e;
    v22 = 0;
    v50_.v54 = nullptr;
    v50_.v50 = v55_.v55;
    v50_.v51 = v55_.v56;
    v50_.v52 = v55_.v57;
    v50_.v53 = &GameData_1a9f09e;
  }
  v23 = v50_.v50;
  LOWORD(v50_.v50) = 0;
  v55_.v55 = v23;
  v55_.v56 = v50_.v51;
  v55_.v57 = v50_.v52;
  GameRoutine_60a060((char*)v48_.v48, (__int64)v21, v22);
  if (((unsigned __int8)v50_.v50 & 1) != 0 && v50_.v52 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v24, (__int64)v50_.v52);
  }
  if (((unsigned __int8)v55_.v55 & 1) != 0) {
    v25 = v55_.v56;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
  }
  if (((unsigned __int8)v55_.v55 & 1) != 0) {
    v26 = v55_.v57;
  }
  else {
    v26 = (char*)&v55_.v55 + 1;
  }
  if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
           **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
           *(_QWORD*)(game_g_frame_clock + 13432), v26, v25, 2) &
       1) != 0) {
    v28 = v55_.v56;
    v27 = (__int64)v55_.v57;
    LANES128(a1[1]).n128_u32[0] = 1;
    v29 = *(_QWORD*)(game_g_frame_clock + 13432);
    if (((unsigned __int8)v55_.v55 & 1) != 0) {
      v30 = (char*)v27;
    }
    else {
      v30 = (char*)&v55_.v55 + 1;
    }
    if (((unsigned __int8)v55_.v55 & 1) != 0) {
      v31 = v28;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
    }
    v32 = LANES128(a1[11]).n128_i64[1];
    v46_.v46 = LANES128(a1[11]).n128_u64[0];
    v46_.v47 = v32;
    if (v32 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                memory_order_relaxed);
    }
    LANES128(a1[10]).n128_u64[1] =
        (*(__int64 (**)(__int64, char*, unsigned __int64, unsigned __int64*,
                        __int64))(*(_QWORD*)v29 + 16LL))(v29, v30, v31,
                                                         &v46_.v46, 255);
    if (v46_.v47 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v46_.v47);
    }
    if ((v48_.v48[0] & 1) == 0) {
      goto LABEL_79;
    }
  LABEL_75:
    if (v48_.v49 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v44, v48_.v49);
    }
    goto LABEL_79;
  }
  v33 = LANES128(*(a1)).n128_i64[1];
  if (v33 != 0) {
    v34 = std___1___shared_weak_count_lock_alt1(v33);
    if (v34 != 0) {
      v35 = LANES128(*(a1)).n128_u64[0];
      if (LANES128(*(a1)).n128_u64[0] != 0) {
        if (LANES128(a1[4]).n128_u8[0] != 0) {
          v36 = -1;
        }
        else {
          v36 = 0;
        }
        v37 = vbslq_s8(vdupq_n_s32(v36), a1[3],
                       COERCE_AS(int8x16_t, GameData_1a83440));
        if (LANES128(a1[5]).n128_u8[4] != 0) {
          v38 = LANES128(a1[5]).n128_i32[0];
        }
        else {
          v38 = 1;
        }
        if (LANES128(a1[10]).n128_u8[0] == 1 &&
            (LANES128(a1[9]).n128_u8[0] & 1) != 0) {
          v39 = LANES128(a1[7]).n128_u8[0] != 0 ? -1 : 0;
          v37 = vbslq_s8(vdupq_n_s32(v39), a1[6], v37);
          if (LANES128(a1[8]).n128_u8[4] != 0) {
            v38 = LANES128(a1[8]).n128_i32[0];
          }
        }
        v40 = vmulq_f32(v37, v37);
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                .n64_u64[0];
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                .n64_u64[0];
        LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
        v41 = vrsqrteq_f32(v40);
        v42 = vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v40, v41)));
        *(int8x16_t*)(*(_QWORD*)(v35 + 288) + 464LL) = vbicq_s8(
            vmulq_f32(v37,
                      vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v40, v42)))),
            vceqzq_f32(v40));
        if (v38 >= 2) {
          v38 = 2;
        }
        *(_DWORD*)(*(_QWORD*)(v35 + 288) + 480LL) =
            *(_DWORD*)&GameData_1b80a34[4 * v38];
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v43 = v34;
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak_alt1(v43);
      }
    }
  }
  LANES128(a1[1]).n128_u32[0] = 2;
  if ((v48_.v48[0] & 1) != 0) {
    goto LABEL_75;
  }
LABEL_79:
  if (((unsigned __int8)v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v45, (__int64)v55_.v57);
  }
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
    result =
        (__int64*)nn_mem_StandardAllocator_Free(*v8 + v26, (_QWORD)(v38_.v39));
  }
  if ((v36_.v36[0] & 1) != 0 && v36_.v37 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v27 = 56;
    }
    result =
        (__int64*)nn_mem_StandardAllocator_Free(*v8 + v27, (_QWORD)(v36_.v37));
  }
  if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v28 = 56;
    }
    result =
        (__int64*)nn_mem_StandardAllocator_Free(*v8 + v28, (_QWORD)(v31_.v33));
  }
  if ((v34_.v34[0] & 1) != 0 && v34_.v35 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v29 = 56;
    }
    result =
        (__int64*)nn_mem_StandardAllocator_Free(*v8 + v29, (_QWORD)(v34_.v35));
  }
  if ((v40_.v40 & 1) != 0 && v40_.v42 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v30 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(*v8 + v30,
                                                   (_QWORD)(v40_.v42));
  }
  return result;
}

__int64 wld_map_WindLoader_create_lambda0_Invoke(__int64 result, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int8x16_t* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  _BOOL4 v17;
  _BOOL4 v18;
  __int64 v19;
  unsigned int* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  int8x16_t v28;
  int v29;
  unsigned int v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  unsigned int* v37;
  struct {
    _QWORD v38[7];
    __int16 v39;
    char gap74_[2];
    int v40;
    __int64 v41;
    __int64 v42;
  } v38_;
  __int64 v43[4];
  struct {
    unsigned __int64 v44;
    unsigned __int64 v45;
    char* v46;
    int8x16_t* v47;
    unsigned __int64 v48;
    unsigned __int64 v49;
  } v44_;
  unsigned int v50;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 592);
  if (v3 != 0) {
    v38_.v38[6] = 0;
    v4 = *(int8x16_t**)(result + 8);
    v5 = *(_QWORD*)(v2 + 576);
    v38_.v40 = 0;
    v38_.v38[4] = -1;
    v38_.v38[5] = 0;
    v38_.v39 = 257;
    v38_.v41 = v3;
    v38_.v42 = v5;
    v38_.v38[0] = GameData_212ce30_alt1 + 16;
    __builtin_memset(&v38_.v38[1], 0, 24);
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        544, 16, 0);
    *(_QWORD*)v7 = 0;
    *(_BYTE*)(v7 + 12) = 0;
    v37 = (unsigned int*)v7;
    *(_DWORD*)(v7 + 8) = -1;
    *(_QWORD*)(v7 + 16) = v7 + 32;
    *(_QWORD*)(v7 + 24) = v7 + 32;
    GameRoutine_1fa0_alt1(v7, 0);
    GameRoutine_1fd0_alt1(v7, (__int64)v38_.v38);
    LOBYTE(v44_.v45) = 0;
    LOBYTE(v44_.v44) = 14;
    v44_.v47 = v4 + 2;
    *(_DWORD*)((char*)&v44_.v44 + 1) = 1936876918;
    HIDWORD(v44_.v44) = 1852795251;
    if (GameRoutine_c05690(&v37, (__int64)&v44_.v44)) {
      timeline_21c0(v37, (unsigned int*)v44_.v47);
    }
    if ((v44_.v44 & 1) != 0 && v44_.v46 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v6 + v8, (__int64)v44_.v46);
    }
    v44_.v47 = v4 + 3;
    v44_.v44 = 0x6D617261700ALL;
    WindLoader_c734b0_alt2((__int64**)&v37, (__int64*)&v44_.v44);
    v44_.v45 = 0;
    v44_.v46 = nullptr;
    v44_.v44 = 0;
    LOWORD(v43[0]) = 0;
    timeline_2020((unsigned __int16*)v37, v43);
    v9 = SLOWORD(v43[0]);
    v10 = fw_memory_HeapManager_Allocate(*v6, SLOWORD(v43[0]), 16, 0);
    memset_alt2(v10, 0, v9);
    Value_2500_alt2((__int64*)v37, v10, v9);
    GameRoutine_60a060((char*)&v44_.v44, v10, SLOWORD(v43[0]));
    v11 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v11, v10);
    v12 = v44_.v44;
    v43[0] = 0x6D6172615078650ELL;
    v43[1] = 0;
    v13 = (__int64)v44_.v46;
    if ((v44_.v44 & 1) != 0) {
      v14 = v44_.v45;
    }
    else {
      v14 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    if ((v44_.v44 & 1) != 0) {
      v15 = v44_.v46;
    }
    else {
      v15 = (char*)&v44_.v44 + 1;
    }
    if (v14 >= 7) {
      v16 = 7;
    }
    else {
      v16 = v14;
    }
    v17 = memcmp_alt2((__int64)v43 + 1, (__int64)v15, v16) == 0;
    v18 = v14 == 7 && v17;
    if ((v12 & 1) != 0 && v13 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v6 + v19, v13);
    }
    if (v18) {
      v50 = 0;
      timeline_21c0(v37, &v50);
      if (v50 != 0) {
        LOBYTE(v44_.v44) = 0;
        LOBYTE(v44_.v46) = 0;
        LOBYTE(v44_.v48) = 0;
        BYTE4(v44_.v48) = 0;
        LOWORD(v43[0]) = 0;
        v43[3] = (__int64)&v44_.v44;
        WindLoader_c734b0_alt2((__int64**)&v37, v43);
        v20 = (unsigned int*)v44_.v47;
        if (LANES128(v4[9]).n128_u8[0] == 1) {
          LANES128(v4[7]).n128_u64[0] = (unsigned __int64)v44_.v46;
          LANES128(v4[7]).n128_u64[1] = (unsigned __int64)v20;
          LANES128(v4[8]).n128_u64[0] = v44_.v48;
          v21 = v44_.v45;
          LANES128(v4[6]).n128_u64[0] = v44_.v44;
          LANES128(v4[6]).n128_u64[1] = v21;
        }
        else {
          LANES128(v4[7]).n128_u64[0] = (unsigned __int64)v44_.v46;
          LANES128(v4[7]).n128_u64[1] = (unsigned __int64)v20;
          v22 = v44_.v49;
          LANES128(v4[8]).n128_u64[0] = v44_.v48;
          LANES128(v4[8]).n128_u64[1] = v22;
          v23 = v44_.v45;
          LANES128(v4[6]).n128_u64[0] = v44_.v44;
          LANES128(v4[6]).n128_u64[1] = v23;
          LANES128(v4[9]).n128_u8[0] = 1;
        }
      }
      else if (LANES128(v4[9]).n128_u8[0] == 1) {
        LANES128(v4[9]).n128_u8[0] = 0;
      }
    }
    v24 = LANES128(*(v4)).n128_i64[1];
    if (v24 != 0) {
      v25 = std___1___shared_weak_count_lock_alt1(v24);
      if (v25 != 0) {
        v26 = LANES128(*(v4)).n128_u64[0];
        if (LANES128(*(v4)).n128_u64[0] != 0) {
          if (LANES128(v4[4]).n128_u8[0] != 0) {
            v27 = -1;
          }
          else {
            v27 = 0;
          }
          v28 = vbslq_s8(vdupq_n_s32(v27), v4[3],
                         COERCE_AS(int8x16_t, GameData_1a83440));
          if (LANES128(v4[5]).n128_u8[4] != 0) {
            v29 = LANES128(v4[5]).n128_i32[0];
          }
          else {
            v29 = 1;
          }
          if (LANES128(v4[10]).n128_u8[0] == 1 &&
              (LANES128(v4[9]).n128_u8[0] & 1) != 0) {
            v30 = LANES128(v4[7]).n128_u8[0] != 0 ? -1 : 0;
            v28 = vbslq_s8(vdupq_n_s32(v30), v4[6], v28);
            if (LANES128(v4[8]).n128_u8[4] != 0) {
              v29 = LANES128(v4[8]).n128_i32[0];
            }
          }
          v31 = vmulq_f32(v28, v28);
          LANES128(v31).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v31).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v31).n128_u64[1] = LANES128(v31).n128_u64[0];
          v32 = vrsqrteq_f32(v31);
          v33 = vmulq_f32(v32, vrsqrtsq_f32(v32, vmulq_f32(v31, v32)));
          *(int8x16_t*)(*(_QWORD*)(v26 + 288) + 464LL) = vbicq_s8(
              vmulq_f32(v28,
                        vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v31, v33)))),
              vceqzq_f32(v31));
          if (v29 >= 2) {
            v29 = 2;
          }
          *(_DWORD*)(*(_QWORD*)(v26 + 288) + 480LL) =
              *(_DWORD*)&GameData_1b80a34[4 * v29];
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v34 = v25;
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak_alt1(v34);
        }
      }
    }
    *(_QWORD*)v37 = 0;
    v35 = (__int64*)v37;
    v37 = nullptr;
    if (v35 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v6 + v36, (__int64)v35);
    }
    result = (*(__int64 (**)(_QWORD*))(v38_.v38[0] + 24LL))(v38_.v38);
    LANES128(v4[1]).n128_u32[0] = 2;
  }
  return result;
}

void WindLoader_c734b0(__int64** a1, __int64* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  unsigned __int64 v33;
  _BOOL4 v34;
  _BOOL4 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  char v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  unsigned __int64 v48;
  _BOOL4 v49;
  _BOOL4 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    char* v56;
    unsigned int* v57;
  } v54_;
  unsigned int v58;
  struct {
    __int64 v59;
    __int64 v60;
    char* v61;
  } v59_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v54_.v54, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v54_.v54 = *a2;
    v54_.v55 = v4;
    v54_.v56 = (char*)a2[2];
  }
  if ((v54_.v54 & 1) != 0) {
    v5 = v54_.v55;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
  }
  if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v6,
                                       (__int64)v54_.v56);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v54_.v55 = 0;
  v54_.v56 = nullptr;
  v54_.v54 = 0;
  LOWORD(v59_.v59) = 0;
  timeline_2020((unsigned __int16*)v7, &v59_.v59);
  v8 = (__int16)v59_.v59;
  v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                      (__int16)v59_.v59, 16, 0);
  memset_alt2(v9, 0, v8);
  Value_2500_alt2(*a1, v9, v8);
  GameRoutine_60a060((char*)&v54_.v54, v9, (__int16)v59_.v59);
  v10 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v10, v9);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v59_.v59, a2[2], a2[1]);
  }
  else {
    v11 = a2[1];
    v59_.v59 = *a2;
    v59_.v60 = v11;
    v59_.v61 = (char*)a2[2];
  }
  v12 = v54_.v54 & 1;
  v13 = v59_.v59;
  if (v12 != 0) {
    v14 = v54_.v56;
  }
  else {
    v14 = (char*)&v54_.v54 + 1;
  }
  v15 = (__int64)v59_.v61;
  if ((v54_.v54 & 1) != 0) {
    v16 = v54_.v55;
  }
  else {
    v16 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
  }
  if ((v59_.v59 & 1) != 0) {
    v17 = v59_.v60;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
  }
  if ((v59_.v59 & 1) != 0) {
    v18 = v59_.v61;
  }
  else {
    v18 = (char*)&v59_.v59 + 1;
  }
  if (v16 >= v17) {
    v19 = v17;
  }
  else {
    v19 = v16;
  }
  v21 = memcmp_alt2((__int64)v18, (__int64)v14, v19) == 0 && v17 == v16;
  if ((v13 & 1) != 0 && v15 != 0) {
    v22 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v22, v15);
    v12 = v54_.v54 & 1;
  }
  if (v12 != 0 && v54_.v56 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v23,
                                       (__int64)v54_.v56);
  }
  if (v21) {
  LABEL_50:
    v24 = *a1;
    v25 = a2[3];
    v54_.v55 = 0;
    v54_.v56 = nullptr;
    v54_.v54 = 0;
    LOWORD(v59_.v59) = 0;
    timeline_2020((unsigned __int16*)v24, &v59_.v59);
    v26 = (__int16)v59_.v59;
    v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                         (__int16)v59_.v59, 16, 0);
    memset_alt2(v27, 0, v26);
    Value_2500_alt2(*a1, v27, v26);
    GameRoutine_60a060((char*)&v54_.v54, v27, (__int16)v59_.v59);
    v28 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v28, v27);
    v29 = v54_.v54;
    v59_.v59 = 0x6974636572696412LL;
    v59_.v60 = 28271;
    v30 = (__int64)v54_.v56;
    if ((v54_.v54 & 1) != 0) {
      v31 = v54_.v55;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
    }
    if ((v54_.v54 & 1) != 0) {
      v32 = v54_.v56;
    }
    else {
      v32 = (char*)&v54_.v54 + 1;
    }
    if (v31 >= 9) {
      v33 = 9;
    }
    else {
      v33 = v31;
    }
    v34 = memcmp_alt2((__int64)&v59_.v59 + 1, (__int64)v32, v33) == 0;
    v35 = v31 == 9 && v34;
    if ((v29 & 1) != 0 && v30 != 0) {
      v36 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v36, v30);
    }
    v37 = *a1;
    if (v35) {
      v58 = 0;
      timeline_21c0((unsigned int*)v37, &v58);
      if (v58 != 0) {
        LOWORD(v54_.v54) = 0;
        v54_.v57 = (unsigned int*)&v59_.v59;
        GameStringReads_c3cd70((__int64)a1, (char*)&v54_.v54);
        if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
          v38 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v38,
                                             (__int64)v54_.v56);
        }
        v39 = *(_BYTE*)(v25 + 16);
        v40 = v59_.v60;
        *(_QWORD*)v25 = v59_.v59;
        *(_QWORD*)(v25 + 8) = v40;
        if ((v39 & 1) == 0) {
          *(_BYTE*)(v25 + 16) = 1;
        }
      }
      else if (*(_BYTE*)(v25 + 16) == 1) {
        *(_BYTE*)(v25 + 16) = 0;
      }
      v37 = *a1;
    }
    v54_.v55 = 0;
    v54_.v56 = nullptr;
    v54_.v54 = 0;
    LOWORD(v59_.v59) = 0;
    timeline_2020((unsigned __int16*)v37, &v59_.v59);
    v41 = (__int16)v59_.v59;
    v42 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                         (__int16)v59_.v59, 16, 0);
    memset_alt2(v42, 0, v41);
    Value_2500_alt2(*a1, v42, v41);
    GameRoutine_60a060((char*)&v54_.v54, v42, (__int16)v59_.v59);
    v43 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v43, v42);
    v44 = v54_.v54;
    v59_.v59 = 0x654C646565707314LL;
    v59_.v60 = 7103862;
    v45 = (__int64)v54_.v56;
    if ((v54_.v54 & 1) != 0) {
      v46 = v54_.v55;
    }
    else {
      v46 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
    }
    if ((v54_.v54 & 1) != 0) {
      v47 = v54_.v56;
    }
    else {
      v47 = (char*)&v54_.v54 + 1;
    }
    if (v46 >= 0xA) {
      v48 = 10;
    }
    else {
      v48 = v46;
    }
    v49 = memcmp_alt2((__int64)&v59_.v59 + 1, (__int64)v47, v48) == 0;
    v50 = v46 == 10 && v49;
    if ((v44 & 1) != 0 && v45 != 0) {
      v51 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v51, v45);
    }
    if (v50) {
      v52 = *a1;
      LODWORD(v59_.v59) = 0;
      timeline_21c0((unsigned int*)v52, (unsigned int*)&v59_.v59);
      if ((_DWORD)v59_.v59 != 0) {
        LOWORD(v54_.v54) = 0;
        v54_.v57 = &v58;
        if (GameRoutine_c05690_alt2(a1, (__int64)&v54_.v54)) {
          timeline_21c0((unsigned int*)*a1, v54_.v57);
        }
        if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
          v53 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v53,
                                             (__int64)v54_.v56);
        }
        *(_DWORD*)(v25 + 32) = v58;
        *(_BYTE*)(v25 + 36) = 1;
      }
      else if (*(_BYTE*)(v25 + 36) == 1) {
        *(_BYTE*)(v25 + 36) = 0;
      }
    }
  }
}

#pragma GCC visibility pop
