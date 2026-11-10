#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsBreakPoint_plt(_QWORD, _QWORD, _QWORD);
__int64 dlmalloc_5f1580(_QWORD, _QWORD);
__int64 dlmalloc_5f3220_alt1(_QWORD, _QWORD) __asm__("dlmalloc_5f3220");
__int64 dlmalloc_5f34a0_alt1(_QWORD) __asm__("dlmalloc_5f34a0");
__int64 dlmalloc_5f3a80(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nnosLockMutex_plt(_QWORD);
__int64 nnosUnlockMutex_plt(_QWORD);
__int64 nvidia_5f5150(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_ea40a0;
extern __int64 SdkData_f72e70;
extern __int64 SdkData_f72e78;
extern __int64 SdkData_f72e80;
extern __int64 SdkData_f72e88;
extern __int64 SdkData_f72e90;
extern int SdkData_f72e98;
__int64 dlmalloc_5f29a0(__int64 result, __int64 a2);
__int64 dlmalloc_5f3220(_QWORD* a1, unsigned __int64 a2);
__int64 dlmalloc_5f34a0(__int64 a1);
__int64 dlmalloc_5f3930(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 dlmalloc_5f4190(__int64 result);
__int64 dlmalloc_5f4280(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 dlmalloc_5f47a0(__int64 result, unsigned __int64 a2,
                        unsigned __int64 a3);

__int64 dlmalloc_5f29a0(__int64 result, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned __int64* v41;
  unsigned __int64 v42;
  int v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  _QWORD* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  _QWORD* v71;
  _QWORD* v72;
  _QWORD* v73;
  _QWORD* v74;
  _QWORD* v75;

  if (a2 != 0) {
    v2 = a2 - 16;
    v3 = result;
    if ((*(_BYTE*)(result + 880) & 2) != 0) {
      v4 = a2;
      result = nnosLockMutex_plt(result + 888);
      a2 = v4;
    }
    v5 = *(_QWORD*)(v3 + 24);
    if (v2 < v5) {
      goto LABEL_137;
    }
    v6 = *(_QWORD*)(a2 - 8);
    if ((v6 & 3) == 1) {
      goto LABEL_137;
    }
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v2 + (v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ((v6 & 1) == 0) {
      v9 = *(_QWORD*)v2;
      if ((v6 & 2) == 0) {
        v10 = v7 + v9 + 32;
        result = nvidia_5f5150(*(_QWORD*)(v3 + 952), v2 - v9, v10);
        if ((_DWORD)result == 0) {
          *(_QWORD*)(v3 + 856) -= v10;
        }
        goto LABEL_132;
      }
      v2 -= v9;
      if (v2 < v5) {
        goto LABEL_137;
      }
      v7 += v9;
      if (v2 != *(_QWORD*)(v3 + 32)) {
        if (v9 <= 0xFF) {
          v11 = v9 >> 3;
          v12 = *(_QWORD*)(v2 + 16);
          v13 = *(_QWORD*)(v2 + 24);
          v14 = v3 + 16 * v11 + 72;
          if (v12 == v14 || v12 >= v5 && *(_QWORD*)(v12 + 24) == v2) {
            if (v13 == v12) {
              *(_DWORD*)v3 &= ~(1 << v11);
              goto LABEL_52;
            }
            if (v13 == v14 || v13 >= v5 && *(_QWORD*)(v13 + 16) == v2) {
              *(_QWORD*)(v12 + 24) = v13;
              *(_QWORD*)(v13 + 16) = v12;
              goto LABEL_52;
            }
          }
          goto LABEL_19;
        }
        v16 = *(_QWORD*)(v2 + 48);
        v17 = *(_QWORD**)(v2 + 24);
        if (v17 == (_QWORD*)v2) {
          v19 = (_QWORD*)(v2 + 40);
          v20 = *(_QWORD**)(v2 + 40);
          if (v20 == nullptr) {
            v19 = (_QWORD*)(v2 + 32);
            v20 = *(_QWORD**)(v2 + 32);
            if (v20 == nullptr) {
              v17 = nullptr;
              goto LABEL_33;
            }
          }
          do {
            do {
              v17 = v20;
              v21 = v19;
              v19 = v20 + 5;
              v20 = (_QWORD*)v20[5];
            } while (v20 != nullptr);
            v19 = v17 + 4;
            v20 = (_QWORD*)v17[4];
          } while (v20 != nullptr);
          if ((unsigned __int64)v21 >= v5) {
            *v21 = 0;
            goto LABEL_33;
          }
        }
        else {
          v18 = *(_QWORD*)(v2 + 16);
          if (v18 >= v5 && *(_QWORD*)(v18 + 24) == v2 && v17[2] == v2) {
            *(_QWORD*)(v18 + 24) = v17;
            v17[2] = v18;
            goto LABEL_33;
          }
        }
        v66 = *(_QWORD*)(v2 + 48);
        v70 = v17;
        result = NvOsBreakPoint_plt(
            "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
            "hos\\utils\\nvos\\hos\\dlmalloc.c",
            5681, 0);
        v16 = v66;
        v17 = v70;
      LABEL_33:
        if (v16 == 0) {
          goto LABEL_52;
        }
        v22 = *(unsigned int*)(v2 + 56);
        if (v2 == *(_QWORD*)(v3 + 600 + 8 * v22)) {
          *(_QWORD*)(v3 + 600 + 8 * v22) = v17;
          if (v17 == nullptr) {
            *(_DWORD*)(v3 + 4) &= ~(1 << v22);
            goto LABEL_52;
          }
        }
        else if (v16 < *(_QWORD*)(v3 + 24)) {
          v68 = v16;
          v72 = v17;
          result = NvOsBreakPoint_plt(
              "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
              "hos\\utils\\nvos\\hos\\dlmalloc.c",
              5681, 0);
          v16 = v68;
          v17 = v72;
          if (v72 == nullptr) {
            goto LABEL_52;
          }
        }
        else if (*(_QWORD*)(v16 + 32) == v2) {
          *(_QWORD*)(v16 + 32) = v17;
          if (v17 == nullptr) {
            goto LABEL_52;
          }
        }
        else {
          *(_QWORD*)(v16 + 40) = v17;
          if (v17 == nullptr) {
            goto LABEL_52;
          }
        }
        v23 = *(_QWORD*)(v3 + 24);
        if ((unsigned __int64)v17 < v23) {
          goto LABEL_19;
        }
        v17[6] = v16;
        v24 = *(_QWORD*)(v2 + 32);
        if (v24 != 0) {
          if (v24 < v23) {
            v74 = v17;
            result = NvOsBreakPoint_plt(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                5681, 0);
            v17 = v74;
            v25 = *(_QWORD*)(v2 + 40);
            if (v25 == 0) {
              goto LABEL_52;
            }
          LABEL_48:
            if (v25 >= *(_QWORD*)(v3 + 24)) {
              v17[5] = v25;
              *(_QWORD*)(v25 + 48) = v17;
              goto LABEL_52;
            }
          LABEL_19:
            result = NvOsBreakPoint_plt(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                5681, 0);
            goto LABEL_52;
          }
          v17[4] = v24;
          *(_QWORD*)(v24 + 48) = v17;
        }
        v25 = *(_QWORD*)(v2 + 40);
        if (v25 == 0) {
          goto LABEL_52;
        }
        goto LABEL_48;
      }
      v15 = *(_QWORD*)(v8 + 8);
      if ((~*(_DWORD*)(v8 + 8) & 3LL) == 0) {
        *(_QWORD*)(v3 + 8) = v7;
        *(_QWORD*)v8 = v7;
        *(_QWORD*)(v8 + 8) = v15 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD*)(v2 + 8) = v7 | 1;
        goto LABEL_132;
      }
    }
  LABEL_52:
    if (v2 < v8) {
      v26 = *(_QWORD*)(v8 + 8);
      if ((v26 & 1) != 0) {
        if ((v26 & 2) != 0) {
          *(_QWORD*)(v2 + v7) = v7;
          *(_QWORD*)(v8 + 8) = v26 & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD*)(v2 + 8) = v7 | 1;
        LABEL_66:
          if (v7 <= 0xFF) {
            v31 = 1 << (v7 >> 3);
            v32 = v3 + 16 * (v7 >> 3) + 72;
            if ((*(_DWORD*)v3 & v31) != 0) {
              v33 = *(_QWORD*)(v32 + 16);
              if (v33 >= *(_QWORD*)(v3 + 24)) {
              LABEL_89:
                *(_QWORD*)(v32 + 16) = v2;
                *(_QWORD*)(v33 + 24) = v2;
                *(_QWORD*)(v2 + 16) = v33;
                *(_QWORD*)(v2 + 24) = v32;
                goto LABEL_132;
              }
              result = NvOsBreakPoint_plt(
                  "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                  "hos\\utils\\nvos\\hos\\dlmalloc.c",
                  5729, 0);
            }
            else {
              *(_DWORD*)v3 |= v31;
            }
            v33 = v32;
            goto LABEL_89;
          }
          if (v7 >> 24 != 0) {
            v34 = 31;
          }
          else {
            v37 = (((unsigned int)(v7 >> 8) + 1048320) >> 16) & 8;
            v38 = (unsigned int)(v7 >> 8) << v37;
            v39 =
                (v38 << (((v38 + 520192) >> 16) & 4)
                     << ((((v38 << (((v38 + 520192) >> 16) & 4)) + 245760) >>
                          16) &
                         2) >>
                 15) -
                (((v38 + 520192) >> 16) & 4 | v37 |
                 (((v38 << (((v38 + 520192) >> 16) & 4)) + 245760) >> 16) & 2);
            v34 = ((v7 >> ((unsigned __int8)v39 + 21)) & 1 | (2 * v39)) + 28;
          }
          *(_QWORD*)(v2 + 32) = 0;
          *(_QWORD*)(v2 + 40) = 0;
          *(_DWORD*)(v2 + 56) = v34;
          v40 = *(_DWORD*)(v3 + 4);
          v41 = (unsigned __int64*)(v3 + 8LL * v34 + 600);
          if ((v40 & (1 << v34)) != 0) {
            v42 = *v41;
            if (v34 == 31) {
              LOBYTE(v43) = 0;
            }
            else {
              v43 = 57 - (v34 >> 1);
            }
            v44 = v7 << v43;
            while (1) {
              v45 = v42;
              if ((*(_QWORD*)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL) == v7) {
                break;
              }
              v46 = v44 >> 63;
              v44 *= 2LL;
              v42 = *(_QWORD*)(v42 + 32 + 8 * v46);
              if (v42 == 0) {
                v47 = (unsigned __int64*)(v45 + 32 + 8 * v46);
                if ((unsigned __int64)v47 >= *(_QWORD*)(v3 + 24)) {
                  *v47 = v2;
                  *(_QWORD*)(v2 + 48) = v45;
                  goto LABEL_91;
                }
                goto LABEL_140;
              }
            }
            v51 = *(_QWORD*)(v3 + 24);
            v52 = *(_QWORD*)(v42 + 16);
            if (v45 >= v51 && v52 >= v51) {
              *(_QWORD*)(v52 + 24) = v2;
              *(_QWORD*)(v45 + 16) = v2;
              *(_QWORD*)(v2 + 16) = v52;
              *(_QWORD*)(v2 + 24) = v45;
              *(_QWORD*)(v2 + 48) = 0;
              v54 = *(_QWORD*)(v3 + 56) - 1LL;
              *(_QWORD*)(v3 + 56) = v54;
              if (v54 != 0) {
                goto LABEL_132;
              }
              goto LABEL_99;
            }
          LABEL_140:
            result = NvOsBreakPoint_plt(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                5734, 0);
            v65 = *(_QWORD*)(v3 + 56) - 1LL;
            *(_QWORD*)(v3 + 56) = v65;
            if (v65 != 0) {
              goto LABEL_132;
            }
          }
          else {
            *(_DWORD*)(v3 + 4) = v40 | (1 << v34);
            *v41 = v2;
            *(_QWORD*)(v2 + 48) = v41;
          LABEL_91:
            *(_QWORD*)(v2 + 16) = v2;
            *(_QWORD*)(v2 + 24) = v2;
            v50 = *(_QWORD*)(v3 + 56) - 1LL;
            *(_QWORD*)(v3 + 56) = v50;
            if (v50 != 0) {
              goto LABEL_132;
            }
          }
        LABEL_99:
          result = dlmalloc_5f34a0_alt1(v3);
        LABEL_132:
          if ((*(_BYTE*)(v3 + 880) & 2) != 0) {
            return nnosUnlockMutex_plt(v3 + 888);
          }
          return result;
        }
        if (v8 == *(_QWORD*)(v3 + 40)) {
          v35 = *(_QWORD*)(v3 + 16);
          *(_QWORD*)(v3 + 40) = v2;
          v36 = v35 + v7;
          *(_QWORD*)(v3 + 16) = v36;
          *(_QWORD*)(v2 + 8) = v36 | 1;
          if (v2 == *(_QWORD*)(v3 + 32)) {
            *(_QWORD*)(v3 + 32) = 0;
            *(_QWORD*)(v3 + 8) = 0;
          }
          if (v36 > *(_QWORD*)(v3 + 48)) {
            result = dlmalloc_5f3220_alt1(v3, 0);
          }
          goto LABEL_132;
        }
        if (v8 == *(_QWORD*)(v3 + 32)) {
          v48 = *(_QWORD*)(v3 + 8);
          *(_QWORD*)(v3 + 32) = v2;
          v49 = v48 + v7;
          *(_QWORD*)(v3 + 8) = v49;
          *(_QWORD*)(v2 + v49) = v49;
          *(_QWORD*)(v2 + 8) = v49 | 1;
          goto LABEL_132;
        }
        v7 += v26 & 0xFFFFFFFFFFFFFFF8LL;
        if (v26 <= 0xFF) {
          v27 = v26 >> 3;
          v28 = *(_QWORD*)(v8 + 16);
          v29 = *(_QWORD*)(v8 + 24);
          v30 = v3 + 16 * v27 + 72;
          if (v28 == v30 ||
              v28 >= *(_QWORD*)(v3 + 24) && *(_QWORD*)(v28 + 24) == v8) {
            if (v29 == v28) {
              *(_DWORD*)v3 &= ~(1 << v27);
              goto LABEL_130;
            }
            if (v29 == v30 ||
                v29 >= *(_QWORD*)(v3 + 24) && *(_QWORD*)(v29 + 16) == v8) {
              *(_QWORD*)(v28 + 24) = v29;
              *(_QWORD*)(v29 + 16) = v28;
              goto LABEL_130;
            }
          }
        LABEL_64:
          result = NvOsBreakPoint_plt(
              "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
              "hos\\utils\\nvos\\hos\\dlmalloc.c",
              5717, 0);
          goto LABEL_130;
        }
        v55 = *(_QWORD*)(v8 + 48);
        v56 = *(_QWORD**)(v8 + 24);
        if (v56 == (_QWORD*)v8) {
          v58 = (_QWORD*)(v8 + 40);
          v59 = *(_QWORD**)(v8 + 40);
          if (v59 == nullptr) {
            v58 = (_QWORD*)(v8 + 32);
            v59 = *(_QWORD**)(v8 + 32);
            if (v59 == nullptr) {
              v56 = nullptr;
              goto LABEL_111;
            }
          }
          do {
            do {
              v56 = v59;
              v60 = v58;
              v58 = v59 + 5;
              v59 = (_QWORD*)v59[5];
            } while (v59 != nullptr);
            v58 = v56 + 4;
            v59 = (_QWORD*)v56[4];
          } while (v59 != nullptr);
          if ((unsigned __int64)v60 >= *(_QWORD*)(v3 + 24)) {
            *v60 = 0;
            goto LABEL_111;
          }
        }
        else {
          v57 = *(_QWORD*)(v8 + 16);
          if (v57 >= *(_QWORD*)(v3 + 24) && *(_QWORD*)(v57 + 24) == v8 &&
              v56[2] == v8) {
            *(_QWORD*)(v57 + 24) = v56;
            v56[2] = v57;
            goto LABEL_111;
          }
        }
        v67 = *(_QWORD*)(v8 + 48);
        v71 = v56;
        result = NvOsBreakPoint_plt(
            "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
            "hos\\utils\\nvos\\hos\\dlmalloc.c",
            5717, 0);
        v55 = v67;
        v56 = v71;
      LABEL_111:
        if (v55 == 0) {
          goto LABEL_130;
        }
        v61 = *(unsigned int*)(v8 + 56);
        if (v8 == *(_QWORD*)(v3 + 600 + 8 * v61)) {
          *(_QWORD*)(v3 + 600 + 8 * v61) = v56;
          if (v56 == nullptr) {
            *(_DWORD*)(v3 + 4) &= ~(1 << v61);
            goto LABEL_130;
          }
        }
        else if (v55 < *(_QWORD*)(v3 + 24)) {
          v69 = v55;
          v73 = v56;
          result = NvOsBreakPoint_plt(
              "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
              "hos\\utils\\nvos\\hos\\dlmalloc.c",
              5717, 0);
          v55 = v69;
          v56 = v73;
          if (v73 == nullptr) {
            goto LABEL_130;
          }
        }
        else if (*(_QWORD*)(v55 + 32) == v8) {
          *(_QWORD*)(v55 + 32) = v56;
          if (v56 == nullptr) {
            goto LABEL_130;
          }
        }
        else {
          *(_QWORD*)(v55 + 40) = v56;
          if (v56 == nullptr) {
            goto LABEL_130;
          }
        }
        v62 = *(_QWORD*)(v3 + 24);
        if ((unsigned __int64)v56 < v62) {
          goto LABEL_64;
        }
        v56[6] = v55;
        v63 = *(_QWORD*)(v8 + 32);
        if (v63 == 0) {
          goto LABEL_125;
        }
        if (v63 >= v62) {
          v56[4] = v63;
          *(_QWORD*)(v63 + 48) = v56;
        LABEL_125:
          v64 = *(_QWORD*)(v8 + 40);
          if (v64 == 0) {
            goto LABEL_130;
          }
        LABEL_126:
          if (v64 >= *(_QWORD*)(v3 + 24)) {
            v56[5] = v64;
            *(_QWORD*)(v64 + 48) = v56;
            goto LABEL_130;
          }
          goto LABEL_64;
        }
        v75 = v56;
        result = NvOsBreakPoint_plt(
            "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
            "hos\\utils\\nvos\\hos\\dlmalloc.c",
            5717, 0);
        v56 = v75;
        v64 = *(_QWORD*)(v8 + 40);
        if (v64 != 0) {
          goto LABEL_126;
        }
      LABEL_130:
        *(_QWORD*)(v2 + v7) = v7;
        *(_QWORD*)(v2 + 8) = v7 | 1;
        if (v2 == *(_QWORD*)(v3 + 32)) {
          *(_QWORD*)(v3 + 8) = v7;
          goto LABEL_132;
        }
        goto LABEL_66;
      }
    }
  LABEL_137:
    result = NvOsBreakPoint_plt(
        "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
        "hos\\utils\\nvos\\hos\\dlmalloc.c",
        5743, 0);
    goto LABEL_132;
  }
  return result;
}

__int64 dlmalloc_5f3220(_QWORD* a1, unsigned __int64 a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (SdkData_f72e70 != 0) {
    if (a2 <= 0xFFFFFFFFFFFFFF7FLL) {
      goto LABEL_8;
    }
    return 0;
  }
  v3 = a2;
  nnosLockMutex_plt(&SdkData_ea40a0);
  if (SdkData_f72e70 == 0) {
    SdkData_f72e78 = 4096;
    SdkData_f72e80 = 0x200000;
    SdkData_f72e88 = 0x200000;
    SdkData_f72e90 = 0x200000;
    SdkData_f72e98 = 7;
    SdkData_f72e70 = (unsigned __int64)&v20 ^ 0x55555558;
    nnosUnlockMutex_plt(&SdkData_ea40a0);
    a2 = v3;
    if (v3 <= 0xFFFFFFFFFFFFFF7FLL) {
      goto LABEL_8;
    }
    return 0;
  }
  nnosUnlockMutex_plt(&SdkData_ea40a0);
  a2 = v3;
  if (v3 > 0xFFFFFFFFFFFFFF7FLL) {
    return 0;
  }
LABEL_8:
  v4 = a1[5];
  if (v4 == 0) {
    return 0;
  }
  v5 = a1[2];
  if (v5 > a2 + 80) {
    v6 =
        ((v5 - a2 + SdkData_f72e80 - 81) / SdkData_f72e80 - 1) * SdkData_f72e80;
    v7 = a1 + 115;
    v8 = a1 + 115;
    do {
      if (v4 >= *v8 && v4 < *v8 + v8[1]) {
        break;
      }
      v8 = (unsigned __int64*)v8[2];
    } while (v8 != nullptr);
    if ((v8[3] & 9) == 1) {
      v9 = v8[1];
      v10 = v9 - v6;
      if (v9 >= v6) {
        v11 = *v8;
        v12 = *v8 + v9;
        while ((unsigned __int64)v7 < v11 || (unsigned __int64)v7 >= v12) {
          v7 = (_QWORD*)v7[2];
          if (v7 == nullptr) {
            if (v6 == 0) {
              goto LABEL_24;
            }
            if ((unsigned int)nvidia_5f5150(a1[119], v11 + v10, v6) != 0) {
              break;
            }
            v14 = a1[2] - v6;
            v8[1] -= v6;
            a1[107] -= v6;
            v15 = a1[5];
            v16 = (-16 - (_BYTE)v15) & 0xF;
            v17 = v15 + v16;
            v18 = v14 - v16;
            a1[2] = v18;
            *(_QWORD*)(v17 + 8) = v18 | 1;
            *(_QWORD*)(v15 + v14 + 8) = 80;
            v19 = SdkData_f72e90;
            a1[5] = v17;
            a1[6] = v19;
            if (v6 + dlmalloc_5f34a0_alt1(a1) == 0) {
              goto LABEL_25;
            }
            return 1;
          }
        }
      }
    }
  }
  v6 = 0;
LABEL_24:
  if (v6 + dlmalloc_5f34a0_alt1(a1) == 0) {
  LABEL_25:
    if (a1[2] > a1[6]) {
      a1[6] = -1;
      return 0;
    }
    return 0;
  }
  return 1;
}

__int64 dlmalloc_5f34a0(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  unsigned int v5;
  __int64 result;
  __int64 v7;
  _QWORD* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned __int64* v30;
  int v31;
  unsigned __int64 v32;
  int v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;

  v1 = *(_QWORD*)(a1 + 936);
  if (v1 != 0) {
    v3 = (_QWORD*)(a1 + 920);
    v4 = a1 + 600;
    v5 = 0;
    v45 = a1 + 600;
    v46 = 0;
    while (1) {
      v8 = (_QWORD*)v1;
      v9 = *(_DWORD*)(v1 + 24);
      v1 = *(_QWORD*)(v1 + 16);
      if ((v9 & 9) == 1) {
        v10 = *v8;
        v11 = v8[1];
        v12 = *v8 + ((-16 - (unsigned __int8)*v8) & 0xF);
        v13 = *(_QWORD*)(v12 + 8);
        v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        if ((v13 & 3) == 1 &&
            v12 + (v13 & 0xFFFFFFFFFFFFFFF8LL) >= *v8 + v11 - 80) {
          break;
        }
      }
    LABEL_9:
      v3 = v8;
    LABEL_10:
      ++v5;
      if (v1 == 0) {
        goto LABEL_4;
      }
    }
    v47 = v3;
    if (v12 == *(_QWORD*)(a1 + 32)) {
      *(_QWORD*)(a1 + 32) = 0;
      *(_QWORD*)(a1 + 8) = 0;
      goto LABEL_46;
    }
    v16 = *(_QWORD*)(v12 + 48);
    v17 = *(_QWORD**)(v12 + 24);
    if (v17 == (_QWORD*)v12) {
      v19 = (_QWORD*)(v12 + 40);
      v20 = *(_QWORD**)(v12 + 40);
      if (v20 == nullptr) {
        v19 = (_QWORD*)(v12 + 32);
        v20 = *(_QWORD**)(v12 + 32);
        if (v20 == nullptr) {
          v17 = nullptr;
          goto LABEL_30;
        }
      }
      do {
        do {
          v17 = v20;
          v21 = v19;
          v19 = v20 + 5;
          v20 = (_QWORD*)v20[5];
        } while (v20 != nullptr);
        v19 = v17 + 4;
        v20 = (_QWORD*)v17[4];
      } while (v20 != nullptr);
      if ((unsigned __int64)v21 >= *(_QWORD*)(a1 + 24)) {
        *v21 = 0;
        goto LABEL_30;
      }
    }
    else {
      v18 = *(_QWORD*)(v12 + 16);
      if (v18 >= *(_QWORD*)(a1 + 24) && *(_QWORD*)(v18 + 24) == v12 &&
          v17[2] == v12) {
        *(_QWORD*)(v18 + 24) = v17;
        v17[2] = v18;
        goto LABEL_30;
      }
    }
    v43 = *v8;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4305, 0);
    v10 = v43;
    v4 = v45;
  LABEL_30:
    if (v16 == 0) {
      goto LABEL_46;
    }
    v22 = *(unsigned int*)(v12 + 56);
    if (v12 == *(_QWORD*)(v4 + 8 * v22)) {
      *(_QWORD*)(v4 + 8 * v22) = v17;
      if (v17 == nullptr) {
        *(_DWORD*)(a1 + 4) &= ~(1 << v22);
        goto LABEL_46;
      }
    }
    else if (v16 < *(_QWORD*)(a1 + 24)) {
      v44 = v10;
      NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4305, 0);
      v10 = v44;
      if (v17 == nullptr) {
        goto LABEL_46;
      }
    }
    else if (*(_QWORD*)(v16 + 32) == v12) {
      *(_QWORD*)(v16 + 32) = v17;
      if (v17 == nullptr) {
        goto LABEL_46;
      }
    }
    else {
      *(_QWORD*)(v16 + 40) = v17;
      if (v17 == nullptr) {
        goto LABEL_46;
      }
    }
    v23 = *(_QWORD*)(a1 + 24);
    if ((unsigned __int64)v17 < v23) {
    LABEL_72:
      v41 = v10;
      NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4305, 0);
      v10 = v41;
      goto LABEL_46;
    }
    v17[6] = v16;
    v24 = *(_QWORD*)(v12 + 32);
    if (v24 == 0) {
      goto LABEL_43;
    }
    if (v24 >= v23) {
      v17[4] = v24;
      *(_QWORD*)(v24 + 48) = v17;
    LABEL_43:
      v25 = *(_QWORD*)(v12 + 40);
      if (v25 == 0) {
        goto LABEL_46;
      }
    LABEL_44:
      if (v25 >= *(_QWORD*)(a1 + 24)) {
        v17[5] = v25;
        *(_QWORD*)(v25 + 48) = v17;
        goto LABEL_46;
      }
      goto LABEL_72;
    }
    v42 = v10;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4305, 0);
    v10 = v42;
    v25 = *(_QWORD*)(v12 + 40);
    if (v25 != 0) {
      goto LABEL_44;
    }
  LABEL_46:
    if ((unsigned int)nvidia_5f5150(*(_QWORD*)(a1 + 952), v10, v11) != 0) {
      if (v13 >= 0x100) {
        v4 = v45;
        if (v13 >> 24 != 0) {
          v26 = 31;
        }
        else {
          v27 = (((unsigned int)(v13 >> 8) + 1048320) >> 16) & 8;
          v28 = (unsigned int)(v13 >> 8) << v27;
          v29 = (v28 << (((v28 + 520192) >> 16) & 4)
                     << ((((v28 << (((v28 + 520192) >> 16) & 4)) + 245760) >>
                          16) &
                         2) >>
                 15) -
                (((v28 + 520192) >> 16) & 4 | v27 |
                 (((v28 << (((v28 + 520192) >> 16) & 4)) + 245760) >> 16) & 2);
          v26 = ((v14 >> ((unsigned __int8)v29 + 21)) & 1 | (2 * v29)) + 28;
        }
      }
      else {
        v4 = v45;
        v26 = 0;
      }
      *(_QWORD*)(v12 + 32) = 0;
      *(_QWORD*)(v12 + 40) = 0;
      v30 = (unsigned __int64*)(v4 + 8LL * v26);
      *(_DWORD*)(v12 + 56) = v26;
      v31 = *(_DWORD*)(a1 + 4);
      if ((v31 & (1 << v26)) != 0) {
        v32 = *v30;
        if (v26 == 31) {
          LOBYTE(v33) = 0;
        }
        else {
          v33 = 57 - (v26 >> 1);
        }
        v34 = v14 << v33;
        while (1) {
          v35 = v32;
          if ((*(_QWORD*)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL) == v14) {
            break;
          }
          v36 = v34 >> 63;
          v34 *= 2LL;
          v32 = *(_QWORD*)(v32 + 32 + 8 * v36);
          if (v32 == 0) {
            v37 = (unsigned __int64*)(v35 + 32 + 8 * v36);
            if ((unsigned __int64)v37 >= *(_QWORD*)(a1 + 24)) {
              *v37 = v12;
              *(_QWORD*)(v12 + 48) = v35;
              goto LABEL_63;
            }
          LABEL_8:
            NvOsBreakPoint_plt(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                4315, 0);
            v4 = v45;
            goto LABEL_9;
          }
        }
        v38 = *(_QWORD*)(a1 + 24);
        v39 = *(_QWORD*)(v35 + 16);
        if (v35 < v38 || v39 < v38) {
          goto LABEL_8;
        }
        *(_QWORD*)(v39 + 24) = v12;
        *(_QWORD*)(v35 + 16) = v12;
        v3 = v8;
        *(_QWORD*)(v12 + 16) = v39;
        *(_QWORD*)(v12 + 24) = v35;
        *(_QWORD*)(v12 + 48) = 0;
      }
      else {
        *(_DWORD*)(a1 + 4) = v31 | (1 << v26);
        *v30 = v12;
        *(_QWORD*)(v12 + 48) = v30;
      LABEL_63:
        v3 = v8;
        *(_QWORD*)(v12 + 16) = v12;
        *(_QWORD*)(v12 + 24) = v12;
      }
    }
    else {
      v4 = v45;
      v3 = v47;
      v47[2] = v1;
      v46 += v11;
      *(_QWORD*)(a1 + 856) -= v11;
    }
    goto LABEL_10;
  }
  v5 = 0;
  v46 = 0;
LABEL_4:
  result = v46;
  if (v5 <= 0xFFF) {
    v7 = 4095;
  }
  else {
    v7 = v5;
  }
  *(_QWORD*)(a1 + 56) = v7;
  return result;
}

__int64 dlmalloc_5f3930(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result;
  __int64 v6;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;

  if (a2 == 0) {
    return dlmalloc_5f1580(a1, a3);
  }
  if (a3 > 0xFFFFFFFFFFFFFF7FLL) {
    return 0;
  }
  v6 = a2 - 16;
  if (a3 >= 0x17) {
    v8 = (a3 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else {
    v8 = 32;
  }
  if ((*(_BYTE*)(a1 + 880) & 2) != 0) {
    nnosLockMutex_plt(a1 + 888);
  }
  v9 = dlmalloc_5f3a80(a1, v6, v8);
  if ((*(_BYTE*)(a1 + 880) & 2) != 0) {
    nnosUnlockMutex_plt(a1 + 888);
  }
  if (v9 != 0) {
    return v9 + 16;
  }
  result = dlmalloc_5f1580(a1, a3);
  if (result != 0) {
    v10 = -8;
    if ((*(_QWORD*)(a2 - 8) & 3LL) == 0) {
      v10 = -16;
    }
    v11 = v10 + (*(_QWORD*)(a2 - 8) & 0xFFFFFFFFFFFFFFF8LL);
    if (v11 >= a3) {
      v12 = a3;
    }
    else {
      v12 = v11;
    }
    v13 = result;
    memcpy_plt(result, a2, v12);
    dlmalloc_5f29a0(a1, a2);
    return v13;
  }
  return result;
}

__int64 dlmalloc_5f4190(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = result;
  if (SdkData_f72e70 != 0) {
    if ((*(_BYTE*)(result + 880) & 2) == 0) {
      return result;
    }
  }
  else {
    nnosLockMutex_plt(&SdkData_ea40a0);
    if (SdkData_f72e70 != 0) {
      result = nnosUnlockMutex_plt(&SdkData_ea40a0);
      if ((*(_BYTE*)(v1 + 880) & 2) == 0) {
        return result;
      }
    }
    else {
      SdkData_f72e78 = 4096;
      SdkData_f72e80 = 0x200000;
      SdkData_f72e88 = 0x200000;
      SdkData_f72e90 = 0x200000;
      SdkData_f72e98 = 7;
      SdkData_f72e70 = (unsigned __int64)&v2 ^ 0x55555558;
      result = nnosUnlockMutex_plt(&SdkData_ea40a0);
      if ((*(_BYTE*)(v1 + 880) & 2) == 0) {
        return result;
      }
    }
  }
  result = nnosLockMutex_plt(v1 + 888);
  if ((*(_BYTE*)(v1 + 880) & 2) != 0) {
    return nnosUnlockMutex_plt(v1 + 888);
  }
  return result;
}

__int64 dlmalloc_5f4280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned __int64* v37;
  unsigned __int64 v38;
  int v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  _QWORD* v55;

  v4 = a2 + ((-16 - (_BYTE)a2) & 0xF);
  v5 = a3 + ((-16 - (_BYTE)a3) & 0xF);
  *(_QWORD*)(v4 + 8) = a4 | 3;
  v6 = v4 + a4;
  v7 = v5 - (v4 + a4);
  if (v5 == *(_QWORD*)(a1 + 40)) {
    v15 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 40) = v6;
    v16 = v15 + v7;
    *(_QWORD*)(a1 + 16) = v16;
    *(_QWORD*)(v6 + 8) = v16 | 1;
    return v4 + 16;
  }
  if (v5 == *(_QWORD*)(a1 + 32)) {
    v17 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 32) = v6;
    v18 = v17 + v7;
    *(_QWORD*)(a1 + 8) = v18;
    *(_QWORD*)(v6 + v18) = v18;
    *(_QWORD*)(v6 + 8) = v18 | 1;
    return v4 + 16;
  }
  v8 = *(_QWORD*)(v5 + 8);
  if ((v8 & 3) == 1) {
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if (v8 <= 0xFF) {
      v10 = v8 >> 3;
      v11 = *(_QWORD*)(v5 + 16);
      v12 = *(_QWORD*)(v5 + 24);
      v13 = a1 + 16 * v10 + 72;
      if (v11 == v13 ||
          v11 >= *(_QWORD*)(a1 + 24) && *(_QWORD*)(v11 + 24) == v5) {
        if (v12 == v11) {
          *(_DWORD*)a1 &= ~(1 << v10);
          goto LABEL_44;
        }
        if (v12 == v13 ||
            v12 >= *(_QWORD*)(a1 + 24) && *(_QWORD*)(v12 + 16) == v5) {
          *(_QWORD*)(v11 + 24) = v12;
          *(_QWORD*)(v12 + 16) = v11;
          goto LABEL_44;
        }
      }
      goto LABEL_11;
    }
    v19 = *(_QWORD*)(v5 + 48);
    v20 = *(_QWORD**)(v5 + 24);
    if (v20 == (_QWORD*)v5) {
      v22 = (_QWORD*)(v5 + 40);
      v23 = *(_QWORD**)(v5 + 40);
      if (v23 == nullptr) {
        v22 = (_QWORD*)(v5 + 32);
        v23 = *(_QWORD**)(v5 + 32);
        if (v23 == nullptr) {
          v20 = nullptr;
          goto LABEL_25;
        }
      }
      do {
        do {
          v20 = v23;
          v24 = v22;
          v22 = v23 + 5;
          v23 = (_QWORD*)v23[5];
        } while (v23 != nullptr);
        v22 = v20 + 4;
        v23 = (_QWORD*)v20[4];
      } while (v23 != nullptr);
      if ((unsigned __int64)v24 >= *(_QWORD*)(a1 + 24)) {
        *v24 = 0;
        goto LABEL_25;
      }
    }
    else {
      v21 = *(_QWORD*)(v5 + 16);
      if (v21 >= *(_QWORD*)(a1 + 24) && *(_QWORD*)(v21 + 24) == v5 &&
          v20[2] == v5) {
        *(_QWORD*)(v21 + 24) = v20;
        v20[2] = v21;
        goto LABEL_25;
      }
    }
    v51 = *(_QWORD*)(v5 + 48);
    v53 = v20;
    v48 = a1;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4002, 0);
    v19 = v51;
    v20 = v53;
    a1 = v48;
  LABEL_25:
    if (v19 == 0) {
      goto LABEL_44;
    }
    v25 = *(unsigned int*)(v5 + 56);
    if (v5 == *(_QWORD*)(a1 + 600 + 8 * v25)) {
      *(_QWORD*)(a1 + 600 + 8 * v25) = v20;
      if (v20 == nullptr) {
        *(_DWORD*)(a1 + 4) &= ~(1 << v25);
        goto LABEL_44;
      }
    }
    else if (v19 < *(_QWORD*)(a1 + 24)) {
      v52 = v19;
      v54 = v20;
      v49 = a1;
      NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4002, 0);
      v19 = v52;
      v20 = v54;
      a1 = v49;
      if (v54 == nullptr) {
        goto LABEL_44;
      }
    }
    else if (*(_QWORD*)(v19 + 32) == v5) {
      *(_QWORD*)(v19 + 32) = v20;
      if (v20 == nullptr) {
        goto LABEL_44;
      }
    }
    else {
      *(_QWORD*)(v19 + 40) = v20;
      if (v20 == nullptr) {
        goto LABEL_44;
      }
    }
    v26 = *(_QWORD*)(a1 + 24);
    if ((unsigned __int64)v20 < v26) {
    LABEL_11:
      v14 = a1;
      NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4002, 0);
      a1 = v14;
    LABEL_44:
      v5 += v9;
      v7 += v9;
      v8 = *(_QWORD*)(v5 + 8);
      goto LABEL_45;
    }
    v20[6] = v19;
    v27 = *(_QWORD*)(v5 + 32);
    if (v27 != 0) {
      if (v27 < v26) {
        v55 = v20;
        v50 = a1;
        NvOsBreakPoint_plt(
            "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
            "hos\\utils\\nvos\\hos\\dlmalloc.c",
            4002, 0);
        v20 = v55;
        a1 = v50;
        v28 = *(_QWORD*)(v5 + 40);
        if (v28 == 0) {
          goto LABEL_44;
        }
      LABEL_40:
        if (v28 >= *(_QWORD*)(a1 + 24)) {
          v20[5] = v28;
          *(_QWORD*)(v28 + 48) = v20;
          goto LABEL_44;
        }
        goto LABEL_11;
      }
      v20[4] = v27;
      *(_QWORD*)(v27 + 48) = v20;
    }
    v28 = *(_QWORD*)(v5 + 40);
    if (v28 == 0) {
      goto LABEL_44;
    }
    goto LABEL_40;
  }
LABEL_45:
  *(_QWORD*)(v6 + v7) = v7;
  *(_QWORD*)(v5 + 8) = v8 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD*)(v6 + 8) = v7 | 1;
  if (v7 <= 0xFF) {
    v29 = 1 << (v7 >> 3);
    v30 = a1 + 16 * (v7 >> 3) + 72;
    if ((*(_DWORD*)a1 & v29) != 0) {
      v31 = *(_QWORD*)(v30 + 16);
      if (v31 >= *(_QWORD*)(a1 + 24)) {
      LABEL_63:
        *(_QWORD*)(v30 + 16) = v6;
        *(_QWORD*)(v31 + 24) = v6;
        *(_QWORD*)(v6 + 16) = v31;
        *(_QWORD*)(v6 + 24) = v30;
        return v4 + 16;
      }
      NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4007, 0);
    }
    else {
      *(_DWORD*)a1 |= v29;
    }
    v31 = v30;
    goto LABEL_63;
  }
  if (v7 >> 24 != 0) {
    v32 = 31;
  }
  else {
    v33 = (((unsigned int)(v7 >> 8) + 1048320) >> 16) & 8;
    v34 = (unsigned int)(v7 >> 8) << v33;
    v35 = (v34 << (((v34 + 520192) >> 16) & 4)
               << ((((v34 << (((v34 + 520192) >> 16) & 4)) + 245760) >> 16) &
                   2) >>
           15) -
          (((v34 + 520192) >> 16) & 4 | v33 |
           (((v34 << (((v34 + 520192) >> 16) & 4)) + 245760) >> 16) & 2);
    v32 = ((v7 >> ((unsigned __int8)v35 + 21)) & 1 | (2 * v35)) + 28;
  }
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 56) = v32;
  v36 = *(_DWORD*)(a1 + 4);
  v37 = (unsigned __int64*)(a1 + 8LL * v32 + 600);
  if ((v36 & (1 << v32)) != 0) {
    v38 = *v37;
    if (v32 == 31) {
      LOBYTE(v39) = 0;
    }
    else {
      v39 = 57 - (v32 >> 1);
    }
    v40 = v7 << v39;
    while (1) {
      v41 = v38;
      if ((*(_QWORD*)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) == v7) {
        break;
      }
      v42 = v40 >> 63;
      v40 *= 2LL;
      v38 = *(_QWORD*)(v38 + 32 + 8 * v42);
      if (v38 == 0) {
        v43 = (unsigned __int64*)(v41 + 32 + 8 * v42);
        if ((unsigned __int64)v43 >= *(_QWORD*)(a1 + 24)) {
          *v43 = v6;
          *(_QWORD*)(v6 + 48) = v41;
          goto LABEL_65;
        }
        goto LABEL_75;
      }
    }
    v44 = *(_QWORD*)(a1 + 24);
    v45 = *(_QWORD*)(v38 + 16);
    if (v41 >= v44 && v45 >= v44) {
      *(_QWORD*)(v45 + 24) = v6;
      *(_QWORD*)(v41 + 16) = v6;
      *(_QWORD*)(v6 + 16) = v45;
      *(_QWORD*)(v6 + 24) = v41;
      *(_QWORD*)(v6 + 48) = 0;
      return v4 + 16;
    }
  LABEL_75:
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4007, 0);
  }
  else {
    *(_DWORD*)(a1 + 4) = v36 | (1 << v32);
    *v37 = v6;
    *(_QWORD*)(v6 + 48) = v37;
  LABEL_65:
    *(_QWORD*)(v6 + 16) = v6;
    *(_QWORD*)(v6 + 24) = v6;
  }
  return v4 + 16;
}

__int64 dlmalloc_5f47a0(__int64 result, unsigned __int64 a2,
                        unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  int v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned __int64* v47;
  unsigned __int64 v48;
  int v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v59;
  _QWORD* v60;
  unsigned __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  _QWORD* v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  _QWORD* v94;
  _QWORD* v95;
  _QWORD* v96;
  _QWORD* v97;

  v3 = *(_QWORD*)(a2 + 8);
  v4 = a2 + a3;
  if ((v3 & 1) != 0) {
    goto LABEL_48;
  }
  v5 = *(_QWORD*)a2;
  if ((v3 & 2) == 0) {
    v6 = result;
    v7 = a3 + v5 + 32;
    result = nvidia_5f5150(*(_QWORD*)(result + 952), a2 - v5, v7);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(v6 + 856) -= v7;
    }
    return result;
  }
  v8 = *(_QWORD*)(result + 24);
  a2 -= v5;
  if (a2 < v8) {
    v69 = 4423;
    return NvOsBreakPoint_plt(
        "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
        "hos\\utils\\nvos\\hos\\dlmalloc.c",
        v69, 0);
  }
  a3 += v5;
  if (a2 == *(_QWORD*)(result + 32)) {
    v16 = *(_QWORD*)(v4 + 8);
    if ((~*(_DWORD*)(v4 + 8) & 3LL) == 0) {
      *(_QWORD*)(result + 8) = a3;
      *(_QWORD*)v4 = a3;
      *(_QWORD*)(v4 + 8) = v16 & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD*)(a2 + 8) = a3 | 1;
      return result;
    }
    goto LABEL_48;
  }
  if (v5 <= 0xFF) {
    v9 = v5 >> 3;
    v10 = *(_QWORD*)(a2 + 16);
    v11 = *(_QWORD*)(a2 + 24);
    v12 = result + 16 * v9 + 72;
    if (v10 == v12 || v10 >= v8 && *(_QWORD*)(v10 + 24) == a2) {
      if (v11 == v10) {
        *(_DWORD*)result &= ~(1 << v9);
        goto LABEL_48;
      }
      if (v11 == v12 || v11 >= v8 && *(_QWORD*)(v11 + 16) == a2) {
        *(_QWORD*)(v10 + 24) = v11;
        *(_QWORD*)(v11 + 16) = v10;
        goto LABEL_48;
      }
    }
  LABEL_14:
    v13 = a2;
    v14 = result;
    v15 = a3;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4414, 0);
    a3 = v15;
    result = v14;
    a2 = v13;
    goto LABEL_48;
  }
  v17 = *(_QWORD*)(a2 + 48);
  v18 = *(_QWORD**)(a2 + 24);
  if (v18 == (_QWORD*)a2) {
    v20 = (_QWORD*)(a2 + 40);
    v21 = *(_QWORD**)(a2 + 40);
    if (v21 == nullptr) {
      v20 = (_QWORD*)(a2 + 32);
      v21 = *(_QWORD**)(a2 + 32);
      if (v21 == nullptr) {
        v18 = nullptr;
        goto LABEL_29;
      }
    }
    do {
      do {
        v18 = v21;
        v22 = v20;
        v20 = v21 + 5;
        v21 = (_QWORD*)v21[5];
      } while (v21 != nullptr);
      v20 = v18 + 4;
      v21 = (_QWORD*)v18[4];
    } while (v21 != nullptr);
    if ((unsigned __int64)v22 >= v8) {
      *v22 = 0;
      goto LABEL_29;
    }
  LABEL_127:
    v88 = *(_QWORD*)(a2 + 48);
    v92 = v18;
    v70 = a2;
    v71 = result;
    v72 = a3;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4414, 0);
    v17 = v88;
    v18 = v92;
    a3 = v72;
    result = v71;
    a2 = v70;
    goto LABEL_29;
  }
  v19 = *(_QWORD*)(a2 + 16);
  if (v19 < v8 || *(_QWORD*)(v19 + 24) != a2 || v18[2] != a2) {
    goto LABEL_127;
  }
  *(_QWORD*)(v19 + 24) = v18;
  v18[2] = v19;
LABEL_29:
  if (v17 == 0) {
    goto LABEL_48;
  }
  v23 = *(unsigned int*)(a2 + 56);
  if (a2 == *(_QWORD*)(result + 600 + 8 * v23)) {
    *(_QWORD*)(result + 600 + 8 * v23) = v18;
    if (v18 == nullptr) {
      *(_DWORD*)(result + 4) &= ~(1 << v23);
      goto LABEL_48;
    }
  }
  else if (v17 < *(_QWORD*)(result + 24)) {
    v90 = v17;
    v94 = v18;
    v76 = a2;
    v77 = result;
    v78 = a3;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4414, 0);
    v17 = v90;
    v18 = v94;
    a3 = v78;
    result = v77;
    a2 = v76;
    if (v94 == nullptr) {
      goto LABEL_48;
    }
  }
  else if (*(_QWORD*)(v17 + 32) == a2) {
    *(_QWORD*)(v17 + 32) = v18;
    if (v18 == nullptr) {
      goto LABEL_48;
    }
  }
  else {
    *(_QWORD*)(v17 + 40) = v18;
    if (v18 == nullptr) {
      goto LABEL_48;
    }
  }
  v24 = *(_QWORD*)(result + 24);
  if ((unsigned __int64)v18 < v24) {
    goto LABEL_14;
  }
  v18[6] = v17;
  v25 = *(_QWORD*)(a2 + 32);
  if (v25 == 0) {
    goto LABEL_43;
  }
  if (v25 >= v24) {
    v18[4] = v25;
    *(_QWORD*)(v25 + 48) = v18;
  LABEL_43:
    v26 = *(_QWORD*)(a2 + 40);
    if (v26 == 0) {
      goto LABEL_48;
    }
  LABEL_44:
    if (v26 >= *(_QWORD*)(result + 24)) {
      v18[5] = v26;
      *(_QWORD*)(v26 + 48) = v18;
      goto LABEL_48;
    }
    goto LABEL_14;
  }
  v82 = a2;
  v96 = v18;
  v83 = result;
  v84 = a3;
  NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                     "hos\\utils\\nvos\\hos\\dlmalloc.c",
                     4414, 0);
  v18 = v96;
  a3 = v84;
  result = v83;
  a2 = v82;
  v26 = *(_QWORD*)(v82 + 40);
  if (v26 != 0) {
    goto LABEL_44;
  }
LABEL_48:
  v27 = *(_QWORD*)(result + 24);
  if (v4 < v27) {
    v69 = 4462;
    return NvOsBreakPoint_plt(
        "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
        "hos\\utils\\nvos\\hos\\dlmalloc.c",
        v69, 0);
  }
  v28 = *(_QWORD*)(v4 + 8);
  if ((v28 & 2) == 0) {
    if (v4 == *(_QWORD*)(result + 40)) {
      v41 = *(_QWORD*)(result + 16);
      *(_QWORD*)(result + 40) = a2;
      v42 = v41 + a3;
      *(_QWORD*)(result + 16) = v42;
      *(_QWORD*)(a2 + 8) = v42 | 1;
      if (a2 == *(_QWORD*)(result + 32)) {
        *(_QWORD*)(result + 32) = 0;
        *(_QWORD*)(result + 8) = 0;
      }
      return result;
    }
    if (v4 == *(_QWORD*)(result + 32)) {
      v54 = *(_QWORD*)(result + 8);
      *(_QWORD*)(result + 32) = a2;
      v55 = v54 + a3;
      *(_QWORD*)(result + 8) = v55;
      *(_QWORD*)(a2 + v55) = v55;
      *(_QWORD*)(a2 + 8) = v55 | 1;
      return result;
    }
    a3 += v28 & 0xFFFFFFFFFFFFFFF8LL;
    if (v28 <= 0xFF) {
      v29 = v28 >> 3;
      v30 = *(_QWORD*)(v4 + 16);
      v31 = *(_QWORD*)(v4 + 24);
      v32 = result + 16 * v29 + 72;
      if (v30 == v32 || v30 >= v27 && *(_QWORD*)(v30 + 24) == v4) {
        if (v31 == v30) {
          *(_DWORD*)result &= ~(1 << v29);
          goto LABEL_121;
        }
        if (v31 == v32 || v31 >= v27 && *(_QWORD*)(v31 + 16) == v4) {
          *(_QWORD*)(v30 + 24) = v31;
          *(_QWORD*)(v31 + 16) = v30;
          goto LABEL_121;
        }
      }
    LABEL_59:
      v33 = a2;
      v34 = result;
      v35 = a3;
      NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4448, 0);
      a3 = v35;
      result = v34;
      a2 = v33;
      goto LABEL_121;
    }
    v59 = *(_QWORD*)(v4 + 48);
    v60 = *(_QWORD**)(v4 + 24);
    if (v60 == (_QWORD*)v4) {
      v62 = (_QWORD*)(v4 + 40);
      v63 = *(_QWORD**)(v4 + 40);
      if (v63 == nullptr) {
        v62 = (_QWORD*)(v4 + 32);
        v63 = *(_QWORD**)(v4 + 32);
        if (v63 == nullptr) {
          v60 = nullptr;
          goto LABEL_102;
        }
      }
      do {
        do {
          v60 = v63;
          v64 = v62;
          v62 = v63 + 5;
          v63 = (_QWORD*)v63[5];
        } while (v63 != nullptr);
        v62 = v60 + 4;
        v63 = (_QWORD*)v60[4];
      } while (v63 != nullptr);
      if ((unsigned __int64)v64 >= v27) {
        *v64 = 0;
        goto LABEL_102;
      }
    }
    else {
      v61 = *(_QWORD*)(v4 + 16);
      if (v61 >= v27 && *(_QWORD*)(v61 + 24) == v4 && v60[2] == v4) {
        *(_QWORD*)(v61 + 24) = v60;
        v60[2] = v61;
        goto LABEL_102;
      }
    }
    v89 = *(_QWORD*)(v4 + 48);
    v93 = v60;
    v73 = a2;
    v74 = result;
    v75 = a3;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4448, 0);
    v59 = v89;
    v60 = v93;
    a3 = v75;
    result = v74;
    a2 = v73;
  LABEL_102:
    if (v59 == 0) {
      goto LABEL_121;
    }
    v65 = *(unsigned int*)(v4 + 56);
    if (v4 == *(_QWORD*)(result + 600 + 8 * v65)) {
      *(_QWORD*)(result + 600 + 8 * v65) = v60;
      if (v60 == nullptr) {
        *(_DWORD*)(result + 4) &= ~(1 << v65);
        goto LABEL_121;
      }
    }
    else if (v59 < *(_QWORD*)(result + 24)) {
      v91 = v59;
      v95 = v60;
      v79 = a2;
      v80 = result;
      v81 = a3;
      NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4448, 0);
      v59 = v91;
      v60 = v95;
      a3 = v81;
      result = v80;
      a2 = v79;
      if (v95 == nullptr) {
        goto LABEL_121;
      }
    }
    else if (*(_QWORD*)(v59 + 32) == v4) {
      *(_QWORD*)(v59 + 32) = v60;
      if (v60 == nullptr) {
        goto LABEL_121;
      }
    }
    else {
      *(_QWORD*)(v59 + 40) = v60;
      if (v60 == nullptr) {
        goto LABEL_121;
      }
    }
    v66 = *(_QWORD*)(result + 24);
    if ((unsigned __int64)v60 < v66) {
      goto LABEL_59;
    }
    v60[6] = v59;
    v67 = *(_QWORD*)(v4 + 32);
    if (v67 == 0) {
      goto LABEL_116;
    }
    if (v67 >= v66) {
      v60[4] = v67;
      *(_QWORD*)(v67 + 48) = v60;
    LABEL_116:
      v68 = *(_QWORD*)(v4 + 40);
      if (v68 == 0) {
        goto LABEL_121;
      }
    LABEL_117:
      if (v68 >= *(_QWORD*)(result + 24)) {
        v60[5] = v68;
        *(_QWORD*)(v68 + 48) = v60;
        goto LABEL_121;
      }
      goto LABEL_59;
    }
    v85 = a2;
    v97 = v60;
    v86 = result;
    v87 = a3;
    NvOsBreakPoint_plt("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                       "hos\\utils\\nvos\\hos\\dlmalloc.c",
                       4448, 0);
    v60 = v97;
    a3 = v87;
    result = v86;
    a2 = v85;
    v68 = *(_QWORD*)(v4 + 40);
    if (v68 != 0) {
      goto LABEL_117;
    }
  LABEL_121:
    *(_QWORD*)(a2 + a3) = a3;
    *(_QWORD*)(a2 + 8) = a3 | 1;
    if (a2 == *(_QWORD*)(result + 32)) {
      *(_QWORD*)(result + 8) = a3;
      return result;
    }
    goto LABEL_61;
  }
  *(_QWORD*)(a2 + a3) = a3;
  *(_QWORD*)(v4 + 8) = v28 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD*)(a2 + 8) = a3 | 1;
LABEL_61:
  if (a3 <= 0xFF) {
    v36 = 1 << (a3 >> 3);
    v37 = result + 16 * (a3 >> 3) + 72;
    if ((*(_DWORD*)result & v36) != 0) {
      v38 = *(_QWORD*)(result + 16 * (a3 >> 3) + 88);
      if (v38 >= *(_QWORD*)(result + 24)) {
      LABEL_82:
        *(_QWORD*)(v37 + 16) = a2;
        *(_QWORD*)(v38 + 24) = a2;
        *(_QWORD*)(a2 + 16) = v38;
        *(_QWORD*)(a2 + 24) = v37;
        return result;
      }
      v39 = a2;
      result = NvOsBreakPoint_plt(
          "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
          "hos\\utils\\nvos\\hos\\dlmalloc.c",
          4459, 0);
      a2 = v39;
    }
    else {
      *(_DWORD*)result |= v36;
    }
    v38 = v37;
    goto LABEL_82;
  }
  if (a3 >> 24 != 0) {
    v40 = 31;
  }
  else {
    v43 = (((unsigned int)(a3 >> 8) + 1048320) >> 16) & 8;
    v44 = (unsigned int)(a3 >> 8) << v43;
    v45 = (v44 << (((v44 + 520192) >> 16) & 4)
               << ((((v44 << (((v44 + 520192) >> 16) & 4)) + 245760) >> 16) &
                   2) >>
           15) -
          (((v44 + 520192) >> 16) & 4 | v43 |
           (((v44 << (((v44 + 520192) >> 16) & 4)) + 245760) >> 16) & 2);
    v40 = ((a3 >> ((unsigned __int8)v45 + 21)) & 1 | (2 * v45)) + 28;
  }
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_DWORD*)(a2 + 56) = v40;
  v46 = *(_DWORD*)(result + 4);
  v47 = (unsigned __int64*)(result + 8LL * v40 + 600);
  if ((v46 & (1 << v40)) != 0) {
    v48 = *v47;
    if (v40 == 31) {
      LOBYTE(v49) = 0;
    }
    else {
      v49 = 57 - (v40 >> 1);
    }
    v50 = a3 << v49;
    while (1) {
      v51 = v48;
      if ((*(_QWORD*)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL) == a3) {
        break;
      }
      v52 = v50 >> 63;
      v50 *= 2LL;
      v48 = *(_QWORD*)(v48 + 32 + 8 * v52);
      if (v48 == 0) {
        v53 = (_QWORD*)(v51 + 32 + 8 * v52);
        if ((unsigned __int64)v53 >= *(_QWORD*)(result + 24)) {
          *v53 = a2;
          *(_QWORD*)(a2 + 48) = v51;
          goto LABEL_84;
        }
        goto LABEL_129;
      }
    }
    v56 = *(_QWORD*)(result + 24);
    v57 = *(_QWORD*)(v48 + 16);
    if (v51 >= v56 && v57 >= v56) {
      *(_QWORD*)(v57 + 24) = a2;
      *(_QWORD*)(v51 + 16) = a2;
      *(_QWORD*)(a2 + 16) = v57;
      *(_QWORD*)(a2 + 24) = v51;
      *(_QWORD*)(a2 + 48) = 0;
      return result;
    }
  LABEL_129:
    v69 = 4459;
    return NvOsBreakPoint_plt(
        "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
        "hos\\utils\\nvos\\hos\\dlmalloc.c",
        v69, 0);
  }
  *(_DWORD*)(result + 4) = v46 | (1 << v40);
  *v47 = a2;
  *(_QWORD*)(a2 + 48) = v47;
LABEL_84:
  *(_QWORD*)(a2 + 16) = a2;
  *(_QWORD*)(a2 + 24) = a2;
  return result;
}

#pragma GCC visibility pop
