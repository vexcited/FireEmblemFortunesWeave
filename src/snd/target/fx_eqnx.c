#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FxEq_16a840(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_coef_PeakingEQ_setGain(_QWORD, float);
__n128 nn_os_UnlockMutex(_QWORD);
void FxEQNX_1525a0(__int64 a1, __int64 a2, int a3, int a4, float a5);
__n128 FxEQNX_152860(__int64 a1, unsigned int a2);
__int64 FxEQNX_1525a0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                           float) __asm__("FxEQNX_1525a0");
__int64 nn_atk_EffectAux_IsEnabled(_QWORD);
__int64 FxEQNX_152520(__int64 a1, float a2);

__int64 FxEQNX_152520(__int64 a1, float a2)
{
  __int64 result;

  result = nn_atk_EffectAux_IsEnabled(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  if ((result & 1) != 0) {
    result = FxEQNX_1525a0_alt1(
        a1, *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
        *(_DWORD*)(a1 + 5684) & (unsigned int)~*(_DWORD*)(a1 + 5680),
        *(_DWORD*)(a1 + 5680) & (unsigned int)~*(_DWORD*)(a1 + 5684), a2);
    *(_QWORD*)(a1 + 5680) = *(unsigned int*)(a1 + 5684);
  }
  return result;
}

void FxEQNX_1525a0(__int64 a1, __int64 a2, int a3, int a4, float a5)
{
  __int64 v8;
  __int64 v9;
  float v10;
  float* v11;
  __int64 v12;
  int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  int v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;

  v8 = 0;
  v9 = *(_QWORD*)(a2 + 104) + 8LL;
  v10 = a5 / 16.667f;
  v11 = (float*)(a1 + 5720);
  do {
    v12 = *(_QWORD*)(v9 + 8 * v8);
    v13 = 1 << v8;
    if (((1 << v8) & a3) != 0 && *(float*)(v12 + 208) <= 0.0f &&
        *(float*)(v12 + 212) <= 0.0f) {
      if (*(float*)(v12 + 216) > 0.0f) {
        *(_QWORD*)(v12 + 212) = 1065353216;
        v14 = (float)*(int*)(v12 + 232);
        v15 = *(float*)(v12 + 208);
        if ((v13 & a4) == 0) {
          goto LABEL_16;
        }
        goto LABEL_12;
      }
      if (*(float*)(v12 + 220) <= 0.0f) {
        *(_DWORD*)(v12 + 208) = 1082130432;
        v14 = (float)*(int*)(v12 + 232);
        v15 = *(float*)(v12 + 208);
        if ((v13 & a4) == 0) {
          goto LABEL_16;
        }
        goto LABEL_12;
      }
      *(_DWORD*)(v12 + 220) = 0;
      *(_DWORD*)(v12 + 212) = 1065353216;
    }
    v14 = (float)*(int*)(v12 + 232);
    v15 = *(float*)(v12 + 208);
    if ((v13 & a4) != 0) {
    LABEL_12:
      v16 = (float)*(int*)(v12 + 228);
      if (v15 > 0.0f) {
        v15 = 0.0f;
        *(_DWORD*)(v12 + 208) = 0;
        *(float*)(v12 + 216) = v16;
        goto LABEL_19;
      }
      if (*(float*)(v12 + 212) > 0.0f) {
        *(_DWORD*)(v12 + 212) = 0;
        *(float*)(v12 + 216) = v16;
      }
    }
  LABEL_16:
    if (v15 > 0.0f) {
      v15 = v15 - v10;
      *(float*)(v12 + 208) = v15;
      if (v15 <= 0.0f) {
        *(_DWORD*)(v12 + 212) = 1065353216;
      }
      goto LABEL_20;
    }
  LABEL_19:
    if (*(float*)(v12 + 212) <= 0.0f) {
      v23 = *(float*)(v12 + 216);
      if (v23 <= 0.0f) {
        v25 = *(float*)(v12 + 220);
        if (v25 > 0.0f) {
          *(float*)(v12 + 220) = v25 - v10;
        }
      }
      else {
        v24 = v23 - v10;
        *(float*)(v12 + 216) = v24;
        if (v24 <= 0.0f) {
          *(float*)(v12 + 220) = v14;
        }
      }
    }
  LABEL_20:
    v17 = *(float*)(v12 + 220);
    if (v17 <= 0.0f) {
      v18 = 1.0f;
      if (*(float*)(v12 + 216) <= 0.0f && *(float*)(v12 + 212) <= 0.0f) {
        v19 = v15 <= 0.0f;
        v20 = (float)(v15 * -0.25f) + 1.0f;
        if (v19) {
          v18 = 0.0f;
        }
        else {
          v18 = v20;
        }
      }
    }
    else {
      v18 = v17 / v14;
    }
    *(float*)(v12 + 204) = v18;
    v21 = *(_DWORD*)(v12 + 124);
    *(float*)(v12 + 236) = *(float*)(v12 + 224) + *v11;
    *(float*)(v12 + 240) = *(v11 - 8);
    if (v21 == 6 && v18 > 0.0f) {
      nn_os_LockMutex(a2 + 112);
      v22 = *(_QWORD*)(v12 + 8LL * *(unsigned int*)(v12 + 124) + 128);
      snd_coef_PeakingEQ_setGain(v22, *(float*)(v12 + 236));
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      nn_os_UnlockMutex(a2 + 112);
    }
    ++v8;
    ++v11;
  } while (v8 != 8);
}

__n128 FxEQNX_152860(__int64 a1, unsigned int a2)
{
  nn_os_LockMutex(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 112LL);
  FxEq_16a840(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), a2);
  return nn_os_UnlockMutex(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 112LL);
}

#pragma GCC visibility pop
