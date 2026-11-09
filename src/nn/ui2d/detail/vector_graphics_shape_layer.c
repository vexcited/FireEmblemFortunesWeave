#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_578940(_QWORD, _QWORD);
__int64 GameRoutine_59f870(__int64, unsigned int, __int64);
__int64 GameRoutine_5a0010(__int64, __int64, __int64, int);
__int64 GameRoutine_5ac4e0(__int64 result, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_5fcbc0(_QWORD, _QWORD);
__int64 GameRoutine_5fcd30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fd220(_QWORD, _QWORD);
__int64 GameRoutine_5fd2e0(_QWORD, _QWORD);
__int64 GameRoutine_5fd5f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fdb80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5fe0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
float acosf(float);
void GameRoutine_5a3500(__int64, float);
__int64 VectorGraphicsShapeLayer_Unknown3(__int64 a1, __int64 a2);
__int64 VectorGraphicsShapeLayer_Unknown8(__int64 a1, __int64 a2);
__int64 VectorGraphicsShapeLayer_5a9d80(__int64 result, _DWORD* a2, int* a3,
                                        _DWORD* a4, int* a5);
void VectorGraphicsShapeLayer_5ab480(__int64 a1, __int64 a2, float a3);
__int64 VectorGraphicsShapeLayer_5ac140(__int64 a1, _QWORD* a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6);
__int64 VectorGraphicsShapeLayer_5ac310(__int64 a1, _QWORD* a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6);
__int64* VectorGraphicsShapeLayer_5ac6c0(__int64 a1, _QWORD* a2, __int64 a3,
                                         __int64 a4);
__int64 VectorGraphicsShapeLayer_Unknown11(__int64 a1, _QWORD* a2, __int64 a3,
                                           __int64 a4);

__int64 VectorGraphicsShapeLayer_Unknown3(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int16* v7;
  unsigned __int16 v8;
  unsigned __int64 v9;
  __int64 v10;
  void (***v11)(_QWORD);
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (*(_QWORD*)(a1 + 168) != 0) {
    if (*(_DWORD*)(a1 + 192) != 0) {
      v4 = 0;
      do {
        v5 = *(_QWORD*)(a1 + 160);
        v6 = (_QWORD*)(*(_QWORD*)(a1 + 168) + 48 * v4);
        if (v6[2] != 0) {
          v6[2] = 0;
        }
        if (v6[1] != 0) {
          v6[1] = 0;
        }
        if (v6[5] != 0) {
          v6[5] = 0;
        }
        v7 = (unsigned __int16*)(v5 + 160 * v4);
        v8 = *v7;
        if (*v7 != 0) {
          v9 = 0;
          do {
            v10 = *(_QWORD*)(v6[3] + 8 * v9);
            if (v10 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
              v11 = *(void (****)(_QWORD))(v6[3] + 8 * v9);
              (**v11)(v11);
              v8 = *v7;
            }
            ++v9;
          } while (v9 < v8);
        }
        ++v4;
      } while (v4 < *(unsigned int*)(a1 + 192));
    }
    *(_QWORD*)(a1 + 168) = 0;
  }
  if (*(int*)(a1 + 80) >= 1) {
    v12 = 8;
    v13 = 0;
    do {
      (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 88) + v12) + 24LL))(
          *(_QWORD*)(*(_QWORD*)(a1 + 88) + v12));
      (***(void (****)(_QWORD))(*(_QWORD*)(a1 + 88) + v12))(
          *(_QWORD*)(*(_QWORD*)(a1 + 88) + v12));
      ++v13;
      v12 += 40;
    } while (v13 < *(int*)(a1 + 80));
    *(_QWORD*)(a1 + 88) = 0;
    *(_QWORD*)(a1 + 96) = 0;
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 24LL))(
        result, a2);
    *(_QWORD*)(a1 + 64) = 0;
  }
  *(_QWORD*)(a1 + 32) = 0;
  v15 = a1 + 144;
  v16 = *(_QWORD*)(a1 + 152);
  if (v16 != v15) {
    do {
      v18 = *(_QWORD*)(v16 - 8);
      v17 = v16 - 8;
      v19 = *(_QWORD*)(v17 + 16);
      (*(void (**)(__int64, __int64))(v18 + 24))(v17, a2);
      result = (**(__int64 (***)(__int64))v17)(v17);
      v16 = v19;
    } while (v19 != v15);
  }
  return result;
}

__int64 VectorGraphicsShapeLayer_Unknown8(__int64 a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int16 v9;
  unsigned __int16* v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;

  if (*(int*)(a1 + 80) < 1) {
    v5 = 0;
    if (*(_DWORD*)(a1 + 192) == 0) {
      return v5;
    }
  }
  else {
    v4 = 0;
    v5 = 0;
    do {
      v6 = GameRoutine_59f870(a2, 0x10u, 64) + v5;
      v5 = v6 + GameRoutine_59f870(a2, 0x10u, 16);
      ++v4;
    } while (v4 < *(_DWORD*)(a1 + 80));
    if (*(_DWORD*)(a1 + 192) == 0) {
      return v5;
    }
  }
  v7 = 0;
  do {
    v8 = *(_QWORD*)(a1 + 160) + 160 * v7;
    v5 += GameRoutine_59f870(a2, 0x10u, 64);
    v11 = *(unsigned __int16*)(v8 + 16);
    v10 = (unsigned __int16*)(v8 + 16);
    v9 = v11;
    if (v11 != 0) {
      v12 = 0;
      do {
        if (**(unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 160 * v7 +
                                             24) +
                                  8 * v12) <= 1u) {
          v13 = GameRoutine_59f870(a2, 0x10u, 16);
          v9 = *v10;
          v5 += v13;
        }
        ++v12;
      } while (v12 < v9);
    }
    ++v7;
  } while (v7 < *(unsigned int*)(a1 + 192));
  return v5;
}

__int64 VectorGraphicsShapeLayer_5a9d80(__int64 result, _DWORD* a2, int* a3,
                                        _DWORD* a4, int* a5)
{
  unsigned int v5;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned __int16* v11;
  bool v12;
  unsigned int v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int16* v23;
  unsigned int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int16* v35;
  unsigned __int16 v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  unsigned __int64 v45;
  unsigned int v46;
  int* v47;
  int v48;
  __int64 v49;
  unsigned int v50;
  unsigned __int64 v53;

  v5 = *(_DWORD*)(result + 192);
  if (v5 != 0) {
    v8 = result;
    v9 = 0;
    do {
      v10 = v9;
      v11 = (unsigned __int16*)(*(_QWORD*)(v8 + 160) + 160LL * v9);
      v12 = *v11 == 0 || v11[8] == 0;
      if (v12 || *(float*)(v8 + 24) <= 0.0) {
        goto LABEL_4;
      }
      v13 = v9;
      v14 = 0;
      v50 = v9;
      do {
        v15 = *(_QWORD*)(*((_QWORD*)v11 + 1) + 8 * v14);
        if (*(_WORD*)(v15 + 4) == 0 || (*(_BYTE*)(v15 + 1) & 1) != 0) {
          goto LABEL_11;
        }
        v53 = v14;
        v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 168) + 48LL * v13 + 24) +
                         8 * v14);
        v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
        if (v18 != 0) {
          v19 = 0;
          while (1) {
            v20 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v17 + 64LL))(v17,
                                                                           v19);
            v21 = *(unsigned __int16*)(v15 + 2);
            v22 = *(_QWORD*)(v8 + 160) + 160LL * (int)v13;
            v24 = *(unsigned __int16*)(v22 + 16);
            v23 = (unsigned __int16*)(v22 + 16);
            if ((unsigned int)v21 < v24) {
              break;
            }
          LABEL_19:
            if (++v19 == v18) {
              goto LABEL_29;
            }
          }
          v25 = 16 * v21;
          v26 = 2 * v20 + 2;
          while (1) {
            v29 = *(_QWORD*)(*(_QWORD*)(v8 + 168) + 48LL * (int)v13 + 16) + v25;
            v30 = *(_QWORD*)(v29 + 8);
            if (v30 != 0) {
              v31 = *(_DWORD*)(v29 + 4);
              *a4 += v26;
              *a5 += v26;
              v32 = *(_DWORD*)(v30 + 8);
              if (v32 == 1) {
                v27 = v31 + 2;
                *a4 += v27;
                v28 = *a5 + 2 * v27 + 4;
              }
              else {
                if (v32 != 0) {
                  goto LABEL_24;
                }
                *a4 += 8;
                v28 = *a5 + 14;
              }
              *a5 = v28;
            }
          LABEL_24:
            ++v21;
            v25 += 16;
            if (v21 >= *v23) {
              goto LABEL_19;
            }
          }
        }
      LABEL_29:
        v14 = v53;
        if (v53 == 0) {
          v33 = *(unsigned __int16*)(v15 + 2);
          v34 = *(_QWORD*)(v8 + 160) + 160LL * (int)v13;
          v37 = *(unsigned __int16*)(v34 + 16);
          v35 = (unsigned __int16*)(v34 + 16);
          v36 = v37;
          if ((unsigned int)v33 < v37) {
            v38 = 16 * v33;
            do {
              v40 =
                  *(_QWORD*)(*(_QWORD*)(v8 + 168) + 48LL * (int)v13 + 16) + v38;
              v41 = *(_QWORD*)(v40 + 8);
              if (v41 != 0) {
                v42 = *(_DWORD*)(v41 + 4);
                if (v42 == 2) {
                  *a4 += 4;
                  v39 = 4;
                }
                else {
                  if (v42 != 1) {
                    goto LABEL_34;
                  }
                  v43 = 2 * *(_DWORD*)(v40 + 4) + 4;
                  v44 = *a4 + v43;
                  v39 = 2 * v43;
                  *a4 = v44;
                }
                *a5 += v39;
                v36 = *v35;
              }
            LABEL_34:
              ++v33;
              v38 += 16;
            } while (v33 < v36);
          }
        }
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 72LL))(v17);
        *a2 += result;
        v45 = *(unsigned __int16*)(v15 + 2);
        v46 = v11[8];
        if ((unsigned int)v45 >= v46) {
          goto LABEL_11;
        }
        if (v18 > 1) {
          while (1) {
            v47 = a3;
            v48 = 3 * result;
            v49 = *(_QWORD*)(*((_QWORD*)v11 + 3) + 8 * v45);
            if (*(_BYTE*)v49 != 0) {
              if (*(_BYTE*)v49 != 1 || *(_DWORD*)(v49 + 8) == 0) {
                goto LABEL_46;
              }
              v48 = 2;
              v47 = a5;
            }
            *v47 += v48;
          LABEL_46:
            if (++v45 >= v11[8]) {
              goto LABEL_11;
            }
          }
        }
        do {
          if (**(_BYTE**)(*((_QWORD*)v11 + 3) + 8 * v45) == 0) {
            *a3 += 3 * result;
            LOWORD(v46) = v11[8];
          }
          ++v45;
        } while (v45 < (unsigned __int16)v46);
      LABEL_11:
        ++v14;
      } while (v14 < *v11);
      v5 = *(_DWORD*)(v8 + 192);
      v10 = v50;
    LABEL_4:
      v9 = v10 + 1;
    } while (v10 + 1 < v5);
  }
  return result;
}

void VectorGraphicsShapeLayer_5ab480(__int64 a1, __int64 a2, float a3)
{
  __int64 v6;
  unsigned __int16* v7;
  __int64 v8;
  unsigned __int16 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int16 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  float* v19;
  float v20;
  float v21;
  float* v22;
  float* v23;
  __int64 v24;
  float* v25;
  float v26;
  char v28;
  float* v29;
  float* v30;
  float v31;
  float v32;
  float v33;
  float v34;

  if (*(_DWORD*)(a1 + 192) != 0) {
    v6 = 0;
    while (1) {
      v7 = (unsigned __int16*)(*(_QWORD*)(a1 + 160) + 160 * v6);
      v8 = *(_QWORD*)(a1 + 168) + 48 * v6;
      v9 = *v7;
      if (*v7 != 0) {
        v10 = 0;
        do {
          v11 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 8 * v10);
          if (v11 != 0) {
            (*(void (**)(__int64, __int64, float))(*(_QWORD*)v11 + 40LL))(
                v11, a2, a3);
            v9 = *v7;
          }
          ++v10;
        } while (v10 < v9);
      }
      v12 = v7[8];
      if (v12 != 0) {
        break;
      }
    LABEL_3:
      if (++v6 >= (unsigned __int64)*(unsigned int*)(a1 + 192)) {
        return;
      }
    }
    v13 = 0;
    while (1) {
      v15 = *(_QWORD*)(v8 + 16) + 16 * v13;
      v16 = *(_QWORD*)(v15 + 8);
      if (v16 != 0) {
        break;
      }
    LABEL_13:
      if (++v13 >= (unsigned __int64)v12) {
        goto LABEL_3;
      }
    }
    v17 = *(unsigned __int16*)(v16 + 16);
    if (v17 <= 1) {
      v18 = *(float*)(v16 + 24);
    LABEL_38:
      v33 = v18 * 0.5f;
      *(float*)v15 = v33;
      v34 = acosf((float)(-2.0f / v33) + 1.0f);
      if (v34 > 0.0f) {
        v14 = (int)(float)(3.1416f / v34) + 1;
      }
      else {
        v14 = 1;
      }
      *(_DWORD*)(v15 + 4) = v14;
      v12 = v7[8];
      goto LABEL_13;
    }
    v19 = *(float**)(v16 + 24);
    v20 = 0.0f;
    v21 = *v19;
    if (a3 > *v19) {
      v22 = &v19[8 * v17];
      v23 = v22 - 8;
      if (a3 < *(v22 - 8)) {
        v24 = (unsigned int)(v17 - 1);
        v25 = &v19[8 * (unsigned int)(v17 - 2)];
        do {
          v26 = v19[8];
          if (a3 >= v21 && a3 < v26) {
            v31 = (float)(a3 - v21) / (float)(v26 - v21);
            if (v31 < 0.0f) {
              v31 = 0.0f;
            }
            if (v31 > 1.0f) {
              v31 = 1.0f;
            }
            GameRoutine_5a3500((__int64)v19, v31);
            v20 = (float)(v32 * (float)(v32 * v32)) +
                  (float)((float)(v19[2] *
                                  (float)((float)(1.0f - v32) *
                                          (float)(v32 * (float)(v32 * 3.0f)))) +
                          (float)(v19[4] *
                                  (float)((float)(1.0f - v32) *
                                          (float)((float)(v32 * 3.0f) *
                                                  (float)(1.0f - v32)))));
            goto LABEL_37;
          }
          v21 = v19[8];
          v19 += 8;
          --v24;
        } while (v24 != 0);
        v20 = 0.0f;
        v19 = v25;
        if (v25 != nullptr) {
          goto LABEL_37;
        }
        goto LABEL_31;
      }
      v28 = *((_BYTE*)v22 - 4);
      v29 = v22 - 16;
      v20 = 1.0f;
      if ((v28 & 1) != 0) {
        v30 = v23;
      }
      else {
        v30 = v29;
      }
      v19 = v30;
      if (v30 == nullptr) {
      LABEL_31:
        v18 = 0.0f;
        goto LABEL_38;
      }
    }
  LABEL_37:
    v18 = v19[5] + (float)((float)(v19[6] - v19[5]) * v20);
    goto LABEL_38;
  }
}

__int64 VectorGraphicsShapeLayer_5ac140(__int64 a1, _QWORD* a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6)
{
  int v6;
  __int64 v7;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v6 = *(_DWORD*)(a3 + 208);
  v33 = 0;
  v34 = 0;
  v7 = *(_QWORD*)(a1 + 216);
  v14 = v6 & ~(v6 >> 31);
  v15 = *(int*)(a1 + 204);
  GameRoutine_5fcbc0(*(_QWORD*)(a2[25] + 8LL) + 72LL * *(int*)(a2[25] + 48LL),
                     &v33);
  v33 += v7;
  GameRoutine_5fd5f0(a4, 0, &v33, 8, 8 * v15);
  v16 = *(_QWORD*)(a6 + 16);
  v17 = 24LL * v14;
  v18 = *(unsigned int*)(a3 + v17 + 92);
  if ((v18 & 0x80000000) == 0) {
    v19 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
    v21 = *v19;
    v20 = v19[1];
    v33 = v21 + a5;
    v34 = v20;
    GameRoutine_5fe120(a4, v18, 0, &v33, 64);
  }
  v22 = *(unsigned int*)(a3 + v17 + 96);
  if ((v22 & 0x80000000) == 0) {
    v23 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
    v25 = *v23;
    v24 = v23[1];
    v33 = v25 + v16;
    v34 = v24;
    GameRoutine_5fe120(a4, v22, 4, &v33, 16);
  }
  GameRoutine_5fd2e0(a4, a2[23] + 1012LL);
  v26 = GameRoutine_577d40(a2[23], 0);
  GameRoutine_5fd220(a4, v26);
  v27 = *(_DWORD*)(a6 + 4);
  v28 = *(_DWORD*)(a6 + 8);
  v29 = *(_QWORD*)(a1 + 224) + 4LL * v27;
  v30 = a2[25];
  v33 = 0;
  v34 = 0;
  GameRoutine_5fcbc0(*(_QWORD*)(v30 + 8) + 72LL * *(int*)(v30 + 48), &v33);
  v33 += v29;
  result = GameRoutine_5fcd30(a4, 3, 2, &v33, v28, 0);
  v32 = a2[43];
  if (v32 != 0) {
    return GameRoutine_5fd2e0(a4, v32);
  }
  return result;
}

__int64 VectorGraphicsShapeLayer_5ac310(__int64 a1, _QWORD* a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6)
{
  int v6;
  __int64 v7;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v6 = *(_DWORD*)(a3 + 208);
  v33 = 0;
  v34 = 0;
  v7 = *(_QWORD*)(a1 + 216);
  v14 = v6 & ~(v6 >> 31);
  v15 = *(int*)(a1 + 204);
  GameRoutine_5fcbc0(*(_QWORD*)(a2[25] + 8LL) + 72LL * *(int*)(a2[25] + 48LL),
                     &v33);
  v33 += v7;
  GameRoutine_5fd5f0(a4, 0, &v33, 8, 8 * v15);
  v16 = *(_QWORD*)(a6 + 16);
  v17 = 24LL * v14;
  v18 = *(unsigned int*)(a3 + v17 + 92);
  if ((v18 & 0x80000000) == 0) {
    v19 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
    v21 = *v19;
    v20 = v19[1];
    v33 = v21 + a5;
    v34 = v20;
    GameRoutine_5fe120(a4, v18, 0, &v33, 64);
  }
  v22 = *(unsigned int*)(a3 + v17 + 96);
  if ((v22 & 0x80000000) == 0) {
    v23 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
    v25 = *v23;
    v24 = v23[1];
    v33 = v25 + v16;
    v34 = v24;
    GameRoutine_5fe120(a4, v22, 4, &v33, 16);
  }
  GameRoutine_5fd2e0(a4, a2[23] + 984LL);
  v26 = GameRoutine_577d40(a2[23], 1);
  GameRoutine_5fd220(a4, v26);
  v27 = *(_DWORD*)(a6 + 4);
  v28 = *(_DWORD*)(a6 + 8);
  v29 = *(_QWORD*)(a1 + 224) + 4LL * v27;
  v30 = a2[25];
  v33 = 0;
  v34 = 0;
  GameRoutine_5fcbc0(*(_QWORD*)(v30 + 8) + 72LL * *(int*)(v30 + 48), &v33);
  v33 += v29;
  result = GameRoutine_5fcd30(a4, 3, 2, &v33, v28, 0);
  v32 = a2[43];
  if (v32 != 0) {
    return GameRoutine_5fd2e0(a4, v32);
  }
  return result;
}

__int64* VectorGraphicsShapeLayer_5ac6c0(__int64 a1, _QWORD* a2, __int64 a3,
                                         __int64 a4)
{
  unsigned int v8;
  __int64* result;
  __int64 v10;
  __int64* v11;
  unsigned int* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int16* v18;
  int v19;
  int v20;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  __int64 (*v26)(_QWORD*, __int64, _QWORD);
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v8 = *(_DWORD*)(a3 + 208) & ~(*(int*)(a3 + 208) >> 31);
  GameRoutine_5a0010((__int64)a2, a4, *(_QWORD*)(a3 + 64),
                     *(_DWORD*)(a3 + 24LL * v8 + 88));
  result = (__int64*)GameRoutine_578940(a2[23], 0);
  v10 = *(unsigned int*)(a3 + 208);
  v36 = *result;
  if ((int)v10 >= 1) {
    v11 = (__int64*)(a3 + 184);
    v12 = (unsigned int*)(a3 + 24LL * v8 + 100);
    do {
      v14 = *v12++;
      v13 = v14;
      v15 = *v11++;
      result = (__int64*)GameRoutine_5fe0a0(a4, v13, 4, v15, &v36);
      --v10;
    } while (v10 != 0);
  }
  v16 = *(unsigned int*)(a1 + 192);
  if ((_DWORD)v16 != 0) {
    v17 = 0;
    while (1) {
      v18 = (unsigned __int16*)(*(_QWORD*)(a1 + 160) + 160 * v17);
      v19 = *v18;
      v20 = v18[8];
      if (v19 != 0 && v20 != 0 && *(float*)(a1 + 24) > 0.0) {
        v22 = *(_QWORD*)(a1 + 168);
        v23 = *(_DWORD*)(v22 + 48 * v17 + 36);
        if (v23 != 0) {
          break;
        }
      }
    LABEL_7:
      if (++v17 >= v16) {
        return result;
      }
    }
    v24 = 0;
    while (1) {
      v25 = *(_QWORD*)(v22 + 48 * v17 + 40);
      v26 = *(__int64 (**)(_QWORD*, __int64, _QWORD))(a3 + 72);
      if (v26 != nullptr) {
        result = (__int64*)v26(a2, a4, *(_QWORD*)(a3 + 80));
        v27 = v25 + 24LL * (int)(v23 + ~v24);
        v28 = *(_DWORD*)v27;
        if (*(_DWORD*)v27 != 1) {
          goto LABEL_19;
        }
      }
      else {
        (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a4);
        GameRoutine_5fdb80(a4, a2[42], 0, 2, 0, 1.0);
        result =
            (__int64*)(*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, a4);
        v27 = v25 + 24LL * (int)(v23 + ~v24);
        v28 = *(_DWORD*)v27;
        if (*(_DWORD*)v27 != 1) {
        LABEL_19:
          if (v28 == 0) {
            v29 = *(_QWORD*)(a1 + 168);
            v30 = v29 + 48 * v17;
            if (*(_DWORD*)(v30 + 36) != 0) {
              v31 = 16;
              v32 = 0;
              do {
                if (*(_DWORD*)v27 == 0) {
                  v33 = (__int64*)(*(_QWORD*)(v30 + 40) + v31);
                  v35 = *v33;
                  v34 = (__int64)(v33 - 2);
                  if (v35 == *(_QWORD*)(v27 + 16)) {
                    VectorGraphicsShapeLayer_5ac310(a1, a2, a3, a4,
                                                    *(_QWORD*)v30, v34);
                    v29 = *(_QWORD*)(a1 + 168);
                  }
                }
                v30 = v29 + 48 * v17;
                ++v32;
                v31 += 24;
              } while (v32 < *(unsigned int*)(v30 + 36));
            }
            result = (__int64*)VectorGraphicsShapeLayer_5ac140(
                a1, a2, a3, a4, *(_QWORD*)v30, v27);
          }
          goto LABEL_16;
        }
      }
      result = (__int64*)GameRoutine_5ac4e0(
          a1, (__int64)a2, a3, a4, *(_QWORD*)(*(_QWORD*)(a1 + 168) + 48 * v17),
          v27);
    LABEL_16:
      v22 = *(_QWORD*)(a1 + 168);
      ++v24;
      v23 = *(_DWORD*)(v22 + 48 * v17 + 36);
      if (v24 >= v23) {
        v16 = *(unsigned int*)(a1 + 192);
        goto LABEL_7;
      }
    }
  }
  return result;
}

__int64 VectorGraphicsShapeLayer_Unknown11(__int64 a1, _QWORD* a2, __int64 a3,
                                           __int64 a4)
{
  if (*(_BYTE*)(a1 + 28) == 1 &&
      (*(int*)(a1 + 204) > 0 || *(_DWORD*)(a1 + 232) >= 1)) {
    return (__int64)VectorGraphicsShapeLayer_5ac6c0(a1, a2, a3, a4);
  }
  return a1;
}

#pragma GCC visibility pop
