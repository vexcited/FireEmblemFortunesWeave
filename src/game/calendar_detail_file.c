#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12d65a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_12c7260(unsigned __int64 result);
unsigned __int64 CalendarDetailFile_Unknown4_alt1(__int64 a1) __asm__(
    "CalendarDetailFile_Unknown4");
unsigned __int64 CalendarDetailFile_12c8890_alt1(__int64 a1) __asm__(
    "CalendarDetailFile_12c8890");
__int64 CalendarDetailFile_Unknown5_alt1(__int64 result) __asm__(
    "CalendarDetailFile_Unknown5");
__int64 CalendarDetailFile_12d65a0(_QWORD);
__int64 CalendarDetailFile_Unknown6_alt1(__int64 result) __asm__(
    "CalendarDetailFile_Unknown6");
__int64 CalendarDetailFile_12c7c80_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "CalendarDetailFile_12c7c80");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 GameData_21c9c98;
void __attribute__((noreturn)) GameRoutine_12cc9b0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
unsigned __int64 CalendarDetailFile_12c7260_alt1(
    unsigned __int64 result) __asm__("CalendarDetailFile_12c7260");
__int64 CalendarDetailFile_12c7c80_alt2(
    __int64 result, unsigned __int16* a2,
    __int64* a3) __asm__("CalendarDetailFile_12c7c80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void GameHr_12d65a0(__int64*);
void __attribute__((noreturn))
GameRoutine_12cc9b0_alt1() __asm__("GameRoutine_12cc9b0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CalendarDetailFile_12c7260(__int64 a1);
void CalendarDetailFile_12c7c80(__int64 a1, unsigned __int16* a2, __int64* a3);
void CalendarDetailFile_Unknown4(__int64 a1);
void CalendarDetailFile_12c8890(__int64 a1);
void CalendarDetailFile_Unknown5(__int64 a1);
void CalendarDetailFile_Unknown6(__int64 a1);

void CalendarDetailFile_12c7260(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  __int64 v13;
  __int64*** v14;
  __int64** v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64*** v22;
  __int64** v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  float v30;
  __int64 v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 primeEm;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64* v63;
  __int64 v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64* v89;
  unsigned __int64 v90;
  __int64 v91;
  char* v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64* v102;
  __int64* v103;
  __int64 v104;

  v2 = *(__int64**)(GameData_21c9c98 + 64);
  v101 = *(__int64**)(GameData_21c9c98 + 72);
  if (v2 != v101) {
    v3 = (__int64*)(a1 + 16);
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v102 = (__int64*)(a1 + 16);
    do {
      v7 = *v2;
      v103 = v2;
      v104 = *(unsigned __int16*)(*v2 + 152);
      if (*(_WORD*)(*v2 + 152) == 0) {
        goto LABEL_149;
      }
      v8 = 0;
      do {
        v9 = *(_QWORD*)(a1 + 8);
        v10 = *(unsigned __int8*)(*(_QWORD*)(v7 + 160) + v8);
        if (v9 == 0 || *(_QWORD*)(a1 + 24) == 0) {
          goto LABEL_31;
        }
        v12 = v9 - 1;
        if ((v9 & (v9 - 1)) != 0) {
          v13 = *(unsigned __int8*)(*(_QWORD*)(v7 + 160) + v8);
          if (v9 <= v10) {
            v13 = (unsigned int)v10 % (unsigned int)v9;
          }
        }
        else {
          v13 = ((_DWORD)v9 - 1) & (unsigned int)v10;
        }
        v14 = *(__int64****)(*(_QWORD*)a1 + 8 * v13);
        if (v14 == nullptr || (v15 = *v14, *v14 == nullptr)) {
        LABEL_31:
          v18 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v5, 8, 16, 0);
          v19 = *(_QWORD*)(a1 + 8);
          v20 = v18;
          *v18 = v7;
          if (v19 != 0) {
            v21 = v19 - 1;
            if ((v19 & (v19 - 1)) != 0) {
              v1 = v10;
              if (v19 <= v10) {
                v1 = (unsigned int)v10 % (unsigned int)v19;
              }
            }
            else {
              v1 = ((_DWORD)v19 - 1) & (unsigned int)v10;
            }
            v22 = *(__int64****)(*(_QWORD*)a1 + 8 * v1);
            if (v22 != nullptr) {
              v23 = *v22;
              if (v23 != nullptr) {
                if ((v19 & v21) == 0) {
                  while (1) {
                    v25 = v23[1];
                    if (v25 == (__int64*)v10) {
                      if (*((unsigned __int8*)v23 + 16) == (_DWORD)v10) {
                        goto LABEL_127;
                      }
                    }
                    else if (((unsigned __int64)v25 & v21) != v1) {
                      goto LABEL_51;
                    }
                    v23 = (__int64**)*v23;
                    if (v23 == nullptr) {
                      goto LABEL_51;
                    }
                  }
                }
                do {
                  v24 = (unsigned __int64)v23[1];
                  if (v24 == v10) {
                    if (*((unsigned __int8*)v23 + 16) == (_DWORD)v10) {
                      goto LABEL_127;
                    }
                  }
                  else {
                    if (v24 >= v19) {
                      v24 %= v19;
                    }
                    if (v24 != v1) {
                      break;
                    }
                  }
                  v23 = (__int64**)*v23;
                } while (v23 != nullptr);
              }
            }
          }
        LABEL_51:
          v26 = fw_memory_HeapManager_Allocate_alt1(*v5, 48, 16, 0);
          *(_QWORD*)v26 = 0;
          *(_QWORD*)(v26 + 8) = v10;
          *(_BYTE*)(v26 + 16) = v10;
          *(_QWORD*)(v26 + 24) = 0;
          *(_QWORD*)(v26 + 32) = 0;
          v27 = *v5;
          *(_QWORD*)(v26 + 40) = 0;
          v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v27, 8, 16, 0);
          v29 = *v20;
          *(_QWORD*)(v26 + 24) = v28;
          v30 = *(float*)(a1 + 32);
          *v28++ = v29;
          v31 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)(v26 + 32) = v28;
          *(_QWORD*)(v26 + 40) = v28;
          v32 = (float)(unsigned __int64)(v31 + 1);
          if (v19 != 0 && (float)(v30 * (float)v19) >= v32) {
            goto LABEL_118;
          }
          v33 = v19 < 3 || (v19 & (v19 - 1)) != 0;
          v34 = v33 | (2 * v19);
          v35 = vcvtps_u64_f32(v32 / v30);
          if (v34 <= v35) {
            v36 = v35;
          }
          else {
            v36 = v34;
          }
          if (v36 == 1) {
            v36 = 2;
          }
          else if ((v36 & (v36 - 1)) != 0) {
            primeEm = std___1___next_prime_alt1(v36);
            v19 = *(_QWORD*)(a1 + 8);
            v36 = primeEm;
          }
          if (v36 <= v19) {
            if (v36 < v19) {
              v42 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                                   *(float*)(a1 + 32));
              if (v19 < 3 || (v19 & (v19 - 1)) != 0) {
                v42 = std___1___next_prime_alt1(v42);
              }
              else {
                v43 = 1LL << -(char)__clz(v42 - 1);
                if (v42 >= 2) {
                  v42 = v43;
                }
              }
              if (v36 <= v42) {
                v36 = v42;
              }
              if (v36 < v19) {
                if (v36 != 0) {
                  goto LABEL_64;
                }
                v55 = *(_QWORD*)a1;
                *(_QWORD*)a1 = 0;
                if (v55 != 0) {
                  v56 = 128;
                  if (*(_QWORD*)(*v5 + 200) == 0) {
                    v56 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v5 + v56, v55);
                }
                *(_QWORD*)(a1 + 8) = 0;
              }
            }
            goto LABEL_113;
          }
        LABEL_64:
          if (v36 >> 61 != 0) {
            goto LABEL_184;
          }
          v38 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v36, 16, 0);
          v39 = *(_QWORD*)a1;
          *(_QWORD*)a1 = v38;
          if (v39 != 0) {
            v40 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v5 + v40, v39);
          }
          *(_QWORD*)(a1 + 8) = v36;
          if (v36 >= 8) {
            v41 = 0;
            do {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = 0;
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 8) = 0;
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 16) = 0;
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 24) = 0;
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 32) = 0;
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 40) = 0;
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 48) = 0;
              v44 = *(_QWORD*)a1 + 8 * v41;
              v41 += 8;
              *(_QWORD*)(v44 + 56) = 0;
            } while ((v36 & 0x1FFFFFFFFFFFFFF8LL) != v41);
          }
          else {
            v41 = 0;
          }
          v45 = v36 & 7;
          if ((v36 & 7) != 0) {
            v46 = 8 * v41;
            do {
              --v45;
              *(_QWORD*)(*(_QWORD*)a1 + v46) = 0;
              v46 += 8;
            } while (v45 != 0);
          }
          v47 = (_QWORD*)*v3;
          if (*v3 == 0) {
            goto LABEL_113;
          }
          v48 = v47[1];
          v49 = v36 - 1;
          if ((v36 & (v36 - 1)) == 0) {
            v52 = v48 & v49;
            *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v3;
            while (1) {
              v53 = (_QWORD*)*v47;
              if (*v47 == 0) {
                break;
              }
              v54 = v53[1] & v49;
              if (v54 == v52) {
                v47 = (_QWORD*)*v47;
              }
              else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) != 0) {
                *v47 = *v53;
                *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
                **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
              }
              else {
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v47;
                v47 = v53;
                v52 = v54;
              }
            }
            goto LABEL_113;
          }
          if (v48 >= v36) {
            v48 %= v36;
          }
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v48) = v3;
          v50 = (_QWORD*)*v47;
          if (*v47 == 0) {
          LABEL_113:
            v19 = *(_QWORD*)(a1 + 8);
            if ((v19 & (v19 - 1)) != 0) {
              if (v19 <= v10) {
                v1 = v10 % v19;
              }
              else {
                v1 = v10;
              }
            }
            else {
              v1 = ((_DWORD)v19 - 1) & (unsigned int)v10;
            }
          LABEL_118:
            v57 = *(_QWORD*)a1;
            v58 = *(__int64**)(*(_QWORD*)a1 + 8 * v1);
            if (v58 != nullptr) {
              *(_QWORD*)v26 = *v58;
              *v58 = v26;
            }
            else {
              v59 = *v3;
              *v3 = v26;
              *(_QWORD*)v26 = v59;
              *(_QWORD*)(v57 + 8 * v1) = v3;
              if (*(_QWORD*)v26 != 0) {
                v60 = *(_QWORD*)(*(_QWORD*)v26 + 8LL);
                if ((v19 & (v19 - 1)) != 0) {
                  if (v60 >= v19) {
                    v60 %= v19;
                  }
                }
                else {
                  v60 &= v19 - 1;
                }
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v60) = v26;
              }
            }
            ++*(_QWORD*)(a1 + 24);
          LABEL_127:
            v61 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v5 + v61, (__int64)v20);
            goto LABEL_130;
          }
          while (2) {
            v51 = v50[1];
            if (v51 >= v36) {
              v51 %= v36;
            }
            if (v51 != v48) {
              if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v51) == 0) {
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v47;
              LABEL_90:
                v47 = v50;
                v50 = (_QWORD*)*v50;
                v48 = v51;
                if (v50 == nullptr) {
                  goto LABEL_113;
                }
                continue;
              }
              *v47 = *v50;
              *v50 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v51);
              **(_QWORD**)(*(_QWORD*)a1 + 8 * v51) = v50;
              v50 = v47;
            }
            break;
          }
          v51 = v48;
          goto LABEL_90;
        }
        if ((v9 & v12) == 0) {
          while (1) {
            v17 = v15[1];
            if (v17 == (__int64*)v10) {
              if (*((unsigned __int8*)v15 + 16) == (_DWORD)v10) {
                goto LABEL_132;
              }
            }
            else if (((unsigned __int64)v17 & v12) != v13) {
              goto LABEL_31;
            }
            v15 = (__int64**)*v15;
            if (v15 == nullptr) {
              goto LABEL_31;
            }
          }
        }
        while (1) {
          v16 = (unsigned __int64)v15[1];
          if (v16 == v10) {
            break;
          }
          if (v16 >= v9) {
            v16 %= v9;
          }
          if (v16 != v13) {
            goto LABEL_31;
          }
        LABEL_21:
          v15 = (__int64**)*v15;
          if (v15 == nullptr) {
            goto LABEL_31;
          }
        }
        if (*((unsigned __int8*)v15 + 16) != (_DWORD)v10) {
          goto LABEL_21;
        }
      LABEL_132:
        v63 = v15[4];
        v62 = (unsigned __int64)v15[5];
        if ((unsigned __int64)v63 < v62) {
          *v63 = v7;
          v15[4] = v63 + 1;
          goto LABEL_130;
        }
        v64 = (__int64)v15[3];
        v65 = (char*)v63 - v64;
        v66 = ((__int64)v63 - v64) >> 3;
        v67 = v66 + 1;
        if ((unsigned __int64)(v66 + 1) >> 61 != 0) {
          goto LABEL_185;
        }
        v68 = v62 - v64;
        if (v68 >> 2 > v67) {
          v67 = v68 >> 2;
        }
        if ((unsigned __int64)v68 >= 0x7FFFFFFFFFFFFFF8LL) {
          v69 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v69 = v67;
        }
        if (v69 != 0) {
          if (v69 >> 61 == 0) {
            v70 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v69, 16, 0);
            goto LABEL_144;
          }
        LABEL_184:
          GameRoutine_60a210_alt1();
        }
        v70 = 0;
      LABEL_144:
        v71 = v70 + 8 * v69;
        v72 = (unsigned __int64)v63 - v64;
        v1 = (__int64)&v65[v70 + -8 * v66];
        *(_QWORD*)&v65[v70] = v7;
        v73 = (__int64)&v65[v70 + 8];
        memcpy_alt1(v1, v64, v72);
        v15[3] = (__int64*)v1;
        v15[4] = (__int64*)v73;
        v15[5] = (__int64*)v71;
        if (v64 != 0) {
          v74 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v74 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v74, v64);
        }
        v3 = v102;
        v15[4] = (__int64*)v73;
      LABEL_130:
        ++v8;
      } while (v8 != v104);
    LABEL_149:
      CalendarDetailFile_12c7c80(v7, (unsigned __int16*)(v7 + 168),
                                 (__int64*)(a1 + 40));
      CalendarDetailFile_12c7c80(v7, (unsigned __int16*)(v7 + 184),
                                 (__int64*)(a1 + 160));
      CalendarDetailFile_12c7c80(v7, (unsigned __int16*)(v7 + 200),
                                 (__int64*)(a1 + 280));
      CalendarDetailFile_12c7c80(v7, (unsigned __int16*)(v7 + 216),
                                 (__int64*)(a1 + 400));
      CalendarDetailFile_12c7c80(v7, (unsigned __int16*)(v7 + 232),
                                 (__int64*)(a1 + 520));
      CalendarDetailFile_12c7c80(v7, (unsigned __int16*)(v7 + 248),
                                 (__int64*)(a1 + 640));
      CalendarDetailFile_12c7c80(v7, (unsigned __int16*)(v7 + 264),
                                 (__int64*)(a1 + 760));
      v75 = *(_BYTE*)(v7 + 280);
      if ((v75 & 1) == 0) {
        goto LABEL_167;
      }
      v76 = *(__int64**)(a1 + 888);
      v77 = *(_QWORD*)(a1 + 896);
      if ((unsigned __int64)v76 < v77) {
        *v76 = v7;
        v78 = (__int64)(v76 + 1);
        goto LABEL_166;
      }
      v79 = *(_QWORD*)(a1 + 880);
      v80 = (char*)v76 - v79;
      v81 = ((__int64)v76 - v79) >> 3;
      v82 = v81 + 1;
      if ((unsigned __int64)(v81 + 1) >> 61 != 0) {
        goto LABEL_185;
      }
      v83 = v77 - v79;
      if (v83 >> 2 > v82) {
        v82 = v83 >> 2;
      }
      if ((unsigned __int64)v83 >= 0x7FFFFFFFFFFFFFF8LL) {
        v84 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v84 = v82;
      }
      if (v84 != 0) {
        if (v84 >> 61 != 0) {
          goto LABEL_184;
        }
        v85 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v84, 16, 0);
      }
      else {
        v85 = 0;
      }
      v86 = v85 + 8 * v84;
      v87 = (unsigned __int64)v76 - v79;
      v1 = (__int64)&v80[v85 + -8 * v81];
      *(_QWORD*)&v80[v85] = v7;
      v78 = (__int64)&v80[v85 + 8];
      memcpy_alt1(v1, v79, v87);
      *(_QWORD*)(a1 + 880) = v1;
      *(_QWORD*)(a1 + 888) = v78;
      *(_QWORD*)(a1 + 896) = v86;
      if (v79 != 0) {
        v88 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v88 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v5 + v88, v79);
      }
    LABEL_166:
      *(_QWORD*)(a1 + 888) = v78;
      v3 = v102;
      v75 = *(_BYTE*)(v7 + 280);
    LABEL_167:
      if ((v75 & 2) == 0) {
        goto LABEL_5;
      }
      v89 = *(__int64**)(a1 + 912);
      v90 = *(_QWORD*)(a1 + 920);
      if ((unsigned __int64)v89 < v90) {
        *v89 = v7;
        v6 = (__int64)(v89 + 1);
        goto LABEL_4;
      }
      v91 = *(_QWORD*)(a1 + 904);
      v92 = (char*)v89 - v91;
      v93 = ((__int64)v89 - v91) >> 3;
      v94 = v93 + 1;
      if ((unsigned __int64)(v93 + 1) >> 61 != 0) {
      LABEL_185:
        GameRoutine_12cc9b0_alt1();
      }
      v95 = v90 - v91;
      if (v95 >> 2 > v94) {
        v94 = v95 >> 2;
      }
      if ((unsigned __int64)v95 >= 0x7FFFFFFFFFFFFFF8LL) {
        v96 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v96 = v94;
      }
      if (v96 != 0) {
        if (v96 >> 61 != 0) {
          goto LABEL_184;
        }
        v97 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v96, 16, 0);
      }
      else {
        v97 = 0;
      }
      v98 = v97 + 8 * v96;
      v99 = (unsigned __int64)v89 - v91;
      v1 = (__int64)&v92[v97 + -8 * v93];
      *(_QWORD*)&v92[v97] = v7;
      v6 = (__int64)&v92[v97 + 8];
      memcpy_alt1(v1, v91, v99);
      *(_QWORD*)(a1 + 904) = v1;
      *(_QWORD*)(a1 + 912) = v6;
      *(_QWORD*)(a1 + 920) = v98;
      if (v91 != 0) {
        v100 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v5 + v100, v91);
      }
    LABEL_4:
      *(_QWORD*)(a1 + 912) = v6;
      v3 = v102;
    LABEL_5:
      v2 = v103 + 1;
    } while (v103 + 1 != v101);
  }
}

void CalendarDetailFile_12c7c80(__int64 a1, unsigned __int16* a2, __int64* a3)
{
  __int64 v3;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;

  v3 = *a2;
  if (*a2 != 0) {
    if ((_DWORD)v3 != 1 || **((_BYTE**)a2 + 1) != 99) {
      v9 = 0;
      while (1) {
        v11 = *(unsigned __int8*)(*((_QWORD*)a2 + 1) + v9) - 1LL;
        if (v11 >= 5) {
          String_60a250_alt1("array::at");
        }
        v12 = &a3[3 * (int)v11];
        v14 = (_QWORD*)v12[1];
        v13 = v12[2];
        if ((unsigned __int64)v14 < v13) {
          *v14 = a1;
          v10 = (__int64)(v14 + 1);
        }
        else {
          v15 = *v12;
          v16 = (signed __int64)v14 - *v12;
          v17 = (v16 >> 3) + 1;
          if (v17 >> 61 != 0) {
            goto LABEL_107;
          }
          v18 = v13 - v15;
          if (v18 >> 2 > v17) {
            v17 = v18 >> 2;
          }
          if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
            v19 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v19 = v17;
          }
          if (v19 != 0) {
            if (v19 >> 61 != 0) {
              goto LABEL_108;
            }
            v20 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
          }
          else {
            v20 = 0;
          }
          v21 = v20 + 8 * v19;
          v22 = v20 + v16 - 8 * (v16 >> 3);
          *(_QWORD*)(v20 + v16) = a1;
          v10 = v20 + v16 + 8;
          memcpy_alt1(v22, v15, v16);
          *v12 = v22;
          v12[1] = v10;
          v12[2] = v21;
          if (v15 != 0) {
            v23 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v15);
          }
        }
        ++v9;
        v12[1] = v10;
        if (v3 == v9) {
          return;
        }
      }
    }
    v7 = (_QWORD*)a3[1];
    v6 = a3[2];
    if ((unsigned __int64)v7 >= v6) {
      v24 = *a3;
      v25 = (signed __int64)v7 - *a3;
      v26 = (v25 >> 3) + 1;
      if (v26 >> 61 != 0) {
        goto LABEL_107;
      }
      v27 = v6 - v24;
      if (v27 >> 2 > v26) {
        v26 = v27 >> 2;
      }
      if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
        v28 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v28 = v26;
      }
      if (v28 != 0) {
        if (v28 >> 61 != 0) {
          goto LABEL_108;
        }
        v29 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      }
      else {
        v29 = 0;
      }
      v30 = v29 + 8 * v28;
      v31 = v29 + v25 - 8 * (v25 >> 3);
      *(_QWORD*)(v29 + v25) = a1;
      v8 = v29 + v25 + 8;
      memcpy_alt1(v31, v24, v25);
      *a3 = v31;
      a3[1] = v8;
      a3[2] = v30;
      if (v24 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v24);
      }
    }
    else {
      *v7 = a1;
      v8 = (__int64)(v7 + 1);
    }
    a3[1] = v8;
    v34 = (_QWORD*)a3[4];
    v33 = a3[5];
    if ((unsigned __int64)v34 >= v33) {
      v36 = a3[3];
      v37 = (unsigned __int64)v34 - v36;
      v38 = ((__int64)v34 - v36) >> 3;
      v39 = v38 + 1;
      if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
        goto LABEL_107;
      }
      v40 = v33 - v36;
      if (v40 >> 2 > v39) {
        v39 = v40 >> 2;
      }
      if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
        v41 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v41 = v39;
      }
      if (v41 != 0) {
        if (v41 >> 61 != 0) {
          goto LABEL_108;
        }
        v42 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v41, 16, 0);
      }
      else {
        v42 = 0;
      }
      v43 = v42 + 8 * v41;
      v44 = v42 + v37 - 8 * v38;
      *(_QWORD*)(v42 + v37) = a1;
      v35 = v42 + v37 + 8;
      memcpy_alt1(v44, v36, v37);
      a3[3] = v44;
      a3[4] = v35;
      a3[5] = v43;
      if (v36 != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v36);
      }
    }
    else {
      *v34 = a1;
      v35 = (__int64)(v34 + 1);
    }
    a3[4] = v35;
    v47 = (_QWORD*)a3[7];
    v46 = a3[8];
    if ((unsigned __int64)v47 >= v46) {
      v49 = a3[6];
      v50 = (unsigned __int64)v47 - v49;
      v51 = ((__int64)v47 - v49) >> 3;
      v52 = v51 + 1;
      if ((unsigned __int64)(v51 + 1) >> 61 != 0) {
        goto LABEL_107;
      }
      v53 = v46 - v49;
      if (v53 >> 2 > v52) {
        v52 = v53 >> 2;
      }
      if ((unsigned __int64)v53 >= 0x7FFFFFFFFFFFFFF8LL) {
        v54 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v54 = v52;
      }
      if (v54 != 0) {
        if (v54 >> 61 != 0) {
          goto LABEL_108;
        }
        v55 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v54, 16, 0);
      }
      else {
        v55 = 0;
      }
      v56 = v55 + 8 * v54;
      v57 = v55 + v50 - 8 * v51;
      *(_QWORD*)(v55 + v50) = a1;
      v48 = v55 + v50 + 8;
      memcpy_alt1(v57, v49, v50);
      a3[6] = v57;
      a3[7] = v48;
      a3[8] = v56;
      if (v49 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v49);
      }
    }
    else {
      *v47 = a1;
      v48 = (__int64)(v47 + 1);
    }
    a3[7] = v48;
    v60 = (_QWORD*)a3[10];
    v59 = a3[11];
    if ((unsigned __int64)v60 >= v59) {
      v62 = a3[9];
      v63 = (unsigned __int64)v60 - v62;
      v64 = ((__int64)v60 - v62) >> 3;
      v65 = v64 + 1;
      if ((unsigned __int64)(v64 + 1) >> 61 != 0) {
        goto LABEL_107;
      }
      v66 = v59 - v62;
      if (v66 >> 2 > v65) {
        v65 = v66 >> 2;
      }
      if ((unsigned __int64)v66 >= 0x7FFFFFFFFFFFFFF8LL) {
        v67 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v67 = v65;
      }
      if (v67 != 0) {
        if (v67 >> 61 != 0) {
          goto LABEL_108;
        }
        v68 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v67, 16, 0);
      }
      else {
        v68 = 0;
      }
      v69 = v68 + 8 * v67;
      v70 = v68 + v63 - 8 * v64;
      *(_QWORD*)(v68 + v63) = a1;
      v61 = v68 + v63 + 8;
      memcpy_alt1(v70, v62, v63);
      a3[9] = v70;
      a3[10] = v61;
      a3[11] = v69;
      if (v62 != 0) {
        v71 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v71 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, v62);
      }
    }
    else {
      *v60 = a1;
      v61 = (__int64)(v60 + 1);
    }
    a3[10] = v61;
    v73 = (_QWORD*)a3[13];
    v72 = a3[14];
    if ((unsigned __int64)v73 < v72) {
      *v73 = a1;
      v74 = (__int64)(v73 + 1);
    LABEL_104:
      a3[13] = v74;
      return;
    }
    v75 = a3[12];
    v76 = (unsigned __int64)v73 - v75;
    v77 = ((__int64)v73 - v75) >> 3;
    v78 = v77 + 1;
    if ((unsigned __int64)(v77 + 1) >> 61 == 0) {
      v79 = v72 - v75;
      if (v79 >> 2 > v78) {
        v78 = v79 >> 2;
      }
      if ((unsigned __int64)v79 >= 0x7FFFFFFFFFFFFFF8LL) {
        v80 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v80 = v78;
      }
      if (v80 == 0) {
        v81 = 0;
      LABEL_100:
        v82 = v81 + 8 * v80;
        v83 = v81 + v76 - 8 * v77;
        *(_QWORD*)(v81 + v76) = a1;
        v74 = v81 + v76 + 8;
        memcpy_alt1(v83, v75, v76);
        a3[12] = v83;
        a3[13] = v74;
        a3[14] = v82;
        if (v75 != 0) {
          v84 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v75);
        }
        goto LABEL_104;
      }
      if (v80 >> 61 == 0) {
        v81 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v80, 16, 0);
        goto LABEL_100;
      }
    LABEL_108:
      GameRoutine_60a210_alt1();
    }
  LABEL_107:
    GameRoutine_12cc9b0_alt1();
  }
}

void CalendarDetailFile_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 928, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_DWORD*)(v3 + 32) = 1065353216;
  memset_alt1(v3 + 40, 0, 0x378u);
  CalendarDetailFile_12c7260(v3);
  v4 = *(__int64**)(a1 + 264);
  *(_QWORD*)(a1 + 264) = v3;
  if (v4 != nullptr) {
    GameHr_12d65a0(v4);
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, (__int64)v4);
  }
}

void CalendarDetailFile_12c8890(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 928, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_DWORD*)(v3 + 32) = 1065353216;
  memset_alt1(v3 + 40, 0, 0x378u);
  CalendarDetailFile_12c7260(v3);
  v4 = *(__int64**)(a1 + 256);
  *(_QWORD*)(a1 + 256) = v3;
  if (v4 != nullptr) {
    GameHr_12d65a0(v4);
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, (__int64)v4);
  }
}

void CalendarDetailFile_Unknown5(__int64 a1)
{
  __int64* v1;
  __int64 v2;

  v1 = *(__int64**)(a1 + 264);
  *(_QWORD*)(a1 + 264) = 0;
  if (v1 != nullptr) {
    GameHr_12d65a0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)v1);
  }
}

void CalendarDetailFile_Unknown6(__int64 a1)
{
  __int64* v1;
  __int64 v2;

  v1 = *(__int64**)(a1 + 256);
  *(_QWORD*)(a1 + 256) = 0;
  if (v1 != nullptr) {
    GameHr_12d65a0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)v1);
  }
}

#pragma GCC visibility pop
