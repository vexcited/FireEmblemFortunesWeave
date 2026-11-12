#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_rel_source_features_dlaa_weights_97d20(_QWORD* result,
                                                           unsigned __int64);
__attribute__((swiftcall)) void NgxRoutine_977c0(PSEUDO_X8, __int64);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_b41e0(__int64 result, ...);
__int64 NgxRoutine_b4c00(__int64 result, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64, char);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_features_dlaa_weights_97ee0(__int64*, __int64*);
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 NGXSetDltssWeights(__int64* a1, __int64* a2);

__int64 NGXSetDltssWeights(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    __int64 v44;
    __int64 v45;
    char* v46;
  } v44_;
  struct {
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } v47_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v2 = *a2;
  NgxRoutine_977c0((void*)(&v44_.v44), (__int64)a2),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v44_.v44 & 1) != 0) {
    v7 = v44_.v46;
  }
  else {
    v7 = (char*)&v44_.v44 + 1;
  }
  NgxRoutine_b4c00(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/features/dlaa/weights/weights.cpp",
      196, (__int64)"NGXSetDltssWeights",
      (__int64)"Weights %s | Training Set %s | Blending factor %.4f | Variance "
               "Mask %.4f",
      v2, (__int64)v7, v5, v6, v44_.v44),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v44_.v44 & 1) != 0) {
    NgxRoutine_430(v44_.v46, v44_.v44 & 0xFFFFFFFFFFFFFFFELL),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  result = NgxRoutine_b41e0((__int64)"NGX DLSS 2|Embedded Weights|%s|Jitter|",
                            (const char*)*a2),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v9 = a2[2];
  if (a2[3] != v9) {
    v10 = 0;
    while (1) {
      v44_.v44 = 0;
      v44_.v45 = 0;
      v44_.v46 = nullptr;
      v47_.v47 = 0;
      v47_.v48 = 0;
      v47_.v49 = 0;
      v11 = *(unsigned int*)(v9 + 32 * v10 + 8);
      if ((unsigned int)v11 >= 4) {
        nvidia_dlss_rel_source_features_dlaa_weights_97d20(&v44_.v44, v11 >> 2),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v9 = a2[2];
        v12 = v47_.v47;
        v13 = v47_.v48;
      }
      else {
        v12 = 0;
        v13 = 0;
      }
      v14 = (v13 - v12) >> 1;
      v15 = (unsigned __int64)*(unsigned int*)(v9 + 32 * v10 + 24) >> 2;
      if (v15 <= v14) {
        if (v15 < v14) {
          v47_.v48 = v12 + 2 * v15;
        }
      }
      else {
        nvidia_dlss_rel_source_features_dlaa_weights_97d20(&v47_.v47,
                                                           v15 - v14),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      v16 = v44_.v44;
      if (v44_.v45 != v44_.v44) {
        v17 = (v44_.v45 - v44_.v44) >> 1;
        v18 = 0;
        v19 = *(_QWORD*)(a2[2] + 32 * v10);
        do {
          v21 = *(_DWORD*)(v19 + 4 * v18);
          v22 = (unsigned __int8)(v21 >> 23);
          v23 = v21 & 0x7FFFFF;
          v20 = HIWORD(v21) & 0x8000;
          if (v22 == 255) {
            LOWORD(v20) = v20 | 0x7C00;
            if (v23 != 0) {
              LOWORD(v20) = 32256;
            }
          }
          else if (v22 > 0x8E || v22 == 142 && v23 > 0x7FE000) {
            LOWORD(v20) = v20 | 0x7C00;
          }
          else if (v22 >= 0x66 && (v22 != 102 || v23 >= 0x2000)) {
            v20 = HIWORD(v21) & 0x8000 | (v23 >> 13) |
                  ((v21 >> 23 << 10) + 0x4000);
            v24 = ((v23 | 0x800000) >> (126 - v22)) | HIWORD(v21) & 0x8000;
            if (v22 <= 0x70) {
              LOWORD(v20) = v24;
            }
          }
          *(_WORD*)(v16 + 2 * v18++) = v20;
        } while (v17 > (unsigned int)v18);
      }
      v25 = v47_.v47;
      if (v47_.v48 != v47_.v47) {
        v26 = (v47_.v48 - v47_.v47) >> 1;
        v27 = 0;
        v28 = *(_QWORD*)(a2[2] + 32 * v10 + 16);
        do {
          v30 = *(_DWORD*)(v28 + 4 * v27);
          v31 = (unsigned __int8)(v30 >> 23);
          v32 = v30 & 0x7FFFFF;
          v29 = HIWORD(v30) & 0x8000;
          if (v31 == 255) {
            LOWORD(v29) = v29 | 0x7C00;
            if (v32 != 0) {
              LOWORD(v29) = 32256;
            }
          }
          else if (v31 > 0x8E || v31 == 142 && v32 > 0x7FE000) {
            LOWORD(v29) = v29 | 0x7C00;
          }
          else if (v31 >= 0x66 && (v31 != 102 || v32 >= 0x2000)) {
            v29 = HIWORD(v30) & 0x8000 | (v32 >> 13) |
                  ((v30 >> 23 << 10) + 0x4000);
            v33 = ((v32 | 0x800000) >> (126 - v31)) | HIWORD(v30) & 0x8000;
            if (v31 <= 0x70) {
              LOWORD(v29) = v33;
            }
          }
          *(_WORD*)(v25 + 2 * v27++) = v29;
        } while (v26 > (unsigned int)v27);
      }
      v34 = (__int64*)a1[1];
      if ((unsigned __int64)v34 < a1[2]) {
        break;
      }
      a1[1] = nvidia_dlss_rel_source_features_dlaa_weights_97ee0(a1, &v44_.v44),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v43 = v47_.v47;
      if (v47_.v47 != 0) {
        goto LABEL_56;
      }
    LABEL_57:
      result = v44_.v44;
      if (v44_.v44 != 0) {
        v44_.v45 = v44_.v44;
        result = NgxRoutine_430(v44_.v44, &v44_.v46[-v44_.v44]),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      v9 = a2[2];
      if (++v10 >= (unsigned __int64)((a2[3] - v9) >> 5)) {
        return result;
      }
    }
    *v34 = 0;
    v34[1] = 0;
    v34[2] = 0;
    v35 = v44_.v44;
    v36 = v44_.v45 - v44_.v44;
    if (v44_.v45 != v44_.v44) {
      if (v36 < 0) {
        goto LABEL_60;
      }
      v37 = NgxRoutine_420(v44_.v45 - v44_.v44),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v38 = v37 + v36;
      *v34 = v37;
      v34[1] = v37;
      v34[2] = v37 + v36;
      memcpy_plt(v37, v35, v36),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v34[1] = v38;
    }
    v34[3] = 0;
    v34[4] = 0;
    v34[5] = 0;
    v39 = v47_.v47;
    v40 = v47_.v48 - v47_.v47;
    if (v47_.v48 != v47_.v47) {
      if (v40 < 0) {
      LABEL_60:
        nvidia_dlss_rel_source_common_33410(),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      v41 = NgxRoutine_420(v47_.v48 - v47_.v47),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v42 = v41 + v40;
      v34[3] = v41;
      v34[4] = v41;
      v34[5] = v41 + v40;
      memcpy_plt(v41, v39, v40),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v34[4] = v42;
    }
    a1[1] = (__int64)(v34 + 6);
    v43 = v47_.v47;
    if (v47_.v47 == 0) {
      goto LABEL_57;
    }
  LABEL_56:
    v47_.v48 = v43;
    NgxRoutine_430(v43, v47_.v49 - v43),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_57;
  }
  return result;
}

#pragma GCC visibility pop
