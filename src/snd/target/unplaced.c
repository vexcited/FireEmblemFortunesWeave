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
float snd_target_153540(__int64 a1);

float snd_target_153540(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  float* v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  float v40;
  float* v41;
  __int64 v42;
  float v43;
  float v44;
  float v45;
  float* v46;
  float v47;
  __int64 v48;
  _QWORD* v49;
  __int64* v50;
  __int64 v51;
  void (***v52)(_QWORD);
  __int64 v53;
  __int64 v54;
  float result;

  GameRoutine_16ee40();
  v2 = GameData_21348c0[0];
  v3 = *(unsigned int*)(a1 + 6604);
  *(_QWORD*)(a1 + 6680) = 0;
  *(_QWORD*)(a1 + 6688) = 0;
  *(_QWORD*)(a1 + 6696) = 0;
  *(_QWORD*)(a1 + 6704) = 0;
  *(_DWORD*)(a1 + 6712) = 0;
  *(_QWORD*)a1 = v2 + 2;
  *(_QWORD*)(a1 + 40) = v2 + 33;
  *(_QWORD*)(a1 + 5592) = v2 + 174;
  v4 = nn_audio_detail_GetFftWorkBufferSizeInternalImpl(2, 4, 0, v3, 1);
  v5 = snd_g_memory_ptr[0];
  *(_QWORD*)(a1 + 6688) = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v4, 32);
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
      *v5, 48, 32);
  *(_BYTE*)v6 = 0;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 24) = 2;
  *(_QWORD*)(v6 + 32) = 4;
  *(_QWORD*)(v6 + 40) = 0;
  v7 = *(_QWORD*)(a1 + 6680);
  *(_QWORD*)(a1 + 6680) = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
    v8 = *(_QWORD*)(a1 + 6680);
  }
  else {
    v8 = v6;
  }
  v9 = *(_QWORD*)(a1 + 6688);
  v10 = *(_DWORD*)(a1 + 6604);
  *(_QWORD*)(v8 + 16) = v4;
  *(_QWORD*)(v8 + 8) = v9;
  *(_DWORD*)(v8 + 40) = v10;
  nn_audio_detail_FftInitializeInternalImpl(v8 + 8, 1);
  *(_BYTE*)v8 = 1;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
      *v5, 8LL * *(unsigned int*)(a1 + 6604), 32);
  v12 = *(_QWORD*)(a1 + 6696);
  *(_QWORD*)(a1 + 6696) = v11;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
  }
  v13 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
      *v5, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v14 = *(_QWORD*)(a1 + 6704);
  *(_QWORD*)(a1 + 6704) = v13;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
    v13 = *(_QWORD*)(a1 + 6704);
  }
  v15 = *(_DWORD*)(a1 + 6604);
  if (v15 < 1) {
    goto LABEL_34;
  }
  v16 = (float)(unsigned int)(v15 - 1);
  v17 = *((float*)GameData_212c188 + 1);
  v18 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v19 = -*(float*)GameData_212c188;
  v20 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v21 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  if (v15 == 1) {
    v22 = 0;
    goto LABEL_27;
  }
  v23 = 0;
  v24 = (float*)(v13 + 4);
  do {
    v27 = v23;
    v28 = (float)(unsigned int)v23;
    v29 = v23 + 1;
    v30 = (float)((float)(v28 * 0x1.921fb60000000p+2f) / v16) +
          (float)(roundf((float)((float)(v28 * 0x1.921fb60000000p+2f) / v16) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    v31 = -0x1.921fb60000000p+1f - v30;
    if (v30 < -0x1.921fb60000000p+0f) {
      v32 = -1.0f;
    }
    else {
      v32 = 1.0f;
    }
    if (v30 >= -0x1.921fb60000000p+0f) {
      v31 = v30;
    }
    if (v30 <= 0x1.921fb60000000p+0f) {
      v33 = v32;
    }
    else {
      v31 = 0x1.921fb60000000p+1f - v30;
      v33 = -1.0f;
    }
    *(v24 - 1) =
        (float)((float)(v33 *
                        (float)((float)((float)(v21 +
                                                (float)((float)(v18 +
                                                                (float)((float)(v20 +
                                                                                (float)((float)(v17 +
                                                                                                (float)(v19 *
                                                                                                        (float)(v31 *
                                                                                                                v31))) *
                                                                                        (float)(v31 *
                                                                                                v31))) *
                                                                        (float)(v31 *
                                                                                v31))) *
                                                        (float)(v31 * v31))) *
                                        (float)(v31 * v31)) +
                                1.0f)) *
                -0x1.d70a3e0000000p-2f) +
        0x1.147ae20000000p-1f;
    v25 = (float)((float)((float)(unsigned int)v29 * 0x1.921fb60000000p+2f) /
                  v16) +
          (float)(roundf((float)((float)((float)(unsigned int)v29 *
                                         0x1.921fb60000000p+2f) /
                                 v16) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v25 > 0x1.921fb60000000p+0f) {
      v25 = 0x1.921fb60000000p+1f - v25;
    LABEL_13:
      v26 = -1.0f;
      goto LABEL_14;
    }
    v26 = 1.0f;
    if (v25 < -0x1.921fb60000000p+0f) {
      v25 = -0x1.921fb60000000p+1f - v25;
      goto LABEL_13;
    }
  LABEL_14:
    v23 = v29 + 1;
    *v24 =
        (float)((float)(v26 *
                        (float)((float)((float)(v21 +
                                                (float)((float)(v18 +
                                                                (float)((float)(v20 +
                                                                                (float)((float)(v17 +
                                                                                                (float)(v19 *
                                                                                                        (float)(v25 *
                                                                                                                v25))) *
                                                                                        (float)(v25 *
                                                                                                v25))) *
                                                                        (float)(v25 *
                                                                                v25))) *
                                                        (float)(v25 * v25))) *
                                        (float)(v25 * v25)) +
                                1.0f)) *
                -0x1.d70a3e0000000p-2f) +
        0x1.147ae20000000p-1f;
    v24 += 2;
  } while (v23 != (v15 & 0x7FFFFFFE));
  v22 = v27 + 2;
  if ((v15 & 1) != 0) {
  LABEL_27:
    v34 = (float)((float)((float)(unsigned int)v22 * 0x1.921fb60000000p+2f) /
                  v16) +
          (float)(roundf((float)((float)((float)(unsigned int)v22 *
                                         0x1.921fb60000000p+2f) /
                                 v16) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v34 > 0x1.921fb60000000p+0f) {
      v35 = 0x1.921fb60000000p+1f;
      goto LABEL_31;
    }
    v36 = 1.0f;
    if (v34 < -0x1.921fb60000000p+0f) {
      v35 = -0x1.921fb60000000p+1f;
    LABEL_31:
      v34 = v35 - v34;
      v36 = -1.0f;
    }
    *(float*)(v13 + 4 * v22) =
        (float)((float)(v36 *
                        (float)((float)((float)(v21 +
                                                (float)((float)(v18 +
                                                                (float)((float)(v20 +
                                                                                (float)((float)(v17 +
                                                                                                (float)(v19 *
                                                                                                        (float)(v34 *
                                                                                                                v34))) *
                                                                                        (float)(v34 *
                                                                                                v34))) *
                                                                        (float)(v34 *
                                                                                v34))) *
                                                        (float)(v34 * v34))) *
                                        (float)(v34 * v34)) +
                                1.0f)) *
                -0x1.d70a3e0000000p-2f) +
        0x1.147ae20000000p-1f;
  }
  v15 = *(_DWORD*)(a1 + 6604);
LABEL_34:
  if (v15 == 0) {
    v40 = 0.0f;
    goto LABEL_44;
  }
  v37 = *(_QWORD*)(a1 + 6704);
  v38 = v15 & 7;
  if ((unsigned int)v15 >= 8) {
    v40 = 0.0f;
    v41 = (float*)(v37 + 16);
    v42 = 0;
    do {
      v42 -= 8;
      v43 = (float)((float)((float)((float)((float)(v40 + *(v41 - 4)) +
                                            *(v41 - 3)) +
                                    *(v41 - 2)) +
                            *(v41 - 1)) +
                    *v41) +
            v41[1];
      v44 = v41[2];
      v45 = v41[3];
      v41 += 8;
      v40 = (float)(v43 + v44) + v45;
    } while (-(__int64)(v15 & 0xFFFFFFF8) != v42);
    v39 = -v42;
    if ((v15 & 7) != 0) {
      goto LABEL_42;
    }
  }
  else {
    v39 = 0;
    v40 = 0.0f;
    if ((v15 & 7) == 0) {
      goto LABEL_44;
    }
  LABEL_42:
    v46 = (float*)(v37 + 4 * v39);
    do {
      v47 = *v46++;
      --v38;
      v40 = v40 + v47;
    } while (v38 != 0);
  }
LABEL_44:
  v48 = *v5;
  *(float*)(a1 + 6712) = v40 / (float)(unsigned int)v15;
  v49 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)v48 + 16LL))(v48, 24, 32);
  v50 = GameData_2134820[0];
  v49[2] = 0;
  *v49 = v50 + 2;
  v49[1] = 0;
  *(_QWORD*)(a1 + 5624) = v49;
  v51 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
      *v5, 32920, 32);
  GameRoutine_16f740();
  v52 = (void (***)(_QWORD))v49[2];
  v49[2] = v51;
  if (v52 != nullptr) {
    (**v52)(v52);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v5 + 24LL))(*v5, v52);
  }
  EffectAux_2af740(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                   *(unsigned int*)(a1 + 5648));
  EffectAux_2af6c0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                   *(unsigned int*)(a1 + 5644));
  nn_atk_EffectAux_SetEnabled(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), 1);
  v53 = nn_atk_EffectAux_GetRequiredMemSize_27dd70(
      *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5656) = v53;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)snd_target_s_platform + 344LL))(snd_target_s_platform, v53, 0);
  v54 = nn_diag_detail_NotNullImpl();
  if ((v54 & 1) == 0) {
    nn_diag_detail_AbortImpl_1a0a590(v54);
    __udf(0);
  }
  result = *(float*)(a1 + 6608);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 32876LL) =
      (unsigned int)result;
  return result;
}

#pragma GCC visibility pop
