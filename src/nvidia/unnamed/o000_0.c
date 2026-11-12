#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern _UNKNOWN* CudaDriverData_1423028;

extern _UNKNOWN* CudaDriverData_1423030;

extern int CudaDriverData_14324b8;

extern int CudaDriverData_14324bc;

extern int CudaDriverData_14324c0;

extern __int128 CudaDriverData_1432530;

extern __int64 CudaDriverData_1432540;

extern __int64 (*CudaDriverData_1432d28)(_QWORD, _QWORD, __int64, int*);

__int64 CudaDriverRoutine_10f750(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);

__int64 CudaDriverRoutine_10fdf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);

__int64 CudaDriverRoutine_11d560(_QWORD, _QWORD);

__int64 CudaDriverRoutine_12e340(_QWORD);

__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);

__int64 CudaDriverRoutine_197480(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD);

__int64 CudaDriverRoutine_1a2910(void);

__int64 CudaDriverRoutine_205fa0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_206060(_QWORD, _QWORD);

__int64 CudaDriverRoutine_208ba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_25cf10(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_574e0(_QWORD, _QWORD);

__int64 CudaDriverRoutine_577d0(_QWORD);

__int64 CudaDriverRoutine_82bc0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_82e60(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_90880(_QWORD*, __int64, int);

__int64 CudaDriverRoutine_97090(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_98190(_QWORD, _QWORD);

__int64 CudaDriverRoutine_98340(_QWORD);

__int64 CudaDriverRoutine_985b0(_QWORD);

__int64 CudaDriverRoutine_bc770(_QWORD);

__int64 CudaDriverRoutine_e5960(_QWORD);

__int64 CudaDriverRoutine_e7ac0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_e7b50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_e7e40(_QWORD);

__int64 CudaDriverHr_3a0(__int64 a1, __int64 a2, __int64 a3)
{
  __int128* v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  unsigned int v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  int v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 result;

  v3 = *(__int128**)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v5 = v3[6];
  v6 = v3[7];
  v7 = v3[5];
  v8 = *(_QWORD*)(a1 + 64);
  v9 = (unsigned int)(*(_DWORD*)(a3 + 172) * *(_DWORD*)(a3 + 168) *
                          *(_DWORD*)(a3 + 176) +
                      31) >>
       5;
  v10 = *(_DWORD*)(v8 + 3756);
  LODWORD(v8) = *(_DWORD*)(v8 + 3768);
  *(_OWORD*)(v4 + 576) = v3[4];
  *(_OWORD*)(v4 + 592) = v7;
  *(_OWORD*)(v4 + 608) = v5;
  *(_OWORD*)(v4 + 624) = v6;
  v11 = v3[10];
  v12 = v3[11];
  v13 = v3[9];
  v14 = v10 / (unsigned int)v8;
  *(_OWORD*)(v4 + 640) = v3[8];
  *(_OWORD*)(v4 + 656) = v13;
  *(_OWORD*)(v4 + 672) = v11;
  *(_OWORD*)(v4 + 688) = v12;
  v15 = v3[14];
  v16 = v3[15];
  v17 = v3[13];
  *(_OWORD*)(v4 + 704) = v3[12];
  *(_OWORD*)(v4 + 720) = v17;
  *(_OWORD*)(v4 + 736) = v15;
  *(_OWORD*)(v4 + 752) = v16;
  if (v9 <= v14) {
    LOWORD(v9) = v14;
  }
  v18 = *(_DWORD*)(v4 + 612);
  v19 = *v3;
  v20 = v3[1];
  v21 = v3[2];
  v22 = v3[3];
  *(_DWORD*)(v4 + 612) = v18 & 0xFF7FFFFF;
  v23 = *(_DWORD*)(v4 + 628);
  *(_OWORD*)(v4 + 512) = v19;
  *(_OWORD*)(v4 + 528) = v20;
  *(_OWORD*)(v4 + 544) = v21;
  *(_OWORD*)(v4 + 560) = v22;
  *(_DWORD*)(v4 + 560) = 0;
  *(_DWORD*)(v4 + 628) = v23 & 0xFF7FFFFF;
  *(_DWORD*)(v4 + 516) = *(_DWORD*)(v4 + 516) & 0x80000000 | 0xFFFFF;
  *(_DWORD*)(v4 + 520) &= 0x80000000;
  *(_DWORD*)(v4 + 532) = *(_DWORD*)(v4 + 532) & 0xFE000000 | 0x100000;
  *(int8x8_t*)(v4 + 564) =
      vand_s8(*(int8x8_t*)(v4 + 564), (int8x8_t)0xFFFF0000FFFF0000LL);
  *(_DWORD*)(v4 + 528) |= 0x100u;
  *(_DWORD*)(v4 + 704) = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 408LL);
  *(_DWORD*)(v4 + 708) = *(_DWORD*)(v4 + 708) & 0xFFFE0000 |
                         *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 412LL) & 0x1FFFF;
  if (*(_BYTE*)(a3 + 202) != 0) {
    v24 = 34603008;
  }
  else {
    v24 = 0x100000;
  }
  *(_DWORD*)(v4 + 532) = v24;
  *(_DWORD*)(v4 + 612) = v18 & 0xFF77FFFF;
  *(_DWORD*)(v4 + 628) = v23 & 0xFF77FFFF;
  v25 = (((_WORD)v9 << 6) + 16320) & 0x3FC0;
  *(_DWORD*)(v4 + 724) &= ~0x80000u;
  *(_DWORD*)(v4 + 556) = v25 | *(_DWORD*)(v4 + 556) & 0xFFF44000 | 0x803F;
  *((_DWORD*)v3 + 11) = v25 | *((_DWORD*)v3 + 11) & 0xFFF74000 | 0x8803F;
  v26 = *(_QWORD*)(a3 + 40);
  *(_DWORD*)(v4 + 1072) = 0;
  *(_QWORD*)(v4 + 1088) = v26;
  *(_QWORD*)(v4 + 1040) = 0x200000000LL;
  *(_QWORD*)(v4 + 1168) = 0x100000001LL;
  result = CudaDriverRoutine_e7e40(a3);
  *(_DWORD*)(v4 + 1176) = result;
  *(_DWORD*)(v4 + 1180) = 1;
  return result;
}

__int64 CudaDriverHr_6500(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, _DWORD* a7, char a8)
{
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 i;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 (**v51)(void);
  int v52;
  __int64 j;
  __int64 k;
  int v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  int v59;
  __int64 v60;
  unsigned int v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v75;
  int v76;
  _QWORD v77[3];
  int v78;
  int v79;

  v8 = *(_QWORD*)(a6 + 8);
  v9 = *a1;
  result = CudaDriverRoutine_98340(a3);
  if ((*(_WORD*)(a4 + 977) & 0x1000) != 0) {
    goto LABEL_68;
  }
  v17 = *(_QWORD*)(a6 + 136);
  *(_QWORD*)(v8 + 304) = a5;
  v18 = result;
  *(_QWORD*)(v8 + 592) = *(_QWORD*)(result + 16552);
  *(_DWORD*)(v8 + 528) = *(unsigned __int8*)(a6 + 204);
  *(_QWORD*)(v8 + 312) = *(_QWORD*)(v17 + 8);
  v19 = *(_QWORD*)(a6 + 368);
  v20 = *(_QWORD*)(v19 + 8);
  if (v20 != 0) {
    v21 = *(_QWORD*)v19 >> 12;
    v22 = vcvts_n_u32_f32(*(float*)(v19 + 16), 4u);
    v23 = ((unsigned int)(v20 + 4095) >> 7) & 0xFFFE0 |
          (*(_QWORD*)v19 >> 44) & 0x1F;
    if (v22 >= 0xF) {
      v22 = 15;
    }
    v25 = v19 + 20;
    v24 = *(_DWORD*)(v19 + 20);
    v26 = v23 | (v22 << 20);
    v27 = (*(_DWORD*)(v25 + 4) & 1) << 24;
    if (v24 != 0) {
      v28 = (v24 & 3) << 25;
    }
    else {
      v28 = 100663296;
    }
    *(_QWORD*)(v8 + 536) =
        (unsigned int)v21 |
        ((unsigned __int64)(v26 | v27 | (unsigned int)v28) << 32);
    if ((unsigned __int8)CudaDriverRoutine_985b0(
            *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
    LABEL_9:
      if (*(_BYTE*)(a6 + 448) == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
  }
  else {
    *(_QWORD*)(v8 + 536) = 0;
    if ((unsigned __int8)CudaDriverRoutine_985b0(
            *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
      goto LABEL_9;
    }
  }
  *(_WORD*)(v8 + 392) = 12090;
  *(_WORD*)(v8 + 394) = 100 * *(_WORD*)(*(_QWORD*)(a3 + 64) + 3152LL) +
                        10 * *(_DWORD*)(*(_QWORD*)(a3 + 64) + 3156LL);
  if (*(_BYTE*)(a6 + 204) != 0) {
    *(_DWORD*)(v8 + 396) = *(_DWORD*)(a6 + 420);
    *(_DWORD*)(v8 + 400) = *(_QWORD*)(a6 + 416);
  }
  v51 = *(__int64 (***)(void))(a4 + 1056);
  if (v51 != nullptr) {
    v52 = (*v51)();
  }
  else {
    v52 = 0;
  }
  *(_DWORD*)(v8 + 404) = v52;
  *(_QWORD*)(v8 + 408) = *(_QWORD*)(a6 + 440);
  *(_DWORD*)(v8 + 416) = *(_DWORD*)(a3 + 56);
  *(_QWORD*)(v8 + 424) = *(_QWORD*)(a6 + 464);
  if (*(_BYTE*)(a6 + 448) != 0) {
  LABEL_10:
    *(_QWORD*)(v8 + 560) = *(_QWORD*)(a6 + 440);
  }
LABEL_11:
  v29 = a6 + 40;
  if (*(_QWORD*)(a4 + 832) == 0) {
    v30 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD, __int64))(
        *(_QWORD*)(a3 + 64) + 19248LL))(
        v9, v18,
        *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)),
        v8 + 256, *(unsigned int*)(*(_QWORD*)(a3 + 64) + 3800LL), 2);
    if (*(_DWORD*)(a6 + 276) == 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  (*(void (**)(_QWORD*, __int64, _QWORD, __int64, _QWORD, __int64))(
      *(_QWORD*)(a3 + 64) + 19248LL))(
      v77, v18,
      *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)),
      v8 + 256, *(unsigned int*)(*(_QWORD*)(a3 + 64) + 3800LL), 2);
  v75 = 12;
  v76 = 48;
  v30 = CudaDriverRoutine_197480(v9, a2, 1, &v76, v77, 388, a4 + 832, &v75);
  if (*(_DWORD*)(a6 + 276) != 0) {
  LABEL_13:
    v30 = CudaDriverRoutine_e7ac0(
        v30, v18, a6 + 272, a4,
        *(_QWORD*)(v29 +
                   8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)) +
            *(unsigned int*)(a4 + 236));
  }
LABEL_14:
  if ((a8 & 1) == 0) {
    v31 = **(_QWORD**)(v18 + 16104);
    v72 = *(unsigned int*)(a4 + 608);
    v69 =
        *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL));
    v70 = *(_DWORD*)(a4 + 612);
    if ((unsigned __int8)CudaDriverRoutine_985b0(
            *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0 &&
        *(_DWORD*)(a4 + 616) != 0) {
      v32 = 0;
      for (i = 0; i < *(unsigned int*)(a4 + 616); ++i) {
        v40 = *(_QWORD*)(a4 + 624);
        if (*(_DWORD*)(v40 + v32) == 5) {
          v41 = v40 + v32;
          v42 = *(_DWORD*)(v40 + v32 + 8);
          if (v42 == 3) {
            CudaDriverRoutine_208ba0(
                *(_QWORD*)(v18 + 2112), 0,
                *(unsigned int*)(*(_QWORD*)(v41 + 24) + 512LL), 0, v77);
            v34 = *(_QWORD*)(v18 + 64);
            v35 = v77[0];
            v36 = 32;
            v37 = v30;
            v38 = v18;
            v39 = *(_QWORD*)(v41 + 24) + 140LL;
          }
          else {
            if (v42 != 1) {
              goto LABEL_20;
            }
            v43 = v40 + v32;
            CudaDriverRoutine_208ba0(
                *(_QWORD*)(v18 + 2112),
                *(unsigned int*)(*(_QWORD*)(v40 + v32 + 24) + 868LL), 0, v77,
                0);
            v34 = *(_QWORD*)(v18 + 64);
            v35 = v77[0];
            v37 = v30;
            v38 = v18;
            v36 = 36;
            v39 = *(_QWORD*)(v43 + 24) + 832LL;
          }
          v30 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                __int64))(v34 + 19248))(v37, v38, v35, v39, v36,
                                                        2);
        }
      LABEL_20:
        v32 += 104;
      }
    }
    if (*(_QWORD*)(a4 + 576) != 0 || *(_QWORD*)(a4 + 592) != 0 ||
        *(_QWORD*)(a4 + 584) != 0) {
      v44 = (unsigned int)(v70 - v72);
      v71 = v44;
      CudaDriverRoutine_25cf10(v31 + v72, 0, v44);
      v45 = *(_QWORD*)(a4 + 576);
      if (v45 != 0) {
        v46 = 0;
        do {
          v47 = *(_DWORD*)(*(_QWORD*)(v45 + 8) + 868LL);
          if ((unsigned __int8)CudaDriverRoutine_985b0(
                  *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
            CudaDriverRoutine_208ba0(*(_QWORD*)(v18 + 2112), v47, 0, v77, 0);
            v30 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                                  __int64))(*(_QWORD*)(v18 + 64) + 19248LL))(
                v30, v18, v77[0], v45 + 16, 36, 2);
          }
          if (*(_DWORD*)(v45 + 64) != 0) {
            v48 = 0;
            v49 = 0;
            do {
              ++v49;
              v50 = *(unsigned int*)(*(_QWORD*)(v45 + 56) + v48);
              v48 += 8;
              *(_DWORD*)(v31 + v50) =
                  *(_DWORD*)(v31 + v50) & 0xFFF00000 | v47 & 0xFFFFF;
            } while (v49 < *(unsigned int*)(v45 + 64));
            v46 = 1;
          }
          v45 = *(_QWORD*)(v45 + 80);
        } while (v45 != 0);
      }
      else {
        v46 = 0;
      }
      for (j = *(_QWORD*)(a4 + 584); j != 0; j = *(_QWORD*)(j + 80)) {
        if (*(_DWORD*)(j + 64) != 0) {
          v57 = 0;
          v58 = 0;
          v59 = *(_DWORD*)(*(_QWORD*)(j + 8) + 192LL) << 20;
          do {
            ++v58;
            v60 = *(unsigned int*)(*(_QWORD*)(j + 56) + v57);
            v57 += 8;
            *(_DWORD*)(v31 + v60) = *(_DWORD*)(v31 + v60) & 0xFFFFF | v59;
          } while (v58 < *(unsigned int*)(j + 64));
          v46 = 1;
        }
      }
      for (k = *(_QWORD*)(a4 + 592); k != 0; k = *(_QWORD*)(k + 80)) {
        v61 = *(_DWORD*)(*(_QWORD*)(k + 8) + 512LL);
        if ((unsigned __int8)CudaDriverRoutine_985b0(
                *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
          CudaDriverRoutine_208ba0(*(_QWORD*)(v18 + 2112), 0, v61, 0, v77);
          v30 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                                __int64))(*(_QWORD*)(v18 + 64) + 19248LL))(
              v30, v18, v77[0], k + 16, 32, 2);
        }
        if (*(_DWORD*)(k + 64) != 0) {
          v62 = 0;
          v63 = 0;
          do {
            ++v63;
            v64 = *(unsigned int*)(*(_QWORD*)(k + 56) + v62);
            v62 += 8;
            *(_DWORD*)(v31 + v64) =
                *(_DWORD*)(v31 + v64) & 0xFFF00000 | v61 & 0xFFFFF;
          } while (v63 < *(unsigned int*)(k + 64));
          v46 = 1;
        }
      }
      if (v46 == 1) {
        v30 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                              __int64))(*(_QWORD*)(v18 + 64) + 19248LL))(
            v30, v18, v69 + v72, v72 + v31, v71, 2);
      }
    }
  }
  v55 = *(unsigned __int8*)(a6 + 204);
  v77[1] = 0;
  v77[2] = 0;
  if (v55 != 0 && *(_BYTE*)(a6 + 205) != 0) {
    v56 = *(_QWORD*)(a4 + 104);
  }
  else {
    v56 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a3 + 64) + 19448LL))(
        *(_QWORD*)(a4 + 96));
  }
  v77[0] = v56;
  v65 = CudaDriverRoutine_bc770(a4);
  v66 = *(_DWORD*)(a6 + 288) + a7[4] + a7[6] + a7[7];
  v78 = v65;
  v79 = v66;
  CudaDriverRoutine_97090(a4, 0,
                          *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL), 0);
  v67 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64, __int64))(
      *(_QWORD*)(a3 + 64) + 19248LL))(
      v30, v18,
      *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)) +
          6240LL,
      v77, 32, 2);
  v68 = *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11724LL);
  result = CudaDriverRoutine_e7b50(v67, v18, a6, a4, *(_QWORD*)(v29 + 8 * v68),
                                   *(unsigned int*)(a6 + 104 + 4 * v68));
  v9 = result;
  if (*(_BYTE*)(a6 + 204) != 0 && *(_DWORD*)(a6 + 424) >= 2u) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        result, v18,
        *(_QWORD*)(v29 +
                   8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11736LL)) +
            **(unsigned int**)(v18 + 1224),
        v18 + **(unsigned int**)(v18 + 1224) -
            *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11740LL) + 13800,
        24, 2);
    v9 = result;
  }
LABEL_68:
  *a1 = v9;
  return result;
}

__int64 CudaDriverHr_98b0(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(a1 + 16104) != 0) {
    v2 = *(_QWORD*)(a2 + 40);
    if (v2 != 0) {
      CudaDriverRoutine_12e340(v2);
      *(_QWORD*)(a2 + 40) = 0;
    }
    if (*(_QWORD*)(a2 + 208) != 0) {
      CudaDriverRoutine_1a2910();
      *(_QWORD*)(a2 + 208) = 0;
    }
  }
  return 0;
}

__int64 CudaDriverHr_9900(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(a1 + 16104) != 0) {
    v2 = *(_QWORD*)(a2 + 240);
    if (v2 != 0) {
      CudaDriverRoutine_12e340(v2);
      *(_QWORD*)(a2 + 240) = 0;
    }
    if (*(_QWORD*)(a2 + 272) != 0) {
      CudaDriverRoutine_1a2910();
      *(_QWORD*)(a2 + 272) = 0;
    }
  }
  return 0;
}

__int64 CudaDriverHr_9950(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(a1 + 16104) != 0) {
    v2 = *(_QWORD*)(a2 + 40);
    if (v2 != 0) {
      CudaDriverRoutine_12e340(v2);
      *(_QWORD*)(a2 + 40) = 0;
    }
    if (*(_QWORD*)(a2 + 208) != 0) {
      CudaDriverRoutine_1a2910();
      *(_QWORD*)(a2 + 208) = 0;
    }
  }
  return 0;
}

__int64 CudaDriverHr_99a0(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(a1 + 16104) != 0) {
    v2 = *(_QWORD*)(a2 + 240);
    if (v2 != 0) {
      CudaDriverRoutine_12e340(v2);
      *(_QWORD*)(a2 + 240) = 0;
    }
    if (*(_QWORD*)(a2 + 272) != 0) {
      CudaDriverRoutine_1a2910();
      *(_QWORD*)(a2 + 272) = 0;
    }
  }
  return 0;
}

__int64 CudaDriverHr_11b00(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 result;
  unsigned __int64 v15;
  unsigned int v16;
  unsigned int v17;
  int32x4_t* v18;
  float* v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  unsigned __int64 v23;
  int32x4_t v24;
  int32x4_t v25;
  char v26;
  _DWORD v27[768];
  float32x4x3_t v28;
  float32x4x3_t v29;

  v2 = *(_QWORD*)(a1 + 64);
  v4 = *(unsigned int*)(v2 + 3732);
  if ((_DWORD)v4 == 0) {
    v9 = 0;
    goto LABEL_14;
  }
  v5 = *(_QWORD*)(a1 + 16104);
  v6 = v5 + 1048;
  if ((unsigned int)v4 < 0xC ||
      ((unsigned int)(v4 - 1) <= 0x55555554 ? (v7 = (v4 - 1) >> 32 == 0)
                                            : (v7 = false),
       !v7 || v6 < (unsigned __int64)&v27[3 * (unsigned int)v4] &&
                  (unsigned __int64)v27 < v5 + 4 * v4 + 1048)) {
    v8 = 0;
    v9 = 0;
    do {
    LABEL_11:
      v10 = *(_DWORD*)(v6 + 4 * v8);
      v11 = v9 + 1;
      v12 = v9 + 2;
      ++v8;
      v10 += 5261064;
      v27[v9] = v10;
      v9 += 3;
      v27[v11] = v10 + 16;
      v27[v12] = v10 + 8;
    } while (v8 < v4);
    goto LABEL_14;
  }
  v8 = (unsigned int)v4 & 0xFFFFFFF8;
  v18 = (int32x4_t*)(v5 + 1064);
  v9 = 3 * (v4 & 0xFFFFFFF8);
  v19 = (float*)v27;
  v20 = vdupq_n_s32(0x504710u);
  v21 = vdupq_n_s32(0x504708u);
  v22 = vdupq_n_s32(0x504718u);
  v23 = v8;
  do {
    v24 = v18[-1];
    v25 = *v18;
    v23 -= 8LL;
    v18 += 2;
    v28.val[2] = vaddq_s32(v24, v20);
    v28.val[1] = vaddq_s32(v24, v22);
    v28.val[0] = vaddq_s32(v24, v21);
    v29.val[2] = vaddq_s32(v25, v20);
    v29.val[1] = vaddq_s32(v25, v22);
    v29.val[0] = vaddq_s32(v25, v21);
    vst3q_f32(v19, v28);
    vst3q_f32(v19 + 12, v29);
    v19 += 24;
  } while (v23 != 0);
  if (v8 != v4) {
    goto LABEL_11;
  }
LABEL_14:
  v13 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_10fdf0(v13, 2, v9, v27, &v26, 0);
  if ((_DWORD)result == 0 && *(_DWORD*)(v2 + 3732) != 0) {
    v15 = 0;
    v16 = 0;
    do {
      ++v15;
      *a2 = *((_QWORD*)&v26 + v16);
      a2[2] = *((_QWORD*)&v26 + v16 + 1);
      v17 = v16 + 2;
      v16 += 3;
      a2[6] = *((_QWORD*)&v26 + v17);
      a2 += 40;
    } while (v15 < *(unsigned int*)(v2 + 3732));
  }
  return result;
}

__int64 CudaDriverHr_11ea0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _BYTE v25[1024];

  CudaDriverRoutine_25cf10(v25, 0, 1024);
  CudaDriverRoutine_25cf10(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_10f750(v20, 2, (unsigned int)v4, v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_12380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  unsigned int v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 result;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v5 = *(_OWORD*)(v3 + 96);
  v6 = *(_OWORD*)(v3 + 112);
  v7 = *(_OWORD*)(v3 + 80);
  v8 = *(_QWORD*)(a1 + 64);
  v9 = (unsigned int)(*(_DWORD*)(a3 + 172) * *(_DWORD*)(a3 + 168) *
                          *(_DWORD*)(a3 + 176) +
                      31) >>
       5;
  v10 = *(_DWORD*)(v8 + 3756);
  LODWORD(v8) = *(_DWORD*)(v8 + 3768);
  *(_OWORD*)(v4 + 576) = *(_OWORD*)(v3 + 64);
  *(_OWORD*)(v4 + 592) = v7;
  *(_OWORD*)(v4 + 608) = v5;
  *(_OWORD*)(v4 + 624) = v6;
  v11 = *(_OWORD*)(v3 + 160);
  v12 = *(_OWORD*)(v3 + 176);
  v13 = *(_OWORD*)(v3 + 144);
  v14 = v10 / (unsigned int)v8;
  *(_OWORD*)(v4 + 640) = *(_OWORD*)(v3 + 128);
  *(_OWORD*)(v4 + 656) = v13;
  *(_OWORD*)(v4 + 672) = v11;
  *(_OWORD*)(v4 + 688) = v12;
  v15 = *(_OWORD*)(v3 + 224);
  v16 = *(_OWORD*)(v3 + 240);
  v17 = *(_OWORD*)(v3 + 208);
  *(_OWORD*)(v4 + 704) = *(_OWORD*)(v3 + 192);
  *(_OWORD*)(v4 + 720) = v17;
  *(_OWORD*)(v4 + 736) = v15;
  *(_OWORD*)(v4 + 752) = v16;
  v18 = *(_OWORD*)(v3 + 16);
  if (v9 <= v14) {
    LOWORD(v9) = v14;
  }
  v19 = *(_OWORD*)(v3 + 32);
  v20 = *(_OWORD*)(v3 + 48);
  v21 = (((_WORD)v9 << 6) + 16320) & 0x3FC0;
  *(_OWORD*)(v4 + 512) = *(_OWORD*)v3;
  *(_OWORD*)(v4 + 528) = v18;
  *(_OWORD*)(v4 + 544) = v19;
  *(_OWORD*)(v4 + 560) = v20;
  *(_DWORD*)(v4 + 560) = 0;
  *(_DWORD*)(v4 + 516) = *(_DWORD*)(v4 + 516) & 0x80000000 | 0xFFFFF;
  *(_DWORD*)(v4 + 520) &= 0x80000000;
  *(int8x8_t*)(v4 + 564) =
      vand_s8(*(int8x8_t*)(v4 + 564), (int8x8_t)0xFFFF0000FFFF0000LL);
  *(int8x8_t*)(v4 + 528) =
      vorr_s8(vand_s8(*(int8x8_t*)(v4 + 528), (int8x8_t)0xFE000000FFFFF2FFLL),
              (int8x8_t)0x10000000000100LL);
  *(_DWORD*)(v4 + 704) = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 408LL);
  *(_DWORD*)(v4 + 708) = *(_DWORD*)(v4 + 708) & 0xFFFE0000 |
                         *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 412LL) & 0x1FFFF;
  if (*(_BYTE*)(a3 + 202) != 0) {
    v22 = 34603008;
  }
  else {
    v22 = 0x100000;
  }
  *(_DWORD*)(v4 + 532) = v22;
  *(_DWORD*)(v4 + 556) = v21 | *(_DWORD*)(v4 + 556) & 0xFFF40000 | 0x803F;
  *(_DWORD*)(v3 + 44) = v21 | *(_DWORD*)(v3 + 44) & 0xFFF74000 | 0x8803F;
  v23 = *(_QWORD*)(a3 + 40);
  *(_DWORD*)(v4 + 1072) = 0;
  *(_QWORD*)(v4 + 1088) = v23;
  *(_QWORD*)(v4 + 1040) = 0x200000000LL;
  *(_QWORD*)(v4 + 1168) = 0x100000001LL;
  result = CudaDriverRoutine_e7e40(a3);
  *(_DWORD*)(v4 + 1176) = result;
  *(_DWORD*)(v4 + 1180) = 1;
  return result;
}

__int64 CudaDriverHr_12520(__int64 a1, __int64 a2, __int64 a3)
{
  __int128* v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  unsigned int v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  int v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 result;

  v3 = *(__int128**)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v5 = v3[6];
  v6 = v3[7];
  v7 = v3[5];
  v8 = *(_QWORD*)(a1 + 64);
  v9 = (unsigned int)(*(_DWORD*)(a3 + 172) * *(_DWORD*)(a3 + 168) *
                          *(_DWORD*)(a3 + 176) +
                      31) >>
       5;
  v10 = *(_DWORD*)(v8 + 3756);
  LODWORD(v8) = *(_DWORD*)(v8 + 3768);
  *(_OWORD*)(v4 + 576) = v3[4];
  *(_OWORD*)(v4 + 592) = v7;
  *(_OWORD*)(v4 + 608) = v5;
  *(_OWORD*)(v4 + 624) = v6;
  v11 = v3[10];
  v12 = v3[11];
  v13 = v3[9];
  v14 = v10 / (unsigned int)v8;
  *(_OWORD*)(v4 + 640) = v3[8];
  *(_OWORD*)(v4 + 656) = v13;
  *(_OWORD*)(v4 + 672) = v11;
  *(_OWORD*)(v4 + 688) = v12;
  v15 = v3[14];
  v16 = v3[15];
  v17 = v3[13];
  *(_OWORD*)(v4 + 704) = v3[12];
  *(_OWORD*)(v4 + 720) = v17;
  *(_OWORD*)(v4 + 736) = v15;
  *(_OWORD*)(v4 + 752) = v16;
  if (v9 <= v14) {
    LOWORD(v9) = v14;
  }
  v18 = *(_DWORD*)(v4 + 612);
  v19 = *v3;
  v20 = v3[1];
  v21 = v3[2];
  v22 = v3[3];
  *(_DWORD*)(v4 + 612) = v18 & 0xFF7FFFFF;
  v23 = *(_DWORD*)(v4 + 628);
  *(_OWORD*)(v4 + 512) = v19;
  *(_OWORD*)(v4 + 528) = v20;
  *(_OWORD*)(v4 + 544) = v21;
  *(_OWORD*)(v4 + 560) = v22;
  *(_DWORD*)(v4 + 560) = 0;
  *(_DWORD*)(v4 + 628) = v23 & 0xFF7FFFFF;
  *(_DWORD*)(v4 + 516) = *(_DWORD*)(v4 + 516) & 0x80000000 | 0xFFFFF;
  *(_DWORD*)(v4 + 520) &= 0x80000000;
  *(_DWORD*)(v4 + 532) = *(_DWORD*)(v4 + 532) & 0xFE000000 | 0x100000;
  *(int8x8_t*)(v4 + 564) =
      vand_s8(*(int8x8_t*)(v4 + 564), (int8x8_t)0xFFFF0000FFFF0000LL);
  *(_DWORD*)(v4 + 528) |= 0x100u;
  *(_DWORD*)(v4 + 704) = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 408LL);
  *(_DWORD*)(v4 + 708) = *(_DWORD*)(v4 + 708) & 0xFFFE0000 |
                         *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 412LL) & 0x1FFFF;
  if (*(_BYTE*)(a3 + 202) != 0) {
    v24 = 34603008;
  }
  else {
    v24 = 0x100000;
  }
  *(_DWORD*)(v4 + 532) = v24;
  *(_DWORD*)(v4 + 612) = v18 & 0xFF77FFFF;
  *(_DWORD*)(v4 + 628) = v23 & 0xFF77FFFF;
  v25 = (((_WORD)v9 << 6) + 16320) & 0x3FC0;
  *(_DWORD*)(v4 + 724) &= ~0x80000u;
  *(_DWORD*)(v4 + 556) = v25 | *(_DWORD*)(v4 + 556) & 0xFFF44000 | 0x803F;
  *((_DWORD*)v3 + 11) = v25 | *((_DWORD*)v3 + 11) & 0xFFF74000 | 0x8803F;
  v26 = *(_QWORD*)(a3 + 40);
  *(_DWORD*)(v4 + 1072) = 0;
  *(_QWORD*)(v4 + 1088) = v26;
  *(_QWORD*)(v4 + 1040) = 0x200000000LL;
  *(_QWORD*)(v4 + 1168) = 0x100000001LL;
  result = CudaDriverRoutine_e7e40(a3);
  *(_DWORD*)(v4 + 1176) = result;
  *(_DWORD*)(v4 + 1180) = 1;
  return result;
}

__int64 CudaDriverHr_1a2a0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, _DWORD* a7, char a8)
{
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 i;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 (**v51)(void);
  int v52;
  __int64 j;
  __int64 k;
  int v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  int v59;
  __int64 v60;
  unsigned int v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v75;
  int v76;
  _QWORD v77[3];
  int v78;
  int v79;

  v8 = *(_QWORD*)(a6 + 8);
  v9 = *a1;
  result = CudaDriverRoutine_98340(a3);
  if ((*(_WORD*)(a4 + 977) & 0x1000) != 0) {
    goto LABEL_68;
  }
  v17 = *(_QWORD*)(a6 + 136);
  *(_QWORD*)(v8 + 304) = a5;
  v18 = result;
  *(_QWORD*)(v8 + 592) = *(_QWORD*)(result + 16552);
  *(_DWORD*)(v8 + 528) = *(unsigned __int8*)(a6 + 204);
  *(_QWORD*)(v8 + 312) = *(_QWORD*)(v17 + 8);
  v19 = *(_QWORD*)(a6 + 368);
  v20 = *(_QWORD*)(v19 + 8);
  if (v20 != 0) {
    v21 = *(_QWORD*)v19 >> 12;
    v22 = vcvts_n_u32_f32(*(float*)(v19 + 16), 4u);
    v23 = ((unsigned int)(v20 + 4095) >> 7) & 0xFFFE0 |
          (*(_QWORD*)v19 >> 44) & 0x1F;
    if (v22 >= 0xF) {
      v22 = 15;
    }
    v25 = v19 + 20;
    v24 = *(_DWORD*)(v19 + 20);
    v26 = v23 | (v22 << 20);
    v27 = (*(_DWORD*)(v25 + 4) & 1) << 24;
    if (v24 != 0) {
      v28 = (v24 & 3) << 25;
    }
    else {
      v28 = 100663296;
    }
    *(_QWORD*)(v8 + 536) =
        (unsigned int)v21 |
        ((unsigned __int64)(v26 | v27 | (unsigned int)v28) << 32);
    if ((unsigned __int8)CudaDriverRoutine_985b0(
            *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
    LABEL_9:
      if (*(_BYTE*)(a6 + 448) == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
  }
  else {
    *(_QWORD*)(v8 + 536) = 0;
    if ((unsigned __int8)CudaDriverRoutine_985b0(
            *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
      goto LABEL_9;
    }
  }
  *(_WORD*)(v8 + 392) = 12090;
  *(_WORD*)(v8 + 394) = 100 * *(_WORD*)(*(_QWORD*)(a3 + 64) + 3152LL) +
                        10 * *(_DWORD*)(*(_QWORD*)(a3 + 64) + 3156LL);
  if (*(_BYTE*)(a6 + 204) != 0) {
    *(_DWORD*)(v8 + 396) = *(_DWORD*)(a6 + 420);
    *(_DWORD*)(v8 + 400) = *(_QWORD*)(a6 + 416);
  }
  v51 = *(__int64 (***)(void))(a4 + 1056);
  if (v51 != nullptr) {
    v52 = (*v51)();
  }
  else {
    v52 = 0;
  }
  *(_DWORD*)(v8 + 404) = v52;
  *(_QWORD*)(v8 + 408) = *(_QWORD*)(a6 + 440);
  *(_DWORD*)(v8 + 416) = *(_DWORD*)(a3 + 56);
  *(_QWORD*)(v8 + 424) = *(_QWORD*)(a6 + 464);
  if (*(_BYTE*)(a6 + 448) != 0) {
  LABEL_10:
    *(_QWORD*)(v8 + 560) = *(_QWORD*)(a6 + 440);
  }
LABEL_11:
  v29 = a6 + 40;
  if (*(_QWORD*)(a4 + 832) == 0) {
    v30 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD, __int64))(
        *(_QWORD*)(a3 + 64) + 19248LL))(
        v9, v18,
        *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)),
        v8 + 256, *(unsigned int*)(*(_QWORD*)(a3 + 64) + 3800LL), 2);
    if (*(_DWORD*)(a6 + 276) == 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  (*(void (**)(_QWORD*, __int64, _QWORD, __int64, _QWORD, __int64))(
      *(_QWORD*)(a3 + 64) + 19248LL))(
      v77, v18,
      *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)),
      v8 + 256, *(unsigned int*)(*(_QWORD*)(a3 + 64) + 3800LL), 2);
  v75 = 12;
  v76 = 48;
  v30 = CudaDriverRoutine_197480(v9, a2, 1, &v76, v77, 388, a4 + 832, &v75);
  if (*(_DWORD*)(a6 + 276) != 0) {
  LABEL_13:
    v30 = CudaDriverRoutine_e7ac0(
        v30, v18, a6 + 272, a4,
        *(_QWORD*)(v29 +
                   8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)) +
            *(unsigned int*)(a4 + 236));
  }
LABEL_14:
  if ((a8 & 1) == 0) {
    v31 = **(_QWORD**)(v18 + 16104);
    v72 = *(unsigned int*)(a4 + 608);
    v69 =
        *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL));
    v70 = *(_DWORD*)(a4 + 612);
    if ((unsigned __int8)CudaDriverRoutine_985b0(
            *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0 &&
        *(_DWORD*)(a4 + 616) != 0) {
      v32 = 0;
      for (i = 0; i < *(unsigned int*)(a4 + 616); ++i) {
        v40 = *(_QWORD*)(a4 + 624);
        if (*(_DWORD*)(v40 + v32) == 5) {
          v41 = v40 + v32;
          v42 = *(_DWORD*)(v40 + v32 + 8);
          if (v42 == 3) {
            CudaDriverRoutine_208ba0(
                *(_QWORD*)(v18 + 2112), 0,
                *(unsigned int*)(*(_QWORD*)(v41 + 24) + 512LL), 0, v77);
            v34 = *(_QWORD*)(v18 + 64);
            v35 = v77[0];
            v36 = 32;
            v37 = v30;
            v38 = v18;
            v39 = *(_QWORD*)(v41 + 24) + 140LL;
          }
          else {
            if (v42 != 1) {
              goto LABEL_20;
            }
            v43 = v40 + v32;
            CudaDriverRoutine_208ba0(
                *(_QWORD*)(v18 + 2112),
                *(unsigned int*)(*(_QWORD*)(v40 + v32 + 24) + 868LL), 0, v77,
                0);
            v34 = *(_QWORD*)(v18 + 64);
            v35 = v77[0];
            v37 = v30;
            v38 = v18;
            v36 = 36;
            v39 = *(_QWORD*)(v43 + 24) + 832LL;
          }
          v30 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                __int64))(v34 + 19248))(v37, v38, v35, v39, v36,
                                                        2);
        }
      LABEL_20:
        v32 += 104;
      }
    }
    if (*(_QWORD*)(a4 + 576) != 0 || *(_QWORD*)(a4 + 592) != 0 ||
        *(_QWORD*)(a4 + 584) != 0) {
      v44 = (unsigned int)(v70 - v72);
      v71 = v44;
      CudaDriverRoutine_25cf10(v31 + v72, 0, v44);
      v45 = *(_QWORD*)(a4 + 576);
      if (v45 != 0) {
        v46 = 0;
        do {
          v47 = *(_DWORD*)(*(_QWORD*)(v45 + 8) + 868LL);
          if ((unsigned __int8)CudaDriverRoutine_985b0(
                  *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
            CudaDriverRoutine_208ba0(*(_QWORD*)(v18 + 2112), v47, 0, v77, 0);
            v30 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                                  __int64))(*(_QWORD*)(v18 + 64) + 19248LL))(
                v30, v18, v77[0], v45 + 16, 36, 2);
          }
          if (*(_DWORD*)(v45 + 64) != 0) {
            v48 = 0;
            v49 = 0;
            do {
              ++v49;
              v50 = *(unsigned int*)(*(_QWORD*)(v45 + 56) + v48);
              v48 += 8;
              *(_DWORD*)(v31 + v50) =
                  *(_DWORD*)(v31 + v50) & 0xFFF00000 | v47 & 0xFFFFF;
            } while (v49 < *(unsigned int*)(v45 + 64));
            v46 = 1;
          }
          v45 = *(_QWORD*)(v45 + 80);
        } while (v45 != 0);
      }
      else {
        v46 = 0;
      }
      for (j = *(_QWORD*)(a4 + 584); j != 0; j = *(_QWORD*)(j + 80)) {
        if (*(_DWORD*)(j + 64) != 0) {
          v57 = 0;
          v58 = 0;
          v59 = *(_DWORD*)(*(_QWORD*)(j + 8) + 192LL) << 20;
          do {
            ++v58;
            v60 = *(unsigned int*)(*(_QWORD*)(j + 56) + v57);
            v57 += 8;
            *(_DWORD*)(v31 + v60) = *(_DWORD*)(v31 + v60) & 0xFFFFF | v59;
          } while (v58 < *(unsigned int*)(j + 64));
          v46 = 1;
        }
      }
      for (k = *(_QWORD*)(a4 + 592); k != 0; k = *(_QWORD*)(k + 80)) {
        v61 = *(_DWORD*)(*(_QWORD*)(k + 8) + 512LL);
        if ((unsigned __int8)CudaDriverRoutine_985b0(
                *(unsigned int*)(*(_QWORD*)(a4 + 32) + 32LL)) != 0) {
          CudaDriverRoutine_208ba0(*(_QWORD*)(v18 + 2112), 0, v61, 0, v77);
          v30 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                                __int64))(*(_QWORD*)(v18 + 64) + 19248LL))(
              v30, v18, v77[0], k + 16, 32, 2);
        }
        if (*(_DWORD*)(k + 64) != 0) {
          v62 = 0;
          v63 = 0;
          do {
            ++v63;
            v64 = *(unsigned int*)(*(_QWORD*)(k + 56) + v62);
            v62 += 8;
            *(_DWORD*)(v31 + v64) =
                *(_DWORD*)(v31 + v64) & 0xFFF00000 | v61 & 0xFFFFF;
          } while (v63 < *(unsigned int*)(k + 64));
          v46 = 1;
        }
      }
      if (v46 == 1) {
        v30 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                              __int64))(*(_QWORD*)(v18 + 64) + 19248LL))(
            v30, v18, v69 + v72, v72 + v31, v71, 2);
      }
    }
  }
  v55 = *(unsigned __int8*)(a6 + 204);
  v77[1] = 0;
  v77[2] = 0;
  if (v55 != 0 && *(_BYTE*)(a6 + 205) != 0) {
    v56 = *(_QWORD*)(a4 + 104);
  }
  else {
    v56 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a3 + 64) + 19448LL))(
        *(_QWORD*)(a4 + 96));
  }
  v77[0] = v56;
  v65 = CudaDriverRoutine_bc770(a4);
  v66 = *(_DWORD*)(a6 + 288) + a7[4] + a7[6] + a7[7];
  v78 = v65;
  v79 = v66;
  CudaDriverRoutine_97090(a4, 0,
                          *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL), 0);
  v67 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64, __int64))(
      *(_QWORD*)(a3 + 64) + 19248LL))(
      v30, v18,
      *(_QWORD*)(v29 + 8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11708LL)) +
          6240LL,
      v77, 32, 2);
  v68 = *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11724LL);
  result = CudaDriverRoutine_e7b50(v67, v18, a6, a4, *(_QWORD*)(v29 + 8 * v68),
                                   *(unsigned int*)(a6 + 104 + 4 * v68));
  v9 = result;
  if (*(_BYTE*)(a6 + 204) != 0 && *(_DWORD*)(a6 + 424) >= 2u) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        result, v18,
        *(_QWORD*)(v29 +
                   8LL * *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11736LL)) +
            **(unsigned int**)(v18 + 1224),
        v18 + **(unsigned int**)(v18 + 1224) -
            *(unsigned int*)(*(_QWORD*)(a3 + 64) + 11740LL) + 13800,
        24, 2);
    v9 = result;
  }
LABEL_68:
  *a1 = v9;
  return result;
}

__int64 CudaDriverHr_211a0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _BYTE v25[1024];

  CudaDriverRoutine_25cf10(v25, 0, 1024);
  CudaDriverRoutine_25cf10(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_10f750(v20, 2, (unsigned int)v4, v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_4d910(unsigned __int64* a1, unsigned __int64 a2,
                           unsigned __int64 a3, _QWORD* a4)
{
  __int64 result;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;

  result = 0;
  if (a1 != nullptr && a2 <= a3) {
    v6 = *a1;
    if (a3 > *a1 - 1) {
      return 0;
    }
    v9 = a1[1];
    v7 = a1 + 1;
    v8 = (_QWORD*)v9;
    v10 = a2 >> 6;
    v11 = a3 >> 6;
    if (v6 < 0x41) {
      v8 = v7;
    }
    if (v10 <= v11) {
      v12 = a2 >> 6;
      while (1) {
        v13 = v12 == v10 ? -1LL << a2 : -1LL;
        v14 = v12 == v11 ? 0xFFFFFFFFFFFFFFFFLL >> ~(_BYTE)a3 : -1LL;
        v15 = v14 & ~v8[v12] & v13;
        if (v15 != 0) {
          break;
        }
      LABEL_35:
        result = 0;
        if (v12++ == v11) {
          return result;
        }
      }
      v16 = 0;
      while (1) {
        v17 = v15 >> v16;
        if (((v15 >> v16) & 1) != 0) {
          break;
        }
        if ((v17 & 2) != 0) {
          *a4 = v16 + 1 + (v12 << 6);
          return 1;
        }
        if ((v17 & 4) != 0) {
          *a4 = v16 + 2 + (v12 << 6);
          return 1;
        }
        if ((v17 & 8) != 0) {
          *a4 = v16 + 3 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x10) != 0) {
          *a4 = v16 + 4 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x20) != 0) {
          *a4 = v16 + 5 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x40) != 0) {
          *a4 = v16 + 6 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x80) != 0) {
          *a4 = v16 + 7 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x100) != 0) {
          *a4 = v16 + 8 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x200) != 0) {
          *a4 = v16 + 9 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x400) != 0) {
          *a4 = v16 + 10 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x800) != 0) {
          *a4 = v16 + 11 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x1000) != 0) {
          *a4 = v16 + 12 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x2000) != 0) {
          *a4 = v16 + 13 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x4000) != 0) {
          *a4 = v16 + 14 + (v12 << 6);
          return 1;
        }
        if ((v17 & 0x8000) != 0) {
          v16 += 15;
          break;
        }
        v16 += 16;
        if (v16 == 64) {
          goto LABEL_35;
        }
      }
      *a4 = v16 + (v12 << 6);
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_57120(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64* v4;
  bool v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  void (*v14)(_QWORD, _QWORD, _QWORD*);
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  unsigned int v23;
  _QWORD v24[3];
  _QWORD* v25;
  int v26;
  int v27;

  v3 = *(_QWORD*)(*(_QWORD*)a1 + 16448LL);
  v4 = (__int64*)a2[28];
  v24[1] = *a2;
  v24[0] = 1;
  v5 = v4 == nullptr;
  v6 = *(_DWORD*)(a1 + 32) - 1;
  if (v4 == nullptr) {
    v4 = a2;
  }
  v7 = *(_QWORD**)(a1 + 24);
  v26 = *(_DWORD*)(v3 + 168) * *(_DWORD*)(v3 + 172);
  v27 = v26;
  v8 = *(unsigned int*)(a1 + 40);
  v9 = *v4;
  v10 = (unsigned int)(v8 * v6);
  if (v5) {
    v11 = 0;
  }
  else {
    v11 = v9;
  }
  v24[2] = v11;
  v12 = (_QWORD*)((char*)v7 + v10);
  if (*(_QWORD*)((char*)v7 + v10) != v9) {
    if (v6 == 0) {
      return 1;
    }
    v12 = v7;
    while (*v12 != v9) {
      v12 = (_QWORD*)((char*)v12 + v8);
      if (--v6 == 0) {
        return 1;
      }
    }
  }
  v25 = v12 + 69;
  v13 = *(_QWORD*)(v3 + 16);
  v14 = *(void (**)(_QWORD, _QWORD, _QWORD*))(v13 + 152);
  if (v14 != nullptr) {
    v14(*(_QWORD*)(v3 + 8), *(_QWORD*)(a1 + 704), v24);
    if (*(_BYTE*)(v3 + 160) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  (*(void (**)(_QWORD, _QWORD))(v13 + 8))(*(_QWORD*)(v3 + 8),
                                          *(_QWORD*)(a1 + 704));
  if (*(_BYTE*)(v3 + 160) != 0) {
  LABEL_9:
    v15 = CudaDriverRoutine_577d0(*(_QWORD*)(a1 + 704));
    CudaDriverRoutine_574e0(v15, v12 + 1);
  }
LABEL_10:
  v16 = *(_DWORD*)(a1 + 32);
  v17 = *(unsigned int*)(a1 + 40);
  v18 = *(_QWORD*)(a1 + 24);
  v19 = v16 - 1;
  v20 = v18 + (unsigned int)(v17 * (v16 - 1));
  if ((_QWORD*)(v20 + 552) != v25) {
    if (v16 != 1) {
      if ((unsigned int)(v16 - 2) >= 3) {
        v23 = v19 & 0xFFFFFFFC;
        while ((_QWORD*)(v18 + 552) != v25) {
          if ((_QWORD*)(v18 + v17 + 552) == v25) {
            v18 += v17;
            goto LABEL_34;
          }
          if ((_QWORD*)(v18 + 2 * v17 + 552) == v25) {
            v18 += 2 * v17;
            goto LABEL_34;
          }
          if ((_QWORD*)(v18 + 3 * v17 + 552) == v25) {
            v18 += 3 * v17;
            goto LABEL_34;
          }
          v23 -= 4;
          v18 += v17 + v17 + v17 + v17;
          if (v23 == 0) {
            goto LABEL_13;
          }
        }
        goto LABEL_34;
      }
    LABEL_13:
      v21 = v19 & 3;
      if (v21 != 0) {
        while ((_QWORD*)(v18 + 552) != v25) {
          v18 += v17;
          if (--v21 == 0) {
            return 0;
          }
        }
      LABEL_34:
        CudaDriverRoutine_25cf30(v18, v20, v17);
        CudaDriverRoutine_574e0(v18 + 8, v20 + 8);
        v19 = *(_DWORD*)(a1 + 32) - 1;
        goto LABEL_35;
      }
    }
    return 0;
  }
LABEL_35:
  *(_DWORD*)(a1 + 32) = v19;
  return 0;
}

__int64 CudaDriverHr_6c0c0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v12;
  int v13;
  unsigned int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _OWORD* v25;
  _OWORD* v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  unsigned int v31;
  __int128* v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  unsigned int v37;
  __int128* v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  unsigned int v43;
  _OWORD* v44;
  __int128 v45;
  __int128 v46;
  __int128 v47;
  __int128 v48;
  _OWORD* v49;
  _OWORD* v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  _QWORD v59[3];

  result = 4;
  if (a1 != 0 && a2 != nullptr && a3 != 0 && a4 != 0) {
    if (CudaDriverData_14324bc != 0) {
      result = 0;
      *(_DWORD*)(a3 + 48) = 1;
      return result;
    }
    v59[1] = v4;
    v59[2] = v5;
    if ((unsigned int)CudaDriverData_14324b8 <= 0x2E &&
        (*(_BYTE*)(*(_QWORD*)(a4 + 72) + 88LL) & 1) != 0) {
      return 0;
    }
    v8 = a1;
    result = (*(__int64 (**)(_QWORD, _QWORD*, __int64))(a1 + 23376048))(
        *(_QWORD*)(a4 + 48), v59, 1);
    if ((_DWORD)result == 0) {
      v12 = a3;
      v13 = HIDWORD(CudaDriverData_1432530);
      v14 = DWORD1(CudaDriverData_1432530);
      if (HIDWORD(CudaDriverData_1432530) != 0) {
        v15 = a2;
        v16 = v8;
        v17 = a4;
        if (DWORD1(CudaDriverData_1432530) != (_DWORD)CudaDriverData_1432530) {
        LABEL_30:
          result = 0;
          HIDWORD(CudaDriverData_1432530) = v13 + 1;
          v55 = CudaDriverData_1432540 + 92LL * v14;
          DWORD1(CudaDriverData_1432530) =
              (v14 + 1) % DWORD2(CudaDriverData_1432530);
          *(_DWORD*)v55 = 2;
          *(_DWORD*)(v55 + 4) = *(_DWORD*)(v16 + 1088);
          *(_QWORD*)(v55 + 12) = *(_QWORD*)v12;
          *(_DWORD*)(v55 + 8) = v15[4];
          *(_QWORD*)(v55 + 20) = *v15;
          *(_QWORD*)(v55 + 28) = **(_QWORD**)(v17 + 72);
          *(_QWORD*)(v55 + 36) = *(_QWORD*)(v17 + 8);
          *(_QWORD*)(v55 + 44) = v59[0];
          v56 = *(_QWORD*)(v12 + 24);
          *(_DWORD*)(v55 + 60) = *(_DWORD*)(v12 + 32);
          *(_QWORD*)(v55 + 52) = v56;
          v57 = *(_QWORD*)(v12 + 36);
          *(_DWORD*)(v55 + 72) = *(_DWORD*)(v12 + 44);
          *(_QWORD*)(v55 + 64) = v57;
          if (*(_BYTE*)(*(_QWORD*)(v17 + 72) + 88LL) != 0) {
            v58 = 1;
          }
          else {
            v58 = 2;
          }
          *(_DWORD*)(v55 + 76) = v58;
          *(_QWORD*)(v55 + 80) = *(_QWORD*)(v12 + 64);
          *(_DWORD*)(v55 + 88) = *(_DWORD*)(v12 + 72);
          *(_DWORD*)(v12 + 48) = 2;
          return result;
        }
        v18 = CudaDriverRoutine_12e510(
            (unsigned int)(2 * DWORD2(CudaDriverData_1432530)), 92);
        v19 = DWORD2(CudaDriverData_1432530);
        v20 = CudaDriverData_1432540;
        if (DWORD2(CudaDriverData_1432530) != 0) {
          v21 = CudaDriverData_1432530;
          v22 = BYTE8(CudaDriverData_1432530) & 3;
          if (DWORD2(CudaDriverData_1432530) >= 4) {
            v24 = DWORD2(CudaDriverData_1432530) & 0xFFFFFFFC;
            v23 = 0;
            v25 = (_OWORD*)v18;
            do {
              v26 = (_OWORD*)(v20 + 92LL * v21);
              v23 += 4;
              v27 = v26[1];
              *v25 = *v26;
              v25[1] = v27;
              v28 = v26[2];
              v29 = v26[3];
              v30 = v26[4];
              *(_OWORD*)((char*)v25 + 76) = *(_OWORD*)((char*)v26 + 76);
              v25[3] = v29;
              v25[4] = v30;
              v25[2] = v28;
              v31 = (v21 + 1) % v19;
              v32 = (__int128*)(v20 + 92LL * v31);
              v34 = v32[3];
              v33 = v32[4];
              v35 = *(__int128*)((char*)v32 + 76);
              *(_OWORD*)((char*)v25 + 124) = v32[2];
              *(_OWORD*)((char*)v25 + 168) = v35;
              *(_OWORD*)((char*)v25 + 156) = v33;
              *(_OWORD*)((char*)v25 + 140) = v34;
              v36 = *v32;
              if (v31 + 1 == v19) {
                v37 = 0;
              }
              else {
                v37 = v31 + 1;
              }
              v38 = (__int128*)(v20 + 92LL * v37);
              *(_OWORD*)((char*)v25 + 108) = v32[1];
              *(_OWORD*)((char*)v25 + 92) = v36;
              v39 = v38[2];
              v41 = v38[3];
              v40 = v38[4];
              *(_OWORD*)((char*)v25 + 260) = *(__int128*)((char*)v38 + 76);
              *(_OWORD*)((char*)v25 + 216) = v39;
              *(_OWORD*)((char*)v25 + 248) = v40;
              *(_OWORD*)((char*)v25 + 232) = v41;
              v42 = *v38;
              *(_OWORD*)((char*)v25 + 200) = v38[1];
              *(_OWORD*)((char*)v25 + 184) = v42;
              v43 = (v37 + 1) % v19;
              v44 = (_OWORD*)(v20 + 92LL * v43);
              v45 = v44[1];
              *(_OWORD*)((char*)v25 + 276) = *v44;
              *(_OWORD*)((char*)v25 + 292) = v45;
              v46 = v44[2];
              v47 = v44[3];
              v48 = v44[4];
              v25[22] = *(_OWORD*)((char*)v44 + 76);
              *(_OWORD*)((char*)v25 + 324) = v47;
              *(_OWORD*)((char*)v25 + 340) = v48;
              *(_OWORD*)((char*)v25 + 308) = v46;
              v25 += 23;
              if (v43 + 1 == v19) {
                v21 = 0;
              }
              else {
                v21 = v43 + 1;
              }
            } while (v24 != v23);
          }
          else {
            v23 = 0;
          }
          if (v22 != 0) {
            v49 = (_OWORD*)(v18 + 92 * v23);
            do {
              v50 = (_OWORD*)(v20 + 92LL * v21);
              --v22;
              v51 = v50[1];
              *v49 = *v50;
              v49[1] = v51;
              v52 = v50[2];
              v53 = v50[3];
              v54 = v50[4];
              *(_OWORD*)((char*)v49 + 76) = *(_OWORD*)((char*)v50 + 76);
              v49[3] = v53;
              v49[4] = v54;
              v49[2] = v52;
              v49 = (_OWORD*)((char*)v49 + 92);
              v21 = (v21 + 1) % v19;
            } while (v22 != 0);
          }
        }
        LODWORD(CudaDriverData_1432530) = 0;
        DWORD1(CudaDriverData_1432530) = v19;
        DWORD2(CudaDriverData_1432530) = 2 * v19;
        CudaDriverRoutine_12e340(v20);
        v14 = DWORD1(CudaDriverData_1432530);
        v13 = HIDWORD(CudaDriverData_1432530);
        CudaDriverData_1432540 = v18;
        v12 = a3;
      }
      v17 = a4;
      v15 = a2;
      v16 = v8;
      goto LABEL_30;
    }
  }
  return result;
}

__int64 CudaDriverHr_6cd90(unsigned int a1, unsigned int a2, unsigned int a3,
                           int a4, __int128* a5, char* a6)
{
  __int128 v6;
  char* v7;
  __int64 result;
  char v9;
  _QWORD v10[6];
  char v11;

  v11 = 0;
  v10[1] = __PAIR64__(a3, a2);
  memset(&v10[2], 0, 32);
  LODWORD(v10[2]) = a4;
  v10[0] = __PAIR64__(CudaDriverData_14324c0++, a1);
  if (a5 != nullptr) {
    v6 = *a5;
    v10[5] = *((_QWORD*)a5 + 2);
    *(_OWORD*)&v10[3] = v6;
  }
  else {
    memset(&v10[3], 0, 24);
  }
  if (a6 != nullptr) {
    v7 = a6;
  }
  else {
    v7 = &v9;
  }
  result = CudaDriverRoutine_82e60(CudaDriverData_1423028, v10, 48);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_82bc0(CudaDriverData_1423030, v7, 24, &v11);
    if ((_DWORD)result == 0) {
      return *(unsigned int*)v7;
    }
  }
  return result;
}

bool CudaDriverHr_8f480(_QWORD* a1) { return (*a1 & 0x3FFEF01FF6FFD0LL) != 0; }

__int64 CudaDriverHr_90c00(_QWORD* a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;

  v1 = *a1;
  *((_DWORD*)a1 + 111) = 1;
  v3 = CudaDriverRoutine_11d560(v1, 6);
  v4 = *a1;
  if (v3 != 0) {
    v5 = *(_QWORD*)(v4 + 16032);
  }
  else {
    LODWORD(v5) = 0;
  }
  if ((unsigned __int8)CudaDriverRoutine_e5960(v4) != 0) {
    v6 = v5 + 1;
  }
  else {
    v6 = v5;
  }
  v7 = *((_DWORD*)a1 + 112);
  v8 = CudaDriverRoutine_90880(a1, v1 + 1248, v6);
  if (v8 == 0) {
    return CudaDriverRoutine_98190(*a1, 0);
  }
  v9 = v8;
  v10 = CudaDriverRoutine_90880(a1, *a1 + 1248LL, v7);
  if (v10 != 0) {
    *(_DWORD*)(*a1 + 15952LL) = v10;
  }
  return v9;
}

__int64 CudaDriverHr_90d90(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __int64 v15;

  if (a2 > *(unsigned int*)(a1[8] + 17064LL)) {
    return 1;
  }
  v3 = a1[2004];
  v4 = a1[133];
  a1[2004] = a2;
  if (v4 == 0) {
    return 0;
  }
  CudaDriverRoutine_205fa0(0, a1[12], &v15, 0);
  v15 = (*(__int64 (**)(__int64, __int64))(a1[8] + 18984LL))(v15, 127);
  CudaDriverRoutine_206060(a1[12], v15);
  result = CudaDriverRoutine_98190(a1, 0);
  if ((_DWORD)result != 0) {
    goto LABEL_18;
  }
  v6 = (_QWORD*)a1[133];
  v7 = CudaDriverRoutine_11d560(*v6, 6);
  v8 = *v6;
  if (v7 != 0) {
    v9 = *(_QWORD*)(v8 + 16032);
  }
  else {
    LODWORD(v9) = 0;
  }
  if ((unsigned __int8)CudaDriverRoutine_e5960(v8) != 0) {
    v10 = v9 + 1;
  }
  else {
    v10 = v9;
  }
  v11 = *((_DWORD*)v6 + 112);
  v12 = CudaDriverRoutine_90880(v6, (__int64)(a1 + 156), v10);
  if (v12 != 0) {
    v13 = v12;
    v14 = CudaDriverRoutine_90880(v6, *v6 + 1248LL, v11);
    if (v14 != 0) {
      *(_DWORD*)(*v6 + 15952LL) = v14;
    }
    result = v13;
    goto LABEL_18;
  }
  result = CudaDriverRoutine_98190(a1, 0);
  if ((_DWORD)result != 0) {
  LABEL_18:
    a1[2004] = v3;
  }
  return result;
}

__int64 CudaDriverHr_c16a0(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v7;
  int v8;
  bool v9;
  long double v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (*(_DWORD*)(a1 + 16) == 34037) {
    return 0;
  }
  v15 = v4;
  v16 = v2;
  v17 = v3;
  v7 = *(_DWORD*)(a1 + 120) + 1;
  if (v7 > *(_DWORD*)(a1 + 124)) {
    return 0;
  }
  *(_QWORD*)&a2 = *(_QWORD*)(a1 + 104);
  while (1) {
    *(int32x2_t*)&a2 =
        vmax_s32(vshr_n_s32(*(int32x2_t*)&a2, 1u), (int32x2_t)0x100000001LL);
    v10 = a2;
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v7, 4096, &v14);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v7, 4097, &v13);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v7, 4101, &v12);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v7, 4099, &v11);
    a2 = v10;
    v8 = *(_DWORD*)(a1 + 116);
    if (LODWORD(v10) + 2 * v8 != v14) {
      break;
    }
    v9 = 2 * v8 + DWORD1(v10) == v13 && v8 == v12;
    if (!v9 || *(_DWORD*)(a1 + 156) != v11) {
      break;
    }
    if (++v7 > *(_DWORD*)(a1 + 124)) {
      return 0;
    }
  }
  return 1;
}

__int64 CudaDriverHr_c1920(__int64 a1, long double a2)
{
  unsigned int v2;
  int v4;
  unsigned int v5;
  int v6;
  bool v7;
  long double v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = *(_DWORD*)(a1 + 124);
  v4 = 0;
  while (1) {
    v5 = *(_DWORD*)(a1 + 120) + 1;
    if (v5 <= v2) {
      break;
    }
  LABEL_2:
    if (++v4 == 6) {
      return 0;
    }
  }
  *(_QWORD*)&a2 = *(_QWORD*)(a1 + 104);
  while (1) {
    *(int32x2_t*)&a2 =
        vmax_s32(vshr_n_s32(*(int32x2_t*)&a2, 1u), (int32x2_t)0x100000001LL);
    v9 = a2;
    CudaDriverData_1432d28((unsigned int)(v4 + 34069), v5, 4096, &v13);
    CudaDriverData_1432d28((unsigned int)(v4 + 34069), v5, 4097, &v12);
    CudaDriverData_1432d28((unsigned int)(v4 + 34069), v5, 4101, &v11);
    CudaDriverData_1432d28((unsigned int)(v4 + 34069), v5, 4099, &v10);
    a2 = v9;
    v6 = *(_DWORD*)(a1 + 116);
    if (LODWORD(v9) + 2 * v6 != v13) {
      return 1;
    }
    v7 = 2 * v6 + DWORD1(v9) == v12 && v6 == v11;
    if (!v7 || *(_DWORD*)(a1 + 156) != v10) {
      return 1;
    }
    v2 = *(_DWORD*)(a1 + 124);
    if (++v5 > v2) {
      goto LABEL_2;
    }
  }
}

__int64 CudaDriverHr_c1ba0(__int64 a1, long double a2)
{
  unsigned int v2;
  int v4;
  int v6;
  bool v7;
  long double v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = *(_DWORD*)(a1 + 120) + 1;
  if (v2 > *(_DWORD*)(a1 + 124)) {
    return 0;
  }
  *(_QWORD*)&a2 = *(_QWORD*)(a1 + 108);
  v4 = *(_DWORD*)(a1 + 104);
  while (1) {
    v8 = a2;
    if (v4 >> 1 <= 1) {
      v4 = 1;
    }
    else {
      v4 >>= 1;
    }
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4096, &v13);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4097, &v12);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 32881, &v11);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4101, &v10);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4099, &v9);
    *((_QWORD*)&a2 + 1) = *((_QWORD*)&v8 + 1);
    v6 = *(_DWORD*)(a1 + 116);
    if (v4 + 2 * v6 != v13) {
      break;
    }
    *(int32x2_t*)&a2 =
        vmax_s32(vshr_n_s32(*(int32x2_t*)&v8, 1u), (int32x2_t)0x100000001LL);
    if (2 * v6 + LODWORD(a2) != v12) {
      break;
    }
    v7 = 2 * v6 + DWORD1(a2) == v11 && v6 == v10;
    if (!v7 || *(_DWORD*)(a1 + 156) != v9) {
      break;
    }
    if (++v2 > *(_DWORD*)(a1 + 124)) {
      return 0;
    }
  }
  return 1;
}

__int64 CudaDriverHr_c1e40(__int64 a1, long double a2)
{
  unsigned int v2;
  int v5;
  long double v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;

  v2 = *(_DWORD*)(a1 + 120) + 1;
  if (v2 > *(_DWORD*)(a1 + 124)) {
    return 0;
  }
  *(_QWORD*)&a2 = *(_QWORD*)(a1 + 104);
  while (1) {
    *(int32x2_t*)&a2 =
        vmax_s32(vshr_n_s32(*(int32x2_t*)&a2, 1u), (int32x2_t)0x100000001LL);
    v6 = a2;
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4096, &v10);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4097,
                           (char*)&v9 + 4);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 32881, &v9);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4101, &v8);
    CudaDriverData_1432d28(*(unsigned int*)(a1 + 872), v2, 4099, &v7);
    a2 = v6;
    v5 = *(_DWORD*)(a1 + 116);
    if (LODWORD(v6) + 2 * v5 != v10 ||
        __PAIR64__(2 * v5 + DWORD1(v6), *(_DWORD*)(a1 + 112)) != v9 ||
        v5 != v8 || *(_DWORD*)(a1 + 156) != v7) {
      break;
    }
    if (++v2 > *(_DWORD*)(a1 + 124)) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
