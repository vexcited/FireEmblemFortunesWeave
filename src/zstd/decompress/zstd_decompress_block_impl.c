#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 cuda_Free_plt(_QWORD);
extern int CudaDriverData_1131ac8[8];
extern unsigned int CudaDriverData_1131bc8[8];
int* zstd_decompress_block_252f20(int* result, __int64 a2, int a3, __int64 a4,
                                  __int64 a5, int a6, __int64 a7);
__int64 zstd_decompress_block_2534c0(__int64 result);
unsigned __int64 zstd_decompress_block_259180(unsigned __int64 result,
                                              unsigned __int64 a2, char* a3,
                                              __int64 a4, int a5);
__int64 HUF_decompress1X1_usingDTable_internal(char*, __int64, unsigned __int8*,
                                               __int64, int*);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
extern __int128 CudaDriverData_1115890;
unsigned __int64 CudaDriverRoutine_24dc10(int*, __int64, __int64, __int64,
                                          unsigned __int64, _DWORD*,
                                          unsigned __int64);
unsigned __int64 CudaDriverRoutine_251bf0(int*, __int64, unsigned __int64,
                                          __int64, unsigned __int64, _DWORD*,
                                          unsigned __int64);
unsigned __int64 HUF_decompress4X2_usingDTable_internal(unsigned __int8*,
                                                        __int64,
                                                        unsigned __int16*,
                                                        unsigned __int64,
                                                        __int64, char);
__int64 ZSTD_decodeLiteralsBlock(__int64 a1, unsigned __int8* a2,
                                 unsigned __int64 a3, __int64 a4,
                                 unsigned __int64 a5, int a6);

int* zstd_decompress_block_252f20(int* result, __int64 a2, int a3, __int64 a4,
                                  __int64 a5, int a6, __int64 a7)
{
  __int64 v7;
  _DWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  _DWORD* v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  char v28;
  __int64 v29;
  unsigned int v30;
  char v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  char v35;
  __int64 v36;
  __int16* v37;
  _WORD* v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  int64x2_t v55;
  __int64 v56;
  __int64 v57;
  int64x2_t* v58;
  __int64 v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  int v64;
  int v65;
  int v66;

  v7 = (unsigned int)(a3 + 1);
  v8 = result + 3;
  v9 = (unsigned int)(1 << a6);
  v10 = (unsigned int)(v9 - 1);
  v11 = (unsigned int)v9 >> 3;
  if (a3 != -1) {
    v19 = ((_BYTE)a3 + 1) & 3;
    v20 = 0x10000 << (a6 - 1) >> 16;
    if ((unsigned int)v7 < 4) {
      v21 = 0;
      v22 = 1;
      v23 = v9 - 1;
    LABEL_33:
      v44 = v23;
      if ((v7 & 3) != 0) {
        v44 = v23;
        do {
          while (1) {
            v45 = *(__int16*)(a2 + 2 * v21);
            if (v45 != -1) {
              break;
            }
            v46 = 2LL * v44--;
            v8[v46] = v21;
            *(_WORD*)(a7 + 2 * v21++) = 1;
            if (--v19 == 0) {
              goto LABEL_40;
            }
          }
          if (v20 <= v45) {
            v22 = 0;
          }
          *(_WORD*)(a7 + 2 * v21++) = v45;
          --v19;
        } while (v19 != 0);
      }
    LABEL_40:
      *result = v22;
      result[1] = a6;
      if (v44 != (_DWORD)v10) {
        v59 = 0;
        v60 = 0;
        v61 = v11 + ((unsigned int)v9 >> 1) + 3;
        do {
          v63 = *(__int16*)(a2 + 2 * v59);
          if (v63 < 1) {
            v62 = v60;
          }
          else {
            if ((unsigned int)v63 >= 8) {
              v64 = 0;
              do {
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v8[2 * v60] = v59;
                do {
                  v60 = (v61 + v60) & v10;
                } while (v60 > v44);
                v64 += 8;
              } while (v64 != (v63 & 0x7FF8));
            }
            v62 = v60;
            if ((v63 & 7) != 0) {
              v65 = v63 & 7;
              v66 = 0;
              v62 = v60;
              do {
                v8[2 * v62] = v59;
                do {
                  v62 = (v61 + v62) & v10;
                } while (v62 > v44);
                ++v66;
              } while (v66 != v65);
            }
          }
          ++v59;
          v60 = v62;
        } while (v59 != v7);
        goto LABEL_5;
      }
      v47 = a7 + 106;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      while (1) {
        v51 = *(__int16*)(a2 + 2 * v48);
        *(_QWORD*)(v47 + v49) = v50;
        if (v51 >= 9) {
          if ((unsigned __int64)v51 <= 0x10) {
            v52 = 16;
          }
          else {
            v52 = v51;
          }
          v53 = v52 - 9;
          if (v53 >= 0x18) {
            v55 = vdupq_n_s64(v50);
            v56 = (v53 >> 3) + 1;
            v57 = v56 & 0x3FFFFFFFFFFFFFFCLL;
            v54 = (32 * ((v56 & 0x3FFFFFFFFFFFFFFCuLL) >> 2)) | 8;
            v58 = (int64x2_t*)(a7 + 130 + v49);
            do {
              v58[-1] = v55;
              *v58 = v55;
              v58 += 2;
              v57 -= 4;
            } while (v57 != 0);
            if (v56 == (v56 & 0x3FFFFFFFFFFFFFFCLL)) {
              goto LABEL_42;
            }
          }
          else {
            v54 = 8;
          }
          do {
            *(_QWORD*)(v47 + v49 + v54) = v50;
            v54 += 8LL;
          } while (v54 < v51);
        }
      LABEL_42:
        v49 += v51;
        ++v48;
        v50 += 0x101010101010101LL;
        if (v48 == v7) {
          goto LABEL_3;
        }
      }
    }
    v36 = (unsigned int)v7 & 0xFFFFFFFC;
    v37 = (__int16*)(a2 + 4);
    v38 = (_WORD*)(a7 + 4);
    v22 = 1;
    v21 = 0;
    v23 = v9 - 1;
    while (1) {
      while (1) {
        v39 = *(v37 - 2);
        if (v39 != -1) {
          break;
        }
        v43 = 2LL * v23--;
        v8[v43] = v21;
        *(v38 - 2) = 1;
        v40 = *(v37 - 1);
        if (v40 != -1) {
          goto LABEL_22;
        }
      LABEL_30:
        v8[2 * v23--] = v21 + 1;
        *(v38 - 1) = 1;
        v41 = *v37;
        if (v41 != -1) {
          goto LABEL_25;
        }
      LABEL_31:
        v8[2 * v23--] = v21 + 2;
        *v38 = 1;
        v42 = v37[1];
        if (v42 != -1) {
          goto LABEL_15;
        }
      LABEL_32:
        v8[2 * v23--] = v21 + 3;
        v38[1] = 1;
        v21 += 4;
        v37 += 4;
        v38 += 4;
        if (v36 == v21) {
          goto LABEL_33;
        }
      }
      if (v20 <= v39) {
        v22 = 0;
      }
      *(v38 - 2) = v39;
      v40 = *(v37 - 1);
      if (v40 == -1) {
        goto LABEL_30;
      }
    LABEL_22:
      if (v20 <= v40) {
        v22 = 0;
      }
      *(v38 - 1) = v40;
      v41 = *v37;
      if (v41 == -1) {
        goto LABEL_31;
      }
    LABEL_25:
      if (v20 <= v41) {
        v22 = 0;
      }
      *v38 = v41;
      v42 = v37[1];
      if (v42 == -1) {
        goto LABEL_32;
      }
    LABEL_15:
      if (v20 <= v42) {
        v22 = 0;
      }
      v38[1] = v42;
      v21 += 4;
      v37 += 4;
      v38 += 4;
      if (v36 == v21) {
        goto LABEL_33;
      }
    }
  }
  *result = 1;
  result[1] = a6;
LABEL_3:
  v12 = 0;
  v13 = 0;
  v14 = v11 + ((unsigned int)v9 >> 1) + 3;
  do {
    v15 = a7 + v12;
    v12 += 2LL;
    v8[2 * (v13 & v10)] = *(unsigned __int8*)(v15 + 106);
    v16 = (unsigned int)v13 + v14;
    v13 = ((_DWORD)v13 + 2 * v14) & (unsigned int)v10;
    v8[2 * (v16 & v10)] = *(unsigned __int8*)(v15 + 107);
  } while (v12 < v9);
LABEL_5:
  v17 = a6 - 31;
  if (v9 == 1) {
    v18 = 0;
  LABEL_12:
    v32 = (__int64)&result[2 * v18 + 2];
    v33 = *(unsigned int*)(v32 + 4);
    v34 = *(unsigned __int16*)(a7 + 2 * v33);
    *(_WORD*)(a7 + 2 * v33) = v34 + 1;
    v35 = v17 + __clz(v34);
    *(_BYTE*)(v32 + 3) = v35;
    *(_WORD*)v32 = (v34 << v35) - v9;
    *(_BYTE*)(v32 + 2) = *(_BYTE*)(a5 + v33);
    *(_DWORD*)(v32 + 4) = *(_DWORD*)(a4 + 4 * v33);
    return result;
  }
  v24 = result + 5;
  v25 = 0;
  do {
    v26 = (unsigned int)*(v24 - 2);
    v25 -= 2;
    v27 = *(unsigned __int16*)(a7 + 2 * v26);
    *(_WORD*)(a7 + 2 * v26) = v27 + 1;
    v28 = v17 + __clz(v27);
    *((_BYTE*)v24 - 9) = v28;
    *((_WORD*)v24 - 6) = (v27 << v28) - v9;
    *((_BYTE*)v24 - 10) = *(_BYTE*)(a5 + v26);
    *(v24 - 2) = *(_DWORD*)(a4 + 4 * v26);
    v29 = (unsigned int)*v24;
    v30 = *(unsigned __int16*)(a7 + 2 * v29);
    *(_WORD*)(a7 + 2 * v29) = v30 + 1;
    v31 = v17 + __clz(v30);
    *((_BYTE*)v24 - 1) = v31;
    *((_WORD*)v24 - 2) = (v30 << v31) - v9;
    *((_BYTE*)v24 - 2) = *(_BYTE*)(a5 + v29);
    *v24 = *(_DWORD*)(a4 + 4 * v29);
    v24 += 4;
  } while (-(__int64)((unsigned int)v9 & 0xFFFFFFFE) != v25);
  v18 = -v25;
  if ((v9 & 1) != 0) {
    goto LABEL_12;
  }
  return result;
}

__int64 zstd_decompress_block_2534c0(__int64 result)
{
  _DWORD* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v11;
  void (*v12)(_QWORD);
  __int64 v13;
  __int64 v14;
  int v15;

  if (*(_QWORD*)(result + 30192) != 0) {
    v1 = (_DWORD*)(result + 28672);
    v2 = *(unsigned int*)(result + 29956);
    v3 = __ROR8__((0x9E3779B185EBCA87LL * v2) ^ 0x27D4EB2F165667C9LL, 41);
    v4 = 0xC2B2AE3D27D4EB4FLL *
         ((0x165667B19E3779F9LL - 0x3D4D51C2D82B14B1LL * v3) ^
          ((unsigned __int64)(0x165667B19E3779F9LL -
                              0x3D4D51C2D82B14B1LL * v3) >>
           33));
    v5 = (0x165667B19E3779F9LL * (v4 ^ (v4 >> 29))) ^
         ((0x165667B19E3779F9LL * (v4 ^ (v4 >> 29))) >> 32);
    v6 = *(_QWORD*)(*(_QWORD*)(result + 30216) + 8LL) - 1LL;
    v7 = v5 & v6;
    do {
      v8 = *(_QWORD*)(**(_QWORD**)(result + 30216) + 8 * v7);
      if (v8 == 0) {
        return result;
      }
      v9 = *(_DWORD*)(v8 + 27316);
      v7 = (v7 & v6) + 1;
    } while (v9 != (_DWORD)v2 && v9 != 0);
    v11 = *(_QWORD**)(result + 30184);
    if (v11 == nullptr) {
    LABEL_18:
      v15 = v1[321];
      *(_QWORD*)(result + 30184) = 0;
      *(_QWORD*)(result + 30192) = v8;
      v1[382] = v15;
      v1[384] = -1;
      return result;
    }
    v12 = (void (*)(_QWORD))v11[3417];
    v13 = v11[3418];
    if (*v11 != 0) {
      v14 = result;
      if (v12 != nullptr) {
        v12(v11[3418]);
      LABEL_14:
        ((void (*)(__int64, _QWORD*))v12)(v13, v11);
      LABEL_17:
        result = v14;
        goto LABEL_18;
      }
      cuda_Free_plt(*v11);
    }
    else {
      v14 = result;
      if (v12 != nullptr) {
        goto LABEL_14;
      }
    }
    cuda_Free_plt(v11);
    goto LABEL_17;
  }
  return result;
}

__int64 ZSTD_decodeLiteralsBlock(__int64 a1, unsigned __int8* a2,
                                 unsigned __int64 a3, __int64 a4,
                                 unsigned __int64 a5, int a6)
{
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  char v17;
  unsigned int v18;
  char v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int8* v39;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  int v51;
  __int64 v53;
  __int64 v55;
  __int64 v56;
  int v57;
  unsigned __int8* v58;
  __int64 v59;
  int v60;
  __int64 v61;
  __int64 v62;
  int* v63;
  unsigned __int16* v64;
  int64x2_t* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;

  if (a3 < 2) {
    return -20;
  }
  v7 = a1 + 28672;
  v8 = *a2;
  v9 = *(_DWORD*)(a1 + 30176);
  v10 = v8 & 3;
  if (v9 != 0) {
    v11 = *(unsigned int*)(a1 + 29944);
    if ((v8 & 3) <= 1) {
      goto LABEL_5;
    }
  }
  else {
    v11 = 0x20000;
    if ((v8 & 3) <= 1) {
    LABEL_5:
      v12 = ((unsigned int)v8 >> 2) & 3;
      if (v11 >= a5) {
        v13 = a5;
      }
      else {
        v13 = v11;
      }
      if ((v8 & 3) == 0) {
        if (v12 == 1) {
          v24 = (unsigned __int64)*(unsigned __int16*)a2 >> 4;
          v25 = 2;
          if (a4 != 0) {
            goto LABEL_61;
          }
        }
        else if (v12 == 3) {
          if (a3 == 2) {
            return -20;
          }
          v24 = (*(unsigned __int16*)a2 | ((unsigned __int64)a2[2] << 16)) >> 4;
          v25 = 3;
          if (a4 != 0) {
            goto LABEL_61;
          }
        }
        else {
          v24 = v8 >> 3;
          v25 = 1;
          if (a4 != 0) {
            goto LABEL_61;
          }
        }
        if (v24 != 0) {
          return -70;
        }
      LABEL_61:
        if (v24 <= v11) {
          if (a5 < v24) {
            return -70;
          }
          if (v9 != 0) {
            v30 = *(unsigned int*)(a1 + 29944);
          }
          else {
            v30 = 0x20000;
          }
          if (a6 != 0 || a5 <= v24 + v30 + 64) {
            if (v24 > 0x10000) {
              v35 = 2;
              v36 = a4 + v13 - v24 + 65504;
              *(_QWORD*)(a1 + 30352) = v36;
              v37 = v36 + v24 - 0x10000;
              v34 = 1;
            }
            else {
              v34 = 0;
              v35 = 0;
              v36 = a1 + 30372;
              *(_QWORD*)(a1 + 30352) = a1 + 30372;
              v37 = a1 + 30372 + v24;
            }
          }
          else {
            v33 = a4 + v30;
            v34 = 0;
            v35 = 1;
            v36 = v33 + 32;
            *(_QWORD*)(a1 + 30352) = v36;
            v37 = v36 + v24;
          }
          *(_DWORD*)(a1 + 30368) = v35;
          *(_QWORD*)(a1 + 30360) = v37;
          v38 = v25 + v24;
          if (v25 + v24 + 32 <= a3) {
            *(_QWORD*)(a1 + 30152) = v24;
            *(_DWORD*)(a1 + 30368) = 0;
            *(_QWORD*)(a1 + 30120) = &a2[v25];
            *(_QWORD*)(a1 + 30360) = &a2[v25 + v24];
          }
          else {
            if (v38 > a3) {
              return -20;
            }
            v39 = &a2[v25];
            if (v34 != 0) {
              memcpy_plt(v36, (__int64)&a2[v25], v24 - 0x10000);
              v41 = (__int64)&v39[v24 - 0x10000];
              v42 = 0x10000;
              v43 = a1 + 30372;
            }
            else {
              v43 = v36;
              v41 = (__int64)&a2[v25];
              v42 = v24;
            }
            memcpy_plt(v43, v41, v42);
            v56 = *(_QWORD*)(a1 + 30352);
            *(_QWORD*)(a1 + 30152) = v24;
            *(_QWORD*)(a1 + 30120) = v56;
          }
          return v38;
        }
        return -20;
      }
      if (v12 == 1) {
        if (a3 == 2) {
          return -20;
        }
        v22 = 2;
        v23 = (unsigned __int64)*(unsigned __int16*)a2 >> 4;
        if (a4 != 0) {
          goto LABEL_42;
        }
      }
      else if (v12 == 3) {
        if (a3 < 4) {
          return -20;
        }
        v22 = 3;
        v23 = (*(unsigned __int16*)a2 | ((unsigned __int64)a2[2] << 16)) >> 4;
        if (a4 != 0) {
        LABEL_42:
          if (v23 > v11) {
            return -20;
          }
          if (a5 >= v23) {
            if (v9 != 0) {
              v26 = *(unsigned int*)(a1 + 29944);
            }
            else {
              v26 = 0x20000;
            }
            if (a6 != 0 || a5 <= v23 + v26 + 64) {
              v47 = v23 - 0x10000;
              if (v23 > 0x10000) {
                v53 = a4 + v13 - v23 + 65504;
                *(_QWORD*)(a1 + 30352) = v53;
                *(_QWORD*)(a1 + 30360) = v47 + v53;
                *(_DWORD*)(a1 + 30368) = 2;
                memset_plt(v53, a2[v22], v47);
                v51 = a2[v22];
                v48 = (_QWORD*)a1;
                v49 = 0x10000;
                v50 = a1 + 30372;
                goto LABEL_90;
              }
              v45 = 0;
              v46 = a1 + 30372;
            }
            else {
              v44 = a4 + v26;
              v45 = 1;
              v46 = v44 + 32;
            }
            *(_QWORD*)(a1 + 30352) = v46;
            *(_DWORD*)(a1 + 30368) = v45;
            v48 = (_QWORD*)a1;
            v49 = v23;
            *(_QWORD*)(a1 + 30360) = v46 + v23;
            v50 = v46;
            v51 = a2[v22];
          LABEL_90:
            memset_plt(v50, v51, v49);
            v55 = v48[3794];
            v48[3769] = v23;
            v48[3765] = v55;
            return v22 + 1;
          }
          return -70;
        }
      }
      else {
        v23 = (unsigned int)v8 >> 3;
        v22 = 1;
        if (a4 != 0) {
          goto LABEL_42;
        }
      }
      if (v23 != 0) {
        return -70;
      }
      goto LABEL_42;
    }
  }
  if (v10 != 2 && *(_DWORD*)(a1 + 30000) == 0) {
    return -30;
  }
  if (a3 < 5) {
    return -20;
  }
  v14 = *(unsigned int*)a2;
  v15 = ((unsigned int)v8 >> 2) & 3;
  if (v11 >= a5) {
    v16 = a5;
  }
  else {
    v16 = v11;
  }
  if (*(_DWORD*)(a1 + 30228) != 0) {
    v17 = 16;
  }
  else {
    v17 = 0;
  }
  if (v15 == 2) {
    v18 = ((unsigned int)v14 >> 4) & 0x3FFF;
    v20 = v14 >> 18;
    v19 = 1;
    v21 = 4;
  }
  else if (v15 == 3) {
    v18 = ((unsigned int)v14 >> 4) & 0x3FFFF;
    v19 = 1;
    v20 = (v14 >> 22) | ((unsigned __int64)a2[4] << 10);
    v21 = 5;
  }
  else {
    v27 = v15 == 0;
    v18 = ((unsigned int)v14 >> 4) & 0x3FF;
    v20 = (v14 >> 14) & 0x3FF;
    v21 = 3;
    v19 = !v27;
  }
  if (a4 == 0 && v18 != 0) {
    return -70;
  }
  v28 = v18;
  if (v11 < v18) {
    return -20;
  }
  if (v18 < 6) {
    v29 = v19;
  }
  else {
    v29 = 0;
  }
  if ((v29 & 1) != 0) {
    return -24;
  }
  if (v21 + v20 > a3) {
    return -20;
  }
  if (v16 < v18) {
    return -70;
  }
  v31 = v21 + v20;
  if (v9 != 0) {
    v32 = *(unsigned int*)(a1 + 29944);
  }
  else {
    v32 = 0x20000;
  }
  if (a6 != 0 || a5 <= (unsigned __int64)v18 + v32 + 64) {
    if (v18 > 0x10000) {
      v59 = a4 + v16;
      v57 = 2;
      v58 = (unsigned __int8*)(v59 - v18);
      *(_QWORD*)(a1 + 30352) = v58;
    }
    else {
      v57 = 0;
      v58 = (unsigned __int8*)(a1 + 30372);
      *(_QWORD*)(a1 + 30352) = a1 + 30372;
      v59 = a1 + 30372 + v18;
    }
  }
  else {
    v57 = 1;
    v58 = (unsigned __int8*)(a4 + v32 + 32);
    *(_QWORD*)(a1 + 30352) = v58;
    v59 = (__int64)&v58[v18];
  }
  *(_DWORD*)(a1 + 30368) = v57;
  v60 = *(_DWORD*)(a1 + 30204);
  *(_QWORD*)(a1 + 30360) = v59;
  if (v60 != 0 && v18 >= 0x301) {
    v61 = 448;
    v62 = *(_QWORD*)(a1 + 24) + 256LL;
    do {
      v61 += 512;
      v62 += 512;
    } while ((unsigned __int64)(v61 - 448) >> 2 <= 0xFF0);
  }
  if (v10 == 3) {
    v63 = *(int**)(a1 + 24);
    v64 = (unsigned __int16*)&a2[v21];
    v65 = (int64x2_t*)a1;
    if ((v19 & 1) != 0) {
      v66 = HUF_decompress4X2_usingDTable_internal(v58, v18, v64, v20,
                                                   (__int64)v63, v17);
    }
    else {
      v66 = HUF_decompress1X1_usingDTable_internal(
          (char*)v58, v18, (unsigned __int8*)v64, v20, v63);
    }
  }
  else {
    v65 = (int64x2_t*)a1;
    if ((v19 & 1) != 0) {
      v66 = CudaDriverRoutine_251bf0((int*)(a1 + 10296), (__int64)v58, v18,
                                     (__int64)&a2[v21], v20,
                                     (_DWORD*)(a1 + 27324), 0xA00u);
    }
    else {
      v66 = CudaDriverRoutine_24dc10((int*)(a1 + 10296), (__int64)v58, v18,
                                     (__int64)&a2[v21], v20,
                                     (_DWORD*)(a1 + 27324), 0xA00u);
    }
  }
  v67 = v66;
  if (*(_DWORD*)(v7 + 1696) == 2) {
    memcpy_plt((__int64)LANES128(v65[1898]).n128_i64 + 4,
               LANES128(v65[1897]).n128_u64[1] - 0x10000, 0x10000u);
    memmove_plt(LANES128(v65[1897]).n128_u64[0] + 65504,
                LANES128(v65[1897]).n128_i64[0], v28 - 0x10000);
    v65[1897] =
        vaddq_s64(v65[1897], COERCE_AS(int64x2_t, CudaDriverData_1115890));
  }
  if (v67 > 0xFFFFFFFFFFFFFF88LL) {
    return -20;
  }
  v68 = LANES128(v65[1897]).n128_u64[0];
  result = v31;
  LANES128(v65[1884]).n128_u64[1] = v28;
  LANES128(v65[1882]).n128_u64[1] = v68;
  *(_DWORD*)(v7 + 1328) = 1;
  if (v10 == 2) {
    LANES128(v65[1]).n128_u64[1] =
        (unsigned __int64)&LANES128(v65[643]).n128_u64[1];
  }
  return result;
}

unsigned __int64 zstd_decompress_block_259180(unsigned __int64 result,
                                              unsigned __int64 a2, char* a3,
                                              __int64 a4, int a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int128* v17;
  __int64 v18;
  char* v19;
  char* v20;
  _OWORD* v21;
  __int64 v22;
  __int128 v23;
  __int128 v24;
  char* v25;
  _BYTE* v26;
  _BYTE* v27;
  char* v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  char* v33;
  __int128* v34;
  _OWORD* v35;
  __int64 v36;
  __int64 v37;
  __int128 v38;
  __int128 v39;
  __int64 v40;
  char* v41;
  __int128* v42;
  __int128 v43;
  _OWORD* v44;
  __int128* v45;
  unsigned __int64 v46;
  __int128 v47;
  __int128 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  char* v51;
  __int64 v52;
  _OWORD* v53;
  __int128* v54;
  __int128 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  _OWORD* v60;
  unsigned __int64 v61;
  char* v62;
  __int128 v63;
  __int128 v64;
  char* v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  char v69;
  char v70;

  v5 = result - (_QWORD)a3;
  v6 = result + a4;
  if (a4 <= 7) {
    if (a4 < 1) {
      return result;
    }
    v7 = a4 + result;
    if (a4 + result <= result + 1) {
      v7 = result + 1;
    }
    v8 = v7 - result;
    if (v8 < 8 || v5 < 0x20) {
      v25 = a3;
      v26 = (_BYTE*)result;
      goto LABEL_74;
    }
    if (v8 < 0x20) {
      v9 = 0;
      goto LABEL_46;
    }
    v9 = v8 & 0xFFFFFFFFFFFFFFE0LL;
    v44 = (_OWORD*)(result + 16);
    v45 = (__int128*)(a3 + 16);
    v46 = v8 & 0xFFFFFFFFFFFFFFE0LL;
    do {
      v47 = *(v45 - 1);
      v48 = *v45;
      v46 -= 32LL;
      v45 += 2;
      *(v44 - 1) = v47;
      *v44 = v48;
      v44 += 2;
    } while (v46 != 0);
    if (v8 != v9) {
      if ((v8 & 0x18) == 0) {
        v25 = &a3[v9];
        v26 = (_BYTE*)(result + v9);
        goto LABEL_74;
      }
    LABEL_46:
      v49 = (_QWORD*)(result + v9);
      v25 = &a3[v8 & 0xFFFFFFFFFFFFFFF8LL];
      v26 = (_BYTE*)(result + (v8 & 0xFFFFFFFFFFFFFFF8LL));
      v50 = v9 - (v8 & 0xFFFFFFFFFFFFFFF8LL);
      v51 = &a3[v9];
      do {
        v52 = *(_QWORD*)v51;
        v51 += 8;
        v50 += 8LL;
        *v49++ = v52;
      } while (v50 != 0);
      if (v8 == (v8 & 0xFFFFFFFFFFFFFFF8LL)) {
        return result;
      }
      do {
      LABEL_74:
        v69 = *v25++;
        *v26++ = v69;
      } while ((unsigned __int64)v26 < v6);
      return result;
    }
    return result;
  }
  if (a5 != 0) {
    if (v5 > 7) {
      *(_QWORD*)result = *(_QWORD*)a3;
    }
    else {
      v10 = CudaDriverData_1131ac8[v5];
      *(_BYTE*)result = *a3;
      *(_BYTE*)(result + 1) = a3[1];
      *(_BYTE*)(result + 2) = a3[2];
      *(_BYTE*)(result + 3) = a3[3];
      v11 = &a3[CudaDriverData_1131bc8[v5]];
      a3 = &v11[-v10];
      *(_DWORD*)(result + 4) = *(_DWORD*)v11;
    }
    a3 += 8;
    v12 = result + 8;
    v13 = a4 - 8;
    if (v6 > a2) {
    LABEL_26:
      v27 = (_BYTE*)v12;
      v28 = a3;
      if (v12 <= a2) {
        v29 = a2 - v12;
        if (a5 != 0 && (__int64)(v12 - (_QWORD)a3) < 16) {
          v30 = (char*)(v12 + 8);
          if (a2 > v12 + 8) {
            v30 = (char*)a2;
          }
          v31 = (unsigned __int64)&v30[~v12];
          v32 = (_QWORD*)v12;
          v33 = a3;
          if (v31 < 0x18) {
            goto LABEL_80;
          }
          v32 = (_QWORD*)v12;
          v33 = a3;
          if (v12 - (unsigned __int64)a3 < 0x20) {
            goto LABEL_80;
          }
          v34 = (__int128*)(a3 + 16);
          v35 = (_OWORD*)(v12 + 16);
          v36 = (v31 >> 3) + 1;
          v32 = (_QWORD*)(v12 + 8 * (v36 & 0x3FFFFFFFFFFFFFFCLL));
          v33 = &a3[8 * (v36 & 0x3FFFFFFFFFFFFFFCLL)];
          v37 = v36 & 0x3FFFFFFFFFFFFFFCLL;
          do {
            v38 = *(v34 - 1);
            v39 = *v34;
            v34 += 2;
            v37 -= 4;
            *(v35 - 1) = v38;
            *v35 = v39;
            v35 += 2;
          } while (v37 != 0);
          if (v36 != (v36 & 0x3FFFFFFFFFFFFFFCLL)) {
          LABEL_80:
            do {
              v40 = *(_QWORD*)v33;
              v33 += 8;
              *v32++ = v40;
            } while ((unsigned __int64)v32 < a2);
          }
        }
        else {
          *(_OWORD*)v12 = *(_OWORD*)a3;
          if (v29 > 16) {
            v53 = (_OWORD*)(v12 + 16);
            v54 = (__int128*)(a3 + 32);
            do {
              *v53 = *(v54 - 1);
              v55 = *v54;
              v54 += 2;
              v53[1] = v55;
              v53 += 2;
            } while ((unsigned __int64)v53 < a2);
          }
        }
        v28 = &a3[v29];
        v27 = (_BYTE*)a2;
      }
      if ((unsigned __int64)v27 >= v6) {
        return result;
      }
      if (v12 <= a2) {
        v56 = a2;
      }
      else {
        v56 = v12;
      }
      v57 = a4 + result - v56;
      if (v57 >= 8 && v12 - (unsigned __int64)a3 >= 0x20) {
        if (v57 >= 0x20) {
          v60 = (_OWORD*)(v56 + 16);
          v58 = v57 & 0xFFFFFFFFFFFFFFE0LL;
          v61 = v57 & 0xFFFFFFFFFFFFFFE0LL;
          v62 = &a3[v56 + 16 - v12];
          do {
            v63 = *((_OWORD*)v62 - 1);
            v64 = *(_OWORD*)v62;
            v61 -= 32LL;
            v62 += 32;
            *(v60 - 1) = v63;
            *v60 = v64;
            v60 += 2;
          } while (v61 != 0);
          if (v57 == v58) {
            return result;
          }
          if ((v57 & 0x18) == 0) {
            v28 += v58;
            v27 += v58;
            goto LABEL_77;
          }
        }
        else {
          v58 = 0;
        }
        v65 = (char*)(v58 + v56);
        v28 += v57 & 0xFFFFFFFFFFFFFFF8LL;
        v27 += v57 & 0xFFFFFFFFFFFFFFF8LL;
        v66 = v58 - (v57 & 0xFFFFFFFFFFFFFFF8LL);
        v67 = &v65[(_QWORD)a3 - v12];
        do {
          v68 = *(_QWORD*)v67;
          v67 += 8;
          v66 += 8LL;
          *(_QWORD*)v65 = v68;
          v65 += 8;
        } while (v66 != 0);
        if (v57 == (v57 & 0xFFFFFFFFFFFFFFF8LL)) {
          return result;
        }
      }
      do {
      LABEL_77:
        v70 = *v28++;
        *v27++ = v70;
      } while ((unsigned __int64)v27 < v6);
      return result;
    }
  }
  else {
    v12 = result;
    v13 = a4;
    if (v6 > a2) {
      goto LABEL_26;
    }
  }
  v14 = (char*)(v12 + v13);
  if (a5 != 0 && (__int64)(v12 - (_QWORD)a3) <= 15) {
    v15 = v13 + v12;
    if (v15 <= v12 + 8) {
      v15 = v12 + 8;
    }
    v16 = v15 + ~v12;
    if (v16 < 0x18 || v12 - (unsigned __int64)a3 < 0x20) {
      v19 = (char*)v12;
      v20 = a3;
    }
    else {
      v17 = (__int128*)(a3 + 16);
      v18 = (v16 >> 3) + 1;
      v19 = (char*)(v12 + 8 * (v18 & 0x3FFFFFFFFFFFFFFCLL));
      v20 = &a3[8 * (v18 & 0x3FFFFFFFFFFFFFFCLL)];
      v21 = (_OWORD*)(v12 + 16);
      v22 = v18 & 0x3FFFFFFFFFFFFFFCLL;
      do {
        v23 = *(v17 - 1);
        v24 = *v17;
        v17 += 2;
        v22 -= 4;
        *(v21 - 1) = v23;
        *v21 = v24;
        v21 += 2;
      } while (v22 != 0);
      if (v18 == (v18 & 0x3FFFFFFFFFFFFFFCLL)) {
        return result;
      }
    }
    do {
      v59 = *(_QWORD*)v20;
      v20 += 8;
      *(_QWORD*)v19 = v59;
      v19 += 8;
    } while (v19 < v14);
    return result;
  }
  *(_OWORD*)v12 = *(_OWORD*)a3;
  v41 = (char*)(v12 + 16);
  if (v13 >= 0x11) {
    v42 = (__int128*)(a3 + 32);
    do {
      *(_OWORD*)v41 = *(v42 - 1);
      v43 = *v42;
      v42 += 2;
      *((_OWORD*)v41 + 1) = v43;
      v41 += 32;
    } while (v41 < v14);
  }
  return result;
}

#pragma GCC visibility pop
