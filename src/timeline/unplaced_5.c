#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_651190(__int64);
__int64 GameRoutine_b940(unsigned int**);
__int64 GameRoutine_ca80(__int64, __int64, __int64, ...);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
extern unsigned int GameData_1b37d88[29];
unsigned int* timeline_cca0(unsigned int* result, unsigned __int64,
                            unsigned int*, __int64);
void GameRoutine_651250(__int64);
void __attribute__((noreturn)) GameHr_4c20();
unsigned __int64 timeline_b600(unsigned __int8** a1);
unsigned __int64 timeline_b6b0(unsigned __int8** a1);
__attribute__((swiftcall)) void
timeline_b760(PSEUDO_X8 x8_, unsigned __int8** result, unsigned int* a2);
__attribute__((swiftcall)) void
timeline_b830(PSEUDO_X8 x8_, unsigned __int8** result, unsigned int* a2);
void __attribute__((noreturn)) timeline_bac8();
void __attribute__((noreturn)) timeline_bc68();
void __attribute__((noreturn)) timeline_c178();
__int64 timeline_c1a0(__int64 a1, unsigned int* a2, unsigned __int64 a3,
                      unsigned int* a4, __int64 a5);
__attribute__((swiftcall)) void timeline_c3e0(PSEUDO_X8 x8_, _BYTE* a1,
                                              _BYTE* a2, _WORD* a3,
                                              unsigned __int64 a4);
__int64 timeline_cb00(unsigned int* a1, unsigned __int64 a2);
void __attribute__((noreturn)) timeline_cc78();
__int64 timeline_cf00(unsigned int* a1, unsigned __int64 a2);
void __attribute__((noreturn)) timeline_d078();
void __attribute__((noreturn)) timeline_d218();
__attribute__((swiftcall)) void
timeline_db10(PSEUDO_X8 x8_, unsigned __int8** result, unsigned int* a2);

unsigned __int64 timeline_b600(unsigned __int8** a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  int v3;
  __int64 v4;
  __int64 v6;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 == v2) {
    return 61;
  }
  v3 = *v1;
  if (v3 == 221) {
    if ((unsigned __int64)(v2 - v1) >= 5) {
      v6 = bswap32(*(_DWORD*)(v1 + 1));
      *a1 = v1 + 5;
      return v6 << 32;
    }
    return 61;
  }
  if (v3 == 220) {
    if ((unsigned __int64)(v2 - v1) >= 3) {
      v4 = __rev16(*(unsigned __int16*)(v1 + 1));
      *a1 = v1 + 3;
      return v4 << 32;
    }
    return 61;
  }
  if ((unsigned int)(v3 - 160) < 0xFFFFFFF0) {
    return 84;
  }
  *a1 = v1 + 1;
  return (unsigned __int64)(v3 & 0xF) << 32;
}

unsigned __int64 timeline_b6b0(unsigned __int8** a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  int v3;
  __int64 v4;
  __int64 v6;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 == v2) {
    return 61;
  }
  v3 = *v1;
  if (v3 == 223) {
    if ((unsigned __int64)(v2 - v1) >= 5) {
      v6 = bswap32(*(_DWORD*)(v1 + 1));
      *a1 = v1 + 5;
      return v6 << 32;
    }
    return 61;
  }
  if (v3 == 222) {
    if ((unsigned __int64)(v2 - v1) >= 3) {
      v4 = __rev16(*(unsigned __int16*)(v1 + 1));
      *a1 = v1 + 3;
      return v4 << 32;
    }
    return 61;
  }
  if ((char)v3 > -113) {
    return 84;
  }
  *a1 = v1 + 1;
  return (unsigned __int64)(v3 & 0xF) << 32;
}

__attribute__((swiftcall)) void

timeline_b760(PSEUDO_X8 x8_, unsigned __int8** result, unsigned int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v3;
  unsigned __int8* v4;
  int v5;
  unsigned __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int8* v9;
  __int64 v10;

  v3 = *result;
  v4 = result[1];
  if (*result == v4) {
    goto LABEL_16;
  }
  v5 = *v3;
  if (v5 == 198) {
    v6 = v4 - v3;
    if (v6 >= 5) {
      v8 = 5;
      v7 = bswap32(*(_DWORD*)(v3 + 1));
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  if (v5 == 197) {
    v6 = v4 - v3;
    if (v6 >= 3) {
      v8 = 3;
      v7 = __rev16(*(unsigned __int16*)(v3 + 1));
      goto LABEL_11;
    }
  LABEL_16:
    *(_QWORD*)(a3 + 8) = 0;
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)a3 = 61;
    {
      result;
      return;
    }
  }
  if (v5 != 196) {
    *(_QWORD*)(a3 + 8) = 0;
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)a3 = 84;
    {
      result;
      return;
    }
  }
  v6 = v4 - v3;
  if (v6 < 2) {
    goto LABEL_16;
  }
  v7 = v3[1];
  v8 = 2;
LABEL_11:
  v9 = &v3[v8];
  *a2 = v7;
  *(_DWORD*)a3 = 0;
  *(_QWORD*)(a3 + 8) = v9;
  if (v8 + (unsigned __int64)v7 <= v6) {
    v10 = v7;
  }
  else {
    v10 = (unsigned int)(v6 - v8);
  }
  *(_DWORD*)(a3 + 16) = v10;
  *result = &v9[v10];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

timeline_b830(PSEUDO_X8 x8_, unsigned __int8** result, unsigned int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned int v5;
  int v6;
  char v7;
  unsigned __int64 v8;
  char* v9;
  unsigned int v10;
  __int64 v11;
  char v12;
  unsigned __int8* v13;
  __int64 v14;

  v3 = *result;
  v4 = result[1];
  if (*result == v4) {
    goto LABEL_19;
  }
  v5 = *v3;
  v6 = 84;
  if (v5 <= 0xD3) {
    switch (v5) {
    case 0xC7u:
      v8 = v4 - v3;
      if ((unsigned __int64)(v4 - v3) >= 3) {
        v10 = v3[1];
        v9 = (char*)(v3 + 2);
        v11 = 3;
        goto LABEL_6;
      }
      goto LABEL_19;
    case 0xC8u:
      v8 = v4 - v3;
      if ((unsigned __int64)(v4 - v3) >= 4) {
        v9 = (char*)(v3 + 3);
        v11 = 4;
        v10 = __rev16(*(unsigned __int16*)(v3 + 1));
        goto LABEL_6;
      }
      goto LABEL_19;
    case 0xC9u:
      v8 = v4 - v3;
      if ((unsigned __int64)(v4 - v3) >= 6) {
        v9 = (char*)(v3 + 5);
        v11 = 6;
        v10 = bswap32(*(_DWORD*)(v3 + 1));
        goto LABEL_6;
      }
      goto LABEL_19;
    default:
      break;
    }
  LABEL_20:
    *(_QWORD*)(a3 + 8) = 0;
    *(_QWORD*)(a3 + 16) = 0;
    *(_QWORD*)(a3 + 24) = 0;
    *(_DWORD*)a3 = v6;
    {
      result;
      return;
    }
  }
  v7 = v5 + 44;
  if (v5 - 212 > 4) {
    goto LABEL_20;
  }
  v8 = v4 - v3;
  if ((unsigned __int64)(v4 - v3) < 2) {
  LABEL_19:
    v6 = 61;
    goto LABEL_20;
  }
  v9 = (char*)(v3 + 1);
  v10 = 1 << v7;
  v11 = 2;
LABEL_6:
  v12 = *v9;
  v13 = &v3[v11];
  *a2 = v10;
  *(_DWORD*)a3 = 0;
  *(_QWORD*)(a3 + 16) = v13;
  if (v11 + (unsigned __int64)v10 <= v8) {
    v14 = v10;
  }
  else {
    v14 = (unsigned int)(v8 - v11);
  }
  *(_BYTE*)(a3 + 8) = v12;
  *(_DWORD*)(a3 + 24) = v14;
  *result = &v13[v14];
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) timeline_bac8() { GameHr_4c20(); }

void __attribute__((noreturn)) timeline_bc68() { GameHr_4c20(); }

void __attribute__((noreturn)) timeline_c178() { GameHr_4c20(); }

__int64 timeline_c1a0(__int64 a1, unsigned int* a2, unsigned __int64 a3,
                      unsigned int* a4, __int64 a5)
{
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    unsigned int* v24;
    unsigned __int64 v25;
  } v24_;
  unsigned int* v26[2];

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24_.v24 = a2;
  v24_.v25 = a3;
  v6 = *a2;
  if (a3 >= v6) {
    v11 = __clz(a3 - v6 + 16);
    v7 = 28 - v11;
    v8 = *(_QWORD*)(*((_QWORD*)a2 + 2) + 8 * (27 - v11) + 8) +
         16LL * ((_DWORD)a3 - (_DWORD)v6 - GameData_1b37d88[28 - v11]);
    v9 = (unsigned int*)(a5 - 1);
    v10 = v8;
    if (a3 == a5) {
      goto LABEL_13;
    }
  }
  else {
    v7 = 0;
    v8 = *((_QWORD*)a2 + 1) + 16 * a3;
    v9 = (unsigned int*)(a5 - 1);
    v10 = v8;
    if (a3 == a5) {
      goto LABEL_13;
    }
  }
  v12 = *a4;
  if ((unsigned __int64)v9 >= v12) {
    v15 = __clz((_DWORD)v9 - v12 + 16);
    v13 = *(_QWORD*)(*((_QWORD*)a4 + 2) + 8 * (27 - v15) + 8) +
          16LL * ((_DWORD)v9 - (_DWORD)v12 - GameData_1b37d88[28 - v15]);
    if (v7 != 28 - v15) {
      goto LABEL_7;
    }
  LABEL_10:
    v10 = v13 + 16;
    goto LABEL_13;
  }
  v13 = *((_QWORD*)a4 + 1) + 16LL * (_QWORD)v9;
  if (v7 == 0) {
    goto LABEL_10;
  }
LABEL_7:
  if (v7 != 0) {
    v6 = 8LL << v7;
    v14 = *(_QWORD*)(*((_QWORD*)a2 + 2) + 8 * v7);
  }
  else {
    v14 = *((_QWORD*)a2 + 1);
  }
  v10 = v14 + 16 * v6;
  while (1) {
  LABEL_13:
    if (v8 != v10) {
      goto LABEL_14;
    }
    v26[0] = a4;
    v26[1] = v9;
    result = GameRoutine_b940(v26),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v18 = *v24_.v24;
    v19 = 28LL - __clz(v24_.v25 - v18 + 16);
    v20 = v24_.v25 >= v18 ? v19 : 0LL;
    if (v20 == result) {
      return result;
    }
    v21 = result;
    v22 = v17;
    v24_.v25 = GameData_1b37d88[v20 + 1] + v18;
    result = GameRoutine_b940(&v24_.v24),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v23;
    if (result == v21) {
      v10 = v22 + 16;
      if (v22 + 16 == v23) {
        return result;
      }
    }
    else if (result != 0) {
      v10 = *(_QWORD*)(*((_QWORD*)v24_.v24 + 2) + 8 * (result - 1) + 8) +
            16 * (16LL << ((unsigned __int8)result - 1));
      if (v10 == v23) {
        return result;
      }
    }
    else {
      v10 = *((_QWORD*)v24_.v24 + 1) + 16LL * *v24_.v24;
      if (v10 == v23) {
        return result;
      }
    }
  LABEL_14:
    if (v8 != v10) {
      memset(v8, 0, ((v10 - v8 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 += ((v10 - v8 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
  }
}

__attribute__((swiftcall)) void timeline_c3e0(PSEUDO_X8 x8_, _BYTE* a1,
                                              _BYTE* a2, _WORD* a3,
                                              unsigned __int64 a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v5;
  __int64 v6;
  unsigned __int64 v7;
  _BYTE* v8;
  unsigned int v9;
  char v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char v18;
  unsigned int* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;
  bool v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  _QWORD* v34;
  _BYTE* v35;
  unsigned __int64 v36;
  __int64 v37;
  _BYTE* v38;
  int v39;
  unsigned __int64 v40;
  unsigned __int64* v41;
  __int64 v42;
  unsigned int* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int v46;
  __int64 v47;
  unsigned __int8* v48;
  int v49;
  __int64 v50;
  _BYTE* v51;
  unsigned __int8* v52;
  __int64 v53;
  unsigned __int8* v54;
  int v55;
  char v56;
  _QWORD* v57;
  __int64 i;
  _WORD* v59;
  unsigned __int64 v60;
  _BYTE v61[11];
  struct {
    __int64 v62;
    _QWORD* v63;
    void* v64;
  } v62_;
  _QWORD v65[16];

  if (a3 == nullptr) {
    *(_QWORD*)(a5 + 8) = 0;
    *(_QWORD*)(a5 + 16) = 0;
    *(_DWORD*)a5 = 22;
    return;
  }
  if (a4 <= 1) {
    *(_QWORD*)(a5 + 8) = 0;
    *(_QWORD*)(a5 + 16) = 0;
    *(_DWORD*)a5 = 34;
    return;
  }
  if (a1 == a2) {
    *(_DWORD*)a5 = 0;
    *a3 = 47;
    *(_QWORD*)(a5 + 8) = a3;
    *(_QWORD*)(a5 + 16) = 1;
    return;
  }
  if ((*a1 & 0x7Fu) - 7 >= 2) {
    *(_QWORD*)(a5 + 8) = 0;
    *(_QWORD*)(a5 + 16) = 0;
    *(_DWORD*)a5 = 2;
    return;
  }
  v5 = 8;
  v6 = a5;
  v59 = a3;
  v7 = a4;
  v8 = a2;
  v65[0] = a1;
  v65[1] = -1;
  v62_.v63 = v65;
  v62_.v64 = nullptr;
  v9 = 1;
  v62_.v62 = 0x100000008LL;
  do {
    while (1) {
      v11 = v9 - 1LL;
      if (v11 >= v5) {
        v13 = v11 - v5;
        v14 = __clz(v13 + 16);
        v12 = *((_QWORD*)v62_.v64 + 27 - v14 + 1) +
              16LL * (v13 - GameData_1b37d88[28 - v14]);
      }
      else {
        v12 = (__int64)&v62_.v63[2 * v11];
      }
      v15 = *(char**)v12;
      v16 = *(_QWORD*)(v12 + 8);
      v17 = v16 + 1;
      v18 = **(_BYTE**)v12;
      *(_QWORD*)(v12 + 8) = v16 + 1;
      v19 = *(unsigned int**)(v15 + 1);
      v20 = v19[1];
      if ((v18 & 0x7F) == 7) {
        if (v17 == v20) {
          goto LABEL_26;
        }
        v21 = *v19;
        v22 = v16 + 2;
        v23 = 16 * v16 + 16;
        while (1) {
          if (v22 - 1 >= v21) {
            v26 = __clz(v22 - v21 + 15);
            v24 =
                (_BYTE*)(*(_QWORD*)(*((_QWORD*)v19 + 2) + 8 * (27 - v26) + 8) +
                         16LL * (~GameData_1b37d88[28 - v26] + (_DWORD)v22 -
                                 (_DWORD)v21));
            v25 = v24 == a2;
            if (v24 == a2) {
              goto LABEL_48;
            }
          }
          else {
            v24 = (_BYTE*)(*((_QWORD*)v19 + 1) + v23);
            v25 = v24 == a2;
            if (v24 == a2) {
              goto LABEL_48;
            }
          }
          if ((*v24 & 0x7Fu) - 7 <= 1) {
            break;
          }
          *(_QWORD*)(v12 + 8) = v22++;
          v23 += 16;
          if (1 - v20 + v22 == 2) {
            goto LABEL_48;
          }
        }
        if (v62_.v64 != nullptr) {
          v31 = *(_QWORD*)v62_.v64;
          if (*(_QWORD*)v62_.v64 != 0) {
            goto LABEL_40;
          }
        }
      }
      else {
        if (v17 == v20) {
        LABEL_26:
          v25 = false;
          v20 = v17;
          goto LABEL_48;
        }
        v27 = *v19;
        v28 = v16 + 2;
        v29 = 32 * v16 + 32;
        while (1) {
          if (v28 - 1 >= v27) {
            v30 = __clz(v28 - v27 + 15);
            v24 =
                (_BYTE*)(*(_QWORD*)(*((_QWORD*)v19 + 2) + 8 * (27 - v30) + 8) +
                         32LL * (~GameData_1b37d88[28 - v30] + (_DWORD)v28 -
                                 (_DWORD)v27) +
                         16);
            v25 = v24 == a2;
            if (v24 == a2) {
              goto LABEL_48;
            }
          }
          else {
            v24 = (_BYTE*)(*((_QWORD*)v19 + 1) + v29 + 16);
            v25 = v24 == a2;
            if (v24 == a2) {
              goto LABEL_48;
            }
          }
          if ((*v24 & 0x7Fu) - 7 <= 1) {
            break;
          }
          *(_QWORD*)(v12 + 8) = v28++;
          v29 += 32;
          if (1 - v20 + v28 == 2) {
            goto LABEL_48;
          }
        }
        if (v62_.v64 != nullptr) {
          v31 = *(_QWORD*)v62_.v64;
          if (*(_QWORD*)v62_.v64 != 0) {
          LABEL_40:
            if (GameData_1b37d88[v31 + 1] + (unsigned __int64)v5 > v9) {
              goto LABEL_45;
            }
            goto LABEL_41;
          }
        }
      }
      if (v5 > (unsigned __int64)v9) {
      LABEL_45:
        v32 = v9 - v5;
        if (v9 < v5) {
          goto LABEL_46;
        }
        goto LABEL_43;
      }
    LABEL_41:
      if ((timeline_cb00((unsigned int*)&v62_.v62, 0) & 1) == 0) {
        *(_QWORD*)(v6 + 8) = 0;
        *(_QWORD*)(v6 + 16) = 0;
        *(_DWORD*)v6 = 12;
        goto LABEL_95;
      }
      v5 = v62_.v62;
      v9 = HIDWORD(v62_.v62);
      a3 = v59;
      a5 = v6;
      a4 = v7;
      a2 = v8;
      v32 = HIDWORD(v62_.v62) - v62_.v62;
      if (HIDWORD(v62_.v62) < (unsigned int)v62_.v62) {
      LABEL_46:
        v34 = &v62_.v63[2 * v9];
        goto LABEL_47;
      }
    LABEL_43:
      v33 = __clz(v32 + 16);
      v34 = (_QWORD*)(*((_QWORD*)v62_.v64 + 27 - v33 + 1) +
                      16LL * (v32 - GameData_1b37d88[28 - v33]));
    LABEL_47:
      ++v9;
      *v34 = v24;
      v34[1] = -1;
      v25 = false;
      HIDWORD(v62_.v62) = v9;
    LABEL_48:
      if (*(_QWORD*)(v12 + 8) != v20) {
        break;
      }
      if (v9 != 0) {
        HIDWORD(v62_.v62) = --v9;
      }
      if (v9 == 0) {
        goto LABEL_57;
      }
    }
    v10 = v9 == 0 || v25;
  } while ((v10 & 1) == 0);
  if (v9 != 0) {
    v35 = (char*)a3 + a4;
    v36 = 0;
    v37 = v9;
    v38 = a3;
    while (1) {
      if (v36 >= (unsigned int)v62_.v62) {
        v42 = __clz(v36 - v62_.v62 + 16);
        v41 = (unsigned __int64*)(*((_QWORD*)v62_.v64 + 27 - v42 + 1) +
                                  16LL * ((_DWORD)v36 - (_DWORD)v62_.v62 -
                                          GameData_1b37d88[28 - v42]));
      }
      else {
        v41 = &v62_.v63[2 * v36];
      }
      if (v38 == v35) {
        goto LABEL_93;
      }
      *v38++ = 47;
      if ((*(_BYTE*)*v41 & 0x7F) == 7) {
        GameRoutine_ca80((__int64)&v60, (__int64)v61, (__int64)"%u",
                         *((_DWORD*)v41 + 2));
        if (&v38[v60] > v35) {
          *(_QWORD*)(v6 + 8) = 0;
          *(_QWORD*)(v6 + 16) = 0;
          *(_DWORD*)v6 = 34;
          goto LABEL_95;
        }
        if (v60 != 0) {
          memmove((__int64)v38, (__int64)v61, v60);
          v40 = v60;
        }
        else {
          v40 = 0;
        }
        a3 = v59;
        v38 += v40;
        a5 = v6;
      }
      else {
        v43 = *(unsigned int**)(*v41 + 1);
        v44 = v41[1];
        v45 = *v43;
        if (v44 >= v45) {
          v46 = v44 - v45;
          v47 = __clz(v46 + 16);
          v43 = (unsigned int*)(*((_QWORD*)v43 + 2) + 8 * (27 - v47));
          v44 = v46 - GameData_1b37d88[28 - v47];
        }
        v48 = (unsigned __int8*)(*((_QWORD*)v43 + 1) + 32 * v44);
        v49 = *v48;
        if ((v49 & 0x7F) == 6) {
          if (v49 == 134) {
            v50 = v48[1];
            v51 = &v38[v50];
            if (&v38[v50] > v35) {
              goto LABEL_93;
            }
            v52 = v48 + 2;
            v53 = (unsigned int)v50;
            if ((_DWORD)v50 != 0) {
              goto LABEL_82;
            }
          }
          else {
            v53 = *((unsigned int*)v48 + 1);
            v51 = &v38[v53];
            if (&v38[v53] > v35) {
              goto LABEL_93;
            }
            v54 = *((unsigned __int8**)v48 + 1);
            v52 = v48 + 2;
            if (v49 == 6) {
              v52 = v54;
            }
            if ((_DWORD)v53 != 0) {
              while (1) {
              LABEL_82:
                while (1) {
                  v55 = *v52;
                  if (v55 == 47 || v55 == 126) {
                    break;
                  }
                  *v38++ = v55;
                  ++v52;
                  if (--v53 == 0) {
                    goto LABEL_60;
                  }
                }
                if (++v51 > v35) {
                  break;
                }
                *v38 = 126;
                if (v55 == 126) {
                  v56 = 48;
                }
                else {
                  v56 = 49;
                }
                v38[1] = v56;
                v38 += 2;
                ++v52;
                if (--v53 == 0) {
                  goto LABEL_60;
                }
              }
            LABEL_93:
              v39 = 34;
              goto LABEL_94;
            }
          }
        }
      }
    LABEL_60:
      if (++v36 == v37) {
        if (v38 != v35) {
          *v38 = 0;
          *(_DWORD*)a5 = 0;
          *(_QWORD*)(a5 + 8) = a3;
          *(_QWORD*)(a5 + 16) = v38 - (_BYTE*)a3;
          goto LABEL_95;
        }
        goto LABEL_93;
      }
    }
  }
LABEL_57:
  v39 = 2;
LABEL_94:
  *(_QWORD*)(a5 + 8) = 0;
  *(_QWORD*)(a5 + 16) = 0;
  *(_DWORD*)a5 = v39;
LABEL_95:
  timeline_cca0((unsigned int*)&v62_.v62, 0, (unsigned int*)&v62_.v62,
                HIDWORD(v62_.v62));
  v57 = v62_.v64;
  if (v62_.v64 != nullptr) {
    for (i = *(_QWORD*)v62_.v64; i != 0; --i) {
      GameRoutine_651250(v57[i]);
      v57 = v62_.v64;
      *((_QWORD*)v62_.v64 + i) = 0;
    }
    GameRoutine_651250((__int64)v57);
  }
}

__int64 timeline_cb00(unsigned int* a1, unsigned __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64* v11;

  v2 = *((_QWORD*)a1 + 2);
  if (v2 != 0) {
    v4 = *(_QWORD*)v2;
    if (a2 != 0) {
      goto LABEL_3;
    }
  LABEL_10:
    v7 = v4 + 1;
    if (v4 + 1 <= 0x1C) {
      goto LABEL_12;
    }
    return 0;
  }
  v4 = 0;
  if (a2 == 0) {
    goto LABEL_10;
  }
LABEL_3:
  if (a2 > 0xFFFFFFF0) {
    return 0;
  }
  v5 = *a1;
  v6 = 28LL - __clz(a2 - v5 + 16);
  if (a2 >= v5) {
    v7 = v6;
  }
  else {
    v7 = 0;
  }
  if (v7 <= v4) {
    return 1;
  }
LABEL_12:
  if (v2 != 0) {
    if (v4 < v7) {
      goto LABEL_16;
    }
    goto LABEL_18;
  }
  v2 = GameRoutine_651190(232);
  *(_QWORD*)(v2 + 224) = 0;
  *((_QWORD*)a1 + 2) = v2;
  *(_OWORD*)v2 = (__typeof__(*(_OWORD*)v2)){0};
  *(_OWORD*)(v2 + 16) = (__typeof__(*(_OWORD*)(v2 + 16))){0};
  *(_OWORD*)(v2 + 32) = (__typeof__(*(_OWORD*)(v2 + 32))){0};
  *(_OWORD*)(v2 + 48) = (__typeof__(*(_OWORD*)(v2 + 48))){0};
  *(_OWORD*)(v2 + 64) = (__typeof__(*(_OWORD*)(v2 + 64))){0};
  *(_OWORD*)(v2 + 80) = (__typeof__(*(_OWORD*)(v2 + 80))){0};
  *(_OWORD*)(v2 + 96) = (__typeof__(*(_OWORD*)(v2 + 96))){0};
  *(_OWORD*)(v2 + 112) = (__typeof__(*(_OWORD*)(v2 + 112))){0};
  *(_OWORD*)(v2 + 128) = (__typeof__(*(_OWORD*)(v2 + 128))){0};
  *(_OWORD*)(v2 + 144) = (__typeof__(*(_OWORD*)(v2 + 144))){0};
  *(_OWORD*)(v2 + 160) = (__typeof__(*(_OWORD*)(v2 + 160))){0};
  *(_OWORD*)(v2 + 176) = (__typeof__(*(_OWORD*)(v2 + 176))){0};
  *(_OWORD*)(v2 + 192) = (__typeof__(*(_OWORD*)(v2 + 192))){0};
  *(_OWORD*)(v2 + 208) = (__typeof__(*(_OWORD*)(v2 + 208))){0};
  if (v4 < v7) {
  LABEL_16:
    while ((unsigned __int64)((16LL << v4) - 0x1000000000000000LL) >=
           0xF000000000000001LL) {
      v9 = GameRoutine_651190(256LL << v4);
      v10 = v2 + 8 * v4++;
      *(_QWORD*)(v10 + 8) = v9;
      if (v7 == v4) {
        goto LABEL_18;
      }
    }
    if (v4 > *(_QWORD*)v2) {
      do {
        GameRoutine_651250(*(_QWORD*)(v2 + 8 * v4));
        v11 = *((unsigned __int64**)a1 + 2);
        *(_QWORD*)(v2 + 8 * v4--) = 0;
      } while (v4 > *v11);
    }
    return 0;
  }
LABEL_18:
  *(_QWORD*)v2 = v7;
  return 1;
}

void __attribute__((noreturn)) timeline_cc78() { GameHr_4c20(); }

__int64 timeline_cf00(unsigned int* a1, unsigned __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64* v11;

  v2 = *((_QWORD*)a1 + 2);
  if (v2 != 0) {
    v4 = *(_QWORD*)v2;
    if (a2 != 0) {
      goto LABEL_3;
    }
  LABEL_10:
    v7 = v4 + 1;
    if (v4 + 1 <= 0x1C) {
      goto LABEL_12;
    }
    return 0;
  }
  v4 = 0;
  if (a2 == 0) {
    goto LABEL_10;
  }
LABEL_3:
  if (a2 > 0xFFFFFFF0) {
    return 0;
  }
  v5 = *a1;
  v6 = 28LL - __clz(a2 - v5 + 16);
  if (a2 >= v5) {
    v7 = v6;
  }
  else {
    v7 = 0;
  }
  if (v7 <= v4) {
    return 1;
  }
LABEL_12:
  if (v2 != 0) {
    if (v4 < v7) {
      goto LABEL_16;
    }
    goto LABEL_18;
  }
  v2 = GameRoutine_651190(232);
  *(_QWORD*)(v2 + 224) = 0;
  *((_QWORD*)a1 + 2) = v2;
  *(_OWORD*)v2 = (__typeof__(*(_OWORD*)v2)){0};
  *(_OWORD*)(v2 + 16) = (__typeof__(*(_OWORD*)(v2 + 16))){0};
  *(_OWORD*)(v2 + 32) = (__typeof__(*(_OWORD*)(v2 + 32))){0};
  *(_OWORD*)(v2 + 48) = (__typeof__(*(_OWORD*)(v2 + 48))){0};
  *(_OWORD*)(v2 + 64) = (__typeof__(*(_OWORD*)(v2 + 64))){0};
  *(_OWORD*)(v2 + 80) = (__typeof__(*(_OWORD*)(v2 + 80))){0};
  *(_OWORD*)(v2 + 96) = (__typeof__(*(_OWORD*)(v2 + 96))){0};
  *(_OWORD*)(v2 + 112) = (__typeof__(*(_OWORD*)(v2 + 112))){0};
  *(_OWORD*)(v2 + 128) = (__typeof__(*(_OWORD*)(v2 + 128))){0};
  *(_OWORD*)(v2 + 144) = (__typeof__(*(_OWORD*)(v2 + 144))){0};
  *(_OWORD*)(v2 + 160) = (__typeof__(*(_OWORD*)(v2 + 160))){0};
  *(_OWORD*)(v2 + 176) = (__typeof__(*(_OWORD*)(v2 + 176))){0};
  *(_OWORD*)(v2 + 192) = (__typeof__(*(_OWORD*)(v2 + 192))){0};
  *(_OWORD*)(v2 + 208) = (__typeof__(*(_OWORD*)(v2 + 208))){0};
  if (v4 < v7) {
  LABEL_16:
    while ((unsigned __int64)((16LL << v4) - 0x2000000000000000LL) >=
           0xE000000000000001LL) {
      v9 = GameRoutine_651190(128LL << v4);
      v10 = v2 + 8 * v4++;
      *(_QWORD*)(v10 + 8) = v9;
      if (v7 == v4) {
        goto LABEL_18;
      }
    }
    if (v4 > *(_QWORD*)v2) {
      do {
        GameRoutine_651250(*(_QWORD*)(v2 + 8 * v4));
        v11 = *((unsigned __int64**)a1 + 2);
        *(_QWORD*)(v2 + 8 * v4--) = 0;
      } while (v4 > *v11);
    }
    return 0;
  }
LABEL_18:
  *(_QWORD*)v2 = v7;
  return 1;
}

void __attribute__((noreturn)) timeline_d078() { GameHr_4c20(); }

void __attribute__((noreturn)) timeline_d218() { GameHr_4c20(); }

__attribute__((swiftcall)) void

timeline_db10(PSEUDO_X8 x8_, unsigned __int8** result, unsigned int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v3;
  unsigned __int8* v4;
  int v5;
  unsigned __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int8* v9;
  __int64 v10;

  v3 = *result;
  v4 = result[1];
  if (*result == v4) {
    goto LABEL_17;
  }
  v5 = *v3;
  switch (v5) {
  case 219:
    v6 = v4 - v3;
    if (v6 >= 5) {
      v8 = 5;
      v7 = bswap32(*(_DWORD*)(v3 + 1));
      goto LABEL_13;
    }
    goto LABEL_17;
  case 218:
    v6 = v4 - v3;
    if (v6 >= 3) {
      v8 = 3;
      v7 = __rev16(*(unsigned __int16*)(v3 + 1));
      goto LABEL_13;
    }
    goto LABEL_17;
  case 217:
    v6 = v4 - v3;
    if (v6 >= 2) {
      v7 = v3[1];
      v8 = 2;
      goto LABEL_13;
    }
  LABEL_17:
    *(_QWORD*)(a3 + 8) = 0;
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)a3 = 61;
    {
      result;
      return;
    }
  default:
    break;
  }
  if ((unsigned int)(v5 - 192) < 0xFFFFFFE0) {
    *(_QWORD*)(a3 + 8) = 0;
    *(_QWORD*)(a3 + 16) = 0;
    *(_DWORD*)a3 = 84;
    {
      result;
      return;
    }
  }
  v7 = v5 & 0x1F;
  v6 = v4 - v3;
  v8 = 1;
LABEL_13:
  v9 = &v3[v8];
  *a2 = v7;
  *(_DWORD*)a3 = 0;
  if (v8 + (unsigned __int64)v7 <= v6) {
    v10 = v7;
  }
  else {
    v10 = (unsigned int)(v6 - v8);
  }
  *(_QWORD*)(a3 + 8) = v9;
  *(_QWORD*)(a3 + 16) = v10;
  *result = &v9[v10];
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
