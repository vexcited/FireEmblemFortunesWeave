#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5b4b20(__int64, __int64, __int64);
extern _UNKNOWN* GameData_2135448;
__int64 nn_5b2640(__int64 a1);
__int64 nn_5b3d10(__int64 a1, int a2, __int64 a3);
__int64 nn_5b3d80(__int64 a1, __int64 a2);

__int64 nn_5b2640(__int64 a1)
{
  __int64 result;
  int v3;
  unsigned int v4;
  char* v5;
  __int64 v6;
  float v7;
  float* v8;
  float v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  float v15;
  int v16;

  result = *(_QWORD*)(a1 + 16);
  v3 = *(_DWORD*)(a1 + 64);
  if (v3 >= 1) {
    v4 = 0;
    v5 = (char*)GameData_2135448;
    do {
      v6 = (__int64)(float)((float)((float)((float)v4 * 0x1.921fb60000000p+2f) /
                                    (float)v3) *
                            0x1.45f3060000000p+29f);
      v7 = vcvts_n_f32_u32(v6 & 0xFFFFFF, 0x18u);
      v8 = (float*)&v5[16 * BYTE3(v6)];
      v9 = *v8;
      v10 = v8[1];
      v11 = v8[2];
      v12 = v8[3];
      v13 = *(_DWORD*)(a1 + 24);
      v14 = v9 + (float)(v11 * v7);
      v15 = v10 + (float)(v12 * v7);
      if ((v13 & 1) != 0) {
        *(float*)result = v14;
        *(float*)(result + 4) = v15;
        *(_DWORD*)(result + 8) = 0;
        result += 12;
        v13 = *(_DWORD*)(a1 + 24);
        if ((v13 & 2) == 0) {
        LABEL_6:
          if ((v13 & 4) != 0) {
            goto LABEL_10;
          }
          goto LABEL_3;
        }
      }
      else if ((v13 & 2) == 0) {
        goto LABEL_6;
      }
      *(_QWORD*)result = 0;
      *(_DWORD*)(result + 8) = 1065353216;
      result += 12;
      if ((*(_DWORD*)(a1 + 24) & 4) != 0) {
      LABEL_10:
        *(float*)result =
            (float)(v14 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
        *(float*)(result + 4) = 0x1.0000000000000p+0f -
                                (float)((float)(v15 * 0x1.0000000000000p-1f) +
                                        0x1.0000000000000p-1f);
        result += 8;
      }
    LABEL_3:
      v3 = *(_DWORD*)(a1 + 64);
      ++v4;
    } while ((int)v4 < v3);
  }
  v16 = *(_DWORD*)(a1 + 24);
  if ((v16 & 1) != 0) {
    *(_QWORD*)result = 0;
    *(_DWORD*)(result + 8) = 0;
    result += 12;
    v16 = *(_DWORD*)(a1 + 24);
    if ((v16 & 2) == 0) {
    LABEL_13:
      if ((v16 & 4) == 0) {
        return result;
      }
    LABEL_17:
      *(_QWORD*)result = 0x3F0000003F000000LL;
      result += 8;
      return result;
    }
  }
  else if ((v16 & 2) == 0) {
    goto LABEL_13;
  }
  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = 1065353216;
  result += 12;
  if ((*(_DWORD*)(a1 + 24) & 4) != 0) {
    goto LABEL_17;
  }
  return result;
}

__int64 nn_5b3d10(__int64 a1, int a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v4;

  v3 = (_QWORD*)(a1 + 32LL * a2);
  v4 = *(_QWORD*)(a1 + 1792);
  v3[228] = a3;
  v3[227] = v4;
  v3[225] = GameRoutine_5b4b20(v4, a3, *(_QWORD*)(v4 + 456));
  return 1;
}

__int64 nn_5b3d80(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float* v20;
  float v21;
  float v22;
  __int64 v23;
  int v24;
  int v25;
  float v26;
  __int64 v27;
  __int64 v28;
  float* v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float* v39;
  float v40;
  float v41;
  int v42;
  float v43;
  float v44;
  int v45;
  signed int v46;
  signed int v47;
  int v50;
  float v51;
  float v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;

  v2 = *(_QWORD*)(a1 + 160);
  if (*(_BYTE*)(v2 + 2034) != 0) {
    v3 = *(_DWORD*)(v2 + 2100);
    goto LABEL_92;
  }
  v4 = *(_QWORD*)(a1 + 568);
  v5 = *(float*)(v2 + 2048);
  v6 = *(_QWORD*)(v4 + 696);
  if (v6 != 0) {
    v7 = *(_DWORD*)(v6 + 4);
    if (v7 < 1) {
      goto LABEL_32;
    }
    v8 = v7 & 7;
    if ((unsigned int)v7 < 8) {
      v9 = 0;
      if ((v7 & 7) != 0) {
      LABEL_28:
        v20 = (float*)(v6 + 16 * v9 + 12);
        do {
          v21 = *v20;
          v20 += 4;
          v22 = v21;
          if (v5 < v21) {
            v5 = v22;
          }
          --v8;
        } while (v8 != 0);
      }
    LABEL_32:
      if (v5 < 0x1.0000000000000p+0f) {
        v5 = 0x1.0000000000000p+0f;
      }
      goto LABEL_34;
    }
    v10 = (float*)(v6 + 76);
    v11 = 0;
    v12 = -(__int64)(v7 & 0x7FFFFFF8);
    while (1) {
      v13 = *(v10 - 16);
      if (!(v5 < v13)) {
        v13 = v5;
        v14 = *(v10 - 12);
        if (v13 < v14) {
        LABEL_12:
          v15 = *(v10 - 8);
          if (v14 < v15) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      else {
        v14 = *(v10 - 12);
        if (v13 < v14) {
          goto LABEL_12;
        }
      }
      v14 = v13;
      v15 = *(v10 - 8);
      if (v14 < v15) {
      LABEL_13:
        v16 = *(v10 - 4);
        if (v15 < v16) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v15 = v14;
      v16 = *(v10 - 4);
      if (v15 < v16) {
      LABEL_14:
        v17 = *v10;
        if (v16 < *v10) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v16 = v15;
      v17 = *v10;
      if (v16 < *v10) {
      LABEL_15:
        v18 = v10[4];
        if (v17 < v18) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v17 = v16;
      v18 = v10[4];
      if (v17 < v18) {
      LABEL_16:
        v19 = v10[8];
        if (v18 < v19) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v18 = v17;
      v19 = v10[8];
      if (v18 < v19) {
      LABEL_17:
        v5 = v10[12];
        if (!(v19 < v5)) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v19 = v18;
      v5 = v10[12];
      if (!(v19 < v5)) {
      LABEL_26:
        v5 = v19;
      }
    LABEL_9:
      v11 -= 8;
      v10 += 32;
      if (v12 == v11) {
        v9 = -v11;
        if (v8 != 0) {
          goto LABEL_28;
        }
        goto LABEL_32;
      }
    }
  }
LABEL_34:
  v23 = *(_QWORD*)(v4 + 704);
  v24 = *(_DWORD*)(v2 + 2232);
  if (v23 == 0) {
    goto LABEL_64;
  }
  v25 = *(_DWORD*)(v23 + 4);
  v26 = (float)v24;
  if (v25 < 1) {
    goto LABEL_63;
  }
  v27 = v25 & 7;
  if ((unsigned int)v25 >= 8) {
    v29 = (float*)(v23 + 76);
    v30 = 0;
    v31 = -(__int64)(v25 & 0x7FFFFFF8);
    while (1) {
      v32 = *(v29 - 16);
      if (!(v26 < v32)) {
        v32 = v26;
        v33 = *(v29 - 12);
        if (v32 < v33) {
        LABEL_43:
          v34 = *(v29 - 8);
          if (v33 < v34) {
            goto LABEL_44;
          }
          goto LABEL_52;
        }
      }
      else {
        v33 = *(v29 - 12);
        if (v32 < v33) {
          goto LABEL_43;
        }
      }
      v33 = v32;
      v34 = *(v29 - 8);
      if (v33 < v34) {
      LABEL_44:
        v35 = *(v29 - 4);
        if (v34 < v35) {
          goto LABEL_45;
        }
        goto LABEL_53;
      }
    LABEL_52:
      v34 = v33;
      v35 = *(v29 - 4);
      if (v34 < v35) {
      LABEL_45:
        v36 = *v29;
        if (v35 < *v29) {
          goto LABEL_46;
        }
        goto LABEL_54;
      }
    LABEL_53:
      v35 = v34;
      v36 = *v29;
      if (v35 < *v29) {
      LABEL_46:
        v37 = v29[4];
        if (v36 < v37) {
          goto LABEL_47;
        }
        goto LABEL_55;
      }
    LABEL_54:
      v36 = v35;
      v37 = v29[4];
      if (v36 < v37) {
      LABEL_47:
        v38 = v29[8];
        if (v37 < v38) {
          goto LABEL_48;
        }
        goto LABEL_56;
      }
    LABEL_55:
      v37 = v36;
      v38 = v29[8];
      if (v37 < v38) {
      LABEL_48:
        v26 = v29[12];
        if (!(v38 < v26)) {
          goto LABEL_57;
        }
        goto LABEL_40;
      }
    LABEL_56:
      v38 = v37;
      v26 = v29[12];
      if (!(v38 < v26)) {
      LABEL_57:
        v26 = v38;
      }
    LABEL_40:
      v30 -= 8;
      v29 += 32;
      if (v31 == v30) {
        v28 = -v30;
        if (v27 != 0) {
          goto LABEL_59;
        }
        goto LABEL_63;
      }
    }
  }
  v28 = 0;
  if ((v25 & 7) != 0) {
  LABEL_59:
    v39 = (float*)(v23 + 16 * v28 + 12);
    do {
      v40 = *v39;
      v39 += 4;
      v41 = v40;
      if (v26 < v40) {
        v26 = v41;
      }
      --v27;
    } while (v27 != 0);
  }
LABEL_63:
  v24 = (int)v26;
LABEL_64:
  v42 = *(_DWORD*)(v2 + 2044);
  v43 = (float)v42;
  if (v42 == 0) {
    v43 = 0x1.0000000000000p+0f;
  }
  v44 = (float)(*(_DWORD*)(v2 + 2056) + 1);
  v45 = *(unsigned __int8*)(v2 + 1874);
  v46 = vcvtps_s32_f32(v43 / v44);
  v47 = vcvtps_s32_f32((float)v24 / v44);
  if (v46 >= v47 && *(_BYTE*)(v2 + 2216) == 0 || *(_BYTE*)(v2 + 2032) == 0) {
    v50 = v47;
  }
  else {
    v50 = v46;
  }
  v51 = v5 * (float)v50;
  v52 = ceilf(v5);
  v3 = (int)(float)(v52 + ceilf(v51));
  if (*(_DWORD*)(v2 + 2164) != 0) {
    if (*(_BYTE*)(v2 + 2032) == 0 && v45 == 2) {
      v53 = (int)v52;
    LABEL_91:
      v3 += v53;
      goto LABEL_92;
    }
    goto LABEL_92;
  }
  v54 = *(unsigned __int8*)(v2 + 2104);
  if (v54 == 2) {
    v55 = 2176;
    goto LABEL_83;
  }
  if (v54 == 13) {
    v55 = 2184;
  LABEL_83:
    v3 *= *(_DWORD*)(v2 + v55);
  }
  if (*(_BYTE*)(v2 + 2032) == 0 && v45 == 2) {
    v53 = (int)v52;
    if (v54 == 13) {
      v56 = *(_DWORD*)(v2 + 2184);
    }
    else {
      if (v54 != 2) {
        goto LABEL_91;
      }
      v56 = *(_DWORD*)(v2 + 2176);
    }
    v53 *= v56;
    goto LABEL_91;
  }
LABEL_92:
  if (*(_BYTE*)a1 != 0 && *(_BYTE*)(v2 + 2020) == 0) {
    return *(_DWORD*)(a2 + 560) * v3;
  }
  else {
    return v3;
  }
}

#pragma GCC visibility pop
