#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN* CudaDriverData_1432140;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int64 CudaDriverData_14348c0;
extern int CudaDriverData_1434ac0;
extern __int64 CudaDriverData_1435890;
extern int CudaDriverData_14358d0;
extern int CudaDriverData_14358e4;
__int64 CudaDriverRoutine_103390(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1033a0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1033d0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_107f60(_QWORD);
__int64 CudaDriverRoutine_107f90(__int64);
__int64 CudaDriverRoutine_108070(__int64);
__int64 CudaDriverRoutine_109f00(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_10e830(_QWORD, _QWORD);
__int64 CudaDriverRoutine_112f50(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1150a0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_117ee0(_QWORD);
__int64 CudaDriverRoutine_1210d0(_QWORD);
__int64 CudaDriverRoutine_129e70(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12de40(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a1f40(_QWORD);
__int64 CudaDriverRoutine_1a2300(_QWORD);
__int64 CudaDriverRoutine_1a2350(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a39e0(_QWORD);
__int64 CudaDriverRoutine_1a3ba0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1a3eb0(_QWORD);
__int64 CudaDriverRoutine_1b42c0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1ba4f0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1ba520(_QWORD);
__int64 CudaDriverRoutine_1ba580(_QWORD);
__int64 CudaDriverRoutine_1ba970(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1bace0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1d8110(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1d87a0(_QWORD);
__int64 CudaDriverRoutine_1d8ca0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1db380(_QWORD);
__int64 CudaDriverRoutine_203f30(_QWORD);
__int64 CudaDriverRoutine_203fd0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_204130(_QWORD, _QWORD);
__int64 CudaDriverRoutine_204330(_QWORD);
__int64 CudaDriverRoutine_2043d0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_205810(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_2060c0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_206200(_QWORD, _QWORD);
__int64 CudaDriverRoutine_20b420(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_247910(_QWORD, _QWORD);
__int64 CudaDriverRoutine_247930(_QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_40();
__int64 CudaDriverRoutine_57450(_QWORD, _QWORD);
__int64 CudaDriverRoutine_59820(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_599a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_5b540(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_5b640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD);
__int64 CudaDriverRoutine_5b8e0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_5ba00(_QWORD, _QWORD);
__int64 CudaDriverRoutine_5e700(_QWORD, _QWORD);
__int64 CudaDriverRoutine_5ef60(_QWORD, _QWORD);
__int64 CudaDriverRoutine_5f050(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_8ade0(__int64, unsigned int, unsigned int);
__int64 CudaDriverRoutine_8b180(__int64 result, int, int, unsigned __int64);
__int64 CudaDriverRoutine_8b280(_QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_99f10(_QWORD);
__int64 CudaDriverRoutine_9aa40(_QWORD);
__int64 CudaDriverRoutine_b61f0(_QWORD);
__int64 CudaDriverRoutine_b6470(__int64);
__int64 CudaDriverRoutine_b64f0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_b6550(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_b6830(_QWORD, _QWORD);
__int64 CudaDriverRoutine_b82a0(_QWORD);
__int64 CudaDriverRoutine_bcdd0();
__int64 CudaDriverRoutine_e2120(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverHr_aa130(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 result;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 (*v11)(__int64, __int64, __int64, __int64);
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64 v21;

  if (*(_QWORD*)(a1 + 176) == 0) {
    *a2 = 0;
    *a3 = 0;
    return 0;
  }
  result = CudaDriverRoutine_1210d0(&v21);
  if ((_DWORD)result == 0) {
    CudaDriverRoutine_107f90(a1 + 184);
    v7 = *(_DWORD*)(a1 + 216);
    if (v7 != 0) {
    LABEL_25:
      *(_DWORD*)(a1 + 216) = v7;
      v20 = v7;
      CudaDriverRoutine_108070(a1 + 184);
      return v20;
    }
    v9 = (__int64*)(a1 + 200);
    v8 = *(_QWORD*)(a1 + 200);
    if (v8 != 0) {
      v7 = 0;
    LABEL_24:
      *a2 = v8;
      *a3 = *(_QWORD*)(a1 + 208);
      goto LABEL_25;
    }
    v10 = *(_QWORD*)(a1 + 16);
    v11 = *(__int64 (**)(__int64, __int64, __int64, __int64))(v21 + 16);
    v12 = CudaDriverRoutine_247910(a1 + v10, *(_QWORD*)(a1 + 176));
    v13 = CudaDriverRoutine_247930(a1 + v10, *(_QWORD*)(a1 + 176));
    v7 = v11(v12, v13, a1 + 224, a1 + 200);
    if (v7 == 0) {
      if (*(_QWORD*)(a1 + 224) != 0 && (v14 = (_QWORD*)*v9, *v9 != 0)) {
        if (*v14 == 1) {
          v15 = v14[6];
          if (v15 <= 0xFFFFFFFE && (v16 = CudaDriverRoutine_1a1f40(v15),
                                    *(_QWORD*)(a1 + 208) = v16, v16 != 0)) {
            v17 = *v9;
            if (*(_QWORD*)(*v9 + 48) == 0) {
              v7 = 0;
            LABEL_23:
              v8 = *v9;
              goto LABEL_24;
            }
            v18 = 0;
            while (1) {
              v7 = CudaDriverRoutine_1a2350(
                  *(_QWORD*)(a1 + 208), *(_QWORD*)(*(_QWORD*)(v17 + 40) +
                                                   *(_QWORD*)(v17 + 32) * v18));
              if (v7 != 0) {
                break;
              }
              v17 = *v9;
              if ((unsigned __int64)++v18 >= *(_QWORD*)(*v9 + 48)) {
                goto LABEL_23;
              }
            }
          }
          else {
            v7 = 2;
          }
        }
        else {
          v7 = 200;
        }
      }
      else {
        v7 = 999;
      }
    }
    if (*(_QWORD*)(a1 + 208) != 0) {
      v19 = v7;
      CudaDriverRoutine_1a2300(*(_QWORD*)(a1 + 208));
      v7 = v19;
      *(_QWORD*)(a1 + 208) = 0;
    }
    goto LABEL_23;
  }
  return result;
}

__int64 CudaDriverHr_b4eb0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  if (*(_DWORD*)(result + 72) == 2) {
    v1 = *(_QWORD*)(result + 144);
    v2 = (_QWORD*)result;
    CudaDriverRoutine_107f90(*(_QWORD*)(v1 + 272) + 592LL);
    if (*(_QWORD**)(v1 + 288) == v2) {
      v3 = v2[27];
      *(_QWORD*)(v1 + 288) = v3;
      if (v3 != 0) {
        v4 = 0;
        goto LABEL_7;
      }
    }
    else {
      v3 = v2[27];
      *(_QWORD*)(v2[26] + 216LL) = v3;
      if (v3 != 0) {
        v4 = v2[26];
      LABEL_7:
        *(_QWORD*)(v3 + 208) = v4;
      }
    }
    v2[26] = 0;
    v2[27] = 0;
    result = CudaDriverRoutine_108070(*(_QWORD*)(v1 + 272) + 592LL);
    v2[18] = 0;
  }
  return result;
}

long double CudaDriverHr_b5030(__int64 a1, __int64 a2, long double* a3)
{
  _DWORD* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _DWORD* v12;
  _DWORD* v13;
  long double result;
  long double v15;
  __int64 v16;

  v3 = (_DWORD*)(a1 + 72);
  if (*(_DWORD*)(a1 + 72) == 2) {
    CudaDriverRoutine_107f90(*(_QWORD*)(*(_QWORD*)(a1 + 144) + 272LL) + 592LL);
    v7 = *(_QWORD*)(a1 + 144);
    if (*(_QWORD*)(v7 + 288) == a1) {
      *(_QWORD*)(v7 + 288) = *(_QWORD*)(a1 + 216);
      v8 = *(_QWORD*)(*(_QWORD*)(a1 + 144) + 288LL);
      if (v8 != 0) {
        v9 = 0;
        goto LABEL_7;
      }
    }
    else {
      v8 = *(_QWORD*)(a1 + 216);
      *(_QWORD*)(*(_QWORD*)(a1 + 208) + 216LL) = v8;
      if (v8 != 0) {
        v9 = *(_QWORD*)(a1 + 208);
      LABEL_7:
        *(_QWORD*)(v8 + 208) = v9;
      }
    }
    v10 = *(_QWORD*)(a1 + 144);
    *(_QWORD*)(a1 + 208) = 0;
    *(_QWORD*)(a1 + 216) = 0;
    CudaDriverRoutine_108070(*(_QWORD*)(v10 + 272) + 592LL);
    *(_QWORD*)(a1 + 144) = 0;
    CudaDriverRoutine_1a39e0(a1 + 152);
    *(_DWORD*)(a1 + 72) = 0;
  }
  v11 = *(_DWORD*)(a1 + 48);
  v12 = (_DWORD*)(a1 + 80);
  if (v11 != 0) {
    v12 = nullptr;
  }
  if (v11 == 3) {
    v13 = v3;
  }
  else {
    v13 = v12;
  }
  if ((unsigned int)CudaDriverRoutine_b6550(a1, a2, 1) == 0 &&
      (unsigned int)CudaDriverRoutine_129e70(a2, v13 + 6) == 0) {
    CudaDriverRoutine_1ba970(*((_QWORD*)v13 + 2), 1);
    *(_DWORD*)(*((_QWORD*)v13 + 2) + 16LL) = 1;
    v15 = *a3;
    result = a3[1];
    v16 = *(_QWORD*)(*((_QWORD*)v13 + 2) + 24LL);
    *(_QWORD*)(v16 + 32) = *((_QWORD*)a3 + 4);
    *(long double*)v16 = v15;
    *(long double*)(v16 + 16) = result;
    *v3 = 1;
  }
  return result;
}

__int64 CudaDriverHr_b5190(_QWORD* a1, __int64 a2, __int64 a3, unsigned int a4,
                           unsigned int a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _BOOL4 v23;
  bool v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  unsigned int v50;
  __int64 v51;
  int v52;
  _BYTE v53[200];
  __int64 v54;

  v52 = 2;
  CudaDriverRoutine_1ba4f0(v53, *(_QWORD*)(*(_QWORD*)(a3 + 16) + 72LL));
  v10 = *(_QWORD*)(a3 + 992);
  if (v10 == 0) {
    if (*(_DWORD*)(a2 + 48) != 0 || *(_DWORD*)(a2 + 72) != 2) {
    LABEL_26:
      if ((unsigned __int8)CudaDriverRoutine_9aa40(a1[8]) == 0 &&
          (unsigned __int8)CudaDriverRoutine_99f10(a1[8]) == 0) {
        v22 = *(_DWORD*)(a2 + 48);
        v23 = false;
        if (v22 != 0) {
          goto LABEL_43;
        }
        goto LABEL_41;
      }
      v22 = *(_DWORD*)(a2 + 48);
      if (v22 != 0) {
        if (v22 != 3) {
          if (v22 != 1) {
            v23 = false;
            goto LABEL_43;
          }
          if (*(_BYTE*)(a2 + 80) == 0) {
            goto LABEL_37;
          }
          goto LABEL_34;
        }
        if (*(_BYTE*)(a2 + 56) != 0) {
        LABEL_34:
          v23 = *(_BYTE*)(a1[9] + 33080LL) != 0;
          if (v22 != 0) {
            goto LABEL_43;
          }
        LABEL_41:
          v22 = *(unsigned __int8*)(a2 + 56);
          if (*(_BYTE*)(a2 + 56) != 0) {
            v22 = 0;
            if (*(_QWORD*)(a2 + 64) != 0) {
              goto LABEL_46;
            }
          }
          goto LABEL_43;
        }
      }
      else if (*(_BYTE*)(a2 + 57) != 0) {
        goto LABEL_34;
      }
    LABEL_37:
      v23 = false;
      if (v22 == 0) {
        goto LABEL_41;
      }
    LABEL_43:
      v24 = (unsigned int)(v22 - 1) < 2;
      if (v22 == 3) {
        v24 = true;
      }
      if (v24) {
        goto LABEL_46;
      }
      if (v22 != 0) {
        if (v22 == 3) {
          if (*(_BYTE*)(a2 + 56) == 0) {
            goto LABEL_78;
          }
        }
        else if (v22 != 1 || *(_BYTE*)(a2 + 80) == 0) {
          goto LABEL_78;
        }
      }
      else if (*(_BYTE*)(a2 + 57) == 0) {
        goto LABEL_78;
      }
      v37 = CudaDriverRoutine_112f50(v53, a3);
      if (v37 != 0 || (v37 = CudaDriverRoutine_1bace0(&v52, v53, 7)) != 0) {
      LABEL_80:
        v19 = v37;
        goto LABEL_113;
      }
      if (v52 == 5) {
      LABEL_78:
        if ((a5 & 0x100) != 0 ||
            (v37 = CudaDriverRoutine_206200(a1[11], a3)) == 0 &&
                ((*(_BYTE*)(a3 + 56) & 1) == 0 ||
                 (v37 = CudaDriverRoutine_117ee0(a3)) == 0)) {
          v27 = 0;
          v38 = 0;
          v39 = *(_DWORD*)(a2 + 48);
          if ((unsigned int)(v39 - 3) <= 0xFFFFFFFD) {
          LABEL_104:
            if (v39 == 3) {
              v46 = a2 + 72;
            }
            else if (v39 != 0) {
              v46 = 0;
            }
            else {
              v46 = a2 + 80;
            }
            CudaDriverRoutine_107f90(v46);
            v47 = CudaDriverRoutine_b6550(a2, a3, 0);
            if (v47 != 0 ||
                (v48 = *(_QWORD*)(v46 + 24),
                 (v47 = CudaDriverRoutine_129e70(a3, v46 + 24)) != 0)) {
              v19 = v47;
            }
            else {
              v50 = CudaDriverRoutine_112f50(*(_QWORD*)(v46 + 16), a3);
              if (v50 != 0) {
                v19 = v50;
                *(_QWORD*)(v46 + 24) = v48;
              }
              else {
                CudaDriverRoutine_b64f0(a2, a3);
                if (*(_DWORD*)(a2 + 48) == 0) {
                  *(_DWORD*)(a2 + 72) = 1;
                }
                if ((v23 & v38) == 1) {
                  CudaDriverRoutine_b6830(v27, v46);
                }
                v19 = 0;
              }
            }
            CudaDriverRoutine_108070(v46);
            goto LABEL_113;
          }
          goto LABEL_85;
        }
        goto LABEL_80;
      }
    LABEL_46:
      v25 = CudaDriverRoutine_5f050(*(_QWORD*)(*(_QWORD*)(a3 + 16) + 72LL), a3,
                                    1);
      v26 = *(_DWORD*)(a2 + 48);
      v27 = v25;
      v51 = 0;
      if (v26 != 0) {
        if (v26 == 1) {
          v28 = *(_QWORD*)(a2 + 56);
        }
        else {
          v28 = 0;
        }
      }
      else {
        v28 = *(_QWORD*)(a2 + 64);
        if (*(_BYTE*)(a2 + 56) != 0 && v28 != 0) {
          CudaDriverRoutine_204130(*(_QWORD*)(a2 + 64), 5);
          CudaDriverRoutine_2043d0(v28, 0);
        }
      }
      CudaDriverRoutine_205810(v27, a3, &v51, a4);
      v29 = *(_DWORD*)(a2 + 48);
      if ((unsigned int)(v29 - 3) < 0xFFFFFFFE) {
        if (v29 != 0) {
          v30 = 0;
          if (v29 != 3) {
          LABEL_90:
            if (v29 != 0) {
              if (v29 == 3) {
                v41 = 56;
              }
              else {
                if (v29 != 1) {
                  goto LABEL_99;
                }
                v41 = 80;
              }
            }
            else {
              v41 = 57;
            }
            if (*(_BYTE*)(a2 + v41) != 0 && *(_BYTE*)(a1[9] + 33080LL) == 0) {
              CudaDriverRoutine_5ba00(v27, &v51);
            }
          LABEL_99:
            CudaDriverRoutine_2060c0(a3, v51, a5);
            if ((unsigned int)(*(_DWORD*)(a2 + 48) - 3) >= 0xFFFFFFFE &&
                (unsigned int)CudaDriverData_14358d0 >= 2 &&
                CudaDriverData_14358e4 == 0) {
              v42 =
                  CudaDriverRoutine_5ef60(*(_QWORD*)(*(_QWORD*)a2 + 72LL), 12);
              v43 = *(_QWORD*)(a2 + 56);
              v44 = v42;
              v54 = 0;
              CudaDriverRoutine_59820(v42, &v54, 0);
              CudaDriverRoutine_5b540(v44, 0, v43, v30, &v54);
              CudaDriverRoutine_57450(v44, &v54);
              v45 = v54;
              *(_QWORD*)(*(_QWORD*)(v43 + 56) + 24LL) = v44;
              CudaDriverRoutine_599a0(v44, v45, 1, 64);
            }
            v38 = 1;
            v39 = *(_DWORD*)(a2 + 48);
            if ((unsigned int)(v39 - 3) <= 0xFFFFFFFD) {
              goto LABEL_104;
            }
          LABEL_85:
            v19 = 0;
            goto LABEL_113;
          }
        LABEL_89:
          v40 = CudaDriverRoutine_109f00(v27, v51, a2);
          v29 = *(_DWORD*)(a2 + 48);
          v51 = v40;
          goto LABEL_90;
        }
        if (*(_BYTE*)(a2 + 56) != 0 && *(_QWORD*)(a2 + 64) != 0) {
          CudaDriverRoutine_5b640(v27, v28, 5, 0, 1, 0, 0, &v51);
        }
        v30 = 0;
        goto LABEL_88;
      }
      v32 = *(_QWORD*)(a2 + 56);
      v31 = *(_QWORD*)(a2 + 64);
      v54 = 0;
      v33 = CudaDriverRoutine_e2120(a1, v31, v32, &v54);
      if (v33 == 0) {
        v30 = CudaDriverRoutine_12de40(*(_QWORD*)(a2 + 72));
        v34 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*, __int64, _QWORD,
                              _QWORD))(a1[8] + 19112LL))(v51, 0, 0, a1, v54,
                                                         v30 - 1, 0);
        v51 = v34;
        v35 = *(_DWORD*)(v27 + 32);
        if (v35 != 0) {
          if (v35 <= 0xA) {
            v36 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
                a1[8] + 19080LL))(v34, v54, v30, 0);
          }
          else {
            if (v35 != 11) {
              goto LABEL_88;
            }
            v36 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
                a1[8] + 19088LL))(v34, v27, v54, v30, 0);
          }
        }
        else {
          v36 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
              a1[8] + 19048LL))(v34, v54, v30, 0);
        }
        v51 = v36;
      LABEL_88:
        v29 = *(_DWORD*)(a2 + 48);
        if (v29 != 3) {
          goto LABEL_90;
        }
        goto LABEL_89;
      }
      v19 = v33;
      CudaDriverRoutine_2060c0(a3, v51, a5);
    LABEL_113:
      CudaDriverRoutine_1ba580(v53);
      return v19;
    }
    CudaDriverRoutine_107f90(*(_QWORD*)(*(_QWORD*)(a2 + 144) + 272LL) + 592LL);
    v14 = *(_QWORD*)(a2 + 144);
    if (*(_QWORD*)(v14 + 288) == a2) {
      *(_QWORD*)(v14 + 288) = *(_QWORD*)(a2 + 216);
      v15 = *(_QWORD*)(*(_QWORD*)(a2 + 144) + 288LL);
      if (v15 != 0) {
        v16 = 0;
        goto LABEL_24;
      }
    }
    else {
      v15 = *(_QWORD*)(a2 + 216);
      *(_QWORD*)(*(_QWORD*)(a2 + 208) + 216LL) = v15;
      if (v15 != 0) {
        v16 = *(_QWORD*)(a2 + 208);
      LABEL_24:
        *(_QWORD*)(v15 + 208) = v16;
      }
    }
    v21 = *(_QWORD*)(a2 + 144);
    *(_QWORD*)(a2 + 208) = 0;
    *(_QWORD*)(a2 + 216) = 0;
    CudaDriverRoutine_108070(*(_QWORD*)(v21 + 272) + 592LL);
    *(_QWORD*)(a2 + 144) = 0;
    CudaDriverRoutine_1a39e0(a2 + 152);
    *(_DWORD*)(a2 + 72) = 0;
    goto LABEL_26;
  }
  if (*(_DWORD*)(a2 + 72) != 2) {
    goto LABEL_15;
  }
  v11 = *(_QWORD*)(a2 + 144);
  CudaDriverRoutine_107f90(*(_QWORD*)(v11 + 272) + 592LL);
  if (*(_QWORD*)(v11 + 288) == a2) {
    v12 = *(_QWORD*)(a2 + 216);
    *(_QWORD*)(v11 + 288) = v12;
    if (v12 != 0) {
      v13 = 0;
      goto LABEL_13;
    }
  }
  else {
    v12 = *(_QWORD*)(a2 + 216);
    *(_QWORD*)(*(_QWORD*)(a2 + 208) + 216LL) = v12;
    if (v12 != 0) {
      v13 = *(_QWORD*)(a2 + 208);
    LABEL_13:
      *(_QWORD*)(v12 + 208) = v13;
    }
  }
  *(_QWORD*)(a2 + 208) = 0;
  *(_QWORD*)(a2 + 216) = 0;
  CudaDriverRoutine_108070(*(_QWORD*)(v11 + 272) + 592LL);
  *(_QWORD*)(a2 + 144) = 0;
  v10 = *(_QWORD*)(a3 + 992);
LABEL_15:
  CudaDriverRoutine_107f90(*(_QWORD*)(v10 + 272) + 592LL);
  v17 = *(_QWORD*)(a3 + 992);
  v18 = CudaDriverRoutine_1a39e0(a2 + 152);
  if (v18 != 0 ||
      (v18 = CudaDriverRoutine_1a3ba0(a2 + 152, a3 + 1000, 0)) != 0) {
    v19 = v18;
    *(_DWORD*)(a2 + 72) = 3;
  }
  else {
    *(_QWORD*)(a2 + 144) = v17;
    *(_DWORD*)(a2 + 72) = 2;
    *(_QWORD*)(a2 + 216) = *(_QWORD*)(v17 + 288);
    *(_QWORD*)(v17 + 288) = a2;
    v20 = *(_QWORD*)(a2 + 216);
    v19 = 0;
    if (v20 != 0) {
      *(_QWORD*)(v20 + 208) = a2;
    }
  }
  CudaDriverRoutine_108070(*(_QWORD*)(*(_QWORD*)(a3 + 992) + 272LL) + 592LL);
  return v19;
}

__int64 CudaDriverHr_b5980(__int64 a1, _QWORD* a2, char a3)
{
  int v3;
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  int v19;
  __int64 v20;

  v3 = *(_DWORD*)(a1 + 48);
  if ((unsigned int)(v3 - 3) < 0xFFFFFFFE) {
    v19 = 2;
    if (v3 == 3) {
      v7 = a1 + 72;
      CudaDriverRoutine_107f90(a1 + 72);
      if (a2 == nullptr) {
      LABEL_17:
        if (a3 != 0) {
          v15 = 0;
        }
        else {
          v15 = 2;
        }
        v16 = CudaDriverRoutine_1bace0(&v19, *(_QWORD*)(v7 + 16), v15);
        if (v19 != 5 && v16 == 0) {
          v14 = 600;
        }
        else {
          v14 = v16;
        }
        CudaDriverRoutine_108070(v7);
        return v14;
      }
    }
    else if (v3 != 0) {
      v7 = 0;
      CudaDriverRoutine_107f90(0);
      if (a2 == nullptr) {
        goto LABEL_17;
      }
    }
    else {
      v7 = a1 + 80;
      CudaDriverRoutine_107f90(a1 + 80);
      if (a2 == nullptr) {
        goto LABEL_17;
      }
    }
    *a2 = *(_QWORD*)(v7 + 24);
    goto LABEL_17;
  }
  v8 = **(_DWORD**)(a1 + 72);
  if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
      CudaDriverData_14358e4 == 0) {
    v10 = CudaDriverRoutine_5ef60(*(_QWORD*)(*(_QWORD*)a1 + 72LL), 12);
    v11 = *(_QWORD*)(a1 + 56);
    v12 = v10;
    v20 = 0;
    CudaDriverRoutine_59820(v10, &v20, 0);
    CudaDriverRoutine_5b540(v12, 0, v11, v8, &v20);
    CudaDriverRoutine_57450(v12, &v20);
    v13 = v20;
    *(_QWORD*)(*(_QWORD*)(v11 + 56) + 24LL) = v12;
    CudaDriverRoutine_599a0(v12, v13, 1, 64);
  }
  if (v8 == (unsigned int)CudaDriverRoutine_204330(*(_QWORD*)(a1 + 56))) {
    return 0;
  }
  else {
    return 600;
  }
}

__int64 CudaDriverHr_b5f70(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[3];

  v1 = *a1;
  CudaDriverRoutine_98340(*a1);
  if (*(_DWORD*)((char*)CudaDriverRoutine_40 +
                 (_QWORD)CudaDriverData_1432140) != 0) {
    v20[2] = a1;
    v20[0] = 24;
    v20[1] = v1;
    CudaDriverRoutine_20b420(2, 16, v20);
  }
  if (*(__int64**)(v1 + 1960) == a1) {
    v3 = a1[2];
    *(_QWORD*)(v1 + 1960) = v3;
    if (v3 == 0) {
      goto LABEL_9;
    }
    v4 = 0;
  }
  else {
    v3 = a1[2];
    *(_QWORD*)(a1[1] + 16) = v3;
    if (v3 == 0) {
      goto LABEL_9;
    }
    v4 = a1[1];
  }
  *(_QWORD*)(v3 + 8) = v4;
LABEL_9:
  a1[1] = 0;
  a1[2] = 0;
  CudaDriverRoutine_107f60(a1 + 4);
  v5 = *((_DWORD*)a1 + 12);
  if (v5 > 1) {
    if (v5 == 2) {
      v14 = a1[7];
    }
    else {
      if (v5 != 3) {
        goto LABEL_35;
      }
      CudaDriverRoutine_107f60(a1 + 9);
      CudaDriverRoutine_1ba520(a1[11]);
      CudaDriverRoutine_203f30(*(_QWORD*)(a1[8] + 16));
      v14 = a1[8];
    }
    CudaDriverRoutine_12e340(v14);
    goto LABEL_35;
  }
  if (v5 != 0) {
    if (v5 == 1) {
      if ((unsigned int)CudaDriverData_14358d0 >= 2 &&
          CudaDriverData_14358e4 == 0) {
        v7 = *(_DWORD*)a1[9];
        v8 = CudaDriverRoutine_5ef60(*(_QWORD*)(*a1 + 72), 12);
        v9 = a1[7];
        v10 = v8;
        v20[0] = 0;
        CudaDriverRoutine_59820(v8, v20, 0);
        CudaDriverRoutine_5b540(v10, 0, v9, v7, v20);
        CudaDriverRoutine_57450(v10, v20);
        v11 = v20[0];
        *(_QWORD*)(*(_QWORD*)(v9 + 56) + 24LL) = v10;
        CudaDriverRoutine_599a0(v10, v11, 1, 64);
      }
      v12 = a1[7];
      v13 = *(unsigned int*)a1[9];
      goto LABEL_34;
    }
    goto LABEL_35;
  }
  if (*((_DWORD*)a1 + 18) == 2) {
    CudaDriverRoutine_107f90(*(_QWORD*)(a1[18] + 272) + 592LL);
    v15 = a1[18];
    if (*(__int64**)(v15 + 288) == a1) {
      *(_QWORD*)(v15 + 288) = a1[27];
      v16 = *(_QWORD*)(a1[18] + 288);
      if (v16 != 0) {
        v17 = 0;
        goto LABEL_30;
      }
    }
    else {
      v16 = a1[27];
      *(_QWORD*)(a1[26] + 216) = v16;
      if (v16 != 0) {
        v17 = a1[26];
      LABEL_30:
        *(_QWORD*)(v16 + 208) = v17;
      }
    }
    v18 = a1[18];
    a1[26] = 0;
    a1[27] = 0;
    CudaDriverRoutine_108070(*(_QWORD*)(v18 + 272) + 592LL);
  }
  CudaDriverRoutine_1a3eb0(a1 + 19);
  CudaDriverRoutine_107f60(a1 + 10);
  CudaDriverRoutine_1ba520(a1[12]);
  CudaDriverRoutine_b61f0(a1);
  v12 = a1[8];
  if (v12 != 0) {
    v13 = 5;
  LABEL_34:
    CudaDriverRoutine_203fd0(v12, v13);
  }
LABEL_35:
  *(_OWORD*)a1 = 0u;
  *((_OWORD*)a1 + 1) = 0u;
  *((_OWORD*)a1 + 2) = 0u;
  *((_OWORD*)a1 + 3) = 0u;
  *((_OWORD*)a1 + 4) = 0u;
  *((_OWORD*)a1 + 5) = 0u;
  *((_OWORD*)a1 + 6) = 0u;
  *((_OWORD*)a1 + 7) = 0u;
  *((_OWORD*)a1 + 8) = 0u;
  *((_OWORD*)a1 + 9) = 0u;
  *((_OWORD*)a1 + 10) = 0u;
  *((_OWORD*)a1 + 11) = 0u;
  *((_OWORD*)a1 + 12) = 0u;
  *((_OWORD*)a1 + 13) = 0u;
  return CudaDriverRoutine_12e340(a1);
}

__int64 CudaDriverHr_b7720(__int64 a1, __int64 a2, _QWORD* a3,
                           unsigned __int64 a4)
{
  unsigned int v4;
  unsigned __int64 v5;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  bool v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  unsigned __int64 v50;
  __int64 v51;
  char v52[4];
  _QWORD v53[11];
  __int128 v54;
  __int128 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int128 v61;
  __int128 v62;
  __int128 v63;
  __int64 v64;
  __int64 v65;

  v4 = (unsigned int)*a3 >> 25;
  v5 = (a3[1] + *a3 +
        (unsigned __int64)(unsigned int)(*(_DWORD*)(a1 + 148) - 1)) /
       *(unsigned int*)(a1 + 148);
  if ((unsigned int)v5 <= v4) {
    return 0;
  }
  v9 = (unsigned int)*a3 >> 25;
  while (a4 <= *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v9)) {
    if (++v9 >= (unsigned __int64)(unsigned int)v5) {
      return 0;
    }
  }
  v11 = CudaDriverRoutine_12e510((unsigned int)v5 - v4, 168);
  if (v11 == 0) {
    return 2;
  }
  v12 = v11;
  v13 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)(a1 + 112) + 2416LL))(a1, v4, (unsigned int)v5 - v4, v11);
  if (v13 != 0) {
  LABEL_9:
    v14 = v13;
    goto LABEL_69;
  }
  v49 = v5;
  v50 = (unsigned int)v5 - v4;
  if (CudaDriverData_1434ac0 != 0) {
    v15 = 0;
    v16 = 0;
    do {
      if ((*(_DWORD*)(a1 + 120) != 1 ||
           *(_DWORD*)(a1 + 96) == 8 && *(_BYTE*)(a1 + 100) == 0 ||
           v15 != **(_DWORD**)(a1 + 104)) &&
          (unsigned __int8)CudaDriverRoutine_103390(a1 + 104,
                                                    (unsigned int)v15) != 0) {
        v16 |= 1LL << v15;
      }
      ++v15;
    } while (v15 < (unsigned int)CudaDriverData_1434ac0);
  }
  else {
    v16 = 0;
  }
  if (*(_BYTE*)(a1 + 168) != 0) {
    v17 = CudaDriverRoutine_b82a0(*(_QWORD*)(a1 + 104));
    v18 = v5;
    if (*(_DWORD*)(a1 + 96) == 8 && *(_BYTE*)(a1 + 100) == 0) {
      v17 |= 1LL << **(_DWORD**)(a1 + 104);
    }
    if ((v17 & v16) != 0) {
      v47 = v17 & v16;
      if (((1LL << **(_DWORD**)(a1 + 104)) & (v17 & v16 ^ v16)) != 0) {
        v16 = 1LL << **(_DWORD**)(a1 + 104);
      }
      else {
        v16 ^= v17 & v16;
      }
      if ((_DWORD)v5 != v4) {
        goto LABEL_42;
      }
    LABEL_34:
      v19 = *(_QWORD*)(a1 + 160);
      v20 = (unsigned int)(v49 - 1);
      if (v19 <= v20) {
        v19 = (unsigned int)(v49 - 1);
      }
      *(_QWORD*)(a1 + 160) = v19;
      if (v47 == 0 ||
          (v21 = CudaDriverRoutine_1033a0(a1 + 104, v4),
           v22 = CudaDriverRoutine_1033a0(a1 + 104, (unsigned int)v20),
           v21 > v22)) {
      LABEL_41:
        v14 = 0;
        goto LABEL_69;
      }
      v23 = v22;
      while (1) {
        v13 = CudaDriverRoutine_1033d0(a1 + 104, v21, v47);
        if (v13 != 0) {
          goto LABEL_9;
        }
        if (++v21 > v23) {
          goto LABEL_41;
        }
      }
    }
  }
  else {
    v18 = v5;
  }
  v47 = 0;
  if (v18 == v4) {
    goto LABEL_34;
  }
LABEL_42:
  v24 = 0;
  v48 = v12;
  v46 = a2;
  while (1) {
    while (1) {
      v25 = v4 + (unsigned int)v24;
      CudaDriverRoutine_25cf30(v53, a2, 384);
      if (*(_DWORD*)(a1 + 96) == 8 && *(_BYTE*)(a1 + 100) == 0) {
        goto LABEL_62;
      }
      v26 = v12 + 168 * v24;
      v27 = *(_OWORD*)v26;
      v28 = *(_OWORD*)(v26 + 16);
      v56 = *(_OWORD*)(v26 + 32);
      v55 = v28;
      v54 = v27;
      v29 = *(_OWORD*)(v26 + 48);
      v30 = *(_OWORD*)(v26 + 64);
      v31 = *(_OWORD*)(v26 + 80);
      v60 = *(_OWORD*)(v26 + 96);
      v59 = v31;
      v58 = v30;
      v57 = v29;
      v32 = *(_OWORD*)(v26 + 112);
      v33 = *(_OWORD*)(v26 + 128);
      v34 = *(_OWORD*)(v26 + 144);
      v64 = *(_QWORD*)(v26 + 160);
      v35 = *(_QWORD*)(a1 + 128);
      v63 = v34;
      v62 = v33;
      v61 = v32;
      v65 = v35 +
            *(unsigned int*)(a1 + 148) * (unsigned __int64)(unsigned int)v25;
      v36 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL * (unsigned int)v25);
      if (v36 == 0) {
        break;
      }
      v37 = *(_QWORD*)(a1 + 112);
      v52[0] = 0;
      if ((*(unsigned int (**)(__int64, __int64, __int64, char*))(v37 + 2424))(
              v36 + 328, v26, 1, v52) != 0 ||
          v52[0] == 0) {
        if (CudaDriverData_1434ac0 != 0) {
          v40 = 0;
          do {
            if (v40 != **(_DWORD**)(a1 + 104) &&
                (unsigned __int8)CudaDriverRoutine_103390(
                    a1 + 104, (unsigned int)v40) != 0) {
              v41 = *(_QWORD*)(*((_QWORD*)&CudaDriverData_14347a8 + v40 + 35) +
                               16928LL);
              v51 = CudaDriverRoutine_1d8ca0(
                  v41, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v25));
              if (v51 != 0) {
                CudaDriverRoutine_107f90(v41 + 128);
                CudaDriverRoutine_1d87a0(&v51);
                CudaDriverRoutine_108070(v41 + 128);
              }
            }
            ++v40;
          } while (v40 < (unsigned int)CudaDriverData_1434ac0);
        }
        CudaDriverRoutine_107f90(*(_QWORD*)(a1 + 112) + 128LL);
        CudaDriverRoutine_1d87a0(*(_QWORD*)(a1 + 16) + 8 * v25);
        CudaDriverRoutine_108070(*(_QWORD*)(a1 + 112) + 128LL);
        break;
      }
      v38 = *(_QWORD*)(a1 + 24);
      v39 = *(_QWORD*)(v38 + 8 * v25);
      if (a4 > v39) {
        v39 = a4;
      }
      *(_QWORD*)(v38 + 8 * v25) = v39;
      if (++v24 >= v50) {
        goto LABEL_34;
      }
    }
    CudaDriverRoutine_107f90(*(_QWORD*)(a1 + 112) + 128LL);
    v14 = CudaDriverRoutine_1d8110(*(_QWORD*)(a1 + 112), v53,
                                   *(unsigned int*)(a1 + 148),
                                   *(_QWORD*)(a1 + 16) + 8 * v25);
    CudaDriverRoutine_108070(*(_QWORD*)(a1 + 112) + 128LL);
    if (v14 != 0) {
      goto LABEL_69;
    }
  LABEL_62:
    if (v16 != 0) {
      break;
    }
  LABEL_43:
    *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v25) = a4;
    if (++v24 >= v50) {
      goto LABEL_34;
    }
  }
  v42 = v16;
  v53[0] = v53[0] & 0xFFFFFFFF80FFFFFFLL | 0xC000000;
  v43 = &CudaDriverData_14348c0;
  while (1) {
    if ((v42 & 1) != 0) {
      v45 = *(_QWORD*)(*v43 + 16928);
      CudaDriverRoutine_107f90(v45 + 128);
      v14 = CudaDriverRoutine_1d8110(
          v45, v53,
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v25) + 128LL), &v51);
      CudaDriverRoutine_108070(v45 + 128);
      if (v14 != 0) {
        break;
      }
    }
    ++v43;
    v44 = v42 > 1;
    v42 >>= 1;
    if (!v44) {
      v12 = v48;
      a2 = v46;
      goto LABEL_43;
    }
  }
  v12 = v48;
LABEL_69:
  CudaDriverRoutine_12e340(v12);
  return v14;
}

__int64 CudaDriverHr_b7ed0(__int64 a1, unsigned int a2, int a3,
                           unsigned __int64 a4)
{
  __int64 v8;
  __int64 v10;

  CudaDriverRoutine_107f90(*(_QWORD*)(*(_QWORD*)(a1 + 520) + 16LL) + 32LL);
  if (a2 > (unsigned int)CudaDriverRoutine_8b280(
               *(_QWORD*)(*(_QWORD*)(a1 + 520) + 16LL) + 216LL)) {
    CudaDriverRoutine_8ade0(*(_QWORD*)(*(_QWORD*)(a1 + 520) + 16LL) + 216LL, 1u,
                            a2);
  }
  CudaDriverRoutine_8b180(*(_QWORD*)(*(_QWORD*)(a1 + 520) + 16LL) + 216LL, 0,
                          a3, a4);
  CudaDriverRoutine_108070(*(_QWORD*)(*(_QWORD*)(a1 + 520) + 16LL) + 32LL);
  v8 = *(_QWORD*)(a1 + 520);
  v10 = a1;
  CudaDriverRoutine_12e340(v8);
  return CudaDriverRoutine_1db380(&v10);
}

__int64 CudaDriverHr_bd040(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 (*v7)(__int64);
  __int64 i;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  _QWORD v15[3];
  __int64 v16;

  result = CudaDriverRoutine_bcdd0();
  if ((_DWORD)result != 0) {
    return result;
  }
  v5 = 3735928559LL;
  v6 = CudaDriverRoutine_107f90(*(_QWORD*)(a2 + 15976) + 16LL);
  if (CudaDriverData_1435890 != 0) {
    v7 = *(__int64 (**)(__int64))(CudaDriverData_1435890 + 24);
    if (v7 != nullptr) {
      v5 = v7(v6);
      if (v5 == 0) {
        v12 = 1;
        goto LABEL_19;
      }
    }
  }
  for (i = *(_QWORD*)(*(_QWORD*)(a2 + 15976) + 32LL);; i = *(_QWORD*)(i + 16)) {
    v16 = i;
    if (i == 0) {
      break;
    }
    v9 = *(_DWORD*)(i + 24);
    if (v9 == 9) {
      v11 = **(_QWORD**)(i + 104);
      if (*(_DWORD*)(v11 + 24) != 1) {
        continue;
      }
      v10 = *(_QWORD*)(v11 + 64);
    }
    else {
      if (v9 != 1) {
        continue;
      }
      v10 = *(_QWORD*)(i + 64);
    }
    if (*(_QWORD*)(v10 + 24) == v5) {
      ++*(_DWORD*)(i + 40);
      goto LABEL_17;
    }
  }
  v15[1] = 0;
  v15[2] = 0;
  v15[0] = 1;
  v12 = CudaDriverRoutine_1b42c0(&v16, a2, v15);
  if (v12 == 0) {
    i = v16;
  LABEL_17:
    v12 = 0;
    *a1 = i;
  }
LABEL_19:
  v13 = *(_QWORD*)(a2 + 15976);
  v14 = v12;
  CudaDriverRoutine_108070(v13 + 16);
  return v14;
}

__int64 CudaDriverHr_c3f20(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;

  v1 = *(_QWORD*)(a1 + 24);
  CudaDriverRoutine_107f90(v1 + 392);
  if (*(_BYTE*)(a1 + 96) == 0) {
    *(_BYTE*)(a1 + 96) = 1;
    v3 = *(_QWORD**)(a1 + 112);
    *(_QWORD*)(a1 + 104) = *v3;
    *v3 = a1;
  }
  return CudaDriverRoutine_108070(v1 + 392);
}

__int64 CudaDriverHr_c46c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned int a5)
{
  __int64 v6;
  __int64 v10;
  __int64 result;
  __int64 v12;

  v6 = a4;
  v12 = a4;
  if ((a5 & 0x100) == 0) {
    CudaDriverRoutine_5b8e0(a2, &v12, *(_QWORD*)(a1 + 992));
    v6 = v12;
  }
  if (*(_BYTE*)(a2 + 36) != 0) {
    v10 = a5 | 0x40;
  }
  else {
    v10 = a5;
  }
  result = CudaDriverRoutine_599a0(a2, v6, 1, v10);
  if (*(_QWORD*)(a1 + 1208) == a3) {
    return CudaDriverRoutine_108070(a3 + 592);
  }
  return result;
}

__int64 CudaDriverHr_c5a60(__int64 a1, int a2)
{
  __int64 i;

  CudaDriverRoutine_107f90(*(_QWORD*)(a1 + 272) + 592LL);
  if (*(_DWORD*)(a1 + 280) == 0) {
    *(_DWORD*)(a1 + 280) = a2;
    for (i = *(_QWORD*)(a1 + 288); i != 0; i = *(_QWORD*)(a1 + 288)) {
      CudaDriverRoutine_b6470(i);
    }
  }
  return CudaDriverRoutine_108070(*(_QWORD*)(a1 + 272) + 592LL);
}

void CudaDriverHr_c6620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 i;
  __int64 v10;

  if (*(_DWORD*)a3 == 0) {
    v3 = *(__int64**)(a2 + 152);
    if (*(_BYTE*)(a3 + 25) != 0) {
      v5 = *v3;
      v6 = *(_QWORD*)(*v3 + 8);
      if (*(_BYTE*)(*(_QWORD*)(v6 + 64) + 14824LL) != 0 &&
          (unsigned __int8)CudaDriverRoutine_10e830(v6, a2) == 0) {
        CudaDriverRoutine_107f90(v5 + 32);
        v7 = *((unsigned int*)v3 + 4);
        if ((_DWORD)v7 != 0) {
          v8 = 0;
          for (i = 0; i < v7; ++i) {
            v10 = v3[3];
            if (*(_DWORD*)(v10 + v8) == 3) {
              CudaDriverRoutine_5e700(v5, *(_QWORD*)(v10 + v8 + 8));
              v7 = *((unsigned int*)v3 + 4);
            }
            v8 += 40;
          }
        }
        CudaDriverRoutine_108070(v5 + 32);
      }
    }
    *(_DWORD*)a3 = CudaDriverRoutine_1150a0(*(_QWORD*)(a3 + 8), v3, 1);
  }
}

#pragma GCC visibility pop
