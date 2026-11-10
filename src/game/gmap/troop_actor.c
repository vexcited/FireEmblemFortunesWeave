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

#pragma GCC visibility pop
