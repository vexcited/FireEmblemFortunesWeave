#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN* CudaDriverData_14225e0;
__int64 CudaDriverRoutine_102e00(_QWORD);
__int64 CudaDriverRoutine_105ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, long double, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_105c00(_QWORD, long double);
__n128 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_10dd50(_QWORD);
__int64 CudaDriverRoutine_10e060(_QWORD);
__int64 CudaDriverRoutine_1128f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_11cce0(_QWORD);
__int64 CudaDriverRoutine_11e860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_11f070(_QWORD, float, float);
__int64 CudaDriverRoutine_121c60(_QWORD);
__int64 CudaDriverRoutine_121e20(_QWORD);
__int64 CudaDriverRoutine_1223e0(_QWORD);
__int64 CudaDriverRoutine_1272d0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1274c0(_QWORD);
__int64 CudaDriverRoutine_1275c0(_QWORD);
__int64 CudaDriverRoutine_127670(_QWORD);
__int64 CudaDriverRoutine_12e330(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_1da1b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1db190(_QWORD);
__int64 CudaDriverRoutine_1db800(_QWORD);
__int64 CudaDriverRoutine_1dbc20(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbe40(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_205ee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 long double);
__int64 CudaDriverRoutine_20b420(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_40();
__int64 CudaDriverRoutine_54460(_QWORD);
__int64 CudaDriverRoutine_54690(_QWORD);
__int64 CudaDriverRoutine_54710(_QWORD, _QWORD);
__int64 CudaDriverRoutine_547e0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_548d0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_54930(__int64);
__int64 CudaDriverRoutine_55610(_QWORD, _QWORD);
__int64 CudaDriverRoutine_55e00(_QWORD, long double);
__int64 CudaDriverRoutine_57450(_QWORD);
__int64 CudaDriverRoutine_57800(_QWORD, _QWORD, _QWORD, long double);
__int64 CudaDriverRoutine_57b40(_QWORD, _QWORD, _QWORD, long double);
__int64 CudaDriverRoutine_59a40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_5c030(_QWORD);
__int64 CudaDriverRoutine_97e80(_QWORD);
__int64 CudaDriverRoutine_98190(_QWORD, _QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_9ab50(_QWORD);
__int64 CudaDriverRoutine_9bd90(_QWORD);
__int64 CudaDriverRoutine_9bed0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_9e5f0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_b9300(_QWORD);
__int64 CudaDriverRoutine_ded50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_deeb0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_df060(_QWORD);
__int64 CudaDriverRoutine_df240(_QWORD);
__int64 CudaDriverRoutine_e3160(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD);
__int64 CudaDriverRoutine_e58b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD);
__int64 CudaDriverRoutine_ee000(_QWORD);
__int64 CudaDriverRoutine_ee2a0(_QWORD);
__int64 CudaDriverRoutine_ee330(_QWORD);
__int64 CudaDriverRoutine_ef110(_QWORD, _QWORD);

__int64 CudaDriverHr_4b5f0(__int64 a1, float a2, float a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;

  v8 = 0;
  v7 = 0;
  result = CudaDriverRoutine_121c60(&v8);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_11e860(v8, &v7, a1, 0);
    if ((_DWORD)result == 0) {
      CudaDriverRoutine_108520(v7 + 24, 0, 0, 0);
      CudaDriverRoutine_11f070(a1, a2, a3);
      CudaDriverRoutine_1085d0(v7 + 24);
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_50830(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;

  if (a1 != 0) {
    v2 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_108520(v2 + 24, 0, 0, 0);
    v3 = *(_QWORD*)(a1 + 16448);
    v4 = *(unsigned __int8*)(v3 + 160);
    v5 = *(_DWORD*)(v3 + 164) - 1;
    *(_DWORD*)(v3 + 164) = v5;
    if (v4 != 0) {
      if (v5 == 0) {
        CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 16));
        *(_QWORD*)(v3 + 16) = 0;
        CudaDriverRoutine_57450(v3);
        CudaDriverRoutine_12e340(v3);
        *(_QWORD*)(a1 + 16448) = 0;
        *(_BYTE*)(a1 + 16216) &= ~2u;
      }
      v6 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_1085d0(v6 + 24);
    }
    else {
      v7 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_1085d0(v7 + 24);
      CudaDriverRoutine_9bd90(a1);
      CudaDriverRoutine_57450(v3);
      CudaDriverRoutine_12e340(v3);
    }
  }
  return 0;
}

__int64 CudaDriverHr_509a0(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v5;
  __int64 i;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int128 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a1 == 0) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 24);
  v3 = CudaDriverRoutine_deeb0(v1, 0);
  if (v3 != 0) {
    return (v3 << 16) | 0xFFFFu;
  }
  v5 = *(_QWORD*)(v1 + 16448);
  if (*(_QWORD*)(*(_QWORD*)(v5 + 24) + 56LL) != 0) {
    for (i = *(_QWORD*)(a1 + 224); i != 0; i = *(_QWORD*)(i + 1144)) {
      v7 = *(_OWORD*)(v5 + 8);
      v8 = *(_QWORD*)(i + 96);
      v13 = *(_QWORD*)(i + 32);
      v12 = v7;
      v14 = *(_QWORD*)(i + 8);
      v9 = CudaDriverRoutine_1db800(v8);
      v10 = *(_QWORD*)(i + 104);
      v15 = v9;
      v16 = v10;
      v17 = *(unsigned int*)(i + 64);
      (*(void (**)(__int128*))(*(_QWORD*)(v5 + 24) + 56LL))(&v12);
    }
  }
  *(__n128*)&v11 = CudaDriverRoutine_108520(v1 + 24, 0, 0, 0);
  CudaDriverRoutine_105c00(a1, v11);
  CudaDriverRoutine_1085d0(v1 + 24);
  return 0;
}

__int64 CudaDriverHr_51760(__int64 a1, __int64 a2, unsigned __int64 a3,
                           _QWORD* a4, unsigned __int64* a5)
{
  unsigned int v5;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v16;
  __int64 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int64 v41;

  if (a1 != 0) {
    v5 = 1;
    if (a4 != nullptr && a5 != nullptr) {
      v41 = 0;
      v33 = 0u;
      v32 = 0u;
      v31 = 0u;
      v30 = 0u;
      v29 = 0u;
      v28 = 0u;
      v27 = 0u;
      v26 = 0u;
      v25 = 0u;
      v35 = 0u;
      v36 = 0u;
      v34 = 0u;
      v24 = 0u;
      v23 = 0u;
      v22 = 0u;
      v21 = 0u;
      v20 = 0u;
      v19 = 0u;
      v18 = 0u;
      v17 = 0x8000021C000202LL;
      v37 = 0u;
      v38 = 0u;
      v39 = 0u;
      v40 = 0u;
      v11 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_108520(v11 + 24, 0, 0, 0);
      v5 = CudaDriverRoutine_1da1b0(*(_QWORD*)(a1 + 80), &v17, a3 + a2, &v16);
      v12 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_1085d0(v12 + 24);
      if (v5 == 0) {
        CudaDriverRoutine_ef110(v16, 8);
        v13 = v16;
        *a4 = v16;
        v14 = CudaDriverRoutine_102e00(v13);
        if (a3 != 0) {
          v14 = (a3 + v14 - 1) / a3 * a3;
        }
        v5 = 0;
        *a5 = v14;
      }
    }
  }
  else {
    return 201;
  }
  return v5;
}

__int64 CudaDriverHr_518c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;

  v7 = a2;
  if (a1 == 0) {
    return 201;
  }
  if (a2 != 0) {
    v4 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_108520(v4 + 24, 0, 0, 0);
    CudaDriverRoutine_ee330(a2);
    CudaDriverRoutine_1db190(&v7);
    v5 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_1085d0(v5 + 24);
  }
  return 0;
}

__int64 CudaDriverHr_52400(unsigned __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  int* v31;

  v2 = *a2;
  v25 = 0;
  if (a1 >= 3) {
    v5 = CudaDriverRoutine_1128f0(0, 0, a1, 0, &v26);
    if (v5 != 0) {
      return v5;
    }
    v4 = v26;
  }
  else {
    v4 = *(_QWORD*)(v2 + 104);
    v26 = v4;
  }
  v6 = *(_DWORD*)(v2 + 188);
  v7 = 192;
  v8 = (char*)CudaDriverData_14225e0;
  if (v6 == 3) {
    v7 = 168;
  }
  v9 = *(_QWORD*)((char*)CudaDriverData_14225e0 + v7);
  if (v6 == 3) {
    v10 = 0;
  }
  else {
    v10 = 5;
  }
  if (*(_DWORD*)(v9 + 4LL * (unsigned int)v10) != 0 &&
      ((v28 = v2, v29 = a2, v27 = 40, v6 != 3) ? (v11 = 24) : (v11 = 21),
       v30 = v4, v31 = &v25, CudaDriverRoutine_20b420(v11, v10, &v27),
       v25 != 0)) {
    v5 = 0;
  }
  else {
    v12 = CudaDriverRoutine_98340(v2);
    *(__n128*)&v13 = CudaDriverRoutine_108520(v12 + 24, 0, 0, 0);
    if ((*(_BYTE*)(v2 + 16316) & 2) != 0) {
      goto LABEL_22;
    }
    v14 = 192;
    if (*(_DWORD*)(v2 + 188) == 3) {
      v14 = 168;
    }
    v15 = 20;
    v16 = *(_QWORD*)&v8[v14];
    if (*(_DWORD*)(v2 + 188) == 3) {
      v15 = 0;
    }
    if (*(_DWORD*)(v16 + v15) != 0) {
    LABEL_22:
      v17 = CudaDriverRoutine_57b40(v2, v26, a2[88], v13);
    }
    else {
      v17 = CudaDriverRoutine_57800(v2, v26, a2[88], v13);
    }
    v5 = v17;
    v18 = CudaDriverRoutine_98340(v2);
    CudaDriverRoutine_1085d0(v18 + 24);
  }
  v19 = *(_DWORD*)(v2 + 188);
  v20 = 192;
  if (v19 == 3) {
    v20 = 168;
  }
  v21 = *(_QWORD*)&v8[v20];
  if (v19 == 3) {
    v22 = 0;
  }
  else {
    v22 = 6;
  }
  if (*(_DWORD*)(v21 + 4LL * (unsigned int)v22) != 0) {
    v30 = v26;
    v28 = v2;
    v29 = a2;
    v27 = 32;
    if (v19 == 3) {
      v23 = 21;
    }
    else {
      v23 = 24;
    }
    CudaDriverRoutine_20b420(v23, v22, &v27);
  }
  return v5;
}

__int64 CudaDriverHr_52a40(__int64 a1)
{
  int v2;
  __int64 v4;
  __int64 v5;
  void (**v6)(__int64*);
  __int64 v7;
  __int64 v8;
  void (**v9)(__int64*);
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;

  v30 = 0;
  if (a1 == 0 || *(_QWORD*)(a1 + 8) == 0) {
    return 1;
  }
  v2 = CudaDriverRoutine_df240(3);
  if (v2 != 0) {
    return (v2 << 16) | 0xFFFFu;
  }
  v4 = CudaDriverRoutine_54460(a1 + 24);
  if (v4 != 0) {
    v6 = *(void (***)(__int64*))(a1 + 8);
    v5 = *(_QWORD*)(a1 + 16);
    v28 = 0;
    v29 = 0;
    v7 = v4;
    v26 = v5;
    (*v6)(&v26);
    v8 = CudaDriverRoutine_12e330(32 * v28);
    v9 = *(void (***)(__int64*))(a1 + 8);
    v29 = v8;
    (*v9)(&v26);
    if (v28 != 0) {
      v10 = 0;
      v11 = 0;
      while (1) {
        v12 = v29;
        if (v7 == CudaDriverRoutine_54460(v29 + v10 + 8)) {
          break;
        }
        ++v11;
        v10 += 32;
        if (v28 <= v11) {
          goto LABEL_12;
        }
      }
      v14 = *(_QWORD*)(v12 + v10);
      if (v27 != 2) {
        v15 = 0;
        v20 = CudaDriverRoutine_548d0(*(_QWORD*)(a1 + 16), v14,
                                      *(_QWORD*)(a1 + 8));
        if (v20 == 0) {
          goto LABEL_26;
        }
        goto LABEL_20;
      }
      v15 = *(_QWORD*)(a1 + 16);
      v30 = v15;
      if (v15 != 0) {
        v16 = v14;
        v17 = CudaDriverRoutine_98340(v15);
        CudaDriverRoutine_108520(v17 + 24, 0, 0, 0);
        v18 = *(_QWORD*)(v15 + 16448);
        if (v18 != 0) {
          v19 = 0;
          ++*(_QWORD*)(v18 + 200);
        LABEL_29:
          *(_QWORD*)(a1 + 64) = v15;
        LABEL_30:
          v13 = v19;
          if (v27 == 2) {
            v25 = CudaDriverRoutine_98340(v30);
            CudaDriverRoutine_1085d0(v25 + 24);
          }
          goto LABEL_13;
        }
        v20 = CudaDriverRoutine_548d0(*(_QWORD*)(a1 + 16), v16,
                                      *(_QWORD*)(a1 + 8));
        if (v20 == 0) {
        LABEL_26:
          v19 = 2;
          goto LABEL_30;
        }
      LABEL_20:
        *(_QWORD*)(v20 + 32) = *(_QWORD*)(a1 + 48);
        *(_QWORD*)(v20 + 40) = *(_QWORD*)(a1 + 56);
        if (v27 == 2) {
          *(_BYTE*)(v20 + 192) = 1;
          *(_QWORD*)(v15 + 16448) = v20;
          CudaDriverRoutine_54690(v15);
        }
        else {
          v21 = v7;
          v22 = v20;
          *(_BYTE*)(v20 + 192) = *(_BYTE*)(a1 + 72);
          v23 = CudaDriverRoutine_55610(&v30, v21);
          if (v23 != 0) {
            v24 = (v23 << 16) | 0xFFFF;
            CudaDriverRoutine_54930(v22);
            v19 = v24;
            goto LABEL_30;
          }
          v15 = v30;
        }
        v19 = 0;
        goto LABEL_29;
      }
      v13 = 1;
    }
    else {
    LABEL_12:
      v13 = 4;
    }
  LABEL_13:
    CudaDriverRoutine_12e340(v29);
    return v13;
  }
  return 4;
}

__int64 CudaDriverHr_52c70(__int64 a1)
{
  __int64 v2;
  long double v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a1 == 0) {
    return 1;
  }
  v2 = CudaDriverRoutine_98340(a1);
  *(__n128*)&v3 = CudaDriverRoutine_108520(v2 + 24, 0, 0, 0);
  v4 = *(_QWORD*)(a1 + 16448);
  if (v4 != 0) {
    if ((unsigned int)CudaDriverRoutine_55e00(a1, v3) != 0) {
      v5 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_1085d0(v5 + 24);
      CudaDriverRoutine_9bd90(a1);
    LABEL_5:
      CudaDriverRoutine_54930(v4);
      return 0;
    }
    v8 = *(_QWORD*)(v4 + 200) - 1LL;
    *(_QWORD*)(v4 + 200) = v8;
    if (v8 == 0) {
      *(_QWORD*)(a1 + 16448) = 0;
      v10 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_1085d0(v10 + 24);
      goto LABEL_5;
    }
    v9 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_1085d0(v9 + 24);
    return 0;
  }
  else {
    v7 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_1085d0(v7 + 24);
    return 1;
  }
}

__int64 CudaDriverHr_52ef0(__int64* a1)
{
  __int64 v1;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  unsigned __int64 v9;
  __int16 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  const char* v14;
  unsigned int v15;
  __int16 v16;
  __int64 v17;
  long double v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  _QWORD v22[6];
  __int64 v23;
  _QWORD v24[22];
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v27 = 0;
  if (a1 == nullptr) {
    return 1;
  }
  v1 = *a1;
  if ((unsigned int)CudaDriverRoutine_deeb0(*a1, 0) != 0) {
    return 1;
  }
  v4 = a1[1];
  if (v4 == 0) {
    return 1;
  }
  v5 = a1[2];
  if (v5 == 0) {
    return 1;
  }
  if (v4 != 1) {
    return 52559871;
  }
  v6 = *(_QWORD*)(v5 + 8);
  v7 = *((_BYTE*)a1 + 40);
  v26 = 0;
  v8 = 0;
  memset(v22, 0, sizeof(v22));
  memset(v24, 0, sizeof(v24));
  v25 = 0;
  v23 = 0;
  BYTE4(v22[1]) = v7 & 1;
  v9 = a1[3];
  if (v9 != 0) {
    v10 = 0;
    v11 = 0;
    while (1) {
      v12 = a1[4];
      v13 = *(_DWORD*)(v12 + v8);
      switch (v13) {
      case 25:
        v14 = " --sw4575628";
        break;
      case 27:
        v10 |= 0x200u;
        HIDWORD(v22[0]) = *(_QWORD*)(v12 + v8 + 8);
        goto LABEL_11;
      case 26:
        v14 = " --set-texmode-raw=true";
        break;
      default:
        goto LABEL_11;
      }
      v15 = CudaDriverRoutine_54710(&v26, v14);
      if (v15 != 0) {
        v21 = v15;
        CudaDriverRoutine_12e340(v26);
        return v21;
      }
      v9 = a1[3];
    LABEL_11:
      ++v11;
      v8 += 16;
      if (v11 >= v9) {
        v8 = v26;
        v16 = v10 | 0x104;
        goto LABEL_22;
      }
    }
  }
  v16 = 260;
LABEL_22:
  LOWORD(v22[0]) = v16;
  LODWORD(v22[1]) = 12;
  v17 = CudaDriverRoutine_98340(v1);
  *(__n128*)&v18 = CudaDriverRoutine_108520(v17 + 24, 0, 0, 0);
  v19 = ((__int64 (*)(__int64, __int64*, __int64, __int64, _QWORD*, _QWORD*,
                      __int64, long double))CudaDriverRoutine_105ae0)(
      v1, &v27, v6, v8, v24, v22, 3, v18);
  v20 = CudaDriverRoutine_98340(v1);
  CudaDriverRoutine_1085d0(v20 + 24);
  CudaDriverRoutine_12e340(v8);
  if (v19 != 0) {
    return (v19 << 16) | 0xFFFFu;
  }
  CudaDriverRoutine_547e0(*(_QWORD*)(v1 + 16448), v27);
  a1[6] = v27;
  return 0;
}

__int64 CudaDriverHr_541b0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v5;
  long double v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *a1;
  v1 = a1[1];
  if (v1 != 0) {
    if (*(_QWORD*)(v1 + 848) != 0 || *(_QWORD*)(v1 + 856) != 0 ||
        (v9 = a1[1], (unsigned __int8)CudaDriverRoutine_b9300(v9) != 0) &&
            (*(_QWORD*)((v10 = *(_QWORD*)(v9 + 32)) + 344) != 0 ||
             *(_QWORD*)(v10 + 352) != 0)) {
      v3 = CudaDriverRoutine_11cce0(v2);
      if (v3 != 0) {
        return (v3 << 16) | 0xFFFFu;
      }
      if (*(_BYTE*)(v2 + 15928) != 0) {
        *(_BYTE*)(v2 + 15928) = 0;
      }
    }
  }
  else {
    v5 = CudaDriverRoutine_98340(*a1);
    *(__n128*)&v6 = CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
    v7 = (*(__int64 (**)(_QWORD, __int64, __int64, long double))(v2 + 2520))(
        *(_QWORD*)(v2 + 2488), v2 + 2560, v2 + 13800, v6);
    if (*(_BYTE*)(v2 + 15928) != 0) {
      CudaDriverRoutine_97e80(v2);
    }
    v8 = CudaDriverRoutine_98340(v2);
    CudaDriverRoutine_1085d0(v8 + 24);
    if (v7 != 0) {
      return (v7 << 16) | 0xFFFFu;
    }
  }
  return 0;
}

__int64 CudaDriverHr_54e70(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = 0;
  if (a1 == nullptr) {
    return 1;
  }
  v1 = *a1;
  if (*a1 == 0) {
    return 400;
  }
  result = CudaDriverRoutine_deeb0(*a1, 0);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_1128f0(0, v1, a1[1], 2, &v11);
    if ((_DWORD)result == 0) {
      if (*(_QWORD*)(v11 + 16) == v1) {
        v4 = CudaDriverRoutine_98340(v1);
        *(__n128*)&v5 = CudaDriverRoutine_108520(v4 + 24, 0, 0, 0);
        CudaDriverRoutine_205ee0(0, v11, &v9, &v10, 0, v5);
        CudaDriverRoutine_59a40(v10, v9, 0, 16);
        v6 = v10;
        *(_BYTE*)(v10 + 34172) &= ~1u;
        v7 = CudaDriverRoutine_5c030(v6 + 33736);
        v8 = v10;
        a1[3] = v7;
        a1[4] = CudaDriverRoutine_1223e0(*(_QWORD*)(v8 + 33768));
        a1[2] = v10;
        return 0;
      }
      return 400;
    }
  }
  return result;
}

__int64 CudaDriverHr_55350(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  unsigned int v6;
  __int64 v7;

  if (a1 == 0) {
    return 201;
  }
  result = CudaDriverRoutine_deeb0(a1, 0);
  if ((_DWORD)result == 0) {
    if (a2 != 0) {
      v5 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
      v6 = CudaDriverRoutine_ee2a0(a1);
      v7 = CudaDriverRoutine_98340(a1);
      CudaDriverRoutine_1085d0(v7 + 24);
      return v6;
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 CudaDriverHr_55400(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  unsigned __int64 v5;
  unsigned int v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  unsigned int v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;

  v14 = 0;
  v12 = 0u;
  v13 = 0u;
  v11 = 0u;
  if (a1 == nullptr) {
    return 1;
  }
  v2 = CudaDriverRoutine_98340(*a1);
  if (v2 == 0) {
    return 1;
  }
  v3 = v2;
  result = CudaDriverRoutine_deeb0(v2, 0);
  if ((_DWORD)result == 0) {
    CudaDriverRoutine_108520(v3 + 24, 0, 0, 0);
    v5 = a1[1];
    v6 = 0;
    if (v5 > *(_QWORD*)(v3 + 1256)) {
      v7 = *(_OWORD*)(v3 + 1248);
      v8 = *(_OWORD*)(v3 + 1264);
      LODWORD(v14) = 1;
      v11 = v7;
      v12 = v8;
      v9 = *(_OWORD*)(v3 + 1280);
      *((_QWORD*)&v11 + 1) = v5;
      v13 = v9;
      v6 = CudaDriverRoutine_9e5f0(v3, 0, &v11);
    }
    v10 = v6;
    CudaDriverRoutine_9bed0(v3, *(_QWORD*)(v3 + 96));
    CudaDriverRoutine_1085d0(v3 + 24);
    return v10;
  }
  return result;
}

__int64 CudaDriverHr_63e90(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  if (a1 == 0) {
    return 201;
  }
  v3 = CudaDriverRoutine_98340(a1);
  v4 = CudaDriverRoutine_1dbe40(v3, a2, 0);
  v8 = v4;
  if (v4 == 0) {
    v4 = CudaDriverRoutine_1dbc20(*(_QWORD*)(v3 + 80), a2);
    v8 = v4;
    if (v4 == 0) {
      return 1;
    }
  }
  CudaDriverRoutine_10e060(v4);
  v5 = CudaDriverRoutine_98340(v3);
  CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
  CudaDriverRoutine_98190(v3, 0);
  CudaDriverRoutine_1db190(&v8);
  v6 = CudaDriverRoutine_98340(v3);
  CudaDriverRoutine_1085d0(v6 + 24);
  return 0;
}

__int64 CudaDriverHr_6aa20(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                           unsigned int a5)
{
  __int64 result;
  unsigned int v11;
  long double v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  int v21;
  __int64 v22;
  _BYTE v23[184];
  __int64 v24;

  v24 = 0;
  v18 = 0;
  v19 = 0;
  result = CudaDriverRoutine_df060(&v24);
  if ((_DWORD)result == 0) {
    result = 1;
    if (a1 != 0 && a2 != nullptr && (a5 == 0 || a3 != 0 && a4 != 0)) {
      v11 = CudaDriverRoutine_1272d0(
          *(_QWORD*)((char*)CudaDriverRoutine_40 + v24), 0, &v17);
      if (v11 == 0) {
        v11 = CudaDriverRoutine_e3160(a5, a3, a4, 0, 0, 6, 1);
        if (v11 == 0) {
          v11 = CudaDriverRoutine_e58b0(
              *(_QWORD*)((char*)CudaDriverRoutine_40 + v24), a3, a4, a5, v23,
              &v18, &v20);
        }
      }
      v22 = v17;
      v20 |= 4u;
      v21 = 12;
      if (v11 == 0) {
        *(__n128*)&v12 = CudaDriverRoutine_108520(v24 + 24, 0, 0, 0);
        v14 = ((__int64 (*)(__int64, __int64*, __int64, __int64, _BYTE*,
                            __int16*, __int64, __int64, long double, __int64,
                            __int64))CudaDriverRoutine_105ae0)(
            v24, &v19, a1, v18, v23, &v20, 1, v13, v12, v17, v18);
        CudaDriverRoutine_1085d0(v24 + 24);
        if (v14 != 0) {
          v11 = v14;
        }
        else {
          v15 = v22;
          *(_WORD*)(v19 + 36) |= 0x40u;
          v11 = CudaDriverRoutine_127670(v15);
          if (v11 == 0) {
            CudaDriverRoutine_1274c0(v22);
            v16 = 0;
            *a2 = v19;
            goto LABEL_16;
          }
        }
      }
      v16 = v11;
      CudaDriverRoutine_1275c0(v17);
    LABEL_16:
      CudaDriverRoutine_12e340(v18);
      return v16;
    }
  }
  return result;
}

__int64 CudaDriverHr_6b050(_QWORD* a1, unsigned int a2)
{
  __int64 result;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  struct __attribute__((packed)) {
    __int64 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
    __int128 v18;
    __int128 v19;
    __int128 v20;
    __int128 v21;
    __int128 v22;
    __int128 v23;
    __int128 v24;
    __int128 v25;
    __int128 v26;
    __int128 v27;
    __int128 v28;
    __int128 v29;
    __int128 v30;
    __int128 v31;
    __int64 v32;
  } v8_;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v34 = 0;
  v35 = 0;
  v33 = 0;
  if (a1 != nullptr) {
    *a1 = 0;
  }
  result = CudaDriverRoutine_121c60(&v35);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_ded50(v35, &v34, 2);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_121e20(v35);
      if ((_DWORD)result == 0) {
        result = 1;
        if (a1 != nullptr && a2 != 0) {
          v8_.v32 = 0;
          v8_.v26 = 0u;
          v8_.v27 = 0u;
          v8_.v28 = 0u;
          v8_.v29 = 0u;
          v8_.v25 = 0u;
          // Keeps clang from merging the zeroing into a memset call.
          __asm__ volatile("" ::: "memory");
          v8_.v24 = 0u;
          v8_.v23 = 0u;
          v8_.v22 = 0u;
          v8_.v21 = 0u;
          v8_.v20 = 0u;
          v8_.v19 = 0u;
          __asm__ volatile("" ::: "memory");
          v8_.v18 = 0u;
          v8_.v17 = 0u;
          v8_.v30 = 0u;
          v8_.v31 = 0u;
          v8_.v9 = 0u;
          v8_.v10 = 0u;
          __asm__ volatile("" ::: "memory");
          v8_.v11 = 0u;
          v8_.v12 = 0u;
          v8_.v13 = 0u;
          v8_.v14 = 0u;
          v8_.v15 = 0u;
          v8_.v16 = 0u;
          v8_.v8 =
              ((unsigned __int8)(CudaDriverRoutine_ee000(1) & 0x1F) << 26) |
              0x80000200000202LL;
          if ((unsigned __int8)CudaDriverRoutine_9ab50(*(_QWORD*)(v34 + 64)) ==
              0) {
            *(_QWORD*)&v8_.v9 =
                (*(unsigned __int8*)(*(_QWORD*)(v34 + 64) + 16988LL) << 19) &
                0x1000000;
          }
          CudaDriverRoutine_108520(v34 + 24, 0, 0, 0);
          v5 = CudaDriverRoutine_1da1b0(*(_QWORD*)(v34 + 80), &v8_.v8, a2,
                                        &v33);
          CudaDriverRoutine_1085d0(v34 + 24);
          if (v5 != 0) {
            return v5;
          }
          else {
            v6 = CudaDriverRoutine_10dd50(v33);
            if (v6 != 0) {
              v7 = v6;
              CudaDriverRoutine_108520(v34 + 24, 0, 0, 0);
              CudaDriverRoutine_1db190(&v33);
              CudaDriverRoutine_1085d0(v34 + 24);
              return v7;
            }
            else {
              CudaDriverRoutine_ef110(v33, 8);
              *a1 = CudaDriverRoutine_102e00(v33);
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
