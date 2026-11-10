#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_1a0b960(_QWORD, _QWORD);
__int64 GameRoutine_5fa0(unsigned int*, unsigned __int64);
__int64 Value_2870(__int64 result);
__int64 Value_2ad0(__int64*, __int64, __int64);
__int64 Value_33e0(__int64, __int64);
__int64 Value_9220(__int64, __int64);
__int64 Value_98c0(__int64, __int64);
__int64 __errno_location(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strtod(_QWORD, _QWORD);
__int64 timeline_OutputStream_Write(__int64, __int64, __int64);
__int64 timeline_WriterStateStack_Back(unsigned int*);
bool Value_28c0(__int64, unsigned __int64);
extern _DWORD GameData_1b37d88[29];
extern _UNKNOWN GameData_1a83a80;
extern __int128 GameData_1a82930;
extern __int128 GameData_1a82b10;
extern __int128 GameData_1a82f10;
extern __int128 GameData_1a837d0;
extern __int64 (*nn_nlib_MemoryInputStream_vtable[])();
extern __int64 GameData_212c060;
unsigned __int64 Value_2640(_QWORD*, __int64, unsigned __int64);
void GameRoutine_651250(void*);
void GameRoutine_651310(void*);
int8x16_t* timeline_1460(unsigned __int64 a1, unsigned __int64* a2,
                         int8x16_t* a3, unsigned __int64 a4);
__int64 timeline_18e0(double* a1, unsigned __int8** a2, unsigned __int8* a3,
                      unsigned __int8* a4);
__int64 timeline_1ee0(_QWORD* a1, unsigned __int8* a2, _QWORD* a3);
__int64 timeline_2020(unsigned __int16* a1, _WORD* a2);
__int64 timeline_21c0(unsigned int* a1, unsigned int* a2);
__int64 timeline_2360(unsigned __int64* a1, unsigned __int64* a2);
int* timeline_2de0(__int64 a1, unsigned __int64 a2);
__int64 timeline_7910(__int64 a1, int8x16_t* a2);
__int64 timeline_86a0(__int64 a1, int* a2, _BYTE* a3, unsigned __int64 a4);

int8x16_t* timeline_1460(unsigned __int64 a1, unsigned __int64* a2,
                         int8x16_t* a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  int8x16_t* v5;
  __int64 v6;
  __int64 v7;
  int8x16_t* result;
  unsigned int v9;
  bool v10;
  __int64 v11;
  uint8x16_t* v13;
  unsigned __int64 v14;
  int8x16_t v15;
  int8x16_t v16;
  unsigned __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned __int64 v21;
  unsigned int v22;
  __int64 v23;
  int8x16_t v27;
  int8x16_t v28;
  unsigned __int64 v29;
  int v30;
  int8x16_t v31;
  int8x16_t v32;
  unsigned int v33;
  int8x16_t v34;
  int8x16_t v35;
  unsigned __int64 v36;
  unsigned int v37;

  v4 = a4;
  v5 = a3;
  if ((a1 | (unsigned __int64)a2) != 0) {
    if (v4 < 0x10) {
      v30 = 0;
      v29 = 0;
    LABEL_49:
      v36 = 0;
      if (v4 != 0) {
        do {
          v37 = LANES128(*(v5)).n128_u8[v36];
          if (v37 > 0xC) {
            if (v37 != 13 && v37 != 32) {
              goto LABEL_60;
            }
          }
          else if (v37 != 9) {
            if (v37 != 10) {
              goto LABEL_60;
            }
            ++v30;
            v29 = (unsigned __int64)LANES128(*(v5)).n128_u64 + v36;
          }
          ++v36;
        } while (v4 != v36);
        v36 = v4;
      }
    LABEL_60:
      if (a1 != 0) {
        *(_QWORD*)a1 = v30;
      }
      if (a2 != nullptr) {
        *a2 = v29;
      }
      return (int8x16_t*)((char*)v5 + v36);
    }
    else {
      LANES128(v27).n128_u64[0] = 0xA0A0A0A0A0A0A0ALL;
      LANES128(v27).n128_u64[1] = 0xA0A0A0A0A0A0A0ALL;
      LANES128(v28).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v28).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
      v29 = 0;
      v30 = 0;
      while (1) {
        v31 = vceqq_s8(*v5, v27);
        v32 = vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82b10),
                                  vandq_s8(*v5, v28)),
                       vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f10),
                                  vshrq_n_u8(*v5, 4u)));
        if (vmaxvq_u32(v32) != 0) {
          break;
        }
        if (vmaxvq_u32(v31) != 0) {
          v29 = (unsigned __int64)&LANES128(*(v5)).n128_u64[1] -
                (__clz(LANES64_OF(vshrn_n_s16(v31, 4u)).n64_u64[0]) >> 2) + 7;
          v30 -= vaddvq_s8(v31);
        }
        ++v5;
        v4 -= 16LL;
        if (v4 <= 0xF) {
          goto LABEL_49;
        }
      }
      v33 = (unsigned int)__clz(__rbit64(
                LANES64_OF(vshrn_n_s16(vtstq_s8(v32, v32), 4u)).n64_u64[0])) >>
            2;
      if (vmaxvq_u32(v31) != 0) {
        LANES128(v34).n128_u64[0] = 0xA0A0A0A0A0A0A0ALL;
        LANES128(v34).n128_u64[1] = 0xA0A0A0A0A0A0A0ALL;
        v35 = vandq_s8(vceqq_s8(*v5, v34),
                       *(int8x16_t*)((char*)&GameData_1a83a80 - v33 + 16));
        if (vmaxvq_u32(v35) != 0) {
          v29 = (unsigned __int64)&LANES128(*(v5)).n128_u64[1] -
                (__clz(LANES64_OF(vshrn_n_s16(v35, 4u)).n64_u64[0]) >> 2) + 7;
          v30 -= vaddvq_s8(v35);
        }
      }
      if (a1 != 0) {
        *(_QWORD*)a1 = v30;
      }
      if (a2 != nullptr) {
        *a2 = v29;
      }
      return (int8x16_t*)((char*)v5 + v33);
    }
  }
  else if (a4 < 0x10) {
    v21 = 0;
    if (a4 != 0) {
      while (1) {
        v22 = LANES128(*(a3)).n128_u8[v21];
        v10 = v22 > 0x20;
        v23 = (1LL << v22) & 0x100002600LL;
        if (v10 || v23 == 0) {
          break;
        }
        if (a4 == ++v21) {
          v21 = a4;
          return (int8x16_t*)((char*)a3 + v21);
        }
      }
    }
    return (int8x16_t*)((char*)a3 + v21);
  }
  else {
    v6 = 8;
    if (a4 - 16 < 8) {
      v6 = a4 - 16;
    }
    if (a4 == 16) {
    LABEL_12:
      v13 = (int8x16_t*)((char*)a3 + v6);
      v14 = a4 - v6;
      if (v14 < 0x10) {
      LABEL_16:
        v17 = 0;
        if (v14 != 0) {
          while (1) {
            v18 = LANES128(*(v13)).n128_u8[v17];
            v10 = v18 > 0x20;
            v19 = (1LL << v18) & 0x100002600LL;
            if (v10 || v19 == 0) {
              break;
            }
            if (v14 == ++v17) {
              v17 = v14;
              return (uint8x16_t*)((char*)v13 + v17);
            }
          }
        }
        return (uint8x16_t*)((char*)v13 + v17);
      }
      else {
        LANES128(v15).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
        LANES128(v15).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
        while (1) {
          v16 = vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82b10),
                                    vandq_s8(*v13, v15)),
                         vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f10),
                                    vshrq_n_u8(*v13, 4u)));
          if (vmaxvq_u32(v16) != 0) {
            return (uint8x16_t*)((char*)v13 +
                                 (__clz(__rbit64(
                                      LANES64_OF(
                                          vshrn_n_s16(vtstq_s8(v16, v16), 4u))
                                          .n64_u64[0])) >>
                                  2));
          }
          ++v13;
          v14 -= 16LL;
          if (v14 <= 0xF) {
            goto LABEL_16;
          }
        }
      }
    }
    else {
      v7 = v6;
      result = a3;
      while (1) {
        v9 = LANES128(*(result)).n128_u8[0];
        v10 = v9 > 0x20;
        v11 = (1LL << v9) & 0x100002600LL;
        if (v10 || v11 == 0) {
          break;
        }
        result = (int8x16_t*)((char*)result + 1);
        if (--v7 == 0) {
          goto LABEL_12;
        }
      }
    }
  }
  return result;
}

__int64 timeline_18e0(double* a1, unsigned __int8** a2, unsigned __int8* a3,
                      unsigned __int8* a4)
{
  double v4;
  int v6;
  unsigned __int8* v7;
  int v8;
  unsigned __int8* v9;
  int v10;
  int v11;
  double v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  int v20;
  int v21;
  unsigned __int8* v22;
  int v23;
  unsigned __int8* v24;
  int v25;
  int v26;
  unsigned __int8* v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  double v32;
  bool v33;
  double v34;
  unsigned __int8* v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned int v40;
  unsigned __int8 v41[128];

  if (a3 == a4) {
    v16 = 0;
    v17 = 22;
    v13 = a4;
    if (a2 == nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v6 = *a3;
  v7 = a3;
  v8 = v6;
  if (v6 == 45) {
    v7 = a3 + 1;
    if (a3 + 1 == a4) {
      goto LABEL_33;
    }
    v8 = *v7;
  }
  if (v8 != 48) {
    if ((unsigned __int8)(v8 - 58) >= 0xF6u) {
      v12 = 0x0.0p+0;
      v22 = v7 + 1;
      v10 = 0;
      v11 = 0;
      do {
        if (v10 > 17) {
          --v11;
          if (v22 == a4) {
            goto LABEL_40;
          }
        }
        else {
          ++v10;
          v12 = (double)(unsigned __int8)v8 + v12 * 0x1.4000000000000p+3 +
                -0x1.8000000000000p+5;
          if (v22 == a4) {
            goto LABEL_40;
          }
        }
        v23 = *v22++;
        v8 = v23;
      } while ((unsigned int)(v23 - 48) < 0xA);
      v9 = v22 - 1;
      if (v8 == 46) {
        goto LABEL_8;
      }
    LABEL_45:
      v13 = v9;
      if (v10 <= 17) {
        goto LABEL_27;
      }
      goto LABEL_46;
    }
  LABEL_33:
    v16 = 0;
    v17 = 22;
    v13 = a3;
    if (a2 == nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v9 = v7 + 1;
  if (v7 + 1 == a4) {
    v17 = 0;
    v16 = 1;
    v4 = 0x0.0p+0;
    v13 = a4;
    if (a2 == nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v8 = *v9;
  v10 = 0;
  v11 = 0;
  v12 = 0x0.0p+0;
  if (v8 != 46) {
    goto LABEL_45;
  }
LABEL_8:
  v13 = v9 + 1;
  if (v9 + 1 == a4) {
    v8 = 0;
    if (v10 <= 17) {
      goto LABEL_27;
    }
  }
  else {
    v8 = *v13;
    if ((unsigned int)(v8 - 48) > 9) {
      if (v10 <= 17) {
        goto LABEL_27;
      }
    }
    else {
      v14 = v9 + 2;
      while (1) {
        if (v10 <= 17) {
          ++v10;
          ++v11;
          v12 = (double)(unsigned __int8)v8 + v12 * 0x1.4000000000000p+3 +
                -0x1.8000000000000p+5;
        }
        if (v14 == a4) {
          break;
        }
        v15 = *v14++;
        v8 = v15;
        if ((unsigned int)(v15 - 48) >= 0xA) {
          v13 = v14 - 1;
          if (v10 > 17) {
            goto LABEL_46;
          }
          goto LABEL_27;
        }
      }
    LABEL_40:
      v8 = 0;
      v13 = a4;
      if (v10 <= 17) {
      LABEL_27:
        v20 = (2 - (_BYTE)v10) & 7;
        if (((2 - (_BYTE)v10) & 7) != 0) {
          v21 = v10;
          do {
            v12 = v12 * 0x1.4000000000000p+3;
            ++v21;
            --v20;
          } while (v20 != 0);
          if ((unsigned int)(v10 - 11) < 7) {
          LABEL_63:
            v11 = v11 - v10 + 18;
            if ((v8 & 0xFFFFFFDF) != 0x45) {
              goto LABEL_64;
            }
            goto LABEL_47;
          }
        }
        else {
          v21 = v10;
          if ((unsigned int)(v10 - 11) < 7) {
            goto LABEL_63;
          }
        }
        v31 = v21 - 18;
        do {
          v31 += 8;
          v12 = v12 * 0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
                0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
                0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
                0x1.4000000000000p+3 * 0x1.4000000000000p+3;
        } while (v31 != 0);
        goto LABEL_63;
      }
    }
  }
LABEL_46:
  if ((v8 & 0xFFFFFFDF) != 0x45) {
  LABEL_64:
    v27 = nullptr;
    goto LABEL_65;
  }
LABEL_47:
  v24 = v13 + 1;
  if (v13 + 1 != a4) {
    v25 = *v24;
    if (v25 == 45 || (v26 = *v24, v25 == 43)) {
      v24 = v13 + 2;
      if (v13 + 2 == a4) {
        goto LABEL_53;
      }
      v26 = *v24;
    }
    if ((unsigned int)(v26 - 58) >= 0xFFFFFFF6) {
      v35 = v24 + 1;
      v36 = 0;
      while (1) {
        if (v36 - v11 >= 1000) {
          while (v35 != a4) {
            v38 = *v35++;
            if ((unsigned int)(v38 - 48) >= 0xA) {
              v13 = v35 - 1;
              v17 = 34;
              v16 = 0;
              goto LABEL_132;
            }
          }
          v16 = 0;
          v17 = 34;
          v13 = a4;
          if (a2 != nullptr) {
            goto LABEL_18;
          }
          goto LABEL_19;
        }
        v36 = v26 + 10 * v36 - 48;
        if (v35 == a4) {
          break;
        }
        v37 = *v35++;
        v26 = v37;
        if ((unsigned int)(v37 - 48) >= 0xA) {
          v13 = v35 - 1;
          goto LABEL_126;
        }
      }
      v13 = a4;
    LABEL_126:
      v39 = v11 + v36;
      v40 = v36 - v11;
      v27 = nullptr;
      if (v25 == 45) {
        v29 = -v39;
      }
      else {
        v29 = v40;
      }
      if ((v29 & 0x80000000) == 0) {
        goto LABEL_66;
      }
      goto LABEL_56;
    }
  }
LABEL_53:
  v27 = v24 - 1;
  v28 = *(v24 - 1);
  v13 = v24;
  if (v28 != 45 && v28 != 43) {
  LABEL_65:
    v29 = -v11;
    if ((-v11 & 0x80000000) == 0) {
      goto LABEL_66;
    }
    goto LABEL_56;
  }
  v27 = v24 - 2;
  v29 = -v11;
  if ((-v11 & 0x80000000) == 0) {
  LABEL_66:
    if (v29 < 0x123) {
      if (v29 >= 0x100) {
        v12 = v12 * 0x1.54fdd7f73bf3cp+850;
      }
      goto LABEL_72;
    }
    v17 = 34;
    v16 = 0;
    if (v29 == 291 && v12 <= 0x1.3f559e7bee6c1p+57) {
      v12 = v12 * 0x1.54fdd7f73bf3cp+850;
    LABEL_72:
      if ((v29 & 0x80) != 0) {
        v12 = v12 * 0x1.27748f9301d32p+425;
      }
      if ((v29 & 0x40) != 0) {
        v12 = v12 * 0x1.84f03e93ff9f5p+212;
      }
      if ((v29 & 0x20) != 0) {
        v12 = v12 * 0x1.3b8b5b5056e17p+106;
      }
      if ((v29 & 0x10) != 0) {
        v12 = v12 * 0x1.1c37937e08000p+53;
      }
      if ((v29 & 8) != 0) {
        v12 = v12 * 0x1.7d78400000000p+26;
      }
      if ((v29 & 4) != 0) {
        v12 = v12 * 0x1.3880000000000p+13;
      }
      if ((v29 & 2) != 0) {
        v12 = v12 * 0x1.9000000000000p+6;
      }
      v32 = 0x1.4000000000000p+3;
      v33 = (v29 & 1) == 0;
      goto LABEL_105;
    }
    goto LABEL_132;
  }
LABEL_56:
  if (v29 > 0xFFFFFEBB) {
    v30 = -v29;
  }
  else {
    v17 = 34;
    v16 = 0;
    if (v29 != -325 || v12 < 0x1.8b40a4eec437cp+57) {
    LABEL_132:
      if (a2 == nullptr) {
        goto LABEL_19;
      }
    LABEL_18:
      *a2 = v13;
      goto LABEL_19;
    }
    LOWORD(v30) = 325;
  }
  if ((v30 & 0x100) != 0) {
    v12 = v12 * 0x1.8062864ac6f43p-851;
  }
  if ((v30 & 0x80) != 0) {
    v12 = v12 * 0x1.bba08cf8c979dp-426;
  }
  if ((v30 & 0x40) != 0) {
    v12 = v12 * 0x1.50ffd44f4a73dp-213;
  }
  if ((v30 & 0x20) != 0) {
    v12 = v12 * 0x1.9f623d5a8a733p-107;
  }
  if ((v30 & 0x10) != 0) {
    v12 = v12 * 0x1.cd2b297d889bcp-54;
  }
  if ((v30 & 8) != 0) {
    v12 = v12 * 0x1.5798ee2308c3ap-27;
  }
  if ((v30 & 4) != 0) {
    v12 = v12 * 0x1.a36e2eb1c432dp-14;
  }
  if ((v30 & 2) != 0) {
    v12 = v12 * 0x1.47ae147ae147bp-7;
  }
  v32 = 0x1.999999999999ap-4;
  v33 = (v30 & 1) == 0;
LABEL_105:
  v34 = v12 * v32;
  if (!v33) {
    v12 = v34;
  }
  v17 = 0;
  v16 = 1;
  if (v6 == 45) {
    v4 = -v12;
  }
  else {
    v4 = v12;
  }
  if (v27 != nullptr) {
    v13 = v27;
  }
  if (a2 != nullptr) {
    goto LABEL_18;
  }
LABEL_19:
  if (v16 != 0) {
    if ((unsigned __int64)(a4 - a3) >= 0x7F) {
      v18 = 127;
    }
    else {
      v18 = a4 - a3;
    }
    memcpy(v41, a3, v18);
    v41[v18] = 0;
    if ((unsigned int)timeline_1ee0(a1, v41, nullptr) != 0) {
      *a1 = v4;
    }
  }
  return v17;
}

__int64 timeline_1ee0(_QWORD* a1, unsigned __int8* a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  bool v5;
  __int64 v6;
  __int64 result;
  _DWORD* v12;
  __int64 v13;
  unsigned __int8* v14;
  _QWORD v15[3];

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(double, "d0", "=w"));
  v4 = *a2;
  v5 = v4 > 0x20;
  v6 = (1LL << v4) & 0x100000601LL;
  if (!v5 && v6 != 0) {
    return 84;
  }
  v15[1] = v3;
  v12 = (_DWORD*)__errno_location(),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(double, "d0", "=w"));
  *v12 = 0;
  strtod(a2, v15),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(double, "d0", "=w"));
  v14 = (unsigned __int8*)v15[0];
  if (a3 != nullptr) {
    *a3 = v15[0];
    if (v14 != a2) {
    LABEL_8:
      result = (unsigned int)*v12;
      *a1 = v13;
      return result;
    }
  }
  else if (*(_BYTE*)v15[0] == 0) {
    goto LABEL_8;
  }
  return 84;
}

__int64 timeline_2020(unsigned __int16* a1, _WORD* a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int16* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;

  v3 = *((_QWORD*)a1 + 2);
  v4 = *((_QWORD*)a1 + 3);
  if (v3 + 2 <= v4) {
    v8 = *((unsigned __int16**)a1 + 2);
  }
  else {
    v6 = *(_QWORD*)a1;
    v7 = v4 - v3;
    v8 = a1 + 16;
    if (v4 - v3 <= 0x200) {
      memmove(a1 + 16, v3, v4 - v3);
    }
    v9 = (char*)v8 + v7;
    v10 = 512 - v7;
    if ((__int64)(512 - v7) < 0) {
      if (*(_DWORD*)(v6 + 60) != 0) {
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = v9;
        if (v7 <= 1) {
          goto LABEL_17;
        }
      }
      else {
        *(_DWORD*)(v6 + 60) = 22;
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = v9;
        if (v7 <= 1) {
        LABEL_17:
          if (*(_DWORD*)(*(_QWORD*)a1 + 60LL) == 0 || *((_DWORD*)a1 + 2) != 0) {
            return 0;
          }
          *((_DWORD*)a1 + 2) = 5;
          return 0;
        }
      }
    }
    else {
      v11 = *(_QWORD*)(v6 + 16);
      if (v11 + v10 <= *(_QWORD*)(v6 + 24)) {
        memcpy((char*)v8 + v7, *(_QWORD*)(v6 + 40) + v11, 512 - v7);
        *(_QWORD*)(v6 + 16) += v10;
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = &v9[v10];
      }
      else {
        v12 = Value_2640((_QWORD*)v6, (__int64)v8 + v7, 512 - v7);
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = &v9[v12];
        if (v12 + v7 <= 1) {
          goto LABEL_17;
        }
      }
    }
  }
  v13 = *v8;
  *a2 = v13;
  if (*((_BYTE*)a1 + 12) == 1) {
    *a2 = __rev16(v13);
  }
  *((_QWORD*)a1 + 2) += 2LL;
  return 1;
}

__int64 timeline_21c0(unsigned int* a1, unsigned int* a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;

  v3 = *((_QWORD*)a1 + 2);
  v4 = *((_QWORD*)a1 + 3);
  if (v3 + 4 <= v4) {
    v8 = *((unsigned int**)a1 + 2);
  }
  else {
    v6 = *(_QWORD*)a1;
    v7 = v4 - v3;
    v8 = a1 + 8;
    if (v4 - v3 <= 0x200) {
      memmove(a1 + 8, v3, v4 - v3);
    }
    v9 = (char*)v8 + v7;
    v10 = 512 - v7;
    if ((__int64)(512 - v7) < 0) {
      if (*(_DWORD*)(v6 + 60) != 0) {
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = v9;
        if (v7 <= 3) {
          goto LABEL_17;
        }
      }
      else {
        *(_DWORD*)(v6 + 60) = 22;
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = v9;
        if (v7 <= 3) {
        LABEL_17:
          if (*(_DWORD*)(*(_QWORD*)a1 + 60LL) == 0 || a1[2] != 0) {
            return 0;
          }
          a1[2] = 5;
          return 0;
        }
      }
    }
    else {
      v11 = *(_QWORD*)(v6 + 16);
      if (v11 + v10 <= *(_QWORD*)(v6 + 24)) {
        memcpy((char*)v8 + v7, *(_QWORD*)(v6 + 40) + v11, 512 - v7);
        *(_QWORD*)(v6 + 16) += v10;
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = &v9[v10];
      }
      else {
        v12 = Value_2640((_QWORD*)v6, (__int64)v8 + v7, 512 - v7);
        *((_QWORD*)a1 + 2) = v8;
        *((_QWORD*)a1 + 3) = &v9[v12];
        if (v12 + v7 <= 3) {
          goto LABEL_17;
        }
      }
    }
  }
  v13 = *v8;
  *a2 = *v8;
  if (*((_BYTE*)a1 + 12) == 1) {
    *a2 = bswap32(v13);
  }
  *((_QWORD*)a1 + 2) += 4LL;
  return 1;
}

__int64 timeline_2360(unsigned __int64* a1, unsigned __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;

  v3 = a1[2];
  v4 = a1[3];
  if (v3 + 8 <= v4) {
    v8 = (unsigned __int64*)a1[2];
  }
  else {
    v6 = *a1;
    v7 = v4 - v3;
    v8 = a1 + 4;
    if (v4 - v3 <= 0x200) {
      memmove(a1 + 4, v3, v4 - v3);
    }
    v9 = (char*)v8 + v7;
    v10 = 512 - v7;
    if ((__int64)(512 - v7) < 0) {
      if (*(_DWORD*)(v6 + 60) != 0) {
        a1[2] = (unsigned __int64)v8;
        a1[3] = (unsigned __int64)v9;
        if (v7 <= 7) {
          goto LABEL_17;
        }
      }
      else {
        *(_DWORD*)(v6 + 60) = 22;
        a1[2] = (unsigned __int64)v8;
        a1[3] = (unsigned __int64)v9;
        if (v7 <= 7) {
        LABEL_17:
          if (*(_DWORD*)(*a1 + 60) == 0 || *((_DWORD*)a1 + 2) != 0) {
            return 0;
          }
          *((_DWORD*)a1 + 2) = 5;
          return 0;
        }
      }
    }
    else {
      v11 = *(_QWORD*)(v6 + 16);
      if (v11 + v10 <= *(_QWORD*)(v6 + 24)) {
        memcpy((char*)v8 + v7, *(_QWORD*)(v6 + 40) + v11, 512 - v7);
        *(_QWORD*)(v6 + 16) += v10;
        a1[2] = (unsigned __int64)v8;
        a1[3] = (unsigned __int64)&v9[v10];
      }
      else {
        v12 = Value_2640((_QWORD*)v6, (__int64)v8 + v7, 512 - v7);
        a1[2] = (unsigned __int64)v8;
        a1[3] = (unsigned __int64)&v9[v12];
        if (v12 + v7 <= 7) {
          goto LABEL_17;
        }
      }
    }
  }
  v13 = *v8;
  *a2 = *v8;
  if (*((_BYTE*)a1 + 12) == 1) {
    *a2 = bswap64(v13);
  }
  a1[2] += 8LL;
  return 1;
}

int* timeline_2de0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int* v5;
  int v6;
  __int64* v7;
  __int64 v8;
  _DWORD* v9;
  unsigned int v10;
  bool v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  int v35;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  char v41;
  _BYTE* v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  char v47;
  _BYTE* v48;
  __int64 v49;
  __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  char v54;

  if (HIDWORD(a2) != 0) {
    if (*(_DWORD*)a1 == 0) {
      *(_DWORD*)a1 = 14;
    }
    v14 = nullptr;
    *(_DWORD*)timeline_WriterStateStack_Back((unsigned int*)(a1 + 16)) = 5;
  }
  else {
    v3 = *(unsigned int*)(a1 + 16);
    v2 = *(unsigned int*)(a1 + 20);
    v4 = v2 - 1;
    if (v2 - 1 >= v3) {
      v15 = v4 - v3;
      v16 = __clz(v15 + 16);
      v5 = (int*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v16) + 8) +
                  8LL * (unsigned int)(v15 - GameData_1b37d88[28 - v16]));
      v6 = *v5;
      if (*v5 > 2) {
      LABEL_4:
        if (v6 <= 5) {
          if (v6 != 3) {
            if (v6 == 4) {
              v7 = *(__int64**)(a1 + 32);
              if (v7 != nullptr && (v8 = *v7) != 0) {
                if ((unsigned int)GameData_1b37d88[v8 + 1] + v3 <= v2) {
                  goto LABEL_10;
                }
              }
              else if (v3 <= v2) {
              LABEL_10:
                v9 = (_DWORD*)a1;
                if ((GameRoutine_5fa0((unsigned int*)(a1 + 16), 0) & 1) != 0) {
                  v10 = v9[4];
                  LODWORD(v2) = v9[5];
                  a1 = (__int64)v9;
                  v11 = (unsigned int)v2 >= v10;
                  v12 = v2 - v10;
                  if (!v11) {
                    goto LABEL_57;
                  }
                  goto LABEL_13;
                }
                goto LABEL_45;
              }
              v11 = (unsigned int)v2 >= (unsigned int)v3;
              v12 = v2 - v3;
              if (!v11) {
              LABEL_57:
                v14 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * (unsigned int)v2);
                goto LABEL_58;
              }
            LABEL_13:
              v13 = __clz(v12 + 16);
              v14 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v13) +
                                         8) +
                              8LL * (unsigned int)(v12 -
                                                   GameData_1b37d88[28 - v13]));
            LABEL_58:
              *v14 = 0;
              ++*(_DWORD*)(a1 + 20);
              v35 = 7;
              goto LABEL_48;
            }
            return nullptr;
          }
        LABEL_27:
          if (*(_DWORD*)a1 == 0) {
            *(_DWORD*)a1 = 1;
          }
          goto LABEL_47;
        }
        if (v6 != 6) {
          if (v6 == 7) {
            goto LABEL_27;
          }
          return nullptr;
        }
        v22 = *(__int64**)(a1 + 32);
        if (v22 != nullptr && (v23 = *v22) != 0) {
          if ((unsigned int)GameData_1b37d88[v23 + 1] + v3 <= v2) {
            goto LABEL_34;
          }
        }
        else if (v3 <= v2) {
        LABEL_34:
          v9 = (_DWORD*)a1;
          if ((GameRoutine_5fa0((unsigned int*)(a1 + 16), 0) & 1) != 0) {
            v24 = v9[4];
            LODWORD(v2) = v9[5];
            a1 = (__int64)v9;
            v11 = (unsigned int)v2 >= v24;
            v25 = v2 - v24;
            if (!v11) {
            LABEL_52:
              v14 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * (unsigned int)v2);
              *v14 = 0;
              ++*(_DWORD*)(a1 + 20);
              if ((*(_BYTE*)(a1 + 4) & 2) != 0) {
              LABEL_53:
                v37 = v5[1];
                if (v37 != 0) {
                  v5[1] = v37 - 1;
                  return (int*)v14;
                }
                goto LABEL_87;
              }
            LABEL_38:
              v27 = *(_QWORD*)(a1 + 80);
              v28 = a1 + 152;
              if (v27 + 1 > (unsigned __int64)(a1 + 152)) {
                v29 = *(_QWORD*)(a1 + 8);
                v30 = a1 + 88;
                v31 = v27 - (a1 + 88);
                *(_QWORD*)(a1 + 80) = a1 + 88;
                if (v31 < 0) {
                  if (*(_DWORD*)(v29 + 40) == 0) {
                    *(_DWORD*)(v29 + 40) = 22;
                  }
                  goto LABEL_69;
                }
                v32 = *(_QWORD*)(v29 + 16);
                v33 = a1;
                if ((unsigned __int64)(v32 + v31) <= *(_QWORD*)(v29 + 32)) {
                  memcpy(*(_QWORD*)(v29 + 24) + v32, v30, v31);
                  a1 = v33;
                  *(_QWORD*)(v29 + 16) += v31;
                }
                else {
                  v34 = Value_2ad0((__int64*)v29, v30, v31);
                  a1 = v33;
                  if ((v34 & 1) == 0) {
                    goto LABEL_69;
                  }
                }
              }
              **(_BYTE**)(a1 + 80) = 44;
              v40 = *(_QWORD*)(a1 + 80);
              v41 = *(_BYTE*)(a1 + 4);
              v42 = (_BYTE*)(v40 + 1);
              *(_QWORD*)(a1 + 80) = v40 + 1;
              if ((v41 & 4) == 0) {
                return (int*)v14;
              }
              v43 = a1;
              if (v40 + 2 > v28) {
                v44 = *(_QWORD*)(a1 + 8);
                *(_QWORD*)(v43 + 80) = v43 + 88;
                v45 = timeline_OutputStream_Write(v44, v43 + 88,
                                                  (__int64)&v42[-v43 - 88]);
                a1 = v43;
                if ((v45 & 1) == 0) {
                  goto LABEL_69;
                }
                v42 = *(_BYTE**)(v43 + 80);
              }
              *v42 = 10;
              v46 = *(unsigned int*)(v43 + 20);
              ++*(_QWORD*)(v43 + 80);
              v47 = Value_33e0(v43, v46);
              a1 = v43;
              if ((v47 & 1) != 0) {
                return (int*)v14;
              }
              goto LABEL_69;
            }
          LABEL_37:
            v26 = __clz(v25 + 16);
            v14 =
                (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v26) + 8) +
                          8LL *
                              (unsigned int)(v25 - GameData_1b37d88[28 - v26]));
            *v14 = 0;
            ++*(_DWORD*)(a1 + 20);
            if ((*(_BYTE*)(a1 + 4) & 2) != 0) {
              goto LABEL_53;
            }
            goto LABEL_38;
          }
        LABEL_45:
          if (*v9 == 0) {
            *v9 = 9;
          }
        LABEL_47:
          v35 = 5;
          v14 = nullptr;
        LABEL_48:
          *v5 = v35;
          return (int*)v14;
        }
        v11 = (unsigned int)v2 >= (unsigned int)v3;
        v25 = v2 - v3;
        if (!v11) {
          goto LABEL_52;
        }
        goto LABEL_37;
      }
    }
    else {
      v5 = (int*)(*(_QWORD*)(a1 + 24) + 8 * v4);
      v6 = *v5;
      if (*v5 > 2) {
        goto LABEL_4;
      }
    }
    if (v6 != 0) {
      if (v6 == 1) {
        if (*(_DWORD*)a1 == 0) {
          *(_DWORD*)a1 = 11;
        }
        goto LABEL_47;
      }
      if (v6 != 2) {
        return nullptr;
      }
      v17 = *(__int64**)(a1 + 32);
      if (v17 != nullptr && (v18 = *v17) != 0) {
        if ((unsigned int)GameData_1b37d88[v18 + 1] + v3 <= v2) {
          goto LABEL_21;
        }
      }
      else if (v3 <= v2) {
      LABEL_21:
        v9 = (_DWORD*)a1;
        if ((GameRoutine_5fa0((unsigned int*)(a1 + 16), 0) & 1) == 0) {
          goto LABEL_45;
        }
        v19 = v9[4];
        LODWORD(v2) = v9[5];
        a1 = (__int64)v9;
        v11 = (unsigned int)v2 >= v19;
        v20 = v2 - v19;
        if (!v11) {
          goto LABEL_61;
        }
        goto LABEL_24;
      }
      v11 = (unsigned int)v2 >= (unsigned int)v3;
      v20 = v2 - v3;
      if (!v11) {
      LABEL_61:
        v14 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * (unsigned int)v2);
      LABEL_62:
        *v14 = 0;
        ++*(_DWORD*)(a1 + 20);
        v38 = *(_DWORD*)(a1 + 4);
        if ((v38 & 4) != 0) {
          v48 = *(_BYTE**)(a1 + 80);
          if ((unsigned __int64)(v48 + 1) > a1 + 152) {
            v49 = *(_QWORD*)(a1 + 8);
            v50 = a1;
            *(_QWORD*)(a1 + 80) = a1 + 88;
            v51 = timeline_OutputStream_Write(v49, a1 + 88,
                                              (__int64)&v48[-a1 - 88]);
            a1 = v50;
            if ((v51 & 1) == 0) {
              goto LABEL_69;
            }
            v48 = *(_BYTE**)(v50 + 80);
          }
          v52 = a1;
          *v48 = 10;
          v53 = *(unsigned int*)(a1 + 20);
          ++*(_QWORD*)(a1 + 80);
          v54 = Value_33e0(a1, v53);
          a1 = v52;
          if ((v54 & 1) == 0) {
          LABEL_69:
            if (*(_DWORD*)a1 == 0) {
              *(_DWORD*)a1 = 8;
            }
            goto LABEL_47;
          }
          if ((*(_DWORD*)(v52 + 4) & 2) == 0) {
          LABEL_66:
            v35 = 6;
            goto LABEL_48;
          }
        }
        else if ((v38 & 2) == 0) {
          goto LABEL_66;
        }
        v39 = v5[1];
        if (v39 == 0) {
        LABEL_87:
          if (*(_DWORD*)a1 == 0) {
            *(_DWORD*)a1 = 3;
          }
          goto LABEL_47;
        }
        v5[1] = v39 - 1;
        goto LABEL_66;
      }
    LABEL_24:
      v21 = __clz(v20 + 16);
      v14 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v21) + 8) +
                      8LL * (unsigned int)(v20 - GameData_1b37d88[28 - v21]));
      goto LABEL_62;
    }
    return v5;
  }
  return (int*)v14;
}

__int64 timeline_7910(__int64 a1, int8x16_t* a2)
{
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  int8x16_t* v9;
  int8x16_t v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  int8x16_t v15;
  unsigned __int64 v16;
  int v17;
  int8x16_t v18;
  int8x16_t v19;

  if (*(_QWORD*)a1 != 0) {
    return 114;
  }
  if (LANES128(a2[1]).n128_u64[0] <= 0x200) {
    v5 = 512;
  }
  else {
    v5 = LANES128(a2[1]).n128_i64[0];
  }
  v6 = GameRoutine_1a0b960(v5, GameData_212c060);
  if (v6 != 0) {
    v7 = (void*)v6;
    v8 = GameRoutine_1a09d20(176, GameData_212c060);
    if (v8 != 0) {
      v9 = (int8x16_t*)v8;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_QWORD*)(v8 + 96) = 0;
      *(_QWORD*)(v8 + 104) = 0;
      *(_QWORD*)(v8 + 112) = 0;
      *(_QWORD*)(v8 + 120) = -1;
      *(_QWORD*)(v8 + 128) = 0;
      *(_QWORD*)(v8 + 136) = 0;
      *(_OWORD*)(v8 + 32) = GameData_1a82930;
      *(_OWORD*)(v8 + 48) = GameData_1a837d0;
      v10 = *a2;
      *(_WORD*)(v8 + 144) = 257;
      *(_QWORD*)(v8 + 80) = 0;
      *(_QWORD*)(v8 + 88) = nn_nlib_MemoryInputStream_vtable;
      v11 = LANES128(a2[1]).n128_u64[1];
      *(_DWORD*)(v8 + 148) = 0;
      *(_DWORD*)(v8 + 172) = 0;
      *(_BYTE*)(v8 + 168) = 0;
      *(_QWORD*)(v8 + 152) = 0;
      *(_QWORD*)(v8 + 160) = 0;
      if (v11 <= 4) {
        v12 = 4;
      }
      else {
        v12 = v11;
      }
      if (v11 >> 61 != 0) {
        v13 = -1;
      }
      else {
        v13 = 8 * v12;
      }
      v19 = v10;
      v14 = (_QWORD*)GameRoutine_1a0b960(v13, GameData_212c060);
      if (v14 != nullptr) {
        *(_QWORD*)(a1 + 24) = v7;
        *(_QWORD*)(a1 + 32) = 0;
        *(_BYTE*)(a1 + 40) = 0;
        v15 = vdupq_n_s64(0x10u);
        *(_DWORD*)(a1 + 8) = 0;
        v16 = LANES128(a2[3]).n128_u64[0];
        *v14 = 0;
        *(_DWORD*)(a1 + 16) = -1;
        v17 = LANES128(a2[2]).n128_i32[3];
        LANES128(v9[1]).n128_u64[0] = (unsigned __int64)v14;
        LANES128(v9[1]).n128_u64[1] = 0;
        LANES128(v9[3]).n128_u64[0] = v5;
        LANES128(v9[3]).n128_u64[1] = v12;
        LANES128(v9[5]).n128_u64[0] = v16;
        LANES128(*(v9)).n128_u32[0] = 0;
        LANES128(*(v9)).n128_u64[1] = 0;
        LANES128(v9[10]).n128_u64[1] = (v17 & 2) != 0;
        v9[2] = vbslq_s8(vcgtq_u64(v19, v15), v19, v15);
        v18 = a2[2];
        *(_QWORD*)a1 = v9;
        v9[4] = v18;
        return 0;
      }
      GameRoutine_651250(v9);
    }
    GameRoutine_651310(v7);
  }
  return 12;
}

__int64 timeline_86a0(__int64 a1, int* a2, _BYTE* a3, unsigned __int64 a4)
{
  __int64* v4;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int8x16_t* v15;
  int8x16_t* v16;
  __int64 v17;
  int8x16_t* v18;
  unsigned int v19;
  int v20;
  int8x16_t* v21;
  int v22;
  int v23;
  int v24;
  int v26;
  int8x16_t* v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  int v41;
  _DWORD* v42;
  __int64 v43;
  _DWORD* v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _DWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 result;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  _BOOL4 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  int v75;
  _BOOL4 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  int v84;
  _BOOL4 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v100;

  v4 = *(__int64**)(a1 + 8);
  while (1) {
    v7 = *v4;
    v8 = *(_QWORD*)(a1 + 168);
    v9 = *(_QWORD*)(*v4 + 16);
    v10 = *(_QWORD*)(*v4 + 24);
    if (v9 != v10 || (Value_2870(*v4), v9 = *(_QWORD*)(v7 + 16),
                      v10 = *(_QWORD*)(v7 + 24), v9 != v10)) {
      v11 = HIDWORD(v8);
      if ((v8 & 1) != 0) {
        while (1) {
        LABEL_6:
          v14 = *(_QWORD*)(v7 + 40);
          v15 = (int8x16_t*)(v14 + v10);
          v16 = (int8x16_t*)(v14 + v9);
          switch (v11) {
          case 3LL:
            v26 = LANES128(*(v16)).n128_u8[0];
            v16 = (int8x16_t*)((char*)v16 + 1);
            if (v26 == 47) {
              goto LABEL_48;
            }
            break;
          case 2LL:
            break;
          case 1LL:
            v30 = v14 + v9;
            v31 = v10 - v9;
            v16 = (int8x16_t*)(v30 + 1);
            while (1) {
              v32 = LANES128(v16[-1]).n128_u8[15];
              if (v32 == 10 || v32 == 13) {
                break;
              }
              v16 = (int8x16_t*)((char*)v16 + 1);
              --v31;
              v11 = 1;
              if (v31 == 0) {
                goto LABEL_58;
              }
            }
          LABEL_48:
            v11 = 0;
            goto LABEL_9;
          default:
            goto LABEL_9;
          }
          v27 = v16;
          if (v16 == v15) {
          LABEL_50:
            v11 = 2;
            goto LABEL_58;
          }
          while (1) {
            v28 = LANES128(*(v16)).n128_u8[0];
            v16 = (int8x16_t*)((char*)v16 + 1);
            if (v28 == 42) {
              if (v16 == v15) {
              LABEL_57:
                v11 = 3;
                goto LABEL_58;
              }
              v16 = (int8x16_t*)((char*)LANES128(*(v27)).n128_u32 + 2);
              if (LANES128(*(v27)).n128_u8[1] == 47) {
                break;
              }
            }
            v11 = 2;
            v27 = v16;
            if (v16 == v15) {
              goto LABEL_58;
            }
          }
          v11 = 0;
          if (v16 != v15) {
            break;
          }
        LABEL_58:
          *(_QWORD*)(v7 + 16) = *(_QWORD*)(v7 + 24);
          if (*(_DWORD*)(v7 + 60) != 0) {
            goto LABEL_84;
          }
          v29 = (*(__int64 (**)(__int64, _QWORD, _QWORD, unsigned __int64))(
              *(_QWORD*)v7 + 16LL))(v7, *(_QWORD*)(v7 + 40),
                                    *(_QWORD*)(v7 + 48), a4);
          if (v29 != 0) {
            v12 = *(_QWORD*)(v7 + 24);
            v13 = *(_QWORD*)(v7 + 8);
            v10 = v29;
            v9 = 0;
            *(_QWORD*)(v7 + 24) = v29;
            *(_QWORD*)(v7 + 32) = -1;
            *(_QWORD*)(v7 + 8) = v13 + v12;
            *(_QWORD*)(v7 + 16) = 0;
          }
          else {
            v9 = *(_QWORD*)(v7 + 16);
            v10 = *(_QWORD*)(v7 + 24);
            if (v9 == v10) {
              goto LABEL_84;
            }
          }
        }
        while (1) {
        LABEL_9:
          if (v16 == v15) {
            goto LABEL_58;
          }
          v17 = LANES128(*(v16)).n128_u8[0];
          if ((unsigned int)v17 > 0x2F) {
            goto LABEL_41;
          }
          if (((1LL << v17) & 0x100002600LL) == 0) {
            if (v17 != 47) {
              goto LABEL_41;
            }
            goto LABEL_23;
          }
          v18 = (int8x16_t*)((char*)LANES128(*(v16)).n128_u64 + 1);
          a4 = (char*)v15 - ((char*)LANES128(*(v16)).n128_u64 + 1);
          if (v15 != (int8x16_t*)((char*)LANES128(*(v16)).n128_u64 + 1)) {
            v19 = LANES128(*(v18)).n128_u8[0];
            if (v19 != 32) {
              if (v19 >= 0x20) {
                goto LABEL_19;
              }
              goto LABEL_18;
            }
            v18 = (int8x16_t*)((char*)LANES128(*(v16)).n128_u32 + 2);
            if (a4 >= 2 && LANES128(*(v18)).n128_u8[0] <= 0x20u) {
              --a4;
            LABEL_18:
              v18 = timeline_1460(0, nullptr, v18, a4);
            }
          }
        LABEL_19:
          if (v18 == v15) {
            goto LABEL_58;
          }
          v16 = v18;
          if (LANES128(*(v18)).n128_u8[0] != 47) {
            v16 = v18;
          LABEL_41:
            if (v15 != v16) {
            LABEL_83:
              *(_QWORD*)(v7 + 16) = (char*)v16 - *(_QWORD*)(v7 + 40);
              goto LABEL_84;
            }
            goto LABEL_58;
          }
        LABEL_23:
          if ((int8x16_t*)((char*)LANES128(*(v16)).n128_u64 + 1) == v15) {
            *(_QWORD*)(v7 + 16) = (char*)v16 - *(_QWORD*)(v7 + 40);
            if (!Value_28c0(v7, 2u)) {
              goto LABEL_84;
            }
            v9 = *(_QWORD*)(v7 + 16);
            v10 = *(_QWORD*)(v7 + 24);
            if (v9 + 2 > v10) {
              goto LABEL_84;
            }
            goto LABEL_6;
          }
          v20 = LANES128(*(v16)).n128_u8[1];
          if (v20 == 47) {
            v16 = (int8x16_t*)((char*)v16 + 2);
            while (v16 != v15) {
              v24 = LANES128(*(v16)).n128_u8[0];
              v16 = (int8x16_t*)((char*)v16 + 1);
              v23 = v24;
              if (v24 == 13 || v23 == 10) {
                goto LABEL_9;
              }
            }
            v11 = 1;
            goto LABEL_58;
          }
          if (v20 != 42) {
            goto LABEL_41;
          }
          v21 = (int8x16_t*)((char*)LANES128(*(v16)).n128_u32 + 2);
          if ((int8x16_t*)((char*)LANES128(*(v16)).n128_u32 + 2) == v15) {
            goto LABEL_50;
          }
          v16 = (int8x16_t*)((char*)v16 + 2);
          while (1) {
            v22 = LANES128(*(v16)).n128_u8[0];
            v16 = (int8x16_t*)((char*)v16 + 1);
            if (v22 == 42) {
              if (v16 == v15) {
                goto LABEL_57;
              }
              v16 = (int8x16_t*)((char*)LANES128(*(v21)).n128_u32 + 2);
              if (LANES128(*(v21)).n128_u8[1] == 47) {
                break;
              }
            }
            v21 = v16;
            if (v16 == v15) {
              goto LABEL_50;
            }
          }
        }
      }
      while (1) {
        v36 = *(_QWORD*)(v7 + 40);
        a4 = v10 - v9;
        v16 = (int8x16_t*)(v36 + v9);
        if (v10 != v9 && v36 != 0) {
          v37 = LANES128(*(v16)).n128_u8[0];
          if (v37 != 32) {
            if (v37 > 0x1F) {
              goto LABEL_78;
            }
            goto LABEL_77;
          }
          v16 = (int8x16_t*)((char*)v16 + 1);
          if (a4 >= 2 && LANES128(*(v16)).n128_u8[0] <= 0x20u) {
            --a4;
          LABEL_77:
            v16 = timeline_1460(0, nullptr, v16, a4);
          }
        }
      LABEL_78:
        if ((int8x16_t*)(v36 + v10) != v16) {
          goto LABEL_83;
        }
        *(_QWORD*)(v7 + 16) = *(_QWORD*)(v7 + 24);
        if (*(_DWORD*)(v7 + 60) != 0) {
        LABEL_84:
          v8 = (unsigned int)v8 | ((unsigned __int64)(unsigned int)v11 << 32);
          break;
        }
        v38 = (*(__int64 (**)(__int64, _QWORD, _QWORD, unsigned __int64))(
            *(_QWORD*)v7 + 16LL))(v7, *(_QWORD*)(v7 + 40), *(_QWORD*)(v7 + 48),
                                  a4);
        if (v38 != 0) {
          v34 = *(_QWORD*)(v7 + 24);
          v35 = *(_QWORD*)(v7 + 8);
          v10 = v38;
          v9 = 0;
          *(_QWORD*)(v7 + 24) = v38;
          *(_QWORD*)(v7 + 32) = -1;
          *(_QWORD*)(v7 + 8) = v35 + v34;
          *(_QWORD*)(v7 + 16) = 0;
        }
        else {
          v9 = *(_QWORD*)(v7 + 16);
          v10 = *(_QWORD*)(v7 + 24);
          if (v9 == v10) {
            goto LABEL_84;
          }
        }
      }
    }
    *(_QWORD*)(a1 + 168) = v8;
    v39 = (_QWORD*)*v4;
    v40 = *(_QWORD*)(*v4 + 16);
    if (v40 != *(_QWORD*)(*v4 + 24) ||
        (Value_2870(*v4), (v40 = v39[2]) != v39[3])) {
      v41 = *(unsigned __int8*)(v39[5] + v40);
      v42 = *(_DWORD**)(a1 + 16);
      v43 = *(_QWORD*)(a1 + 24);
      v44 = &v42[2 * v43 + 1];
      v45 = v42[2 * v43];
      if (v45 == 1) {
        break;
      }
      goto LABEL_89;
    }
    v41 = -1;
    v42 = *(_DWORD**)(a1 + 16);
    v43 = *(_QWORD*)(a1 + 24);
    v44 = &v42[2 * v43 + 1];
    v45 = v42[2 * v43];
    if (v45 == 1) {
      break;
    }
  LABEL_89:
    if (v45 <= 4) {
      if (v45 <= 2) {
        if (v45 != 0) {
          if (v41 == 93) {
            goto LABEL_148;
          }
          v48 = (unsigned int)*v44;
          v49 = 6;
          *(v44 - 1) = 6;
          *v44 = v48 + 1;
          if (*(_QWORD*)(a1 + 32) == v48) {
            goto LABEL_205;
          }
          goto LABEL_113;
        }
        if (v41 > 109) {
          switch (v41) {
          case 'n':
            v80 = (_QWORD*)*v4;
            v81 = *(_QWORD*)(*v4 + 16);
            v82 = v81 + 4;
            if ((unsigned __int64)(v81 + 4) <= *(_QWORD*)(*v4 + 24)) {
              v84 = *(_DWORD*)(v80[5] + v81);
              v80[2] = v82;
              v85 = true;
            }
            else {
              v83 = Value_2640(v80, (__int64)&v100, 4u);
              v84 = v100;
              v42 = *(_DWORD**)(a1 + 16);
              v43 = *(_QWORD*)(a1 + 24);
              v85 = v83 == 4;
            }
            if (v85 && v84 == 1819047278) {
              result = 1;
              v42[2 * v43] = 1;
              goto LABEL_183;
            }
            goto LABEL_184;
          case '{':
            v88 = *v4;
            v89 = *(_QWORD*)(*v4 + 16);
            if (v89 != *(_QWORD*)(*v4 + 24) ||
                (Value_2870(*v4),
                 (v89 = *(_QWORD*)(v88 + 16)) != *(_QWORD*)(v88 + 24))) {
              *(_QWORD*)(v88 + 16) = v89 + 1;
            }
            result = 13;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 3;
            goto LABEL_183;
          case 't':
            v71 = (_QWORD*)*v4;
            v72 = *(_QWORD*)(*v4 + 16);
            v73 = v72 + 4;
            if ((unsigned __int64)(v72 + 4) <= *(_QWORD*)(*v4 + 24)) {
              v75 = *(_DWORD*)(v71[5] + v72);
              v71[2] = v73;
              v76 = true;
            }
            else {
              v74 = Value_2640(v71, (__int64)&v100, 4u);
              v75 = v100;
              v42 = *(_DWORD**)(a1 + 16);
              v43 = *(_QWORD*)(a1 + 24);
              v76 = v74 == 4;
            }
            if (v76 && v75 == 1702195828) {
              v92 = 2 * v43;
              result = 2;
              goto LABEL_182;
            }
          LABEL_184:
            *a2 = 11;
            a3[24] = 0;
            *(_DWORD*)a3 = -1;
            v42[2 * v43] = 5;
            return 0xFFFFFFFFLL;
          default:
            break;
          }
        }
        else {
          switch (v41) {
          case '"':
            v77 = *v4;
            v78 = *(_QWORD*)(*v4 + 16);
            if (v78 != *(_QWORD*)(*v4 + 24) ||
                (Value_2870(*v4),
                 (v78 = *(_QWORD*)(v77 + 16)) != *(_QWORD*)(v77 + 24))) {
              *(_QWORD*)(v77 + 16) = v78 + 1;
            }
            v79 = Value_9220(a1, (__int64)a3);
            if (v79 == 0) {
              *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 1;
              *(_DWORD*)a3 = 4;
              return 4;
            }
            goto LABEL_206;
          case '[':
            v86 = *v4;
            v87 = *(_QWORD*)(*v4 + 16);
            if (v87 != *(_QWORD*)(*v4 + 24) ||
                (Value_2870(*v4),
                 (v87 = *(_QWORD*)(v86 + 16)) != *(_QWORD*)(v86 + 24))) {
              *(_QWORD*)(v86 + 16) = v87 + 1;
            }
            result = 11;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 2;
            goto LABEL_183;
          case 'f':
            v64 = (_QWORD*)*v4;
            v100 = 0;
            v65 = v64[2];
            v66 = v65 + 5;
            if ((unsigned __int64)(v65 + 5) <= v64[3]) {
              v90 = v64[5] + v65;
              v91 = *(_BYTE*)(v90 + 4);
              LODWORD(v90) = *(_DWORD*)v90;
              v64[2] = v66;
              v68 = true;
              LODWORD(v100) = v90;
              BYTE4(v100) = v91;
            }
            else {
              v67 = Value_2640(v64, (__int64)&v100, 5u);
              v42 = *(_DWORD**)(a1 + 16);
              v43 = *(_QWORD*)(a1 + 24);
              v68 = v67 == 5;
            }
            if (v68 && v100 == 0x65736C6166LL) {
              v92 = 2 * v43;
              result = 3;
            LABEL_182:
              v42[v92] = 1;
              goto LABEL_183;
            }
            goto LABEL_184;
          default:
            break;
          }
        }
        v79 = Value_98c0(a1, (__int64)a3);
        if (v79 == 0) {
          *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 1;
          return *(unsigned int*)a3;
        }
        goto LABEL_206;
      }
      if (v45 == 3) {
        goto LABEL_137;
      }
      if (v41 != 58) {
        v49 = 1;
        goto LABEL_205;
      }
      v50 = *v4;
      v51 = *(_QWORD*)(*v4 + 16);
      if (v51 != *(_QWORD*)(*v4 + 24) ||
          (Value_2870(*v4),
           (v51 = *(_QWORD*)(v50 + 16)) != *(_QWORD*)(v50 + 24))) {
        *(_QWORD*)(v50 + 16) = v51 + 1;
      }
      v42 = *(_DWORD**)(a1 + 16);
      v43 = *(_QWORD*)(a1 + 24);
      v42[2 * v43] = 7;
    LABEL_113:
      v56 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a1 + 24) = v43 + 1;
      if (v43 + 1 == v56) {
        *(_QWORD*)(a1 + 24) = v43;
        v49 = 10;
        goto LABEL_205;
      }
      v42[2 * v43 + 2] = 0;
    }
    else if (v45 <= 6) {
      if (v45 == 5) {
        return 0xFFFFFFFFLL;
      }
      if (v41 == 93) {
        goto LABEL_148;
      }
      if (v41 != 44) {
        goto LABEL_191;
      }
      v52 = *v4;
      v53 = *(_QWORD*)(*v4 + 16);
      if (v53 != *(_QWORD*)(*v4 + 24) ||
          (Value_2870(*v4),
           (v53 = *(_QWORD*)(v52 + 16)) != *(_QWORD*)(v52 + 24))) {
        *(_QWORD*)(v52 + 16) = v53 + 1;
      }
      v42 = *(_DWORD**)(a1 + 16);
      v43 = *(_QWORD*)(a1 + 24);
      if ((*(_BYTE*)(a1 + 76) & 1) == 0) {
        goto LABEL_112;
      }
      v42[2 * v43] = 8;
    }
    else {
      if (v45 != 7) {
        if (v45 == 8) {
          v46 = (_QWORD*)*v4;
          v47 = *(_QWORD*)(*v4 + 16);
          if (v47 != *(_QWORD*)(*v4 + 24) ||
              (Value_2870(*v4), (v47 = v46[2]) != v46[3])) {
            if (*(_BYTE*)(v46[5] + v47) == 93) {
            LABEL_148:
              v69 = *v4;
              v70 = *(_QWORD*)(*v4 + 16);
              if (v70 != *(_QWORD*)(*v4 + 24) ||
                  (Value_2870(*v4),
                   (v70 = *(_QWORD*)(v69 + 16)) != *(_QWORD*)(v69 + 24))) {
                *(_QWORD*)(v69 + 16) = v70 + 1;
              }
              result = 12;
              *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 1;
              goto LABEL_183;
            }
          }
          v42 = *(_DWORD**)(a1 + 16);
          v43 = *(_QWORD*)(a1 + 24);
        LABEL_112:
          v54 = &v42[2 * v43];
          v55 = (unsigned int)v54[1];
          v54[1] = v55 + 1;
          if (*(_QWORD*)(a1 + 32) == v55) {
            v49 = 6;
            goto LABEL_205;
          }
          goto LABEL_113;
        }
        if ((*(_BYTE*)(a1 + 76) & 1) != 0) {
          v59 = (_QWORD*)*v4;
          v60 = *(_QWORD*)(*v4 + 16);
          if (v60 != *(_QWORD*)(*v4 + 24) ||
              (Value_2870(*v4), (v60 = v59[2]) != v59[3])) {
            v41 = *(unsigned __int8*)(v59[5] + v60);
          LABEL_137:
            if (v41 == 125) {
            LABEL_138:
              v61 = *v4;
              v62 = *(_QWORD*)(*v4 + 16);
              if (v62 != *(_QWORD*)(*v4 + 24) ||
                  (Value_2870(*v4),
                   (v62 = *(_QWORD*)(v61 + 16)) != *(_QWORD*)(v61 + 24))) {
                *(_QWORD*)(v61 + 16) = v62 + 1;
              }
              result = 14;
              *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 1;
            LABEL_183:
              *(_DWORD*)a3 = result;
              a3[24] = 0;
              return result;
            }
          }
        }
        v93 = (_QWORD*)*v4;
        v94 = *(_QWORD*)(*v4 + 16);
        if (v94 == *(_QWORD*)(*v4 + 24) &&
                (Value_2870(*v4), (v94 = v93[2]) == v93[3]) ||
            *(_BYTE*)(v93[5] + v94) != 34) {
          v49 = 3;
          goto LABEL_205;
        }
        v95 = *(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24);
        v96 = *(unsigned int*)(v95 + 4);
        *(_DWORD*)(v95 + 4) = v96 + 1;
        if (*(_QWORD*)(a1 + 40) == v96) {
          v49 = 7;
          goto LABEL_205;
        }
        v97 = *v4;
        v98 = *(_QWORD*)(*v4 + 16);
        if (v98 != *(_QWORD*)(*v4 + 24) ||
            (Value_2870(*v4),
             (v98 = *(_QWORD*)(v97 + 16)) != *(_QWORD*)(v97 + 24))) {
          *(_QWORD*)(v97 + 16) = v98 + 1;
        }
        v79 = Value_9220(a1, (__int64)a3);
        if (v79 == 0) {
          result = 15;
          v49 = 4;
          *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 4;
          *(_DWORD*)a3 = 15;
          if (a3[24] != 1) {
            return result;
          }
        LABEL_205:
          *a2 = v49;
          *(_DWORD*)a3 = -1;
          a3[24] = 0;
          *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 5;
          return 0xFFFFFFFFLL;
        }
      LABEL_206:
        v49 = v79;
        goto LABEL_205;
      }
      if (v41 == 125) {
        goto LABEL_138;
      }
      if (v41 != 44) {
      LABEL_191:
        v49 = 2;
        goto LABEL_205;
      }
      v57 = *v4;
      v58 = *(_QWORD*)(*v4 + 16);
      if (v58 != *(_QWORD*)(*v4 + 24) ||
          (Value_2870(*v4),
           (v58 = *(_QWORD*)(v57 + 16)) != *(_QWORD*)(v57 + 24))) {
        *(_QWORD*)(v57 + 16) = v58 + 1;
      }
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 9;
    }
  }
  while (v43 != 0) {
    --v43;
    v44 -= 2;
    *(_QWORD*)(a1 + 24) = v43;
    v45 = *(v44 - 1);
    if (v45 != 1) {
      goto LABEL_89;
    }
  }
  *v42 = 0;
  *(_DWORD*)a3 = 18;
  return 18;
}

#pragma GCC visibility pop
