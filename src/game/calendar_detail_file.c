#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12d65a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_12c7260(unsigned __int64 result);
unsigned __int64 CalendarDetailFile_Unknown4(__int64 a1);
unsigned __int64 CalendarDetailFile_12c8890(__int64 a1);
__int64 CalendarDetailFile_Unknown5(__int64 result);
__int64 CalendarDetailFile_12d65a0(_QWORD);
__int64 CalendarDetailFile_Unknown6(__int64 result);
__int64 CalendarDetailFile_12c7c80_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "CalendarDetailFile_12c7c80");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 GameData_21c9c98;
void __attribute__((noreturn)) GameRoutine_12cc9b0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
unsigned __int64 CalendarDetailFile_12c7260(unsigned __int64 result);
__int64 CalendarDetailFile_12c7c80(__int64 result, unsigned __int16* a2,
                                   __int64* a3);

unsigned __int64 CalendarDetailFile_12c7260(unsigned __int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
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
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64* v61;
  __int64* v62;
  char* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  char* v70;
  __int64 v71;
  __int64 v72;
  char v73;
  _QWORD* v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  char* v85;
  __int64 v86;
  _QWORD* v87;
  unsigned __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  char* v97;
  __int64 v98;
  __int64* v99;
  __int64* v100;
  __int64* v101;
  __int64 v102;

  v2 = *(__int64**)(GameData_21c9c98 + 64);
  v99 = *(__int64**)(GameData_21c9c98 + 72);
  if (v2 != v99) {
    v3 = (__int64*)(result + 16);
    v4 = result;
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v100 = (__int64*)(result + 16);
    do {
      v7 = *v2;
      v101 = v2;
      v102 = *(unsigned __int16*)(*v2 + 152);
      if (*(_WORD*)(*v2 + 152) == 0) {
        goto LABEL_149;
      }
      v8 = 0;
      do {
        v9 = *(_QWORD*)(v4 + 8);
        v10 = *(unsigned __int8*)(*(_QWORD*)(v7 + 160) + v8);
        if (v9 == 0 || *(_QWORD*)(v4 + 24) == 0) {
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
        v14 = *(__int64****)(*(_QWORD*)v4 + 8 * v13);
        if (v14 == nullptr || (v15 = *v14, *v14 == nullptr)) {
        LABEL_31:
          v18 = (__int64*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
          v19 = *(_QWORD*)(v4 + 8);
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
            v22 = *(__int64****)(*(_QWORD*)v4 + 8 * v1);
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
          v26 = fw_memory_HeapManager_Allocate(*v5, 48, 16, 0);
          *(_QWORD*)v26 = 0;
          *(_QWORD*)(v26 + 8) = v10;
          *(_BYTE*)(v26 + 16) = v10;
          *(_QWORD*)(v26 + 24) = 0;
          *(_QWORD*)(v26 + 32) = 0;
          v27 = *v5;
          *(_QWORD*)(v26 + 40) = 0;
          v28 = (_QWORD*)fw_memory_HeapManager_Allocate(v27, 8, 16, 0);
          v29 = *v20;
          *(_QWORD*)(v26 + 24) = v28;
          v30 = *(float*)(v4 + 32);
          *v28 = v29;
          result = (unsigned __int64)(v28 + 1);
          v31 = *(_QWORD*)(v4 + 24);
          *(_QWORD*)(v26 + 32) = result;
          *(_QWORD*)(v26 + 40) = result;
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
            result = std___1___next_prime(v36);
            v19 = *(_QWORD*)(v4 + 8);
            v36 = result;
          }
          if (v36 <= v19) {
            if (v36 < v19) {
              result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                                      *(float*)(v4 + 32));
              if (v19 < 3 || (v19 & (v19 - 1)) != 0) {
                result = std___1___next_prime(result);
              }
              else {
                v41 = 1LL << -(char)__clz(result - 1);
                if (result >= 2) {
                  result = v41;
                }
              }
              if (v36 <= result) {
                v36 = result;
              }
              if (v36 < v19) {
                if (v36 != 0) {
                  goto LABEL_64;
                }
                v53 = *(_QWORD*)v4;
                *(_QWORD*)v4 = 0;
                if (v53 != 0) {
                  v54 = 128;
                  if (*(_QWORD*)(*v5 + 200LL) == 0) {
                    v54 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v5 + v54);
                }
                *(_QWORD*)(v4 + 8) = 0;
              }
            }
            goto LABEL_113;
          }
        LABEL_64:
          if (v36 >> 61 != 0) {
            goto LABEL_184;
          }
          v37 = fw_memory_HeapManager_Allocate(*v5, 8 * v36, 16, 0);
          v38 = *(_QWORD*)v4;
          *(_QWORD*)v4 = v37;
          if (v38 != 0) {
            v39 = 128;
            if (*(_QWORD*)(*v5 + 200LL) == 0) {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v39);
          }
          *(_QWORD*)(v4 + 8) = v36;
          if (v36 >= 8) {
            v40 = 0;
            do {
              *(_QWORD*)(*(_QWORD*)v4 + 8 * v40) = 0;
              *(_QWORD*)(*(_QWORD*)v4 + 8 * v40 + 8) = 0;
              *(_QWORD*)(*(_QWORD*)v4 + 8 * v40 + 16) = 0;
              *(_QWORD*)(*(_QWORD*)v4 + 8 * v40 + 24) = 0;
              *(_QWORD*)(*(_QWORD*)v4 + 8 * v40 + 32) = 0;
              *(_QWORD*)(*(_QWORD*)v4 + 8 * v40 + 40) = 0;
              *(_QWORD*)(*(_QWORD*)v4 + 8 * v40 + 48) = 0;
              v42 = *(_QWORD*)v4 + 8 * v40;
              v40 += 8;
              *(_QWORD*)(v42 + 56) = 0;
            } while ((v36 & 0x1FFFFFFFFFFFFFF8LL) != v40);
          }
          else {
            v40 = 0;
          }
          v43 = v36 & 7;
          if ((v36 & 7) != 0) {
            v44 = 8 * v40;
            do {
              --v43;
              *(_QWORD*)(*(_QWORD*)v4 + v44) = 0;
              v44 += 8;
            } while (v43 != 0);
          }
          v45 = (_QWORD*)*v3;
          if (*v3 == 0) {
            goto LABEL_113;
          }
          v46 = v45[1];
          v47 = v36 - 1;
          if ((v36 & (v36 - 1)) == 0) {
            v50 = v46 & v47;
            *(_QWORD*)(*(_QWORD*)v4 + 8 * v50) = v3;
            while (1) {
              v51 = (_QWORD*)*v45;
              if (*v45 == 0) {
                break;
              }
              v52 = v51[1] & v47;
              if (v52 == v50) {
                v45 = (_QWORD*)*v45;
              }
              else if (*(_QWORD*)(*(_QWORD*)v4 + 8 * v52) != 0) {
                *v45 = *v51;
                *v51 = **(_QWORD**)(*(_QWORD*)v4 + 8 * v52);
                **(_QWORD**)(*(_QWORD*)v4 + 8 * v52) = v51;
              }
              else {
                *(_QWORD*)(*(_QWORD*)v4 + 8 * v52) = v45;
                v45 = v51;
                v50 = v52;
              }
            }
            goto LABEL_113;
          }
          if (v46 >= v36) {
            v46 %= v36;
          }
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v46) = v3;
          v48 = (_QWORD*)*v45;
          if (*v45 == 0) {
          LABEL_113:
            v19 = *(_QWORD*)(v4 + 8);
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
            v55 = *(_QWORD*)v4;
            v56 = *(__int64**)(*(_QWORD*)v4 + 8 * v1);
            if (v56 != nullptr) {
              *(_QWORD*)v26 = *v56;
              *v56 = v26;
            }
            else {
              v57 = *v3;
              *v3 = v26;
              *(_QWORD*)v26 = v57;
              *(_QWORD*)(v55 + 8 * v1) = v3;
              if (*(_QWORD*)v26 != 0) {
                v58 = *(_QWORD*)(*(_QWORD*)v26 + 8LL);
                if ((v19 & (v19 - 1)) != 0) {
                  if (v58 >= v19) {
                    v58 %= v19;
                  }
                }
                else {
                  v58 &= v19 - 1;
                }
                *(_QWORD*)(*(_QWORD*)v4 + 8 * v58) = v26;
              }
            }
            ++*(_QWORD*)(v4 + 24);
          LABEL_127:
            v59 = 128;
            if (*(_QWORD*)(*v5 + 200LL) == 0) {
              v59 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v5 + v59);
            goto LABEL_130;
          }
          while (2) {
            v49 = v48[1];
            if (v49 >= v36) {
              v49 %= v36;
            }
            if (v49 != v46) {
              if (*(_QWORD*)(*(_QWORD*)v4 + 8 * v49) == 0) {
                *(_QWORD*)(*(_QWORD*)v4 + 8 * v49) = v45;
              LABEL_90:
                v45 = v48;
                v48 = (_QWORD*)*v48;
                v46 = v49;
                if (v48 == nullptr) {
                  goto LABEL_113;
                }
                continue;
              }
              *v45 = *v48;
              *v48 = **(_QWORD**)(*(_QWORD*)v4 + 8 * v49);
              **(_QWORD**)(*(_QWORD*)v4 + 8 * v49) = v48;
              v48 = v45;
            }
            break;
          }
          v49 = v46;
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
        v61 = v15[4];
        v60 = (unsigned __int64)v15[5];
        if ((unsigned __int64)v61 < v60) {
          *v61 = v7;
          v15[4] = v61 + 1;
          goto LABEL_130;
        }
        v62 = v15[3];
        v63 = (char*)((char*)v61 - (char*)v62);
        v64 = v61 - v62;
        v65 = v64 + 1;
        if ((unsigned __int64)(v64 + 1) >> 61 != 0) {
          goto LABEL_185;
        }
        v66 = v60 - (_QWORD)v62;
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
          if (v67 >> 61 == 0) {
            v68 = fw_memory_HeapManager_Allocate(*v5, 8 * v67, 16, 0);
            goto LABEL_144;
          }
        LABEL_184:
          GameRoutine_60a210(result);
        }
        v68 = 0;
      LABEL_144:
        v69 = v68 + 8 * v67;
        v70 = (char*)((char*)v61 - (char*)v62);
        v1 = (__int64)&v63[v68 + -8 * v64];
        *(_QWORD*)&v63[v68] = v7;
        v71 = (__int64)&v63[v68 + 8];
        result = memcpy(v1, v62, v70);
        v15[3] = (__int64*)v1;
        v15[4] = (__int64*)v71;
        v15[5] = (__int64*)v69;
        if (v62 != nullptr) {
          v72 = 128;
          if (*(_QWORD*)(*v5 + 200LL) == 0) {
            v72 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v5 + v72);
        }
        v3 = v100;
        v15[4] = (__int64*)v71;
      LABEL_130:
        ++v8;
      } while (v8 != v102);
    LABEL_149:
      CalendarDetailFile_12c7c80_alt1(v7, v7 + 168, v4 + 40);
      CalendarDetailFile_12c7c80_alt1(v7, v7 + 184, v4 + 160);
      CalendarDetailFile_12c7c80_alt1(v7, v7 + 200, v4 + 280);
      CalendarDetailFile_12c7c80_alt1(v7, v7 + 216, v4 + 400);
      CalendarDetailFile_12c7c80_alt1(v7, v7 + 232, v4 + 520);
      CalendarDetailFile_12c7c80_alt1(v7, v7 + 248, v4 + 640);
      result = CalendarDetailFile_12c7c80_alt1(v7, v7 + 264, v4 + 760);
      v73 = *(_BYTE*)(v7 + 280);
      if ((v73 & 1) == 0) {
        goto LABEL_167;
      }
      v74 = *(_QWORD**)(v4 + 888);
      v75 = *(_QWORD*)(v4 + 896);
      if ((unsigned __int64)v74 < v75) {
        *v74 = v7;
        v76 = (__int64)(v74 + 1);
        goto LABEL_166;
      }
      v77 = *(_QWORD*)(v4 + 880);
      v78 = (char*)v74 - v77;
      v79 = ((__int64)v74 - v77) >> 3;
      v80 = v79 + 1;
      if ((unsigned __int64)(v79 + 1) >> 61 != 0) {
        goto LABEL_185;
      }
      v81 = v75 - v77;
      if (v81 >> 2 > v80) {
        v80 = v81 >> 2;
      }
      if ((unsigned __int64)v81 >= 0x7FFFFFFFFFFFFFF8LL) {
        v82 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v82 = v80;
      }
      if (v82 != 0) {
        if (v82 >> 61 != 0) {
          goto LABEL_184;
        }
        v83 = fw_memory_HeapManager_Allocate(*v5, 8 * v82, 16, 0);
      }
      else {
        v83 = 0;
      }
      v84 = v83 + 8 * v82;
      v85 = (char*)v74 - v77;
      v1 = (__int64)&v78[v83 + -8 * v79];
      *(_QWORD*)&v78[v83] = v7;
      v76 = (__int64)&v78[v83 + 8];
      result = memcpy(v1, v77, v85);
      *(_QWORD*)(v4 + 880) = v1;
      *(_QWORD*)(v4 + 888) = v76;
      *(_QWORD*)(v4 + 896) = v84;
      if (v77 != 0) {
        v86 = 128;
        if (*(_QWORD*)(*v5 + 200LL) == 0) {
          v86 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v5 + v86);
      }
    LABEL_166:
      *(_QWORD*)(v4 + 888) = v76;
      v3 = v100;
      v73 = *(_BYTE*)(v7 + 280);
    LABEL_167:
      if ((v73 & 2) == 0) {
        goto LABEL_5;
      }
      v87 = *(_QWORD**)(v4 + 912);
      v88 = *(_QWORD*)(v4 + 920);
      if ((unsigned __int64)v87 < v88) {
        *v87 = v7;
        v6 = (__int64)(v87 + 1);
        goto LABEL_4;
      }
      v89 = *(_QWORD*)(v4 + 904);
      v90 = (char*)v87 - v89;
      v91 = ((__int64)v87 - v89) >> 3;
      v92 = v91 + 1;
      if ((unsigned __int64)(v91 + 1) >> 61 != 0) {
      LABEL_185:
        GameRoutine_12cc9b0();
      }
      v93 = v88 - v89;
      if (v93 >> 2 > v92) {
        v92 = v93 >> 2;
      }
      if ((unsigned __int64)v93 >= 0x7FFFFFFFFFFFFFF8LL) {
        v94 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v94 = v92;
      }
      if (v94 != 0) {
        if (v94 >> 61 != 0) {
          goto LABEL_184;
        }
        v95 = fw_memory_HeapManager_Allocate(*v5, 8 * v94, 16, 0);
      }
      else {
        v95 = 0;
      }
      v96 = v95 + 8 * v94;
      v97 = (char*)v87 - v89;
      v1 = (__int64)&v90[v95 + -8 * v91];
      *(_QWORD*)&v90[v95] = v7;
      v6 = (__int64)&v90[v95 + 8];
      result = memcpy(v1, v89, v97);
      *(_QWORD*)(v4 + 904) = v1;
      *(_QWORD*)(v4 + 912) = v6;
      *(_QWORD*)(v4 + 920) = v96;
      if (v89 != 0) {
        v98 = 128;
        if (*(_QWORD*)(*v5 + 200LL) == 0) {
          v98 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v5 + v98);
      }
    LABEL_4:
      *(_QWORD*)(v4 + 912) = v6;
      v3 = v100;
    LABEL_5:
      v2 = v101 + 1;
    } while (v101 + 1 != v99);
  }
  return result;
}

__int64 CalendarDetailFile_12c7c80(__int64 result, unsigned __int16* a2,
                                   __int64* a3)
{
  __int64 v3;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;

  v3 = *a2;
  v85 = result;
  if (*a2 != 0) {
    if ((_DWORD)v3 != 1 || **((_BYTE**)a2 + 1) != 99) {
      v9 = 0;
      while (1) {
        v11 = *(unsigned __int8*)(*((_QWORD*)a2 + 1) + v9) - 1LL;
        if (v11 >= 5) {
          String_60a250("array::at");
        }
        v12 = &a3[3 * (int)v11];
        v14 = (__int64*)v12[1];
        v13 = v12[2];
        if ((unsigned __int64)v14 < v13) {
          *v14 = v85;
          v10 = (__int64)(v14 + 1);
        }
        else {
          v15 = *v12;
          v16 = (__int64)v14 - *v12;
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
            v20 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
          }
          else {
            v20 = 0;
          }
          v21 = v20 + 8 * v19;
          v22 = v20 + v16 - 8 * (v16 >> 3);
          *(_QWORD*)(v20 + v16) = v85;
          v10 = v20 + v16 + 8;
          result = memcpy(v22, v15, v16);
          *v12 = v22;
          v12[1] = v10;
          v12[2] = v21;
          if (v15 != 0) {
            v23 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v23 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
          }
        }
        ++v9;
        v12[1] = v10;
        if (v3 == v9) {
          return result;
        }
      }
    }
    v7 = (__int64*)a3[1];
    v6 = a3[2];
    if ((unsigned __int64)v7 >= v6) {
      v24 = *a3;
      v25 = (__int64)v7 - *a3;
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
        v29 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      }
      else {
        v29 = 0;
      }
      v30 = v29 + 8 * v28;
      v31 = v29 + v25 - 8 * (v25 >> 3);
      *(_QWORD*)(v29 + v25) = v85;
      v8 = v29 + v25 + 8;
      result = memcpy(v31, v24, v25);
      *a3 = v31;
      a3[1] = v8;
      a3[2] = v30;
      if (v24 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
      }
    }
    else {
      *v7 = result;
      v8 = (__int64)(v7 + 1);
    }
    a3[1] = v8;
    v34 = (__int64*)a3[4];
    v33 = a3[5];
    if ((unsigned __int64)v34 >= v33) {
      v36 = a3[3];
      v37 = (char*)v34 - v36;
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
        v42 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v41, 16, 0);
      }
      else {
        v42 = 0;
      }
      v43 = v42 + 8 * v41;
      v44 = (__int64)&v37[v42 + -8 * v38];
      *(_QWORD*)&v37[v42] = v85;
      v35 = (__int64)&v37[v42 + 8];
      result = memcpy(v44, v36, v37);
      a3[3] = v44;
      a3[4] = v35;
      a3[5] = v43;
      if (v36 != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
      }
    }
    else {
      *v34 = v85;
      v35 = (__int64)(v34 + 1);
    }
    a3[4] = v35;
    v47 = (__int64*)a3[7];
    v46 = a3[8];
    if ((unsigned __int64)v47 >= v46) {
      v49 = a3[6];
      v50 = (char*)v47 - v49;
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
        v55 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v54, 16, 0);
      }
      else {
        v55 = 0;
      }
      v56 = v55 + 8 * v54;
      v57 = (__int64)&v50[v55 + -8 * v51];
      *(_QWORD*)&v50[v55] = v85;
      v48 = (__int64)&v50[v55 + 8];
      result = memcpy(v57, v49, v50);
      a3[6] = v57;
      a3[7] = v48;
      a3[8] = v56;
      if (v49 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v58 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
      }
    }
    else {
      *v47 = v85;
      v48 = (__int64)(v47 + 1);
    }
    a3[7] = v48;
    v60 = (__int64*)a3[10];
    v59 = a3[11];
    if ((unsigned __int64)v60 >= v59) {
      v62 = a3[9];
      v63 = (char*)v60 - v62;
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
        v68 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v67, 16, 0);
      }
      else {
        v68 = 0;
      }
      v69 = v68 + 8 * v67;
      v70 = (__int64)&v63[v68 + -8 * v64];
      *(_QWORD*)&v63[v68] = v85;
      v61 = (__int64)&v63[v68 + 8];
      result = memcpy(v70, v62, v63);
      a3[9] = v70;
      a3[10] = v61;
      a3[11] = v69;
      if (v62 != 0) {
        v71 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v71 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
      }
    }
    else {
      *v60 = v85;
      v61 = (__int64)(v60 + 1);
    }
    a3[10] = v61;
    v73 = (__int64*)a3[13];
    v72 = a3[14];
    if ((unsigned __int64)v73 < v72) {
      *v73 = v85;
      v74 = (__int64)(v73 + 1);
    LABEL_104:
      a3[13] = v74;
      return result;
    }
    v75 = a3[12];
    v76 = (char*)v73 - v75;
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
        v83 = (__int64)&v76[v81 + -8 * v77];
        *(_QWORD*)&v76[v81] = v85;
        v74 = (__int64)&v76[v81 + 8];
        result = memcpy(v83, v75, v76);
        a3[12] = v83;
        a3[13] = v74;
        a3[14] = v82;
        if (v75 != 0) {
          v84 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v84 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v84);
        }
        goto LABEL_104;
      }
      if (v80 >> 61 == 0) {
        v81 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v80, 16, 0);
        goto LABEL_100;
      }
    LABEL_108:
      GameRoutine_60a210(result);
    }
  LABEL_107:
    GameRoutine_12cc9b0();
  }
  return result;
}

unsigned __int64 CalendarDetailFile_Unknown4(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  __int64 v9;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      928, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_DWORD*)(v3 + 32) = 1065353216;
  memset(v3 + 40, 0, 888, v4, v5, v6);
  result = GameRoutine_12c7260(v3);
  v8 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 264) = v3;
  if (v8 != 0) {
    GameRoutine_12d65a0(v8);
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
  }
  return result;
}

unsigned __int64 CalendarDetailFile_12c8890(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  __int64 v9;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      928, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_DWORD*)(v3 + 32) = 1065353216;
  memset(v3 + 40, 0, 888, v4, v5, v6);
  result = GameRoutine_12c7260(v3);
  v8 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 256) = v3;
  if (v8 != 0) {
    GameRoutine_12d65a0(v8);
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
  }
  return result;
}

__int64 CalendarDetailFile_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 264);
  *(_QWORD*)(result + 264) = 0;
  if (v1 != 0) {
    GameRoutine_12d65a0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

__int64 CalendarDetailFile_Unknown6(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 256);
  *(_QWORD*)(result + 256) = 0;
  if (v1 != 0) {
    CalendarDetailFile_12d65a0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

#pragma GCC visibility pop
