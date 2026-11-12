#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10027c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212d020[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ce98[2];
extern char GameData_221fe88;
extern char GameData_221fe8c;
extern char GameData_221fe90;
extern char GameData_221fe94;
extern char GameData_221fe98;
extern char GameData_221fe9c;
extern char GameData_221fea0;
extern char GameData_221fea4;
extern char GameData_221fea8;
extern char GameData_221feac;
extern char GameData_221feb0;
extern char GameData_221feb4;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_fccb90(void);
__int64 MapDrawConst_fcbcc0_alt2(__int64 a1, int a2, unsigned __int8 a3,
                                 unsigned __int8 a4, __int64 a5,
                                 char a6) __asm__("MapDrawConst_fcbcc0");
void MapDrawConst_fcc360(__int64 a1, __int64 a2);
_QWORD* MapDrawConst_fcc660_alt1(_QWORD* result,
                                 __int64 a2) __asm__("MapDrawConst_fcc660");
bool game_map_MapDrawConst_AddCellPlaneMask_lambda0_Invoke(__int64 a1,
                                                           unsigned __int8* a2,
                                                           unsigned __int8* a3);
__int64 MapDrawConst_fcbcc0_alt1(__int64, int, char, char, __int64,
                                 char) __asm__("MapDrawConst_fcbcc0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ffd7a0[])();
extern __int64* GameData_212f878;
extern __int64 GameData_21a60e0;
float32x4_t* GameRoutine_fcabb0(__int64, float32x4_t*, int, char, char,
                                unsigned __int64*, unsigned __int64*);
long double game_7a7da0(_QWORD, _QWORD);
unsigned __int64 HeightCellMap_1002e20(unsigned __int64 result,
                                       unsigned __int8*, int);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_74e1f0();
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_map_MapDrawConst_AddCellPlaneMask_alt1(
    __int64 a1, float32x4_t* a2, int a3, int a4, int a5,
    unsigned __int64* a6) __asm__("game_map_MapDrawConst_AddCellPlaneMask");
long double MapDrawConst_fcc280(__int64 a1, unsigned int** a2);
_QWORD* MapDrawConst_fcc4f0(__int64 a1, _QWORD* a2, int a3, float32x4_t* a4,
                            __int64 a5, __int64 a6, char a7);
void MeshData_f555a0(float32x4_t*, float32x4_t*, unsigned __int64*,
                     unsigned __int64*);
__int64 MapDrawConst_fcc820(__int64 a1, float32x4_t* a2, float32x4_t* a3,
                            __int128* a4, unsigned __int64* a5,
                            unsigned __int8 a6);
_QWORD* game_10027c0(_QWORD*, char*);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 MapDrawConst_fcbcc0(__int64 a1, int a2, char a3, char a4, __int64 a5,
                            char a6);
__int64 GameHr_fcabb0(long double, __int64, __int64, int, char, char, __int64,
                      __int64);
__int64 MapDrawConst_fcbcc0_alt3(long double, __int64, int, unsigned __int8,
                                 unsigned __int8, __int64,
                                 char) __asm__("MapDrawConst_fcbcc0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __attribute__((noreturn))
GameRoutine_fccb90_alt1() __asm__("GameRoutine_fccb90");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_MapDrawConst_AddCellPlaneMask(__int64 a1, float32x4_t* a2, int a3,
                                            int a4, int a5, __int64 a6,
                                            long double a7);
void MapDrawConst_fcc660(__int64* a1, __int64 a2);

void game_map_MapDrawConst_AddCellPlaneMask(__int64 a1, float32x4_t* a2, int a3,
                                            int a4, int a5, __int64 a6,
                                            long double a7)
{

#pragma clang fp contract(off)
  int v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  char v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int8 v23;
  unsigned __int8 v24;
  __int16 v25;
  long double v26;
  __int64 v27;
  __int64 v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;
  char v40;
  __int64 v41;
  __int64 v42;
  int v43;
  unsigned __int64 v44;
  unsigned __int64 i;
  float32x4_t v46;
  unsigned __int64 v47;
  float32x4_t* v48;
  unsigned __int64 v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  __int64 v54;
  float32x4_t v55;
  __int64 v56;
  __int64 v57;
  char v58;
  struct {
    _QWORD v62[4];
    _QWORD* v63;
  } v62_;
  struct {
    __int64 v64;
    __int64 v65;
    unsigned __int64 v66;
  } v64_;
  struct {
    float v67;
    float v68;
    float v69;
    float v70;
    float v71;
    float v72;
    float v73;
    float v74;
    float v75;
    float v76;
    char gap152_[16];
    int v77;
    int v78;
  } v67_;

  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  v67_.v78 = a4;
  v58 = a3;
  v64_.v65 = 0;
  v64_.v66 = 0;
  v64_.v64 = 0;
  if (a5 >= 1) {
    v7 = a3;
    v8 = 0;
    v67_.v77 = a5 + a3;
    v9 = a5 + v67_.v78;
    do {
      v10 = v67_.v78;
      do {
        if (v8 < v64_.v66) {
          *(_BYTE*)v8 = v7;
          *(_BYTE*)(v8 + 1) = v10;
          *(_WORD*)(v8 + 2) = 0;
          v8 += 4LL;
        }
        else {
          v11 = v64_.v64;
          v12 = v8 - v64_.v64;
          v13 = (__int64)(v8 - v64_.v64) >> 2;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 62 != 0) {
            GameRoutine_74e1f0(),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v15 = v64_.v66 - v64_.v64;
          if ((__int64)(v64_.v66 - v64_.v64) >> 1 > v14) {
            v14 = v15 >> 1;
          }
          if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFFCLL) {
            v16 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v16 = v14;
          }
          if (v16 >> 62 != 0) {
            GameRoutine_60a210_alt1(),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          a1 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v16, 16, 0),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
          v17 = a1 + v12;
          *(_BYTE*)v17 = v7;
          *(_BYTE*)(v17 + 1) = v10;
          *(_WORD*)(v17 + 2) = 0;
          if (v11 != v8) {
            v18 = (_BYTE*)v11;
            v19 = (_BYTE*)(a1 + v12 - 4 * v13);
            do {
              *v19 = *v18;
              v19[1] = v18[1];
              v19[2] = v18[2];
              v20 = v18[3];
              v18 += 4;
              v19[3] = v20;
              v19 += 4;
            } while (v18 != (_BYTE*)v8);
          }
          v8 = v17 + 4;
          v64_.v64 = a1 + v12 - 4 * v13;
          v64_.v66 = a1 + 4 * v16;
          if (v11 != 0) {
            v21 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v11),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        ++v10;
        v64_.v65 = v8;
      } while (v10 < v9);
      ++v7;
    } while (v7 < v67_.v77);
    v22 = (unsigned __int8*)v64_.v64;
    if (v64_.v64 != v8) {
      do {
        v23 = *v22;
        v24 = v22[1];
        v62_.v62[0] = GameData_1ffd7a0;
        v62_.v62[1] = &v64_.v64;
        v62_.v63 = v62_.v62;
        v25 =
            MapDrawConst_fcbcc0_alt3(a7, a1, 1, v23, v24, (__int64)v62_.v62, 0),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
        v27 = (__int64)v62_.v63;
        if (v62_.v63 == v62_.v62) {
          v28 = 32;
        }
        else {
          if (v62_.v63 == nullptr) {
            goto LABEL_28;
          }
          v28 = 40;
        }
        v27 = (*(__int64 (**)(__int64))(*v62_.v63 + v28))((__int64)v62_.v63),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
      LABEL_28:
        v29 = *v22;
        v30 = v22[1];
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0) {
          v31 = v29;
          v32 = v30;
          v27 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
          v30 = v32;
          v29 = v31;
          if ((_DWORD)v27 != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v30 = v32;
            v29 = v31;
          }
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0) {
          v33 = v29;
          v34 = v30;
          v27 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
          v30 = v34;
          v29 = v33;
          if ((_DWORD)v27 != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v30 = v34;
            v29 = v33;
          }
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0) {
          v35 = v29;
          v36 = v30;
          v27 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
          v30 = v36;
          v29 = v35;
          if ((_DWORD)v27 != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v30 = v36;
            v29 = v35;
          }
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0) {
          v37 = v29;
          v38 = v30;
          v27 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
          v30 = v38;
          v29 = v37;
          if ((_DWORD)v27 != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v30 = v38;
            v29 = v37;
          }
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0) {
          v39 = v29;
          v40 = v30;
          v27 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
          v30 = v40;
          v29 = v39;
          if ((_DWORD)v27 != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v30 = v40;
            v29 = v39;
          }
        }
        *(float*)&v26 = vcvts_n_f32_u32(16 * (v25 & 0xF), 8u);
        v67_.v68 = vcvts_n_f32_u32(v25 & 0xFFF0, 8u) + 0x1.0000000000000p-4f;
        v67_.v70 = v67_.v68;
        v67_.v75 = *(float*)&v26 + 0x1.0000000000000p-5f;
        v67_.v76 = v67_.v68 + -0x1.0000000000000p-5f;
        *((float*)&v26 + 1) = v67_.v68;
        v67_.v72 = v67_.v68 + -0x1.0000000000000p-4f;
        v67_.v74 = v67_.v68 + -0x1.0000000000000p-4f;
        v67_.v67 = (float)(*(float*)&v26 + 0x0.0p+0f) + 0x1.0000000000000p-12f;
        v67_.v68 = v67_.v68 + -0x1.0000000000000p-12f;
        v67_.v69 = (float)(*(float*)&v26 + 0x1.0000000000000p-4f) +
                   -0x1.0000000000000p-12f;
        v67_.v70 = v67_.v70 + -0x1.0000000000000p-12f;
        v67_.v71 = v67_.v69;
        v67_.v72 = v67_.v72 + 0x1.0000000000000p-12f;
        v67_.v73 = v67_.v67;
        v67_.v74 = v67_.v74 + 0x1.0000000000000p-12f;
        *(float*)&v26 = v67_.v74;
        a1 = GameHr_fcabb0(v26, v27, (__int64)a2, 1, v29, v30,
                           (__int64)&v67_.v67, a6),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
        v22 += 4;
      } while (v22 != (unsigned __int8*)v8);
    }
  }
  HIWORD(v67_.v67) = 0;
  v41 = *(_QWORD*)GameData_212d020[0];
  LOBYTE(v67_.v67) = v58;
  v42 = *(_QWORD*)(v41 + 8);
  BYTE1(v67_.v67) = v67_.v78;
  HeightCellMap_1002e20(v42 + 72, (unsigned __int8*)&v67_.v67, a5),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  v44 = LANES128(a2[6]).n128_u64[0];
  for (i = LANES128(a2[6]).n128_u64[1]; v44 != i; v44 += 64LL) {
    *(_DWORD*)(v44 + 20) = v43;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v57 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v57;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v46 = COERCE_AS(float32x4_t, GameData_21a6120);
  v48 = (float32x4_t*)LANES128(a2[6]).n128_u64[0];
  v47 = LANES128(a2[6]).n128_u64[1];
  if ((float32x4_t*)v47 != v48) {
    v49 = LANES128(a2[6]).n128_u64[0];
    do {
      v50 = *(float32x4_t*)(v49 + 16);
      v49 += 64LL;
      v46 = vaddq_f32(v46, v50);
    } while (v49 != v47);
    v46 = vmulq_n_f32(
        v46, 0x1.0000000000000p+0f /
                 (float)(unsigned __int64)((__int64)(v47 - (_QWORD)v48) >> 6));
    LANES128(v46).n128_u32[3] = 0;
  }
  v51 = vsubq_f32(v46, a2[11]);
  v52 = vmulq_f32(v51, v51);
  LANES128(v52).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f &&
      v47 != (_QWORD)v48) {
    do {
      v48[1] = vsubq_f32(v48[1], v51);
      v48 += 4;
    } while (v48 != (float32x4_t*)v47);
  }
  v54 = v64_.v64;
  LANES128(a2[11]).n128_u64[0] = LANES128(v46).n128_u64[0];
  v55 = a2[11];
  LANES128(v55).n128_u64[1] = LANES128(v46).n128_u32[2];
  a2[11] = v55;
  if (v54 != 0) {
    v64_.v65 = v54;
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v54),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

__int64 MapDrawConst_fcbcc0(__int64 a1, int a2, char a3, char a4, __int64 a5,
                            char a6)
{

#pragma clang fp contract(off)
  char v9;
  char v10;
  float v11;
  __int64 v12;
  char v13;
  char v14;
  char v15;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  _BYTE* v20;
  _QWORD* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;
  char v40;
  _DWORD v41[8];
  struct {
    char v42[2];
    __int16 v43;
  } v42_;
  int v44;
  int v45;

  v42_.v43 = 0;
  v42_.v42[0] = a3;
  v42_.v42[1] = a4;
  v9 = a3 - GameData_221fe88;
  v10 = a4 + GameData_221fe90;
  v11 = *(float*)(*(_QWORD*)GameData_212d020[0] + 4400LL);
  v12 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL);
  v13 = a4 + GameData_221fe8c;
  v41[0] = (unsigned __int8)(a3 - GameData_221fe88) |
           ((unsigned __int8)(a4 + GameData_221fe8c) << 8);
  v41[1] =
      (unsigned __int8)a3 | ((unsigned __int8)(a4 + GameData_221fe90) << 8);
  v14 = a3 + GameData_221fe94;
  v15 = a4 + GameData_221fe98;
  v41[2] = (unsigned __int8)(a3 + GameData_221fe94) |
           ((unsigned __int8)(a4 + GameData_221fe98) << 8);
  v41[3] =
      (unsigned __int8)(a3 - GameData_221fe9c) | ((unsigned __int8)a4 << 8);
  v41[4] =
      (unsigned __int8)(a3 + GameData_221fea0) | ((unsigned __int8)a4 << 8);
  v41[5] = (unsigned __int8)(a3 - GameData_221fea4) |
           ((unsigned __int8)(a4 - GameData_221fea8) << 8);
  v41[6] =
      (unsigned __int8)a3 | ((unsigned __int8)(a4 - GameData_221feac) << 8);
  v41[7] = (unsigned __int8)(a3 + GameData_221feb0) |
           ((unsigned __int8)(a4 - GameData_221feb4) << 8);
  v16 = GameData_212ce98[0];
  if ((a6 & 1) != 0 && v11 < 0x1.99999a0000000p-2f) {
    v17 = 0;
    v18 = 0;
    v19 = v12 + 56LL * a2;
    v20 = (char*)v41 + 1;
    do {
      v21 = game_10027c0((_QWORD*)(v19 + 16), v42_.v42);
      v22 = (char)*(v20 - 1);
      if (*(unsigned __int8*)(*v16 + 26) <=
              (unsigned int)(unsigned __int8)(*(v20 - 1) -
                                              *(_BYTE*)(*v16 + 24)) ||
          *(unsigned __int8*)(*v16 + 27) <=
              (unsigned int)(unsigned __int8)(*v20 - *(_BYTE*)(*v16 + 25)) ||
          v21 != nullptr && (*((_BYTE*)v21 + v17 + 76) & 1) != 0 ||
          (v23 = *(_QWORD*)(a5 + 32)) != 0 &&
              (v44 = (char)*v20, v45 = v22,
               ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v23 + 48LL))(
                    v23, &v45, &v44) &
                1) == 0)) {
        v18 |= 1 << v17;
      }
      v20 += 4;
      ++v17;
    } while (v17 != 8);
  }
  else {
    v34 = a3 - GameData_221fe9c;
    v35 = a3 + GameData_221fea0;
    v36 = a4 - GameData_221fea8;
    v37 = a3 - GameData_221fea4;
    v24 = v12 + 56LL * a2;
    v38 = a4 - GameData_221feac;
    v39 = a4 - GameData_221feb4;
    v40 = a3 + GameData_221feb0;
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    v18 = true;
    if (*(unsigned __int8*)(*v16 + 26) >
            (unsigned int)(unsigned __int8)(v9 - *(_BYTE*)(*v16 + 24)) &&
        *(unsigned __int8*)(*v16 + 27) >
            (unsigned int)(unsigned __int8)(v13 - *(_BYTE*)(*v16 + 25))) {
      v25 = *(_QWORD*)(a5 + 32);
      if (v25 == 0 || (v44 = v13, v45 = v9,
                       ((*(__int64 (**)(__int64, int*, int*))(
                            *(_QWORD*)v25 + 48LL))(v25, &v45, &v44) &
                        1) != 0)) {
        v18 = false;
      }
    }
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v10 - *(_BYTE*)(*v16 + 25)) ||
        (v26 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v10, v45 = a3,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v26 + 48LL))(
                  v26, &v45, &v44) &
              1) == 0)) {
      v18 |= 2u;
    }
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v14 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v15 - *(_BYTE*)(*v16 + 25)) ||
        (v27 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v15, v45 = v14,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v27 + 48LL))(
                  v27, &v45, &v44) &
              1) == 0)) {
      v18 |= 4u;
    }
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v34 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(a4 - *(_BYTE*)(*v16 + 25)) ||
        (v28 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = a4, v45 = v34,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v28 + 48LL))(
                  v28, &v45, &v44) &
              1) == 0)) {
      v18 |= 8u;
    }
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v35 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(a4 - *(_BYTE*)(*v16 + 25)) ||
        (v29 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = a4, v45 = v35,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v29 + 48LL))(
                  v29, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x10u;
    }
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v37 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v36 - *(_BYTE*)(*v16 + 25)) ||
        (v30 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v36, v45 = v37,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v30 + 48LL))(
                  v30, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x20u;
    }
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v38 - *(_BYTE*)(*v16 + 25)) ||
        (v31 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v38, v45 = a3,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v31 + 48LL))(
                  v31, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x40u;
    }
    game_10027c0((_QWORD*)(v24 + 16), v42_.v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v40 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v39 - *(_BYTE*)(*v16 + 25)) ||
        (v32 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v39, v45 = v40,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v32 + 48LL))(
                  v32, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x80u;
    }
  }
  return v18;
}

long double MapDrawConst_fcc280(__int64 a1, unsigned int** a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int* v4;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  long double v12;
  long double v13;
  long double v14;

  v2 = *GameData_212f878;
  v3 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)&v13 = *(_QWORD*)GameData_212c958;
  *((_QWORD*)&v13 + 1) = v3;
  v14 = v13;
  v4 = a2[1];
  if (v4 == nullptr) {
    return v13;
  }
  v5 = *a2;
  v6 = 4LL * (_QWORD)v4;
  v7 = v2 + 16;
  do {
    v9 = *v5++;
    v8 = v9;
    if (v9 >= 0x2C) {
      String_60a250("array::at");
    }
    v10 = v7 + 32 * v8;
    v12 = game_7a7da0(&v13, v10);
    v13 = v12;
    v6 -= 4;
    v14 = game_7a7da0(&v14, v10 + 16);
  } while (v6 != 0);
  return v12;
}

void MapDrawConst_fcc360(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;

  LODWORD(v15) = 15;
  v3 = game_UnitPool_GetFirst_alt1((int*)&v15);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 432);
    v5 = v3;
    if (v4 == 0) {
      v4 = *(_QWORD*)(v3 + 440);
      if (v4 != 0) {
        v6 = *(unsigned __int8*)(v4 + 16);
        if (v6 <= 8) {
          v13 = 24LL * *(unsigned __int8*)(v4 + 16) + 556024;
          while (1) {
            if (v6 <= 2) {
              v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v13);
              if (v4 != 0) {
                break;
              }
            }
            ++v6;
            v13 += 24;
            if (v6 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v4 = 0;
        }
      }
    }
    while (1) {
    LABEL_8:
      v7 = v4;
      if ((*(_BYTE*)(v5 + 417) & 0x1C) == 0) {
        v8 = (*(float (**)(__int64))(*(_QWORD*)(v5 + 152) + 16LL))(v5 + 152);
        if (v8 > 0x0.0p+0f) {
          v9 = *(_QWORD*)(a2 + 32);
          v15 = v5;
          v14 = v8;
          if (v9 == 0) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(__int64, __int64*, float*))(*(_QWORD*)v9 + 48LL))(
              v9, &v15, &v14);
        }
      }
      if (v7 == 0) {
        break;
      }
      v4 = *(_QWORD*)(v7 + 432);
      v5 = v7;
      if (v4 == 0) {
        v10 = *(_QWORD*)(v7 + 440);
        v5 = v7;
        if (v10 != 0) {
          v11 = *(unsigned __int8*)(v10 + 16);
          v4 = 0;
          v5 = v7;
          if (v11 <= 8) {
            v12 = 24LL * (unsigned int)v11 + 556024;
            while (1) {
              if (v11 <= 2) {
                v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v12);
                if (v4 != 0) {
                  break;
                }
              }
              ++v11;
              v12 += 24;
              if (v11 == 9) {
                v4 = 0;
                v5 = v7;
                goto LABEL_8;
              }
            }
            v5 = v7;
          }
        }
      }
    }
  }
}

_QWORD* MapDrawConst_fcc4f0(__int64 a1, _QWORD* a2, int a3, float32x4_t* a4,
                            __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7;
  float32x4_t v8;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  _QWORD* result;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  struct {
    _DWORD v30[4];
    float32x4_t v31;
    float32x4_t v32;
  } v30_;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = LANES128(a4[6]).n128_u64[0];
  v8 = a4[11];
  v12 = COERCE_AS(float32x4_t, GameData_1a83090);
  v13 = *(float32x4_t*)(v7 + 208);
  v27 = v8;
  v29 = vaddq_f32(
      v8,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     COERCE_FLOAT(*(_OWORD*)(v7 + 16))),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         *(float32x2_t*)(v7 + 16), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), *(float32x4_t*)(v7 + 16),
          2));
  v14 = vaddq_f32(
      v8,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     COERCE_FLOAT(*(_OWORD*)(v7 + 80))),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         *(float32x2_t*)(v7 + 80), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), *(float32x4_t*)(v7 + 80),
          2));
  v15 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 COERCE_FLOAT(*(_OWORD*)(v7 + 144))),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     *(float32x2_t*)(v7 + 144), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), *(float32x4_t*)(v7 + 144), 2);
  v16 = vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v13).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1);
  if ((a7 & 0x40) != 0) {
    v25 = v16;
    v30_.v30[0] = a3;
    v21 = v13;
    v22 = v15;
    v23 = v14;
    v30_.v31 = v14;
    v30_.v32 = v29;
    result = MapDrawConst_fcc660_alt1(a2, (__int64)v30_.v30);
    v13 = v21;
    v15 = v22;
    v14 = v23;
    v12 = COERCE_AS(float32x4_t, GameData_1a83090);
    v16 = v25;
    v8 = v27;
  }
  v18 = vmlaq_laneq_f32(v16, v12, v13, 2);
  v19 = vaddq_f32(v8, v15);
  if ((a7 & 0x10) != 0) {
    v30_.v30[0] = a3;
    v30_.v31 = v19;
    v30_.v32 = v14;
    v24 = v19;
    v26 = v18;
    result = MapDrawConst_fcc660_alt1(a2, (__int64)v30_.v30);
    v19 = v24;
    v20 = vaddq_f32(v27, v26);
    if ((a7 & 2) == 0) {
    LABEL_5:
      if ((a7 & 8) == 0) {
        return result;
      }
      goto LABEL_6;
    }
  }
  else {
    v20 = vaddq_f32(v8, v18);
    if ((a7 & 2) == 0) {
      goto LABEL_5;
    }
  }
  v30_.v30[0] = a3;
  v30_.v31 = v20;
  v30_.v32 = v19;
  v28 = v20;
  result = MapDrawConst_fcc660_alt1(a2, (__int64)v30_.v30);
  v20 = v28;
  if ((a7 & 8) == 0) {
    return result;
  }
LABEL_6:
  v30_.v30[0] = a3;
  v30_.v31 = v29;
  v30_.v32 = v20;
  return MapDrawConst_fcc660_alt1(a2, (__int64)v30_.v30);
}

void MapDrawConst_fcc660(__int64* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v3 = a1[1];
  v2 = a1[2];
  if (v3 >= v2) {
    v7 = *a1;
    v8 = v3 - *a1;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 4);
    if (v9 > 0x555555555555555LL) {
      GameRoutine_fccb90_alt1();
    }
    v10 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v2 - v7) >> 4);
    if (2 * v10 > v9) {
      v9 = 2 * v10;
    }
    if (v10 >= 0x2AAAAAAAAAAAAAALL) {
      v11 = 0x555555555555555LL;
    }
    else {
      v11 = v9;
    }
    if (v11 > 0x555555555555555LL) {
      GameRoutine_60a210_alt1();
    }
    v12 = 3 * v11;
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v11, 16, 0);
    v15 = v14 + v8;
    *(_DWORD*)v15 = *(_DWORD*)a2;
    v16 = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(v15 + 16) = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v15 + 24) = v16;
    v17 = *(_QWORD*)(a2 + 32);
    v18 = *(_QWORD*)(a2 + 40);
    v6 = v14 + v8 + 48;
    *(_QWORD*)(v15 + 32) = v17;
    *(_QWORD*)(v15 + 40) = v18;
    if (v7 != v3) {
      v19 = v7;
      v20 = v14;
      do {
        *(_DWORD*)v20 = *(_DWORD*)v19;
        *(_QWORD*)(v20 + 24) = *(_QWORD*)(v19 + 24);
        *(_QWORD*)(v20 + 16) = *(_QWORD*)(v19 + 16);
        *(_QWORD*)(v20 + 40) = *(_QWORD*)(v19 + 40);
        v21 = *(_QWORD*)(v19 + 32);
        v19 += 48;
        *(_QWORD*)(v20 + 32) = v21;
        v20 += 48;
      } while (v19 != v3);
    }
    *a1 = v14;
    a1[1] = v6;
    a1[2] = v14 + 16 * v12;
    if (v7 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v22, v7);
    }
  }
  else {
    *(_DWORD*)v3 = *(_DWORD*)a2;
    *(_QWORD*)(v3 + 24) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(v3 + 16) = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v3 + 40) = *(_QWORD*)(a2 + 40);
    v6 = v3 + 48;
    *(_QWORD*)(v3 + 32) = *(_QWORD*)(a2 + 32);
  }
  a1[1] = v6;
}

__int64 MapDrawConst_fcc820(__int64 a1, float32x4_t* a2, float32x4_t* a3,
                            __int128* a4, unsigned __int64* a5,
                            unsigned __int8 a6)
{

#pragma clang fp contract(off)
  float v8;
  float v9;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  unsigned __int32 v13;
  float32x4_t v14;
  float32x4_t v15;
  __int128 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int128 v24;
  unsigned __int32 v25;
  float32x4_t v26;
  __int128 v27;
  float32x4_t v28;
  float v29;
  unsigned __int64 v31;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  unsigned __int64 v40;
  float32x4_t* v41;
  unsigned __int64 v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v48;
  __int64 v51;
  float32x4_t v52;
  unsigned __int64 v53[2];
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;

  v56 = (__typeof__(v56)){0};
  v57 = (__typeof__(v57)){0};
  v54 = (__typeof__(v54)){0};
  v55 = (__typeof__(v55)){0};
  v8 = 0x0.0p+0f;
  if (a6 > 1u) {
    if (a6 == 2) {
      v21 = a3[2];
      v22 = a3[3];
      LANES128(v57).n128_u64[0] = LANES128(a3[2]).n128_u64[0];
      LANES128(v56).n128_u64[0] = LANES128(v22).n128_u64[0];
      v13 = LANES128(v22).n128_u32[1];
      v12 = v57;
      LANES128(v23).n128_u64[0] = LANES128(v57).n128_u64[0];
      LANES128(v23).n128_u64[1] = LANES128(v21).n128_u32[2];
      LANES128(v21).n128_u64[0] = LANES128(v22).n128_u64[0];
      LANES128(v21).n128_u64[1] = LANES128(v22).n128_u32[2];
      v24 = *a4++;
      v16 = v24;
      v56 = v21;
      v57 = v23;
    }
    else {
      v9 = 0x0.0p+0f;
      v10 = 0x0.0p+0f;
      if (a6 != 3) {
        goto LABEL_13;
      }
      v17 = a3[1];
      v18 = a3[2];
      LANES128(v57).n128_u64[0] = LANES128(a3[1]).n128_u64[0];
      v12 = v57;
      LANES128(v19).n128_u64[0] = LANES128(v57).n128_u64[0];
      LANES128(v19).n128_u64[1] = LANES128(v17).n128_u32[2];
      v13 = LANES128(v18).n128_u32[1];
      v57 = v19;
      LANES128(v19).n128_u64[0] = LANES128(v18).n128_u64[0];
      LANES128(v19).n128_u64[1] = LANES128(v18).n128_u32[2];
      v56 = v19;
      v16 = a4[3];
    }
    LANES128(v55).n128_u64[0] = v16;
  }
  else {
    if (a6 != 0) {
      v9 = 0x0.0p+0f;
      v10 = 0x0.0p+0f;
      if (a6 != 1) {
        goto LABEL_13;
      }
      v15 = a3[3];
      v11 = *a3;
      LANES128(v57).n128_u64[0] = LANES128(a3[3]).n128_u64[0];
      LANES128(v56).n128_u64[0] = LANES128(v11).n128_u64[0];
      v13 = LANES128(v11).n128_u32[1];
      v12 = v57;
      LANES128(v14).n128_u64[0] = LANES128(v57).n128_u64[0];
      LANES128(v14).n128_u32[2] = LANES128(v15).n128_u32[2];
      LANES128(v15).n128_u64[0] = LANES128(v11).n128_u64[0];
      LANES128(v15).n128_u32[2] = LANES128(v11).n128_u32[2];
      v16 = a4[1];
      a4 += 2;
    }
    else {
      v15 = *a3;
      v20 = a3[1];
      LANES128(v57).n128_u64[0] = LANES128(*(a3)).n128_u64[0];
      LANES128(v56).n128_u64[0] = LANES128(v20).n128_u64[0];
      v13 = LANES128(v20).n128_u32[1];
      v12 = v57;
      LANES128(v14).n128_u64[0] = LANES128(v57).n128_u64[0];
      LANES128(v14).n128_u32[2] = LANES128(v15).n128_u32[2];
      LANES128(v15).n128_u64[0] = LANES128(v20).n128_u64[0];
      LANES128(v15).n128_u32[2] = LANES128(v20).n128_u32[2];
      v16 = a4[2];
      a4 += 3;
    }
    LANES128(v14).n128_u32[3] = 0;
    LANES128(v15).n128_u32[3] = 0;
    LANES128(v55).n128_u64[0] = v16;
    v56 = v15;
    v57 = v14;
  }
  v25 = LANES128(v55).n128_u32[1];
  LANES128(v26).n128_u64[0] = LANES128(v55).n128_u64[0];
  LANES128(v26).n128_u64[1] = DWORD2(v16);
  v55 = v26;
  v27 = *a4;
  v9 = *(float*)&v13;
  LANES128(v54).n128_u64[0] = *(_QWORD*)a4;
  LANES128(v26).n128_u64[0] = LANES128(v54).n128_u64[0];
  v28 = vsubq_f32(v12, v54);
  LANES128(v26).n128_u64[1] = DWORD2(v27);
  v8 = *(float*)&v25;
  v10 = LANES128(v28).n128_f32[1];
  v54 = v26;
LABEL_13:
  v29 = vabds_f32(v9, v8);
  if (fabsf(v10) <= 0x1.0000000000000p-23f && v29 <= 0x1.0000000000000p-23f) {
    return 0;
  }
  v31 = *((_QWORD*)GameData_212c958 + 1);
  v53[0] = *(_QWORD*)GameData_212c958;
  v53[1] = v31;
  MeshData_f555a0(a2, &v57, a5, v53);
  MeshData_f555a0(a2, &v56, a5 + 1, v53);
  MeshData_f555a0(a2, &v55, a5 + 2, v53);
  MeshData_f555a0(a2, &v54, a5 + 3, v53);
  if ((LANES128(a2[14]).n128_u8[12] & 1) == 0) {
    if (LANES128(a2[15]).n128_u32[0] != 2) {
      goto LABEL_22;
    }
  }
  else if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) + 9LL) !=
           1) {
  LABEL_22:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v51 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v51;
      __cxa_guard_release(&GameData_21a6130);
    }
    v39 = COERCE_AS(float32x4_t, GameData_21a6120);
    v41 = (float32x4_t*)LANES128(a2[6]).n128_u64[0];
    v40 = LANES128(a2[6]).n128_u64[1];
    if ((float32x4_t*)v40 != v41) {
      v42 = LANES128(a2[6]).n128_u64[0];
      do {
        v43 = *(float32x4_t*)(v42 + 16);
        v42 += 64LL;
        v39 = vaddq_f32(v39, v43);
      } while (v42 != v40);
      v39 = vmulq_n_f32(
          v39,
          0x1.0000000000000p+0f /
              (float)(unsigned __int64)((__int64)(v40 - (_QWORD)v41) >> 6));
      LANES128(v39).n128_u32[3] = 0;
    }
    v44 = vsubq_f32(v39, a2[11]);
    v45 = vmulq_f32(v44, v44);
    LANES128(v45).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                .n64_f32[0] > 0x0.0p+0f &&
        v40 != (_QWORD)v41) {
      do {
        v41[1] = vsubq_f32(v41[1], v44);
        v41 += 4;
      } while (v41 != (float32x4_t*)v40);
    }
    LANES128(a2[11]).n128_u64[0] = LANES128(v39).n128_u64[0];
    v48 = a2[11];
    LANES128(v48).n128_u64[1] = LANES128(v39).n128_u32[2];
    a2[11] = v48;
    return 1;
  }
  LANES128(v37).n128_u64[0] = 0x3E8000003E800000LL;
  LANES128(v37).n128_u64[1] = 0x3E8000003E800000LL;
  v38 = vmulq_f32(vaddq_f32(vaddq_f32(vaddq_f32(v57, v56), v55), v54), v37);
  LANES128(v38).n128_u32[3] = 0;
  v52 = v38;
  MeshData_f555a0(a2, &v52, a5 + 4, v53);
  goto LABEL_22;
}

bool game_map_MapDrawConst_AddCellPlaneMask_lambda0_Invoke(__int64 a1,
                                                           unsigned __int8* a2,
                                                           unsigned __int8* a3)
{
  unsigned __int8** v3;
  unsigned __int8* v4;
  unsigned __int8* v5;

  v3 = *(unsigned __int8***)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 != v5) {
    while (*v4 != *a2 || v4[1] != *a3) {
      v4 += 4;
      if (v4 == v5) {
        v4 = v5;
        return v4 != v5;
      }
    }
  }
  return v4 != v5;
}

#pragma GCC visibility pop
