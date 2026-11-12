#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5e1980(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5e7480(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5e76a0(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5e77c0(_QWORD, _QWORD, _QWORD, float);
__int64 MaterialAnimObj_Unknown5(__int64 a1, _QWORD* a2);
float MaterialAnimObj_Unknown3(__int64 a1);
__int64 MaterialAnimObj_Unknown7(__int64 result, _QWORD* a2);
__int64 MaterialAnimObj_5e1be0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4);
__int64 GameRoutine_5e1080(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MaterialAnimObj_5dfe60(_QWORD, _QWORD);
__int64
MaterialAnimObj_5dfe60_alt1(__int64 result,
                            unsigned __int16) __asm__("MaterialAnimObj_5dfe60");
__int64 MaterialAnimObj_5dff40(__int64 result, __int64);
__int64 memcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 MaterialAnimObj_Unknown4(__int64 a1, __int64 a2);
__int64 MaterialAnimObj_Unknown6(__int64 a1, __int64 a2);
__int64 GameRoutine_5e53f0(__int64, long double);
__int64 MaterialAnimObj_5e75c0(__int64 result, __int64, __int16*, __int64,
                               float);
void GameRoutine_5e7340(__int64, __int64, __int64, __int64, float);
void MaterialAnimObj_5e1980(__int64 a1, __int64 a2, int a3, long double a4);
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
__int64 MaterialAnimObj_5e1080(__int64 a1, __int64 a2, __int64 a3, int a4);

__int64 MaterialAnimObj_Unknown4(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int16* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  int v23;
  bool v24;
  int v25;
  bool v26;
  __int64 v27;
  __int64 v28;

  MaterialAnimObj_5dfe60(a1 + 88, *(unsigned __int16*)(a2 + 108));
  v4 = *(unsigned __int16*)(a1 + 100);
  if (*(_WORD*)(a1 + 100) != 0) {
    if (*(_QWORD*)(a2 + 72) != 0) {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      do {
        v8 = *(_QWORD*)(a2 + 72);
        v9 = *(_QWORD*)(a1 + 112) + (v5 << 6);
        if (v8 == 0) {
          goto LABEL_14;
        }
        v10 = *(_QWORD*)v9 + 2LL;
        v11 = strlen(v10);
        v12 = v8 + 8;
        v13 = *(unsigned __int16*)(v8 + 12);
        v14 = v8 + 8 + 16 * v13;
        v15 = *(_DWORD*)v14;
        if (*(_DWORD*)(v8 + 8) < *(_DWORD*)v14) {
          do {
            v17 = (__int64)v15 >> 3;
            if (v11 > v17) {
              v16 = (*(unsigned __int8*)(v10 + v11 + ~v17) >> (v15 & 7)) & 1;
            }
            else {
              v16 = 0;
            }
            v13 = *(unsigned __int16*)(v8 + 12 + 16 * v13 + 2 * v16);
            v26 = v15 < *(_DWORD*)(v12 + 16 * v13);
            v15 = *(_DWORD*)(v12 + 16 * v13);
          } while (v26);
          v14 = v12 + 16 * v13;
        }
        v18 = *(unsigned __int16**)(v14 + 8);
        if (v11 != *v18 || (unsigned int)memcmp(v18 + 1, v10) != 0 ||
            (v19 = v14 - v8 - 24, v20 = v19 >> 4,
             ((v19 >> 4) & 0x80000000) != 0)) {
        LABEL_14:
          v7 |= 0x10000u;
        }
        else {
          v21 = (v19 >> 4) & 0x7FFFFFFF;
          v22 = (unsigned __int16)(*(_WORD*)(v9 + 48) & *(_WORD*)(v9 + 46)) !=
                0xFFFF;
          v23 = GameRoutine_5e1080(a1, v9, *(_QWORD*)(a2 + 56) + 168 * v21, v6);
          if ((v23 & 1) != 0 ||
              (*(__int16*)(v9 + 46) == -1
                   ? (v24 = *(unsigned __int16*)(v9 + 48) == 0xFFFF)
                   : (v24 = false),
               !v24)) {
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) &= 0x3FFF8000u;
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) |= v20 & 0x7FFF;
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v21) &= 0xC0007FFF;
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v21) |= (v5 & 0x7FFF) << 15;
          }
          v7 |= v22 | v23;
        }
        ++v5;
        v6 += *(unsigned __int16*)(v9 + 50) + *(unsigned __int16*)(v9 + 52);
      } while (v5 != v4);
    }
    else {
      v7 = 0x10000;
    }
  }
  else {
    v7 = 0;
  }
  *(_WORD*)(a1 + 96) |= 1u;
  v25 = *(_DWORD*)(a1 + 60);
  v26 = v25 >= 1 && v25 <= *(_DWORD*)(a1 + 56);
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v26) {
    v27 = 0;
    v28 = 0;
    do {
      ++v28;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v27) = 2139095040;
      v27 += 12;
    } while (v28 < *(int*)(a1 + 60));
  }
  return v7;
}

__int64 MaterialAnimObj_5e1080(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4;
  _QWORD* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int16* v21;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  _QWORD* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int16* v37;
  unsigned __int64 v38;
  __int64 v40;

  v4 = *(unsigned __int16*)(a2 + 50);
  if (*(_WORD*)(a2 + 50) != 0) {
    v8 = *(_QWORD**)(a2 + 8);
    v9 = 0;
    v10 = 0;
    v40 = a2;
    while (1) {
      v11 = *(_QWORD*)(a3 + 88);
      if (v11 == 0) {
        goto LABEL_13;
      }
      v12 = (const char*)(*v8 + 2LL);
      v13 = strlen_alt1(v12);
      v14 = v11 + 8;
      v15 = *(unsigned __int16*)(v11 + 12);
      v16 = v11 + 8 + 16 * v15;
      v17 = *(_DWORD*)v16;
      if ((signed __int32)*(_DWORD*)(v11 + 8) < (signed __int32)*(_DWORD*)v16) {
        do {
          v20 = (__int64)v17 >> 3;
          if (v13 > v20) {
            v18 = ((unsigned __int8)v12[v13 + ~v20] >> (v17 & 7)) & 1;
          }
          else {
            v18 = 0;
          }
          v15 = *(unsigned __int16*)(v11 + 12 + 16 * v15 + 2 * v18);
          v19 = v17 < (signed __int32)*(_DWORD*)(v14 + 16 * v15);
          v17 = *(_DWORD*)(v14 + 16 * v15);
        } while (v19);
        v16 = v14 + 16 * v15;
      }
      v21 = *(unsigned __int16**)(v16 + 8);
      if (v13 == *v21 &&
          memcmp_alt1((__int64)(v21 + 1), (__int64)v12, v13) == 0) {
        v22 = v16 - v11 - 24;
        *(_WORD*)(*(_QWORD*)(a1 + 136) + 2 * v9 + 2LL * a4) = v22 >> 4;
        if ((v22 & 0x800000000LL) != 0) {
          goto LABEL_14;
        }
        ++v9;
        v8 += 3;
        v10 |= 1u;
        if (v9 == v4) {
        LABEL_18:
          a2 = v40;
          v23 = *(unsigned __int16*)(v40 + 50);
          v24 = *(unsigned __int16*)(v40 + 52);
          if (*(_WORD*)(v40 + 52) == 0) {
            return v10;
          }
        LABEL_21:
          v25 = *(_QWORD**)(a2 + 16);
          v26 = a4 + v23;
          v27 = 0;
          while (2) {
            while (1) {
              v28 = *(_QWORD*)(a3 + 72);
              if (v28 == 0) {
                break;
              }
              v29 = (const char*)(*v25 + 2LL);
              v30 = strlen_alt1(v29);
              v31 = v28 + 8;
              v32 = *(unsigned __int16*)(v28 + 12);
              v33 = v28 + 8 + 16 * v32;
              v34 = *(_DWORD*)v33;
              if ((signed __int32)*(_DWORD*)(v28 + 8) <
                  (signed __int32)*(_DWORD*)v33) {
                do {
                  v36 = (__int64)v34 >> 3;
                  if (v30 > v36) {
                    v35 = ((unsigned __int8)v29[v30 + ~v36] >> (v34 & 7)) & 1;
                  }
                  else {
                    v35 = 0;
                  }
                  v32 = *(unsigned __int16*)(v28 + 12 + 16 * v32 + 2 * v35);
                  v19 = v34 < (signed __int32)*(_DWORD*)(v31 + 16 * v32);
                  v34 = *(_DWORD*)(v31 + 16 * v32);
                } while (v19);
                v33 = v31 + 16 * v32;
              }
              v37 = *(unsigned __int16**)(v33 + 8);
              if (v30 != *v37 ||
                  memcmp_alt1((__int64)(v37 + 1), (__int64)v29, v30) != 0) {
                break;
              }
              v38 = v33 - v28 - 24;
              *(_WORD*)(*(_QWORD*)(a1 + 136) + 2 * v27 + 2LL * v26) = v38 >> 4;
              if ((v38 & 0x800000000LL) != 0) {
                goto LABEL_33;
              }
              ++v27;
              v25 += 2;
              v10 |= 1u;
              if (v27 == v24) {
                return v10;
              }
            }
            *(_WORD*)(*(_QWORD*)(a1 + 136) + 2 * v27 + 2LL * v26) = -1;
          LABEL_33:
            ++v27;
            v25 += 2;
            v10 |= 0x10000u;
            if (v27 == v24) {
              return v10;
            }
            continue;
          }
        }
      }
      else {
      LABEL_13:
        *(_WORD*)(*(_QWORD*)(a1 + 136) + 2 * v9 + 2LL * a4) = -1;
      LABEL_14:
        ++v9;
        v8 += 3;
        v10 |= 0x10000u;
        if (v9 == v4) {
          goto LABEL_18;
        }
      }
    }
  }
  v23 = 0;
  v10 = 0;
  v24 = *(unsigned __int16*)(a2 + 52);
  if (*(_WORD*)(a2 + 52) != 0) {
    goto LABEL_21;
  }
  return v10;
}

__int64 MaterialAnimObj_Unknown5(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 32LL))(a1, *a2);
}

__int64 MaterialAnimObj_Unknown6(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int16* v10;
  __int64 v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned __int16* v38;
  int v39;
  int v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  int v57;
  __int64 v58;
  unsigned __int8* v59;
  int v60;
  int v61;
  int v62;
  bool v63;
  __int64 v64;
  __int64 v65;

  MaterialAnimObj_5dfe60_alt1(a1 + 88, *(_WORD*)(a2 + 108));
  result =
      MaterialAnimObj_5dff40(a1 + 88, *(_QWORD*)(*(_QWORD*)(a1 + 104) + 32LL));
  v4 = *(unsigned __int16*)(a1 + 100);
  if (*(_WORD*)(a1 + 100) != 0) {
    v5 = 0;
    v6 = 0;
    while (1) {
      v7 = *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) & 0x7FFF;
      v8 = *(_QWORD*)(a1 + 112) + (v5 << 6);
      if ((*(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) & 0x7FFF) != 0x7FFF) {
        break;
      }
    LABEL_3:
      ++v5;
      v6 += *(unsigned __int16*)(v8 + 50) + *(unsigned __int16*)(v8 + 52);
      if (v5 == v4) {
        goto LABEL_79;
      }
    }
    v9 = *(unsigned __int16*)(v8 + 50);
    if (*(_WORD*)(v8 + 50) != 0) {
      v10 = *(unsigned __int16**)(v8 + 8);
      result = v6;
      if (v9 >= 8) {
        v15 = 2LL * v6;
        v11 = 0;
        v12 = 0;
        do {
          v16 = v10[9];
          *(_WORD*)(*(_QWORD*)(a1 + 136) + v15 + 2 * v11) = v16;
          if (v16 == 0xFFFF) {
            v17 = 0x10000;
          }
          else {
            v17 = 1;
          }
          v18 = v17 | v12;
          v19 = v10[21];
          *(_WORD*)(*(_QWORD*)(a1 + 136) + v15 + 2 * v11 + 2) = v19;
          if (v19 == 0xFFFF) {
            v20 = 0x10000;
          }
          else {
            v20 = 1;
          }
          v21 = v10[33];
          *(_WORD*)(*(_QWORD*)(a1 + 136) + v15 + 2 * v11 + 4) = v21;
          if (v21 == 0xFFFF) {
            v22 = 0x10000;
          }
          else {
            v22 = 1;
          }
          v23 = v22 | v20 | v18;
          v24 = v10[45];
          *(_WORD*)(*(_QWORD*)(a1 + 136) + v15 + 2 * v11 + 6) = v24;
          if (v24 == 0xFFFF) {
            v25 = 0x10000;
          }
          else {
            v25 = 1;
          }
          v26 = v10[57];
          *(_WORD*)(*(_QWORD*)(a1 + 136) + v15 + 2 * v11 + 8) = v26;
          if (v26 == 0xFFFF) {
            v27 = 0x10000;
          }
          else {
            v27 = 1;
          }
          v28 = v27 | v25;
          v29 = v10[69];
          *(_WORD*)(*(_QWORD*)(a1 + 136) + v15 + 2 * v11 + 10) = v29;
          if (v29 == 0xFFFF) {
            v30 = 0x10000;
          }
          else {
            v30 = 1;
          }
          v31 = v30 | v28 | v23;
          v32 = v10[81];
          *(_WORD*)(*(_QWORD*)(a1 + 136) + v15 + 2 * v11 + 12) = v32;
          if (v32 == 0xFFFF) {
            v33 = 0x10000;
          }
          else {
            v33 = 1;
          }
          v34 = v10[93];
          v10 += 96;
          v35 = *(_QWORD*)(a1 + 136) + v15 + 2 * v11;
          v11 += 8;
          *(_WORD*)(v35 + 14) = v34;
          if (v34 == 0xFFFF) {
            v36 = 0x10000;
          }
          else {
            v36 = 1;
          }
          v12 = v36 | v33 | v31;
        } while ((v9 & 0xFFF8) != v11);
      }
      else {
        v11 = 0;
        v12 = 0;
      }
      v37 = v9 & 7;
      if (v37 != 0) {
        v38 = v10 + 9;
        result = 2 * v11 + 2LL * v6;
        do {
          v39 = *v38;
          v38 += 12;
          *(_WORD*)(*(_QWORD*)(a1 + 136) + result) = v39;
          result += 2;
          if (v39 == 0xFFFF) {
            v40 = 0x10000;
          }
          else {
            v40 = 1;
          }
          --v37;
          v12 |= v40;
        } while (v37 != 0);
      }
      v13 = *(unsigned __int16*)(v8 + 50);
      v14 = *(unsigned __int16*)(v8 + 52);
      if (*(_WORD*)(v8 + 52) == 0) {
        goto LABEL_77;
      }
    }
    else {
      v13 = 0;
      v12 = 0;
      v14 = *(unsigned __int16*)(v8 + 52);
      if (*(_WORD*)(v8 + 52) == 0) {
      LABEL_77:
        if ((v12 & 0x10001) == 0x10000) {
          *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) |= 0xC0007FFF;
          *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v7) |= 0x3FFF8000u;
        }
        goto LABEL_3;
      }
    }
    LODWORD(result) = v13 + v6;
    v41 = *(char**)(v8 + 16);
    result = (int)result;
    if (v14 >= 8) {
      v43 = 2LL * (int)result;
      v42 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 136) + v43 + 2 * v42) = v41[12];
        if ((unsigned __int8)v41[12] == 255) {
          v44 = 0x10000;
        }
        else {
          v44 = 1;
        }
        v45 = v44 | v12;
        *(_WORD*)(*(_QWORD*)(a1 + 136) + v43 + 2 * v42 + 2) = v41[28];
        if ((unsigned __int8)v41[28] == 255) {
          v46 = 0x10000;
        }
        else {
          v46 = 1;
        }
        *(_WORD*)(*(_QWORD*)(a1 + 136) + v43 + 2 * v42 + 4) = v41[44];
        if ((unsigned __int8)v41[44] == 255) {
          v47 = 0x10000;
        }
        else {
          v47 = 1;
        }
        v48 = v47 | v46 | v45;
        *(_WORD*)(*(_QWORD*)(a1 + 136) + v43 + 2 * v42 + 6) = v41[60];
        if ((unsigned __int8)v41[60] == 255) {
          v49 = 0x10000;
        }
        else {
          v49 = 1;
        }
        *(_WORD*)(*(_QWORD*)(a1 + 136) + v43 + 2 * v42 + 8) = v41[76];
        if ((unsigned __int8)v41[76] == 255) {
          v50 = 0x10000;
        }
        else {
          v50 = 1;
        }
        v51 = v50 | v49;
        *(_WORD*)(*(_QWORD*)(a1 + 136) + v43 + 2 * v42 + 10) = v41[92];
        if ((unsigned __int8)v41[92] == 255) {
          v52 = 0x10000;
        }
        else {
          v52 = 1;
        }
        v53 = v52 | v51 | v48;
        *(_WORD*)(*(_QWORD*)(a1 + 136) + v43 + 2 * v42 + 12) = v41[108];
        v54 = *(_QWORD*)(a1 + 136) + v43 + 2 * v42;
        if ((unsigned __int8)v41[108] == 255) {
          v55 = 0x10000;
        }
        else {
          v55 = 1;
        }
        v42 += 8;
        *(_WORD*)(v54 + 14) = v41[124];
        v56 = (unsigned __int8)v41[124];
        v41 += 128;
        if (v56 == 255) {
          v57 = 0x10000;
        }
        else {
          v57 = 1;
        }
        v12 = v57 | v55 | v53;
      } while ((v14 & 0xFFF8) != v42);
    }
    else {
      v42 = 0;
    }
    v58 = v14 & 7;
    if (v58 != 0) {
      v59 = (unsigned __int8*)(v41 + 12);
      result = 2 * v42 + 2LL * (int)result;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 136) + result) = (char)*v59;
        result += 2;
        v60 = *v59;
        v59 += 16;
        if (v60 == 255) {
          v61 = 0x10000;
        }
        else {
          v61 = 1;
        }
        --v58;
        v12 |= v61;
      } while (v58 != 0);
    }
    goto LABEL_77;
  }
LABEL_79:
  *(_WORD*)(a1 + 96) |= 1u;
  v62 = *(_DWORD*)(a1 + 60);
  v63 = v62 >= 1 && v62 <= *(_DWORD*)(a1 + 56);
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v63) {
    v64 = 0;
    v65 = 0;
    do {
      ++v65;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v64) = 2139095040;
      v64 += 12;
    } while (v65 < *(int*)(a1 + 60));
  }
  return result;
}

float MaterialAnimObj_Unknown3(__int64 a1)
{
  float result;
  __int64 v2;
  int v4;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  float* v19;

  result = *(float*)(a1 + 64);
  if (result != **(float**)(a1 + 8)) {
    v2 = *(unsigned __int16*)(a1 + 100);
    if (*(_WORD*)(a1 + 100) != 0) {
      v4 = *(_DWORD*)(a1 + 60);
      if (v4 >= 1 && v4 <= *(_DWORD*)(a1 + 56)) {
        v15 = v2 << 6;
        v16 = 0;
        v17 = 0;
        do {
          v18 = *(_QWORD*)(a1 + 112) + v16;
          GameRoutine_5e1980(a1, v18, v17);
          v16 += 64;
          v17 +=
              *(unsigned __int16*)(v18 + 50) + *(unsigned __int16*)(v18 + 52);
        } while (v15 != v16);
      }
      else {
        v6 = v2 << 6;
        v7 = 0;
        v8 = 0;
        do {
          v9 = *(_QWORD*)(a1 + 112);
          v10 = v9 + v7;
          v11 = **(float**)(a1 + 8);
          v12 = *(unsigned __int16*)(v9 + v7 + 40);
          if (v12 != 0xFFFF) {
            GameRoutine_5e7480(v9 + v7, *(_QWORD*)(a1 + 72) + 4 * v12,
                               *(_QWORD*)(a1 + 136) + 2LL * v8, 0,
                               **(float**)(a1 + 8));
          }
          v13 = *(unsigned __int16*)(v10 + 42);
          if (v13 != 0xFFFF) {
            GameRoutine_5e76a0(
                v9 + v7, *(_QWORD*)(a1 + 72) + 4 * v13,
                *(_QWORD*)(a1 + 136) +
                    2LL * (v8 + *(unsigned __int16*)(v9 + v7 + 50)),
                0, v11);
          }
          v14 = v9 + v7;
          if (*(__int16*)(v14 + 46) != -1) {
            GameRoutine_5e77c0(
                v10, *(_QWORD*)(a1 + 72) + 4LL * *(unsigned __int16*)(v14 + 44),
                0, v11);
          }
          v7 += 64;
          v8 += *(unsigned __int16*)(v14 + 50) + *(unsigned __int16*)(v14 + 52);
        } while (v6 != v7);
      }
    }
    v19 = *(float**)(a1 + 8);
    result = *v19;
    *(float*)(a1 + 64) = *v19;
  }
  return result;
}

void MaterialAnimObj_5e1980(__int64 a1, __int64 a2, int a3, long double a4)
{

#pragma clang fp contract(off)
  float v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 vars0;
  __int64 vars8;
  __int64 vars8a;
  __int64 vars10;
  __int64 vars18;
  __int64 _28;

  v7 = **(float**)(a1 + 8);
  if (*(unsigned __int16*)(a2 + 40) != 0xFFFF) {
    GameRoutine_5e7340(
        a2, *(_QWORD*)(a1 + 72) + 4LL * *(unsigned __int16*)(a2 + 40),
        *(_QWORD*)(a1 + 136) + 2LL * a3,
        *(_QWORD*)(a1 + 48) + 12LL * *(unsigned __int16*)(a2 + 40),
        **(float**)(a1 + 8));
  }
  v8 = *(unsigned __int16*)(a2 + 42);
  if (v8 != 0xFFFF) {
    MaterialAnimObj_5e75c0(
        a2, *(_QWORD*)(a1 + 72) + 4 * v8,
        (__int16*)(*(_QWORD*)(a1 + 136) +
                   2LL * (a3 + *(unsigned __int16*)(a2 + 50))),
        *(_QWORD*)(a1 + 48) + 12LL * *(unsigned __int16*)(a2 + 42), v7);
  }
  if (*(__int16*)(a2 + 46) != -1) {
    *(float*)&a4 = v7;
    v9 = vars8;
    if (*(unsigned __int16*)(a2 + 46) != 0xFFFF) {
      vars8a = vars0;
      vars10 = v9;
      vars18 = _28;
      v10 =
          (_DWORD*)(*(_QWORD*)(a1 + 72) + 4LL * *(unsigned __int16*)(a2 + 44));
      *v10 = GameRoutine_5e53f0(
          *(_QWORD*)(a2 + 24) + 48LL * *(unsigned __int16*)(a2 + 46), a4);
    }
  }
}

__int64 MaterialAnimObj_Unknown7(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  unsigned __int16* v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  bool v14;
  _DWORD* v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int64 (*v21)(_QWORD*, _QWORD);

  if (*(_WORD*)(result + 100) != 0) {
    v2 = 4LL * *(unsigned __int16*)(result + 100);
    v3 = 32;
    v5 = (_QWORD*)result;
    v6 = 0;
    v7 = 0;
    do {
      v8 = v5[14];
      v9 = *(_DWORD*)(v5[11] + v6);
      v10 = (unsigned __int16*)(v8 + v3);
      if ((v9 & 0x80000000) == 0) {
        v11 = *(_DWORD*)(v5[11] + v6) & 0x7FFF;
        result = MaterialAnimObj_5e1be0(
            v5, a2[6] + ((unsigned __int64)(v9 & 0x7FFF) << 7), v10 - 16, v7);
        v12 = v10[7];
        v13 = v10[8];
        v14 = v12 == 0xFFFF && (_DWORD)v13 == 0xFFFF;
        if (!v14) {
          if (v12 == 0xFFFF) {
            v15 = (_DWORD*)(*(_QWORD*)(v8 + v3) + 8 * v13 + 4);
          }
          else {
            v15 = (_DWORD*)(v5[9] + 4LL * *(unsigned __int16*)(v8 + v3 + 12));
          }
          v16 = a2[2];
          v17 = *(_DWORD*)(v16 + 4LL * (v11 >> 5));
          v18 = *v15 != 0;
          v14 = (v17 & (1 << v9)) == 0;
          v19 = v17 & ~(1 << v9);
          v20 = !v14;
          *(_DWORD*)(v16 + 4LL * (v11 >> 5)) = v19 | (v18 << v9);
          v21 = (__int64 (*)(_QWORD*, _QWORD))a2[13];
          if (v21 != nullptr && v18 != v20) {
            result = v21(a2, v9 & 0x7FFF);
          }
        }
      }
      v6 += 4;
      v3 += 64;
      v7 += v10[9] + v10[10];
    } while (v2 != v6);
  }
  return result;
}

__int64 MaterialAnimObj_5e1be0(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4)
{
  __int64 v4;
  int v5;
  _QWORD* v8;
  unsigned __int16* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int* v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned __int16* v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 (*v46)(__int64);
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 (*v52)(__int64);
  __int64 v53;

  v4 = *(_QWORD*)(result + 72);
  v5 = *(unsigned __int16*)(a3 + 50);
  v8 = (_QWORD*)result;
  if (*(_WORD*)(a3 + 50) != 0) {
    v9 = *(unsigned __int16**)(a3 + 8);
    a4 = (int)a4;
    v10 = 0;
    v11 = v4 + 4LL * *(unsigned __int16*)(a3 + 40);
    do {
      v12 = *(unsigned __int16*)(v8[17] + 2 * a4);
      if (v12 != 0xFFFF) {
        v13 = *(_QWORD*)(*(_QWORD*)a2 + 80LL);
        v14 = v13 + 32 * v12;
        if ((*(_DWORD*)(v14 + 20) & 0x80000000) == 0) {
          *(_DWORD*)(*(_QWORD*)(a2 + 16) + 4LL * ((unsigned int)v12 >> 5)) |=
              1 << v12;
          *(_BYTE*)(a2 + 44) |= 1u;
          v13 = *(_QWORD*)(*(_QWORD*)a2 + 80LL);
        }
        v15 = *(unsigned __int16*)(v14 + 24);
        if ((*(_DWORD*)(v13 + 32 * v15 + 20) & 0x80000000) == 0) {
          *(_DWORD*)(*(_QWORD*)(a2 + 16) + ((v15 >> 3) & 0x1FFC)) |= 1 << v15;
          *(_BYTE*)(a2 + 44) |= 1u;
        }
        v16 = v9[5];
        v17 = *(_QWORD*)(a2 + 72) + *(unsigned __int16*)(v14 + 18);
        v18 = v9[4];
        result = v9[6];
        if (v16 + (int)v18 + (int)result > (unsigned int)v18) {
          v19 = v16 + result;
          result = v9[4];
          v20 = v19 & 7;
          if ((v19 & 7) != 0) {
            v21 = 48LL * v9[4] + 20;
            result = v9[4];
            do {
              v22 = *(_DWORD*)(v11 + 4 * result++);
              --v20;
              v23 = *(unsigned int*)(*(_QWORD*)(a3 + 24) + v21);
              v21 += 48;
              *(_DWORD*)(v17 + v23) = v22;
            } while (v20 != 0);
          }
          v24 = (unsigned int)(v19 + v18);
          if ((unsigned __int64)(v18 - v24) <= 0xFFFFFFFFFFFFFFF8LL) {
            v25 = v24 - result;
            v26 = 3 * result;
            result = v11 + 16 + 4 * result;
            v27 = 16 * v26;
            do {
              v25 -= 8;
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                20)) = *(_DWORD*)(result - 16);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                68)) = *(_DWORD*)(result - 12);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                116)) = *(_DWORD*)(result - 8);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                164)) = *(_DWORD*)(result - 4);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                212)) = *(_DWORD*)result;
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                260)) = *(_DWORD*)(result + 4);
              *(_DWORD*)(v17 + *(unsigned int*)(*(_QWORD*)(a3 + 24) + v27 +
                                                308)) = *(_DWORD*)(result + 8);
              v28 = *(_DWORD*)(result + 12);
              result += 32;
              v29 = *(_QWORD*)(a3 + 24) + v27;
              v27 += 384;
              *(_DWORD*)(v17 + *(unsigned int*)(v29 + 356)) = v28;
            } while (v25 != 0);
          }
        }
        if (v9[8] != 0) {
          v30 = v9[7];
          v31 = v9[8] + v30;
          result = 8 * v30;
          do {
            ++v30;
            v32 = (unsigned int*)(*(_QWORD*)(a3 + 32) + result);
            result += 8;
            *(_DWORD*)(v17 + *v32) = v32[1];
          } while (v30 < v31);
        }
      }
      ++v10;
      v9 += 12;
      ++a4;
    } while (v10 != v5);
    v4 = v8[9];
  }
  v33 = *(unsigned __int16*)(a3 + 52);
  if (*(_WORD*)(a3 + 52) != 0) {
    v34 = 2LL * (int)a4;
    v35 = 0;
    v36 = v4 + 4LL * *(unsigned __int16*)(a3 + 42);
    v37 = (unsigned __int16*)(*(_QWORD*)(a3 + 16) + 10LL);
    do {
      v38 = *(unsigned __int16*)(v8[17] + v34);
      if ((_DWORD)v38 != 0xFFFF) {
        if ((__int16)*(v37 - 1) == -1) {
          v41 = *(_QWORD*)(a2 + 80);
          v42 = *(int*)(*(_QWORD*)(a3 + 32) + 8LL * *v37 + 4);
          v53 = *(_QWORD*)(*(_QWORD*)(a2 + 88) +
                           8LL * *(unsigned __int16*)(v8[17] + v34));
          v43 = *(_QWORD*)(v8[18] + 8 * v42);
          v44 = *(_QWORD*)(v8[19] + 8 * v42);
          v45 = *(_QWORD*)(v41 + 8LL * *(unsigned __int16*)(v8[17] + v34));
          *(_QWORD*)(v41 + 8LL * *(unsigned __int16*)(v8[17] + v34)) = v43;
          *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8LL * (unsigned int)v38) = v44;
          v46 = *(__int64 (**)(__int64))(a2 + 120);
          if (v46 != nullptr &&
              (v45 != v43 ||
               v53 != *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38))) {
            result = v46(a2);
          }
        }
        else {
          LODWORD(v39) = *(_DWORD*)(v36 + 4LL * v35);
          if ((v39 & 0x80000000) != 0) {
            v39 = 0;
          }
          else {
            v40 = *(unsigned __int16*)(v8[13] + 108LL);
            if ((unsigned int)v39 >= v40) {
              LODWORD(v39) = v40 - 1;
            }
            v39 = (int)v39;
          }
          v47 = *(_QWORD*)(a2 + 80);
          v48 = *(_QWORD*)(v8[18] + 8 * v39);
          v49 = *(_QWORD*)(v8[19] + 8 * v39);
          v50 = *(_QWORD*)(v47 + 8 * v38);
          v51 = *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38);
          *(_QWORD*)(v47 + 8 * v38) = v48;
          *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38) = v49;
          v52 = *(__int64 (**)(__int64))(a2 + 120);
          if (v52 != nullptr &&
              (v50 != v48 ||
               v51 != *(_QWORD*)(*(_QWORD*)(a2 + 88) + 8 * v38))) {
            result = v52(a2);
          }
          ++v35;
        }
      }
      --v33;
      v37 += 8;
      v34 += 2;
    } while (v33 != 0);
  }
  return result;
}

#pragma GCC visibility pop
