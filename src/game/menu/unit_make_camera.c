#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_UnitMakeCamera_vtable[])();
extern __int64 GameData_225d4f0;
extern __int64 GameData_2264528;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131a88[7];
void GameRoutine_1798e70(__int64, __int64, __int64, __int64*, char);
void GameRoutine_17992d0(__int64, __int64, __int64, __int64*, char);
void GameRoutine_1799d90(__int64, __int64, __int64, __int64*, char);
void UnitMakeCamera_179bc80(_QWORD* a1);
void UnitMakeCamera_179bd40(__int64 a1);
void UnitMakeCamera_179be60(__int64 a1);
__int64 UnitMakeCamera_Destructor(__int64 a1);
__int64 UnitMakeCamera_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1797850(__int64, __int64*, char);
__int64 GameRoutine_1797af0(__int64, __int64*, char);
__int64 GameRoutine_b3aee0(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82a90;
extern __int128 GameData_1a835f0;
extern __int64 GameData_225d4e8;
__int64 UnitMakeCamera_179b570(__int64 a1, int8x16_t a2, int8x16_t a3);
void UnitMakeCamera_179ba60_alt1(__int64 a1) __asm__("UnitMakeCamera_179ba60");
void UnitMakeCamera_179bb70(__int64 a1);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 UnitMakeCamera_179ba60(__int64 result);

__int64 UnitMakeCamera_179b570(__int64 a1, int8x16_t a2, int8x16_t a3)
{
  int v3;
  int8x16_t v4;
  int8x16_t v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  int8x16_t v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  bool v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  float v45;
  float v46;
  float v47;
  __int128 v48;
  __int128 v49;
  float v50;
  float v51;
  float v52;
  bool v53;
  float v54;
  float v55;

  v3 = *(unsigned __int8*)(GameData_225d4e8 + 276);
  if (*(_BYTE*)(a1 + 208) != 1) {
    if (GameData_2264528 != 0) {
      LANES128(a3).n128_u32[0] = *(unsigned __int8*)(GameData_225d4e8 + 276);
      LANES128(a2).n128_u32[0] = 1;
      v5 = vdupq_lane_s8(
          COERCE_AS(int8x8_t, LANES128_OF(vceqq_s8(a3, a2)).n128_u64[0]), 0);
      v6 = 0x1.7ae1460000000p+0f;
      v4 = vbslq_s8(v5, COERCE_AS(int8x16_t, GameData_1a82a90),
                    COERCE_AS(int8x16_t, GameData_1a835f0));
      if (v3 == 1) {
        v6 = 0x1.8ccccc0000000p+0f;
      }
      if (*(_BYTE*)(GameData_2264528 + 169) == 2) {
        goto LABEL_7;
      }
    }
    else {
      LANES128(a3).n128_u32[0] = *(unsigned __int8*)(GameData_225d4e8 + 276);
      LANES128(a2).n128_u32[0] = 1;
      v11 = vdupq_lane_s8(
          COERCE_AS(int8x8_t, LANES128_OF(vceqq_s8(a3, a2)).n128_u64[0]), 0);
      v6 = 0x1.7ae1460000000p+0f;
      v4 = vbslq_s8(v11, COERCE_AS(int8x16_t, GameData_1a82a90),
                    COERCE_AS(int8x16_t, GameData_1a835f0));
      if (v3 == 1) {
        v6 = 0x1.8ccccc0000000p+0f;
      }
    }
    v7 = 24.0f;
    v10 = 3.0f;
    v9 = v6;
    v8 = 0x1.0a3d700000000p+0f;
    goto LABEL_14;
  }
  LANES128(a2).n128_u32[0] = 1;
  LANES128(a3).n128_u32[0] = *(unsigned __int8*)(GameData_225d4e8 + 276);
  v4 = vbslq_s8(
      vdupq_lane_s8(
          COERCE_AS(int8x8_t, LANES128_OF(vceqq_s8(a3, a2)).n128_u64[0]), 0),
      COERCE_AS(int8x16_t, GameData_1a82a90),
      COERCE_AS(int8x16_t, GameData_1a835f0));
LABEL_7:
  v7 = 14.0f;
  v8 = 0x1.4ccccc0000000p+0f;
  if (v3 == 1) {
    v9 = 0x1.7ffffe0000000p-1f;
  }
  else {
    v9 = 0x1.5c28f20000000p-1f;
  }
  v10 = 0x1.5333340000000p+2f;
  v6 = v9 + 0x1.0000000000000p-1f;
LABEL_14:
  v12 = *(float*)(a1 + 212);
  if (v3 == 1) {
    v13 = -0x1.a666660000000p+0f;
  }
  else {
    v13 = -0x1.b333340000000p+0f;
  }
  v14 = (float)(v12 * 0x1.1df46a0000000p-6f) +
        (float)(roundf((float)(v12 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v15 = -0x1.921fb60000000p+1f - v14;
  if (v14 >= -0x1.921fb60000000p+0f) {
    v15 = v14;
  }
  if (v14 > 0x1.921fb60000000p+0f) {
    v16 = 0x1.921fb60000000p+1f - v14;
  }
  else {
    v16 = v15;
  }
  v17 = *((float*)GameData_212c190 + 1);
  v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v18 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v21 = -*(float*)GameData_212c190;
  v22 = -v19;
  v23 = -(float)(v19 - (float)((float)(v17 - (float)(*(float*)GameData_212c190 *
                                                     (float)(v16 * v16))) *
                               (float)(v16 * v16)));
  v24 = -v20;
  v25 =
      LANES128(v4).n128_f32[0] +
      (float)((float)(v16 *
                      (float)((float)((float)-(
                                          float)(v20 -
                                                 (float)((float)(v18 +
                                                                 (float)(v23 *
                                                                         (float)(v16 *
                                                                                 v16))) *
                                                         (float)(v16 * v16))) *
                                      (float)(v16 * v16)) +
                              1.0f)) *
              v13);
  v26 = (float)((float)(v12 + -0x1.6800000000000p+6f) * 0x1.1df46a0000000p-6f) +
        (float)(roundf((float)((float)(v12 + -0x1.6800000000000p+6f) *
                               0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v27 = -0x1.921fb60000000p+1f - v26;
  if (v26 >= -0x1.921fb60000000p+0f) {
    v27 = v26;
  }
  if (v26 > 0x1.921fb60000000p+0f) {
    v28 = 0x1.921fb60000000p+1f - v26;
  }
  else {
    v28 = v27;
  }
  v29 =
      v25 +
      (float)((float)(v28 *
                      (float)((float)((float)((float)((float)(v18 +
                                                              (float)((float)(v22 +
                                                                              (float)((float)(v17 +
                                                                                              (float)(v21 *
                                                                                                      (float)(v28 *
                                                                                                              v28))) *
                                                                                      (float)(v28 *
                                                                                              v28))) *
                                                                      (float)(v28 *
                                                                              v28))) *
                                                      (float)(v28 * v28)) -
                                              v20) *
                                      (float)(v28 * v28)) +
                              1.0f)) *
              v8);
  v30 = -0x1.921fb60000000p+1f - v14;
  if (v14 < -0x1.921fb60000000p+0f) {
    v31 = -1.0f;
  }
  else {
    v31 = 1.0f;
  }
  if (v14 >= -0x1.921fb60000000p+0f) {
    v30 = v14;
  }
  v32 = v14 <= 0x1.921fb60000000p+0f;
  if (v14 > 0x1.921fb60000000p+0f) {
    v33 = 0x1.921fb60000000p+1f - v14;
  }
  else {
    v33 = v30;
  }
  v34 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  if (v32) {
    v35 = v31;
  }
  else {
    v35 = -1.0f;
  }
  v36 = v33 * v33;
  v37 = *((float*)GameData_212c188 + 1);
  v38 = -*(float*)GameData_212c188;
  v40 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v39 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v41 =
      LANES128(v4).n128_f32[2] +
      (float)((float)(v35 *
                      (float)((float)((float)-(
                                          float)(v34 -
                                                 (float)((float)(v39 +
                                                                 (float)((float)-(
                                                                             float)(v40 -
                                                                                    (float)((float)(v37 -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c188 *
                                                                                                            v36)) *
                                                                                            v36)) *
                                                                         v36)) *
                                                         v36)) *
                                      v36) +
                              1.0f)) *
              v13);
  if (v26 < -0x1.921fb60000000p+0f) {
    v42 = -1.0f;
  }
  else {
    v42 = 1.0f;
  }
  v43 = -0x1.921fb60000000p+1f - v26;
  if (v26 >= -0x1.921fb60000000p+0f) {
    v43 = v26;
  }
  v44 = v26 <= 0x1.921fb60000000p+0f;
  if (v26 > 0x1.921fb60000000p+0f) {
    v45 = 0x1.921fb60000000p+1f - v26;
  }
  else {
    v45 = v43;
  }
  if (v44) {
    v46 = v42;
  }
  else {
    v46 = -1.0f;
  }
  v47 =
      v41 +
      (float)((float)(v46 *
                      (float)((float)((float)((float)((float)(v39 +
                                                              (float)((float)((float)((float)(v37 +
                                                                                              (float)(v38 *
                                                                                                      (float)(v45 *
                                                                                                              v45))) *
                                                                                      (float)(v45 *
                                                                                              v45)) -
                                                                              v40) *
                                                                      (float)(v45 *
                                                                              v45))) *
                                                      (float)(v45 * v45)) -
                                              v34) *
                                      (float)(v45 * v45)) +
                              1.0f)) *
              v8);
  HIDWORD(v48) = 0;
  *(_QWORD*)&v49 = __PAIR64__(LODWORD(v9), LODWORD(v29));
  *((_QWORD*)&v49 + 1) = LODWORD(v47);
  *(_OWORD*)(*(_QWORD*)(a1 + 152) + 32LL) = v49;
  v50 = (float)((float)(v7 + *(float*)(a1 + 212)) * 0x1.1df46a0000000p-6f) +
        (float)(roundf((float)((float)(v7 + *(float*)(a1 + 212)) *
                               0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v50 >= -0x1.921fb60000000p+0f) {
    v51 = 1.0f;
  }
  else {
    v51 = -1.0f;
  }
  v52 = -0x1.921fb60000000p+1f - v50;
  if (v50 >= -0x1.921fb60000000p+0f) {
    v52 = v50;
  }
  v53 = v50 <= 0x1.921fb60000000p+0f;
  if (v50 <= 0x1.921fb60000000p+0f) {
    v54 = v52;
  }
  else {
    v54 = 0x1.921fb60000000p+1f - v50;
  }
  if (v53) {
    v55 = v51;
  }
  else {
    v55 = -1.0f;
  }
  *(float*)&v48 =
      v29 +
      (float)((float)(v54 *
                      (float)((float)((float)(v24 +
                                              (float)((float)(v18 +
                                                              (float)((float)(v22 +
                                                                              (float)((float)(v17 +
                                                                                              (float)(v21 *
                                                                                                      (float)(v54 *
                                                                                                              v54))) *
                                                                                      (float)(v54 *
                                                                                              v54))) *
                                                                      (float)(v54 *
                                                                              v54))) *
                                                      (float)(v54 * v54))) *
                                      (float)(v54 * v54)) +
                              1.0f)) *
              v10);
  *((float*)&v48 + 1) = v6;
  *((float*)&v48 + 2) =
      v47 +
      (float)((float)(v55 *
                      (float)((float)((float)((float)((float)(v39 +
                                                              (float)((float)((float)((float)(v37 +
                                                                                              (float)(v38 *
                                                                                                      (float)(v54 *
                                                                                                              v54))) *
                                                                                      (float)(v54 *
                                                                                              v54)) -
                                                                              v40) *
                                                                      (float)(v54 *
                                                                              v54))) *
                                                      (float)(v54 * v54)) -
                                              v34) *
                                      (float)(v54 * v54)) +
                              1.0f)) *
              v10);
  *(_OWORD*)(*(_QWORD*)(a1 + 152) + 16LL) = v48;
  return GameRoutine_b3aee0(*(_QWORD*)(a1 + 152));
}

__int64 UnitMakeCamera_179ba60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7[2];
  _QWORD v8[27];

  if (*(_BYTE*)(result + 208) == 1) {
    v8[25] = v1;
    v8[26] = v2;
    v3 = result;
    snd_Fade_Fade_10c830_alt1((__int64)v8, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"SE_SYS_ZoomIn_CharaMake",
                        (__int64)"SE_SYS_ZoomIn_CharaMake", (__int64)v8, 0,
                        0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v8);
    v4 = *(_QWORD*)(v3 + 32);
    v5 = *(_QWORD*)(v3 + 152);
    v6 = *(_QWORD*)(v3 + 160);
    *(_BYTE*)(v3 + 208) = 0;
    v7[0] = v5;
    v7[1] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      result =
          GameRoutine_1797af0(v4, v7, *(_BYTE*)(GameData_225d4e8 + 276) == 1);
      *(_QWORD*)(v3 + 176) = result;
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak_alt2(v6);
      }
    }
    else {
      result = GameRoutine_1797af0(v4, v7,
                                   *(_BYTE*)(*GameData_2131a88[0] + 276) == 1);
      *(_QWORD*)(v3 + 176) = result;
    }
  }
  return result;
}

void UnitMakeCamera_179bb70(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4[2];
  __int64 v5;
  _BYTE v6[200];

  if ((*(_BYTE*)(a1 + 208) & 1) == 0) {
    snd_Fade_Fade_10c830(v6, 0.0f);
    snd_play_ff2d0((void*)(&v5), "SE_SYS_ZoomOut_CharaMake",
                   "SE_SYS_ZoomOut_CharaMake", v6, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v6);
    v2 = *(_QWORD*)(a1 + 32);
    *(_BYTE*)(a1 + 208) = 1;
    v3 = *(_QWORD*)(a1 + 160);
    v4[0] = *(_QWORD*)(a1 + 152);
    v4[1] = v3;
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      *(_QWORD*)(a1 + 176) =
          GameRoutine_1797850(v2, v4, *(_BYTE*)(GameData_225d4e8 + 276) == 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      *(_QWORD*)(a1 + 176) = GameRoutine_1797850(
          v2, v4, *(_BYTE*)(*GameData_2131a88[0] + 276) == 1);
    }
  }
}

void UnitMakeCamera_179bc80(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7[2];

  v2 = a1[4];
  v3 = a1[20];
  v4 = *GameData_2131a88[0];
  v7[0] = a1[19];
  v7[1] = v3;
  v5 = *(_QWORD*)(v4 + 720);
  v6 = *(_QWORD*)(v4 + 888);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_17992d0(v2, v5, v6, v7, *(_BYTE*)(v4 + 276) == 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_17992d0(v2, v5, v6, v7, *(_BYTE*)(v4 + 276) == 1);
  }
}

void UnitMakeCamera_179bd40(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8[2];

  *(_BYTE*)(a1 + 216) = 0;
  v1 = GameData_2264528;
  if (GameData_2264528 != 0) {
    if (*(_BYTE*)(GameData_2264528 + 169) != 2) {
      goto LABEL_11;
    }
    v2 = *(_QWORD*)(GameData_2264528 + 8);
    if (v2 == 0) {
      goto LABEL_11;
    }
    while (*(_BYTE*)v2 != 2) {
      if (*(_BYTE*)v2 == 0) {
        goto LABEL_11;
      }
    LABEL_6:
      v2 += 64;
    }
    if (*(_DWORD*)(v2 + 32) != 0) {
      goto LABEL_6;
    }
    *(_QWORD*)(GameData_2264528 + 16) = v2;
    *(_WORD*)(v1 + 136) &= ~0x80u;
  }

LABEL_11:
  *(_BYTE*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 220) = 0;
  v3 = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 160);
  v5 = *GameData_2131a88[0];
  v8[0] = *(_QWORD*)(a1 + 152);
  v8[1] = v4;
  v6 = *(_QWORD*)(v5 + 720);
  v7 = *(_QWORD*)(v5 + 888);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1799d90(v3, v6, v7, v8, *(_BYTE*)(v5 + 276) == 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_1799d90(v3, v6, v7, v8, *(_BYTE*)(v5 + 276) == 1);
  }
}

void UnitMakeCamera_179be60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6[2];

  v2 = *(_QWORD*)(a1 + 160);
  v3 = *GameData_2131a88[0];
  v6[0] = *(_QWORD*)(a1 + 152);
  v6[1] = v2;
  v4 = *(_QWORD*)(v3 + 720);
  v5 = *(_QWORD*)(v3 + 888);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1798e70(a1, v4, v5, v6, *(_BYTE*)(v3 + 276) == 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_1798e70(a1, v4, v5, v6, *(_BYTE*)(v3 + 276) == 1);
  }
  *(_BYTE*)(a1 + 168) = 1;
}

__int64 UnitMakeCamera_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_menu_UnitMakeCamera_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  GameData_225d4f0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 UnitMakeCamera_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_menu_UnitMakeCamera_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  GameData_225d4f0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
