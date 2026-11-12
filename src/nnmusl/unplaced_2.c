#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_b6ac0(__int64, _QWORD*);
__int64 SdkRoutine_b6b60(__int64);
__int64 SdkRoutine_b7120(__int64);
__int64 SdkRoutine_b71a0(__int64);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_os_MemoryAllocatorForThreadLocalInitialized_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nnosAllocateMemoryForThreadLocal_plt(_QWORD);
__int64 nnosFreeMemoryForThreadLocal_plt(_QWORD, _QWORD);
__int64 nnosGetModuleCountMax_plt(_QWORD);
__int64 strcmp_plt(void* this_, const char*);
extern _UNKNOWN SdkData_eadc5c;
extern _UNKNOWN SdkData_eadc60;
extern __int64 (*__nnmusl_fd_state_ptr[2])();
extern __int64 SdkData_e86ca8;
extern __int64 SdkData_eadc68;
extern __int64 SdkData_eadc70;
extern __int64 SdkData_eadc78;
extern __int64 SdkData_eadc80;
extern __int64 SdkData_eadc88;
extern int SdkData_eadc3c;
extern void (*SdkData_e86ca0[355])();
extern void (*SdkData_e86cb0[353])();
extern void (*SdkData_e86cb8[352])();
unsigned __int64 SdkRoutine_b5bd0(__int64);
__int64 nnmusl_b6160(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                     __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                     __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                     unsigned __int64 a13, unsigned __int64 a14,
                     unsigned __int64 a15, unsigned __int64 a16,
                     unsigned __int64 a17, unsigned __int64 a18,
                     unsigned __int64 a19, unsigned __int64 a20, __int64 a21);
__int64 nnmusl_b6a20(__int64 a1, __int64 a2);
__int64 nnmusl_b6e00(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6);
__int64 nnmusl_b72e0(__int64 a1);
__int64 nnmusl_b75a0();
unsigned int* nnmusl_b7b80(__int64 a1, void* a2);

__int64 nnmusl_b6160(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                     __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                     __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                     unsigned __int64 a13, unsigned __int64 a14,
                     unsigned __int64 a15, unsigned __int64 a16,
                     unsigned __int64 a17, unsigned __int64 a18,
                     unsigned __int64 a19, unsigned __int64 a20, __int64 a21)
{
  __int64 result;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  void* v32;
  void(__attribute__((noreturn)) * v33)();
  int v34;
  __int64 v36;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  int v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  char v65;
  bool v66;
  char v67;
  void(__attribute__((noreturn)) * v68)();
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  _QWORD* v76;
  __int64 v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  void (*v92)(__int64);
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  void(__attribute__((noreturn)) * v97)();
  unsigned __int64 v98;

  result = 2;
  if (a1 != 0 && a5 != 0 && a6 != 0) {
    if ((nn_os_MemoryAllocatorForThreadLocalInitialized_plt(2) & 1) == 0) {
      return 2;
    }
    v28 = a5 - (a6 - a3);
    v29 = a10 - a7;
    if (a7 == 0) {
      v29 = 0;
    }
    v98 = v29;
    if (SdkData_eadc68 == 0) {
      v30 = nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
      SdkData_eadc3c = nnosGetModuleCountMax_plt(v30);
      SdkData_eadc68 =
          nnosAllocateMemoryForThreadLocal_plt(8LL * SdkData_eadc3c + 8);
      memset_plt((void*)SdkData_eadc68, nullptr, 8 * SdkData_eadc3c + 8);
      v32 = (void*)nnosAllocateMemoryForThreadLocal_plt(8LL * SdkData_eadc3c +
                                                        40);
      v33 = SdkData_e86ca0[0];
      v34 = 8 * SdkData_eadc3c;
      *(_QWORD*)SdkData_e86ca0[0] = v32;
      memset_plt(v32, nullptr, v34 + 40);
      **(_DWORD**)v33 = 1;
      *(_DWORD*)(*(_QWORD*)v33 + 8LL) = SdkData_eadc3c + 1;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
    }
    v36 = nnosAllocateMemoryForThreadLocal_plt(328);
    memset_plt((void*)v36, nullptr, 328);
    *(_QWORD*)(v36 + 64) = a1;
    *(_QWORD*)(v36 + 72) = a2;
    *(_QWORD*)(v36 + 96) = a5;
    *(_QWORD*)(v36 + 104) = a6;
    *(_QWORD*)(v36 + 144) = a11;
    *(_QWORD*)(v36 + 80) = a3;
    *(_QWORD*)(v36 + 88) = a4;
    *(_QWORD*)(v36 + 112) = a7;
    *(_QWORD*)(v36 + 120) = a8;
    *(_QWORD*)(v36 + 128) = a9;
    *(_QWORD*)(v36 + 136) = a10;
    *(_QWORD*)(v36 + 184) = a16;
    *(_QWORD*)(v36 + 192) = a17;
    *(_QWORD*)(v36 + 200) = a18;
    *(_QWORD*)(v36 + 208) = a19;
    *(_QWORD*)(v36 + 152) = a12;
    *(_QWORD*)(v36 + 160) = a13;
    *(_QWORD*)(v36 + 168) = a14;
    *(_QWORD*)(v36 + 176) = a15;
    *(_QWORD*)(v36 + 216) = a20;
    *(_QWORD*)(v36 + 224) = a21;
    if (a8 != 0 && a4 != 0 && a3 != 0 && a7 != 0) {
      v38 = a4 - a3;
      v39 = a8 - a3;
      a7 = a3;
      if (a8 == a3) {
        goto LABEL_27;
      }
    }
    else if (a3 != 0 && a4 != 0) {
      v39 = a4 - a3;
      a7 = a3;
      v38 = a4 - a3;
      if (a4 == a3) {
        goto LABEL_27;
      }
    }
    else {
      LOBYTE(v39) = 0;
      if (a7 == 0) {
        goto LABEL_27;
      }
      if (a8 == 0) {
        goto LABEL_27;
      }
      v39 = a8 - a7;
      v38 = 0;
      if (a8 == a7) {
        goto LABEL_27;
      }
    }
    v40 = a6 - a3;
    *(_QWORD*)v36 = a7;
    *(_QWORD*)(v36 + 8) = v38;
    if (a6 - a3 <= v98) {
      v40 = v98;
    }
    if (a3 == 0) {
      v40 = v98;
    }
    *(_QWORD*)(v36 + 16) = v39;
    *(_QWORD*)(v36 + 24) = v40;
    LOBYTE(v39) = 1;
    if (v40 != 0) {
    LABEL_28:
      *(_QWORD*)(v36 + 232) = v28;
      if (a21 != 0) {
        v41 = (__int64*)(a21 + 8);
        while (1) {
          while (1) {
            v43 = *(v41 - 1);
            if (v43 > 11) {
              break;
            }
            if (v43 <= 4) {
              if (v43 == 4) {
                v46 = *v41;
                v41 += 2;
                *(_QWORD*)(v36 + 256) = v46 + v28;
              }
              else {
                if (v43 == 0) {
                  goto LABEL_46;
                }
              LABEL_43:
                v41 += 2;
              }
            }
            else if (v43 == 5) {
              v42 = *v41;
              v41 += 2;
              *(_QWORD*)(v36 + 248) = v42 + v28;
            }
            else {
              if (v43 != 6) {
                goto LABEL_43;
              }
              v44 = *v41;
              v41 += 2;
              *(_QWORD*)(v36 + 240) = v44 + v28;
            }
          }
          switch (v43) {
          case 1879048176LL:
            *(_QWORD*)(v36 + 272) = *v41 + v28;
            goto LABEL_43;
          case 1879047925LL:
            v47 = *v41;
            v41 += 2;
            *(_QWORD*)(v36 + 264) = v47 + v28;
            break;
          case 12LL:
            v45 = *v41;
            v41 += 2;
            *(_QWORD*)(v36 + 296) = v45 + v28;
            break;
          default:
            goto LABEL_43;
          }
        }
      }
    LABEL_46:
      v48 = a20 - a19;
      if (a20 <= a19) {
        v50 = 0;
      }
      else {
        if ((int)(v48 >> 3) < 1) {
          v50 = 0;
          v53 = a18 - a17;
          if (a18 > a17) {
          LABEL_55:
            if ((int)(v53 >> 3) >= 1) {
              v54 = (v53 >> 3) & 0x7FFFFFFF;
              v55 = 0;
              do {
                v56 = *(_QWORD*)(a17 + 8 + 8 * v55);
                v55 += 3LL;
                if ((v56 & 0x7FFFFFFC) == 0x404) {
                  ++v50;
                }
              } while (v55 < v54);
            }
          }
        LABEL_62:
          v57 = a16 - a15;
          if (a16 > a15 && (int)(v57 >> 3) >= 1) {
            v58 = (v57 >> 3) & 0x7FFFFFFF;
            v59 = 0;
            do {
              v60 = *(_QWORD*)(a15 + 8 + 8 * v59);
              v59 += 2LL;
              if ((v60 & 0x7FFFFFFC) == 0x404) {
                ++v50;
              }
            } while (v59 < v58);
          }
          v61 = a14 - a13;
          if (a14 > a13 && (int)(v61 >> 3) >= 1) {
            v62 = (v61 >> 3) & 0x7FFFFFFF;
            v63 = 0;
            do {
              v64 = *(_QWORD*)(a13 + 8 + 8 * v63);
              v63 += 3LL;
              if ((v64 & 0x7FFFFFFC) == 0x404) {
                ++v50;
              }
            } while (v63 < v62);
          }
          if (v50 != 0) {
            v65 = 2;
          }
          else {
            v65 = 0;
          }
          *(_BYTE*)(v36 + 56) = v65;
          v66 = a1 <= SdkData_e86ca8 && a2 > SdkData_e86ca8;
          if (v66) {
            SdkData_eadc70 = v36;
            nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
            *(_QWORD*)(SdkData_eadc68 + 8) = v36;
            v68 = SdkData_e86ca0[0];
            v69 = *(_QWORD*)SdkData_e86ca0[0];
            *(_QWORD*)(v69 + 40) = *(_QWORD*)(v36 + 64);
            ++*(_DWORD*)(v69 + 4);
            nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
            LODWORD(v70) = 0;
            *(_QWORD*)(SdkData_eadc70 + 48) = 1;
            v71 = 8;
          LABEL_88:
            SdkData_eadc80 = v71;
          LABEL_89:
            nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
            v72 = SdkData_eadc3c;
            if (SdkData_eadc3c <= (int)v70) {
              v72 = v70;
            }
            v73 = v72 - (__int64)(int)v70;
            v74 = (_QWORD*)(SdkData_eadc68 + 8LL * (int)v70 + 8);
            while (v73 != 0) {
              v76 = (_QWORD*)*v74++;
              v75 = v76;
              --v73;
              if (v76 != nullptr) {
                nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                v70 = v75[6];
                v77 = ++SdkData_eadc88;
                nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
                *(_QWORD*)(*(_QWORD*)v68 + 32LL) = v77;
                nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                if (*v75 == 0) {
                  goto LABEL_89;
                }
                v71 = SdkData_eadc80;
                if ((unsigned __int64)SdkData_eadc80 <= v75[3]) {
                  v71 = v75[3];
                }
                goto LABEL_88;
              }
            }
            nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
            v78 = SdkData_eadc88;
            if (*(_QWORD*)(SdkData_eadc70 + 24) <= 0x10u) {
              v79 = 16;
            }
            else {
              v79 = *(_QWORD*)(SdkData_eadc70 + 24);
            }
            if ((int)SdkData_eadc88 >= 1) {
              v80 = (unsigned int)(SdkData_eadc88 + 1);
              v81 = 1;
              do {
                nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
                v83 = *(_QWORD**)(SdkData_eadc68 + 8 * v81);
                nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                if (v83 != nullptr &&
                    (v83 == (_QWORD*)SdkData_eadc70 || *v83 != 0)) {
                  v82 = (v79 + v83[3] - 1) & -v83[3];
                  v79 = v82 + v83[2];
                  v83[4] = v82;
                }
                ++v81;
              } while (v80 != v81);
            }
            LODWORD(v84) = v78;
            SdkData_eadc78 = v79 + SdkData_eadc80 + 8LL * SdkData_eadc3c + 32;
            if (v78 > 1) {
              v84 = v78 & 0x7FFFFFFF;
              while (1) {
                nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
                v85 = *(_QWORD*)(SdkData_eadc68 + 8 * v84);
                nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                if (v85 != 0 &&
                    (*(_QWORD*)v85 != 0 || (*(_BYTE*)(v85 + 56) & 2) != 0)) {
                  break;
                }
                v66 = v84-- <= 2;
                if (v66) {
                  LODWORD(v84) = 1;
                  break;
                }
              }
            }
            SdkData_eadc88 = (int)v84;
            nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
            *(_QWORD*)(*(_QWORD*)v68 + 32LL) = (int)v84;
            nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
            SdkRoutine_b6b60(SdkData_eadc70);
            if (v78 >= 2) {
              v89 = 2;
              do {
                nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
                v90 = *(_QWORD*)(SdkData_eadc68 + 8 * v89);
                v91 = nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                if (v90 != 0) {
                  if ((*(_BYTE*)(v90 + 56) & 1) == 0 &&
                      ((*(_BYTE*)(v90 + 56) & 2) != 0 || *(_QWORD*)v90 != 0)) {
                    v91 = SdkRoutine_b6b60(v90);
                  }
                  v92 = *(void (**)(__int64))(v90 + 296);
                  if (v92 != nullptr) {
                    v92(v91);
                  }
                }
                ++v89;
              } while (v78 + 1 != v89);
              v93 = v78 & 0x7FFFFFFF;
              while (1) {
                nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
                v94 = *(_QWORD*)(SdkData_eadc68 + 8 * v93);
                nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                if (v94 != 0) {
                  if (*(_QWORD*)v94 != 0 || (*(_BYTE*)(v94 + 56) & 2) != 0) {
                    return 2;
                  }
                  if ((*(_BYTE*)(v94 + 56) & 1) == 0) {
                    nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
                    *(_QWORD*)(SdkData_eadc68 + 8 * v93) = 0;
                    *(_QWORD*)(*(_QWORD*)v68 + 8 * v93 + 32) = 0;
                    --*(_DWORD*)(*(_QWORD*)v68 + 4LL);
                    nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                    nnosFreeMemoryForThreadLocal_plt(v94, 328);
                  }
                }
                result = 2;
                v66 = v93-- <= 2;
                if (v66) {
                  return result;
                }
              }
            }
          }
          else {
            if (SdkData_eadc70 != 0) {
              v67 = v39;
            }
            else {
              v67 = 1;
            }
            if ((v67 & 1) != 0 || v50 != 0) {
              if (SdkData_eadc3c >= 2) {
                v86 = 0;
                while (1) {
                  nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
                  v87 = SdkData_eadc68 + 8 * v86;
                  if (*(_QWORD*)(v87 + 16) == 0) {
                    break;
                  }
                  nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                  v88 = v86 + 2;
                  ++v86;
                  if (v88 >= SdkData_eadc3c) {
                    goto LABEL_143;
                  }
                }
                *(_QWORD*)(v87 + 16) = v36;
                if (v36 != 0) {
                  v95 = *(_QWORD*)(v36 + 64);
                  v96 = 1;
                }
                else {
                  v95 = 0;
                  v96 = -1;
                }
                v97 = SdkData_e86ca0[0];
                *(_QWORD*)(*(_QWORD*)SdkData_e86ca0[0] + 8 * v86 + 48) = v95;
                *(_DWORD*)(*(_QWORD*)v97 + 4LL) += v96;
                nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
                *(_QWORD*)(v36 + 48) = v86 + 2;
              }
            LABEL_143:
              if (SdkData_eadc70 == 0) {
                return 1;
              }
              SdkRoutine_b6b60(v36);
            }
            else {
              nnosFreeMemoryForThreadLocal_plt(v36, 328);
            }
          }
          return 2;
        }
        v49 = (v48 >> 3) & 0x7FFFFFFF;
        v50 = 0;
        v51 = 0;
        do {
          v52 = *(_QWORD*)(a19 + 8 + 8 * v51);
          v51 += 2LL;
          if ((v52 & 0x7FFFFFFC) == 0x404) {
            ++v50;
          }
        } while (v51 < v49);
      }
      v53 = a18 - a17;
      if (a18 <= a17) {
        goto LABEL_62;
      }
      goto LABEL_55;
    }
  LABEL_27:
    *(_QWORD*)(v36 + 24) = 1;
    goto LABEL_28;
  }
  return result;
}

__int64 nnmusl_b6a20(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  void(__attribute__((noreturn)) * v6)();

  nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
  *(_QWORD*)(SdkData_eadc68 + 8 * a2) = a1;
  if (a1 != 0) {
    v4 = *(_QWORD*)(a1 + 64);
    v5 = 1;
  }
  else {
    v4 = 0;
    v5 = -1;
  }
  v6 = SdkData_e86ca0[0];
  *(_QWORD*)(*(_QWORD*)SdkData_e86ca0[0] + 8 * a2 + 32) = v4;
  *(_DWORD*)(*(_QWORD*)v6 + 4LL) += v5;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
}

__int64 nnmusl_b6e00(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6)
{
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  if (result != 0) {
    v11 = result;
    result = nn_os_MemoryAllocatorForThreadLocalInitialized_plt(result);
    if ((result & 1) != 0) {
      if (a5 == 0 || a3 == 0) {
        v13 = a4;
      }
      else {
        v13 = a6;
      }
      if (a3 != 0) {
        v14 = a3;
      }
      else {
        v13 = a6;
        v14 = a5;
      }
      if (v13 == v14 || (a3 | a5) == 0) {
        nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
        if (SdkData_eadc68 == 0 || *(_QWORD*)(SdkData_eadc68 + 8) == 0) {
          return nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
        }
        nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
        nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
        v24 = *(_QWORD**)(SdkData_eadc68 + 8);
        result = nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
        if (v24[8] == v11 && v24[9] == a2 && v24[10] == a3 && v24[11] == a4 &&
            v24[14] == a5 && v24[15] == a6 && SdkData_eadc68 != 0) {
        LABEL_15:
          LODWORD(v15) = 0;
        LABEL_16:
          nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
          v16 = SdkData_eadc3c;
          if (SdkData_eadc3c <= (int)v15) {
            v16 = v15;
          }
          v17 = v16 - (__int64)(int)v15;
          v18 = (_QWORD*)(SdkData_eadc68 + 8LL * (int)v15 + 8);
          while (v17 != 0) {
            v20 = (_QWORD*)*v18++;
            v19 = v20;
            --v17;
            if (v20 != nullptr) {
              nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
              v15 = v19[6];
              if (v19[8] != v11 || v19[9] != a2 || v19[10] != a3 ||
                  v19[11] != a4 || v19[14] != a5 || v19[15] != a6) {
                goto LABEL_16;
              }
              SdkRoutine_b7120((__int64)v19);
              SdkRoutine_b71a0((__int64)v19);
              v21 = v19[5];
              if (v21 != 0) {
                do {
                  v22 = *(_QWORD*)(v21 + 16);
                  nnosFreeMemoryForThreadLocal_plt(v21, 24);
                  v21 = v22;
                } while (v22 != 0);
              }
              v19[5] = 0;
              nnmusl_b6a20(0, (int)v15);
              nnmusl_b72e0(0);
              if (v19 == (_QWORD*)SdkData_eadc70) {
                v23 = 1;
                v30 = 0;
                while (1) {
                  SdkRoutine_b6ac0(v23, &v30);
                  v26 = v30;
                  if (v30 == 0) {
                    break;
                  }
                  v27 = *(_QWORD*)(v30 + 48);
                  SdkRoutine_b7120(v30);
                  SdkRoutine_b71a0(v26);
                  v28 = *(_QWORD*)(v26 + 40);
                  if (v28 != 0) {
                    do {
                      v29 = *(_QWORD*)(v28 + 16);
                      nnosFreeMemoryForThreadLocal_plt(v28, 24);
                      v28 = v29;
                    } while (v29 != 0);
                  }
                  *(_QWORD*)(v26 + 40) = 0;
                  nnosFreeMemoryForThreadLocal_plt(v26, 328);
                  v23 = (int)v27;
                }
                nnmusl_b75a0();
                SdkData_eadc70 = 0;
                *(_QWORD*)SdkData_e86cb0[0] = 0;
                *(_QWORD*)SdkData_e86cb8[0] = 0;
              }
              return nnosFreeMemoryForThreadLocal_plt(v19, 328);
            }
          }
          return nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
        }
      }
      else if (SdkData_eadc68 != 0) {
        goto LABEL_15;
      }
    }
  }
  return result;
}

__int64 nnmusl_b72e0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  unsigned int* v9;
  __int64 v10;
  int v12;
  unsigned __int64 (**v13)(__int64);
  __int64 v14;
  __int64 v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_SdkMutexType_Lock_plt(&SdkData_eadc60),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v2) = 0;
LABEL_2:
  nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = SdkData_eadc3c;
  if (SdkData_eadc3c <= (int)v2) {
    v3 = v2;
  }
  v4 = v3 - (__int64)(int)v2;
  v5 = (_QWORD*)(SdkData_eadc68 + 8LL * (int)v2 + 8);
  while (v4 != 0) {
    v7 = (_QWORD*)*v5++;
    v6 = v7;
    --v4;
    if (v7 != nullptr) {
      nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v2 = v6[6];
      if (a1 == 0 || (_DWORD)v2 != *(_DWORD*)(a1 + 48)) {
        v8 = (__int64*)v6[39];
        if (v8 != nullptr) {
          while (1) {
            if (*((_BYTE*)v8 + 28) == 0) {
              v9 = nnmusl_b7b80((__int64)v6, (void*)v8[2]),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v9 != nullptr && v10 != 0) {
                break;
              }
            }
          LABEL_12:
            v8 = (__int64*)*v8;
            if (v8 == nullptr) {
              goto LABEL_2;
            }
          }
          v12 = *((_DWORD*)v8 + 6);
          v14 = v8[4];
          v13 = (unsigned __int64 (**)(__int64))v8[5],
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v15 = *((_QWORD*)v9 + 1);
          v16 = (unsigned __int64*)v8[6];
          if (v12 > 1029) {
            if (v12 == 1030) {
              *v13 = (unsigned __int64 (*)(__int64))(v15 + v14 +
                                                     *(_QWORD*)(v10 + 32)),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else if (v12 == 1031) {
              v17 = *(_QWORD*)(v10 + 48);
              if (v17 <= SdkData_eadc88) {
                *v13 = (unsigned __int64 (*)(__int64))__nnmusl_fd_state_ptr[0],
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v13[1] = (unsigned __int64 (*)(__int64))(v15 + v14 +
                                                         *(_QWORD*)(v10 + 32)),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v8[6] = (__int64)v16;
                if (*(_QWORD*)(v10 + 48) > (unsigned __int64)SdkData_eadc88) {
                  goto LABEL_34;
                }
              }
              else {
                if (v16 == nullptr) {
                  v18 = v10;
                  v16 = (unsigned __int64*)nnosAllocateMemoryForThreadLocal_plt(
                      24),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v10 = v18;
                  v16[2] = v6[5];
                  v6[5] = v16;
                  v17 = *(_QWORD*)(v18 + 48);
                }
                *v16 = v17;
                v16[1] = v15 + v14;
                *v13 = SdkRoutine_b5bd0;
                v13[1] = (unsigned __int64 (*)(__int64))v16,
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v8[6] = (__int64)v16;
                if (*(_QWORD*)(v10 + 48) > (unsigned __int64)SdkData_eadc88) {
                LABEL_34:
                  v19 = v10;
                  *((_BYTE*)v8 + 28) = 1;
                  v8[9] = *(_QWORD*)(v10 + 48);
                  v20 = (_QWORD*)nnosAllocateMemoryForThreadLocal_plt(32),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  *v20 = 0;
                  v20[1] = 0;
                  v20[2] = 0;
                  v20[3] = 0;
                  v20[2] = v6[6];
                  v20[3] = v8;
                  v8[10] = (__int64)v20;
                  *v20 = *(_QWORD*)(v19 + 320);
                  v20[1] = 0;
                  v21 = *(_QWORD*)(v19 + 320);
                  if (v21 != 0) {
                    *(_QWORD*)(v21 + 8) = v20;
                  }
                  *(_QWORD*)(v19 + 320) = v20;
                  goto LABEL_12;
                }
              }
              goto LABEL_37;
            }
          }
          else {
            if (v12 == 1028) {
              *v13 = *(unsigned __int64 (**)(__int64))(v10 + 48),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v8[6] = (__int64)v16;
              if (*(_QWORD*)(v10 + 48) > (unsigned __int64)SdkData_eadc88) {
                goto LABEL_34;
              }
              goto LABEL_37;
            }
            if (v12 == 1029) {
              *v13 = (unsigned __int64 (*)(__int64))(v15 + v14),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v8[6] = (__int64)v16;
              if (*(_QWORD*)(v10 + 48) > (unsigned __int64)SdkData_eadc88) {
                goto LABEL_34;
              }
            LABEL_37:
              v22 = (_QWORD*)v8[1];
              if (*v8 != 0) {
                *(_QWORD*)(*v8 + 8) = v22;
              }
              v23 = (__int64*)*v8;
              if (v22 != nullptr) {
                *v22 = v23;
              }
              else {
                v6[39] = v23;
              }
              nnosFreeMemoryForThreadLocal_plt(v8, 88),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_12;
            }
          }
          v8[6] = (__int64)v16;
          if (*(_QWORD*)(v10 + 48) > (unsigned __int64)SdkData_eadc88) {
            goto LABEL_34;
          }
          goto LABEL_37;
        }
      }
      goto LABEL_2;
    }
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc60);
}

__int64 nnmusl_b75a0()
{
  void** v0;

  nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
  nnosFreeMemoryForThreadLocal_plt(SdkData_eadc68, 8LL * SdkData_eadc3c + 8);
  SdkData_eadc68 = 0;
  v0 = (void**)SdkData_e86ca0[0];
  nnosFreeMemoryForThreadLocal_plt(*(_QWORD*)SdkData_e86ca0[0],
                                   8LL * SdkData_eadc3c + 40);
  memset_plt(*v0, nullptr, 8 * SdkData_eadc3c + 40);
  *v0 = nullptr;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
}

unsigned int* nnmusl_b7b80(__int64 a1, void* a2)
{
  char* v2;
  __int64 v5;
  __int64 v6;
  unsigned int* v7;
  int v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned int* v14;
  __int64 v15;
  int v16;
  unsigned __int8* v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned __int8* v22;
  int v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  int* v29;
  unsigned int* v30;
  int v31;
  char v32;
  int v33;
  __int64 v34;
  _DWORD* v35;
  int v36;
  unsigned int* result;
  int v38;
  unsigned int v39;
  int v40;
  bool v41;
  bool v43;
  bool v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int* v51;
  _DWORD* v52;
  __int64 v53;
  __int64 v54;

  v2 = (char*)a2 + 1;
  v53 = 0;
  v54 = 0;
  v5 = 0;
  LODWORD(v6) = 0;
  v7 = nullptr;
  while (1) {
    do {
      while (1) {
      LABEL_2:
        nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
        v8 = SdkData_eadc3c;
        if (SdkData_eadc3c <= (int)v6) {
          v8 = v6;
        }
        v9 = v8 - (__int64)(int)v6;
        v10 = (_QWORD*)(SdkData_eadc68 + 8LL * (int)v6 + 8);
        do {
          if (v9 == 0) {
            nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
            return v7;
          }
          v12 = (_QWORD*)*v10++;
          v11 = v12;
          --v9;
        } while (v12 == nullptr);
        nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
        v6 = v11[6];
        if ((_DWORD)v6 == *(_DWORD*)(a1 + 48)) {
          continue;
        }
        v14 = (unsigned int*)v11[33];
        if (v14 == nullptr) {
          break;
        }
        v15 = v54;
        if (v54 == 0) {
          v16 = *(unsigned __int8*)a2;
          if (*(_BYTE*)a2 != 0) {
            LODWORD(v5) = 5381;
            v17 = (unsigned __int8*)v2;
            do {
              v5 = (unsigned int)(33 * v5 + v16);
              v18 = *v17++;
              v16 = v18;
            } while (v18 != 0);
          }
          else {
            v5 = 5381;
          }
          HIDWORD(v53) = (unsigned int)v5 >> 6;
          v15 = 1LL << v5;
        }
        v24 = v14[2];
        v54 = v15;
        v25 = *(
            _QWORD*)&v14[2 * ((unsigned int)(v24 + 0x3FFFFFF) & HIDWORD(v53)) +
                         4];
        if ((v25 & v15) != 0 &&
            ((v25 >> ((unsigned int)v5 >> v14[3])) & 1) != 0) {
          v26 = *v14;
          v27 = (__int64)&v14[2 * v24 + 4];
          v28 = *(_DWORD*)(v27 + 4LL * ((unsigned int)v5 % (unsigned int)v26));
          if (v28 != 0) {
            v45 = v2;
            v48 = v11[30];
            v50 = v5;
            v29 = (int*)(v27 + 4 * v26 + 4LL * (v28 - v14[1]));
            while (1) {
              v33 = *v29++;
              v32 = v33;
              if ((v33 ^ (unsigned int)v5) <= 1) {
                v34 = v11[34];
                if (v34 == 0 ||
                    (*(__int16*)(v34 + 2LL * v28) & 0x80000000) == 0) {
                  v51 = v29;
                  v30 = (unsigned int*)(v48 + 24LL * v28);
                  v31 = strcmp_plt(a2, (const char*)(v11[31] + *v30));
                  v29 = v51;
                  if (v31 == 0) {
                    break;
                  }
                }
              }
              v5 = v50;
              ++v28;
              if ((v32 & 1) != 0) {
                v2 = v45;
                goto LABEL_2;
              }
            }
          LABEL_39:
            v2 = v45;
            goto LABEL_40;
          }
        }
      }
      v19 = v53;
      if ((_DWORD)v53 == 0) {
        v20 = *(unsigned __int8*)a2;
        if (*(_BYTE*)a2 != 0) {
          v21 = 0;
          v22 = (unsigned __int8*)v2;
          do {
            v21 = (v20 + 16 * v21) ^ (16 * ((v20 + 16 * v21) >> 28));
            v23 = *v22++;
            v20 = v23;
          } while (v23 != 0);
          v19 = v21 & 0xFFFFFFF;
        }
        else {
          v19 = 0;
        }
      }
      v35 = (_DWORD*)v11[32];
      LODWORD(v53) = v19;
      v36 = v35[v19 % *v35 + 2];
    } while (v36 == 0);
    v52 = &v35[*v35 + 2];
    v47 = v11[31];
    v49 = v11[30];
    v50 = v5;
    v46 = v11[34];
    if (v46 != 0) {
      v45 = v2;
      while (1) {
        if ((*(__int16*)(v46 + 2LL * v36) & 0x80000000) == 0) {
          v30 = (unsigned int*)(v49 + 24LL * v36);
          if ((unsigned int)strcmp_plt(a2, (const char*)(v47 + *v30)) == 0) {
            goto LABEL_39;
          }
        }
        v36 = v52[v36];
        if (v36 == 0) {
          v5 = v50;
          goto LABEL_2;
        }
      }
    }
    while (1) {
      v30 = (unsigned int*)(v49 + 24LL * v36);
      if ((unsigned int)strcmp_plt(a2, (const char*)(v47 + *v30)) == 0) {
        break;
      }
      v36 = v52[v36];
      if (v36 == 0) {
        v5 = v50;
        goto LABEL_2;
      }
    }
  LABEL_40:
    result = v30;
    v38 = *((unsigned __int16*)v30 + 3);
    v5 = v50;
    if (v38 != 0 || (result[1] & 0xF) != 6) {
      v39 = *((unsigned __int8*)result + 4);
      v40 = v39 & 0xF;
      v41 = *((_QWORD*)result + 1) != 0 || v40 == 6;
      if (v41 && ((1 << v40) & 0x67) != 0) {
        v43 = v7 != nullptr && v39 >> 4 == 2;
        v44 = v43;
        if (((1 << (*((_BYTE*)result + 4) >> 4)) & 0x406) != 0 && !v44) {
          v7 = result;
          if ((v39 & 0xF0) == 0x10) {
            return result;
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
