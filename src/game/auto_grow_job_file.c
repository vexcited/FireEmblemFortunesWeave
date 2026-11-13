#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12bfd60(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64* GameData_212cba0[83];
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 AutoGrowJobFile_Unknown4(unsigned __int64 result);
__int64 GameRoutine_7d0c20(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
void __attribute__((noreturn)) GameRoutine_12c60f0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64
AutoGrowJobFile_12c0bc0_alt1(__int64 a1, __int64 a2,
                             char** a3) __asm__("AutoGrowJobFile_12c0bc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void GameRoutine_7d0c20_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_7d0c20");
void __attribute__((noreturn))
GameRoutine_12c60f0_alt1() __asm__("GameRoutine_12c60f0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AutoGrowJobFile_12c0bc0(__int64 a1, __int64 a2, char** a3);

unsigned __int64 AutoGrowJobFile_Unknown4(unsigned __int64 result)
{
  unsigned __int64 v1;
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64* v10;
  __int64 v11;
  unsigned __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  bool v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  float v32;
  unsigned __int64 v33;
  float v34;
  float v35;
  _BOOL8 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;

  v1 = result;
  v2 = GameData_212cba0[0];
  v3 = vcvtps_u64_f32(
      (float)(unsigned __int64)(int)((__int64)(*(_QWORD*)(*GameData_212cba0[0] +
                                                          72) -
                                               *(_QWORD*)(*GameData_212cba0[0] +
                                                          64)) >>
                                     3) /
      *(float*)(result + 296));
  if (v3 == 1) {
    v3 = 2;
  }
  else if ((v3 & (v3 - 1)) != 0) {
    result = std___1___next_prime(v3);
    v3 = result;
  }
  v4 = *(_QWORD*)(v1 + 272);
  if (v3 > v4) {
    goto LABEL_6;
  }
  if (v3 < v4) {
    result = vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 288) /
                            *(float*)(v1 + 296));
    if (v4 < 3 || (v4 & (v4 - 1)) != 0) {
      result = std___1___next_prime(result);
    }
    else {
      v5 = 1LL << (-(char)__clz(result - 1) & 63);
      if (result >= 2) {
        result = v5;
      }
    }
    if (v3 <= result) {
      v3 = result;
    }
    if (v3 < v4) {
    LABEL_6:
      result = GameRoutine_12bfd60(v1 + 264, v3);
    }
  }
  v6 = *v2;
  *(_QWORD*)(v1 + 312) = 0;
  *(_QWORD*)(v1 + 320) = 0;
  *(_QWORD*)(v1 + 304) = 0;
  v7 = *(__int64**)(v6 + 64);
  v8 = *(__int64**)(v6 + 72);
  if (v7 != v8) {
    v9 = *(_QWORD*)(v1 + 288);
    v10 = (unsigned __int64*)(v1 + 280);
    do {
      v14 = *v7;
      v15 = *(_QWORD*)(v1 + 272);
      v13 = *(_QWORD*)(*v7 + 40);
      v16 = v15 == 0 || v9 == 0;
      v17 = *(__int64**)v13;
      if (v16) {
      LABEL_29:
        if (v15 == 0) {
          goto LABEL_74;
        }
      }
      else {
        v18 = v15 - 1;
        if ((v15 & (v15 - 1)) != 0) {
          v19 = *(_QWORD*)v13;
          if ((unsigned __int64)v17 >= v15) {
            v19 = (unsigned __int64)v17 % v15;
          }
        }
        else {
          v19 = v18 & (unsigned __int64)v17;
        }
        v22 = *(_QWORD**)(*(_QWORD*)(v1 + 264) + 8 * v19);
        if (v22 != nullptr) {
          v23 = (_QWORD*)*v22;
          if (v23 != nullptr) {
            if ((v15 & v18) == 0) {
              while (1) {
                v26 = (__int64*)v23[1];
                if (v26 == v17) {
                  if ((__int64*)v23[2] == v17) {
                    goto LABEL_23;
                  }
                }
                else if (((unsigned __int64)v26 & v18) != v19) {
                  goto LABEL_29;
                }
                v23 = (_QWORD*)*v23;
                if (v23 == nullptr) {
                  goto LABEL_29;
                }
              }
            }
            while (1) {
              v24 = v23[1];
              if ((__int64*)v24 == v17) {
                if ((__int64*)v23[2] == v17) {
                  goto LABEL_23;
                }
              }
              else {
                if (v24 >= v15) {
                  v24 %= v15;
                }
                if (v24 != v19) {
                  goto LABEL_29;
                }
              }
              v23 = (_QWORD*)*v23;
              if (v23 == nullptr) {
                goto LABEL_29;
              }
            }
          }
        }
      }
      v25 = v15 - 1;
      if ((v15 & (v15 - 1)) != 0) {
        v2 = *(__int64**)v13;
        if ((unsigned __int64)v17 >= v15) {
          v2 = (__int64*)((unsigned __int64)v17 % v15);
        }
      }
      else {
        v2 = (__int64*)(v25 & (unsigned __int64)v17);
      }
      v27 = *(_QWORD**)(*(_QWORD*)(v1 + 264) + 8LL * (_QWORD)v2);
      if (v27 != nullptr) {
        v28 = (_QWORD*)*v27;
        if (v28 != nullptr) {
          if ((v15 & v25) == 0) {
            while (1) {
              v30 = (__int64*)v28[1];
              if (v30 == v17) {
                if ((__int64*)v28[2] == v17) {
                  goto LABEL_23;
                }
              }
              else if ((__int64*)((unsigned __int64)v30 & v25) != v2) {
                goto LABEL_74;
              }
              v28 = (_QWORD*)*v28;
              if (v28 == nullptr) {
                goto LABEL_74;
              }
            }
          }
          do {
            v29 = v28[1];
            if ((__int64*)v29 == v17) {
              if ((__int64*)v28[2] == v17) {
                goto LABEL_23;
              }
            }
            else {
              if (v29 >= v15) {
                v29 %= v15;
              }
              if ((__int64*)v29 != v2) {
                break;
              }
            }
            v28 = (_QWORD*)*v28;
          } while (v28 != nullptr);
        }
      }
    LABEL_74:
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      v31 = *(_QWORD*)(v1 + 288);
      v32 = *(float*)(v1 + 296);
      v33 = result;
      *(_QWORD*)result = 0;
      *(_QWORD*)(result + 8) = v17;
      *(_QWORD*)(result + 16) = v17;
      *(_QWORD*)(result + 24) = v14;
      v34 = (float)(unsigned __int64)(v31 + 1);
      if (v15 == 0 || (float)(v32 * (float)v15) < v34) {
        v35 = v34 / v32;
        v36 = (v15 & (v15 - 1)) != 0;
        if (v15 < 3) {
          v36 = true;
        }
        v37 = v36 | (2 * v15);
        v38 = vcvtps_u64_f32(v35);
        if (v37 <= v38) {
          v39 = v38;
        }
        else {
          v39 = v37;
        }
        if (v39 == 1) {
          v39 = 2;
        }
        else if ((v39 & (v39 - 1)) != 0) {
          result = std___1___next_prime(v39);
          v15 = *(_QWORD*)(v1 + 272);
          v39 = result;
        }
        if (v39 > v15) {
          goto LABEL_86;
        }
        if (v39 < v15) {
          result = vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 288) /
                                  *(float*)(v1 + 296));
          if (v15 < 3 || (v15 & (v15 - 1)) != 0) {
            result = std___1___next_prime(result);
          }
          else {
            v40 = 1LL << (-(char)__clz(result - 1) & 63);
            if (result >= 2) {
              result = v40;
            }
          }
          if (v39 <= result) {
            v39 = result;
          }
          if (v39 < v15) {
          LABEL_86:
            result = GameRoutine_12bfd60(v1 + 264, v39);
          }
        }
        v15 = *(_QWORD*)(v1 + 272);
        if ((v15 & (v15 - 1)) != 0) {
          if ((unsigned __int64)v17 >= v15) {
            v2 = (__int64*)((unsigned __int64)v17 % v15);
          }
          else {
            v2 = v17;
          }
        }
        else {
          v2 = (__int64*)((v15 - 1) & (unsigned __int64)v17);
        }
      }
      v11 = *(_QWORD*)(v1 + 264);
      v12 = *(unsigned __int64**)(v11 + 8LL * (_QWORD)v2);
      if (v12 != nullptr) {
        *(_QWORD*)v33 = *v12;
        *v12 = v33;
      }
      else {
        v20 = *v10;
        *v10 = v33;
        *(_QWORD*)v33 = v20;
        *(_QWORD*)(v11 + 8LL * (_QWORD)v2) = v10;
        if (*(_QWORD*)v33 != 0) {
          v21 = *(_QWORD*)(*(_QWORD*)v33 + 8LL);
          if ((v15 & (v15 - 1)) != 0) {
            if (v21 >= v15) {
              v21 %= v15;
            }
          }
          else {
            v21 &= v15 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(v1 + 264) + 8 * v21) = v33;
        }
      }
      v9 = *(_QWORD*)(v1 + 288) + 1LL;
      *(_QWORD*)(v1 + 288) = v9;
      v13 = *(_QWORD*)(v14 + 40);
    LABEL_23:
      ++v7;
      ++*(_DWORD*)(v1 + 304 + 4LL * *(unsigned __int8*)(v13 + 49));
    } while (v7 != v8);
  }
  return result;
}

void AutoGrowJobFile_12c0bc0(__int64 a1, __int64 a2, char** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  int v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64** v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  _BOOL8 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 primeEm;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  char v56;
  int v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  int v99;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64** v103;
  __int64* v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64* v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  unsigned __int64 v111;
  __int64* v112;
  __int64 v113;
  __int64 v114;
  signed __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64* v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  _QWORD* v124;
  _QWORD* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  int v130;
  __int64 v131;
  __int64 v132;
  struct {
    __int64 v133;
    unsigned __int64 v134;
  } v133_;
  struct {
    _QWORD* v135;
    unsigned __int64 v136;
    float v137;
  } v135_;

  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  v4 = (__int64*)(a1 + 16);
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  v131 = a1 + 24;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  v6 = GameData_212cba0[0];
  v7 = *GameData_212cba0[0];
  v135_.v135 = nullptr;
  v135_.v136 = 0;
  v10 = v7 + 64;
  v8 = *(_QWORD*)(v7 + 64);
  v9 = *(_QWORD*)(v10 + 8);
  v133_.v133 = 0;
  v133_.v134 = 0;
  v11 = v9 - v8;
  v12 = v11 >> 3;
  v135_.v137 = 0x1.0000000000000p+0f;
  v132 = (v11 >> 3) & 0x7FFFFFFF;
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((int)(v11 >> 3) >= 1) {
    v129 = v11 >> 3;
    v16 = 0;
    v17 = 0;
    while (1) {
      v20 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8 * v17);
      v21 = *(_QWORD*)(v20 + 72);
      if (v21 != 0 && v21 != *(_QWORD*)(a2 + 392)) {
        goto LABEL_33;
      }
      v23 = *a3;
      v22 = a3[1];
      v24 = *(_QWORD*)(v20 + 40);
      if (*a3 != v22) {
        v25 = v22 - v23 - 8;
        if ((~(_BYTE)v25 & 0x18) == 0) {
        LABEL_15:
          if (v25 >= 0x18) {
            v23 += 16;
            while (1) {
              if (*((_QWORD*)v23 - 2) == v24) {
                if (v23 - 16 != v22) {
                  goto LABEL_33;
                }
                goto LABEL_81;
              }
              if (*((_QWORD*)v23 - 1) == v24) {
                v23 -= 8;
                goto LABEL_32;
              }
              if (*(_QWORD*)v23 == v24) {
                goto LABEL_32;
              }
              if (*((_QWORD*)v23 + 1) == v24) {
                break;
              }
              v27 = v23 + 16;
              v23 += 32;
              if (v27 == v22) {
                goto LABEL_81;
              }
            }
            if (v23 + 8 != v22) {
              goto LABEL_33;
            }
          }
          goto LABEL_81;
        }
        v26 = ((unsigned __int8)((unsigned int)v25 >> 3) + 1) & 3;
        while (*(_QWORD*)v23 != v24) {
          v23 += 8;
          if (--v26 == 0) {
            goto LABEL_15;
          }
        }
      }
    LABEL_32:
      if (v23 != v22) {
        goto LABEL_33;
      }
    LABEL_81:
      v49 = *(_QWORD*)(v24 + 496);
      if (v49 != 0) {
        v50 = *(unsigned __int16*)(v24 + 488);
        if (v50 != 0) {
          v51 = (__int64*)(v49 + 8);
          while (1) {
            v52 = *v51;
            v51 += 2;
            if (v52 == *(_QWORD*)(a2 + 392)) {
              break;
            }
            if (--v50 == 0) {
              goto LABEL_7;
            }
          }
        LABEL_33:
          v30 = v133_.v134;
          if (v133_.v134 != 0) {
            v31 = v133_.v134 - 1;
            if ((v133_.v134 & (v133_.v134 - 1)) != 0) {
              v3 = v17;
              if (v133_.v134 <= v17) {
                v3 = v17 % v133_.v134;
              }
            }
            else {
              v3 = (v133_.v134 + 0x7FFFFFFF) & v17;
            }
            v32 = *(__int64***)(v133_.v133 + 8 * v3);
            if (v32 != nullptr) {
              v33 = *v32;
              if (v33 != nullptr) {
                if ((v133_.v134 & v31) == 0) {
                  while (1) {
                    v35 = v33[1];
                    if (v35 == v17) {
                      if (v17 == *((_DWORD*)v33 + 4)) {
                        goto LABEL_7;
                      }
                    }
                    else if ((v35 & v31) != v3) {
                      goto LABEL_53;
                    }
                    v33 = (__int64*)*v33;
                    if (v33 == nullptr) {
                      goto LABEL_53;
                    }
                  }
                }
                do {
                  v34 = v33[1];
                  if (v34 == v17) {
                    if (v17 == *((_DWORD*)v33 + 4)) {
                      goto LABEL_7;
                    }
                  }
                  else {
                    if (v34 >= v133_.v134) {
                      v34 %= v133_.v134;
                    }
                    if (v34 != v3) {
                      break;
                    }
                  }
                  v33 = (__int64*)*v33;
                } while (v33 != nullptr);
              }
            }
          }
        LABEL_53:
          v36 = fw_memory_HeapManager_Allocate_alt1(*v13, 24, 16, 0);
          v37 = v135_.v136;
          v38 = v135_.v137;
          v39 = v36;
          *(_QWORD*)v36 = 0;
          *(_QWORD*)(v36 + 8) = v17;
          *(_DWORD*)(v36 + 16) = v17;
          v40 = (float)(v37 + 1);
          if (v30 == 0 || (float)(v38 * (float)v30) < v40) {
            v41 = v40 / v38;
            v42 = (v30 & (v30 - 1)) != 0;
            if (v30 < 3) {
              v42 = true;
            }
            v43 = v42 | (2 * v30);
            v44 = vcvtps_u64_f32(v41);
            if (v43 <= v44) {
              v45 = v44;
            }
            else {
              v45 = v43;
            }
            if (v45 == 1) {
              v45 = 2;
            }
            else if ((v45 & (v45 - 1)) != 0) {
              primeEm = std___1___next_prime_alt1(v45);
              v30 = v133_.v134;
              v45 = primeEm;
            }
            if (v45 > v30) {
              goto LABEL_65;
            }
            if (v45 < v30) {
              v47 = vcvtps_u64_f32((float)v135_.v136 / v135_.v137);
              if (v30 < 3 || (v30 & (v30 - 1)) != 0) {
                v47 = std___1___next_prime_alt1(v47);
              }
              else {
                v48 = 1LL << (-(char)__clz(v47 - 1) & 63);
                if (v47 >= 2) {
                  v47 = v48;
                }
              }
              if (v45 <= v47) {
                v45 = v47;
              }
              if (v45 < v30) {
              LABEL_65:
                GameRoutine_7d0c20_alt1(&v133_.v133, v45);
              }
            }
            v30 = v133_.v134;
            if ((v133_.v134 & (v133_.v134 - 1)) != 0) {
              if (v133_.v134 <= v17) {
                v3 = v17 % v133_.v134;
              }
              else {
                v3 = v17;
              }
            }
            else {
              v3 = (v133_.v134 + 0x7FFFFFFF) & v17;
            }
          }
          v18 = v133_.v133;
          v19 = *(__int64**)(v133_.v133 + 8 * v3);
          if (v19 != nullptr) {
            *(_QWORD*)v39 = *v19;
            *v19 = v39;
          }
          else {
            v28 = v135_.v135;
            v135_.v135 = (_QWORD*)v39;
            *(_QWORD*)v39 = v28;
            *(_QWORD*)(v18 + 8 * v3) = &v135_.v135;
            if (*(_QWORD*)v39 != 0) {
              v29 = *(_QWORD*)(*(_QWORD*)v39 + 8LL);
              if ((v30 & (v30 - 1)) != 0) {
                if (v29 >= v30) {
                  v29 %= v30;
                }
              }
              else {
                v29 &= v30 - 1;
              }
              *(_QWORD*)(v133_.v133 + 8 * v29) = v39;
            }
          }
          v16 = ++v135_.v136;
        }
      }
    LABEL_7:
      if (++v17 == v132) {
        v53 = *v4;
        LODWORD(v12) = v129;
        goto LABEL_89;
      }
    }
  }
  v53 = 0;
  v16 = 0;
LABEL_89:
  v54 = *v13;
  v55 = __OFSUB__((_DWORD)v12, v16);
  v57 = v12 - v16;
  v56 = (v57 < 0) ^ v55;
  *(_DWORD*)(a1 + 8) = v57;
  v58 = 16LL * v57;
  if (v56) {
    v59 = -1;
  }
  else {
    v59 = v58;
  }
  v60 = fw_memory_HeapManager_Allocate_alt1(v54, v59, 16, 0);
  memset_alt1(v60, 0, v59);
  *(_QWORD*)(a1 + 16) = v60;
  if (v53 != 0) {
    v61 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v13 + v61, v53);
  }
  v62 = *v6;
  if (*v6 != 0) {
    LODWORD(v62) = *(_DWORD*)(v62 + 304);
  }
  v63 = (int)v62;
  v64 = *(_QWORD*)(a1 + 24);
  if ((int)v62 > (unsigned __int64)((*(_QWORD*)(a1 + 40) - v64) >> 3)) {
    if ((v62 & 0x80000000) != 0) {
      goto LABEL_199;
    }
    v65 = *(_QWORD*)(a1 + 32) - v64;
    v66 = fw_memory_HeapManager_Allocate_alt1(*v13, 8LL * (int)v62, 16, 0);
    memcpy_alt1(v66, v64, v65);
    *(_QWORD*)(a1 + 24) = v66;
    *(_QWORD*)(a1 + 32) = v66 + v65;
    *(_QWORD*)(a1 + 40) = v66 + 8 * v63;
    if (v64 != 0) {
      v67 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v13 + v67, v64);
    }
  }
  v68 = *v6;
  if (*v6 != 0) {
    LODWORD(v68) = *(_DWORD*)(v68 + 308);
  }
  v69 = (int)v68;
  v70 = *(_QWORD*)(a1 + 48);
  if ((int)v68 > (unsigned __int64)((*(_QWORD*)(a1 + 64) - v70) >> 3)) {
    if ((v68 & 0x80000000) != 0) {
      goto LABEL_199;
    }
    v71 = *(_QWORD*)(a1 + 56) - v70;
    v72 = fw_memory_HeapManager_Allocate_alt1(*v13, 8LL * (int)v68, 16, 0);
    memcpy_alt1(v72, v70, v71);
    *(_QWORD*)(a1 + 48) = v72;
    *(_QWORD*)(a1 + 56) = v72 + v71;
    *(_QWORD*)(a1 + 64) = v72 + 8 * v69;
    if (v70 != 0) {
      v73 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v73 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v13 + v73, v70);
    }
  }
  v74 = *v6;
  if (*v6 != 0) {
    LODWORD(v74) = *(_DWORD*)(v74 + 312);
  }
  v75 = (int)v74;
  v76 = *(_QWORD*)(a1 + 72);
  if ((int)v74 > (unsigned __int64)((*(_QWORD*)(a1 + 88) - v76) >> 3)) {
    if ((v74 & 0x80000000) != 0) {
      goto LABEL_199;
    }
    v77 = *(_QWORD*)(a1 + 80) - v76;
    v78 = fw_memory_HeapManager_Allocate_alt1(*v13, 8LL * (int)v74, 16, 0);
    memcpy_alt1(v78, v76, v77);
    *(_QWORD*)(a1 + 72) = v78;
    *(_QWORD*)(a1 + 80) = v78 + v77;
    *(_QWORD*)(a1 + 88) = v78 + 8 * v75;
    if (v76 != 0) {
      v79 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v79 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v13 + v79, v76);
    }
  }
  v80 = *v6;
  if (*v6 != 0) {
    LODWORD(v80) = *(_DWORD*)(v80 + 316);
  }
  v81 = (int)v80;
  v82 = *(_QWORD*)(a1 + 96);
  if ((int)v80 > (unsigned __int64)((*(_QWORD*)(a1 + 112) - v82) >> 3)) {
    if ((v80 & 0x80000000) != 0) {
      goto LABEL_199;
    }
    v83 = *(_QWORD*)(a1 + 104) - v82;
    v84 = fw_memory_HeapManager_Allocate_alt1(*v13, 8LL * (int)v80, 16, 0);
    memcpy_alt1(v84, v82, v83);
    *(_QWORD*)(a1 + 96) = v84;
    *(_QWORD*)(a1 + 104) = v84 + v83;
    *(_QWORD*)(a1 + 112) = v84 + 8 * v81;
    if (v82 != 0) {
      v85 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v13 + v85, v82);
    }
  }
  v86 = *v6;
  if (*v6 != 0) {
    LODWORD(v86) = *(_DWORD*)(v86 + 320);
  }
  v87 = (int)v86;
  v88 = *(_QWORD*)(a1 + 120);
  if ((int)v86 > (unsigned __int64)((*(_QWORD*)(a1 + 136) - v88) >> 3)) {
    if ((v86 & 0x80000000) != 0) {
      goto LABEL_199;
    }
    v89 = *(_QWORD*)(a1 + 128) - v88;
    v90 = fw_memory_HeapManager_Allocate_alt1(*v13, 8LL * (int)v86, 16, 0);
    memcpy_alt1(v90, v88, v89);
    *(_QWORD*)(a1 + 120) = v90;
    *(_QWORD*)(a1 + 128) = v90 + v89;
    *(_QWORD*)(a1 + 136) = v90 + 8 * v87;
    if (v88 != 0) {
      v91 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v13 + v91, v88);
    }
  }
  v92 = *v6;
  if (*v6 != 0) {
    LODWORD(v92) = *(_DWORD*)(v92 + 324);
  }
  v93 = (int)v92;
  v94 = *(_QWORD*)(a1 + 144);
  if ((int)v92 > (unsigned __int64)((*(_QWORD*)(a1 + 160) - v94) >> 3)) {
    if ((v92 & 0x80000000) == 0) {
      v95 = *(_QWORD*)(a1 + 152) - v94;
      v96 = fw_memory_HeapManager_Allocate_alt1(*v13, 8LL * (int)v92, 16, 0);
      memcpy_alt1(v96, v94, v95);
      *(_QWORD*)(a1 + 144) = v96;
      *(_QWORD*)(a1 + 152) = v96 + v95;
      *(_QWORD*)(a1 + 160) = v96 + 8 * v93;
      if (v94 != 0) {
        v97 = 128;
        if (*(_QWORD*)(*v13 + 200) == 0) {
          v97 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v13 + v97, v94);
      }
      goto LABEL_144;
    }
  LABEL_199:
    GameRoutine_12c60f0_alt1();
  }
LABEL_144:
  if ((int)v12 > 0) {
    v98 = 0;
    v99 = 0;
    do {
      if (v133_.v134 != 0 && v135_.v136 != 0) {
        v101 = v133_.v134 - 1;
        if ((v133_.v134 & (v133_.v134 - 1)) != 0) {
          v102 = v98;
          if (v133_.v134 <= v98) {
            v102 = v98 % v133_.v134;
          }
        }
        else {
          v102 = (v133_.v134 + 0x7FFFFFFF) & v98;
        }
        v103 = *(__int64***)(v133_.v133 + 8 * v102);
        if (v103 != nullptr) {
          v104 = *v103;
          if (v104 != nullptr) {
            if ((v133_.v134 & v101) == 0) {
              while (1) {
                v106 = v104[1];
                if (v106 == v98) {
                  if (v98 == *((_DWORD*)v104 + 4)) {
                    goto LABEL_188;
                  }
                }
                else if ((v106 & v101) != v102) {
                  goto LABEL_169;
                }
                v104 = (__int64*)*v104;
                if (v104 == nullptr) {
                  goto LABEL_169;
                }
              }
            }
            do {
              v105 = v104[1];
              if (v105 == v98) {
                if (v98 == *((_DWORD*)v104 + 4)) {
                  goto LABEL_188;
                }
              }
              else {
                if (v105 >= v133_.v134) {
                  v105 %= v133_.v134;
                }
                if (v105 != v102) {
                  break;
                }
              }
              v104 = (__int64*)*v104;
            } while (v104 != nullptr);
          }
        }
      }
    LABEL_169:
      v107 = v13;
      v108 = *v4 + 16LL * v99;
      v109 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8 * v98);
      *(_DWORD*)(v108 + 8) = 0;
      *(_BYTE*)(v108 + 12) = 0;
      *(_QWORD*)v108 = v109;
      v110 =
          (__int64*)(v131 +
                     24LL * *(unsigned __int8*)(*(_QWORD*)(v109 + 40) + 49LL));
      v112 = (__int64*)v110[1];
      v111 = v110[2];
      if ((unsigned __int64)v112 >= v111) {
        v114 = *v110;
        v115 = (signed __int64)v112 - *v110;
        v116 = (v115 >> 3) + 1;
        if (v116 >> 61 != 0) {
          goto LABEL_199;
        }
        v117 = v111 - v114;
        v118 = v4;
        v130 = v99;
        if (v117 >> 2 > v116) {
          v116 = v117 >> 2;
        }
        if ((unsigned __int64)v117 >= 0x7FFFFFFFFFFFFFF8LL) {
          v119 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v119 = v116;
        }
        if (v119 != 0) {
          if (v119 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v120 = fw_memory_HeapManager_Allocate_alt1(*v107, 8 * v119, 16, 0);
        }
        else {
          v120 = 0;
        }
        v121 = v120 + 8 * v119;
        v122 = v120 + v115 - 8 * (v115 >> 3);
        *(_QWORD*)(v120 + v115) = v108;
        v113 = v120 + v115 + 8;
        memcpy_alt1(v122, v114, v115);
        *v110 = v122;
        v110[1] = v113;
        v110[2] = v121;
        if (v114 != 0) {
          v13 = v107;
          v123 = 128;
          if (*(_QWORD*)(*v107 + 200) == 0) {
            v123 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v107 + v123, v114);
          v4 = v118;
        }
        else {
          v4 = v118;
          v13 = v107;
        }
        v99 = v130;
      }
      else {
        *v112 = v108;
        v113 = (__int64)(v112 + 1);
        v13 = v107;
      }
      v110[1] = v113;
      ++v99;
      v6 = GameData_212cba0[0];
    LABEL_188:
      ++v98;
    } while (v98 != v132);
  }
  v124 = v135_.v135;
  if (v135_.v135 != nullptr) {
    do {
      v125 = (_QWORD*)*v124;
      if (*(_QWORD*)(*v13 + 200) != 0) {
        v126 = 128;
      }
      else {
        v126 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v13 + v126, (__int64)v124);
      v124 = v125;
    } while (v125 != nullptr);
  }
  v127 = v133_.v133;
  v133_.v133 = 0;
  if (v127 != 0) {
    v128 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v128 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v13 + v128, v127);
  }
}

#pragma GCC visibility pop
