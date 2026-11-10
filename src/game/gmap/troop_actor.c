#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TroopActor_Unknown2(__int64 a1);
__int64 GameRoutine_bd7f40(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212d4d8;
extern int* GameData_212d4d0;
__int64 game_gmap_TroopActor_SetIsSilhouette_lambda0_Invoke(__int64 result,
                                                            __int64 a2);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_1a8d511;
extern _UNKNOWN GameData_1a90e7d;
extern _UNKNOWN GameData_1a9ca89;
extern _UNKNOWN GameData_1ae2087;
extern _UNKNOWN GameData_1ae59f2;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64* GameData_212d718;
extern __int64 game_GameModeData_instance_;
float Camera_1315570(_QWORD);
__attribute__((swiftcall)) void TroopActor_Unknown4(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2, float a4);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD);
__attribute__((swiftcall)) void game_gmap_13408e0(PSEUDO_X8, long double,
                                                  long double, long double,
                                                  long double, long double,
                                                  long double, long double);
__int64 CharacterBuilder_1083e90(_QWORD, _QWORD);
__int64 GameRoutine_100d7e0(_QWORD, float);
__int64 GameRoutine_100e280(float);
__int64 Impl_13261c0(_QWORD);
__int64 InfoCursorBottomImpl_100de20(void);
__int64 InfoCursorBottomImpl_100e5d0(void);
__int64 SpotMgr_1332940(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_release_alt1(_QWORD) __asm__("__cxa_guard_release");
__int64 game_8224a0(_QWORD);
__int64 game_HashString_alt1(_QWORD) __asm__("game_HashString");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1abd4d1;
extern _UNKNOWN GameData_1ad0455;
extern _UNKNOWN GameData_1ad0472;
extern _UNKNOWN GameData_1aeb060;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a832a0;
extern __int128 GameData_1a83880;
extern __int128 GameData_1a83960;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fb28d0[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212ca80[119];
extern __int64* GameData_212d708;
extern __int64* GameData_2130e00;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 game_gmap_TroopActor_SetIsSilhouette(float32x4_t* a1, long double a2,
                                             double a3, long double a4,
                                             long double a5, long double a6,
                                             long double a7, long double a8);

__int64 TroopActor_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;

  v1 = *(_QWORD*)(a1 + 392);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 96);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(unsigned __int8*)(v2 + 32);
  if (v3 == 2) {
    v4 = 4;
  }
  else {
    v4 = 0;
  }
  if (v3 == 1) {
    return 2;
  }
  else {
    return v4;
  }
}

__attribute__((swiftcall)) void TroopActor_Unknown4(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v6;
  float v7;
  float v8;
  float v9;
  __int64* v10;
  void* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void* v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float* v23;
  float* v24;
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
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  unsigned __int64 v57;
  float32x4_t v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float v65;
  float32x4_t v66;
  float v67;
  float32x4_t v68;
  float v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  float32x4_t v75;
  __n128 result;
  __int64 v77;
  void* v78;

  v6 = (float)(a4 * 0.5f) +
       (float)(roundf((float)(a4 * 0.5f) * 0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v6 <= 0x1.921fb60000000p+0f) {
    v8 = 0x1.0000000000000p+0f;
    if (v6 >= -0x1.921fb60000000p+0f) {
      goto LABEL_6;
    }
    v7 = -0x1.921fb60000000p+1f;
  }
  else {
    v7 = 0x1.921fb60000000p+1f;
  }
  v8 = -0x1.0000000000000p+0f;
  v6 = v7 - v6;
LABEL_6:
  v9 = 0.0f;
  v10 = GameData_212d718;
  if (*(_BYTE*)(a1 + 400) != 2) {
    v11 = &GameData_1a9ca89;
    v12 = *(_QWORD*)(*(_QWORD*)(a1 + 392) + 96LL);
    if (v12 != 0 && ((*(_BYTE*)(v12 + 32) - 3) & 0xFE) == 0) {
      v11 = &GameData_1a90e7d;
    }
    v78 = v11;
    v77 = game_HashString(v11, a2);
    if (game_GameModeData_instance_ != 0) {
      v14 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v77);
      if (v14 != 0) {
        v9 = (float)*(int*)(v14 + 32) * 0x1.1df46a0000000p-6f;
      }
    }
    v78 = &GameData_1ae59f2;
    v77 = game_HashString(&GameData_1ae59f2, v13);
    if (game_GameModeData_instance_ == 0 ||
        (v16 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v77)) == 0 ||
        *(_DWORD*)(v16 + 32) == 0) {
      v17 = &GameData_1a8d511;
      v18 = *(_QWORD*)(*(_QWORD*)(a1 + 392) + 96LL);
      if (v18 != 0 && ((*(_BYTE*)(v18 + 32) - 3) & 0xFE) == 0) {
        v17 = &GameData_1ae2087;
      }
      v78 = v17;
      v19 = 0.0f;
      v77 = game_HashString(v17, v15);
      if (game_GameModeData_instance_ != 0) {
        v20 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v77);
        if (v20 != 0) {
          v19 = (float)*(int*)(v20 + 32) * 0x1.1df46a0000000p-6f;
        }
      }
      v21 = *(_QWORD*)(*v10 + 16);
      v22 = 656;
      if (*(_BYTE*)(v21 + 964) != 0) {
        v22 = 696;
      }
      v9 = v9 + (float)((float)(v19 - v9) *
                        (float)(0x1.0000000000000p+0f -
                                (*(float (**)(__int64))(*(_QWORD*)(v21 + v22) +
                                                        16LL))(v21 + v22)));
    }
  }
  v23 = (float*)GameData_212c190;
  v24 = (float*)GameData_212c188;
  v25 = Camera_1315570(*(_QWORD*)(*v10 + 16));
  v26 = (float)((float)(v25 * 0x1.1df46a0000000p-6f) * 0.5f) +
        (float)(roundf((float)((float)(v25 * 0x1.1df46a0000000p-6f) * 0.5f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v26 <= 0x1.921fb60000000p+0f) {
    v28 = 0x1.0000000000000p+0f;
    if (v26 >= -0x1.921fb60000000p+0f) {
      goto LABEL_30;
    }
    v27 = -0x1.921fb60000000p+1f;
  }
  else {
    v27 = 0x1.921fb60000000p+1f;
  }
  v28 = -0x1.0000000000000p+0f;
  v26 = v27 - v26;
LABEL_30:
  v29 = *v23;
  v30 = v23[1];
  v31 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23);
  v32 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4);
  v33 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)v23);
  v34 = *v24;
  v35 = v24[1];
  v36 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v24);
  v37 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v24 + 4);
  v38 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)v24);
  v39 = (float)(v9 * 0.5f) +
        (float)(roundf((float)(v9 * 0.5f) * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v39 > 0x1.921fb60000000p+0f) {
    v40 = 0x1.921fb60000000p+1f;
  LABEL_34:
    v39 = v40 - v39;
    v41 = -0x1.0000000000000p+0f;
    goto LABEL_35;
  }
  v41 = 0x1.0000000000000p+0f;
  if (v39 < -0x1.921fb60000000p+0f) {
    v40 = -0x1.921fb60000000p+1f;
    goto LABEL_34;
  }
LABEL_35:
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
          .n64_u64[0];
  LANES128(v42).n128_u64[1] = LANES128(v42).n128_u64[0];
  v43 = vrsqrteq_f32(v42);
  v44 = vmulq_f32(v43, vrsqrtsq_f32(v43, vmulq_f32(v42, v43)));
  v45 =
      vbicq_s8(vmulq_f32(vmulq_f32(v44, vrsqrtsq_f32(v44, vmulq_f32(v42, v44))),
                         COERCE_AS(float32x4_t, GameData_1a83610)),
               vceqzq_f32(v42));
  v46 = vmulq_n_f32(
      v45,
      v26 *
          (float)((float)((float)-(
                              float)(v33 -
                                     (float)((float)(v32 +
                                                     (float)((float)-(
                                                                 float)(v31 -
                                                                        (float)((float)(v30 -
                                                                                        (float)(v29 *
                                                                                                (float)(v26 *
                                                                                                        v26))) *
                                                                                (float)(v26 *
                                                                                        v26))) *
                                                             (float)(v26 *
                                                                     v26))) *
                                             (float)(v26 * v26))) *
                          (float)(v26 * v26)) +
                  0x1.0000000000000p+0f));
  LANES128(v47).n128_u64[0] = LANES128(v46).n128_u64[0];
  v48 = v46;
  LANES128(v48).n128_f32[3] =
      v28 *
      (float)((float)((float)-(
                          float)(v38 -
                                 (float)((float)(v37 +
                                                 (float)((float)-(
                                                             float)(v36 -
                                                                    (float)((float)(v35 -
                                                                                    (float)(v34 *
                                                                                            (float)(v26 *
                                                                                                    v26))) *
                                                                            (float)(v26 *
                                                                                    v26))) *
                                                         (float)(v26 * v26))) *
                                         (float)(v26 * v26))) *
                      (float)(v26 * v26)) +
              0x1.0000000000000p+0f);
  LANES128(v47).n128_u64[1] = LANES128(v48).n128_u64[1];
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v50 = vmulq_f32(v48, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v51).n128_u64[0] = 3212836864LL;
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v52).n128_u64[1] = LANES128(v49).n128_u64[0];
  *(int32x2_t*)&LANES128(v49).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 1);
  LANES128(v54).n128_u64[1] = LANES128(v52).n128_u64[0];
  LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
  *(int8x8_t*)&LANES128(v53).n128_i8[8] =
      vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v56).n128_u64[1] = 3212836864LL;
  *(int8x8_t*)&LANES128(v51).n128_i8[8] =
      vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v57 = LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
  v58 = vmlaq_f32(vmulq_f32(v50, v55), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v51, v54));
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
  v59 = vmlsq_f32(vmlaq_f32(v58, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v49, v56)),
                  v53, v52);
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v49).n128_i8[8] =
      vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v52).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v59).n128_u64[0]), 1);
  LANES128(v53).n128_u64[0] = v57;
  LANES128(v53).n128_u64[1] = LANES128(v54).n128_u64[0];
  LANES128(v54).n128_u64[1] = LANES128(v46).n128_u64[0];
  LANES128(v46).n128_u64[1] = v57;
  v60 = vmulq_f32(v54, v52);
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v52).n128_i8[8] =
      vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v61 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v59, v47),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v46, v52)),
                            COERCE_AS(float32x4_t, GameData_1a83800), v60),
                  v49, v53);
  LANES128(v61).n128_u32[3] = 0;
  v62 = vmulq_n_f32(
      v45,
      v6 *
          (float)((float)((float)-(
                              float)(v33 -
                                     (float)((float)(v32 +
                                                     (float)((float)-(
                                                                 float)(v31 -
                                                                        (float)((float)(v30 -
                                                                                        (float)(v29 *
                                                                                                (float)(v6 *
                                                                                                        v6))) *
                                                                                (float)(v6 *
                                                                                        v6))) *
                                                             (float)(v6 *
                                                                     v6))) *
                                             (float)(v6 * v6))) *
                          (float)(v6 * v6)) +
                  0x1.0000000000000p+0f));
  v63 = v62;
  LANES128(v63).n128_f32[3] =
      v8 *
      (float)((float)((float)-(
                          float)(v38 -
                                 (float)((float)(v37 +
                                                 (float)((float)-(
                                                             float)(v36 -
                                                                    (float)((float)(v35 -
                                                                                    (float)(v34 *
                                                                                            (float)(v6 *
                                                                                                    v6))) *
                                                                            (float)(v6 *
                                                                                    v6))) *
                                                         (float)(v6 * v6))) *
                                         (float)(v6 * v6))) *
                      (float)(v6 * v6)) +
              0x1.0000000000000p+0f);
  v64 = vmulq_f32(v61, v61);
  LANES128(v64).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
          .n64_u64[0];
  v65 = v35 - (float)(v34 * (float)(v39 * v39));
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
          .n64_u64[0];
  LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
  v67 = v37 + (float)((float)-(float)(v36 - (float)(v65 * (float)(v39 * v39))) *
                      (float)(v39 * v39));
  v68 = vrsqrteq_f32(v66);
  v69 = (float)((float)-(float)(v38 - (float)(v67 * (float)(v39 * v39))) *
                (float)(v39 * v39)) +
        0x1.0000000000000p+0f;
  v70 = vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v66, v68)));
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v63).n128_u64[1],
                                                 LANES128(v62).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v71).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, __PAIR128__(LANES128(v63).n128_u64[1],
                                                 LANES128(v62).n128_u64[0])),
                COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v72 = vmulq_n_f32(
      vbicq_s8(vmulq_f32(vmulq_f32(v70, vrsqrtsq_f32(v70, vmulq_f32(v66, v70))),
                         v61),
               vceqzq_f32(v66)),
      v39 *
          (float)((float)((float)-(
                              float)(v33 -
                                     (float)((float)(v32 +
                                                     (float)((float)-(
                                                                 float)(v31 -
                                                                        (float)((float)(v30 -
                                                                                        (float)(v29 *
                                                                                                (float)(v39 *
                                                                                                        v39))) *
                                                                                (float)(v39 *
                                                                                        v39))) *
                                                             (float)(v39 *
                                                                     v39))) *
                                             (float)(v39 * v39))) *
                          (float)(v39 * v39)) +
                  0x1.0000000000000p+0f));
  LANES128(v66).n128_u32[2] = LANES128(v72).n128_u32[2];
  LANES128(v73).n128_u64[0] = LANES128(v72).n128_u64[0];
  LANES128(v66).n128_f32[3] = v41 * v69;
  LANES128(v74).n128_u64[0] = LANES128(v72).n128_u64[0];
  LANES128(v74).n128_u64[1] = LANES128(v66).n128_u64[1];
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
  LANES128(v73).n128_u64[1] = LANES128(v70).n128_u64[0];
  LANES128(v70).n128_u64[1] = LANES128(v74).n128_u64[0];
  LANES128(v74).n128_u64[1] = LANES128(v72).n128_u64[0];
  v75 = vmlaq_f32(vmulq_f32(v63, v66), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v73, v71));
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v63).n128_u64[1],
                                                 LANES128(v62).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v71).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 1);
  LANES128(result).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v63).n128_u64[1],
                                                 LANES128(v62).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(result).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, __PAIR128__(LANES128(v63).n128_u64[1],
                                                 LANES128(v62).n128_u64[0])),
                COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *a3 = vmlsq_f32(vmlaq_f32(v75, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v74, v71)),
                  result, v70);
  {
    result;
    return;
  }
}

__int64 game_gmap_TroopActor_SetIsSilhouette_lambda0_Invoke(__int64 result,
                                                            __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v12 = a2;
    v13 = result;
    v8 = __cxa_guard_acquire(GameData_212d4d8);
    v3 = GameData_212d4d0;
    a2 = v12;
    result = v13;
    if (v8 != 0) {
      *GameData_212d4d0 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(GameData_212d4d8, v9, v10, v11);
      v3 = GameData_212d4d0;
      a2 = v12;
      result = v13;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5 && *(_QWORD*)(v5 + 8) != 0) {
        return GameRoutine_bd7f40(*(_QWORD*)(v5 + 8),
                                  *(unsigned __int8*)(result + 8));
      }
      return result;
    }
  }
  return result;
}

__int64 game_gmap_TroopActor_SetIsSilhouette(float32x4_t* a1, long double a2,
                                             double a3, long double a4,
                                             long double a5, long double a6,
                                             long double a7, long double a8)
{
  float v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  char v13;
  unsigned __int8* v14;
  int v15;
  __int64 v16;
  float v17;
  float v18;
  __int64 v19;
  float32x4_t* v20;
  float32x4_t v21;
  float32x4_t v22;
  float v23;
  float v24;
  float32x4_t v25;
  float v26;
  float32x4_t v27;
  float32x4_t v28;
  __int64* v29;
  __int64 v30;
  float32x4_t** v31;
  float32x4_t** v32;
  long double v33;
  float32x4_t* v34;
  bool v35;
  bool v36;
  unsigned __int64 v38;
  __int64* v39;
  int v40;
  float v41;
  int v42;
  float* v43;
  float v44;
  int v45;
  float v46;
  unsigned __int32 v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  unsigned __int64 v64;
  __int64 v65;
  __int128 v66;
  int v67;
  int v68;
  float v69;
  __int64 v70;
  float v71;
  __int64 v72;
  __int64 v73;
  __int128 v74;
  int v75;
  int v76;
  int v77;
  bool v78;
  __int64 v79;
  float v80;
  float v81;
  float v82;
  float v83;
  int v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  float32x4_t v87;
  __int128 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  float32x4_t v91;
  float32x4_t v92;
  __int128 v93;
  __int64 v94;
  int v95;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64* v102;
  __int64* v103;
  __int64* v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  unsigned __int64 v112;
  int v113;
  _BYTE* v114;
  float32x4_t v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64* v121;
  __int64 v122;
  __int64 v123;
  float v124;
  float v125;
  __int64 v126;
  __int64 v127;
  __int64 result;
  float v129;
  __int64 v130;
  float32x4_t** v131;
  float32x4_t** v132;
  float v133;
  float v134;
  float v135;
  __int64 v136;
  float32x4_t* v137;
  unsigned __int64 v138;
  float32x4_t v139;
  bool v140;
  bool v141;
  char v142;
  unsigned __int16 v143;
  char v144;
  float v145;
  float32x4_t v146;
  __int64 v147;
  float32x4_t v148;
  __int64 v149;
  __int64 v150;
  float32x4_t v151;
  long double v152;
  float32x4_t v153;
  float32x4_t v154;
  __int64 (**v155)();
  void* v156;
  __int64 (***v157)();
  int v158;
  char v159;

  v9 = LANES128(a1[7]).n128_f32[2] + 3.0;
  if (v9 >= 0x1.6800000000000p+8) {
    v9 = v9 + -0x1.6800000000000p+8;
  }
  LANES128(a1[7]).n128_f32[2] = v9;
  v10 = game_g_game_setting_ptr;
  v11 = *(_BYTE**)game_g_game_setting_ptr;
  v12 = game_script_hub_g_frame_counter_ptr[0];
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 1 ||
      (v11[804] & 1) == 0 &&
          (v11[940] != 1 || (v11[805] & 1) == 0 || (v11[806] & 1) == 0)) {
    if (v11[903] != 1) {
    LABEL_33:
      v14 = &LANES128(a1[10]).n128_u8[9];
      goto LABEL_34;
    }
    if ((v11[900] & 1) == 0) {
      if (v11[940] == 1 && (v11[901] & 1) != 0) {
        v13 = v11[902];
        goto LABEL_11;
      }
      goto LABEL_33;
    }
  }
  v13 = 1;
LABEL_11:
  v14 = &LANES128(a1[10]).n128_u8[9];
  if ((v13 & 1) == 0 || (LANES128(a1[10]).n128_u8[9] & 1) == 0) {
  LABEL_34:
    if ((LANES128(a1[10]).n128_u8[12] & 1) == 0 &&
        (LANES128(a1[10]).n128_u8[8] & 1) == 0) {
      v20 = (float32x4_t*)LANES128(a1[6]).n128_u64[0];
      if (v20 != nullptr) {
        a4 = COERCE_LONG_DOUBLE(vdupq_n_s32(0x3ECCCCCDu));
        a2 = COERCE_LONG_DOUBLE(vaddq_f32(
            a1[5], vmulq_f32(vsubq_f32(v20[2], a1[5]), *(float32x4_t*)&a4)));
        LANES128(a1[5]).n128_u64[0] = *(_QWORD*)&a2;
        v21 = a1[5];
        LANES128(a1[21]).n128_u64[0] = LANES128(v21).n128_u64[0];
        LANES128(v21).n128_u64[1] = DWORD2(a2);
        a1[5] = v21;
        v22 = a1[21];
        LANES128(v22).n128_u64[1] = DWORD2(a2);
        a1[21] = v22;
      }
    }
    goto LABEL_51;
  }
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0 ||
       (v11[804] & 1) == 0 &&
           (v11[940] != 1 || (v11[805] & 1) == 0 || (v11[806] & 1) == 0)) &&
      (v11[903] != 1 ||
       (v11[900] & 1) == 0 &&
           (v11[940] != 1 || (v11[901] & 1) == 0 || v11[902] != 1))) {
    goto LABEL_51;
  }
  v15 = 0;
  if ((LANES128(a1[10]).n128_u8[12] & 1) != 0) {
    goto LABEL_43;
  }
  if (LANES128(a1[6]).n128_u64[0] == 0) {
    goto LABEL_43;
  }
  v15 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_43;
  }
  v16 = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), a1);
  if (v16 == 0) {
    v15 = 0;
    goto LABEL_43;
  }
  v15 = *(_DWORD*)(v16 + 32);
  if (v15 == 0) {
  LABEL_43:
    v23 = LANES128(a1[22]).n128_f32[0];
    if (v23 >= 10.0) {
      a2 = *(long double*)&a1[21];
    }
    else {
      v24 = v23 + *(float*)(*(_QWORD*)v12 + 160LL);
      v25 = a1[21];
      v26 = v24 / 10.0;
      LANES128(a1[22]).n128_f32[0] = v24;
      if ((float)(v24 / 10.0) > 0x1.0000000000000p+0) {
        v26 = 0x1.0000000000000p+0;
      }
      v27 = a1[5];
      a4 = COERCE_LONG_DOUBLE(vsubq_f32(v25, v27));
      a2 = COERCE_LONG_DOUBLE(
          vaddq_f32(v27, vmulq_n_f32(*(float32x4_t*)&a4, v26)));
    }
    LANES128(a1[5]).n128_u64[0] = *(_QWORD*)&a2;
    v28 = a1[5];
    LANES128(v28).n128_u64[1] = DWORD2(a2);
    a1[5] = v28;
    LANES128(a1[5]).n128_u32[1] = 0;
    if (v15 != 0) {
      LANES128(a1[22]).n128_f32[1] =
          *(float*)(*(_QWORD*)v12 + 160LL) + LANES128(a1[22]).n128_f32[1];
    }
    else {
      LANES128(a1[22]).n128_u32[1] = 0;
    }
    goto LABEL_51;
  }
  v17 = LANES128(a1[22]).n128_f32[1];
  v18 = 0.0;
  if (game_GameModeData_instance_ != 0) {
    v19 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &a1[1]);
    if (v19 != 0) {
      v18 = (float)*(int*)(v19 + 32);
    }
  }
  if (v17 < v18) {
    v15 = 1;
    goto LABEL_43;
  }
  a4 = *(long double*)&a1[5];
  v145 = 0.0;
  v146 = *(float32x4_t*)(LANES128(a1[6]).n128_u64[0] + 32);
  if (game_GameModeData_instance_ != 0) {
    v151 = *(float32x4_t*)(LANES128(a1[6]).n128_u64[0] + 32);
    v152 = *(long double*)&a1[5];
    v147 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &a1[2]);
    v146 = v151;
    a4 = v152;
    if (v147 != 0) {
      v145 = (float)*(int*)(v147 + 32);
    }
  }
  LANES128(a1[22]).n128_u32[0] = 0;
  a2 = COERCE_LONG_DOUBLE(vaddq_f32(
      *(float32x4_t*)&a4, vmulq_n_f32(vsubq_f32(v146, *(float32x4_t*)&a4),
                                      v145 / 0x1.9000000000000p+6)));
  LANES128(a1[5]).n128_u64[0] = *(_QWORD*)&a2;
  v148 = a1[5];
  LANES128(v148).n128_u64[1] = DWORD2(a2);
  a1[5] = v148;
LABEL_51:
  *(_QWORD*)&a2 = 0;
  v29 = GameData_212c790;
  v30 = *(_QWORD*)(*GameData_212c790 + 8);
  v31 = *(float32x4_t***)(v30 + 8);
  v32 = *(float32x4_t***)(v30 + 16);
  if (v31 != v32) {
    LODWORD(a5) = -8.0;
    LODWORD(a6) = 8.0;
    a4 = *(long double*)&GameData_1a83960;
    LODWORD(a7) = -16.0;
    v33 = COERCE_LONG_DOUBLE(
        vaddq_f32(a1[21], COERCE_AS(float32x4_t, GameData_1a83960)));
    LODWORD(a4) = DWORD2(v33);
    while (1) {
      v34 = *v31++;
      a8 = COERCE_LONG_DOUBLE(vaddq_f32(v34[3], v34[4]));
      v35 = *(float*)&v33 < (float)(*(float*)&a8 + -8.0) ||
            *(float*)&v33 > (float)(*(float*)&a8 + 8.0);
      *(float*)&a8 = *((float*)&a8 + 2) + 8.0;
      v36 = v35 || *((float*)&v33 + 2) < (float)(*((float*)&a8 + 2) + -16.0);
      if (!v36 && *((float*)&v33 + 2) <= *(float*)&a8) {
        break;
      }
      if (v31 == v32) {
        goto LABEL_65;
      }
    }
    game_gmap_13408e0((void*)(&v155), a2, v33, a4, a5, a6, a7, a8);
    LODWORD(a2) = HIDWORD(v155);
  }
LABEL_65:
  LODWORD(a4) = 0x1.0000000000000p-1;
  LANES128(a1[10]).n128_u8[8] = 0;
  v38 = LANES128(a1[6]).n128_u64[0];
  if (*(float*)&a2 == 0.0) {
    *(float*)&a2 = 2.5;
  }
  LANES128(a1[3]).n128_f32[2] =
      LANES128(a1[3]).n128_f32[2] +
      (float)((float)(*(float*)&a2 - LANES128(a1[3]).n128_f32[2]) *
              0x1.0000000000000p-1);
  v39 = GameData_2130e00;
  if (v38 == 0) {
    v41 = *(float*)(*GameData_2130e00 + 364);
    v42 = LANES128(a1[9]).n128_u8[8];
    *(float*)&v155 = v41;
    if (v42 == 1) {
      (*(void (**)(float32x4_t*, float, float, long double, long double,
                   long double, long double, long double))(
          LANES128(a1[8]).n128_u64[0] + 24))(a1 + 8, v41, v41, a4, a5, a6, a7,
                                             a8);
      LANES128(a1[8]).n128_u32[2] = 0;
    }
    else {
      if (LANES128(a1[8]).n128_f32[2] <= 0x1.0000000000000p-1 &&
          ((*(__int64 (**)(float32x4_t*, __int64 (***)(), float32x4_t*))(
               LANES128(a1[8]).n128_u64[0] + 8))(a1 + 8, &v155, a1 + 10) &
           1) == 0) {
        goto LABEL_113;
      }
      (*(void (**)(float32x4_t*))(LANES128(a1[8]).n128_u64[0] + 16))(a1 + 8);
      (*(void (**)(float32x4_t*))(LANES128(a1[8]).n128_u64[0] + 24))(a1 + 8);
      LANES128(a1[8]).n128_u32[2] = 1056964608;
    }
    LANES128(a1[8]).n128_u32[3] = 0;
    LANES128(a1[9]).n128_u16[4] = 256;
    goto LABEL_113;
  }
  if (*(_QWORD*)(v38 + 120) == 0 || (unsigned __int8)Impl_13261c0(v38) == 13 ||
      (unsigned __int8)Impl_13261c0(v38) == 12 ||
      (unsigned __int8)Impl_13261c0(v38) == 11) {
    LODWORD(a2) = *(_DWORD*)(*v39 + 368);
  }
  else if ((unsigned __int8)Impl_13261c0(LANES128(a1[6]).n128_u64[0]) != 0 &&
           (unsigned __int8)Impl_13261c0(LANES128(a1[6]).n128_u64[0]) != 1) {
    LODWORD(a2) = *(_DWORD*)(*v39 + 372);
  }
  else {
    LODWORD(a2) = *(_DWORD*)(*v39 + 376);
  }
  v40 = LANES128(a1[9]).n128_u8[8];
  LODWORD(v155) = LODWORD(a2);
  if (v40 == 1) {
    (*(void (**)(float32x4_t*, long double, float, long double, long double,
                 long double, long double, long double))(
        LANES128(a1[8]).n128_u64[0] + 24))(a1 + 8, a2, *(float*)&a2, a4, a5, a6,
                                           a7, a8);
    LANES128(a1[8]).n128_u32[2] = 0;
  }
  else {
    if (LANES128(a1[8]).n128_f32[2] <= 0x1.0000000000000p-1 &&
        ((*(__int64 (**)(float32x4_t*, __int64 (***)(), float32x4_t*))(
             LANES128(a1[8]).n128_u64[0] + 8))(a1 + 8, &v155, a1 + 10) &
         1) == 0) {
      goto LABEL_84;
    }
    (*(void (**)(float32x4_t*))(LANES128(a1[8]).n128_u64[0] + 16))(a1 + 8);
    (*(void (**)(float32x4_t*))(LANES128(a1[8]).n128_u64[0] + 24))(a1 + 8);
    LANES128(a1[8]).n128_u32[2] = 1056964608;
  }
  LANES128(a1[8]).n128_u32[3] = 0;
  LANES128(a1[9]).n128_u16[4] = 256;
LABEL_84:
  v43 = (float*)*v39;
  v44 = *(float*)(*v39 + 348);
  v45 = LANES128(a1[16]).n128_u8[12];
  v46 = *(float*)(*(_QWORD*)v12 + 160LL) + LANES128(a1[16]).n128_f32[2];
  if (v46 >= v44) {
    v46 = v46 - v44;
  }
  LANES128(a1[16]).n128_f32[2] = v46;
  if (v45 == 1 && v46 >= (float)(v44 * 0x1.0000000000000p-1)) {
    LOBYTE(v45) = 0;
    LANES128(a1[16]).n128_u8[12] = 0;
  }
  v47 = LANES128(a1[15]).n128_u32[3];
  v48 = 85;
  if ((v45 & 1) != 0) {
    v48 = 86;
  }
  LANES128(a1[16]).n128_u32[0] = LANES128(a1[15]).n128_u32[2];
  LANES128(a1[16]).n128_u32[1] = v47;
  v50 = (float)((float)((float)(v46 * 0x1.6800000000000p+8) / v44) *
                0x1.1df46a0000000p-6) +
        (float)(roundf(
                    (float)((float)((float)(v46 * 0x1.6800000000000p+8) / v44) *
                            0x1.1df46a0000000p-6) *
                    0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
  v51 = -0x1.921fb60000000p+1 - v50;
  v52 = -0x1.0000000000000p+0;
  if (v50 < -0x1.921fb60000000p+0) {
    v53 = -0x1.0000000000000p+0;
  }
  else {
    v53 = 0x1.0000000000000p+0;
  }
  if (v50 >= -0x1.921fb60000000p+0) {
    v51 = v50;
  }
  if (v50 > 0x1.921fb60000000p+0) {
    v54 = 0x1.921fb60000000p+1 - v50;
  }
  else {
    v54 = v51;
  }
  if (v50 > 0x1.921fb60000000p+0) {
    v55 = -0x1.0000000000000p+0;
  }
  else {
    v55 = v53;
  }
  v56 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v57 = v54 * v54;
  v58 = *((float*)GameData_212c188 + 1);
  v59 = -*(float*)GameData_212c188;
  v61 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v60 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v49 = (float)(v43[v48] - v43[84]) * 0x1.0000000000000p-1;
  LANES128(a1[15]).n128_f32[2] =
      (float)(v49 + 0x1.0000000000000p+0) +
      (float)(v49 *
              (float)(v55 *
                      (float)((float)((float)-(
                                          float)(v56 -
                                                 (float)((float)(v60 +
                                                                 (float)((float)-(
                                                                             float)(v61 -
                                                                                    (float)((float)(v58 -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c188 *
                                                                                                            v57)) *
                                                                                            v57)) *
                                                                         v57)) *
                                                         v57)) *
                                      v57) +
                              0x1.0000000000000p+0)));
  v62 = v43[90];
  if (v50 <= 0x1.921fb60000000p+0) {
    if (v50 >= -0x1.921fb60000000p+0) {
      v52 = 0x1.0000000000000p+0;
    }
    else {
      v50 = -0x1.921fb60000000p+1 - v50;
      v52 = -0x1.0000000000000p+0;
    }
  }
  else {
    v50 = 0x1.921fb60000000p+1 - v50;
  }
  v63 = v50 * v50;
  if ((v45 & 1) == 0) {
    v62 = v43[89];
  }
  LANES128(a1[15]).n128_f32[3] =
      (float)((float)((float)(v62 - v43[88]) * 0x1.0000000000000p-1) +
              0x1.0000000000000p+0) +
      (float)((float)((float)(v62 - v43[88]) * 0x1.0000000000000p-1) *
              (float)(v52 *
                      (float)((float)((float)((float)((float)(v60 +
                                                              (float)((float)((float)((float)(v58 +
                                                                                              (float)(v59 *
                                                                                                      v63)) *
                                                                                      v63) -
                                                                              v61) *
                                                                      v63)) *
                                                      v63) -
                                              v56) *
                                      v63) +
                              0x1.0000000000000p+0)));
LABEL_113:
  v64 = LANES128(a1[6]).n128_u64[0];
  if (v64 != LANES128(a1[6]).n128_u64[1]) {
    LANES128(a1[16]).n128_u32[2] = 0;
    LANES128(a1[6]).n128_u64[1] = v64;
    LANES128(a1[15]).n128_u64[1] = 0x3F8000003F800000LL;
    LANES128(a1[16]).n128_u8[12] = 1;
  }
  v65 = *(_QWORD*)v10;
  if (*(_BYTE*)(*(_QWORD*)v10 + 807LL) == 1 &&
          ((*(_BYTE*)(v65 + 804) & 1) != 0 ||
           *(_BYTE*)(v65 + 940) == 1 && (*(_BYTE*)(v65 + 805) & 1) != 0 &&
               (*(_BYTE*)(v65 + 806) & 1) != 0) ||
      *(_BYTE*)(v65 + 903) == 1 &&
          ((*(_BYTE*)(v65 + 900) & 1) != 0 ||
           *(_BYTE*)(v65 + 940) == 1 && (*(_BYTE*)(v65 + 901) & 1) != 0 &&
               *(_BYTE*)(v65 + 902) == 1)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v149 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v149;
      __cxa_guard_release_alt1(&GameData_21a6130);
    }
    v66 = GameData_21a6120;
  }
  else {
    v67 = *(_DWORD*)(v65 + 944);
    *(float*)&v66 = (float)(((v67 & 0x40000) != 0) + (v67 << 14 >> 31));
    *((float*)&v66 + 2) =
        (float)(((v67 & 0x10000) != 0) + ((__int16)v67 >> 15));
  }
  if (*((float*)&v66 + 2) >= 0.0) {
    if (*((float*)&v66 + 2) <= 0.0) {
      if (*(float*)&v66 >= 0.0) {
        if (*(float*)&v66 <= 0.0) {
          v68 = 0;
        }
        else {
          v68 = 4;
        }
      }
      else {
        v68 = 3;
      }
    }
    else {
      v68 = 2;
    }
  }
  else {
    v68 = 1;
  }
  if (v68 == LANES128(a1[20]).n128_u32[2]) {
    v69 = LANES128(a1[20]).n128_f32[1];
  }
  else {
    v69 = 0.0;
    LANES128(a1[20]).n128_u64[0] = 0;
    LANES128(a1[20]).n128_u32[2] = 0;
  }
  v70 = game_8224a0(3);
  v71 = 0.0;
  if (game_GameModeData_instance_ != 0) {
    v72 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v70);
    if (v72 != 0) {
      v71 = (float)*(int*)(v72 + 32);
    }
  }
  if (v69 >= v71) {
    LANES128(a1[20]).n128_u32[1] = 0;
  }
  v73 = *(_QWORD*)v10;
  if (*(_BYTE*)(*(_QWORD*)v10 + 807LL) == 1 &&
          ((*(_BYTE*)(v73 + 804) & 1) != 0 ||
           *(_BYTE*)(v73 + 940) == 1 && (*(_BYTE*)(v73 + 805) & 1) != 0 &&
               (*(_BYTE*)(v73 + 806) & 1) != 0) ||
      *(_BYTE*)(v73 + 903) == 1 &&
          ((*(_BYTE*)(v73 + 900) & 1) != 0 ||
           *(_BYTE*)(v73 + 940) == 1 && (*(_BYTE*)(v73 + 901) & 1) != 0 &&
               *(_BYTE*)(v73 + 902) == 1)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v150 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v150;
      __cxa_guard_release_alt1(&GameData_21a6130);
    }
    v74 = GameData_21a6120;
  }
  else {
    v75 = *(_DWORD*)(v73 + 944);
    *(float*)&v74 = (float)(((v75 & 0x40000) != 0) + (v75 << 14 >> 31));
    *((float*)&v74 + 2) =
        (float)(((v75 & 0x10000) != 0) + ((__int16)v75 >> 15));
  }
  if (*((float*)&v74 + 2) >= 0.0) {
    if (*((float*)&v74 + 2) <= 0.0) {
      if (*(float*)&v74 >= 0.0) {
        if (*(float*)&v74 <= 0.0) {
          LANES128(a1[20]).n128_u32[2] = 0;
          goto LABEL_182;
        }
        v76 = 4;
      }
      else {
        v76 = 3;
      }
    }
    else {
      v76 = 2;
    }
  }
  else {
    v76 = 1;
  }
  LANES128(a1[20]).n128_u32[2] = v76;
  v77 = LANES128(a1[20]).n128_i32[0];
  v78 = v77 < 7;
  if (v77 >= 7) {
    v77 = 7;
  }
  LANES128(a1[20]).n128_u32[0] = v77 + 1;
  if (!v78) {
    v79 = *(_QWORD*)v10;
    if (*(_BYTE*)(*(_QWORD*)v10 + 807LL) != 1 ||
        (v80 = 0x1.0000000000000p+0, (*(_BYTE*)(v79 + 804) & 1) == 0) &&
            (*(_BYTE*)(v79 + 940) != 1 || (*(_BYTE*)(v79 + 805) & 1) == 0 ||
             (*(_BYTE*)(v79 + 806) & 1) == 0)) {
      if (*(_BYTE*)(v79 + 903) != 1 ||
          (v80 = 0x1.0000000000000p+0, (*(_BYTE*)(v79 + 900) & 1) == 0) &&
              (*(_BYTE*)(v79 + 940) != 1 || (*(_BYTE*)(v79 + 901) & 1) == 0 ||
               (*(_BYTE*)(v79 + 902) & 1) == 0)) {
        v80 = 2.0;
        if ((*(_DWORD*)(v79 + 944) & 8) == 0) {
          v80 = 0x1.0000000000000p+0;
        }
      }
    }
    LANES128(a1[20]).n128_f32[1] =
        LANES128(a1[20]).n128_f32[1] +
        (float)(*(float*)(*(_QWORD*)v12 + 160LL) * v80);
  }
LABEL_182:
  v81 = LANES128(a1[8]).n128_f32[2];
  v82 = LANES128(a1[8]).n128_f32[3];
  LANES128(a1[9]).n128_u8[9] = 0;
  if (v82 < v81) {
    v83 =
        v82 + (*(float (**)(float32x4_t*))LANES128(a1[8]).n128_u64[0])(a1 + 8);
    if (LANES128(a1[8]).n128_f32[2] < v83) {
      v83 = LANES128(a1[8]).n128_f32[2];
    }
    LANES128(a1[8]).n128_f32[3] = v83;
  }
  if (LANES128(a1[10]).n128_u8[15] == 1) {
    v84 = *(_DWORD*)(*v39 + 592);
    if (v84 > *(_DWORD*)(*v39 + 576)) {
      v84 += 16;
    }
    v85 = LANES128(a1[3]).n128_u64[0];
    LODWORD(v86) = 0;
    *((float*)&v86 + 1) = (float)(*(float*)(*v39 + 668) * (float)(v84 + 1)) +
                          0x1.0000000000000p-1;
    v87 = vaddq_f32(a1[5], COERCE_AS(float32x4_t, v86));
    *(_QWORD*)(v85 + 112) = LANES128(v87).n128_u64[0];
    v88 = *(_OWORD*)(v85 + 112);
    *((_QWORD*)&v88 + 1) = LANES128(v87).n128_u32[2];
    *(_OWORD*)(v85 + 112) = v88;
    v89 = LANES128(a1[3]).n128_u64[0];
    *(float*)(v89 + 192) =
        (*(float (**)(float32x4_t*))(LANES128(a1[8]).n128_u64[0] + 16))(a1 + 8);
    v90 = LANES128(a1[3]).n128_u64[0];
    LANES128(v91).n128_u32[0] = 0;
    LANES128(v91).n128_f32[1] = LANES128(a1[3]).n128_f32[2] + 2.5;
    LANES128(v91).n128_u32[2] = -0x1.e000000000000p+2;
    v92 = vaddq_f32(a1[21], v91);
    *(_QWORD*)(v90 + 144) = LANES128(v92).n128_u64[0];
    v93 = *(_OWORD*)(v90 + 144);
    *((_QWORD*)&v93 + 1) = LANES128(v92).n128_u32[2];
    *(_OWORD*)(v90 + 144) = v93;
    if (LANES128(a1[10]).n128_u8[10] == 1 &&
        *(_DWORD*)(LANES128(a1[3]).n128_u64[0] + 200) == 0) {
      InfoCursorBottomImpl_100e5d0();
      if (*v14 == 1) {
        v94 = *(_QWORD*)(*v29 + 8);
        v95 = *(_DWORD*)(v94 + 56);
        v96 = *(__int64**)(v94 + 8);
        if (v95 < 0) {
          while (*(_QWORD*)(*v96 + 96) != 0 || *(_QWORD*)(*v96 + 552) != 0) {
            ++v96;
          }
        }
        else {
          v98 = *v96;
          v97 = v96 + 1;
          if (*(_DWORD*)(v98 + 84) != v95) {
            do {
              v99 = *v97++;
            } while (*(_DWORD*)(v99 + 84) != v95);
          }
        }
        GameRoutine_100e280(*(float*)(LANES128(a1[3]).n128_u64[0] + 192));
      }
    }
    if (LANES128(a1[10]).n128_u8[10] != 1) {
      goto LABEL_218;
    }
    v100 = *(_QWORD*)(*v29 + 8);
    v101 = *(_DWORD*)(v100 + 56);
    v102 = *(__int64**)(v100 + 8);
    v103 = *(__int64**)(v100 + 16);
    if (v101 < 0) {
      if (v102 == v103) {
        goto LABEL_215;
      }
      while (1) {
        v104 = (__int64*)*v102;
        if (*(_QWORD*)(*v102 + 96) == 0 && v104[69] == 0) {
          break;
        }
        if (++v102 == v103) {
          goto LABEL_215;
        }
      }
    }
    else {
      if (v102 == v103) {
        goto LABEL_215;
      }
      while (1) {
        v105 = *v102++;
        v104 = (__int64*)v105;
        if (*(_DWORD*)(v105 + 84) == v101) {
          break;
        }
        if (v102 == v103) {
          goto LABEL_215;
        }
      }
    }
    v106 = LANES128(a1[6]).n128_u64[0];
    if (v106 != 0) {
      v107 = *v104;
      v108 = v104[1];
      v156 = &GameData_1abd4d1;
      v155 = (__int64 (**)())game_HashString_alt1(&GameData_1abd4d1);
      if (game_GameModeData_instance_ != 0 &&
          (v109 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v155)) != 0) {
        v110 = *(unsigned int*)(v109 + 32);
      }
      else {
        v110 = 3;
      }
      v144 = SpotMgr_1332940(v107, v108, v106, v110);
      v111 = *(_DWORD*)(LANES128(a1[3]).n128_u64[0] + 200);
      if ((v144 & 1) != 0) {
        if (v111 == 1) {
          goto LABEL_218;
        }
        goto LABEL_217;
      }
      goto LABEL_216;
    }
  LABEL_215:
    v111 = *(_DWORD*)(LANES128(a1[3]).n128_u64[0] + 200);
  LABEL_216:
    if (v111 != 2) {
    LABEL_217:
      InfoCursorBottomImpl_100e5d0();
    }
  LABEL_218:
    v112 = LANES128(a1[3]).n128_u64[0];
    if ((LANES128(a1[10]).n128_u8[10] & 1) == 0 &&
        *(_DWORD*)(v112 + 200) != 0) {
      InfoCursorBottomImpl_100e5d0();
      *(_DWORD*)(LANES128(a1[3]).n128_u64[0] + 208) = 0;
      v112 = LANES128(a1[3]).n128_u64[0];
    }
    v113 = *v14;
    if (v113 == *(unsigned __int8*)(v112 + 128)) {
      if (*v14 == 0) {
        goto LABEL_234;
      }
    }
    else {
      *(_BYTE*)(v112 + 128) = v113;
      InfoCursorBottomImpl_100de20();
      v112 = LANES128(a1[3]).n128_u64[0];
      if ((LANES128(a1[10]).n128_u8[9] & 1) == 0) {
        goto LABEL_233;
      }
    }
    v114 = *(_BYTE**)v10;
    if (*(_BYTE*)(*(_QWORD*)v10 + 807LL) == 1 &&
        ((v114[804] & 1) != 0 ||
         v114[940] == 1 && (v114[805] & 1) != 0 && (v114[806] & 1) != 0)) {
    LABEL_232:
      LOBYTE(v113) = 1;
    LABEL_234:
      *(_BYTE*)(v112 + 160) = v113 & 1;
      InfoCursorBottomImpl_100de20();
      GameRoutine_100d7e0(
          LANES128(a1[3]).n128_u64[0],
          (float)(*(float*)(*(_QWORD*)v12 + 160LL) * 0x1.0aef000000000p+4) /
              0x1.f400000000000p+9);
      goto LABEL_235;
    }
    if (v114[903] == 1) {
      if ((v114[900] & 1) == 0) {
        LOBYTE(v113) = 0;
        if (v114[940] == 1 && (v114[901] & 1) != 0) {
          LOBYTE(v113) = v114[902];
        }
        goto LABEL_234;
      }
      goto LABEL_232;
    }
  LABEL_233:
    LOBYTE(v113) = 0;
    goto LABEL_234;
  }
LABEL_235:
  LANES128(a1[10]).n128_u8[14] = LANES128(a1[10]).n128_u8[13];
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    v115 = *(float32x4_t*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL);
    v153 = vaddq_f32(v115, COERCE_AS(float32x4_t, GameData_1a83880));
    v154 = vaddq_f32(v115, COERCE_AS(float32x4_t, GameData_1a832a0));
    collision_670c60((void*)(&v155), &v154, &v153, 0x10000);
    v116 = *(_QWORD*)(*GameData_212ca80[0] + 64);
    v117 = *(_QWORD*)(*GameData_212ca80[0] + 72);
    if (v116 != v117) {
      while (v159 == 0 ||
             v158 !=
                 ((*(unsigned __int8*)(*(_QWORD*)v116 + 41LL) << 16) |
                  (*(unsigned __int8*)(*(_QWORD*)v116 + 40LL) << 24) |
                  (*(unsigned __int8*)(*(_QWORD*)v116 + 42LL) << 8) | 0xFF)) {
        v116 += 8;
        if (v116 == v117) {
          goto LABEL_250;
        }
      }
      if (game_GameModeData_instance_ == 0 ||
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 0) {
        LOBYTE(v118) = 1;
        goto LABEL_252;
      }
      v118 = *(_QWORD*)(*(_QWORD*)v116 + 56LL);
      if (v118 == 0) {
      LABEL_252:
        LANES128(a1[10]).n128_u8[13] = v118;
        goto LABEL_253;
      }
      v119 = *(_QWORD*)(*v29 + 8);
      v120 = *(__int64**)(v119 + 8);
      v121 = *(__int64**)(v119 + 16);
      if (v120 != v121) {
        while (1) {
          v123 = *v120++;
          v122 = v123;
          if (*(_QWORD*)(v123 + 96) == v118) {
            break;
          }
          if (v120 == v121) {
            v122 = 0;
            break;
          }
        }
        LOBYTE(v118) = v122 != 0;
        goto LABEL_252;
      }
    }
  LABEL_250:
    LOBYTE(v118) = 0;
    goto LABEL_252;
  }
LABEL_253:
  v156 = &GameData_1ad0455;
  v124 = 0.0;
  v125 = 0.0;
  v155 = (__int64 (**)())game_HashString_alt1(&GameData_1ad0455);
  if (game_GameModeData_instance_ != 0) {
    v126 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v155);
    if (v126 != 0) {
      v125 = (float)*(int*)(v126 + 32);
    }
  }
  v156 = &GameData_1aeb060;
  v155 = (__int64 (**)())game_HashString_alt1(&GameData_1aeb060);
  if (game_GameModeData_instance_ != 0) {
    v127 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v155);
    if (v127 != 0) {
      v124 = (float)*(int*)(v127 + 32);
    }
  }
  v156 = &GameData_1ad0472;
  result = game_HashString_alt1(&GameData_1ad0472);
  v129 = 0.0;
  v155 = (__int64 (**)())result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v155);
    if (result != 0) {
      v129 = (float)*(int*)(result + 32);
    }
  }
  v130 = *(_QWORD*)(*v29 + 8);
  v131 = *(float32x4_t***)(v130 + 8);
  v132 = *(float32x4_t***)(v130 + 16);
  if (v131 != v132) {
    v133 = v125 * v125;
    v134 = -v124;
    v135 = -v129;
    do {
      v137 = *v131;
      v138 = LANES128((*v131)[6]).n128_u64[0];
      if (v138 != 0 && (unsigned int)*(unsigned __int8*)(v138 + 32) - 3 < 2) {
        goto LABEL_266;
      }
      if (*v14 != 1 ||
          ((v139 = vsubq_f32(vsubq_f32(a1[5], v137[3]), v137[4]),
            LANES128_OF(vmulq_f32(v139, v139)).n128_f32[0] <= v133)
               ? (v140 = LANES128(v139).n128_f32[2] < v134)
               : (v140 = false),
           v140 ? (v141 = LANES128(v139).n128_f32[2] <= v135) : (v141 = true),
           v141)) {
        if ((LANES128(v137[34]).n128_u16[0] & 0x2000) == 0) {
          goto LABEL_266;
        }
        v142 = 0;
        v143 = LANES128(v137[34]).n128_u16[0] & 0xDFFF;
      }
      else {
        if ((LANES128(v137[34]).n128_u16[0] & 0x2000) != 0) {
          goto LABEL_266;
        }
        v143 = LANES128(v137[34]).n128_u16[0] | 0x2000;
        v142 = 1;
      }
      result = LANES128(v137[23]).n128_i64[1];
      LANES128(v137[34]).n128_u16[0] = v143;
      if (result != 0) {
        v155 = GameData_1fb28d0;
        LOBYTE(v156) = v142;
        v157 = &v155;
        CharacterBuilder_1083e90(result, &v155);
        result = (__int64)v157;
        if (v157 == &v155) {
          v136 = 4;
        }
        else {
          if (v157 == nullptr) {
            goto LABEL_266;
          }
          v136 = 5;
        }
        result = (*v157)[v136]();
      }
    LABEL_266:
      ++v131;
    } while (v131 != v132);
  }
  return result;
}

#pragma GCC visibility pop
