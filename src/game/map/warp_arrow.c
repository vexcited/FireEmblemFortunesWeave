#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, double);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD, _QWORD);
__int64 WarpArrow_Setup_alt1(__int64 a1, __int64* a2,
                             int a3) __asm__("WarpArrow_Setup");
_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* GameRoutine_60a020_alt1(char*, const char*) __asm__("GameRoutine_60a020");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
__int64 WarpArrow_Setup(__int64 a1, __int64 a2, int a3);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
extern _UNKNOWN* GameData_212c2f0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
__int64 WarpArrow_Update(float32x2_t* a1, __int64* a2);

__int64 WarpArrow_Setup(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  char v13[256];

  result = *(_QWORD*)(a2 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v7 = *(__int64**)a2;
      v8 = result;
      if (v7 == nullptr) {
        goto LABEL_15;
      }
      sprintf_alt1((__int64)v13, "L_Warp%d", a3);
      GameRoutine_60a020_alt1((char*)(a1 + 8), v13);
      if (a3 >= 1) {
        LayoutAccessor_1560520(v7, (__int64)"L_Warp0", (__int64)"N_Warp",
                               (__int64)v13);
      }
      LayoutAccessor_1560070((void*)(&v11_.v11), v7, v13);
      result = v11_.v12;
      if (v11_.v12 == 0) {
        goto LABEL_15;
      }
      v9 = std___1___shared_weak_count_lock_alt1(v11_.v12);
      v10 = v11_.v11;
      result = v11_.v12;
      if (v11_.v12 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v11_.v12);
      }
      if (v9 != 0 && v10 != 0) {
        LayoutAccessor_155e830(v10, 0);
        result = GameHr_1562680(v10, "Wait", 0x1.0000000000000p+0f);
      }
      else if (v9 == 0) {
      LABEL_15:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          return std___1___shared_weak_count___release_weak_alt1(v8);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak_alt1(v9);
      }
      goto LABEL_15;
    }
  }
  return result;
}

__int64 WarpArrow_Update(float32x2_t* a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64* v8;
  float32x2_t v9;
  float32x2_t v10;
  float v11;
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
  float v32;
  float v33;
  float v34;
  float v35;
  bool v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  struct {
    unsigned __int64 v46;
    __int64 v47;
  } v46_;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 == 0) {
        goto LABEL_25;
      }
      v6 = (LANES64(a1[1]).n64_u8[0] & 1) != 0
               ? (const char*)LANES64(a1[3]).n64_u64[0]
               : (char*)LANES64(a1[1]).n64_u64 + 1;
      LayoutAccessor_1560070((void*)(&v46_.v46), (__int64*)result, v6);
      result = v46_.v47;
      if (v46_.v47 == 0) {
        goto LABEL_25;
      }
      v7 = std___1___shared_weak_count_lock_alt1(v46_.v47);
      v8 = (__int64*)v46_.v46;
      result = v46_.v47;
      if (v46_.v47 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v46_.v47);
      }
      if (v7 != 0 && v8 != nullptr) {
        result = LayoutAccessor_155ea30(v8);
        if ((result & 1) != 0 && LANES64(a1[6]).n64_u8[4] == 1) {
          LANES64(v9).n64_u64[0] = LANES64(a1[7]).n64_u64[0];
          LANES64(v10).n64_u64[0] = LANES64_OF(vsub_f32(a1[8], v9)).n64_u64[0];
          v11 = LANES64(a1[5]).n64_f32[1];
          v12 = LANES64(a1[5]).n64_f32[0] +
                (float)(-0x1.4000000000000p+4f /
                        sqrtf(vmuls_lane_f32(LANES64(v10).n64_f32[1], v10, 1) +
                              (float)(LANES64(v10).n64_f32[0] *
                                      LANES64(v10).n64_f32[0])));
          LANES64(a1[6]).n64_f32[0] = v12;
          if (v12 >=
              (float)(v11 +
                      (float)(*(float*)(*(_QWORD*)
                                            game_script_hub_g_frame_counter_ptr
                                                [0] +
                                        160LL) *
                              0x1.47ae140000000p-7f))) {
            v12 = v11 +
                  (float)(*(float*)(*(_QWORD*)
                                        game_script_hub_g_frame_counter_ptr[0] +
                                    160LL) *
                          0x1.47ae140000000p-7f);
          }
          v13 = vmuls_lane_f32(v12, v10, 1);
          LANES64(a1[5]).n64_f32[1] = v12;
          v14 = LANES64(v9).n64_f32[0] +
                (float)(PSEUDO_UNFUSED(v12 * LANES64(v10).n64_f32[0]));
          v15 = LANES64(v9).n64_f32[1] + v13;
          if (LANES64(v10).n64_f32[0] == 0x0.0p+0f) {
            v16 = 0x0.0p+0f;
            if (LANES64(v10).n64_f32[1] == 0x0.0p+0f) {
              goto LABEL_43;
            }
          }
          if (LANES64(v10).n64_f32[0] >= 0x0.0p+0f) {
            if (LANES64(v10).n64_f32[1] >= 0x0.0p+0f) {
              v17 = *(float*)GameData_212c2f0;
              v18 = -*((float*)GameData_212c2f0 + 1);
              v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                              (_QWORD)GameData_212c2f0);
              v20 = -*(float*)((char*)((_UNKNOWN**)0x8LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v21 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0);
              v22 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 4);
              v23 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0 + 8);
              v24 = -*(float*)((char*)((__int128*)0x10LL) +
                               (_QWORD)GameData_212c2f0 + 12);
              if (LANES64(v10).n64_f32[0] >= LANES64(v10).n64_f32[1]) {
                v45 = LANES64(v10).n64_f32[1] / LANES64(v10).n64_f32[0];
                v16 =
                    v45 * (float)((
                                      float)((
                                                 float)((
                                                            float)((float)(v23 + (float)((
                                                                                             float)((
                                                                                                        float)((
                                                                                                                   float)(v21 + (float)((
                                                                                                                                            float)((
                                                                                                                                                       float)((float)(v19 + (float)((float)((float)(v17 * (float)(v45 * v45)) - *((float*)GameData_212c2f0 + 1)) * (float)(v45 * v45))) * (float)(v45 *
                                                                                                                                                                                                                                                                                                  v45)) -
                                                                                                                                                   *(
                                                                                                                                                       float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                                        (float)(v45 *
                                                                                                                                                v45))) *
                                                                                                               (float)(v45 *
                                                                                                                       v45)) -
                                                                                                    *(float*)((char*)((
                                                                                                                  __int128*)0x10LL) +
                                                                                                              (_QWORD)
                                                                                                                  GameData_212c2f0 +
                                                                                                              4)) *
                                                                                         (float)(v45 *
                                                                                                 v45))) *
                                                                   (float)(v45 *
                                                                           v45)) -
                                                        *(float*)((char*)((
                                                                      __int128*)0x10LL) +
                                                                  (_QWORD)
                                                                      GameData_212c2f0 +
                                                                  12)) *
                                             (float)(v45 * v45)) +
                                  0x1.0000000000000p+0f);
                goto LABEL_43;
              }
              v25 = LANES64(v10).n64_f32[0] / LANES64(v10).n64_f32[1];
              v26 = 0x1.921fb60000000p+0f;
              goto LABEL_37;
            }
            v27 = -LANES64(v10).n64_f32[1];
            v28 = *(float*)GameData_212c2f0;
            v29 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                            (_QWORD)GameData_212c2f0);
            v30 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0);
            v31 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 8);
            if (LANES64(v10).n64_f32[0] >= (float)-LANES64(v10).n64_f32[1]) {
              v42 = v27 / LANES64(v10).n64_f32[0];
              v16 =
                  -(float)(v42 *
                           (float)((
                                       float)((float)((float)((float)(v31 +
                                                                      (float)((float)((float)((float)(v30 + (float)((float)((float)((float)(v29 + (float)((float)((float)(v28 * (float)(v42 * v42)) - *((float*)GameData_212c2f0 + 1)) * (float)(v42 * v42))) * (float)(v42 * v42)) -
                                                                                                                            *(
                                                                                                                                float*)((char*)((
                                                                                                                                            _UNKNOWN**)0x8LL) +
                                                                                                                                        (_QWORD)GameData_212c2f0 +
                                                                                                                                        4)) *
                                                                                                                    (float)(v42 *
                                                                                                                            v42))) *
                                                                                              (float)(v42 *
                                                                                                      v42)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v42 *
                                                                                      v42))) *
                                                              (float)(v42 *
                                                                      v42)) -
                                                      *(float*)((char*)((
                                                                    __int128*)0x10LL) +
                                                                (_QWORD)
                                                                    GameData_212c2f0 +
                                                                12)) *
                                              (float)(v42 * v42)) +
                                   0x1.0000000000000p+0f));
            LABEL_43:
              v46_.v46 = __PAIR64__(LODWORD(v15), LODWORD(v14));
              LODWORD(v46_.v47) = 0;
              ui_LayoutAccessor_SetTranslate(v8, (__int64)&v46_.v46);
              LayoutAccessor_15636c0((__int64)v8, 0, 0,
                                     LANES64(a1[5]).n64_f32[1] *
                                         0x1.4000000000000p+6f);
              LayoutAccessor_155e830((__int64)v8, 1);
              result = ui_LayoutAccessor_FindPane(v8, (__int64)"MapChip_Link");
              if (result != 0) {
                result = __dynamic_cast(result, GameData_212d670[0],
                                        GameData_212d678[0], 0);
                if (result != 0) {
                  result = (*(__int64 (**)(float32x2_t*, __int64, float))(
                      LANES64(*(a1)).n64_u64[0] + 40))(
                      a1, result,
                      (float)(PSEUDO_UNFUSED(v16 * 0x1.ca5dc00000000p+5f)) +
                          -0x1.6800000000000p+6f);
                }
              }
              goto LABEL_23;
            }
            v32 = LANES64(v10).n64_f32[0] / v27;
            v33 = -0x1.921fb60000000p+0f;
            v34 = (float)((float)((float)((float)(v31 +
                                                  (float)((float)((float)((float)(v30 +
                                                                                  (float)((
                                                                                              float)((
                                                                                                         float)((float)(v29 + (float)((float)((float)(v28 * (float)(v32 * v32)) - *((float*)GameData_212c2f0 + 1)) * (float)(v32 * v32))) * (float)(v32 *
                                                                                                                                                                                                                                                    v32)) -
                                                                                                     *(float*)((char*)((
                                                                                                                   _UNKNOWN**)0x8LL) +
                                                                                                               (_QWORD)
                                                                                                                   GameData_212c2f0 +
                                                                                                               4)) *
                                                                                          (float)(v32 *
                                                                                                  v32))) *
                                                                          (float)(v32 *
                                                                                  v32)) -
                                                                  *(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            4)) *
                                                          (float)(v32 * v32))) *
                                          (float)(v32 * v32)) -
                                  *(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 12)) *
                          (float)(v32 * v32)) +
                  0x1.0000000000000p+0f;
          }
          else {
            if (LANES64(v10).n64_f32[1] >= 0x0.0p+0f) {
              v35 = -LANES64(v10).n64_f32[0];
              v36 = LANES64(v10).n64_f32[1] > (float)-LANES64(v10).n64_f32[0];
              v37 = *(float*)GameData_212c2f0;
              v38 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                              (_QWORD)GameData_212c2f0);
              v39 = *(float*)((char*)((__int128*)0x10LL) +
                              (_QWORD)GameData_212c2f0);
              LANES64(v10).n64_u32[0] =
                  *(_DWORD*)((char*)((__int128*)0x10LL) +
                             (_QWORD)GameData_212c2f0 + 8);
              if (!v36) {
                v43 = LANES64(v10).n64_f32[1] / v35;
                v26 = 0x1.921fb60000000p+1f;
                v44 =
                    v43 * (float)((
                                      float)((
                                                 float)((float)((float)(LANES64(
                                                                            v10)
                                                                            .n64_f32
                                                                                [0] +
                                                                        (float)((float)((float)((float)(v39 + (float)((float)((float)((float)(v38 + (float)((float)((float)(v37 * (float)(v43 * v43)) - *((float*)GameData_212c2f0 + 1)) * (float)(v43 * v43))) * (float)(v43 * v43)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v43 *
                                                                                                                                                                                                                                                                                                                                                                        v43))) *
                                                                                                (float)(v43 *
                                                                                                        v43)) -
                                                                                        *(float*)((char*)((
                                                                                                      __int128*)0x10LL) +
                                                                                                  (_QWORD)
                                                                                                      GameData_212c2f0 +
                                                                                                  4)) *
                                                                                (float)(v43 *
                                                                                        v43))) *
                                                                (float)(v43 *
                                                                        v43)) -
                                                        *(float*)((char*)((
                                                                      __int128*)0x10LL) +
                                                                  (_QWORD)
                                                                      GameData_212c2f0 +
                                                                  12)) *
                                             (float)(v43 * v43)) +
                                  0x1.0000000000000p+0f);
              LABEL_41:
                v16 = v26 - v44;
                goto LABEL_43;
              }
              v40 = v35 / LANES64(v10).n64_f32[1];
              v33 = 0x1.921fb60000000p+0f;
              v41 = v40 * (float)((
                                      float)((
                                                 float)((float)((float)(LANES64(
                                                                            v10)
                                                                            .n64_f32
                                                                                [0] +
                                                                        (float)((float)((float)((float)(v39 + (float)((float)((float)((float)(v38 + (float)((float)((float)(v37 * (float)(v40 * v40)) - *((float*)GameData_212c2f0 + 1)) * (float)(v40 * v40))) * (float)(v40 * v40)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v40 *
                                                                                                                                                                                                                                                                                                                                                                        v40))) *
                                                                                                (float)(v40 *
                                                                                                        v40)) -
                                                                                        *(float*)((char*)((
                                                                                                      __int128*)0x10LL) +
                                                                                                  (_QWORD)
                                                                                                      GameData_212c2f0 +
                                                                                                  4)) *
                                                                                (float)(v40 *
                                                                                        v40))) *
                                                                (float)(v40 *
                                                                        v40)) -
                                                        *(float*)((char*)((
                                                                      __int128*)0x10LL) +
                                                                  (_QWORD)
                                                                      GameData_212c2f0 +
                                                                  12)) *
                                             (float)(v40 * v40)) +
                                  0x1.0000000000000p+0f);
              goto LABEL_40;
            }
            v17 = *(float*)GameData_212c2f0;
            v18 = -*((float*)GameData_212c2f0 + 1);
            v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                            (_QWORD)GameData_212c2f0);
            v20 = -*(float*)((char*)((_UNKNOWN**)0x8LL) +
                             (_QWORD)GameData_212c2f0 + 4);
            v21 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0);
            v22 = -*(float*)((char*)((__int128*)0x10LL) +
                             (_QWORD)GameData_212c2f0 + 4);
            v23 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 8);
            v24 = -*(float*)((char*)((__int128*)0x10LL) +
                             (_QWORD)GameData_212c2f0 + 12);
            if (LANES64(v10).n64_f32[0] > LANES64(v10).n64_f32[1]) {
              v25 = LANES64(v10).n64_f32[0] / LANES64(v10).n64_f32[1];
              v26 = -0x1.921fb60000000p+0f;
            LABEL_37:
              v44 =
                  v25 *
                  (float)((float)((float)(v24 +
                                          (float)((float)(v23 +
                                                          (float)((float)(v22 +
                                                                          (float)((float)(v21 +
                                                                                          (float)((float)(v20 +
                                                                                                          (float)((float)(v19 +
                                                                                                                          (float)((float)(v18 +
                                                                                                                                          (float)(v17 *
                                                                                                                                                  (float)(v25 *
                                                                                                                                                          v25))) *
                                                                                                                                  (float)(v25 *
                                                                                                                                          v25))) *
                                                                                                                  (float)(v25 *
                                                                                                                          v25))) *
                                                                                                  (float)(v25 *
                                                                                                          v25))) *
                                                                                  (float)(v25 *
                                                                                          v25))) *
                                                                  (float)(v25 *
                                                                          v25))) *
                                                  (float)(v25 * v25))) *
                                  (float)(v25 * v25)) +
                          0x1.0000000000000p+0f);
              goto LABEL_41;
            }
            v32 = LANES64(v10).n64_f32[1] / LANES64(v10).n64_f32[0];
            v33 = -0x1.921fb60000000p+1f;
            v34 = (float)((float)((float)((float)(v23 +
                                                  (float)((float)((float)((float)(v21 +
                                                                                  (float)((
                                                                                              float)((
                                                                                                         float)((float)(v19 + (float)((float)((float)(v17 * (float)(v32 * v32)) - *((float*)GameData_212c2f0 + 1)) * (float)(v32 * v32))) * (float)(v32 *
                                                                                                                                                                                                                                                    v32)) -
                                                                                                     *(float*)((char*)((
                                                                                                                   _UNKNOWN**)0x8LL) +
                                                                                                               (_QWORD)
                                                                                                                   GameData_212c2f0 +
                                                                                                               4)) *
                                                                                          (float)(v32 *
                                                                                                  v32))) *
                                                                          (float)(v32 *
                                                                                  v32)) -
                                                                  *(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            4)) *
                                                          (float)(v32 * v32))) *
                                          (float)(v32 * v32)) -
                                  *(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 12)) *
                          (float)(v32 * v32)) +
                  0x1.0000000000000p+0f;
          }
          v41 = v32 * v34;
        LABEL_40:
          v16 = v41 + v33;
          goto LABEL_43;
        }
      }
      else if (v7 == 0) {
      LABEL_25:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return std___1___shared_weak_count___release_weak_alt1(v5);
        }
        return result;
      }
    LABEL_23:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = std___1___shared_weak_count___release_weak_alt1(v7);
      }
      goto LABEL_25;
    }
  }
  return result;
}

#pragma GCC visibility pop
