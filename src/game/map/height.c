#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_7c41f0(__int64, int, int);
float Height_7c4d10(__int64 a1, float a2, float a3);
_QWORD* game_map_Height_UpdateImpl_lambda0_Invoke(__int64 a1, int* a2, int* a3);

float Height_7c4d10(__int64 a1, float a2, float a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  float v10;
  unsigned int v11;
  float* v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;

  v3 = (int)(float)((float)(a2 + 1280.0f) * 0.2f);
  v4 = (int)(float)((float)(a3 + 1280.0f) * 0.2f);
  if (v3 >= 287) {
    v5 = 287;
  }
  else {
    v5 = (int)(float)((float)(a2 + 1280.0f) * 0.2f);
  }
  v6 = v5 - 256;
  if (v3 < 256) {
    v6 = 0;
  }
  if (v4 >= 287) {
    v7 = 287;
  }
  else {
    v7 = (int)(float)((float)(a3 + 1280.0f) * 0.2f);
  }
  v8 = v7 - 256;
  if (v4 >= 256) {
    v9 = v8;
  }
  else {
    v9 = 0;
  }
  v10 = a2 - (float)((float)v6 * 5.0f);
  v11 = v6 + 32 * v9;
  if (v11 >= 0x400) {
    v11 = 0;
  }
  v12 = (float*)(a1 + 20LL * v11);
  if (v10 <= 5.0f) {
    v13 = v10;
  }
  else {
    v13 = 5.0f;
  }
  if (v10 >= 0.0f) {
    v14 = v13;
  }
  else {
    v14 = 0.0f;
  }
  v15 = a3 - (float)((float)v9 * 5.0f);
  if (v15 <= 5.0f) {
    v16 = v15;
  }
  else {
    v16 = 5.0f;
  }
  if (v15 >= 0.0f) {
    v17 = v16;
  }
  else {
    v17 = 0.0f;
  }
  v18 = v12[4];
  if ((float)(v14 + v17) <= 5.0f) {
    v19 = 1;
  }
  else {
    v19 = 8;
  }
  if ((float)(v14 + v17) <= 5.0f) {
    v20 = 2;
  }
  else {
    v20 = 4;
  }
  if (v17 >= v14) {
    v19 = v20;
  }
  if (v19 > 3) {
    if (v19 == 4) {
      v26 = v12[2];
      v22 = v12[3];
      v29 = v18 + (float)((float)(v22 + v26) * -0.5f);
      v21 = v22 + (float)(v29 * 2.0f);
      v24 = v26 + (float)(v29 * 2.0f);
    }
    else {
      v24 = v12[1];
      v26 = v12[2];
      v27 = v18 + (float)((float)(v24 + v26) * -0.5f);
      v21 = v24 + (float)(v27 * 2.0f);
      v22 = v26 + (float)(v27 * 2.0f);
    }
    v25 = v26;
  }
  else {
    v21 = *v12;
    if (v19 == 1) {
      v24 = v12[1];
      v28 = v18 + (float)((float)(*v12 + v24) * -0.5f);
      v22 = *v12 + (float)(v28 * 2.0f);
      v25 = v24 + (float)(v28 * 2.0f);
    }
    else {
      v22 = v12[3];
      v23 = v18 + (float)((float)(*v12 + v22) * -0.5f);
      v24 = *v12 + (float)(v23 * 2.0f);
      v25 = v22 + (float)(v23 * 2.0f);
    }
  }
  return (float)(v21 + (float)((float)(v14 * (float)(v24 - v21)) / 5.0f)) +
         (float)((float)(v17 *
                         (float)((float)(v22 +
                                         (float)((float)(v14 *
                                                         (float)(v25 - v22)) /
                                                 5.0f)) -
                                 (float)(v21 +
                                         (float)((float)(v14 *
                                                         (float)(v24 - v21)) /
                                                 5.0f)))) /
                 5.0f);
}

_QWORD* game_map_Height_UpdateImpl_lambda0_Invoke(__int64 a1, int* a2, int* a3)
{
  _QWORD* result;

  result = GameRoutine_7c41f0(*(_QWORD*)(a1 + 8), *a2, *a3);
  **(_BYTE**)(a1 + 16) = 1;
  return result;
}

#pragma GCC visibility pop
