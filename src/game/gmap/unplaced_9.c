#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GmapSound_15309d0(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_gmap_1319ce0(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
extern _UNKNOWN GameData_1adf775;
extern _UNKNOWN GameData_1af6813;
extern __int64* GameData_212d718;
extern __int64 GameData_21f1648;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_gmap_1317f10(float32x4_t* a1, float32x4_t* a2);
__int64 game_gmap_131a9b0(float32x4_t* a1, float32x4_t* a2);

__int64 game_gmap_1317f10(float32x4_t* a1, float32x4_t* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  bool v12;
  int v13;
  float v14;
  float32x4_t v15;
  float32x4_t v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  _BYTE* v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float32x4_t v32;
  float v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  __int64 result;
  struct {
    __int64 v38;
    void* v39;
  } v38_;

  v4 = LANES64_OF(vmovn_s32(vceqq_f32(a1[5], *a2))).n64_u64[0];
  if ((v4 & WORD1(v4) & WORD2(v4) & 1) == 0 &&
      (LANES128(a1[11]).n128_u8[0] & 1) == 0) {
    v5 = *(_QWORD*)(GameData_21f1648 + 8);
    if ((snd_fnd_WeakHandle_isValid((__int64*)v5) & 1) == 0) {
      goto LABEL_20;
    }
    v6 = *(_QWORD*)(v5 + 24);
    if ((*(_BYTE*)(v5 + 16) & 1) == 0) {
      v6 = *(_BYTE*)(v5 + 16) >> 1;
    }
    if (v6 != 22 ||
        ((*(_BYTE*)(v5 + 16) & 1) != 0 ? (v7 = *(__int64**)(v5 + 32))
                                       : (v7 = (__int64*)(v5 + 17)),
         (v8 = *v7, v9 = v7[1], v10 = *(__int64*)((char*)v7 + 14),
          v8 == *(_QWORD*)"SE_SYS_GMAP_CursorMove")
             ? (v11 = v9 == *(_QWORD*)"MAP_CursorMove")
             : (v11 = false),
         v11 ? (v12 = v10 == *(_QWORD*)"rsorMove") : (v12 = false),
         v12 ? (v13 = 0) : (v13 = 1), v13 != 0)) {
    LABEL_20:
      if ((LANES128(a1[10]).n128_u8[9] & 1) != 0) {
        GmapSound_15309d0(*(_QWORD*)(GameData_21f1648 + 8));
      }
    }
  }
  v14 = LANES128(a1[4]).n128_f32[1];
  LANES128(a1[5]).n128_u32[0] = LANES128(*(a2)).n128_u32[0];
  LANES128(a1[5]).n128_u32[1] = LANES128(*(a2)).n128_u32[1];
  v15 = a1[5];
  LANES128(v15).n128_u64[1] = LANES128(*(a2)).n128_u32[2];
  a1[5] = v15;
  LANES128(a1[21]).n128_u32[0] = LANES128(*(a2)).n128_u32[0];
  LANES128(v15).n128_u32[0] = LANES128(*(a2)).n128_u32[1];
  v38_.v39 = &GameData_1adf775;
  LANES128(a1[21]).n128_u32[1] = LANES128(v15).n128_u32[0];
  v16 = a1[21];
  LANES128(v16).n128_u64[1] = LANES128(*(a2)).n128_u32[2];
  a1[21] = v16;
  v17 = game_HashString((__int64)&GameData_1adf775);
  v18 = 0x0.0p+0f;
  v19 = 0x0.0p+0f;
  v38_.v38 = v17;
  if (game_GameModeData_instance_ != 0) {
    v20 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v38_.v38);
    v19 = 0x0.0p+0f;
    if (v20 != 0) {
      v19 = (float)*(int*)(v20 + 32);
    }
  }
  v21 = LANES128(a1[4]).n128_f32[2];
  v38_.v39 = &GameData_1adf775;
  v22 = v14 + (float)(v19 * 0x1.0000000000000p+1f);
  v38_.v38 = game_HashString((__int64)&GameData_1adf775);
  if (game_GameModeData_instance_ != 0) {
    v23 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v38_.v38);
    if (v23 != 0) {
      v18 = (float)*(int*)(v23 + 32);
    }
  }
  v24 = v22 * 0x1.0000000000000p-1f;
  v25 = (float)(v21 + v18) * 0x1.0000000000000p-1f;
  v26 = *(_BYTE**)game_g_game_setting_ptr;
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 1 &&
      ((v26[804] & 1) != 0 ||
       v26[940] == 1 && (v26[805] & 1) != 0 && (v26[806] & 1) != 0)) {
    goto LABEL_35;
  }
  if (v26[903] != 1) {
  LABEL_39:
    v27 = 5;
    goto LABEL_40;
  }
  if ((v26[900] & 1) != 0) {
  LABEL_35:
    v27 = 21;
    goto LABEL_40;
  }
  v27 = 5;
  if (v26[940] == 1 && (v26[901] & 1) != 0) {
    if (v26[902] == 1) {
      goto LABEL_35;
    }
    goto LABEL_39;
  }
LABEL_40:
  v28 = LANES128(a1[3]).n128_f32[3];
  v29 = LANES128(a1[4]).n128_f32[0];
  v30 = v28 - v24;
  v31 = v24 + v28;
  v32 = a1[v27];
  if (v31 >= LANES128(v32).n128_f32[0]) {
    __typeof__(v31) z_ = (__typeof__(v31)){0};
    LODWORD(z_) = *(_DWORD*)&(a1[v27]);
    v31 = z_;
  }
  if (LANES128(v32).n128_f32[0] < v30) {
    v31 = v30;
  }
  LANES128(a1[v27]).n128_f32[0] = v31;
  LANES128(v32).n128_f32[0] = v29 - v25;
  v33 = v25 + v29;
  if (v33 >= LANES128(v32).n128_f32[2]) {
    v33 = LANES128(v32).n128_f32[2];
  }
  v34 = a1[v27];
  if (LANES128(v32).n128_f32[2] < LANES128(v32).n128_f32[0]) {
    v33 = LANES128(v32).n128_f32[0];
  }
  LANES128(v34).n128_u64[1] = LODWORD(v33);
  a1[v27] = v34;
  if ((v26[807] != 1 ||
       (v26[804] & 1) == 0 &&
           (v26[940] != 1 || (v26[805] & 1) == 0 || (v26[806] & 1) == 0)) &&
      (v26[903] != 1 ||
       (v26[900] & 1) == 0 &&
           (v26[940] != 1 || (v26[901] & 1) == 0 || (v26[902] & 1) == 0))) {
    v35 = a1[5];
    LANES128(a1[21]).n128_u64[0] = LANES128(v35).n128_u64[0];
    v36 = a1[21];
    LANES128(v36).n128_u64[1] = LANES128(v35).n128_u32[2];
    a1[21] = v36;
  }
  result = game_gmap_1319ce0((__int64)a1);
  LANES128(a1[11]).n128_u8[0] = 0;
  LANES128(a1[10]).n128_u8[8] = 1;
  return result;
}

__int64 game_gmap_131a9b0(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v2;
  __int64 v5;
  int8x16_t v6;
  _BYTE* v7;
  float32x4_t v8;
  float32x4_t v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float32x4_t v13;
  float32x4_t v14;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;
  float32x4_t v18;
  _BYTE* v19;
  __int64 v20;
  float32x4_t v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  __int64 result;
  __int64 v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float32x4_t v38;
  float v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  unsigned __int8 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  bool v51;
  int v52;
  int16x4_t v53;
  int v54;
  unsigned __int8* v55;
  char v56;
  float32x4_t v57;
  float32x4_t v58;
  struct {
    __int64 v59;
    void* v60;
  } v59_;

  v2 = *a2;
  v5 = game_g_game_setting_ptr;
  v6 = vmulq_f32(v2, v2);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_f32[0] > 0x1.0000000000000p+0f) {
    v7 = *(_BYTE**)game_g_game_setting_ptr;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 1 ||
         (v7[804] & 1) == 0 &&
             (v7[940] != 1 || (v7[805] & 1) == 0 || (v7[806] & 1) == 0)) &&
        (v7[903] != 1 ||
         (v7[900] & 1) == 0 &&
             (v7[940] != 1 || (v7[901] & 1) == 0 || (v7[902] & 1) == 0))) {
      LANES128(v6).n128_u64[1] = LANES128(v6).n128_u64[0];
      v8 = vrsqrteq_f32(v6);
      v9 = vmulq_f32(v8, vrsqrtsq_f32(v8, vmulq_f32(v6, v8)));
      *a2 = vbicq_s8(
          vmulq_f32(v2, vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v6, v9)))),
          vceqzq_f32(v6));
    }
  }
  v59_.v60 = &GameData_1af6813;
  v10 = game_HashString((__int64)&GameData_1af6813);
  v11 = 0x1.0000000000000p+1f;
  v59_.v59 = v10;
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v59_.v59);
    v11 = 0x1.0000000000000p+1f;
    if (v12 != 0) {
      v11 = (float)*(int*)(v12 + 32) * 0x1.99999a0000000p-4f;
    }
  }
  v13 = vmulq_n_f32(*a2, v11);
  *a2 = v13;
  v14 = vmulq_n_f32(
      v13, *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL));
  *a2 = v14;
  v15 = *(_BYTE**)v5;
  if ((*(_BYTE*)(*(_QWORD*)v5 + 807LL) != 1 ||
       (v15[804] & 1) == 0 &&
           (v15[940] != 1 || (v15[805] & 1) == 0 || (v15[806] & 1) == 0)) &&
      (v15[903] != 1 ||
       (v15[900] & 1) == 0 &&
           (v15[940] != 1 || (v15[901] & 1) == 0 || (v15[902] & 1) == 0)) &&
      (v15[944] & 8) != 0) {
    *a2 = vaddq_f32(v14, v14);
  }
  v16 = *(_QWORD*)(*GameData_212d718 + 16);
  v17 = 656;
  if (*(_BYTE*)(v16 + 964) != 0) {
    v17 = 696;
  }
  v18 = vmulq_n_f32(
      *a2,
      (float)(PSEUDO_UNFUSED(
          (*(float (**)(__int64))(*(_QWORD*)(v16 + v17) + 16LL))(v16 + v17) *
          -0x1.99999c0000000p-2f)) +
          0x1.3333340000000p+0f);
  *a2 = v18;
  v19 = *(_BYTE**)v5;
  if (*(_BYTE*)(*(_QWORD*)v5 + 807LL) == 1 &&
      ((v19[804] & 1) != 0 ||
       v19[940] == 1 && (v19[805] & 1) != 0 && (v19[806] & 1) != 0)) {
    goto LABEL_37;
  }
  if (v19[903] != 1) {
    goto LABEL_41;
  }
  if ((v19[900] & 1) != 0) {
    goto LABEL_37;
  }
  v20 = 5;
  if (v19[940] == 1 && (v19[901] & 1) != 0) {
    if (v19[902] == 1) {
    LABEL_37:
      v20 = 21;
    }
    else {
    LABEL_41:
      v20 = 5;
    }
  }
  v21 = a1[v20];
  v22 = LANES128(a1[4]).n128_f32[1];
  v59_.v60 = &GameData_1adf775;
  a1[v20] = vaddq_f32(v18, v21);
  v57 = v21;
  v58 = a1[5];
  v23 = game_HashString((__int64)&GameData_1adf775);
  v24 = 0x0.0p+0f;
  v25 = 0x0.0p+0f;
  v59_.v59 = v23;
  if (game_GameModeData_instance_ != 0) {
    v26 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v59_.v59);
    v25 = 0x0.0p+0f;
    if (v26 != 0) {
      v25 = (float)*(int*)(v26 + 32);
    }
  }
  v27 = LANES128(a1[4]).n128_f32[2];
  v59_.v60 = &GameData_1adf775;
  v28 = v22 + (float)(v25 * 0x1.0000000000000p+1f);
  result = game_HashString((__int64)&GameData_1adf775);
  v59_.v59 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v59_.v59);
    if (result != 0) {
      v24 = (float)*(int*)(result + 32);
    }
  }
  v30 = *(_QWORD*)v5;
  v31 = v28 * 0x1.0000000000000p-1f;
  v32 = (float)(v27 + v24) * 0x1.0000000000000p-1f;
  if (*(_BYTE*)(*(_QWORD*)v5 + 807LL) == 1 &&
      ((*(_BYTE*)(v30 + 804) & 1) != 0 ||
       *(_BYTE*)(v30 + 940) == 1 && (*(_BYTE*)(v30 + 805) & 1) != 0 &&
           (*(_BYTE*)(v30 + 806) & 1) != 0)) {
    goto LABEL_55;
  }
  if (*(_BYTE*)(v30 + 903) != 1) {
    goto LABEL_59;
  }
  if ((*(_BYTE*)(v30 + 900) & 1) != 0) {
    goto LABEL_55;
  }
  v33 = 5;
  if (*(_BYTE*)(v30 + 940) == 1 && (*(_BYTE*)(v30 + 901) & 1) != 0) {
    if (*(_BYTE*)(v30 + 902) == 1) {
    LABEL_55:
      v33 = 21;
    }
    else {
    LABEL_59:
      v33 = 5;
    }
  }
  v34 = LANES128(a1[3]).n128_f32[3];
  v35 = LANES128(a1[4]).n128_f32[0];
  v36 = v34 - v31;
  v37 = v31 + v34;
  v38 = a1[v33];
  if (v37 >= LANES128(v38).n128_f32[0]) {
    __typeof__(v37) z_ = (__typeof__(v37)){0};
    LODWORD(z_) = *(_DWORD*)&(a1[v33]);
    v37 = z_;
  }
  if (LANES128(v38).n128_f32[0] < v36) {
    v37 = v36;
  }
  LANES128(a1[v33]).n128_f32[0] = v37;
  LANES128(v38).n128_f32[0] = v35 - v32;
  v39 = v32 + v35;
  if (v39 >= LANES128(v38).n128_f32[2]) {
    v39 = LANES128(v38).n128_f32[2];
  }
  v40 = a1[v33];
  if (LANES128(v38).n128_f32[2] < LANES128(v38).n128_f32[0]) {
    v39 = LANES128(v38).n128_f32[0];
  }
  LANES128(v40).n128_u64[1] = LODWORD(v39);
  a1[v33] = v40;
  if (*(_BYTE*)(v30 + 807) == 1 &&
      ((*(_BYTE*)(v30 + 804) & 1) != 0 ||
       *(_BYTE*)(v30 + 940) == 1 && (*(_BYTE*)(v30 + 805) & 1) != 0 &&
           (*(_BYTE*)(v30 + 806) & 1) != 0)) {
    goto LABEL_75;
  }
  if (*(_BYTE*)(v30 + 903) == 1) {
    if ((*(_BYTE*)(v30 + 900) & 1) != 0) {
    LABEL_75:
      v41 = a1[5];
      goto LABEL_82;
    }
    if (*(_BYTE*)(v30 + 940) == 1 && (*(_BYTE*)(v30 + 901) & 1) != 0) {
      v41 = a1[5];
      if (*(_BYTE*)(v30 + 902) != 1) {
      LABEL_81:
        LANES128(a1[21]).n128_u64[0] = LANES128(v41).n128_u64[0];
        v42 = a1[21];
        LANES128(v42).n128_u64[1] = LANES128(v41).n128_u32[2];
        a1[21] = v42;
      }
    LABEL_82:
      if (LANES128(v58).n128_f32[0] == LANES128(v41).n128_f32[0] &&
              (LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v58, v41)))).n64_u32[1] &
               1) == 0 ||
          (LANES64(v53).n64_u64[0] =
               LANES64_OF(vmovn_s32(vceqq_f32(v57, a1[v20]))).n64_u64[0],
           (LANES64(v53).n64_u8[0] & 1) == 0) ||
          (LANES64(v53).n64_u8[2] & 1) == 0 ||
          (LANES64(v53).n64_u8[4] & 1) == 0) {
        v43 = LANES128(a1[11]).n128_u8[0];
        LANES128(a1[10]).n128_u8[11] = 0;
        if ((v43 & 1) == 0) {
          v44 = *(_QWORD*)(GameData_21f1648 + 8);
          result = snd_fnd_WeakHandle_isValid((__int64*)v44);
          if ((result & 1) == 0) {
            goto LABEL_117;
          }
          v45 = *(_QWORD*)(v44 + 24);
          if ((*(_BYTE*)(v44 + 16) & 1) == 0) {
            v45 = *(_BYTE*)(v44 + 16) >> 1;
          }
          if (v45 != 22 ||
              ((*(_BYTE*)(v44 + 16) & 1) != 0 ? (v46 = *(__int64**)(v44 + 32))
                                              : (v46 = (__int64*)(v44 + 17)),
               (v47 = *v46, v48 = v46[1], v49 = *(__int64*)((char*)v46 + 14),
                v47 == *(_QWORD*)"SE_SYS_GMAP_CursorMove")
                   ? (v50 = v48 == *(_QWORD*)"MAP_CursorMove")
                   : (v50 = false),
               v50 ? (v51 = v49 == *(_QWORD*)"rsorMove") : (v51 = false),
               v51 ? (v52 = 0) : (v52 = 1), v52 != 0)) {
          LABEL_117:
            if ((LANES128(a1[10]).n128_u8[9] & 1) != 0) {
              result = GmapSound_15309d0(*(_QWORD*)(GameData_21f1648 + 8));
            }
          }
        }
        goto LABEL_124;
      }
      if (*(_BYTE*)(v30 + 807) == 1 &&
          ((*(_BYTE*)(v30 + 804) & 1) != 0 ||
           *(_BYTE*)(v30 + 940) == 1 && (*(_BYTE*)(v30 + 805) & 1) != 0 &&
               (*(_BYTE*)(v30 + 806) & 1) != 0)) {
        goto LABEL_113;
      }
      if (*(_BYTE*)(v30 + 903) != 1) {
        v56 = 0;
        goto LABEL_120;
      }
      if ((*(_BYTE*)(v30 + 900) & 1) == 0) {
        v56 = 0;
        if (*(_BYTE*)(v30 + 940) == 1 && (*(_BYTE*)(v30 + 901) & 1) != 0) {
          v56 = *(_BYTE*)(v30 + 902);
        }
      LABEL_120:
        v54 = *(_DWORD*)(v30 + 952);
        if ((v56 & 1) == 0 && (v54 & 0x78000) != 0) {
          v55 = &LANES128(a1[10]).n128_u8[11];
        LABEL_123:
          snd_Fade_Fade_10c830((__int64)&v59_.v59, 0x0.0p+0f);
          snd_play_ff2d0((__int64)"SE_SYS_GMAP_CursorMove_Stop",
                         (__int64)"SE_SYS_GMAP_CursorMove_Stop",
                         (__int64)&v59_.v59, 0, 0x10001u, 0, 0x0.0p+0f,
                         0x1.0000000000000p+0f);
          result = snd_Fade_Destroy_Fade(&v59_.v59);
          *v55 = 1;
          goto LABEL_124;
        }
        goto LABEL_114;
      }
    LABEL_113:
      v54 = *(_DWORD*)(v30 + 952);
    LABEL_114:
      v55 = &LANES128(a1[10]).n128_u8[11];
      if ((v54 & 0x780000) != 0 || (LANES128(a1[10]).n128_u8[11] & 1) == 0) {
        goto LABEL_123;
      }
    LABEL_124:
      LANES128(a1[10]).n128_u8[8] = 1;
      return result;
    }
  }
  v41 = a1[5];
  goto LABEL_81;
}

#pragma GCC visibility pop
