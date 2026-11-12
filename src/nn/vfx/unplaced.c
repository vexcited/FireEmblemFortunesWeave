#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_5d76e0(float*, unsigned __int64);
__int64* GameRoutine_5d7520(__int64* result, __int64*, __int64*, __int64*);
__int64* GameRoutine_5d7840(__int64, unsigned __int64);
__int64* GameRoutine_5d7e00(__int64*, __int64*, __int64*, __int64);
__int64 GameRoutine_5b3d60(__int64, unsigned int, __int64);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c8ac0(__int64, __int64);
__int64 GameRoutine_5c8fa0(__int64);
__int64 GameRoutine_5d3fc0(__int64 result, _QWORD*, __int64, __int64, char);
__int64 GameRoutine_5db340(__int64 result, __int64, __int64, __int64);
__int64 GameRoutine_604160(__int64, __int64*, char*);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
__int64 Resource_5c8c90(_QWORD);
__int64 Resource_5c8cd0(__int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_5b3d10(__int64, int, __int64);
__int64 strlen(_QWORD);
bool GameRoutine_5d79a0(_QWORD*, float*, __int64);
bool nn_vfx_5dae20_alt1(__int64*, __int64*, __int64) __asm__("nn_vfx_5dae20");
extern __int64* GameData_2134fd0[5];
extern __int64 GameData_21364a0[2];
extern __int64 GameData_2149460[];
extern __int64 GameData_2149468;
extern __int64 GameData_2149470;
extern char* GameData_1f8d438[5];
extern char GameData_1aabd4c[4];
extern char GameData_1af0f9a[4];
float* GameRoutine_5da830(float* result, float*, float*, float*);
float* GameRoutine_5daa20(float*, float*);
unsigned __int64 GameRoutine_5dac20(float*, float*);
void GameRoutine_5b6320();
__int64 nn_vfx_5c8480(_QWORD* a1, __int64 a2, __int64 a3);
__int64 nn_vfx_5c8ca0(__int64 a1, __int64 a2, int a3);
__int64 nn_vfx_5c9380(__int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5);
__int64 nn_vfx_5c97d0(__int64 a1, int a2);
__int64 nn_vfx_5c9940(__int64 a1, __int64* a2, __int64 a3, __int64 a4);
__int64 nn_vfx_5d3080(__int64 result, int a2, __int64 a3, int a4,
                      unsigned int a5, char a6, char a7, __int64 a8, double a9,
                      float32x4_t a10);
__int64* nn_vfx_5d6100(__int64 a1, unsigned __int64 a2);
__int64 nn_vfx_5d6ac0(__int64 result, float* a2, __int64 a3, __int64 a4,
                      char a5, long double a6);
float* nn_vfx_5d8dd0(float* result, float* a2, float* a3, float* a4);
__int64 nn_vfx_5d9c60(__int64 result, float* a2, __int64 a3, __int64 a4,
                      char a5);
bool nn_vfx_5dae20(float* a1, __int64* a2, __int64 a3);
float* nn_vfx_5db520(float* result, __int64 a2, __int64 a3, __int64 a4);
__int64 nn_vfx_5db740(__int64* a1);

__int64 nn_vfx_5c8480(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  int v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int16* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int16* v46;
  unsigned __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  unsigned __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int16* v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  int v74;
  __int64 v77;
  __int64 v78;
  int v79;
  char* v80;
  _QWORD* v81;
  _QWORD* v83;

  a1[2] = a2;
  v3 = a3;
  v4 = a1;
  v5 = *(_QWORD*)(a2 + 32);
  a1[3] = v5;
  v6 = *(_QWORD*)(a2 + 40);
  a1[4] = v6;
  a1[5] = *(_QWORD*)(v6 + 24);
  v7 = *(_QWORD*)(v5 + 16);
  if (v7 == 0) {
    goto LABEL_16;
  }
  v8 = v7 + 8;
  v9 = *(unsigned __int16*)(v7 + 12);
  v10 = v7 + 8 + 16 * v9;
  v11 = *(_DWORD*)v10;
  if (*(_DWORD*)(v7 + 8) < *(_DWORD*)v10) {
    do {
      if ((unsigned int)(v11 >> 3) <= 2) {
        v12 =
            ((unsigned __int8)GameData_1af0f9a[~(v11 >> 3) + 3] >> (v11 & 7)) &
            1;
      }
      else {
        v12 = 0;
      }
      v9 = *(unsigned __int16*)(v7 + 12 + 16 * v9 + 2 * v12);
      v13 = v11 < *(_DWORD*)(v8 + 16 * v9);
      v11 = *(_DWORD*)(v8 + 16 * v9);
    } while (v13);
    v10 = v8 + 16 * v9;
  }
  v14 = *(_QWORD*)(v10 + 8);
  if (*(_WORD*)v14 == 3 &&
      ((v15 = *(unsigned __int16*)(v14 + 2), v16 = *(unsigned __int8*)(v14 + 4),
        v15 == 28767)
           ? (v17 = v16 == 48)
           : (v17 = false),
       v17 && (~(v18 = v10 - v7 - 24) & 0xFFFFFFFF0LL) != 0)) {
    v19 = *(_QWORD*)(v5 + 8) + 16LL * (int)(v18 >> 4);
  }
  else {
  LABEL_16:
    v19 = 0;
  }
  v20 = (char*)a1 + 84;
  v21 = 0;
  v77 = v19;
  v81 = a1 + 8;
  v80 = (char*)a1 + 84;
  v83 = a1 + 13;
  do {
    v25 = v4[3];
    v26 = *(_QWORD*)(v25 + 16);
    if (v26 == 0) {
      goto LABEL_31;
    }
    v27 = GameData_1f8d438[v21];
    v28 = strlen(v27);
    v29 = v26 + 8;
    v30 = *(unsigned __int16*)(v26 + 12);
    v31 = v26 + 8 + 16 * v30;
    v32 = *(_DWORD*)v31;
    if (*(_DWORD*)(v26 + 8) < *(_DWORD*)v31) {
      do {
        v34 = (__int64)v32 >> 3;
        if (v28 > v34) {
          v33 = ((unsigned __int8)v27[v28 + ~v34] >> (v32 & 7)) & 1;
        }
        else {
          v33 = 0;
        }
        v30 = *(unsigned __int16*)(v26 + 12 + 16 * v30 + 2 * v33);
        v13 = v32 < *(_DWORD*)(v29 + 16 * v30);
        v32 = *(_DWORD*)(v29 + 16 * v30);
      } while (v13);
      v31 = v29 + 16 * v30;
    }
    v35 = *(unsigned __int16**)(v31 + 8);
    if (v28 == *v35 && (unsigned int)memcmp(v35 + 1, v27, v28) == 0 &&
        (~(v36 = v31 - v26 - 24) & 0xFFFFFFFF0LL) != 0) {
      v23 = *(_QWORD*)(v25 + 8) + 16LL * (int)(v36 >> 4);
      if (v21 != 4) {
        goto LABEL_47;
      }
    }
    else {
    LABEL_31:
      v23 = 0;
      if (v21 != 4) {
        goto LABEL_47;
      }
    }
    if (v23 == 0) {
      if (v26 == 0) {
        goto LABEL_18;
      }
      v37 = *(unsigned __int8*)(v3 + 20);
      if ((_DWORD)v37 == 255) {
        goto LABEL_18;
      }
      v38 = *(_QWORD*)(v26 + 16 * v37 + 32) + 2LL;
      v39 = strlen(v38);
      v40 = v26 + 8;
      v41 = *(unsigned __int16*)(v26 + 12);
      v42 = v26 + 8 + 16 * v41;
      v43 = *(_DWORD*)v42;
      if (*(_DWORD*)(v26 + 8) < *(_DWORD*)v42) {
        do {
          v45 = (__int64)v43 >> 3;
          if (v39 > v45) {
            v44 = (*(unsigned __int8*)(v38 + v39 + ~v45) >> (v43 & 7)) & 1;
          }
          else {
            v44 = 0;
          }
          v41 = *(unsigned __int16*)(v26 + 12 + 16 * v41 + 2 * v44);
          v13 = v43 < *(_DWORD*)(v40 + 16 * v41);
          v43 = *(_DWORD*)(v40 + 16 * v41);
        } while (v13);
        v42 = v40 + 16 * v41;
      }
      v46 = *(unsigned __int16**)(v42 + 8);
      if (v39 != *v46 || (unsigned int)memcmp(v46 + 1, v38, v39) != 0 ||
          (~(v47 = v42 - v26 - 24) & 0xFFFFFFFF0LL) == 0) {
      LABEL_18:
        v22 = 64;
        v23 = v19;
        *(_DWORD*)&v20[4 * v21] = *(unsigned __int8*)(v19 + 14);
        v24 = *(_DWORD*)(v19 + 8);
        goto LABEL_19;
      }
      v23 = *(_QWORD*)(v25 + 8) + 16LL * (int)(v47 >> 4);
    }
  LABEL_47:
    if (v23 == 0) {
      goto LABEL_18;
    }
    v48 = *(_DWORD*)(v23 + 8);
    if (v21 == 4) {
      if (v26 == 0) {
        goto LABEL_95;
      }
      v49 = v26 + 8;
      v51 = v26 + 12;
      v50 = *(unsigned __int16*)(v26 + 12);
      v52 = *(_DWORD*)(v26 + 8 + 16 * v50);
      v53 = v26 + 8 + 16 * v50;
      if (*(_DWORD*)(v26 + 8) < v52) {
        v54 = *(_DWORD*)(v26 + 8 + 16 * v50);
        v55 = *(unsigned __int16*)(v26 + 12);
        do {
          if ((unsigned int)(v54 >> 3) <= 2) {
            v56 = ((unsigned __int8)GameData_1aabd4c[~(v54 >> 3) + 3] >>
                   (v54 & 7)) &
                  1;
          }
          else {
            v56 = 0;
          }
          v55 = *(unsigned __int16*)(v51 + 16 * v55 + 2 * v56);
          v13 = v54 < *(_DWORD*)(v49 + 16 * v55);
          v54 = *(_DWORD*)(v49 + 16 * v55);
        } while (v13);
        v53 = v49 + 16 * v55;
      }
      v57 = *(_QWORD*)(v53 + 8);
      if (*(_WORD*)v57 == 3) {
        v58 = *(unsigned __int16*)(v57 + 2);
        v59 = *(unsigned __int8*)(v57 + 4);
        if (v58 == 30047 && v59 == 49) {
          v61 = v53 - v26 - 24;
          if ((~v61 & 0xFFFFFFFF0LL) != 0) {
            v62 = *(_QWORD*)(v25 + 8);
            if (v62 != 0) {
              v3 = a3;
              v20 = v80;
              if (v48 != *(_DWORD*)(v62 + 16LL * (int)(v61 >> 4) + 8)) {
                goto LABEL_99;
              }
            LABEL_67:
              if (v48 == 2305) {
                v63 = 2817;
              }
              else {
                v63 = v48;
              }
              if (v63 == 4609) {
                v63 = 5377;
              }
              if (v63 == 4613) {
                v63 = 5381;
              }
              if (v63 == 5893) {
                v63 = 6405;
              }
              if (v63 == 2306) {
                v63 = 2818;
              }
              if (v63 == 4610) {
                v48 = 5378;
              }
              else {
                v48 = v63;
              }
              goto LABEL_95;
            }
          }
        }
      }
      v64 = *(unsigned __int8*)(a3 + 21);
      if (v64 != 255) {
        v79 = *(_DWORD*)(v23 + 8);
        v65 = *(_DWORD*)(v26 + 8);
        v78 = *(_QWORD*)(v26 + 16 * v64 + 32) + 2LL;
        v66 = strlen(v78);
        v67 = v26 + 8 + 16 * v50;
        if (v65 < v52) {
          do {
            v69 = (__int64)v52 >> 3;
            if (v66 > v69) {
              v68 = (*(unsigned __int8*)(v78 + v66 + ~v69) >> (v52 & 7)) & 1;
            }
            else {
              v68 = 0;
            }
            v50 = *(unsigned __int16*)(v51 + 16 * v50 + 2 * v68);
            v13 = v52 < *(_DWORD*)(v49 + 16 * v50);
            v52 = *(_DWORD*)(v49 + 16 * v50);
          } while (v13);
          v67 = v49 + 16 * v50;
        }
        v70 = *(unsigned __int16**)(v67 + 8);
        v4 = a1;
        v19 = v77;
        if (v66 == *v70) {
          v71 = v67;
          v3 = a3;
          v20 = v80;
          if ((unsigned int)memcmp(v70 + 1, v78, v66) == 0 &&
              (~(v72 = v71 - v26 - 24) & 0xFFFFFFFF0LL) != 0) {
            v73 = *(_QWORD*)(v25 + 8);
            v48 = v79;
            if (v73 != 0) {
              if (v79 != *(_DWORD*)(v73 + 16LL * (int)(v72 >> 4) + 8)) {
              LABEL_99:
                v74 = v48;
                GameRoutine_5c02c0(
                    "%s.fmdb : A format of _u1 is different from _uo of the "
                    "particle shape.\n",
                    (const char*)(*(_QWORD*)(v4[2] + 8LL) + 2LL));
                *((_DWORD*)v4 + 20) = v74;
                goto LABEL_96;
              }
              goto LABEL_67;
            }
          }
          else {
            v48 = v79;
          }
        LABEL_95:
          *((_DWORD*)v4 + 20) = v48;
          goto LABEL_96;
        }
        v48 = v79;
      }
      v3 = a3;
      v20 = v80;
      goto LABEL_95;
    }
    *((_DWORD*)v81 + v21) = v48;
  LABEL_96:
    v24 = *(unsigned __int8*)(v23 + 14);
    v22 = 84;
  LABEL_19:
    *(_DWORD*)((char*)v4 + 4 * v21 + v22) = v24;
    v83[v21++] = *(unsigned __int16*)(v23 + 12);
  } while (v21 != 5);
  RectDrawer_5fcbc0(*(_QWORD*)(v4[5] + 16LL), v4 + 6);
  return 1;
}

__int64 nn_vfx_5c8ca0(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD*)(a1 + 8) =
      *(_QWORD*)(*(_QWORD*)(a2 + GameData_2149460[a3]) + 104LL);
  *(_BYTE*)a1 = 1;
  return 1;
}

__int64 nn_vfx_5c9380(__int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v33;
  int v35;

  *(_QWORD*)(a1 + 8) = a4;
  v8 = *(int*)(a4 + 28);
  *(_DWORD*)(a1 + 48) = v8;
  result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
      a3, (384 * v8) | 0x20, 128);
  v10 = *(int*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = result;
  if ((_DWORD)v10 != 0) {
    v11 = 384 * v10;
    v12 = 384 * v10 - 384;
    v13 = result;
    if ((~(unsigned __int8)(v12 / 0x180) & 7) != 0) {
      v14 = ((unsigned __int8)(v12 / 0x180) + 1) & 7;
      v13 = result;
      do {
        v15 = (_QWORD*)(v13 + 292);
        v13 += 384;
        --v14;
        v15[9] = -1;
        v15[10] = -1;
        v15[7] = -1;
        v15[8] = -1;
        v15[5] = -1;
        v15[6] = -1;
        v15[3] = -1;
        v15[4] = -1;
        v15[1] = -1;
        v15[2] = -1;
        *v15 = -1;
      } while (v14 != 0);
    }
    if (v12 >= 0xA80) {
      v16 = result + v11;
      do {
        *(_QWORD*)(v13 + 364) = -1;
        *(_QWORD*)(v13 + 372) = -1;
        *(_QWORD*)(v13 + 348) = -1;
        *(_QWORD*)(v13 + 356) = -1;
        *(_QWORD*)(v13 + 332) = -1;
        *(_QWORD*)(v13 + 340) = -1;
        *(_QWORD*)(v13 + 316) = -1;
        *(_QWORD*)(v13 + 324) = -1;
        *(_QWORD*)(v13 + 300) = -1;
        *(_QWORD*)(v13 + 308) = -1;
        *(_QWORD*)(v13 + 292) = -1;
        *(_QWORD*)(v13 + 676) = -1;
        *(_QWORD*)(v13 + 684) = -1;
        *(_QWORD*)(v13 + 692) = -1;
        *(_QWORD*)(v13 + 700) = -1;
        *(_QWORD*)(v13 + 708) = -1;
        *(_QWORD*)(v13 + 716) = -1;
        *(_QWORD*)(v13 + 724) = -1;
        *(_QWORD*)(v13 + 732) = -1;
        *(_QWORD*)(v13 + 740) = -1;
        *(_QWORD*)(v13 + 748) = -1;
        *(_QWORD*)(v13 + 756) = -1;
        *(_QWORD*)(v13 + 1132) = -1;
        *(_QWORD*)(v13 + 1140) = -1;
        *(_QWORD*)(v13 + 1116) = -1;
        *(_QWORD*)(v13 + 1124) = -1;
        *(_QWORD*)(v13 + 1100) = -1;
        *(_QWORD*)(v13 + 1108) = -1;
        *(_QWORD*)(v13 + 1084) = -1;
        *(_QWORD*)(v13 + 1092) = -1;
        *(_QWORD*)(v13 + 1068) = -1;
        *(_QWORD*)(v13 + 1076) = -1;
        *(_QWORD*)(v13 + 1060) = -1;
        *(_QWORD*)(v13 + 1516) = -1;
        *(_QWORD*)(v13 + 1524) = -1;
        *(_QWORD*)(v13 + 1500) = -1;
        *(_QWORD*)(v13 + 1508) = -1;
        *(_QWORD*)(v13 + 1484) = -1;
        *(_QWORD*)(v13 + 1492) = -1;
        *(_QWORD*)(v13 + 1468) = -1;
        *(_QWORD*)(v13 + 1476) = -1;
        *(_QWORD*)(v13 + 1452) = -1;
        *(_QWORD*)(v13 + 1460) = -1;
        *(_QWORD*)(v13 + 1444) = -1;
        *(_QWORD*)(v13 + 1900) = -1;
        *(_QWORD*)(v13 + 1908) = -1;
        *(_QWORD*)(v13 + 1884) = -1;
        *(_QWORD*)(v13 + 1892) = -1;
        *(_QWORD*)(v13 + 1868) = -1;
        *(_QWORD*)(v13 + 1876) = -1;
        *(_QWORD*)(v13 + 1852) = -1;
        *(_QWORD*)(v13 + 1860) = -1;
        *(_QWORD*)(v13 + 1836) = -1;
        *(_QWORD*)(v13 + 1844) = -1;
        *(_QWORD*)(v13 + 1828) = -1;
        *(_QWORD*)(v13 + 2284) = -1;
        *(_QWORD*)(v13 + 2292) = -1;
        *(_QWORD*)(v13 + 2268) = -1;
        *(_QWORD*)(v13 + 2276) = -1;
        *(_QWORD*)(v13 + 2252) = -1;
        *(_QWORD*)(v13 + 2260) = -1;
        *(_QWORD*)(v13 + 2236) = -1;
        *(_QWORD*)(v13 + 2244) = -1;
        *(_QWORD*)(v13 + 2220) = -1;
        *(_QWORD*)(v13 + 2228) = -1;
        *(_QWORD*)(v13 + 2212) = -1;
        *(_QWORD*)(v13 + 2668) = -1;
        *(_QWORD*)(v13 + 2676) = -1;
        *(_QWORD*)(v13 + 2652) = -1;
        *(_QWORD*)(v13 + 2660) = -1;
        *(_QWORD*)(v13 + 2636) = -1;
        *(_QWORD*)(v13 + 2644) = -1;
        *(_QWORD*)(v13 + 2620) = -1;
        *(_QWORD*)(v13 + 2628) = -1;
        *(_QWORD*)(v13 + 2604) = -1;
        *(_QWORD*)(v13 + 2612) = -1;
        *(_QWORD*)(v13 + 2596) = -1;
        v17 = (_QWORD*)(v13 + 2980);
        v13 += 3072;
        v17[9] = -1;
        v17[10] = -1;
        v17[7] = -1;
        v17[8] = -1;
        v17[5] = -1;
        v17[6] = -1;
        v17[3] = -1;
        v17[4] = -1;
        v17[1] = -1;
        v17[2] = -1;
        *v17 = -1;
      } while (v13 != v16);
    }
  }
  *(_QWORD*)(a1 + 32) = result;
  if ((a5 & 1) == 0) {
    v21 = *(_DWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 24) = 0;
    if (v21 < 1) {
      goto LABEL_33;
    }
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = GameData_2134fd0[0];
    while (1) {
      v27 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) + v22;
      v28 = *(_QWORD*)(v27 + *v25);
      v29 = *(_QWORD*)(v27 + v25[1]);
      v30 = *(_QWORD*)(v27 +
                       *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v25));
      if (v28 != 0) {
        v31 = GameRoutine_604160(*(_QWORD*)(v28 + 104), a2, (char*)v28);
        if (v29 != 0 && v31 != 0) {
        LABEL_28:
          v35 = GameRoutine_604160(*(_QWORD*)(v29 + 104), a2, (char*)v29);
          v33 = 1;
          if (v30 == 0 || v35 == 0) {
            goto LABEL_15;
          }
          goto LABEL_32;
        }
      }
      else {
        v31 = 3;
        if (v29 != 0) {
          goto LABEL_28;
        }
      }
      v33 = 0;
      if (v30 != 0 && v31 != 0) {
      LABEL_32:
        GameRoutine_604160(*(_QWORD*)(v30 + 104), a2, (char*)v30);
        v33 = 2;
      }
    LABEL_15:
      Resource_5c8c90(*(_QWORD*)(a1 + 32) + v23);
      nn_vfx_5c8ca0(*(_QWORD*)(a1 + 32) + v23, v27, v33);
      Resource_5c8cd0(*(_QWORD*)(a1 + 32) + v23);
      result = GameRoutine_5c8fa0(*(_QWORD*)(a1 + 32) + v23);
      v26 = *(int*)(a1 + 48);
      ++v24;
      v23 += 384;
      v22 += 64;
      *(_DWORD*)(a1 + 16) = v33;
      if (v24 >= v26) {
        goto LABEL_33;
      }
    }
  }
  v18 = *(_DWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 24) = a2;
  if (v18 >= 1) {
    v19 = 0;
    v20 = 0;
    do {
      result = Resource_5c8c90(*(_QWORD*)(a1 + 32) + v19);
      ++v20;
      v19 += 384;
    } while (v20 < *(int*)(a1 + 48));
  }
LABEL_33:
  *(_BYTE*)a1 = 1;
  return result;
}

__int64 nn_vfx_5c97d0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v11;
  int v14;

  if (*(_BYTE*)a1 != 1) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 32);
  v3 = a2;
  if ((*(_BYTE*)(v2 + 384LL * a2) & 1) == 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) + ((__int64)a2 << 6);
    v6 = *(_QWORD*)(v5 + GameData_2149460[0]);
    v7 = *(_QWORD*)(v5 + GameData_2149468);
    v8 = *(_QWORD*)(v5 + GameData_2149470);
    if (v6 != 0) {
      v9 = GameRoutine_604160(*(_QWORD*)(v6 + 104), *(__int64**)(a1 + 24),
                              (char*)v6);
      if (v7 != 0 && v9 != 0) {
      LABEL_17:
        v14 = GameRoutine_604160(*(_QWORD*)(v7 + 104), *(__int64**)(a1 + 24),
                                 (char*)v7);
        v11 = 1;
        if (v8 == 0 || v14 == 0) {
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
    else {
      v9 = 3;
      if (v7 != 0) {
        goto LABEL_17;
      }
    }
    v11 = 0;
    if (v8 != 0 && v9 != 0) {
    LABEL_21:
      GameRoutine_604160(*(_QWORD*)(v8 + 104), *(__int64**)(a1 + 24),
                         (char*)v8);
      v11 = 2;
    }
  LABEL_22:
    Resource_5c8c90(*(_QWORD*)(a1 + 32) + 384 * v3);
    nn_vfx_5c8ca0(*(_QWORD*)(a1 + 32) + 384 * v3, v5, v11);
    Resource_5c8cd0(*(_QWORD*)(a1 + 32) + 384 * v3);
    GameRoutine_5c8fa0(*(_QWORD*)(a1 + 32) + 384 * v3);
    v2 = *(_QWORD*)(a1 + 32);
    *(_DWORD*)(a1 + 16) = v11;
  }
  return v2 + 384LL * (int)v3;
}

__int64 nn_vfx_5c9940(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v23;
  int v25;

  *(_QWORD*)(a1 + 8) = a4;
  v6 = *(int*)(a4 + 28);
  *(_DWORD*)(a1 + 40) = v6;
  result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
      a3, (v6 << 6) | 0x20, 128);
  v8 = *(int*)(a1 + 40);
  *(_QWORD*)(a1 + 32) = result;
  if ((_DWORD)v8 != 0) {
    v9 = (_QWORD*)result;
    if ((v8 & 7) != 0) {
      v10 = v8 & 7;
      v9 = (_QWORD*)result;
      do {
        *v9 = 0;
        v9 += 8;
        --v10;
      } while (v10 != 0);
    }
    if (((v8 - 1) & 0x3FFFFFFFFFFFFFFuLL) >= 7) {
      v11 = (_QWORD*)(result + (v8 << 6));
      do {
        *v9 = 0;
        v9[8] = 0;
        v9[16] = 0;
        v9[24] = 0;
        v9[32] = 0;
        v9[40] = 0;
        v9[48] = 0;
        v9[56] = 0;
        v9 += 64;
      } while (v9 != v11);
    }
    v12 = *(_DWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 24) = result;
    if (v12 >= 1) {
      v13 = 0;
      v14 = 0;
      v15 = GameData_2134fd0[0];
      do {
        v17 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
        v18 = *(_QWORD*)(v17 + *v15 + v13);
        v19 = *(_QWORD*)(v17 + v15[1] + v13);
        v20 = *(_QWORD*)(v17 +
                         *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15) +
                         v13);
        if (v18 != 0) {
          v21 = GameRoutine_604160(*(_QWORD*)(v18 + 104), a2, (char*)v18);
          if (v19 != 0 && v21 != 0) {
          LABEL_23:
            v25 = GameRoutine_604160(*(_QWORD*)(v19 + 104), a2, (char*)v19);
            v23 = 1;
            if (v20 == 0 || v25 == 0) {
              goto LABEL_10;
            }
            goto LABEL_27;
          }
        }
        else {
          v21 = 3;
          if (v19 != 0) {
            goto LABEL_23;
          }
        }
        v23 = 0;
        if (v20 == 0 || v21 == 0) {
          goto LABEL_10;
        }
      LABEL_27:
        GameRoutine_604160(*(_QWORD*)(v20 + 104), a2, (char*)v20);
        v23 = 2;
      LABEL_10:
        result = GameRoutine_5c8ac0(
            *(_QWORD*)(a1 + 24) + v13,
            *(_QWORD*)(*(_QWORD*)(v17 + v15[v23] + v13) + 104LL));
        v16 = *(int*)(a1 + 40);
        ++v14;
        v13 += 64;
        *(_DWORD*)(a1 + 16) = v23;
      } while (v14 < v16);
    }
  }
  else {
    *(_QWORD*)(a1 + 24) = result;
  }
  *(_BYTE*)a1 = 1;
  return result;
}

__int64 nn_vfx_5d3080(__int64 result, int a2, __int64 a3, int a4,
                      unsigned int a5, char a6, char a7, __int64 a8, double a9,
                      float32x4_t a10)
{

#pragma clang fp contract(off)
  float32x4_t* v10;
  _QWORD* v15;
  __int64 v16;
  float32x4_t v17;
  int8x16_t v18;
  float v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  char v41;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    char gap8_[7];
    char v51;
    char gap16_[16];
    __int64 vars10;
    __int64 vars18;
    __int64 vars20;
    __int64 vars28;
    __int64 vars30;
    __int64 vars38;
    __int64 vars40;
    __int64 vars48;
  } v51_;

  v10 = *(float32x4_t**)(result + 8LL * a4 + 176);
  if (v10 != nullptr) {
    v15 = (_QWORD*)result;
    if ((a6 & 1) != 0) {
      v16 = *(_QWORD*)(result + 16) + 2536LL * a2;
      do {
        if ((*(_DWORD*)v16 & LANES128(v10[4]).n128_u32[2]) != 0 &&
            (LANES128(v10[35]).n128_u32[0] & a5) != 0 &&
            LANES128(*(v10)).n128_u8[11] != 0) {
          v17 = v10[9];
          *(_QWORD*)(*(_QWORD*)(v16 + 2504) + 16LL * *(int*)(v16 + 2512)) = v10;
          LANES128(a10).n128_u64[0] = *(_QWORD*)(v16 + 1656);
          LANES128(a10).n128_u32[2] = *(_DWORD*)(v16 + 1664);
          v18 = vmulq_f32(v17, a10);
          a10 = vextq_s8(v18, v18, 8u);
          LANES128(v18).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t, LANES128(a10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                  .n64_u64[0];
          v19 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                  .n64_f32[0] +
              *(float*)(v16 + 1668);
          v20 = (unsigned __int8)(LODWORD(v19) >> 23) - 64;
          if (fabs(v19) == 0x0.0p+0f) {
            v20 = 0;
          }
          v21 = (unsigned __int16)(LODWORD(v19) >> 7) | (v20 << 16) |
                (LODWORD(v19) >> 8) & 0x800000;
          if ((unsigned int)v20 > 0x7F) {
            v21 = 8323072;
          }
          if (v20 < 0) {
            v21 = (LODWORD(v19) >> 8) & 0x800000;
          }
          *(_DWORD*)(*(_QWORD*)(v16 + 2504) +
                     16LL * (int)(*(_DWORD*)(v16 + 2512))++ + 8) =
              v21 + (LANES128(v10[1]).n128_u8[0] << 24);
        }
        v10 = (float32x4_t*)LANES128(v10[29]).n128_u64[0];
      } while (v10 != nullptr);
      v29 = v51_.vars40;
      v28 = v51_.vars48;
      v31 = v51_.vars30;
      v30 = v51_.vars38;
      v33 = v51_.vars20;
      v32 = v51_.vars28;
      v35 = v51_.vars10;
      v34 = v51_.vars18;
      *(_DWORD*)(v16 + 4) |= a5;
      v51_.vars10 = v35;
      v51_.vars18 = v34;
      v51_.vars20 = v33;
      v51_.vars28 = v32;
      v51_.vars30 = v31;
      v51_.vars38 = v30;
      v51_.vars40 = v29;
      v51_.vars48 = v28;
      v37 = *(_QWORD*)(result + 16) + 2536LL * a2;
      v38 = *(int*)(v37 + 2512);
      if ((_DWORD)v38 == 0) {
        goto LABEL_38;
      }
      v39 = result;
      v41 = a7 & 1;
      result = GameRoutine_5d3fc0(
          *(_QWORD*)(v37 + 2504), (_QWORD*)(*(_QWORD*)(v37 + 2504) + 16 * v38),
          (__int64)&v51_.v51, (2 * __clz(v38)) ^ 0x7E, 1);
      if (a2 >= (signed __int32)*(_DWORD*)(v39 + 8)) {
        v48 = 0;
        if (*(int*)(v37 + 2512) < 1) {
        LABEL_37:
          *(_DWORD*)(v37 + 2512) = 0;
        LABEL_38:
          *(_DWORD*)(v37 + 4) = 0;
          return result;
        }
      }
      else {
        v44 = (__int64)a2 << 6;
        *(_DWORD*)(*(_QWORD*)(v39 + 32) + v44 + 16) =
            *(_DWORD*)(*(_QWORD*)(v39 + 16) + 2536LL * a2);
        *(_DWORD*)(*(_QWORD*)(v39 + 32) + v44 + 20) =
            *(_DWORD*)(*(_QWORD*)(v39 + 16) + 2536LL * a2 + 264);
        *(_QWORD*)(*(_QWORD*)(v39 + 32) + v44 + 24) =
            *(_QWORD*)(*(_QWORD*)(v39 + 16) + 2536LL * a2 + 1960);
        *(_QWORD*)(*(_QWORD*)(v39 + 32) + v44 + 32) =
            *(_QWORD*)(*(_QWORD*)(v39 + 16) + 2536LL * a2 + 1968);
        v45 = *(_QWORD*)(v39 + 16) + 2536LL * a2;
        v46 = *(unsigned __int8*)(v45 + 2528);
        v47 = v45 + 1944;
        if (v46 != 0) {
          v47 = 0;
        }
        *(_QWORD*)(*(_QWORD*)(v39 + 32) + v44 + 40) = v47;
        v48 = *(_QWORD*)(v39 + 32) + v44;
        if (*(int*)(v37 + 2512) < 1) {
          goto LABEL_37;
        }
      }
      v49 = 0;
      v50 = 0;
      do {
        result = ((__int64 (*)(_QWORD, __int64, _QWORD, _QWORD, __int64,
                               __int64, _QWORD, _QWORD))GameRoutine_5b6320)(
            *(_QWORD*)(*(_QWORD*)(v37 + 2504) + v49), a3,
            *(unsigned int*)(v37 + 4), v41 & 1, a8, v48, *(_QWORD*)(v39 + 4600),
            *(_QWORD*)(v39 + 4584));
        ++v50;
        v49 += 16;
      } while (v50 < *(int*)(v37 + 2512));
      goto LABEL_37;
    }
    if (a2 >= (signed __int32)*(_DWORD*)(result + 8)) {
      v27 = 0;
      v22 = a2;
    }
    else {
      v22 = a2;
      v23 = (__int64)a2 << 6;
      *(_DWORD*)(*(_QWORD*)(result + 32) + v23 + 16) =
          *(_DWORD*)(*(_QWORD*)(result + 16) + 2536LL * a2);
      *(_DWORD*)(*(_QWORD*)(result + 32) + v23 + 20) =
          *(_DWORD*)(*(_QWORD*)(result + 16) + 2536LL * a2 + 264);
      *(_QWORD*)(*(_QWORD*)(result + 32) + v23 + 24) =
          *(_QWORD*)(*(_QWORD*)(result + 16) + 2536LL * a2 + 1960);
      *(_QWORD*)(*(_QWORD*)(result + 32) + v23 + 32) =
          *(_QWORD*)(*(_QWORD*)(result + 16) + 2536LL * a2 + 1968);
      v24 = *(_QWORD*)(result + 16) + 2536LL * a2;
      v25 = *(unsigned __int8*)(v24 + 2528);
      v26 = v24 + 1944;
      if (v25 != 0) {
        v26 = 0;
      }
      *(_QWORD*)(*(_QWORD*)(result + 32) + v23 + 40) = v26;
      v27 = *(_QWORD*)(result + 32) + v23;
    }
    v36 = 2536LL * v22;
    do {
      if ((*(_DWORD*)(v15[2] + v36) & LANES128(v10[4]).n128_u32[2]) != 0 &&
          (LANES128(v10[35]).n128_u32[0] & a5) != 0 &&
          LANES128(*(v10)).n128_u8[11] != 0) {
        result = ((__int64 (*)(float32x4_t*, __int64, _QWORD, _QWORD, __int64,
                               __int64, _QWORD, _QWORD))GameRoutine_5b6320)(
            v10, a3, a5, a7 & 1, a8, v27, v15[575], v15[573]);
      }
      v10 = (float32x4_t*)LANES128(v10[29]).n128_u64[0];
    } while (v10 != nullptr);
  }
  return result;
}

__int64* nn_vfx_5d6100(__int64 a1, unsigned __int64 a2)
{

#pragma clang fp contract(off)
  float v2;
  int v3;
  unsigned __int64 v4;
  float v5;
  float v6;
  float v7;
  bool v8;
  __int64 v10;
  float v11;
  float v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  bool v20;

  v2 = *(float*)a1;
  v3 = *(_DWORD*)(a1 + 4);
  v4 = a1 + 8;
  v5 = *(float*)(a1 + 8);
  v6 = *(float*)a1;
  if (v5 <= *(float*)a1) {
    v10 = 0;
    while (v5 < v6 || *(_DWORD*)(v4 + 4) < v3) {
      v11 = *(float*)(v4 + 8);
      v4 += 8LL;
      v5 = v11;
      v10 -= 8;
      if (v11 > v6) {
        goto LABEL_16;
      }
    }
    if (v10 == 0) {
      goto LABEL_2;
    }
    do {
      do {
      LABEL_16:
        v12 = *(float*)(a2 - 8);
        a2 -= 8LL;
        v13 = v12 < v6;
      } while (v12 > v6);
    } while (!v13 && *(_DWORD*)(a2 + 4) >= v3);
  }
  else {
  LABEL_2:
    while (v4 < a2) {
      while (1) {
        v7 = *(float*)(a2 - 8);
        a2 -= 8LL;
        v8 = v7 < v6;
        if (v7 > v6) {
          break;
        }
        if (!v8 && *(_DWORD*)(a2 + 4) >= v3 && v4 < a2) {
          continue;
        }
        goto LABEL_19;
      }
    }
  }
LABEL_19:
  v14 = v4;
  if (v4 < a2) {
    v14 = v4;
    v15 = a2;
    do {
      v16 = *(_QWORD*)v14;
      *(_QWORD*)v14 = *(_QWORD*)v15;
      *(_QWORD*)v15 = v16;
      do {
        v17 = *(float*)(v14 + 8);
        v14 += 8LL;
        v18 = v17;
      } while (v17 <= v6 && (v18 < v6 || *(_DWORD*)(v14 + 4) < v3));
      do {
        do {
          v19 = *(float*)(v15 - 8);
          v15 -= 8LL;
          v20 = v19 < v6;
        } while (v19 > v6);
      } while (!v20 && *(_DWORD*)(v15 + 4) >= v3);
    } while (v14 < v15);
  }
  if (a1 != v14 - 8) {
    *(_QWORD*)a1 = *(_QWORD*)(v14 - 8);
  }
  *(float*)(v14 - 8) = v2;
  *(_DWORD*)(v14 - 4) = v3;
  return (__int64*)(v14 - 8);
}

__int64 nn_vfx_5d6ac0(__int64 result, float* a2, __int64 a3, __int64 a4,
                      char a5, long double a6)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  __int64 v35;
  float v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  float v43;
  float v44;
  __int64 v45;
  float v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  float v55;
  __int64 v56;
  __int64 v57;
  float v58;
  __int64* v59;
  long double v60;
  char v61;
  bool v62;
  bool v63;
  float v64;
  float* v65;
  _QWORD* v66;
  float v67;
  float v68;
  __int64 v69;
  __int64 v70;
  float v71;
  __int64 v72;
  float v73;
  float v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float v78;
  __int64 v79;
  float v80;
  __int64 v81;
  float* v82;
  bool v84;
  __int64 v85;
  float* v86;
  __int64 v87;
  float* v88;
  float v89;
  float v90;
  int v91;
  __int64 v92;
  _QWORD* v93;
  float v94;
  float v95;
  __int64 v96;
  float v97;
  float v98;
  int v99;
  float* v100;
  float v101;
  float* v102;

  v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = result;
LABEL_2:
  v10 = v9;
LABEL_3:
  v11 = 1 - a4;
  while (1) {
    v12 = v11;
    v9 = v10;
    v13 = ((__int64)a2 - v10) >> 3;
    if (v13 > 2) {
      break;
    }
    if ((unsigned __int64)v13 < 2) {
      return result;
    }
    if (v13 == 2) {
      v64 = *(a2 - 2);
      if (v64 < *(float*)v10 ||
          v64 <= *(float*)v10 && *((_DWORD*)a2 - 1) >= *(_DWORD*)(v10 + 4)) {
        return result;
      }
    LABEL_197:
      v96 = *(_QWORD*)v10;
      *(_QWORD*)v10 = *((_QWORD*)a2 - 1);
      goto LABEL_198;
    }
  LABEL_11:
    if (v13 <= 23) {
      v82 = (float*)(v10 + 8);
      v84 = (float*)v10 == a2 || v82 == a2;
      if ((a5 & 1) != 0) {
        if (!v84) {
          v85 = 0;
          v86 = (float*)v10;
          do {
            v88 = v86;
            v89 = v86[2];
            v90 = *v86;
            v86 = v82;
            if (v89 >= v90) {
              v91 = *((_DWORD*)v88 + 3);
              if (v89 > v90 || v91 < *((_DWORD*)v88 + 1)) {
                *((_QWORD*)v88 + 1) = *(_QWORD*)v88;
                v87 = v10;
                if (v88 != (float*)v10) {
                  v92 = v85;
                  v87 = (__int64)v88;
                  do {
                    v93 = (_QWORD*)(v10 + v92);
                    v94 = *(float*)(v10 + v92 - 8);
                    if (v94 > v89) {
                      v87 = v10 + v92;
                      goto LABEL_162;
                    }
                    if (v94 >= v89 && v91 >= *(_DWORD*)(v10 + v92 - 4)) {
                      goto LABEL_162;
                    }
                    v92 -= 8;
                    *v93 = *(v93 - 1);
                    v87 -= 8;
                  } while (v92 != 0);
                  v87 = v10;
                }
              LABEL_162:
                *(float*)v87 = v89;
                *(_DWORD*)(v87 + 4) = v91;
              }
            }
            v82 = v86 + 2;
            v85 += 8;
          } while (v86 + 2 != a2);
        }
      }
      else if (!v84) {
        do {
          v98 = *v82;
          if (*v82 >= *(float*)v9) {
            v99 = *(_DWORD*)(v9 + 12);
            if (*v82 > *(float*)v9 || v99 < *(_DWORD*)(v9 + 4)) {
              v100 = (float*)v9;
              *(_QWORD*)v82 = *(_QWORD*)v9;
              v101 = *(float*)(v9 - 8);
              if (v101 <= v98) {
                v102 = (float*)v9;
                while (v101 < v98 || v99 < *((_DWORD*)v102 - 1)) {
                  v101 = *(v102 - 4);
                  v100 = v102 - 2;
                  *(_QWORD*)v102 = *((_QWORD*)v102 - 1);
                  v102 -= 2;
                  if (v101 > v98) {
                    goto LABEL_184;
                  }
                }
                v100 = v102;
              }
            LABEL_184:
              *v100 = v98;
              *((_DWORD*)v100 + 1) = v99;
            }
          }
          v82 += 2;
          v9 += 8;
        } while (v82 != a2);
      }
      return result;
    }
    if (v11 == 1) {
      if ((float*)v10 != a2) {
        return (__int64)GameRoutine_5d7e00((__int64*)v10, (__int64*)a2,
                                           (__int64*)a2, a3);
      }
      return result;
    }
    v14 = v10 + 8 * ((unsigned __int64)v13 >> 1);
    if ((unsigned __int64)v13 >= 0x81) {
      v15 = *(float*)v14;
      if (*(float*)v14 < *(float*)v10 ||
          *(float*)v14 <= *(float*)v10 &&
              *(_DWORD*)(v14 + 4) >= *(_DWORD*)(v10 + 4)) {
        v16 = *(a2 - 2);
        if (v16 >= v15 &&
            (v16 > v15 || *((_DWORD*)a2 - 1) < *(_DWORD*)(v14 + 4))) {
          v17 = *(_QWORD*)v14;
          *(_QWORD*)v14 = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v17;
          if (*(float*)v14 >= *(float*)v10 &&
              (*(float*)v14 > *(float*)v10 ||
               *(_DWORD*)(v14 + 4) < *(_DWORD*)(v10 + 4))) {
            v18 = *(_QWORD*)v10;
            *(_QWORD*)v10 = *(_QWORD*)v14;
            *(_QWORD*)v14 = v18;
          }
        }
      }
      else {
        v23 = *(a2 - 2);
        if (v23 < v15 ||
            v23 <= v15 && *((_DWORD*)a2 - 1) >= *(_DWORD*)(v14 + 4)) {
          v24 = *(_QWORD*)v10;
          *(_QWORD*)v10 = *(_QWORD*)v14;
          *(_QWORD*)v14 = v24;
          v25 = *(a2 - 2);
          if (v25 >= *(float*)&v24 &&
              (v25 > *(float*)&v24 || *((_DWORD*)a2 - 1) < SHIDWORD(v24))) {
            *(_QWORD*)v14 = *((_QWORD*)a2 - 1);
            goto LABEL_48;
          }
        }
        else {
          v24 = *(_QWORD*)v10;
          *(_QWORD*)v10 = *((_QWORD*)a2 - 1);
        LABEL_48:
          *((_QWORD*)a2 - 1) = v24;
        }
      }
      v29 = *(float*)(v14 - 8);
      v30 = *(float*)(v10 + 8);
      if (v29 < v30 ||
          v29 <= v30 && *(_DWORD*)(v14 - 4) >= *(_DWORD*)(v10 + 12)) {
        v31 = *(a2 - 4);
        if (v31 >= v29 &&
            (v31 > v29 || *((_DWORD*)a2 - 3) < *(_DWORD*)(v14 - 4))) {
          v32 = *(_QWORD*)(v14 - 8);
          *(_QWORD*)(v14 - 8) = *((_QWORD*)a2 - 2);
          *((_QWORD*)a2 - 2) = v32;
          v33 = *(float*)(v14 - 8);
          v34 = *(float*)(v10 + 8);
          if (v33 >= v34 &&
              (v33 > v34 || *(_DWORD*)(v14 - 4) < *(_DWORD*)(v10 + 12))) {
            v35 = *(_QWORD*)(v10 + 8);
            *(_QWORD*)(v10 + 8) = *(_QWORD*)(v14 - 8);
            *(_QWORD*)(v14 - 8) = v35;
          }
        }
      }
      else {
        v36 = *(a2 - 4);
        if (v36 < v29 ||
            v36 <= v29 && *((_DWORD*)a2 - 3) >= *(_DWORD*)(v14 - 4)) {
          v37 = *(_QWORD*)(v10 + 8);
          *(_QWORD*)(v10 + 8) = *(_QWORD*)(v14 - 8);
          *(_QWORD*)(v14 - 8) = v37;
          v38 = *(a2 - 4);
          if (v38 >= *(float*)&v37 &&
              (v38 > *(float*)&v37 || *((_DWORD*)a2 - 3) < SHIDWORD(v37))) {
            *(_QWORD*)(v14 - 8) = *((_QWORD*)a2 - 2);
            goto LABEL_73;
          }
        }
        else {
          v37 = *(_QWORD*)(v10 + 8);
          *(_QWORD*)(v10 + 8) = *((_QWORD*)a2 - 2);
        LABEL_73:
          *((_QWORD*)a2 - 2) = v37;
        }
      }
      v39 = *(float*)(v14 + 8);
      v40 = *(float*)(v10 + 16);
      if (v39 < v40 ||
          v39 <= v40 && *(_DWORD*)(v14 + 12) >= *(_DWORD*)(v10 + 20)) {
        v41 = *(a2 - 6);
        if (v41 >= v39 &&
            (v41 > v39 || *((_DWORD*)a2 - 5) < *(_DWORD*)(v14 + 12))) {
          v42 = *(_QWORD*)(v14 + 8);
          *(_QWORD*)(v14 + 8) = *((_QWORD*)a2 - 3);
          *((_QWORD*)a2 - 3) = v42;
          v43 = *(float*)(v14 + 8);
          v44 = *(float*)(v10 + 16);
          if (v43 >= v44 &&
              (v43 > v44 || *(_DWORD*)(v14 + 12) < *(_DWORD*)(v10 + 20))) {
            v45 = *(_QWORD*)(v10 + 16);
            *(_QWORD*)(v10 + 16) = *(_QWORD*)(v14 + 8);
            *(_QWORD*)(v14 + 8) = v45;
          }
        }
      }
      else {
        v46 = *(a2 - 6);
        if (v46 < v39 ||
            v46 <= v39 && *((_DWORD*)a2 - 5) >= *(_DWORD*)(v14 + 12)) {
          v47 = *(_QWORD*)(v10 + 16);
          *(_QWORD*)(v10 + 16) = *(_QWORD*)(v14 + 8);
          *(_QWORD*)(v14 + 8) = v47;
          v48 = *(a2 - 6);
          if (v48 >= *(float*)&v47 &&
              (v48 > *(float*)&v47 || *((_DWORD*)a2 - 5) < SHIDWORD(v47))) {
            *(_QWORD*)(v14 + 8) = *((_QWORD*)a2 - 3);
            goto LABEL_92;
          }
        }
        else {
          v47 = *(_QWORD*)(v10 + 16);
          *(_QWORD*)(v10 + 16) = *((_QWORD*)a2 - 3);
        LABEL_92:
          *((_QWORD*)a2 - 3) = v47;
        }
      }
      v49 = *(float*)v14;
      v50 = *(float*)(v14 - 8);
      if (*(float*)v14 < v50 ||
          *(float*)v14 <= v50 && *(_DWORD*)(v14 + 4) >= *(_DWORD*)(v14 - 4)) {
        v51 = *(float*)(v14 + 8);
        if (v51 >= v49 &&
            (v51 > v49 || *(_DWORD*)(v14 + 12) < *(_DWORD*)(v14 + 4))) {
          v53 = *(_QWORD*)v14;
          v52 = *(_QWORD*)(v14 + 8);
          *(_QWORD*)v14 = v52;
          *(_QWORD*)(v14 + 8) = v53;
          if (v50 <= *(float*)&v52 &&
              (v50 < *(float*)&v52 || *(_DWORD*)(v14 - 4) > SHIDWORD(v52))) {
            v54 = *(_QWORD*)(v14 - 8);
            *(_QWORD*)(v14 - 8) = v52;
            *(_QWORD*)v14 = v54;
          }
        }
      }
      else {
        v55 = *(float*)(v14 + 8);
        if (v55 < v49 ||
            v55 <= v49 && *(_DWORD*)(v14 + 12) >= *(_DWORD*)(v14 + 4)) {
          v56 = *(_QWORD*)(v14 - 8);
          *(_QWORD*)(v14 - 8) = *(_QWORD*)v14;
          *(_QWORD*)v14 = v56;
          if (v55 >= *(float*)&v56 &&
              (v55 > *(float*)&v56 || *(_DWORD*)(v14 + 12) < SHIDWORD(v56))) {
            *(_QWORD*)v14 = *(_QWORD*)(v14 + 8);
            goto LABEL_111;
          }
        }
        else {
          v56 = *(_QWORD*)(v14 - 8);
          *(_QWORD*)(v14 - 8) = *(_QWORD*)(v14 + 8);
        LABEL_111:
          *(_QWORD*)(v14 + 8) = v56;
        }
      }
      v57 = *(_QWORD*)v10;
      *(_QWORD*)v10 = *(_QWORD*)v14;
      *(_QWORD*)v14 = v57;
      if ((a5 & 1) != 0) {
        goto LABEL_116;
      }
      goto LABEL_113;
    }
    v19 = *(float*)v10;
    if (*(float*)v10 >= *(float*)v14 &&
        (*(float*)v10 > *(float*)v14 ||
         *(_DWORD*)(v10 + 4) < *(_DWORD*)(v14 + 4))) {
      v26 = *(a2 - 2);
      if (v26 < v19 ||
          v26 <= v19 && *((_DWORD*)a2 - 1) >= *(_DWORD*)(v10 + 4)) {
        v27 = *(_QWORD*)v14;
        *(_QWORD*)v14 = *(_QWORD*)v10;
        *(_QWORD*)v10 = v27;
        v28 = *(a2 - 2);
        if (v28 >= *(float*)&v27 &&
            (v28 > *(float*)&v27 || *((_DWORD*)a2 - 1) < SHIDWORD(v27))) {
          *(_QWORD*)v10 = *((_QWORD*)a2 - 1);
          goto LABEL_67;
        }
      }
      else {
        v27 = *(_QWORD*)v14;
        *(_QWORD*)v14 = *((_QWORD*)a2 - 1);
      LABEL_67:
        *((_QWORD*)a2 - 1) = v27;
      }
    LABEL_68:
      if ((a5 & 1) != 0) {
        goto LABEL_116;
      }
      goto LABEL_113;
    }
    v20 = *(a2 - 2);
    if (v20 < v19 || v20 <= v19 && *((_DWORD*)a2 - 1) >= *(_DWORD*)(v10 + 4)) {
      goto LABEL_68;
    }
    v21 = *(_QWORD*)v10;
    *(_QWORD*)v10 = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v21;
    if (*(float*)v10 < *(float*)v14 ||
        *(float*)v10 <= *(float*)v14 &&
            *(_DWORD*)(v10 + 4) >= *(_DWORD*)(v14 + 4)) {
      goto LABEL_68;
    }
    v22 = *(_QWORD*)v14;
    *(_QWORD*)v14 = *(_QWORD*)v10;
    *(_QWORD*)v10 = v22;
    if ((a5 & 1) == 0) {
    LABEL_113:
      v58 = *(float*)(v10 - 8);
      if (v58 < *(float*)v10 ||
          v58 <= *(float*)v10 && *(_DWORD*)(v10 - 4) >= *(_DWORD*)(v10 + 4)) {
        result = (__int64)GameRoutine_5d76e0((float*)v10, (unsigned __int64)a2),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v10 = result;
        goto LABEL_121;
      }
    }
  LABEL_116:
    v59 = GameRoutine_5d7840(v10, (unsigned __int64)a2),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v61 & 1) == 0) {
      goto LABEL_119;
    }
    v62 = GameRoutine_5d79a0((_QWORD*)v10, (float*)v59, a3),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = (__int64)(v59 + 1);
    v63 = v62;
    result = GameRoutine_5d79a0(v59 + 1, a2, a3),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) != 0) {
      a4 = -v12;
      a2 = (float*)v59;
      if (v63) {
        return result;
      }
      goto LABEL_2;
    }
    v11 = v12 + 1;
    if (!v63) {
    LABEL_119:
      result = nn_vfx_5d6ac0(v9, (float*)v59, a3, -v12, a5 & 1, v60),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v10 = (__int64)(v59 + 1);
    LABEL_121:
      a5 = 0;
      a4 = -v12;
      goto LABEL_3;
    }
  }
  if (v13 != 3) {
    if (v13 == 4) {
      return (__int64)GameRoutine_5d7520((__int64*)v10, (__int64*)(v10 + 8),
                                         (__int64*)(v10 + 16),
                                         (__int64*)a2 - 1);
    }
    if (v13 == 5) {
      v65 = (float*)(v10 + 16);
      v66 = (_QWORD*)(v10 + 24);
      result =
          (__int64)GameRoutine_5d7520((__int64*)v9, (__int64*)(v9 + 8),
                                      (__int64*)(v9 + 16), (__int64*)(v9 + 24)),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v67 = *(a2 - 2);
      v68 = *(float*)(v9 + 24);
      if (v67 >= v68 &&
          (v67 > v68 || *((_DWORD*)a2 - 1) < *(_DWORD*)(v9 + 28))) {
        v69 = *v66;
        *v66 = *((_QWORD*)a2 - 1);
        *((_QWORD*)a2 - 1) = v69;
        if (*(float*)v66 >= *v65 &&
            (*(float*)v66 > *v65 ||
             *(_DWORD*)(v9 + 28) < *(_DWORD*)(v9 + 20))) {
          v70 = *v66;
          v71 = *(float*)(v9 + 8);
          v72 = *(_QWORD*)v65;
          v73 = COERCE_FLOAT(*v66);
          *(_QWORD*)v65 = *v66;
          *v66 = v72;
          if (v71 <= v73 &&
              (v71 < v73 || *(_DWORD*)(v9 + 12) > SHIDWORD(v70))) {
            v74 = *(float*)v9;
            v75 = *(_QWORD*)(v9 + 8);
            *(_QWORD*)(v9 + 8) = v70;
            *(_QWORD*)(v9 + 16) = v75;
            if (v74 <= v73 &&
                (v74 < v73 || *(_DWORD*)(v9 + 4) > SHIDWORD(v70))) {
              v76 = *(_QWORD*)v9;
              *(_QWORD*)v9 = v70;
              *(_QWORD*)(v9 + 8) = v76;
            }
          }
        }
      }
      return result;
    }
    goto LABEL_11;
  }
  v77 = *(float*)(v10 + 8);
  if (v77 >= *(float*)v10 &&
      (v77 > *(float*)v10 || *(_DWORD*)(v10 + 12) < *(_DWORD*)(v10 + 4))) {
    v95 = *(a2 - 2);
    if (v95 >= v77 &&
        (v95 > v77 || *((_DWORD*)a2 - 1) < *(_DWORD*)(v10 + 12))) {
      goto LABEL_197;
    }
    v96 = *(_QWORD*)v10;
    *(_QWORD*)v10 = *(_QWORD*)(v10 + 8);
    *(_QWORD*)(v10 + 8) = v96;
    v97 = *(a2 - 2);
    if (v97 < *(float*)&v96 ||
        v97 <= *(float*)&v96 && *((_DWORD*)a2 - 1) >= SHIDWORD(v96)) {
      return result;
    }
    *(_QWORD*)(v10 + 8) = *((_QWORD*)a2 - 1);
  LABEL_198:
    *((_QWORD*)a2 - 1) = v96;
    return result;
  }
  v78 = *(a2 - 2);
  if (v78 >= v77 && (v78 > v77 || *((_DWORD*)a2 - 1) < *(_DWORD*)(v10 + 12))) {
    v79 = *(_QWORD*)(v10 + 8);
    *(_QWORD*)(v10 + 8) = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v79;
    v80 = *(float*)(v10 + 8);
    if (v80 >= *(float*)v10 &&
        (v80 > *(float*)v10 || *(_DWORD*)(v10 + 12) < *(_DWORD*)(v10 + 4))) {
      v81 = *(_QWORD*)v10;
      *(_QWORD*)v10 = *(_QWORD*)(v10 + 8);
      *(_QWORD*)(v10 + 8) = v81;
    }
  }
  return result;
}

float* nn_vfx_5d8dd0(float* result, float* a2, float* a3, float* a4)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;

  v4 = *a2;
  v5 = *result;
  if (*a2 >= 0x0.0p+0f || v5 >= 0x0.0p+0f) {
    if (v4 >= v5) {
      goto LABEL_4;
    }
  LABEL_9:
    v7 = *a3;
    if (v4 >= 0x0.0p+0f || v7 >= 0x0.0p+0f) {
      if (v7 >= v4) {
        goto LABEL_12;
      }
    }
    else if (v7 <= v4) {
    LABEL_12:
      v8 = *(_QWORD*)result;
      *(_QWORD*)result = *(_QWORD*)a2;
      *(_QWORD*)a2 = v8;
      v6 = *a3;
      if (*a3 >= 0x0.0p+0f || *(float*)&v8 >= 0x0.0p+0f) {
        if (v6 >= *(float*)&v8) {
          goto LABEL_27;
        }
      }
      else if (v6 <= *(float*)&v8) {
        goto LABEL_27;
      }
      v6 = *(float*)&v8;
      *(_QWORD*)a2 = *(_QWORD*)a3;
      *(_QWORD*)a3 = v8;
      goto LABEL_27;
    }
    v12 = *(_QWORD*)result;
    *(_QWORD*)result = *(_QWORD*)a3;
    *(_QWORD*)a3 = v12;
    v6 = *(float*)&v12;
    goto LABEL_27;
  }
  if (v4 > v5) {
    goto LABEL_9;
  }
LABEL_4:
  v6 = *a3;
  if (v4 >= 0x0.0p+0f || v6 >= 0x0.0p+0f) {
    if (v6 >= v4) {
      goto LABEL_27;
    }
  }
  else if (v6 <= v4) {
    goto LABEL_27;
  }
  v9 = *(_QWORD*)a2;
  *(_QWORD*)a2 = *(_QWORD*)a3;
  *(_QWORD*)a3 = v9;
  v6 = *(float*)&v9;
  v10 = *a2;
  v11 = *result;
  if (*a2 < 0x0.0p+0f && v11 < 0x0.0p+0f) {
    if (v10 <= v11) {
      goto LABEL_27;
    }
  }
  else if (v10 >= v11) {
  LABEL_27:
    v14 = *a4;
    if (*a4 >= 0x0.0p+0f || v6 >= 0x0.0p+0f) {
      if (v14 >= v6) {
        return result;
      }
    }
    else if (v14 <= v6) {
      return result;
    }
    v15 = *(_QWORD*)a3;
    *(_QWORD*)a3 = *(_QWORD*)a4;
    *(_QWORD*)a4 = v15;
    v16 = *a3;
    v17 = *a2;
    if (*a3 >= 0x0.0p+0f || v17 >= 0x0.0p+0f) {
      if (v16 >= v17) {
        return result;
      }
    }
    else if (v16 <= v17) {
      return result;
    }
    v18 = *(_QWORD*)a2;
    *(_QWORD*)a2 = *(_QWORD*)a3;
    *(_QWORD*)a3 = v18;
    v19 = *a2;
    v20 = *result;
    if (*a2 >= 0x0.0p+0f || v20 >= 0x0.0p+0f) {
      if (v19 < v20) {
      LABEL_42:
        v21 = *(_QWORD*)result;
        *(_QWORD*)result = *(_QWORD*)a2;
        *(_QWORD*)a2 = v21;
      }
    }
    else if (v19 > v20) {
      goto LABEL_42;
    }
    return result;
  }
  v13 = *(_QWORD*)result;
  *(_QWORD*)result = *(_QWORD*)a2;
  *(_QWORD*)a2 = v13;
  v6 = *a3;
  goto LABEL_27;
}

__int64 nn_vfx_5d9c60(__int64 result, float* a2, __int64 a3, __int64 a4,
                      char a5)
{

#pragma clang fp contract(off)
  float* v8;
  float* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  float v50;
  __int64 v51;
  float v52;
  float v53;
  __int64 v54;
  float v55;
  float v56;
  float v57;
  float v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  float v64;
  float v65;
  __int64* v66;
  char v67;
  bool v68;
  bool v69;
  float v70;
  float v71;
  float v72;
  float* v73;
  _QWORD* v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float* v79;
  bool v81;
  __int64 v82;
  float* v83;
  float* v84;
  float* v85;
  float v86;
  float v87;
  int v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  float v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  float v97;
  __int64 v98;
  float v99;
  float v100;
  float* v101;
  float v102;
  float v103;
  int v104;
  float* v105;
  float v106;
  float* v107;
  float v108;
  float v109;
  __int64 v110;
  float v111;
  float v112;
  __int64 v113;
  float v114;
  __int64 v115;
  float v116;
  __int64 v117;
  float v118;
  __int64 v119;
  float v120;
  __int64 v121;
  __int64 v122;

  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (float*)result;
LABEL_2:
  v9 = v8;
LABEL_3:
  v10 = 1 - a4;
  while (1) {
    v11 = v10;
    v8 = v9;
    v12 = ((char*)a2 - (char*)v9) >> 3;
    if (v12 > 2) {
      break;
    }
    if ((unsigned __int64)v12 < 2) {
      return result;
    }
    if (v12 == 2) {
      v77 = *(a2 - 2);
      v78 = *v9;
      if (v77 >= 0x0.0p+0f || v78 >= 0x0.0p+0f) {
        if (v77 <= v78) {
          return result;
        }
      }
      else if (v77 >= v78) {
        return result;
      }
      goto LABEL_249;
    }
  LABEL_11:
    if (v12 <= 23) {
      v79 = v9 + 2;
      v81 = v9 == a2 || v79 == a2;
      if ((a5 & 1) != 0) {
        if (v81) {
          return result;
        }
        v82 = 0;
        v83 = v9;
        while (1) {
          v85 = v83;
          v86 = v83[2];
          v87 = *v83;
          v83 = v79;
          if (v86 >= 0x0.0p+0f || v87 >= 0x0.0p+0f) {
            if (v86 > v87) {
            LABEL_199:
              v88 = *((_DWORD*)v85 + 3);
              *((_QWORD*)v85 + 1) = *(_QWORD*)v85;
              v84 = v9;
              if (v85 == v9) {
                goto LABEL_192;
              }
              v89 = v82;
              v90 = v82;
              if (v86 < 0x0.0p+0f) {
                while (1) {
                  v91 = (_QWORD*)((char*)v9 + v90);
                  v92 = *(float*)((char*)v9 + v90 - 8);
                  if (v92 < 0x0.0p+0f) {
                    if (v92 <= v86) {
                      v84 = (float*)((char*)v9 + v90);
                      goto LABEL_192;
                    }
                  }
                  else if (v92 >= v86) {
                    v84 = v85;
                    goto LABEL_192;
                  }
                  v85 -= 2;
                  v90 -= 8;
                  *v91 = *(v91 - 1);
                  if (v90 == 0) {
                  LABEL_191:
                    v84 = v9;
                    goto LABEL_192;
                  }
                }
              }
              while (1) {
                v84 = (float*)((char*)v9 + v89);
                if (*(float*)((char*)v9 + v89 - 8) >= v86) {
                  break;
                }
                v89 -= 8;
                *(_QWORD*)v84 = *((_QWORD*)v84 - 1);
                if (v89 == 0) {
                  goto LABEL_191;
                }
              }
            LABEL_192:
              *v84 = v86;
              *((_DWORD*)v84 + 1) = v88;
            }
          }
          else if (v86 < v87) {
            goto LABEL_199;
          }
          v79 = v83 + 2;
          v82 += 8;
          if (v83 + 2 == a2) {
            return result;
          }
        }
      }
      if (v81) {
        return result;
      }
      while (1) {
        v101 = v8;
        v102 = v8[2];
        v103 = *v8;
        v8 = v79;
        if (v102 >= 0x0.0p+0f || v103 >= 0x0.0p+0f) {
          if (v102 > v103) {
          LABEL_236:
            v104 = *((_DWORD*)v101 + 3);
            v105 = v79;
            if (v102 < 0x0.0p+0f) {
              do {
                while (1) {
                  v107 = v101;
                  *((_QWORD*)v101 + 1) = *(_QWORD*)v101;
                  v108 = *(v101 - 2);
                  v101 -= 2;
                  v109 = v108;
                  if (v108 < 0x0.0p+0f) {
                    break;
                  }
                  if (v109 >= v102) {
                    goto LABEL_229;
                  }
                }
              } while (v109 > v102);
            }
            else {
              do {
                v106 = *(v105 - 4);
                v107 = v105 - 2;
                *(_QWORD*)v105 = *((_QWORD*)v105 - 1);
                v105 -= 2;
              } while (v106 < v102);
            }
          LABEL_229:
            *v107 = v102;
            *((_DWORD*)v107 + 1) = v104;
          }
        }
        else if (v102 < v103) {
          goto LABEL_236;
        }
        v79 = v8 + 2;
        if (v8 + 2 == a2) {
          return result;
        }
      }
    }
    if (v10 == 1) {
      if (v9 != a2) {
        v93 = (unsigned __int64)(v12 - 2) >> 1;
        v94 = v93 + 1;
        v95 = (__int64)&v8[2 * v93];
        do {
          GameRoutine_5db340((__int64)v8, a3, v12, v95),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          --v94;
          v95 -= 8;
        } while (v94 != 0);
        do {
          result = (__int64)nn_vfx_5db520(v8, (__int64)a2, a3, v12),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          a2 -= 2;
        } while ((unsigned __int64)v12-- > 2);
      }
      return result;
    }
    v13 = &v9[2 * ((unsigned __int64)v12 >> 1)];
    if ((unsigned __int64)v12 >= 0x81) {
      v14 = *v13;
      v15 = *v9;
      if (*v13 >= 0x0.0p+0f || v15 >= 0x0.0p+0f) {
        if (v14 <= v15) {
          goto LABEL_17;
        }
      }
      else if (v14 >= v15) {
      LABEL_17:
        v16 = *(a2 - 2);
        if (v14 >= 0x0.0p+0f || v16 >= 0x0.0p+0f) {
          if (v16 > v14) {
            goto LABEL_45;
          }
        }
        else {
          if (v16 >= v14) {
            goto LABEL_67;
          }
        LABEL_45:
          v26 = *(_QWORD*)v13;
          *(_QWORD*)v13 = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v26;
          v27 = *v13;
          v28 = *v9;
          if (*v13 >= 0x0.0p+0f || v28 >= 0x0.0p+0f) {
            if (v27 > v28) {
              goto LABEL_66;
            }
          }
          else {
            if (v27 >= v28) {
              goto LABEL_67;
            }
          LABEL_66:
            v33 = *(_QWORD*)v9;
            *(_QWORD*)v9 = *(_QWORD*)v13;
            *(_QWORD*)v13 = v33;
          }
        }
      LABEL_67:
        v34 = *(v13 - 2);
        v35 = v9[2];
        if (v34 >= 0x0.0p+0f || v35 >= 0x0.0p+0f) {
          if (v34 <= v35) {
            goto LABEL_70;
          }
        }
        else if (v34 >= v35) {
        LABEL_70:
          v36 = *(a2 - 4);
          if (v34 >= 0x0.0p+0f || v36 >= 0x0.0p+0f) {
            if (v36 > v34) {
              goto LABEL_83;
            }
          }
          else {
            if (v36 >= v34) {
              goto LABEL_98;
            }
          LABEL_83:
            v40 = *((_QWORD*)v13 - 1);
            *((_QWORD*)v13 - 1) = *((_QWORD*)a2 - 2);
            *((_QWORD*)a2 - 2) = v40;
            v41 = *(v13 - 2);
            v42 = v9[2];
            if (v41 >= 0x0.0p+0f || v42 >= 0x0.0p+0f) {
              if (v41 > v42) {
                goto LABEL_97;
              }
            }
            else {
              if (v41 >= v42) {
                goto LABEL_98;
              }
            LABEL_97:
              v44 = *((_QWORD*)v9 + 1);
              *((_QWORD*)v9 + 1) = *((_QWORD*)v13 - 1);
              *((_QWORD*)v13 - 1) = v44;
            }
          }
        LABEL_98:
          v45 = v13[2];
          v46 = v9[4];
          if (v45 >= 0x0.0p+0f || v46 >= 0x0.0p+0f) {
            if (v45 <= v46) {
              goto LABEL_101;
            }
          }
          else if (v45 >= v46) {
          LABEL_101:
            v47 = *(a2 - 6);
            if (v45 >= 0x0.0p+0f || v47 >= 0x0.0p+0f) {
              if (v47 > v45) {
                goto LABEL_114;
              }
            }
            else {
              if (v47 >= v45) {
                goto LABEL_125;
              }
            LABEL_114:
              v51 = *((_QWORD*)v13 + 1);
              *((_QWORD*)v13 + 1) = *((_QWORD*)a2 - 3);
              *((_QWORD*)a2 - 3) = v51;
              v52 = v13[2];
              v53 = v9[4];
              if (v52 >= 0x0.0p+0f || v53 >= 0x0.0p+0f) {
                if (v52 > v53) {
                  goto LABEL_124;
                }
              }
              else {
                if (v52 >= v53) {
                  goto LABEL_125;
                }
              LABEL_124:
                v54 = *((_QWORD*)v9 + 2);
                *((_QWORD*)v9 + 2) = *((_QWORD*)v13 + 1);
                *((_QWORD*)v13 + 1) = v54;
              }
            }
          LABEL_125:
            v55 = *v13;
            v56 = *(v13 - 2);
            if (*v13 >= 0x0.0p+0f || v56 >= 0x0.0p+0f) {
              if (v55 <= v56) {
                goto LABEL_128;
              }
            }
            else if (v55 >= v56) {
            LABEL_128:
              v57 = v13[2];
              if (v55 >= 0x0.0p+0f || v57 >= 0x0.0p+0f) {
                if (v57 <= v55) {
                  goto LABEL_152;
                }
              }
              else if (v57 >= v55) {
                goto LABEL_152;
              }
              v61 = *(_QWORD*)v13;
              v60 = *((_QWORD*)v13 + 1);
              *(_QWORD*)v13 = v60;
              *((_QWORD*)v13 + 1) = v61;
              if (*(float*)&v60 >= 0x0.0p+0f || v56 >= 0x0.0p+0f) {
                if (v56 >= *(float*)&v60) {
                  goto LABEL_152;
                }
              }
              else if (v56 <= *(float*)&v60) {
              LABEL_152:
                v63 = *(_QWORD*)v9;
                *(_QWORD*)v9 = *(_QWORD*)v13;
                *(_QWORD*)v13 = v63;
                if ((a5 & 1) != 0) {
                  goto LABEL_158;
                }
                goto LABEL_153;
              }
              v62 = *((_QWORD*)v13 - 1);
              *((_QWORD*)v13 - 1) = v60;
              *(_QWORD*)v13 = v62;
              goto LABEL_152;
            }
            v58 = v13[2];
            if (v55 >= 0x0.0p+0f || v58 >= 0x0.0p+0f) {
              if (v58 <= v55) {
                goto LABEL_136;
              }
            }
            else if (v58 >= v55) {
            LABEL_136:
              v59 = *((_QWORD*)v13 - 1);
              *((_QWORD*)v13 - 1) = *(_QWORD*)v13;
              *(_QWORD*)v13 = v59;
              if (v58 >= 0x0.0p+0f || *(float*)&v59 >= 0x0.0p+0f) {
                if (v58 <= *(float*)&v59) {
                  goto LABEL_152;
                }
              }
              else if (v58 >= *(float*)&v59) {
                goto LABEL_152;
              }
              *(_QWORD*)v13 = *((_QWORD*)v13 + 1);
            LABEL_149:
              *((_QWORD*)v13 + 1) = v59;
              goto LABEL_152;
            }
            v59 = *((_QWORD*)v13 - 1);
            *((_QWORD*)v13 - 1) = *((_QWORD*)v13 + 1);
            goto LABEL_149;
          }
          v48 = *(a2 - 6);
          if (v45 >= 0x0.0p+0f || v48 >= 0x0.0p+0f) {
            if (v48 <= v45) {
              goto LABEL_109;
            }
          }
          else if (v48 >= v45) {
          LABEL_109:
            v49 = *((_QWORD*)v9 + 2);
            *((_QWORD*)v9 + 2) = *((_QWORD*)v13 + 1);
            *((_QWORD*)v13 + 1) = v49;
            v50 = *(a2 - 6);
            if (v50 >= 0x0.0p+0f || *(float*)&v49 >= 0x0.0p+0f) {
              if (v50 <= *(float*)&v49) {
                goto LABEL_125;
              }
            }
            else if (v50 >= *(float*)&v49) {
              goto LABEL_125;
            }
            *((_QWORD*)v13 + 1) = *((_QWORD*)a2 - 3);
          LABEL_122:
            *((_QWORD*)a2 - 3) = v49;
            goto LABEL_125;
          }
          v49 = *((_QWORD*)v9 + 2);
          *((_QWORD*)v9 + 2) = *((_QWORD*)a2 - 3);
          goto LABEL_122;
        }
        v37 = *(a2 - 4);
        if (v34 >= 0x0.0p+0f || v37 >= 0x0.0p+0f) {
          if (v37 <= v34) {
            goto LABEL_78;
          }
        }
        else if (v37 >= v34) {
        LABEL_78:
          v38 = *((_QWORD*)v9 + 1);
          *((_QWORD*)v9 + 1) = *((_QWORD*)v13 - 1);
          *((_QWORD*)v13 - 1) = v38;
          v39 = *(a2 - 4);
          if (v39 >= 0x0.0p+0f || *(float*)&v38 >= 0x0.0p+0f) {
            if (v39 <= *(float*)&v38) {
              goto LABEL_98;
            }
          }
          else if (v39 >= *(float*)&v38) {
            goto LABEL_98;
          }
          *((_QWORD*)v13 - 1) = *((_QWORD*)a2 - 2);
        LABEL_95:
          *((_QWORD*)a2 - 2) = v38;
          goto LABEL_98;
        }
        v38 = *((_QWORD*)v9 + 1);
        *((_QWORD*)v9 + 1) = *((_QWORD*)a2 - 2);
        goto LABEL_95;
      }
      v20 = *(a2 - 2);
      if (v14 >= 0x0.0p+0f || v20 >= 0x0.0p+0f) {
        if (v20 <= v14) {
          goto LABEL_32;
        }
      }
      else if (v20 >= v14) {
      LABEL_32:
        v21 = *(_QWORD*)v9;
        *(_QWORD*)v9 = *(_QWORD*)v13;
        *(_QWORD*)v13 = v21;
        v22 = *(a2 - 2);
        if (v22 >= 0x0.0p+0f || *(float*)&v21 >= 0x0.0p+0f) {
          if (v22 <= *(float*)&v21) {
            goto LABEL_67;
          }
        }
        else if (v22 >= *(float*)&v21) {
          goto LABEL_67;
        }
        *(_QWORD*)v13 = *((_QWORD*)a2 - 1);
      LABEL_61:
        *((_QWORD*)a2 - 1) = v21;
        goto LABEL_67;
      }
      v21 = *(_QWORD*)v9;
      *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
      goto LABEL_61;
    }
    v17 = *v9;
    v18 = *v13;
    if (*v9 >= 0x0.0p+0f || v18 >= 0x0.0p+0f) {
      if (v17 > v18) {
      LABEL_37:
        v23 = *(a2 - 2);
        if (v17 >= 0x0.0p+0f || v23 >= 0x0.0p+0f) {
          if (v23 > v17) {
          LABEL_57:
            v32 = *(_QWORD*)v13;
            *(_QWORD*)v13 = *((_QWORD*)a2 - 1);
            *((_QWORD*)a2 - 1) = v32;
            if ((a5 & 1) != 0) {
              goto LABEL_158;
            }
            goto LABEL_153;
          }
        }
        else if (v23 < v17) {
          goto LABEL_57;
        }
        v24 = *(_QWORD*)v13;
        *(_QWORD*)v13 = *(_QWORD*)v9;
        *(_QWORD*)v9 = v24;
        v25 = *(a2 - 2);
        if (v25 >= 0x0.0p+0f || *(float*)&v24 >= 0x0.0p+0f) {
          if (v25 > *(float*)&v24) {
          LABEL_63:
            *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
            *((_QWORD*)a2 - 1) = v24;
            if ((a5 & 1) != 0) {
              goto LABEL_158;
            }
            goto LABEL_153;
          }
        }
        else if (v25 < *(float*)&v24) {
          goto LABEL_63;
        }
        goto LABEL_91;
      }
    }
    else if (v17 < v18) {
      goto LABEL_37;
    }
    v19 = *(a2 - 2);
    if (v17 >= 0x0.0p+0f || v19 >= 0x0.0p+0f) {
      if (v19 <= v17) {
        goto LABEL_91;
      }
    }
    else if (v19 >= v17) {
      goto LABEL_91;
    }
    v29 = *(_QWORD*)v9;
    *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v29;
    v30 = *v9;
    v31 = *v13;
    if (*v9 >= 0x0.0p+0f || v31 >= 0x0.0p+0f) {
      if (v30 <= v31) {
        goto LABEL_91;
      }
    LABEL_90:
      v43 = *(_QWORD*)v13;
      *(_QWORD*)v13 = *(_QWORD*)v9;
      *(_QWORD*)v9 = v43;
      goto LABEL_91;
    }
    if (v30 < v31) {
      goto LABEL_90;
    }
  LABEL_91:
    if ((a5 & 1) == 0) {
    LABEL_153:
      v64 = *(v9 - 2);
      v65 = *v9;
      if (v64 >= 0x0.0p+0f || v65 >= 0x0.0p+0f) {
        if (v64 > v65) {
          goto LABEL_158;
        }
      LABEL_162:
        result = (__int64)GameRoutine_5daa20(v9, a2),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v9 = (float*)result;
      LABEL_163:
        a5 = 0;
        a4 = -v11;
        goto LABEL_3;
      }
      if (v64 >= v65) {
        goto LABEL_162;
      }
    }
  LABEL_158:
    v66 = (__int64*)GameRoutine_5dac20(v9, a2),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v67 & 1) == 0) {
      goto LABEL_161;
    }
    v68 = nn_vfx_5dae20_alt1((__int64*)v9, v66, a3),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = (float*)(v66 + 1);
    v69 = v68;
    result = nn_vfx_5dae20_alt1(v66 + 1, (__int64*)a2, a3),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) != 0) {
      a4 = -v11;
      a2 = (float*)v66;
      if (v69) {
        return result;
      }
      goto LABEL_2;
    }
    v10 = v11 + 1;
    if (!v69) {
    LABEL_161:
      result = nn_vfx_5d9c60((__int64)v8, (float*)v66, a3, -v11, a5 & 1),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = (float*)(v66 + 1);
      goto LABEL_163;
    }
  }
  if (v12 == 3) {
    v70 = v9[2];
    v71 = *v9;
    if (v70 >= 0x0.0p+0f || v71 >= 0x0.0p+0f) {
      if (v70 <= v71) {
        goto LABEL_169;
      }
    }
    else if (v70 >= v71) {
    LABEL_169:
      v72 = *(a2 - 2);
      if (v70 >= 0x0.0p+0f || v72 >= 0x0.0p+0f) {
        if (v72 <= v70) {
          return result;
        }
      }
      else if (v72 >= v70) {
        return result;
      }
      v110 = *((_QWORD*)v9 + 1);
      *((_QWORD*)v9 + 1) = *((_QWORD*)a2 - 1);
      *((_QWORD*)a2 - 1) = v110;
      v111 = v9[2];
      v112 = *v9;
      if (v111 >= 0x0.0p+0f || v112 >= 0x0.0p+0f) {
        if (v111 <= v112) {
          return result;
        }
      }
      else if (v111 >= v112) {
        return result;
      }
      v119 = *(_QWORD*)v9;
      *(_QWORD*)v9 = *((_QWORD*)v9 + 1);
      *((_QWORD*)v9 + 1) = v119;
      return result;
    }
    v97 = *(a2 - 2);
    if (v70 >= 0x0.0p+0f || v97 >= 0x0.0p+0f) {
      if (v97 <= v70) {
        goto LABEL_252;
      }
    }
    else if (v97 >= v70) {
    LABEL_252:
      v113 = *(_QWORD*)v9;
      *(_QWORD*)v9 = *((_QWORD*)v9 + 1);
      *((_QWORD*)v9 + 1) = v113;
      v114 = *(a2 - 2);
      if (v114 >= 0x0.0p+0f || *(float*)&v113 >= 0x0.0p+0f) {
        if (v114 <= *(float*)&v113) {
          return result;
        }
      }
      else if (v114 >= *(float*)&v113) {
        return result;
      }
      *((_QWORD*)v9 + 1) = *((_QWORD*)a2 - 1);
    LABEL_250:
      *((_QWORD*)a2 - 1) = v113;
      return result;
    }
  LABEL_249:
    v113 = *(_QWORD*)v9;
    *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
    goto LABEL_250;
  }
  if (v12 == 4) {
    return (__int64)GameRoutine_5da830(v9, v9 + 2, v9 + 4, a2 - 2);
  }
  if (v12 != 5) {
    goto LABEL_11;
  }
  v73 = v9 + 4;
  v74 = v9 + 6;
  result = (__int64)GameRoutine_5da830(v8, v8 + 2, v8 + 4, v8 + 6),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v75 = *(a2 - 2);
  v76 = v8[6];
  if (v75 >= 0x0.0p+0f || v76 >= 0x0.0p+0f) {
    if (v75 > v76) {
      goto LABEL_221;
    }
  }
  else {
    if (v75 >= v76) {
      return result;
    }
  LABEL_221:
    v98 = *v74;
    *v74 = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v98;
    v99 = *(float*)v74;
    v100 = *v73;
    if (*(float*)v74 >= 0x0.0p+0f || v100 >= 0x0.0p+0f) {
      if (v99 <= v100) {
        return result;
      }
    LABEL_257:
      v115 = *v74;
      v116 = v8[2];
      v117 = *(_QWORD*)v73;
      v118 = COERCE_FLOAT(*v74);
      *(_QWORD*)v73 = *v74;
      *v74 = v117;
      if (v118 >= 0x0.0p+0f || v116 >= 0x0.0p+0f) {
        if (v116 >= v118) {
          return result;
        }
      }
      else if (v116 <= v118) {
        return result;
      }
      v120 = *v8;
      v121 = *((_QWORD*)v8 + 1);
      *((_QWORD*)v8 + 1) = v115;
      *((_QWORD*)v8 + 2) = v121;
      if (v118 >= 0x0.0p+0f || v120 >= 0x0.0p+0f) {
        if (v120 >= v118) {
          return result;
        }
      }
      else if (v120 <= v118) {
        return result;
      }
      v122 = *(_QWORD*)v8;
      *(_QWORD*)v8 = v115;
      *((_QWORD*)v8 + 1) = v122;
      return result;
    }
    if (v99 < v100) {
      goto LABEL_257;
    }
  }
  return result;
}

bool nn_vfx_5dae20(float* a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  float v4;
  float v5;
  float* v6;
  float* v7;
  __int64* v8;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64* v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  float v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  int v42;
  char* v43;
  float v44;
  float v45;
  int v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  float v50;
  float v52;
  __int64 v53;
  __int64 v54;

  v3 = ((char*)a2 - (char*)a1) >> 3;
  if (v3 <= 2) {
    if ((unsigned __int64)v3 < 2) {
      return true;
    }
    if (v3 == 2) {
      v4 = *((float*)a2 - 2);
      v5 = *a1;
      if (v4 >= 0x0.0p+0f || v5 >= 0x0.0p+0f) {
        if (v4 > v5) {
          goto LABEL_56;
        }
      }
      else if (v4 < v5) {
        goto LABEL_56;
      }
      return true;
    }
  LABEL_22:
    v16 = a1[2];
    v17 = *a1;
    v18 = (__int64*)(a1 + 4);
    if (v16 >= 0x0.0p+0f || v17 >= 0x0.0p+0f) {
      if (v16 <= v17) {
        goto LABEL_25;
      }
    }
    else if (v16 >= v17) {
    LABEL_25:
      v19 = *(float*)v18;
      if (v16 >= 0x0.0p+0f || v19 >= 0x0.0p+0f) {
        if (v19 <= v16) {
          goto LABEL_83;
        }
      }
      else if (v19 >= v16) {
        goto LABEL_83;
      }
      v32 = *((_QWORD*)a1 + 1);
      v31 = *((_QWORD*)a1 + 2);
      *((_QWORD*)a1 + 1) = v31;
      *((_QWORD*)a1 + 2) = v32;
      if (*(float*)&v31 < 0x0.0p+0f && v17 < 0x0.0p+0f) {
        if (v17 <= *(float*)&v31) {
          goto LABEL_83;
        }
      }
      else if (v17 >= *(float*)&v31) {
      LABEL_83:
        v40 = (__int64*)(a1 + 6);
        if (a1 + 6 == (float*)a2) {
          return true;
        }
        v41 = 0;
        v42 = 0;
        while (1) {
          v44 = *(float*)v40;
          v45 = *(float*)v18;
          if (*(float*)v40 >= 0x0.0p+0f || v45 >= 0x0.0p+0f) {
            if (v44 <= v45) {
              goto LABEL_88;
            }
          }
          else if (v44 >= v45) {
            goto LABEL_88;
          }
          v46 = *((_DWORD*)v40 + 1);
          v47 = v41;
          *v40 = *v18;
          v48 = v41;
          if (v44 < 0x0.0p+0f) {
            do {
              v49 = (char*)a1 + v48;
              v50 = *(float*)((char*)a1 + v48 + 8);
              if (v50 >= 0x0.0p+0f) {
                if (v50 >= v44) {
                  v43 = (char*)a1 + v48;
                  goto LABEL_86;
                }
              }
              else if (v50 <= v44) {
                goto LABEL_87;
              }
              --v18;
              v48 -= 8;
              *((_QWORD*)v49 + 2) = *((_QWORD*)v49 + 1);
            } while (v48 != -16);
          LABEL_97:
            v18 = (__int64*)a1;
          }
          else {
            while (1) {
              v43 = (char*)a1 + v47;
              if (*(float*)((char*)a1 + v47 + 8) >= v44) {
                break;
              }
              v47 -= 8;
              *((_QWORD*)v43 + 2) = *((_QWORD*)v43 + 1);
              if (v47 == -16) {
                goto LABEL_97;
              }
            }
          LABEL_86:
            v18 = (__int64*)(v43 + 16);
          }
        LABEL_87:
          ++v42;
          *(float*)v18 = v44;
          *((_DWORD*)v18 + 1) = v46;
          if (v42 == 8) {
            return v40 + 1 == a2;
          }
        LABEL_88:
          v18 = v40++;
          v41 += 8;
          if (v40 == a2) {
            return true;
          }
        }
      }
      v39 = *(_QWORD*)a1;
      *(_QWORD*)a1 = v31;
      *((_QWORD*)a1 + 1) = v39;
      goto LABEL_83;
    }
    v21 = *(float*)v18;
    if (v16 >= 0x0.0p+0f || v21 >= 0x0.0p+0f) {
      if (v21 <= v16) {
      LABEL_39:
        v22 = *(_QWORD*)a1;
        LODWORD(v23) = *(_QWORD*)a1;
        *(_QWORD*)a1 = *((_QWORD*)a1 + 1);
        *((_QWORD*)a1 + 1) = v22;
        if (v21 >= 0x0.0p+0f || v23 >= 0x0.0p+0f) {
          if (v21 <= v23) {
            goto LABEL_83;
          }
        }
        else if (v21 >= v23) {
          goto LABEL_83;
        }
        *((_QWORD*)a1 + 1) = *((_QWORD*)a1 + 2);
      LABEL_80:
        *((_QWORD*)a1 + 2) = v22;
        goto LABEL_83;
      }
    }
    else if (v21 >= v16) {
      goto LABEL_39;
    }
    v22 = *(_QWORD*)a1;
    *(_QWORD*)a1 = *((_QWORD*)a1 + 2);
    goto LABEL_80;
  }
  if (v3 == 3) {
    v13 = a1[2];
    v14 = *a1;
    if (v13 >= 0x0.0p+0f || v14 >= 0x0.0p+0f) {
      if (v13 <= v14) {
        goto LABEL_18;
      }
    }
    else if (v13 >= v14) {
    LABEL_18:
      v15 = *((float*)a2 - 2);
      if (v13 >= 0x0.0p+0f || v15 >= 0x0.0p+0f) {
        if (v15 <= v13) {
          return true;
        }
      }
      else if (v15 >= v13) {
        return true;
      }
      v27 = *((_QWORD*)a1 + 1);
      *((_QWORD*)a1 + 1) = *(a2 - 1);
      *(a2 - 1) = v27;
      v28 = a1[2];
      v29 = *a1;
      if (v28 >= 0x0.0p+0f || v29 >= 0x0.0p+0f) {
        if (v28 <= v29) {
          return true;
        }
      }
      else if (v28 >= v29) {
        return true;
      }
      v38 = *(_QWORD*)a1;
      *(_QWORD*)a1 = *((_QWORD*)a1 + 1);
      *((_QWORD*)a1 + 1) = v38;
      return true;
    }
    v20 = *((float*)a2 - 2);
    if (v13 >= 0x0.0p+0f || v20 >= 0x0.0p+0f) {
      if (v20 <= v13) {
        goto LABEL_65;
      }
    }
    else if (v20 >= v13) {
    LABEL_65:
      v30 = *(_QWORD*)a1;
      *(_QWORD*)a1 = *((_QWORD*)a1 + 1);
      *((_QWORD*)a1 + 1) = v30;
      v33 = *((float*)a2 - 2);
      if (v33 >= 0x0.0p+0f || *(float*)&v30 >= 0x0.0p+0f) {
        if (v33 <= *(float*)&v30) {
          return true;
        }
      }
      else if (v33 >= *(float*)&v30) {
        return true;
      }
      *((_QWORD*)a1 + 1) = *(a2 - 1);
      goto LABEL_57;
    }
  LABEL_56:
    v30 = *(_QWORD*)a1;
    *(_QWORD*)a1 = *(a2 - 1);
  LABEL_57:
    *(a2 - 1) = v30;
    return true;
  }
  if (v3 == 4) {
    GameRoutine_5da830(a1, a1 + 2, a1 + 4, (float*)a2 - 2);
    return true;
  }
  if (v3 != 5) {
    goto LABEL_22;
  }
  v6 = a1 + 2;
  v7 = a1 + 4;
  v8 = (__int64*)(a1 + 6);
  GameRoutine_5da830(a1, a1 + 2, a1 + 4, a1 + 6);
  v11 = *((float*)a2 - 2);
  v12 = a1[6];
  if (v11 >= 0x0.0p+0f || v12 >= 0x0.0p+0f) {
    if (v11 <= v12) {
      return true;
    }
  }
  else if (v11 >= v12) {
    return true;
  }
  v24 = *v8;
  *v8 = *(a2 - 1);
  *(a2 - 1) = v24;
  v25 = *(float*)v8;
  v26 = *v7;
  if (*(float*)v8 >= 0x0.0p+0f || v26 >= 0x0.0p+0f) {
    if (v25 <= v26) {
      return true;
    }
  }
  else if (v25 >= v26) {
    return true;
  }
  v34 = *v8;
  v35 = *v6;
  v36 = *(_QWORD*)v7;
  v37 = COERCE_FLOAT(*v8);
  *(_QWORD*)v7 = *v8;
  *v8 = v36;
  if (v37 >= 0x0.0p+0f || v35 >= 0x0.0p+0f) {
    if (v35 >= v37) {
      return true;
    }
  }
  else if (v35 <= v37) {
    return true;
  }
  v52 = *a1;
  v53 = *((_QWORD*)a1 + 1);
  *((_QWORD*)a1 + 1) = v34;
  *((_QWORD*)a1 + 2) = v53;
  if (v37 >= 0x0.0p+0f || v52 >= 0x0.0p+0f) {
    if (v52 >= v37) {
      return true;
    }
  }
  else if (v52 <= v37) {
    return true;
  }
  v54 = *(_QWORD*)a1;
  *(_QWORD*)a1 = v34;
  *((_QWORD*)a1 + 1) = v54;
  return true;
}

float* nn_vfx_5db520(float* result, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  float* v6;
  float* v7;
  float* v8;
  __int64 v9;
  float* v10;
  float v11;
  float v12;
  float v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  float v18;
  float* v19;
  float v20;
  int v21;
  float* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  float v25;

  if (a4 < 2) {
    return result;
  }
  v4 = *(_QWORD*)result;
  v5 = 0;
  v6 = result;
  do {
    v7 = &v6[2 * v5];
    v8 = v6;
    v6 = v7 + 2;
    v9 = 2 * v5 + 2;
    v5 = (2 * v5) | 1;
    if (v9 < a4) {
      v11 = v7[4];
      v10 = v7 + 4;
      v12 = v11;
      v13 = *(v10 - 2);
      if (v13 >= 0x0.0p+0f || v12 >= 0x0.0p+0f) {
        if (v13 > v12) {
        LABEL_3:
          v6 = v10;
          v5 = v9;
        }
      }
      else if (v13 < v12) {
        goto LABEL_3;
      }
    }
    *(_QWORD*)v8 = *(_QWORD*)v6;
  } while (v5 <= (__int64)((unsigned __int64)(a4 - 2) >> 1));
  v14 = (_QWORD*)(a2 - 8);
  if (v6 == (float*)(a2 - 8)) {
    *(_QWORD*)v6 = v4;
    return result;
  }
  *(_QWORD*)v6 = *v14;
  *v14 = v4;
  v15 = ((char*)v6 - (char*)result + 8) >> 3;
  v16 = v15 - 2;
  if (v15 >= 2) {
    v17 = v16 >> 1;
    v18 = *v6;
    v19 = &result[2 * (v16 >> 1)];
    v20 = *v19;
    if (*v19 >= 0x0.0p+0f || v18 >= 0x0.0p+0f) {
      if (v20 > v18) {
        goto LABEL_20;
      }
    }
    else {
      if (v20 >= v18) {
        return result;
      }
    LABEL_20:
      v21 = *((_DWORD*)v6 + 1);
      *(_QWORD*)v6 = *(_QWORD*)v19;
      if (v16 >= 2) {
        if (v18 < 0x0.0p+0f) {
          while (1) {
            v24 = v17 - 1;
            v17 = (v17 - 1) >> 1;
            v22 = &result[2 * v17];
            v25 = *v22;
            if (*v22 >= 0x0.0p+0f) {
              if (v25 <= v18) {
                goto LABEL_31;
              }
            }
            else if (v25 >= v18) {
              goto LABEL_31;
            }
            *(_QWORD*)v19 = *(_QWORD*)v22;
            v19 = &result[2 * v17];
            if (v24 <= 1) {
              goto LABEL_22;
            }
          }
        }
        while (1) {
          v23 = v17 - 1;
          v17 = (v17 - 1) >> 1;
          v22 = &result[2 * v17];
          if (*v22 <= v18) {
            break;
          }
          *(_QWORD*)v19 = *(_QWORD*)v22;
          v19 = &result[2 * v17];
          if (v23 < 2) {
            goto LABEL_22;
          }
        }
      LABEL_31:
        *v19 = v18;
        *((_DWORD*)v19 + 1) = v21;
      }
      else {
        v22 = &result[2 * (v16 >> 1)];
      LABEL_22:
        *v22 = v18;
        *((_DWORD*)v22 + 1) = v21;
      }
    }
  }
  return result;
}

__int64 nn_vfx_5db740(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 result;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;

  v1 = *a1;
  if (*(_BYTE*)(*(_QWORD*)(*a1 + 160) + 1874LL) != 0) {
    return 0;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(v1 + 568) + 824LL);
  result = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)(v1 + 2088) + 16LL))(v1 + 2088, 44, 128);
  if (result != 0) {
    *(_DWORD*)(result + 40) = 0;
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)result = 0;
    *(_QWORD*)(*a1 + 1048) = result;
    *(_DWORD*)result = *(_DWORD*)(v4 + 24);
    *(_DWORD*)(result + 4) = *(_DWORD*)(v4 + 28);
    v5 = *(_DWORD*)(*a1 + 172);
    *(_DWORD*)(*a1 + 172) = 1103515245 * v5 + 12345;
    *(float*)(result + 16) = vcvts_n_f32_u32(v5, 0x20u);
    v6 = *(_DWORD*)(*a1 + 172);
    *(_DWORD*)(*a1 + 172) = 1103515245 * v6 + 12345;
    *(float*)(result + 20) = vcvts_n_f32_u32(v6, 0x20u);
    v7 = *(_DWORD*)(*a1 + 172);
    *(_DWORD*)(*a1 + 172) = 1103515245 * v7 + 12345;
    *(float*)(result + 24) = vcvts_n_f32_u32(v7, 0x20u);
    v8 = *(_DWORD*)(*a1 + 172);
    *(_DWORD*)(*a1 + 172) = 1103515245 * v8 + 12345;
    *(float*)(result + 28) = vcvts_n_f32_u32(v8, 0x20u);
    nn_5b3d10(*a1, 4, 96);
    v9 = *a1;
    v10 = 160 * (*(_DWORD*)(*a1 + 560) +
                 *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 568) + 824LL) + 16LL) *
                     *(_DWORD*)(*a1 + 560)) +
          160;
    if (160 * (*(_DWORD*)(*a1 + 560) +
               *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 568) + 824LL) + 16LL) *
                   *(_DWORD*)(*a1 + 560)) ==
        -160) {
      return 1;
    }
    else {
      v11 = *(_QWORD*)(v9 + 1048);
      v12 = GameRoutine_5b3d60(
          v9, *(_DWORD*)(*(_QWORD*)GameData_21364a0[0] + 32LL), v10);
      result = 1;
      if ((v12 & 1) != 0) {
        *(_BYTE*)(v11 + 32) = 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
