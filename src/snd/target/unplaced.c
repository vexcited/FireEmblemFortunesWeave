#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EffectAux_2af6c0(_QWORD, _QWORD);
__int64 EffectAux_2af740(_QWORD, _QWORD);
__int64 GameRoutine_16ee40(void);
__int64 GameRoutine_16f740(void);
__int64 nn_atk_EffectAux_GetRequiredMemSize_27dd70(_QWORD);
__int64 nn_atk_EffectAux_SetEnabled(_QWORD, _QWORD);
__int64 nn_audio_detail_FftInitializeInternalImpl(_QWORD, _QWORD);
__int64 nn_audio_detail_GetFftWorkBufferSizeInternalImpl(_QWORD, _QWORD, _QWORD,
                                                         _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_diag_detail_NotNullImpl(void);
extern _UNKNOWN* GameData_212c188;
extern __int64* GameData_2134820[3];
extern __int64* GameData_21348c0[12];
extern __int64* snd_g_memory_ptr[2];
extern __int64 snd_target_s_platform;
float snd_target_153540_alt1(__int64 a1) __asm__("snd_target_153540");
__int64 EffectAux_2af6c0_alt1(__int64, int) __asm__("EffectAux_2af6c0");
__int64 EffectAux_2af740_alt1(__int64, int) __asm__("EffectAux_2af740");
__int64 GameHr_16f740(_QWORD*);
__int64 nn_atk_EffectAux_GetRequiredMemSize_27dd70_alt1(__int64) __asm__(
    "nn_atk_EffectAux_GetRequiredMemSize_27dd70");
__int64
nn_atk_EffectAux_SetEnabled_alt1(__int64 result,
                                 char) __asm__("nn_atk_EffectAux_SetEnabled");
__int64 nn_audio_detail_FftInitializeInternalImpl_alt1(
    __int64, unsigned int) __asm__("nn_audio_detail_FftInitializeInternalImpl");
void GameHr_16ee40(__int64, __int64, __int64, __int64, __int64);
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");
float snd_target_153540(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5);

float snd_target_153540(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float* v28;
  float v29;
  float v30;
  __int64 v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float v44;
  float* v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  float* v50;
  float v51;
  __int64 v52;
  _QWORD* v53;
  __int64* v54;
  _QWORD* v55;
  void (***v56)(_QWORD);
  __int64 v57;
  float result;

  GameHr_16ee40(a1, a2, a3, a4, a5);
  v6 = GameData_21348c0[0];
  v7 = *(unsigned int*)(a1 + 6604);
  *(_QWORD*)(a1 + 6680) = 0;
  *(_QWORD*)(a1 + 6688) = 0;
  *(_QWORD*)(a1 + 6696) = 0;
  *(_QWORD*)(a1 + 6704) = 0;
  *(_DWORD*)(a1 + 6712) = 0;
  *(_QWORD*)a1 = v6 + 2;
  *(_QWORD*)(a1 + 40) = v6 + 33;
  *(_QWORD*)(a1 + 5592) = v6 + 174;
  v8 = nn_audio_detail_GetFftWorkBufferSizeInternalImpl(2, 4, 0, v7, 1);
  v9 = snd_g_memory_ptr[0];
  *(_QWORD*)(a1 + 6688) = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v8, 32);
  v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v9 + 16LL))(
      *v9, 48, 32);
  *(_BYTE*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 24) = 2;
  *(_QWORD*)(v10 + 32) = 4;
  *(_QWORD*)(v10 + 40) = 0;
  v11 = *(_QWORD*)(a1 + 6680);
  *(_QWORD*)(a1 + 6680) = v10;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v9 + 24LL))(*v9);
    v12 = *(_QWORD*)(a1 + 6680);
  }
  else {
    v12 = v10;
  }
  v13 = *(_QWORD*)(a1 + 6688);
  v14 = *(_DWORD*)(a1 + 6604);
  *(_QWORD*)(v12 + 16) = v8;
  *(_QWORD*)(v12 + 8) = v13;
  *(_DWORD*)(v12 + 40) = v14;
  nn_audio_detail_FftInitializeInternalImpl_alt1(v12 + 8, 1u);
  *(_BYTE*)v12 = 1;
  v15 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v9 + 16LL))(
      *v9, 8LL * *(unsigned int*)(a1 + 6604), 32);
  v16 = *(_QWORD*)(a1 + 6696);
  *(_QWORD*)(a1 + 6696) = v15;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v9 + 24LL))(*v9);
  }
  v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v9 + 16LL))(
      *v9, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v18 = *(_QWORD*)(a1 + 6704);
  *(_QWORD*)(a1 + 6704) = v17;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v9 + 24LL))(*v9);
    v17 = *(_QWORD*)(a1 + 6704);
  }
  v19 = *(_DWORD*)(a1 + 6604);
  if (v19 < 1) {
    goto LABEL_34;
  }
  v20 = (float)(unsigned int)(v19 - 1);
  v21 = *((float*)GameData_212c188 + 1);
  v22 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v23 = -*(float*)GameData_212c188;
  v24 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v25 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  if (v19 == 1) {
    v26 = 0;
    goto LABEL_27;
  }
  v27 = 0;
  v28 = (float*)(v17 + 4);
  do {
    v31 = v27;
    v32 = (float)(unsigned int)v27;
    v33 = v27 + 1;
    v34 = (float)((float)(v32 * 0x1.921fb60000000p+2f) / v20) +
          (float)(roundf((float)((float)(v32 * 0x1.921fb60000000p+2f) / v20) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    v35 = -0x1.921fb60000000p+1f - v34;
    if (v34 < -0x1.921fb60000000p+0f) {
      v36 = -0x1.0000000000000p+0f;
    }
    else {
      v36 = 0x1.0000000000000p+0f;
    }
    if (v34 >= -0x1.921fb60000000p+0f) {
      v35 = v34;
    }
    if (v34 <= 0x1.921fb60000000p+0f) {
      v37 = v36;
    }
    else {
      v35 = 0x1.921fb60000000p+1f - v34;
      v37 = -0x1.0000000000000p+0f;
    }
    *(v28 - 1) =
        (float)((float)(v37 *
                        (float)((float)((float)(v25 +
                                                (float)((float)(v22 +
                                                                (float)((float)(v24 +
                                                                                (float)((float)(v21 +
                                                                                                (float)(v23 *
                                                                                                        (float)(v35 *
                                                                                                                v35))) *
                                                                                        (float)(v35 *
                                                                                                v35))) *
                                                                        (float)(v35 *
                                                                                v35))) *
                                                        (float)(v35 * v35))) *
                                        (float)(v35 * v35)) +
                                0x1.0000000000000p+0f)) *
                -0x1.d70a3e0000000p-2f) +
        0x1.147ae20000000p-1f;
    v29 = (float)((float)((float)(unsigned int)v33 * 0x1.921fb60000000p+2f) /
                  v20) +
          (float)(roundf((float)((float)((float)(unsigned int)v33 *
                                         0x1.921fb60000000p+2f) /
                                 v20) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v29 > 0x1.921fb60000000p+0f) {
      v29 = 0x1.921fb60000000p+1f - v29;
    LABEL_13:
      v30 = -0x1.0000000000000p+0f;
      goto LABEL_14;
    }
    v30 = 0x1.0000000000000p+0f;
    if (v29 < -0x1.921fb60000000p+0f) {
      v29 = -0x1.921fb60000000p+1f - v29;
      goto LABEL_13;
    }
  LABEL_14:
    v27 = v33 + 1;
    *v28 =
        (float)((float)(v30 *
                        (float)((float)((float)(v25 +
                                                (float)((float)(v22 +
                                                                (float)((float)(v24 +
                                                                                (float)((float)(v21 +
                                                                                                (float)(v23 *
                                                                                                        (float)(v29 *
                                                                                                                v29))) *
                                                                                        (float)(v29 *
                                                                                                v29))) *
                                                                        (float)(v29 *
                                                                                v29))) *
                                                        (float)(v29 * v29))) *
                                        (float)(v29 * v29)) +
                                0x1.0000000000000p+0f)) *
                -0x1.d70a3e0000000p-2f) +
        0x1.147ae20000000p-1f;
    v28 += 2;
  } while (v27 != (v19 & 0x7FFFFFFE));
  v26 = v31 + 2;
  if ((v19 & 1) != 0) {
  LABEL_27:
    v38 = (float)((float)((float)(unsigned int)v26 * 0x1.921fb60000000p+2f) /
                  v20) +
          (float)(roundf((float)((float)((float)(unsigned int)v26 *
                                         0x1.921fb60000000p+2f) /
                                 v20) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v38 > 0x1.921fb60000000p+0f) {
      v39 = 0x1.921fb60000000p+1f;
      goto LABEL_31;
    }
    v40 = 0x1.0000000000000p+0f;
    if (v38 < -0x1.921fb60000000p+0f) {
      v39 = -0x1.921fb60000000p+1f;
    LABEL_31:
      v38 = v39 - v38;
      v40 = -0x1.0000000000000p+0f;
    }
    *(float*)(v17 + 4 * v26) =
        (float)((float)(v40 *
                        (float)((float)((float)(v25 +
                                                (float)((float)(v22 +
                                                                (float)((float)(v24 +
                                                                                (float)((float)(v21 +
                                                                                                (float)(v23 *
                                                                                                        (float)(v38 *
                                                                                                                v38))) *
                                                                                        (float)(v38 *
                                                                                                v38))) *
                                                                        (float)(v38 *
                                                                                v38))) *
                                                        (float)(v38 * v38))) *
                                        (float)(v38 * v38)) +
                                0x1.0000000000000p+0f)) *
                -0x1.d70a3e0000000p-2f) +
        0x1.147ae20000000p-1f;
  }
  v19 = *(_DWORD*)(a1 + 6604);
LABEL_34:
  if (v19 == 0) {
    v44 = 0x0.0p+0f;
    goto LABEL_44;
  }
  v41 = *(_QWORD*)(a1 + 6704);
  v42 = v19 & 7;
  if ((unsigned int)v19 >= 8) {
    v44 = 0x0.0p+0f;
    v45 = (float*)(v41 + 16);
    v46 = 0;
    do {
      v46 -= 8;
      v47 = (float)((float)((float)((float)((float)(v44 + *(v45 - 4)) +
                                            *(v45 - 3)) +
                                    *(v45 - 2)) +
                            *(v45 - 1)) +
                    *v45) +
            v45[1];
      v48 = v45[2];
      v49 = v45[3];
      v45 += 8;
      v44 = (float)(v47 + v48) + v49;
    } while (-(__int64)(v19 & 0xFFFFFFF8) != v46);
    v43 = -v46;
    if ((v19 & 7) != 0) {
      goto LABEL_42;
    }
  }
  else {
    v43 = 0;
    v44 = 0x0.0p+0f;
    if ((v19 & 7) == 0) {
      goto LABEL_44;
    }
  LABEL_42:
    v50 = (float*)(v41 + 4 * v43);
    do {
      v51 = *v50++;
      --v42;
      v44 = v44 + v51;
    } while (v42 != 0);
  }
LABEL_44:
  v52 = *v9;
  *(float*)(a1 + 6712) = v44 / (float)(unsigned int)v19;
  v53 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)v52 + 16LL))(v52, 24, 32);
  v54 = GameData_2134820[0];
  v53[2] = 0;
  *v53 = v54 + 2;
  v53[1] = 0;
  *(_QWORD*)(a1 + 5624) = v53;
  v55 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v9 + 16LL))(*v9, 32920, 32);
  GameHr_16f740(v55);
  v56 = (void (***)(_QWORD))v53[2];
  v53[2] = v55;
  if (v56 != nullptr) {
    (**v56)(v56);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v9 + 24LL))(*v9, v56);
  }
  EffectAux_2af740_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                        *(_DWORD*)(a1 + 5648));
  EffectAux_2af6c0_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                        *(_DWORD*)(a1 + 5644));
  nn_atk_EffectAux_SetEnabled_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), 1);
  v57 = nn_atk_EffectAux_GetRequiredMemSize_27dd70_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5656) = v57;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)snd_target_s_platform + 344LL))(snd_target_s_platform, v57, 0);
  if ((nn_diag_detail_NotNullImpl() & 1) == 0) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  result = *(float*)(a1 + 6608);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 32876LL) =
      (unsigned int)result;
  return result;
}

#pragma GCC visibility pop
