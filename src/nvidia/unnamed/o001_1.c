#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1a0620(_QWORD);
__int64 CudaDriverRoutine_248870(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);

__int64 CudaDriverHr_1f2be0(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3;
  _DWORD* v7;
  __int64 v8;
  __int64 result;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char v17;
  int8x16_t v18;

  v3 = *(_QWORD*)(a1 + 24);
  if (v3 == 0 || (CudaDriverRoutine_1a0620(*(_QWORD*)(a1 + 24)) & 1) == 0) {
    return 0;
  }
  v7 = (_DWORD*)(a1 + 23372880);
  if ((a2 & 1) != 0) {
    if (*v7 != 0) {
      v8 = 0;
      while (1) {
        result = (*(__int64 (**)(__int64, _QWORD, _QWORD, int8x16_t*))(
            a1 + 23376112))(a1 + 23372872, *(_QWORD*)(v3 + 608),
                            (unsigned int)v8, &v18);
        if ((_DWORD)result != 0) {
          return result;
        }
        v10 = *(_DWORD*)(a1 + 23372884);
        v18 = *(int8x16_t*)(a1 + 23368776 + 16 * v8);
        if (v10 != 0) {
          v11 = 0;
          do {
            if (v11 > 0x3F) {
              v13 = 64 - v11;
              if ((unsigned int)v11 > 0x40) {
                v13 = 0;
              }
              v12 = ((uint64_t*)&v18)[1] >> v11 << v13;
            }
            else {
              v12 = ((uint64_t*)&v18)[0] >> v11;
            }
            result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(
                a1 + 23376960))(*(_QWORD*)(v3 + 608), (unsigned int)v8,
                                (unsigned int)v11, v12 & 1);
            if ((_DWORD)result != 0) {
              return result;
            }
          } while (++v11 < *(unsigned int*)(a1 + 23372884));
        }
        if (++v8 >= (unsigned __int64)(unsigned int)*v7) {
          goto LABEL_29;
        }
      }
    }
    goto LABEL_29;
  }
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, int8x16_t*))(
      a1 + 23376112))(a1 + 23372872, *(_QWORD*)(v3 + 608), a3, &v18);
  if ((_DWORD)result != 0) {
    return result;
  }
  v14 = *(_DWORD*)(a1 + 23372884);
  v18 = vorrq_s8(*(int8x16_t*)(a1 + 16LL * a3 + 23368776),
                 vbicq_s8(v18, *(int8x16_t*)(a1 + 91280LL * a3 + 1144)));
  if (v14 == 0) {
  LABEL_28:
    result = (*(__int64 (**)(__int64, _QWORD, int8x16_t*))(a1 + 23375408))(
        a1, a3, &v18);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_29:
    result = (*(__int64 (**)(__int64, _QWORD, __int64))(
        *(_QWORD*)(a1 + 32306416) + 296LL))(a1, *(_QWORD*)(v3 + 248), 2);
    if ((_DWORD)result != 0) {
      return result;
    }
    return 0;
  }
  v15 = 0;
  while (1) {
    if (v15 > 0x3F) {
      v17 = 64 - v15;
      if ((unsigned int)v15 > 0x40) {
        v17 = 0;
      }
      v16 = ((uint64_t*)&v18)[1] >> v15 << v17;
    }
    else {
      v16 = ((uint64_t*)&v18)[0] >> v15;
    }
    result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(
        a1 + 23376960))(*(_QWORD*)(v3 + 608), a3, (unsigned int)v15, v16 & 1);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (++v15 >= *(unsigned int*)(a1 + 23372884)) {
      goto LABEL_28;
    }
  }
}

__int64 CudaDriverHr_247f40(unsigned __int64 a1, unsigned __int64 a2,
                            __int64 a3, _DWORD* a4, _DWORD* a5, char* a6,
                            unsigned __int64 a7, __int64 a8, __int64 a9)
{
  unsigned __int64 v10;
  _DWORD* v11;
  __int64 v12;
  _DWORD* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned __int64 v28;
  unsigned __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;
  _BYTE* v35;
  char v36;
  int8x16_t v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  int8x16_t* v41;
  int8x16_t v42;
  int8x16_t v43;
  char* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  int8x8_t v48;
  int8x8x2_t v49;
  int8x16x2_t v50;
  int8x16x2_t v51;

  if (a7 == 0) {
    return -72;
  }
  v10 = (unsigned __int8)*a6;
  if (*a6 < 0) {
    v16 = (v10 - 126) >> 1;
    if (v16 >= a7) {
      return -72;
    }
    v15 = v10 - 127;
    if (v10 - 127 >= a2) {
      return -20;
    }
    if (v10 == 127) {
      *(_DWORD*)(a3 + 48) = 0;
      v17 = -20;
      *(_OWORD*)(a3 + 16) = 0u;
      *(_OWORD*)(a3 + 32) = 0u;
      *(_OWORD*)a3 = 0u;
      return v17;
    }
    v28 = v10 - 128;
    if (v10 - 128 < 0xE || ((v29 = (unsigned __int64)(a6 + 1),
                             a1 < (unsigned __int64)&a6[(v28 >> 1) + 2])
                                ? (v30 = v29 >= a1 + (v10 & 0x7E) + 2)
                                : (v30 = true),
                            !v30)) {
      v12 = a3;
      v13 = a4;
      v33 = 0;
      goto LABEL_29;
    }
    v31 = (v28 >> 1) + 1;
    if (v28 >= 0x3E) {
      ((uint64_t*)&v37)[0] = 0xF0F0F0F0F0F0F0FLL;
      ((uint64_t*)&v37)[1] = 0xF0F0F0F0F0F0F0FLL;
      v32 = v31 & 0x60;
      v38 = (char*)(a1 + 32);
      v12 = a3;
      v13 = a4;
      v39 = 0;
      do {
        v40 = v39 & 0x7FFFFFFFFFFFFFE0LL;
        v39 += 32;
        v41 = (int8x16_t*)(v29 + v40);
        v42 = *v41;
        v43 = v41[1];
        v44 = v38 - 32;
        v51.val[0] = vshrq_n_u8(v43, 4u);
        v51.val[1] = vandq_s8(v43, v37);
        v50.val[0] = vshrq_n_u8(v42, 4u);
        v50.val[1] = vandq_s8(v42, v37);
        vst2q_s8(v38, v51);
        v38 += 64;
        vst2q_s8(v44, v50);
      } while (v32 != v39);
      if (v31 == v32) {
        goto LABEL_42;
      }
      if ((v31 & 0x18) == 0) {
        v33 = 2 * v32;
      LABEL_29:
        v11 = a5;
        v34 = (unsigned __int8*)&a6[(v33 >> 1) + 1];
        do {
          v35 = (_BYTE*)(a1 + v33);
          v33 += 2LL;
          *v35 = *v34 >> 4;
          v36 = *v34++;
          v35[1] = v36 & 0xF;
        } while (v33 < v15);
        v14 = a1;
        *(_DWORD*)(v12 + 48) = 0;
        *(_OWORD*)(v12 + 16) = 0u;
        *(_OWORD*)(v12 + 32) = 0u;
        *(_OWORD*)v12 = 0u;
      LABEL_6:
        v18 = 1;
        v19 = 0;
        v20 = 0;
        while (1) {
          v21 = *(unsigned __int8*)(v14 + v19);
          if (v21 > 0xC) {
            break;
          }
          ++*(_DWORD*)(v12 + 4 * v21);
          v20 += 1 << *(_BYTE*)(v14 + v19) >> 1;
          v19 = v18++;
          if (v15 <= v19) {
            if (v20 == 0) {
              return -20;
            }
            v22 = __clz(v20);
            if ((v22 ^ 0x1C) > 0xB) {
              return -20;
            }
            *v11 = 32 - v22;
            v23 = (1 << -(char)v22) - v20;
            v24 = __clz(v23);
            if (0x80000000 >> v24 != v23) {
              return -20;
            }
            v25 = 32 - v24;
            *(_BYTE*)(v14 + v15) = v25;
            ++*(_DWORD*)(v12 + 4LL * v25);
            v17 = -20;
            v26 = *(_DWORD*)(v12 + 4);
            if (v26 >= 2 && (v26 & 1) == 0) {
              *v13 = v15 + 1;
              return v16 + 1;
            }
            return v17;
          }
        }
        return -20;
      }
    }
    else {
      v32 = 0;
    }
    v45 = v31 & 0x78;
    v46 = (char*)(a1 + 2 * v32);
    v12 = a3;
    v13 = a4;
    v33 = 2 * v45;
    do {
      v47 = v32 & 0x7FFFFFFFFFFFFFF8LL;
      v32 += 8;
      ((uint64_t*)&v48)[0] = *(unsigned __int64*)(v29 + v47);
      v49.val[0] = vshr_n_u8(v48, 4u);
      v49.val[1] = vand_s8(v48, (int8x8_t)0xF0F0F0F0F0F0F0FLL);
      vst2_s8(v46, v49);
      v46 += 16;
    } while (v45 != v32);
    if (v31 != v45) {
      goto LABEL_29;
    }
  LABEL_42:
    v11 = a5;
    v14 = a1;
    *(_DWORD*)(v12 + 48) = 0;
    *(_OWORD*)(v12 + 16) = 0u;
    *(_OWORD*)(v12 + 32) = 0u;
    *(_OWORD*)v12 = 0u;
    goto LABEL_6;
  }
  if (a7 <= v10) {
    return -72;
  }
  v11 = a5;
  v12 = a3;
  v13 = a4;
  v14 = a1;
  v15 = CudaDriverRoutine_248870(a1, a2 - 1, a6 + 1, (unsigned __int8)*a6, 6,
                                 a8, a9);
  v16 = v10;
  v17 = v15;
  if (v15 <= 0xFFFFFFFFFFFFFF88LL) {
    *(_DWORD*)(v12 + 48) = 0;
    *(_OWORD*)(v12 + 16) = 0u;
    *(_OWORD*)(v12 + 32) = 0u;
    *(_OWORD*)v12 = 0u;
    if (v15 != 0) {
      goto LABEL_6;
    }
    return -20;
  }
  return v17;
}

int* CudaDriverHr_252f20(int* result, __int64 a2, int a3, __int64 a4,
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

#pragma GCC visibility pop
