#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 ProcessAutoExposure(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            _QWORD* a5, __int64 a6, int a7);

__int64 ProcessAutoExposure(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            _QWORD* a5, __int64 a6, int a7)
{

#pragma clang fp contract(off)
  int v7;
  __int64 result;
  int v15;
  int v16;
  __int64* v17;
  int v18;
  __int64 v19;
  float v20;
  int v21;
  int v22;
  int v23;
  int v24;
  float v25;
  int v26;
  int v27;
  bool v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64* v44;
  __int64 v45;
  int v46;
  int v53;
  float v54;
  int v55;
  int v56;
  int v57;
  char v58;
  __int64* v59;
  int v60;
  int v61;
  __int64 v62;
  int v63;
  int v64;
  float v65;
  int v66;
  __int64* v67;
  __int64 v68;
  int v69;

  v7 = *(_DWORD*)(a4 + 256);
  *(_DWORD*)(a4 + 256) = v7 + 1;
  if (v7 % (signed __int32)*(_DWORD*)(a1 + 40) != 0) {
    return 1;
  }
  if (a7 == 1) {
    (*(__attribute__((swiftcall)) void (**)(
        PSEUDO_X8, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, double,
        double, double, double))(**(_QWORD**)(a1 + 8) + 448LL))(
        (void*)(*(_QWORD**)(a1 + 8)), *(_QWORD*)(a1 + 8), a2,
        *(_QWORD*)(a4 + 320), 0, 0, 0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0, 0x0.0p+0);
    if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 24)) != 0) {
      return 3134193666LL;
    }
    v53 = *((_DWORD*)a5 + 31);
    v54 = 0x1.0000000000000p+0f / *((float*)a5 + 44);
    *(_DWORD*)(a4 + 128) = *((_DWORD*)a5 + 30);
    *(_DWORD*)(a4 + 132) = v53;
    v55 = *((_DWORD*)a5 + 43);
    v56 = *(_DWORD*)(a3 + 80);
    v57 = *(_DWORD*)(a4 + 272);
    v58 = *(_BYTE*)(a4 + 280);
    v59 = *(__int64**)(a1 + 8);
    if (*((int*)a5 + 42) > 0) {
      v56 = *((_DWORD*)a5 + 42);
    }
    v60 = v56 - 1;
    *(_DWORD*)(a4 + 136) = v60;
    v61 = *(_DWORD*)(a3 + 84);
    *(_BYTE*)(a4 + 184) = v58;
    v62 = *v59;
    *(float*)(a4 + 152) = v54;
    *(_DWORD*)(a4 + 156) = v57;
    v63 = *(_DWORD*)(a4 + 276);
    if (v55 > 0) {
      v61 = v55;
    }
    v64 = v61 - 1;
    *(_DWORD*)(a4 + 140) = v64;
    *(_DWORD*)(a4 + 144) = v60;
    *(_DWORD*)(a4 + 148) = v64;
    *(_DWORD*)(a4 + 160) = v63;
    if ((*(unsigned int (**)(__int64))(v62 + 216))((__int64)v59) != 0) {
      return 3134193666LL;
    }
    if ((*(unsigned int (**)(_QWORD, _QWORD, __int64, __int64))(
            **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8), *a5, a4 + 176,
                                           2) != 0) {
      return 3134193666LL;
    }
    if ((*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD))(
            **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                           *(_QWORD*)(a4 + 320), 0) != 0) {
      return 3134193666LL;
    }
    if ((*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, _QWORD,
                             __int64))(**(_QWORD**)(a1 + 8) + 344LL))(
            *(_QWORD*)(a1 + 8), a4 + 120, a2,
            (unsigned int)(*(_DWORD*)(a4 + 144) + 8) >> 3,
            (unsigned int)(*(_DWORD*)(a4 + 148) + 8) >> 3, 1) != 0) {
      return 3134193666LL;
    }
    if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 32)) != 0) {
      return 3134193666LL;
    }
    v65 = *(float*)(a4 + 260);
    v66 = *(_DWORD*)(a4 + 264);
    *(_QWORD*)(a4 + 204) = *(_QWORD*)(a4 + 268);
    *(_DWORD*)(a4 + 200) = v66;
    v67 = *(__int64**)(a1 + 8);
    v68 = *v67;
    *(_DWORD*)(a4 + 212) = *(_DWORD*)(a4 + 276);
    *(float*)(a4 + 216) = v65 / (float)(0x1.0000000000000p+0f - v65);
    if ((*(unsigned int (**)(__int64*, __int64, __int64))(v68 + 200))(
            v67, a6, a4 + 224) != 0 ||
        (*(unsigned int (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) +
                                                       208LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a4 + 320), a4 + 232) != 0 ||
        (*(unsigned int (**)(_QWORD, __int64, __int64, __int64, __int64))(
            **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2, a6, 64, 8) !=
            0 ||
        (*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD))(
            **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                           *(_QWORD*)(a4 + 320), 0) != 0 ||
        (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD))(
            **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2, a6, 0) !=
            0 ||
        (*(unsigned int (**)(_QWORD, __int64, __int64, __int64, __int64,
                             __int64))(**(_QWORD**)(a1 + 8) + 344LL))(
            *(_QWORD*)(a1 + 8), a4 + 192, a2, 1, 1, 1) != 0 ||
        (*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD))(
            **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                           *(_QWORD*)(a4 + 320), 0) != 0) {
      return 3134193666LL;
    }
    v69 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64))(
        **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2, a6, 8, 64);
    result = 3134193666LL;
    if (v69 == 0) {
      return 1;
    }
  }
  else {
    if (a7 == 0) {
      if ((unsigned int)(*(_QWORD *
                           (**)(_QWORD * __return_ptr, _QWORD, _QWORD))(
              **(_QWORD**)(a1 + 8) + 240LL))(*(_QWORD**)(a1 + 8),
                                             *(_QWORD*)(a1 + 8),
                                             *(_QWORD*)(a1 + 104)) == 0) {
        v15 = *(_DWORD*)(a4 + 284);
        v16 = *(_DWORD*)(a4 + 288);
        v17 = *(__int64**)(a1 + 8);
        v18 = v16 * v15;
        *(_DWORD*)(a4 + 12) = v15 - 1;
        *(_DWORD*)(a4 + 16) = v16 - 1;
        v19 = *v17;
        v20 = (float)v18;
        v21 = *((_DWORD*)a5 + 31);
        *(_DWORD*)(a4 + 20) = *((_DWORD*)a5 + 30);
        *(_DWORD*)(a4 + 24) = v21;
        v22 = *((_DWORD*)a5 + 42);
        v23 = *((_DWORD*)a5 + 43);
        *(float*)(a4 + 8) = 0x1.0000000000000p+0f / v20;
        v24 = *(_DWORD*)(a3 + 80);
        if (v22 > 0) {
          v24 = v22;
        }
        v25 = 0x1.0000000000000p+0f / *((float*)a5 + 44);
        *(_DWORD*)(a4 + 28) = v24 - 1;
        v26 = *(_DWORD*)(a3 + 84);
        if (v23 > 0) {
          v26 = v23;
        }
        *(float*)(a4 + 36) = v25;
        *(_DWORD*)(a4 + 32) = v26 - 1;
        if ((*(unsigned int (**)(__int64))(v19 + 208))((__int64)v17) == 0 &&
            (*(unsigned int (**)(_QWORD, _QWORD, __int64, __int64))(
                **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8), *a5, a4 + 48,
                                               2) == 0 &&
            (*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD))(
                **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                               *(_QWORD*)(a4 + 304), 0) == 0) {
          v27 = *(_DWORD*)(a4 + 284);
          v29 = v27 + 7;
          v28 = v27 < -7;
          v30 = v27 + 14;
          if (!v28) {
            v30 = v29;
          }
          v31 = (unsigned int)(v30 >> 3);
          v32 = *(_DWORD*)(a4 + 288);
          v33 = v32 + 7;
          v28 = v32 < -7;
          v34 = v32 + 14;
          if (!v28) {
            v34 = v33;
          }
          if ((*(unsigned int (**)(_QWORD, __int64, __int64, __int64, _QWORD,
                                   __int64))(**(_QWORD**)(a1 + 8) + 344LL))(
                  *(_QWORD*)(a1 + 8), a4, a2, v31, (unsigned int)(v34 >> 3),
                  1) == 0 &&
              (*(unsigned int (**)(_QWORD, _QWORD))(
                  **(_QWORD**)(a1 + 8) + 240LL))(*(_QWORD*)(a1 + 8),
                                                 *(_QWORD*)(a1 + 112)) == 0) {
            v35 = a4;
            v36 = *(_DWORD*)(a4 + 288) * *(_DWORD*)(a4 + 284);
            v38 = *(_QWORD*)(a4 + 304);
            v37 = *(_QWORD*)(a4 + 312);
            v39 = a1;
            while (1) {
              v40 = *(_QWORD*)(v39 + 8);
              v41 = v37;
              *(_DWORD*)(v35 + 64) = v36;
              if ((*(unsigned int (**)(__int64, __int64, __int64))(
                      *(_QWORD*)v40 + 208LL))(v40, v38, v35 + 72) != 0 ||
                  (*(unsigned int (**)(_QWORD, __int64, __int64))(
                      **(_QWORD**)(a1 + 8) + 216LL))(*(_QWORD*)(a1 + 8), v41,
                                                     a4 + 80) != 0 ||
                  (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD))(
                      **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                                     v38, 0) != 0 ||
                  (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD))(
                      **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                                     v41, 0) != 0) {
                break;
              }
              v42 = v36 + 511;
              if (v36 < -511) {
                v42 = v36 + 1022;
              }
              v43 = v42 >> 9;
              if ((*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD,
                                       __int64,
                                       __int64))(**(_QWORD**)(a1 + 8) + 344LL))(
                      *(_QWORD*)(a1 + 8), a4 + 56, a2, (unsigned int)(v42 >> 9),
                      1, 1) != 0) {
                break;
              }
              v37 = v38;
              v38 = v41;
              v39 = a1;
              v35 = a4;
              v28 = v36 <= 512;
              v36 = v43;
              if (v28) {
                if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) +
                                                          240LL))(
                        *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 120)) != 0) {
                  return 3134193666LL;
                }
                v44 = *(__int64**)(a1 + 8);
                v45 = *v44;
                *(float*)(a4 + 96) =
                    *(float*)(a4 + 260) /
                    (float)(0x1.0000000000000p+0f - *(float*)(a4 + 260));
                if ((*(unsigned int (**)(__int64*, __int64, __int64))(
                        v45 + 200))(v44, a6, a4 + 104) != 0 ||
                    (*(unsigned int (**)(_QWORD, __int64, __int64))(
                        **(_QWORD**)(a1 + 8) + 208LL))(*(_QWORD*)(a1 + 8), v41,
                                                       a4 + 112) != 0 ||
                    (*(unsigned int (**)(_QWORD, __int64, __int64, __int64,
                                         __int64))(
                        **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2,
                                                       a6, 64, 8) != 0 ||
                    (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD))(
                        **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                                       v41, 0) != 0 ||
                    (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD))(
                        **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2,
                                                       a6, 0) != 0 ||
                    (*(unsigned int (**)(_QWORD, __int64, __int64, __int64,
                                         __int64, __int64))(
                        **(_QWORD**)(a1 + 8) + 344LL))(
                        *(_QWORD*)(a1 + 8), a4 + 88, a2, 1, 1, 1) != 0 ||
                    (*(unsigned int (**)(_QWORD, __int64, __int64, __int64,
                                         __int64))(
                        **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), a2,
                                                       a6, 8, 64) != 0) {
                  return 3134193666LL;
                }
                v46 = (*(__int64 (**)(_QWORD, __int64, __int64, _QWORD))(
                    **(_QWORD**)(a1 + 8) + 360LL))(*(_QWORD*)(a1 + 8), a2, a6,
                                                   0);
                result = 3134193666LL;
                if (v46 != 0) {
                  return result;
                }
                return 1;
              }
            }
          }
        }
      }
      return 3134193666LL;
    }
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/ngx_dlaa_common.cpp",
        217, (__int64)"ProcessAutoExposure",
        (__int64)"Invalid Autoexposure mode");
    return 3134193669LL;
  }
  return result;
}

#pragma GCC visibility pop
