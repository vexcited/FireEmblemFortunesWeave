#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* nn_g3d_5f9420_ptr_ptr;
extern __int64 (**nn_g3d_5f8720_ptr_ptr)();
float nn_g3d_5e3dc0(__int64* a1, __int64 a2, float a3);
__int64 nn_g3d_5f8490(_OWORD* a1, float* a2);
__int64 nn_g3d_5faea0(__int64 a1);

float nn_g3d_5e3dc0(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  float v9;
  float result;
  unsigned int v11;
  int v12;
  _BYTE* v13;
  float v14;

  v3 = *a1;
  v4 = (int)a3;
  v5 = *((unsigned __int16*)a1 + 9) - 1LL;
  if (*(unsigned __int8*)(*a1 + v5) <= (unsigned int)(int)a3) {
    *(_DWORD*)(a2 + 8) = (unsigned __int16)(*((_WORD*)a1 + 9) - 1);
    {
      __typeof__(a3) z_ = (__typeof__(a3)){0};
      LOBYTE(z_) = *(_BYTE*)(v3 + (unsigned __int16)v5);
      a3 = z_;
    }
    v9 = (float)LODWORD(a3);
    *(float*)a2 = v9;
    result = v9 + 0x1.0000000000000p+0f;
    *(float*)(a2 + 4) = result;
  }
  else {
    v6 = *(int*)(a2 + 8);
    if (*(unsigned __int8*)(v3 + v6) <= v4) {
      do {
        v11 = *(unsigned __int8*)(v3 + 1 + v6);
        v12 = ++v6;
      } while (v11 <= v4);
      v8 = v12 - 1;
    }
    else {
      do {
        v7 = *(unsigned __int8*)(v3 - 1 + v6);
        v8 = --v6;
      } while (v7 > v4);
    }
    v13 = (_BYTE*)(v3 + v8);
    *(_DWORD*)(a2 + 8) = v8;
    {
      __typeof__(a3) z_ = (__typeof__(a3)){0};
      LOBYTE(z_) = *v13;
      a3 = z_;
    }
    v14 = (float)LODWORD(a3);
    *(float*)a2 = v14;
    {
      __typeof__(v14) z_ = (__typeof__(v14)){0};
      LOBYTE(z_) = v13[1];
      v14 = z_;
    }
    result = (float)LODWORD(v14);
    *(float*)(a2 + 4) = result;
  }
  return result;
}

__int64 nn_g3d_5f8490(_OWORD* a1, float* a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
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
  bool v25;
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
  __int128 v36;

  v2 = (float)(PSEUDO_UNFUSED(a2[8] * 0x1.0000000000000p-1f)) +
       (float)(roundf((float)(a2[8] * 0x1.0000000000000p-1f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v2 < -0x1.921fb60000000p+0f) {
    v3 = -0x1.0000000000000p+0f;
  }
  else {
    v3 = 0x1.0000000000000p+0f;
  }
  v4 = -0x1.921fb60000000p+1f - v2;
  if (v2 >= -0x1.921fb60000000p+0f) {
    v4 = v2;
  }
  if (v2 > 0x1.921fb60000000p+0f) {
    v5 = -0x1.0000000000000p+0f;
  }
  else {
    v5 = v3;
  }
  if (v2 > 0x1.921fb60000000p+0f) {
    v6 = 0x1.921fb60000000p+1f - v2;
  }
  else {
    v6 = v4;
  }
  v7 = *(float*)GameData_212c190;
  v8 = *((float*)GameData_212c190 + 1);
  v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v11 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v12 = *(float*)GameData_212c188;
  v13 = *((float*)GameData_212c188 + 1);
  v14 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v17 = (float)(PSEUDO_UNFUSED(a2[9] * 0x1.0000000000000p-1f)) +
        (float)(roundf((float)(a2[9] * 0x1.0000000000000p-1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v17 < -0x1.921fb60000000p+0f) {
    v18 = -0x1.0000000000000p+0f;
  }
  else {
    v18 = 0x1.0000000000000p+0f;
  }
  v19 = -0x1.921fb60000000p+1f - v17;
  if (v17 >= -0x1.921fb60000000p+0f) {
    v19 = v17;
  }
  if (v17 > 0x1.921fb60000000p+0f) {
    v20 = 0x1.921fb60000000p+1f - v17;
  }
  else {
    v20 = v19;
  }
  if (v17 > 0x1.921fb60000000p+0f) {
    v21 = -0x1.0000000000000p+0f;
  }
  else {
    v21 = v18;
  }
  v22 = (float)(PSEUDO_UNFUSED(a2[10] * 0x1.0000000000000p-1f)) +
        (float)(roundf((float)(a2[10] * 0x1.0000000000000p-1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v22 < -0x1.921fb60000000p+0f) {
    v23 = -0x1.0000000000000p+0f;
  }
  else {
    v23 = 0x1.0000000000000p+0f;
  }
  v24 = -0x1.921fb60000000p+1f - v22;
  if (v22 >= -0x1.921fb60000000p+0f) {
    v24 = v22;
  }
  v25 = v22 <= 0x1.921fb60000000p+0f;
  v26 = v20 * v20;
  v27 = 0x1.921fb60000000p+1f - v22;
  if (v22 > 0x1.921fb60000000p+0f) {
    v28 = -0x1.0000000000000p+0f;
  }
  else {
    v28 = v23;
  }
  if (v25) {
    v29 = v24;
  }
  else {
    v29 = v27;
  }
  v30 =
      v21 *
      (float)((float)((float)-(
                          float)(v14 -
                                 (float)((float)(v16 +
                                                 (float)((float)-(
                                                             float)(v15 -
                                                                    (float)((float)(v13 -
                                                                                    (float)(v12 *
                                                                                            v26)) *
                                                                            v26)) *
                                                         v26)) *
                                         v26)) *
                      v26) +
              0x1.0000000000000p+0f);
  v31 =
      v20 *
      (float)((float)((float)-(
                          float)(v11 -
                                 (float)((float)(v10 +
                                                 (float)((float)-(
                                                             float)(v9 -
                                                                    (float)((float)(v8 -
                                                                                    (float)(v7 *
                                                                                            v26)) *
                                                                            v26)) *
                                                         v26)) *
                                         v26)) *
                      v26) +
              0x1.0000000000000p+0f);
  v32 =
      v5 *
      (float)((float)((float)-(
                          float)(v14 -
                                 (float)((float)(v16 +
                                                 (float)((float)-(
                                                             float)(v15 -
                                                                    (float)((float)(v13 -
                                                                                    (float)(v12 *
                                                                                            (float)(v6 *
                                                                                                    v6))) *
                                                                            (float)(v6 *
                                                                                    v6))) *
                                                         (float)(v6 * v6))) *
                                         (float)(v6 * v6))) *
                      (float)(v6 * v6)) +
              0x1.0000000000000p+0f);
  v33 =
      v6 *
      (float)((float)((float)-(
                          float)(v11 -
                                 (float)((float)(v10 +
                                                 (float)((float)-(
                                                             float)(v9 -
                                                                    (float)((float)(v8 -
                                                                                    (float)(v7 *
                                                                                            (float)(v6 *
                                                                                                    v6))) *
                                                                            (float)(v6 *
                                                                                    v6))) *
                                                         (float)(v6 * v6))) *
                                         (float)(v6 * v6))) *
                      (float)(v6 * v6)) +
              0x1.0000000000000p+0f);
  v34 =
      v29 *
      (float)((float)((float)-(
                          float)(v11 -
                                 (float)((float)(v10 +
                                                 (float)((float)-(
                                                             float)(v9 -
                                                                    (float)((float)(v8 -
                                                                                    (float)(v7 *
                                                                                            (float)(v29 *
                                                                                                    v29))) *
                                                                            (float)(v29 *
                                                                                    v29))) *
                                                         (float)(v29 * v29))) *
                                         (float)(v29 * v29))) *
                      (float)(v29 * v29)) +
              0x1.0000000000000p+0f);
  v35 =
      v28 *
      (float)((float)((float)-(
                          float)(v14 -
                                 (float)((float)(v16 +
                                                 (float)((float)-(
                                                             float)(v15 -
                                                                    (float)((float)(v13 -
                                                                                    (float)(v12 *
                                                                                            (float)(v29 *
                                                                                                    v29))) *
                                                                            (float)(v29 *
                                                                                    v29))) *
                                                         (float)(v29 * v29))) *
                                         (float)(v29 * v29))) *
                      (float)(v29 * v29)) +
              0x1.0000000000000p+0f);
  *(float*)&v36 = (float)((float)(v33 * v30) * v35) -
                  (float)(PSEUDO_UNFUSED(v34 * (float)(v32 * v31)));
  *((float*)&v36 + 1) = (float)(PSEUDO_UNFUSED((float)(v33 * v30) * v34)) +
                        (float)((float)(v32 * v31) * v35);
  *((_QWORD*)&v36 + 1) = __PAIR64__(
      COERCE_UNSIGNED_INT(
          (float)((float)(PSEUDO_UNFUSED((float)(v33 * v31) * v34)) +
                  (float)((float)(v32 * v30) * v35))),
      COERCE_UNSIGNED_INT(
          (float)((float)((float)(v32 * v30) * v34) -
                  (float)(PSEUDO_UNFUSED(v35 * (float)(v33 * v31))))));
  *a1 = v36;
  return 1;
}

__int64 nn_g3d_5faea0(__int64 a1)
{
  bool v1;
  __int64 (**v2)();

  v1 = *(_WORD*)(a1 + 82) == 0xFFFF || *(_QWORD*)(a1 + 88) == 0;
  v2 = (__int64 (**)(void))nn_g3d_5f9420_ptr_ptr;
  if (v1) {
    v2 = nn_g3d_5f8720_ptr_ptr;
  }
  return ((__typeof__(v2[2 * (*(_BYTE*)(a1 + 9) & 3)]()) (*)())
              v2[2 * (*(_BYTE*)(a1 + 9) & 3)])(a1);
}

#pragma GCC visibility pop
