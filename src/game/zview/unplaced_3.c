#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void RouteNavMesh_fe7000(PSEUDO_X8, _QWORD*,
                                                    __int128*, float, float);
__int64 GameRoutine_d13780(__int64 result, __int64*, int);
__int64 StateAttack_d45e00(__int64, _QWORD*);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_zview_d16b40(float, double, double, double, double, double,
                          long double, __int64, __int64, __int128*,
                          unsigned __int64*, __int64);
__int64 game_zview_d17160(float, __int64, __int64, float32x4_t*, float32x4_t*);
__int64 game_zview_ffe9d0_alt1(_QWORD*) __asm__("game_zview_ffe9d0");
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool GameRoutine_d4eca0(__int64*, __int64);
bool game_zview_d0bdc0(__int64, int, __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_22110c8;
extern __int128 GameData_1a834e0;
extern __int128 GameData_1a83780;
extern __int64 (*GameData_20001e8[])();
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ebd0[3];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ed070;
extern __int64 GameData_220f8b0;
extern __int64 GameData_22110c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
float GameRoutine_a5eaa0(float, float, float);
float fmodf(float, float);
int __cxa_guard_acquire(__int64);
unsigned int* RouteNavMesh_fe6c60(_QWORD*, unsigned int**);
void CharacterController_d14ce0(float*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_zview_cf26c0(__int64 a1, __int64 a2);
void game_zview_d0c0f0(__int64 a1, __int64* a2, __int64 a3);
float* game_zview_d148e0(float32x4_t* a1, char a2);
void game_zview_d14a80(float* a1);
float* game_zview_d14fc0(float* result);
float* game_zview_d15100(float* a1, char a2, double a3, double a4, double a5,
                         double a6, double a7, double a8, long double a9);
__int64 game_zview_dab2c0(_QWORD* a1, __int64* a2, int a3);
void game_zview_dab870(__int64 a1, __int64** a2, char a3);
__int64 game_zview_dacb90(__int64 result);
__int64 game_zview_ffe870(_QWORD* a1);
_QWORD* game_zview_ffe9d0(_QWORD* a1);
__int64 game_zview_ffec00(__int64 result);
__int64 game_zview_ffed80(__int64 a1);

__int64 game_zview_cf26c0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int128 v5;
  int v6;
  int v7;
  int v9;

  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return 1;
    }
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v7 = (v6 & 8) != 0 ? 2 : 3;
    if ((v7 & v6) == 0) {
      return 1;
    }
  }
  if ((*(_BYTE*)(a2 + 388) & 0x20) != 0) {
    return 1;
  }
  if (*(_QWORD*)(a1 + 144) == *(_QWORD*)(a1 + 136) &&
      (signed __int32)*(_DWORD*)(a1 + 188) <= 0) {
    v9 = *(_DWORD*)(a1 + 184);
    if (v9 < (signed __int32)*(_DWORD*)(a1 + 196)) {
      *(_DWORD*)(a1 + 184) = v9 + 1;
      return 1;
    }
  }
  return 0;
}

void game_zview_d0c0f0(__int64 a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  float* v6;
  unsigned int v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  bool v15;
  float v16;
  bool v17;
  int v18;
  __int64 v19;
  _BOOL4 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  char v33;
  float v34;
  _QWORD v35[2];
  _QWORD v36[2];
  struct {
    __int64 v37[3];
    char v38;
  } v37_;
  struct {
    char gap56_[1];
    char v39[15];
    __int64 v40;
  } v39_;
  _QWORD v41[2];
  _QWORD v42[2];

  *(_QWORD*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 8) = 1055286886;
  *(_QWORD*)(a1 + 24) = 0x3FE666663FE66666LL;
  *(_DWORD*)(a1 + 32) = 1072064102;
  *(_QWORD*)(a1 + 36) = 0x3FB5C28F3FB5C28FLL;
  v5 = *a2;
  if (*a2 == 0) {
    goto LABEL_53;
  }
  v6 = *(float**)(v5 + 11792);
  v8 = *(_DWORD*)(v5 + 11784);
  v9 = *(float*)(v5 + 32) *
       (float)(*(float*)(v5 + 40) +
               (float)(0x1.0000000000000p+0f - *(float*)(v5 + 40)));
  v10 = v6[10] * v9;
  v11 = v6[8] * v9;
  v12 = v6[9] * v9;
  if (v8 > 1) {
    v13 = *(_QWORD*)GameData_212d310;
    *(float*)(a1 + 24) = v11;
    v14 = v12 + 0x1.0000000000000p-2f;
    v16 = v10;
    v18 = LODWORD(v14);
  }
  else {
    v13 = *(_QWORD*)GameData_212d310;
    *(_DWORD*)(a1 + 36) = 1067030938;
    v14 = v12 + 0x1.0000000000000p-2f;
    v15 = *(_DWORD*)(v13 + 8) == 1;
    v16 = 0x1.cccccc0000000p-2f;
    *(_QWORD*)(a1 + 48) = 2;
    v17 = !v15 || v10 <= 0x1.cccccc0000000p-2f;
    v18 = 1069128090;
    if (!v17) {
      v16 = v10;
    }
  }
  *(float*)(a1 + 8) = v16;
  *(float*)(a1 + 28) = v11;
  *(_DWORD*)(a1 + 36) = v18;
  *(float*)(a1 + 40) = v14;
  if (*(_DWORD*)(v13 + 8) == 2) {
    v19 = a2[1];
    v42[0] = *a2;
    v42[1] = v19;
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
    }
    LOBYTE(v37_.v37[0]) = 14;
    v37_.v38 = 14;
    strcpy((char*)v37_.v37 + 1, "AE_165T");
    strcpy(v39_.v39, "AE_187T");
    v41[0] = v37_.v37;
    v41[1] = 2;
    v20 = game_zview_d0bdc0((__int64)v42, 1669996436, (__int64)v41);
    if ((v37_.v38 & 1) != 0 && v39_.v40 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v39_.v40);
    }
    if ((v37_.v37[0] & 1) != 0 && v37_.v37[2] != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v37_.v37[2]);
    }
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
    if (v8 == 19 || v20) {
      *(_BYTE*)(a1 + 64) = 1;
    }
  }
  *(float*)(a1 + 12) = v10;
  v23 = a2[1];
  v36[0] = *a2;
  v36[1] = v23;
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  LOBYTE(v37_.v37[0]) = 16;
  strcpy((char*)v37_.v37 + 1, "AB_530TX");
  v41[0] = v37_.v37;
  v41[1] = 1;
  v24 = game_zview_d0bdc0((__int64)v36, -574916402, (__int64)v41);
  if ((v37_.v37[0] & 1) != 0 && v37_.v37[2] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v37_.v37[2]);
  }
  if (v23 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (!v24) {
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  std___1___shared_weak_count___release_weak(v23);
  if (v24) {
  LABEL_38:
    *(float*)(a1 + 12) = *(float*)(a1 + 12) * 0x1.6666660000000p+0f;
  }
LABEL_39:
  if (v8 - 17 <= 1) {
    *(_QWORD*)(a1 + 48) |= 4uLL;
  }
  v26 = *a2;
  v27 = a2[1];
  v35[0] = v26;
  v35[1] = v27;
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                              memory_order_relaxed);
  }
  strcpy((char*)v37_.v37, "&AE_021F_EventSprint");
  v41[0] = v37_.v37;
  v41[1] = 1;
  v28 = game_zview_d0bdc0((__int64)v35, -1702639730, (__int64)v41);
  if ((v37_.v37[0] & 1) != 0 && v37_.v37[2] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  v37_.v37[2]);
  }
  if (v27 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    v30 = *(_QWORD*)(a1 + 48);
    if (!v28) {
      goto LABEL_52;
    }
    goto LABEL_51;
  }
  (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
  std___1___shared_weak_count___release_weak(v27);
  v30 = *(_QWORD*)(a1 + 48);
  if (v28) {
  LABEL_51:
    v30 |= 8uLL;
    *(_QWORD*)(a1 + 48) = v30;
  }
LABEL_52:
  if ((v30 & 2) != 0) {
    v34 = *(float*)(a1 + 12) + 0x1.0000000000000p-1f;
    *(_BYTE*)(a1 + 20) = 1;
    *(float*)(a1 + 16) = fmaxf(v34, 0x1.cccccc0000000p-2f);
    if (a3 == 0) {
      goto LABEL_59;
    }
    goto LABEL_56;
  }
LABEL_53:
  if (*(_BYTE*)(a1 + 20) == 1) {
    *(_BYTE*)(a1 + 20) = 0;
  }
  if (a3 != 0) {
  LABEL_56:
    v31 = (float)((float)((float)*(int*)(a3 + 592) * 0x1.4000000000000p+2f) *
                  0x1.0000000000000p-1f) +
          -0x1.47ae140000000p-7f;
    if (*(float*)(a1 + 8) < v31) {
      v31 = *(float*)(a1 + 8);
    }
    *(float*)(a1 + 8) = v31;
  }
LABEL_59:
  v32 = *(float*)(a1 + 32);
  v33 = *(_BYTE*)(a1 + 64);
  if (v32 < 0x1.cccccc0000000p+0f) {
    v32 = 0x1.cccccc0000000p+0f;
  }
  *(float*)(a1 + 32) = v32;
  if ((v33 & 1) == 0) {
    *(_BYTE*)(a1 + 65) = 1;
  }
}

float* game_zview_d148e0(float32x4_t* a1, char a2)
{
  int v4;
  float v5;
  float32x4_t v6;
  float32x4_t v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float32x4_t v16;
  float v17;
  float v18;
  float v19;

  LANES128(a1[7]).n128_u8[1] = 0;
  game_zview_d14a80((float*)a1);
  if (LANES128(a1[7]).n128_u8[0] != (a2 & 1)) {
    LANES128(a1[7]).n128_u8[0] = a2 & 1;
    if ((a2 & 1) != 0) {
      if ((float)((float)(PSEUDO_UNFUSED(
                      *(float*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[0] + 16) +
                                672LL) *
                      *(float*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[0] + 16) +
                                672LL))) +
                  (float)(*(float*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[0] +
                                               16) +
                                    668LL) *
                          *(float*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[0] +
                                               16) +
                                    668LL))) <= 0x1.99999a0000000p-4f) {
        v4 = LANES128(a1[8]).n128_u8[0];
        v5 = (float)(fminf(fmaxf(**(float**)(LANES128(*(a1)).n128_u64[0] + 144),
                                 0x0.0p+0f),
                           0x1.0000000000000p+0f) *
                     0x1.e666660000000p-1f) +
             0x1.99999a0000000p-5f;
        LANES128(a1[5]).n128_f32[0] = v5;
        if (v4 == 1) {
          LANES128(a1[8]).n128_u8[0] = 1;
          LANES128(a1[5]).n128_f32[0] = v5 * 0x1.0000000000000p-1f;
        }
      }
    }
    else {
      LANES128(a1[7]).n128_u8[1] = 1;
    }
  }
  LANES128(v6).n128_u64[0] = 0x3E8000003E800000LL;
  LANES128(v6).n128_u64[1] = 0x3E8000003E800000LL;
  v7 = vaddq_f32(
      a1[3], vmulq_n_f32(vmulq_f32(a1[2], v6),
                         *(float*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[0] + 8) +
                                   228LL)));
  a1[3] = v7;
  v8 = GameRoutine_a5eaa0(LANES128(v7).n128_f32[0], LANES128(v7).n128_f32[1],
                          LANES128(v7).n128_f32[2]);
  v9 = LANES128(a1[3]).n128_f32[0];
  v10 = (float)(v8 + 0x1.0000000000000p+0f) * 0x1.0000000000000p-1f;
  if (v10 <= 0x1.0000000000000p+0f) {
    v11 = v10;
  }
  else {
    v11 = 0x1.0000000000000p+0f;
  }
  if (v10 >= 0x0.0p+0f) {
    v12 = v11;
  }
  else {
    v12 = 0x0.0p+0f;
  }
  LANES128(a1[4]).n128_f32[0] = v12;
  v13 = (float)(GameRoutine_a5eaa0(LANES128(a1[3]).n128_f32[1],
                                   LANES128(a1[3]).n128_f32[2], v9) +
                0x1.0000000000000p+0f) *
        0x1.0000000000000p-1f;
  if (v13 <= 0x1.0000000000000p+0f) {
    v14 = v13;
  }
  else {
    v14 = 0x1.0000000000000p+0f;
  }
  if (v13 >= 0x0.0p+0f) {
    v15 = v14;
  }
  else {
    v15 = 0x0.0p+0f;
  }
  v16 = a1[3];
  LANES128(a1[4]).n128_f32[1] = v15;
  v17 = (float)(GameRoutine_a5eaa0(LANES128(a1[3]).n128_f32[2],
                                   LANES128(v16).n128_f32[0],
                                   LANES128(v16).n128_f32[1]) +
                0x1.0000000000000p+0f) *
        0x1.0000000000000p-1f;
  if (v17 <= 0x1.0000000000000p+0f) {
    v18 = v17;
  }
  else {
    v18 = 0x1.0000000000000p+0f;
  }
  if (v17 >= 0x0.0p+0f) {
    v19 = v18;
  }
  else {
    v19 = 0x0.0p+0f;
  }
  LANES128(a1[4]).n128_f32[2] = v19;
  CharacterController_d14ce0((float*)a1);
  return game_zview_d14fc0((float*)a1);
}

void game_zview_d14a80(float* a1)
{
  __int64 v1;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;

  v1 = *(_QWORD*)a1;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 600LL) + 16LL);
  v4 = *(float*)(v3 + 672);
  v5 = *(float*)(v3 + 668);
  if ((float)((float)(PSEUDO_UNFUSED(v4 * v4)) + (float)(v5 * v5)) >
      0x1.47ae160000000p-7f) {
    a1[29] = v5;
    a1[30] = v4;
  }
  v6 = a1[20];
  v7 = fabsf(*(float*)(*(_QWORD*)(v1 + 8) + 228LL));
  if (v6 > 0x0.0p+0f) {
    v6 = v6 - v7;
    if (v6 >= 0x0.0p+0f) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if (v6 < 0x0.0p+0f) {
    v6 = v6 + v7;
    if (v6 > 0x0.0p+0f) {
    LABEL_8:
      v6 = 0x0.0p+0f;
    }
  }
LABEL_9:
  a1[20] = v6;
  v8 = 0x1.0000000000000p+0f;
  v9 = *(_QWORD*)(*(_QWORD*)(v1 + 600) + 16LL);
  if ((*(_BYTE*)(*(_QWORD*)(v9 + 8) + 387LL) & 0x40) != 0) {
    v8 = sqrtf((float)(PSEUDO_UNFUSED(*(float*)(v9 + 672) *
                                      *(float*)(v9 + 672))) +
               (float)(*(float*)(v9 + 668) * *(float*)(v9 + 668))) /
         0x1.4000000000000p+2f;
    if (v8 > 0x1.0000000000000p+0f) {
      v8 = 0x1.0000000000000p+0f;
    }
  }
  v10 = *(float*)(*(_QWORD*)(v1 + 8) + 228LL) *
        (float)((float)((float)((float)(fminf(fmaxf(v8, 0x0.0p+0f),
                                              0x1.0000000000000p+0f) *
                                        0x1.9999980000000p-3f) +
                                0x1.99999a0000000p-1f) *
                        0x1.921fb60000000p+2f) *
                (float)((float)(fminf(fmaxf(a1[16], 0x0.0p+0f),
                                      0x1.0000000000000p+0f) *
                                0x1.99999a0000000p-1f) +
                        0x1.99999a0000000p-3f));
  v11 = fmodf(
      (float)(PSEUDO_UNFUSED(*(float*)(*(_QWORD*)GameData_212dc38[0] + 100LL) *
                             0x1.1df46a0000000p-6f)) +
          0x1.921fb60000000p+1f,
      0x1.921fb60000000p+2f);
  v12 = a1[33];
  v13 = v11 + -0x1.921fb60000000p+1f;
  if (v13 < -0x1.921fb60000000p+1f) {
    v13 = v13 + 0x1.921fb60000000p+2f;
  }
  v14 = fmodf(v13 - v12, 0x1.921fb60000000p+2f);
  if (v14 >= 0x0.0p+0f) {
    v15 = v14 + 0x0.0p+0f;
  }
  else {
    v15 = (float)(v14 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v15 > 0x1.921fb60000000p+1f) {
    v15 = v15 + -0x1.921fb60000000p+2f;
  }
  v16 = fabsf(v10);
  v17 = v12 + v15;
  if (v12 > v17) {
    v12 = v12 - v16;
    if (v12 >= v17) {
      goto LABEL_25;
    }
  LABEL_24:
    v12 = v17;
    goto LABEL_25;
  }
  if (v12 < v17) {
    v12 = v12 + v16;
    if (v12 > v17) {
      goto LABEL_24;
    }
  }
LABEL_25:
  v18 = fmodf(v12 + 0x1.921fb60000000p+1f, 0x1.921fb60000000p+2f) +
        -0x1.921fb60000000p+1f;
  if (v18 < -0x1.921fb60000000p+1f) {
    v18 = v18 + 0x1.921fb60000000p+2f;
  }
  a1[33] = v18;
}

float* game_zview_d14fc0(float* result)
{
  float v1;
  __int128 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v1 = 0x1.0000000000000p+0f;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 600LL) + 16LL);
  if ((*(_BYTE*)(*(_QWORD*)(v3 + 8) + 387LL) & 0x40) != 0) {
    v1 = sqrtf((float)(PSEUDO_UNFUSED(*(float*)(v3 + 672) *
                                      *(float*)(v3 + 672))) +
               (float)(*(float*)(v3 + 668) * *(float*)(v3 + 668))) /
         0x1.4000000000000p+2f;
    if (v1 > 0x1.0000000000000p+0f) {
      v1 = 0x1.0000000000000p+0f;
    }
  }
  v4 = fminf(fmaxf(result[18], 0x0.0p+0f), 0x1.0000000000000p+0f);
  v5 = fminf(fmaxf(v1, 0x0.0p+0f), 0x1.0000000000000p+0f);
  v6 =
      (float)(fminf(fmaxf(*(float*)(*(_QWORD*)(*(_QWORD*)result + 144LL) + 8LL),
                          0x0.0p+0f),
                    0x1.0000000000000p+0f) *
              0x1.99999c0000000p-3f) +
      0x1.99999a0000000p-4f;
  v2 = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)result + 16LL) + 560LL);
  v7 = sqrtf((float)(PSEUDO_UNFUSED((float)(result[3] - *((float*)&v2 + 2)) *
                                    (float)(result[3] - *((float*)&v2 + 2)))) +
             (float)((float)(result[2] - *(float*)&v2) *
                     (float)(result[2] - *(float*)&v2)));
  v8 = v7 / 0x1.8000000000000p+1f;
  if ((float)(v7 / 0x1.8000000000000p+1f) > 0x1.0000000000000p+0f) {
    v8 = 0x1.0000000000000p+0f;
  }
  v9 = v6 + (float)(v5 * (float)(0x1.0000000000000p+0f - v6));
  v10 = v7 * 0x1.0000000000000p-3f;
  v11 = (float)((float)(v4 * 0x1.9999a00000000p-3f) + 0x1.cccccc0000000p-1f) *
        (float)((float)(fminf(fmaxf(v8, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                        0x1.3333300000000p-2f) +
                0x1.0000000000000p+0f);
  if (v10 > 0x1.0000000000000p+0f) {
    v10 = 0x1.0000000000000p+0f;
  }
  v12 =
      v11 *
      (float)(v9 + (float)(fminf(fmaxf(v10, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                           (float)(0x1.0000000000000p+0f - v9)));
  if (v12 > 0x1.0000000000000p+1f) {
    v12 = 0x1.0000000000000p+1f;
  }
  result[31] = v12;
  return result;
}

float* game_zview_d15100(float* a1, char a2, double a3, double a4, double a5,
                         double a6, double a7, double a8, long double a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  float v14;
  float v15;
  char v16;
  float* v17;
  float v18;
  __int64 v19;
  float v20;
  __int128 v21;
  float v22;
  float v23;
  float v24;
  float* v25;
  float* v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  bool v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  unsigned __int8 explicit;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __int64 v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  bool v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  double v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float32x4_t v90;
  __int64* v91;
  char v92;
  float32x2_t v93;
  unsigned int v94;
  int8x8_t v95;
  float v96;
  __int64 v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  bool v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  __int64 v119;
  float v120;
  __int64 v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  __int64 v130;
  float v131;
  float v132;
  float32x4_t v133;
  float32x4_t v134;
  float v135;
  char v136;
  char v137;
  int v139;
  int v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  int8x8_t v154;
  unsigned __int32 v155;
  int v156;
  unsigned __int64 v157;
  double v158;
  float32x4_t v159;
  float32x4_t v160;
  unsigned __int64 v161[2];

  v9 = *(_QWORD*)a1;
  v11 = *(_QWORD*)(*(_QWORD*)a1 + 600LL);
  v12 = *(_QWORD*)(v11 + 16);
  v13 = *(_QWORD*)(v12 + 568);
  v14 = *(float*)(v12 + 292);
  v15 = *(float*)(v12 + 296);
  v161[0] = *(_QWORD*)(v12 + 560);
  v161[1] = v13;
  if ((*(_BYTE*)(*(_QWORD*)(v12 + 8) + 387LL) & 0x40) != 0) {
    v16 = a2 | (GameData_21ed070 != 0);
  }
  else {
    v16 = 1;
  }
  v17 = *(float**)(v9 + 144);
  v18 = a1[19] * 0x1.921fb60000000p+1f;
  v19 = *(_QWORD*)(v11 + 168);
  v20 =
      v18 * (float)((float)((float)((float)(v17[2] + -0x1.0000000000000p-1f) +
                                    (float)(v17[2] + -0x1.0000000000000p-1f)) *
                            0x1.99999a0000000p-4f) +
                    0x1.0000000000000p+1f);
  if (v19 != 0) {
    LOBYTE(v18) = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                       8LL * *(unsigned __int8*)(v19 + 1944)) +
                            49LL);
    v20 = v20 +
          (float)((float)((float)(0x1.0000000000000p+0f / (float)LODWORD(v18)) *
                          0x1.921fb60000000p+2f) *
                  0x1.0000000000000p-1f);
  }
  LODWORD(a3) = *(_DWORD*)(*(_QWORD*)(v9 + 16) + 576LL);
  v21 = *(_OWORD*)(v12 + 560);
  v22 = v17[3];
  v23 = *(float*)(*(_QWORD*)(v12 + 488) + 36LL);
  v158 = a3;
  LODWORD(v24) = *(_QWORD*)(v12 + 568);
  v25 = (float*)GameData_212c190;
  v26 = (float*)GameData_212c188;
  if ((v16 & 1) != 0) {
    v27 = *(float*)(v9 + 528) + *(float*)(v11 + 528);
    v28 = (float)((float)((float)(v17[1] + -0x1.0000000000000p-1f) +
                          (float)(v17[1] + -0x1.0000000000000p-1f)) *
                  0x1.99999a0000000p-3f) +
          0x1.19999a0000000p+0f;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                              memory_order_acquire) &
         1) == 0) {
      v156 = v21;
      v139 = __cxa_guard_acquire((__int64)&GameData_22110c8);
      LODWORD(v21) = v156;
      if (v139 != 0) {
        GameData_22110c0 = 0x3F80000000000000LL;
        __cxa_guard_release((__int64)&GameData_22110c8);
        LODWORD(v21) = v156;
      }
    }
    v29 = v27 + v28;
    v30 = v20 +
          (float)(roundf(v20 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v30 <= 0x1.921fb60000000p+0f) {
      v54 = 0x1.0000000000000p+0f;
      if (v30 >= -0x1.921fb60000000p+0f) {
      LABEL_31:
        v55 = v30 * v30;
        v56 = *(_QWORD*)a1;
        v57 =
            v30 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)v25) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)v25 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        v25) -
                                                                          (float)((float)(v25[1] -
                                                                                          (float)(*v25 *
                                                                                                  (float)(v30 *
                                                                                                          v30))) *
                                                                                  (float)(v30 *
                                                                                          v30))) *
                                                               (float)(v30 *
                                                                       v30))) *
                                               (float)(v30 * v30))) *
                            (float)(v30 * v30)) +
                    0x1.0000000000000p+0f);
        LODWORD(a9) = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26);
        v58 =
            v54 *
            (float)((float)((float)-(
                                float)(*(float*)&a9 -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)v26 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        v26) -
                                                                          (float)((float)(v26[1] -
                                                                                          (float)(*v26 *
                                                                                                  v55)) *
                                                                                  v55)) *
                                                               v55)) *
                                               v55)) *
                            v55) +
                    0x1.0000000000000p+0f);
        v59 = (float)(PSEUDO_UNFUSED(v57 * *((float*)&GameData_22110c0 + 1))) +
              (float)(*(float*)&GameData_22110c0 * v58);
        v60 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v58)) -
              (float)(*(float*)&GameData_22110c0 * v57);
        v61 = v29 * v59;
        v62 = v29 * v60;
        goto LABEL_52;
      }
      v31 = -0x1.921fb60000000p+1f;
    }
    else {
      v31 = 0x1.921fb60000000p+1f;
    }
    v30 = v31 - v30;
    v54 = -0x1.0000000000000p+0f;
    goto LABEL_31;
  }
  LODWORD(v149) = *(_QWORD*)(v12 + 568);
  v150 = v15;
  LODWORD(v153) = *(_OWORD*)(v12 + 560);
  v151 = v17[3];
  v152 = *(float*)(*(_QWORD*)(v12 + 488) + 36LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release((__int64)&GameData_22110c8);
  }
  v32 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)v25);
  v33 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)v26);
  v34 = GameData_22110c0;
  v35 = v20 +
        (float)(roundf(v20 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v35 < -0x1.921fb60000000p+0f) {
    v36 = -0x1.0000000000000p+0f;
  }
  else {
    v36 = 0x1.0000000000000p+0f;
  }
  v37 = -0x1.921fb60000000p+1f - v35;
  if (v35 >= -0x1.921fb60000000p+0f) {
    v37 = v35;
  }
  v38 = 0x1.921fb60000000p+1f - v35;
  v39 = v35 <= 0x1.921fb60000000p+0f;
  if (v35 > 0x1.921fb60000000p+0f) {
    v40 = -0x1.0000000000000p+0f;
  }
  else {
    v40 = v36;
  }
  if (v39) {
    v41 = v37;
  }
  else {
    v41 = v38;
  }
  v148 = v25[1];
  v143 = *v25;
  v147 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25 + 4);
  v142 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25);
  v42 = *v26;
  v43 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26);
  v146 = v26[1];
  v144 =
      v41 *
      (float)((float)((float)-(
                          float)(v32 -
                                 (float)((float)(v147 +
                                                 (float)((float)-(
                                                             float)(v142 -
                                                                    (float)((float)(v148 -
                                                                                    (float)(*v25 *
                                                                                            (float)(v41 *
                                                                                                    v41))) *
                                                                            (float)(v41 *
                                                                                    v41))) *
                                                         (float)(v41 * v41))) *
                                         (float)(v41 * v41))) *
                      (float)(v41 * v41)) +
              0x1.0000000000000p+0f);
  v145 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 4);
  v44 =
      v40 *
      (float)((float)((float)-(
                          float)(v33 -
                                 (float)((float)(v145 +
                                                 (float)((float)-(
                                                             float)(v43 -
                                                                    (float)((float)(v146 -
                                                                                    (float)(*v26 *
                                                                                            (float)(v41 *
                                                                                                    v41))) *
                                                                            (float)(v41 *
                                                                                    v41))) *
                                                         (float)(v41 * v41))) *
                                         (float)(v41 * v41))) *
                      (float)(v41 * v41)) +
              0x1.0000000000000p+0f);
  v141 = v144 * *((float*)&GameData_22110c0 + 1);
  v45 = fmodf(a1[33] + 0x1.921fb60000000p+1f, 0x1.921fb60000000p+2f);
  explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                  memory_order_acquire);
  if (v45 >= 0x0.0p+0f) {
    v47 = v45 + 0x0.0p+0f;
  }
  else {
    v47 = (float)(v45 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release((__int64)&GameData_22110c8);
  }
  v48 = *((float*)&v34 + 1) * v44;
  v49 = -v32;
  v50 = -v33;
  v51 = v141 + (float)(*(float*)&v34 * v44);
  v52 = v47 +
        (float)(roundf(v47 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v52 <= 0x1.921fb60000000p+0f) {
    v22 = v151;
    v23 = v152;
    v15 = v150;
    v24 = v149;
    v63 = 0x1.0000000000000p+0f;
    if (v52 >= -0x1.921fb60000000p+0f) {
      goto LABEL_35;
    }
    v53 = -0x1.921fb60000000p+1f;
  }
  else {
    v22 = v151;
    v23 = v152;
    v15 = v150;
    v24 = v149;
    v53 = 0x1.921fb60000000p+1f;
  }
  v52 = v53 - v52;
  v63 = -0x1.0000000000000p+0f;
LABEL_35:
  v64 = v48 - (float)(*(float*)&v34 * v144);
  v65 =
      v52 *
      (float)((float)((float)(v49 +
                              (float)((float)(v147 +
                                              (float)((float)((float)((float)(v148 +
                                                                              (float)((float)-v143 *
                                                                                      (float)(v52 *
                                                                                              v52))) *
                                                                      (float)(v52 *
                                                                              v52)) -
                                                              v142) *
                                                      (float)(v52 * v52))) *
                                      (float)(v52 * v52))) *
                      (float)(v52 * v52)) +
              0x1.0000000000000p+0f);
  v66 =
      v63 *
      (float)((float)((float)(v50 +
                              (float)((float)(v145 +
                                              (float)((float)((float)((float)(v146 +
                                                                              (float)((float)-v42 *
                                                                                      (float)(v52 *
                                                                                              v52))) *
                                                                      (float)(v52 *
                                                                              v52)) -
                                                              v43) *
                                                      (float)(v52 * v52))) *
                                      (float)(v52 * v52))) *
                      (float)(v52 * v52)) +
              0x1.0000000000000p+0f);
  v67 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v65)) +
        (float)(*(float*)&GameData_22110c0 * v66);
  v68 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v66)) -
        (float)(*(float*)&GameData_22110c0 * v65);
  if (v51 != 0x0.0p+0f || (v69 = v51, v70 = v64, v64 != 0x0.0p+0f)) {
    v71 = sqrtf((float)(PSEUDO_UNFUSED(v64 * v64)) + (float)(v51 * v51));
    v69 = v51 / v71;
    v70 = v64 / v71;
  }
  v72 = v68 == 0x0.0p+0f && v67 == 0x0.0p+0f;
  v56 = *(_QWORD*)a1;
  v73 = sqrtf((float)(PSEUDO_UNFUSED(v68 * v68)) + (float)(v67 * v67));
  v74 = v67 / v73;
  v75 = v68 / v73;
  if (v72) {
    v76 = v68;
  }
  else {
    v76 = v75;
  }
  if (v72) {
    v77 = v67;
  }
  else {
    v77 = v74;
  }
  v78 = (float)(PSEUDO_UNFUSED(v70 * v76)) + (float)(v69 * v77);
  LODWORD(a9) = *(_DWORD*)(v56 + 528);
  v79 = *(float*)(*(_QWORD*)(*(_QWORD*)a1 + 144LL) + 4LL) +
        -0x1.0000000000000p-1f;
  v80 = (float)(*(float*)&a9 + *(float*)(v11 + 528)) +
        (float)((float)((float)(v79 + v79) * 0x1.99999a0000000p-4f) +
                0x1.0000000000000p+0f);
  if (v78 <= 0x0.0p+0f) {
    *(float*)&v21 = v153;
    v82 = (float)(v24 + (float)(PSEUDO_UNFUSED(v64 * v80))) - v24;
    v83 = (float)(v153 + (float)(PSEUDO_UNFUSED(v51 * v80))) - v153;
    if (!v72) {
      v67 = v74;
      v68 = v75;
    }
    v84 = (float)((float)(PSEUDO_UNFUSED(v82 * v68)) + (float)(v67 * v83)) *
          -0x1.0000000000000p+1f;
    v61 = v83 + (float)(PSEUDO_UNFUSED(v67 * v84));
    v62 = v82 + (float)(PSEUDO_UNFUSED(v68 * v84));
  }
  else {
    *(float*)&v21 = v153;
    v81 = (float)((float)(*(float*)&a9 * 0x1.0000000000000p+1f) +
                  0x1.99999a0000000p-3f) +
          v80;
    v61 = v51 * v81;
    v62 = v64 * v81;
  }
LABEL_52:
  *(float*)&a6 = (float)((float)(v24 + v62) + a1[23]) + a1[25];
  *(float*)&v85 = (float)((float)(*(float*)&v21 + v61) + a1[22]) + a1[24];
  v86 = *(float*)&a6 - v15;
  v87 = (float)(*(float*)(*(_QWORD*)(v56 + 600) + 528LL) +
                0x1.4000000000000p+2f) *
        0x1.cccccc0000000p-1f;
  v88 = *(float*)&v85 - v14;
  *(float*)&a7 = (float)(PSEUDO_UNFUSED(v86 * v86)) + (float)(v88 * v88);
  v89 = v87 * v87;
  if (*(float*)&a7 <= (float)(v87 * v87)) {
    HIDWORD(v85) = LODWORD(a6);
  }
  else {
    if (v88 != 0x0.0p+0f || v86 != 0x0.0p+0f) {
      *(float*)&a6 = sqrtf(*(float*)&a7);
      v88 = v88 / *(float*)&a6;
      v86 = v86 / *(float*)&a6;
    }
    *(float*)&v85 = v14 + (float)(PSEUDO_UNFUSED(v87 * v88));
    *((float*)&v85 + 1) = v15 + (float)(PSEUDO_UNFUSED(v87 * v86));
  }
  LANES128(v90).n128_u64[0] = __PAIR64__(LODWORD(v158), LODWORD(v85));
  LANES64(v154).n64_f64[0] = v85;
  LANES128(v90).n128_u64[1] = HIDWORD(v85);
  v160 = v90;
  v91 = GameData_212ebd0[0];
  v92 =
      game_zview_d16b40(*(float*)(v56 + 528),
                        COERCE_DOUBLE(__PAIR64__(LODWORD(v158), LODWORD(v85))),
                        v158, a6, a7, v85, a9, *GameData_212ebd0[0], v56 + 288,
                        (__int128*)&v160, v161, (__int64)&v160);
  LANES64(v93).n64_u64[0] =
      LANES64(vld2_f32((const float*)&v160).val[0]).n64_u64[0];
  if ((v92 & 1) != 0) {
    v94 = -1;
  }
  else {
    v94 = 0;
  }
  LANES64(v95).n64_u64[0] =
      LANES64_OF(vbsl_s8(vdup_n_s32(v94), v93, v154)).n64_u64[0];
  v96 = LANES64(v95).n64_f32[1];
  if ((float)((float)(PSEUDO_UNFUSED((float)(LANES64(v95).n64_f32[1] - v15) *
                                     (float)(LANES64(v95).n64_f32[1] - v15))) +
              (float)((float)(LANES64(v95).n64_f32[0] - v14) *
                      (float)(LANES64(v95).n64_f32[0] - v14))) > v89) {
    goto LABEL_93;
  }
  v97 = *(_QWORD*)(*(_QWORD*)a1 + 16LL);
  v98 = *(float*)(v97 + 296);
  v99 = *(float*)(*(_QWORD*)(v97 + 488) + 36LL);
  v100 = LANES64(v95).n64_f32[0] - *(float*)(v97 + 292);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0) {
    v157 = LANES64(v95).n64_u64[0];
    v140 = __cxa_guard_acquire((__int64)&GameData_22110c8);
    LANES64(v95).n64_u64[0] = v157;
    if (v140 != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release((__int64)&GameData_22110c8);
      LANES64(v95).n64_u64[0] = v157;
    }
  }
  v101 = v96 - v98;
  v102 = v99 +
         (float)(roundf(v99 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v102 < -0x1.921fb60000000p+0f) {
    v103 = -0x1.0000000000000p+0f;
  }
  else {
    v103 = 0x1.0000000000000p+0f;
  }
  v104 = -0x1.921fb60000000p+1f - v102;
  if (v102 >= -0x1.921fb60000000p+0f) {
    v104 = v102;
  }
  v105 = 0x1.921fb60000000p+1f - v102;
  v106 = v102 <= 0x1.921fb60000000p+0f;
  if (v102 > 0x1.921fb60000000p+0f) {
    v107 = -0x1.0000000000000p+0f;
  }
  else {
    v107 = v103;
  }
  if (v106) {
    v108 = v104;
  }
  else {
    v108 = v105;
  }
  v109 = v108 * v108;
  v110 =
      v108 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)v25) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)v25 + 4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  v25) -
                                                                    (float)((float)(v25[1] -
                                                                                    (float)(*v25 *
                                                                                            (float)(v108 *
                                                                                                    v108))) *
                                                                            (float)(v108 *
                                                                                    v108))) *
                                                         (float)(v108 *
                                                                 v108))) *
                                         (float)(v108 * v108))) *
                      (float)(v108 * v108)) +
              0x1.0000000000000p+0f);
  v111 =
      v107 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)v26) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)v26 + 4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  v26) -
                                                                    (float)((float)(v26[1] -
                                                                                    (float)(*v26 *
                                                                                            v109)) *
                                                                            v109)) *
                                                         v109)) *
                                         v109)) *
                      v109) +
              0x1.0000000000000p+0f);
  v112 = (float)(PSEUDO_UNFUSED(v110 * *((float*)&GameData_22110c0 + 1))) +
         (float)(*(float*)&GameData_22110c0 * v111);
  v113 = *((float*)&GameData_22110c0 + 1) * v111;
  if (v100 != 0x0.0p+0f || v101 != 0x0.0p+0f) {
    v114 = sqrtf((float)(PSEUDO_UNFUSED(v101 * v101)) + (float)(v100 * v100));
    v100 = v100 / v114;
    v101 = v101 / v114;
  }
  v115 = v113 - (float)(*(float*)&GameData_22110c0 * v110);
  if (v112 != 0x0.0p+0f || v115 != 0x0.0p+0f) {
    v116 = sqrtf((float)(PSEUDO_UNFUSED(v115 * v115)) + (float)(v112 * v112));
    v112 = v112 / v116;
    v115 = v115 / v116;
  }
  v117 = (float)((float)((float)(PSEUDO_UNFUSED(v101 * v115)) +
                         (float)(v100 * v112)) +
                 -0x1.0000000000000p+0f) *
         -0x1.0000000000000p-1f;
  v118 = v117 <= 0x1.0000000000000p+0f ? v117 : 0x1.0000000000000p+0f;
  v119 = *(_QWORD*)a1;
  v120 = (float)(fminf(fmaxf(v118, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                 0x1.fd70a40000000p+0f) +
         0x1.47ae140000000p-7f;
  v121 = *(_QWORD*)(*(_QWORD*)a1 + 16LL);
  v122 = v117 >= 0x0.0p+0f ? v120 : 0x1.47ae140000000p-7f;
  v123 = *(float*)(v121 + 296);
  v124 = *(float*)(v121 + 292);
  if ((float)((float)(PSEUDO_UNFUSED((float)(v123 - v96) *
                                     (float)(v123 - v96))) +
              (float)((float)(v124 - LANES64(v95).n64_f32[0]) *
                      (float)(v124 - LANES64(v95).n64_f32[0]))) <=
      (float)(v122 * v122)) {
  LABEL_93:
    v137 = 0;
  }
  else {
    v125 = a1[29];
    v126 = a1[30];
    v127 = (float)(PSEUDO_UNFUSED(v126 * v126)) + (float)(v125 * v125);
    if (v127 <= 0x0.0p+0f ||
        (float)((float)(PSEUDO_UNFUSED((float)(v15 - v123) *
                                       (float)(v15 - v123))) +
                (float)((float)(v14 - v124) * (float)(v14 - v124))) >=
            0x1.9000000000000p+4f) {
      v137 = 1;
    }
    else {
      v128 = (float)(fminf(fmaxf(*(float*)(*(_QWORD*)(v119 + 144) + 8LL),
                                 0x0.0p+0f),
                           0x1.0000000000000p+0f) *
                     0x1.6666660000000p-1f) +
             0x1.3333340000000p-2f;
      if (v125 != 0x0.0p+0f || v126 != 0x0.0p+0f) {
        v129 = sqrtf(v127);
        v125 = v125 / v129;
        v126 = v126 / v129;
      }
      v130 = *v91;
      v155 = LANES64(v95).n64_u32[0];
      v131 = v128 * (float)(v125 * 0x1.4000000000000p+1f);
      v132 = v128 * (float)(v126 * 0x1.4000000000000p+1f);
      LANES128(v133).n128_u64[0] =
          __PAIR64__(LODWORD(v158), LANES64(v95).n64_u32[0]);
      LANES128(v133).n128_u64[1] = LANES64(v95).n64_u32[1];
      LANES128(v134).n128_f32[0] = LANES64(v95).n64_f32[0] + v131;
      v135 = *(float*)(v119 + 528);
      v160 = v133;
      LANES128(v134).n128_u32[1] = LODWORD(v158);
      LANES128(v134).n128_u64[1] = COERCE_UNSIGNED_INT(v96 + v132);
      v159 = v134;
      v136 = game_zview_d17160(v135, v130, v119 + 288, &v160, &v159);
      LANES64(v95).n64_u32[0] = v155;
      v137 = v136 & 1;
    }
  }
  a1[2] = LANES64(v95).n64_f32[0];
  a1[3] = v96;
  *((_BYTE*)a1 + 20) = v137;
  a1[4] = v23 + (float)((float)((float)(v22 + -0x1.0000000000000p-1f) +
                                (float)(v22 + -0x1.0000000000000p-1f)) *
                        0x1.41b2f80000000p-2f);
  return game_zview_d14fc0(a1);
}

__int64 game_zview_dab2c0(_QWORD* a1, __int64* a2, int a3)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18[2];
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  int v21;

  v4 = a1[2];
  v5 = a2[1];
  v18[0] = *a2;
  v18[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_d13780(v4, v18, a3);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = std___1___shared_weak_count___release_weak(v5);
    }
    v9 = *a2;
    v8 = a2[1];
    if (v8 != 0) {
    LABEL_5:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      v10 = a1[34];
      v11 = a1[35];
      if (v10 != v11) {
        while (1) {
          v19_.v19 = v9;
          v19_.v20 = v8;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                    memory_order_relaxed);
          v21 = 2;
          v12 = *(_QWORD*)(v10 + 48);
          if (v12 == 0) {
            break;
          }
          result = (*(__int64 (**)(__int64, int*, __int64*))(
              *(_QWORD*)v12 + 48LL))(v12, &v21, &v19_.v19);
          v13 = v19_.v20;
          if (v19_.v20 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = std___1___shared_weak_count___release_weak(v13);
          }
          v10 += 64;
          if (v10 == v11) {
            goto LABEL_20;
          }
        }
      LABEL_24:
        GameRoutine_60a310();
      }
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        return std___1___shared_weak_count___release_weak(v8);
      }
      return result;
    }
  }
  else {
    result = GameRoutine_d13780(v4, v18, a3);
    v9 = *a2;
    v8 = a2[1];
    if (v8 != 0) {
      goto LABEL_5;
    }
  }
  v14 = a1[34];
  v15 = a1[35];
  if (v14 != v15) {
    do {
      v19_.v19 = v9;
      v19_.v20 = 0;
      v21 = 2;
      v16 = *(_QWORD*)(v14 + 48);
      if (v16 == 0) {
        goto LABEL_24;
      }
      result = (*(__int64 (**)(__int64, int*, __int64*))(*(_QWORD*)v16 + 48LL))(
          v16, &v21, &v19_.v19);
      v17 = v19_.v20;
      if (v19_.v20 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        result = std___1___shared_weak_count___release_weak(v17);
      }
      v14 += 64;
    } while (v14 != v15);
  LABEL_20:
    if (v8 != 0) {
      goto LABEL_21;
    }
  }
  return result;
}

void game_zview_dab870(__int64 a1, __int64** a2, char a3)
{
  __int64* v4;
  __int64 v5;
  __int64** v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int v12;
  int v13;
  bool v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36[2];
  __int64 v37[2];
  struct {
    __int64 v38;
    int v39;
  } v38_;
  struct {
    __int64* v40;
    __int64 v41;
  } v40_;

  if ((a3 & 1) != 0) {
    v4 = *a2;
    v5 = (*a2)[1];
    if (v5 != 0) {
      v6 = a2;
      v7 = std___1___shared_weak_count_lock(v5);
      if (v7 != 0) {
        v8 = *v4;
      }
      else {
        v8 = 0;
      }
      a2 = v6;
    }
    else {
      v8 = 0;
      v7 = 0;
    }
    v15 = *a2;
    v16 = (*a2)[1];
    if (v16 != 0) {
      v17 = std___1___shared_weak_count_lock(v16);
      if (v17 != 0) {
        v18 = *v15;
      }
      else {
        v18 = 0;
      }
    }
    else {
      v18 = 0;
      v17 = 0;
    }
    v19 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 488LL) + 36LL);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release((__int64)&GameData_22110c8);
    }
    v20 = v19 +
          (float)(roundf(v19 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v20 <= 0x1.921fb60000000p+0f) {
      v22 = 0x1.0000000000000p+0f;
      if (v20 >= -0x1.921fb60000000p+0f) {
      LABEL_30:
        v23 = v20 * v20;
        v24 =
            v20 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c190 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c190) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c190 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c190 *
                                                                                                  (float)(v20 *
                                                                                                          v20))) *
                                                                                  (float)(v20 *
                                                                                          v20))) *
                                                               (float)(v20 *
                                                                       v20))) *
                                               (float)(v20 * v20))) *
                            (float)(v20 * v20)) +
                    0x1.0000000000000p+0f);
        v25 =
            v22 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  v23)) *
                                                                                  v23)) *
                                                               v23)) *
                                               v23)) *
                            v23) +
                    0x1.0000000000000p+0f);
        v26 = (float)(PSEUDO_UNFUSED(v24 * *((float*)&GameData_22110c0 + 1))) +
              (float)(*(float*)&GameData_22110c0 * v25);
        v27 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v25)) -
              (float)(*(float*)&GameData_22110c0 * v24);
        if (v8 == 0 || v18 == 0) {
          goto LABEL_44;
        }
        v40_.v40 = nullptr;
        LODWORD(v40_.v41) = 0;
        v37[1] = v7;
        v38_.v38 = 0;
        v38_.v39 = 0;
        v37[0] = v8;
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
        }
        if (GameRoutine_d4eca0(v37, (__int64)&v40_.v40)) {
          v36[0] = v18;
          v36[1] = v17;
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                      memory_order_relaxed);
            v28 = GameRoutine_d4eca0(v36, (__int64)&v38_.v38);
            std___1___shared_weak_count___release_weak(v17);
            if (v7 == 0) {
              goto LABEL_40;
            }
          }
          else {
            v28 = GameRoutine_d4eca0(v36, (__int64)&v38_.v38);
            if (v7 == 0) {
              goto LABEL_40;
            }
          }
        }
        else {
          v28 = false;
          if (v7 == 0) {
          LABEL_40:
            if (v28) {
              v29 = *(_QWORD*)(v38_.v38 + 16);
              v30 = v40_.v40[2];
              v31 = *(float*)(v29 + 292) - *(float*)(v30 + 292);
              v32 = *(float*)(v29 + 296) - *(float*)(v30 + 296);
              if (v31 != 0x0.0p+0f || v32 != 0x0.0p+0f) {
                v33 = sqrtf((float)(PSEUDO_UNFUSED(v32 * v32)) +
                            (float)(v31 * v31));
                v26 = v31 / v33;
                v27 = v32 / v33;
              }
            }
          LABEL_44:
            v34 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 40LL) + 56LL);
            if (v34 != 0) {
              *(float*)(v34 + 88) = v26;
              *(float*)(v34 + 92) = v27;
              v35 = *(_QWORD*)(v34 + 8);
              if ((*(_BYTE*)(v35 + 848) & 1) == 0) {
                *(_DWORD*)(v35 + 32) = 7;
                *(_BYTE*)(v35 + 36) = 1;
                if ((*(_BYTE*)(v35 + 112) & 1) == 0 &&
                    (*(_BYTE*)(v35 + 113) & 1) != 0) {
                  WaitRelease_cfa2a0(v35 + 16);
                }
              }
            }
            if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
              std___1___shared_weak_count___release_weak(v17);
              if (v7 == 0) {
                return;
              }
              goto LABEL_52;
            }
            goto LABEL_51;
          }
        }
        std___1___shared_weak_count___release_weak(v7);
        goto LABEL_40;
      }
      v21 = -0x1.921fb60000000p+1f;
    }
    else {
      v21 = 0x1.921fb60000000p+1f;
    }
    v20 = v21 - v20;
    v22 = -0x1.0000000000000p+0f;
    goto LABEL_30;
  }
  v9 = *(_QWORD*)(a1 + 16);
  v10 = *a2;
  v7 = (__int64)a2[1];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v11 = *(_QWORD*)(*(_QWORD*)(v9 + 40) + 32LL);
  if (v11 == 0 ||
      ((v12 = *(unsigned __int8*)(v9 + 28), v13 = *(_DWORD*)(v9 + 24), v12 == 1)
           ? (v14 = v13 == 4)
           : (v14 = false),
       !v14)) {
  LABEL_51:
    if (v7 == 0) {
      return;
    }
    goto LABEL_52;
  }
  v40_.v40 = v10;
  v40_.v41 = v7;
  if (v7 == 0) {
    StateAttack_d45e00(v11, &v40_.v40);
    return;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  StateAttack_d45e00(v11, &v40_.v40);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
LABEL_52:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
}

__int64 game_zview_dacb90(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  int8x16_t* v5;
  int8x16_t* v6;
  unsigned __int64 v7;
  int8x16_t v8;
  int8x16_t v9;
  int8x16_t v10;
  float32x4_t v11;
  unsigned int v12;
  int8x16_t v13;
  int8x16_t v14;
  unsigned int v15;
  int8x16_t v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  unsigned int v23;
  int8x16_t v24;
  unsigned int v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;

  v1 = result;
  if (*(_BYTE*)(result + 152) == 1) {
    v2 = *(_DWORD*)(result + 148);
    *(_DWORD*)(result + 208) = *(_DWORD*)(result + 144);
    *(_DWORD*)(result + 212) = v2;
    return result;
  }
  v3 = *(_QWORD*)(result + 8);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = *(int8x16_t**)v1;
    }
    else {
      v5 = nullptr;
    }
    result = *(_QWORD*)(v1 + 24);
    if (result != 0) {
      goto LABEL_8;
    }
  LABEL_31:
    *(_QWORD*)(v1 + 208) = 0x3F80000000000000LL;
    if (v4 == 0) {
      return result;
    }
    goto LABEL_39;
  }
  v4 = 0;
  v5 = nullptr;
  result = *(_QWORD*)(v1 + 24);
  if (result == 0) {
    goto LABEL_31;
  }
LABEL_8:
  result = std___1___shared_weak_count_lock(result);
  if (v5 != nullptr && result != 0 &&
      (v6 = *(int8x16_t**)(v1 + 16)) != nullptr) {
    v7 = LANES128(v6[10]).n128_u64[1];
    v8 = (__typeof__(v8)){0};
    v9 = (__typeof__(v9)){0};
    v10 = (__typeof__(v10)){0};
    if (v7 != 0) {
      v11 = *(float32x4_t*)(*(_QWORD*)(v7 + 8) + 304LL);
      v10 = vaddq_f32(v11, v6[5]);
      v9 = vaddq_f32(v11, v6[6]);
      LANES128(v10).n128_u32[3] = 0;
      LANES128(v9).n128_u32[3] = 0;
    }
    if (LANES128(v6[2]).n128_u8[0] != 0) {
      v12 = -1;
    }
    else {
      v12 = 0;
    }
    v13 = vbslq_s8(vdupq_n_s32(v12), v6[1], v10);
    v14 = v6[3];
    if (LANES128(v6[4]).n128_u8[0] != 0) {
      v15 = -1;
    }
    else {
      v15 = 0;
    }
    v16 = vdupq_n_s32(v15);
    v17 = LANES128(v5[10]).n128_u64[1];
    v18 = vaddq_f32(v13, vbslq_s8(v16, v14, v9));
    LANES128(v19).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v19).n128_u64[1] = 0x3F0000003F000000LL;
    v20 = vmulq_f32(v18, v19);
    v21 = (__typeof__(v21)){0};
    if (v17 != 0) {
      v22 = *(float32x4_t*)(*(_QWORD*)(v17 + 8) + 304LL);
      v21 = vaddq_f32(v22, v5[5]);
      v8 = vaddq_f32(v22, v5[6]);
      LANES128(v21).n128_u32[3] = 0;
      LANES128(v8).n128_u32[3] = 0;
    }
    if (LANES128(v5[2]).n128_u8[0] != 0) {
      v23 = -1;
    }
    else {
      v23 = 0;
    }
    v24 = vbslq_s8(vdupq_n_s32(v23), v5[1], v21);
    if (LANES128(v5[4]).n128_u8[0] != 0) {
      v25 = -1;
    }
    else {
      v25 = 0;
    }
    v26 = vaddq_f32(v24, vbslq_s8(vdupq_n_s32(v25), v5[3], v8));
    LANES128(v27).n128_u64[0] = 0xBF000000BF000000LL;
    LANES128(v27).n128_u64[1] = 0xBF000000BF000000LL;
    v28 = vaddq_f32(v20, vmulq_f32(v26, v27));
    if (LANES128(v28).n128_f32[0] == 0x0.0p+0f &&
        LANES128(v28).n128_f32[2] == 0x0.0p+0f) {
      v29 = 0x1.0000000000000p+0f;
      v30 = 0x0.0p+0f;
    }
    else {
      v31 =
          sqrtf((float)(PSEUDO_UNFUSED(LANES128(v28).n128_f32[2] *
                                       LANES128(v28).n128_f32[2])) +
                (float)(LANES128(v28).n128_f32[0] * LANES128(v28).n128_f32[0]));
      v30 = LANES128(v28).n128_f32[0] / v31;
      v29 = LANES128(v28).n128_f32[2] / v31;
    }
    *(float*)(v1 + 208) = v30;
    *(float*)(v1 + 212) = v29;
  }
  else {
    *(_QWORD*)(v1 + 208) = 0x3F80000000000000LL;
    if (result == 0) {
    LABEL_38:
      if (v4 == 0) {
        return result;
      }
      goto LABEL_39;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_38;
  }
  v32 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  result = std___1___shared_weak_count___release_weak(v32);
  if (v4 == 0) {
    return result;
  }
LABEL_39:
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_zview_ffe870(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t* v7;
  __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  __int64 v12;

  v1 = a1[2];
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 40);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = *(_QWORD*)(v1 + 32);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v6);
        }
        if (v5 != 0) {
          v8 = a1[1];
          v7 = (float32x4_t*)a1[2];
          v9 = *(float32x4_t*)(*(_QWORD*)(v8 + 16) + 560LL);
          LANES128(v9).n128_u32[3] = 0;
          v10 = vsubq_f32(
              *v7, vaddq_f32(v9, COERCE_AS(float32x4_t, GameData_1a83780)));
          v11 = vmulq_f32(v10, v10);
          LANES128(v11).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                      .n64_f32[0] >= 0x1.9eb8500000000p-3f ||
              vabds_f32(LANES128(v7[1]).n128_f32[0],
                        *(float*)(v8 + 528) + 0x1.0000000000000p-1f) >=
                  0x1.47ae160000000p-7f ||
              fabsf(LANES128(v7[1]).n128_f32[1] + -0x1.2666660000000p+1f) >=
                  0x1.47ae160000000p-7f) {
            game_zview_ffed80((__int64)a1);
            v12 = a1[3];
            a1[2] = 0;
            a1[3] = 0;
            if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
              std___1___shared_weak_count___release_weak(v12);
            }
            game_zview_ffe9d0_alt1(a1);
          }
        }
      }
    }
  }
  return game_zview_ffec00((__int64)a1);
}

_QWORD* game_zview_ffe9d0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  float32x4_t* v6;
  __int64 v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  __int64 v11;
  __int64 v12;
  float v13;
  _QWORD* v14;
  __int64 v15;
  float* v16;
  __int128 v17;
  float32x4_t v18;

  v1 = a1[2];
  if (v1 != 0) {
    result = *(_QWORD**)(v1 + 40);
    if (result == nullptr) {
      goto LABEL_14;
    }
    result = (_QWORD*)std___1___shared_weak_count_lock((__int64)result);
    if (result == nullptr) {
      goto LABEL_14;
    }
    v4 = *(_QWORD*)(v1 + 32);
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v4 == 0) {
        goto LABEL_14;
      }
    }
    else {
      v5 = (__int64)result;
      (*(void (**)(_QWORD*))(*result + 16LL))(result);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v5);
      if (v4 == 0) {
        goto LABEL_14;
      }
    }
    v7 = a1[1];
    v6 = (float32x4_t*)a1[2];
    v8 = *(float32x4_t*)(*(_QWORD*)(v7 + 16) + 560LL);
    LANES128(v8).n128_u32[3] = 0;
    v9 =
        vsubq_f32(*v6, vaddq_f32(v8, COERCE_AS(float32x4_t, GameData_1a83780)));
    v10 = vmulq_f32(v9, v9);
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_f32[0] < 0x1.9eb8500000000p-3f &&
        vabds_f32(LANES128(v6[1]).n128_f32[0],
                  *(float*)(v7 + 528) + 0x1.0000000000000p-1f) <
            0x1.47ae160000000p-7f &&
        fabsf(LANES128(v6[1]).n128_f32[1] + -0x1.2666660000000p+1f) <
            0x1.47ae160000000p-7f) {
    LABEL_14:
      if (a1[2] != 0) {
        return result;
      }
      goto LABEL_15;
    }
    result = (_QWORD*)game_zview_ffed80((__int64)a1);
    v11 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v11 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v11);
      }
      goto LABEL_14;
    }
  }
LABEL_15:
  v12 = a1[1];
  v18 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v12 + 16) + 560LL),
                  COERCE_AS(float32x4_t, GameData_1a834e0));
  v13 = *(float*)(v12 + 528) + 0x1.0000000000000p-1f;
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v15 = a1[3];
  v14[1] = 0;
  v14[2] = 0;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0;
  v14[8] = 0;
  v14[9] = 0;
  a1[3] = v14;
  *v14 = GameData_20001e8;
  v14[4] = 0;
  result = v14 + 4;
  a1[2] = result;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v15);
  }
  v16 = (float*)a1[2];
  v16[4] = v13;
  v16[5] = 0x1.2666660000000p+1f;
  *(_QWORD*)v16 = LANES128(v18).n128_u64[0];
  v17 = *(_OWORD*)v16;
  *((_QWORD*)&v17 + 1) = LANES128(v18).n128_u32[2];
  *(_OWORD*)v16 = v17;
  return result;
}

__int64 game_zview_ffec00(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  struct {
    float32x4_t v16;
    _QWORD v17[2];
  } v16_;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    if (*(_BYTE*)(GameData_21d96b8 + 52) != 1 ||
        (*(_BYTE*)(*(_QWORD*)(result + 8) + 390LL) & 0x10) != 0) {
      return game_zview_ffed80(result);
    }
    else {
      if (*(_QWORD*)(v1 + 40) == 0) {
        goto LABEL_9;
      }
      v2 = result;
      v3 = std___1___shared_weak_count_lock(*(_QWORD*)(v1 + 40));
      result = v2;
      if (v3 == 0) {
        goto LABEL_9;
      }
      v4 = *(_QWORD*)(v1 + 32);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
        result = v2;
      }
      if (v4 == 0) {
      LABEL_9:
        v5 = *(_QWORD*)(result + 8);
        v6 = *(_QWORD**)(result + 16);
        LANES128(v16_.v16).n128_u64[1] = 0;
        v16_.v17[0] = 0;
        v7 = *(_QWORD*)(v5 + 16);
        v8 = *(_OWORD*)(v7 + 560);
        LANES128(v16_.v16).n128_u64[0] = *(_QWORD*)(v7 + 560);
        LANES128(v9).n128_u64[0] = LANES128(v16_.v16).n128_u64[0];
        LANES128(v9).n128_u64[1] = DWORD2(v8);
        LODWORD(v8) = *(_DWORD*)(v5 + 528);
        HIDWORD(v16_.v17[0]) = 1075000115;
        v10 = vaddq_f32(v9, COERCE_AS(float32x4_t, GameData_1a83780));
        v16_.v16 = v10;
        *(float*)v16_.v17 = *(float*)&v8 + 0x1.0000000000000p-1f;
        *v6 = LANES128(v10).n128_u64[0];
        v11 = *(_OWORD*)v6;
        *((_QWORD*)&v11 + 1) = LANES128(v10).n128_u32[2];
        *(_OWORD*)v6 = v11;
        v12 = v16_.v17[0];
        v6[2] = v16_.v17[0];
        if (*(_QWORD*)(GameData_220f8b0 + 8) != 0) {
          v13 = result;
          RouteNavMesh_fe7000(
              (void*)((__int64*)&v15), *(_QWORD**)(GameData_220f8b0 + 8),
              (__int128*)&v16_.v16, *(float*)&v12, *((float*)&v12 + 1));
          v14 = *(_QWORD*)(v13 + 16);
          result = *(_QWORD*)(v14 + 40);
          *(_OWORD*)(v14 + 32) = v15;
          if (result != 0) {
            return std___1___shared_weak_count___release_weak(result);
          }
        }
      }
    }
  }
  return result;
}

__int64 game_zview_ffed80(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  struct {
    unsigned int* v7;
    __int64 v8;
  } v7_;

  v1 = *(_QWORD*)(a1 + 16);
  result = *(_QWORD*)(v1 + 40);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v4 = result;
      if (*(_QWORD*)(v1 + 32) != 0) {
        v5 = *(_QWORD**)(GameData_220f8b0 + 8);
        if (v5 != nullptr) {
          v7_.v7 = *(unsigned int**)(v1 + 32);
          v7_.v8 = v4;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                    memory_order_relaxed);
          RouteNavMesh_fe6c60(v5, &v7_.v7);
          if (v7_.v8 != 0) {
            std___1___shared_weak_count___release_weak(v7_.v8);
          }
        }
        v6 = *(_QWORD*)(a1 + 16);
        result = *(_QWORD*)(v6 + 40);
        *(_QWORD*)(v6 + 32) = 0;
        *(_QWORD*)(v6 + 40) = 0;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
