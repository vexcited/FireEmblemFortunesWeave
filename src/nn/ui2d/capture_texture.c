#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DynamicRenderingTexture_Unknown3(_QWORD);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_59e760(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fc380(_QWORD);
__int64 GameRoutine_5fc390(_QWORD);
__int64 GameRoutine_5fc420(_QWORD);
__int64 Pane_58e560(void);
__int64 Pane_58e6c0(void);
float GameRoutine_59fbe0(_QWORD);
void CaptureTexture_5815d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, char a6);
__int64 CaptureTexture_Unknown3(__int64 a1);
__int64 CaptureTexture_Unknown4(__int64 a1, __int64 a2, __int64* a3);
__int64 CaptureTexture_Unknown5(__int64 a1);
__int64 CaptureTexture_Unknown9(__int64 result);
void CaptureTexture_5815d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, char a6)
{
  __int64 v6;
  __int64 v7;
  float v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x2_t v15;
  float v16;
  float v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  float v22;
  __int64 v23;
  int v24;
  int v25;
  _QWORD v26[2];
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD _48[9];

  *(_QWORD*)(a1 + 48) = a3;
  *(_QWORD*)(a1 + 56) = a5;
  if (*(_BYTE*)(a4 + 34) == 1) {
    *(_WORD*)(a1 + 104) |= 1u;
    if (*(_BYTE*)(a4 + 35) != 1) {
    LABEL_3:
      if ((a6 & 1) == 0) {
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
  else if (*(_BYTE*)(a4 + 35) != 1) {
    goto LABEL_3;
  }
  *(_WORD*)(a1 + 104) |= 2u;
  if ((a6 & 1) != 0) {
  LABEL_4:
    *(_WORD*)(a1 + 104) |= 0x10u;
  }

LABEL_5:
  *(_DWORD*)(a1 + 68) = *(unsigned __int16*)(a4 + 32);
  *(_OWORD*)(a1 + 80) = *(_OWORD*)(a4 + 16);
  *(_DWORD*)(a1 + 64) = *(unsigned __int16*)(a4 + 36);
  v10 = GameRoutine_59fbe0(a4);
  v11 = *(_WORD*)(a1 + 104);
  *(float*)(a1 + 40) = v10;
  if ((v11 & 0x12) != 0) {
    v12 = *(_QWORD*)(a1 + 48);
    _48[1] = v7;
    _48[2] = v6;
    _48[3] = _48[7];
    _48[4] = _48[8];
    v13 = *(_QWORD*)(a1 + 56);
    _48[0] = 0;
    v14 = v12;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 96LL))(v13, _48);
    ((uint64_t*)&v15)[0] = *(unsigned __int64*)(a1 + 96);
    v31 = 0;
    v32 = 0;
    v16 = *(float*)_48 * ((float*)&v15)[0];
    v17 = vmuls_lane_f32(*((float*)_48 + 1), v15, 1);
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v26[0] = 0;
    v26[1] = 0;
    if ((int)(float)(*(float*)_48 * ((float*)&v15)[0]) <= 1) {
      v18 = 1;
    }
    else {
      v18 = (int)(float)(*(float*)_48 * ((float*)&v15)[0]);
    }
    if ((int)v17 <= 1) {
      v19 = 1;
    }
    else {
      v19 = (int)v17;
    }
    GameRoutine_5fc420(v26);
    v20 = *(_DWORD*)(a1 + 68);
    v21 = *(_QWORD*)(a1 + 32);
    HIDWORD(v27) = v18;
    LODWORD(v28) = v19;
    HIDWORD(v26[1]) = v20;
    LODWORD(v27) = 163;
    BYTE1(v26[0]) = 2;
    HIWORD(v26[0]) = 1;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 48LL))(v21) & 1) == 0) {
      GameRoutine_59e760(*(_QWORD*)(a1 + 32), a2, v14, v26, 0);
    }
    v22 = *(float*)(a1 + 40);
    v23 = *(_QWORD*)(a1 + 8);
    v24 = (int)(float)(v16 * v22);
    v25 = (int)(float)(v17 * v22);
    if (v24 <= 1) {
      v24 = 1;
    }
    if (v25 <= 1) {
      v25 = 1;
    }
    HIDWORD(v27) = v24;
    LODWORD(v28) = v25;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(v23) & 1) == 0) {
      GameRoutine_59e760(*(_QWORD*)(a1 + 8), a2, v14, v26, 0);
    }
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 212LL) == 0 &&
        *(_DWORD*)(*(_QWORD*)(a1 + 8) + 212LL) == 0) {
      *(_WORD*)(a1 + 104) |= 4u;
    }
  }
}

__int64 CaptureTexture_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 32);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v3 + 8LL))(*(_QWORD*)(a1 + 32));
      GameRoutine_5791a0(v3);
    }
    *(_QWORD*)(a1 + 32) = 0;
  }
  return DynamicRenderingTexture_Unknown3(a1);
}

__int64 CaptureTexture_Unknown4(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  _BYTE* v8;
  _QWORD v10[4];
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[5];

  v3 = *a3;
  v4 = a3[1];
  v13 = 0;
  v14 = 0;
  v11 = 0;
  v12 = nullptr;
  memset(v10, 0, sizeof(v10));
  v15[0] = v3;
  v15[1] = v4;
  v7 = a3[4];
  v15[2] = a3[2];
  v15[4] = v7;
  GameRoutine_5fc390(&v11);
  GameRoutine_5fc380(v10);
  v8 = *(_BYTE**)(a1 + 56);
  v12 = v10;
  v15[3] = &v11;
  LODWORD(v10[0]) = 2817;
  LOBYTE(v11) = 1;
  if ((v8[98] & 2) != 0) {
    return (*(__int64 (**)(_BYTE*, __int64, _QWORD*))(*(_QWORD*)v8 + 184LL))(
        v8, a2, v15);
  }
  else {
    return Pane_58e560();
  }
}

__int64 CaptureTexture_Unknown5(__int64 a1)
{
  _BYTE* v1;

  v1 = *(_BYTE**)(a1 + 56);
  if ((v1[98] & 2) != 0) {
    return (*(__int64 (**)(_BYTE*))(*(_QWORD*)v1 + 200LL))(v1);
  }
  else {
    return Pane_58e6c0();
  }
}

__int64 CaptureTexture_Unknown9(__int64 result)
{
  *(_WORD*)(result + 104) &= ~8u;
  return result;
}

#pragma GCC visibility pop
