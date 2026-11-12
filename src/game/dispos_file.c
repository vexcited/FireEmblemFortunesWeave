#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_6bde00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1b37e20;
extern __int64 GameData_212c060;
extern __int64 GameData_21ca218;
extern __int64 GameData_21ca220;
extern __int64 GameData_21ca228;
extern __int64 GameData_21ca230;
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6bddd0(void);
__int64 DisposFile_6bbce0(__int64 result, __int64 a2);
__int64 DisposFile_Unknown5_alt1() __asm__("DisposFile_Unknown5");
__int64 DisposFile_6bc0a0();
_QWORD* DisposFile_6bc220(__int64 a1);
__int64 GameRoutine_6be180(__int64 result, __int64*, unsigned __int64,
                           __int64*);
char* GameRoutine_6be500(char* result, char*, char*, __int64, __int64, __int64,
                         __int64);
char* DisposFile_6bde00(char* result, char* a2, unsigned __int64 a3,
                        __int64* a4, __int64 a5);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___next_prime(_QWORD);
extern __int64* GameData_212ce58;
extern __int64 GameData_21ca000;
extern int GameData_21ca238;
extern int GameData_21ca25c;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6bddd0_alt1() __asm__("GameRoutine_6bddd0");
void DisposFile_Unknown4();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DisposFile_Unknown5();

void DisposFile_Unknown4()
{

#pragma clang fp contract(off)
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  float v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  float v54;
  _BOOL8 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 primeEm;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  _QWORD** v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  _QWORD* v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  struct {
    __int64 v90;
    __int64 v91;
    __int64 v92;
  } v90_;

  if (GameData_21ca230 != 0) {
    v0 = (_QWORD*)GameData_21ca228;
    if (GameData_21ca228 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v0;
        v4 = v0[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v1;
          v0[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2, v0);
        v0 = v3;
      } while (v3 != nullptr);
    }
    GameData_21ca228 = 0;
    if (GameData_21ca220 != 0) {
      v7 = GameData_21ca220 & 7;
      if ((unsigned __int64)GameData_21ca220 >= 8) {
        v9 = GameData_21ca220 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21ca218 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 48) = 0;
          v10 = GameData_21ca218 + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(GameData_21ca218 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21ca230 = 0;
  }
  GameData_21ca248 = GameData_21ca240;
  v12 = *(__int64**)(*GameData_212ce58 + 64);
  v13 = *(__int64**)(*GameData_212ce58 + 72);
  if (v12 != v13) {
    v14 = &GameData_21ca000;
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v16 = *v12;
      if (*((_BYTE*)v14 + 600) == 0) {
        break;
      }
      v17 = *(_QWORD*)(v16 + 24);
      if (*(_BYTE*)(v17 + 8) == 0 ||
          *((unsigned __int8*)v14 + 600) == *(unsigned __int8*)(v17 + 8)) {
        goto LABEL_35;
      }
    LABEL_25:
      if (++v12 == v13) {
        return;
      }
    }
    if (v16 == 0) {
      goto LABEL_146;
    }
    v17 = *(_QWORD*)(v16 + 24);
  LABEL_35:
    v19 = *(_BYTE*)(v17 + 16);
    v20 = *(_QWORD*)(v17 + 32);
    v21 = v17 + 17;
    if ((v19 & 1) != 0) {
      v22 = v20;
    }
    else {
      v22 = v21;
    }
    v23 = game_HashString_alt1(v22);
    v24 = v23;
    if (GameData_21ca220 != 0 && GameData_21ca230 != 0) {
      v26 = GameData_21ca220 - 1;
      if ((GameData_21ca220 & (GameData_21ca220 - 1)) != 0) {
        v27 = v23;
        if (v23 >= GameData_21ca220) {
          v27 = v23 % GameData_21ca220;
        }
      }
      else {
        v27 = v26 & v23;
      }
      v28 = *(_QWORD**)(GameData_21ca218 + 8 * v27);
      if (v28 != nullptr) {
        v29 = (_QWORD*)*v28;
        if (v29 != nullptr) {
          if ((GameData_21ca220 & v26) == 0) {
            while (1) {
              v31 = v29[1];
              if (v31 == v23) {
                if (v29[2] == v23) {
                  goto LABEL_177;
                }
              }
              else if ((v31 & v26) != v27) {
                goto LABEL_61;
              }
              v29 = (_QWORD*)*v29;
              if (v29 == nullptr) {
                goto LABEL_61;
              }
            }
          }
          do {
            v30 = v29[1];
            if (v30 == v23) {
              if (v29[2] == v23) {
              LABEL_177:
                DisposFile_6bbce0((__int64)(v29 + 3), v16);
                goto LABEL_146;
              }
            }
            else {
              if (v30 >= GameData_21ca220) {
                v30 %= (unsigned __int64)GameData_21ca220;
              }
              if (v30 != v27) {
                break;
              }
            }
            v29 = (_QWORD*)*v29;
          } while (v29 != nullptr);
        }
      }
    }
  LABEL_61:
    v90_.v91 = 0;
    v90_.v92 = 0;
    v89 = v16;
    v90_.v90 = 0;
    DisposFile_6bbce0((__int64)&v90_.v90, v16);
    v32 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v15, 48, 16, 0);
    v34 = v90_.v90;
    v33 = v90_.v91;
    v35 = v32;
    *v32 = 0;
    v36 = v33 - v34;
    v32[2] = v24;
    v32[3] = 0;
    v32[4] = 0;
    v32[5] = 0;
    if (v33 == v34) {
      v41 = 0;
    }
    else {
      if (v36 < 0) {
        GameRoutine_6bddd0_alt1();
      }
      v37 = v13;
      v38 = v14;
      v39 = fw_memory_HeapManager_Allocate_alt1(*v15, v33 - v34, 16, 0);
      v40 = v39 + v36;
      v41 = v39;
      v35[3] = v39;
      v35[5] = v39 + v36;
      memcpy(v39, v34, v36);
      v35[4] = v40;
      v14 = v38;
      v13 = v37;
    }
    v42 = GameData_21ca220;
    v35[1] = v24;
    if (v42 != 0) {
      v43 = v42 - 1;
      if ((v42 & (v42 - 1)) != 0) {
        v44 = v24;
        if (v24 >= v42) {
          v44 = v24 % v42;
        }
      }
      else {
        v44 = v43 & v24;
      }
      v45 = *(_QWORD**)(GameData_21ca218 + 8 * v44);
      if (v45 != nullptr) {
        v46 = (_QWORD*)*v45;
        if (v46 != nullptr) {
          v47 = v35[2];
          if ((v42 & v43) == 0) {
            while (1) {
              v49 = v46[1];
              if (v49 == v24) {
                if (v46[2] == v47) {
                  goto LABEL_157;
                }
              }
              else if ((v49 & v43) != v44) {
                goto LABEL_85;
              }
              v46 = (_QWORD*)*v46;
              if (v46 == nullptr) {
                goto LABEL_85;
              }
            }
          }
          do {
            v48 = v46[1];
            if (v48 == v24) {
              if (v46[2] == v47) {
              LABEL_157:
                v83 = fw_memory_g_heap_manager_ptr;
                if (v41 != 0) {
                  v84 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
                  v35[4] = v41;
                  if (*(_QWORD*)(v84 + 200) != 0) {
                    v85 = 128;
                  }
                  else {
                    v85 = 56;
                  }
                  nn_mem_StandardAllocator_Free(v84 + v85, v41);
                }
                if (*(_QWORD*)(*(_QWORD*)v83 + 200LL) != 0) {
                  v86 = 128;
                }
                else {
                  v86 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v83 + v86, v35);
                v16 = v89;
                v15 = (__int64*)v83;
                if (v34 == 0) {
                LABEL_146:
                  v79 = *(_QWORD*)(v16 + 24);
                  if (*(_BYTE*)v79 == 1 &&
                      (GameData_21ca25c < 1 ||
                       GameData_21ca25c >= *(_DWORD*)(v79 + 4))) {
                    DisposFile_6bbce0((__int64)&GameData_21ca240, v16);
                  }
                  goto LABEL_25;
                }
              LABEL_142:
                if (*(_QWORD*)(*v15 + 200) != 0) {
                  v78 = 128;
                }
                else {
                  v78 = 56;
                }
                nn_mem_StandardAllocator_Free(*v15 + v78, v34);
                goto LABEL_146;
              }
            }
            else {
              if (v48 >= v42) {
                v48 %= v42;
              }
              if (v48 != v44) {
                break;
              }
            }
            v46 = (_QWORD*)*v46;
          } while (v46 != nullptr);
        }
      }
    }
  LABEL_85:
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    v50 = (float)(unsigned __int64)(GameData_21ca230 + 1);
    if (v42 != 0 && (float)(*(float*)&GameData_21ca238 * (float)v42) >= v50) {
      goto LABEL_87;
    }
    v54 = v50 / *(float*)&GameData_21ca238;
    v55 = (v42 & (v42 - 1)) != 0;
    if (v42 < 3) {
      v55 = true;
    }
    v56 = v55 | (2 * v42);
    v57 = vcvtps_u64_f32(v54);
    if (v56 <= v57) {
      v58 = v57;
    }
    else {
      v58 = v56;
    }
    if (v58 == 1) {
      v58 = 2;
    }
    else if ((v58 & (v58 - 1)) != 0) {
      primeEm = std___1___next_prime(v58);
      v42 = GameData_21ca220;
      v58 = primeEm;
    }
    if (v58 <= v42) {
      if (v58 >= v42) {
        goto LABEL_87;
      }
      v68 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21ca230 /
                           *(float*)&GameData_21ca238);
      if (v42 < 3 || (v42 & (v42 - 1)) != 0) {
        v68 = std___1___next_prime(v68);
      }
      else {
        v69 = 1LL << -(char)__clz(v68 - 1);
        if (v68 >= 2) {
          v68 = v69;
        }
      }
      if (v58 <= v68) {
        v58 = v68;
      }
      if (v58 >= v42) {
        goto LABEL_87;
      }
      if (v58 == 0) {
        v87 = GameData_21ca218;
        GameData_21ca218 = 0;
        if (v87 != 0) {
          v88 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v88 = 56;
          }
          nn_mem_StandardAllocator_Free(*v15 + v88, v87);
        }
        GameData_21ca220 = 0;
        goto LABEL_87;
      }
    }
    if (v58 >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v64 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * v58, 16, 0);
    v65 = GameData_21ca218;
    GameData_21ca218 = v64;
    if (v65 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free(*v15 + v66, v65);
    }
    GameData_21ca220 = v58;
    if (v58 >= 8) {
      v67 = 0;
      do {
        *(_QWORD*)(GameData_21ca218 + 8 * v67) = 0;
        *(_QWORD*)(GameData_21ca218 + 8 * v67 + 8) = 0;
        *(_QWORD*)(GameData_21ca218 + 8 * v67 + 16) = 0;
        *(_QWORD*)(GameData_21ca218 + 8 * v67 + 24) = 0;
        *(_QWORD*)(GameData_21ca218 + 8 * v67 + 32) = 0;
        *(_QWORD*)(GameData_21ca218 + 8 * v67 + 40) = 0;
        *(_QWORD*)(GameData_21ca218 + 8 * v67 + 48) = 0;
        v70 = GameData_21ca218 + 8 * v67;
        v67 += 8;
        *(_QWORD*)(v70 + 56) = 0;
      } while ((v58 & 0x1FFFFFFFFFFFFFF8LL) != v67);
    }
    else {
      v67 = 0;
    }
    v71 = v58 & 7;
    if ((v58 & 7) != 0) {
      v72 = 8 * v67;
      do {
        --v71;
        *(_QWORD*)(GameData_21ca218 + v72) = 0;
        v72 += 8;
      } while (v71 != 0);
    }
    v73 = (_QWORD**)GameData_21ca228;
    if (GameData_21ca228 == 0) {
      goto LABEL_87;
    }
    v74 = *(_QWORD*)(GameData_21ca228 + 8);
    v75 = v58 - 1;
    if ((v58 & (v58 - 1)) == 0) {
      v80 = v74 & v75;
      *(_QWORD*)(GameData_21ca218 + 8 * v80) = &GameData_21ca228;
      while (1) {
        v81 = *v73;
        if (*v73 == nullptr) {
          break;
        }
        v82 = v81[1] & v75;
        if (v82 == v80) {
          v73 = (_QWORD**)*v73;
        }
        else if (*(_QWORD*)(GameData_21ca218 + 8 * v82) != 0) {
          *v73 = (_QWORD*)*v81;
          *v81 = **(_QWORD**)(GameData_21ca218 + 8 * v82);
          **(_QWORD**)(GameData_21ca218 + 8 * v82) = v81;
        }
        else {
          *(_QWORD*)(GameData_21ca218 + 8 * v82) = v73;
          v73 = (_QWORD**)v81;
          v80 = v82;
        }
      }
      goto LABEL_87;
    }
    if (v74 >= v58) {
      v74 %= v58;
    }
    *(_QWORD*)(GameData_21ca218 + 8 * v74) = &GameData_21ca228;
    v76 = *v73;
    if (*v73 == nullptr) {
    LABEL_87:
      v51 = GameData_21ca220;
      v52 = v35[1];
      v53 = GameData_21ca220 - 1;
      if ((v51 & (v51 - 1)) != 0) {
        v16 = v89;
        if (v52 >= GameData_21ca220) {
          v52 %= (unsigned __int64)GameData_21ca220;
        }
      }
      else {
        v16 = v89;
        v52 &= v53;
      }
      v59 = GameData_21ca218;
      v60 = *(__int64**)(GameData_21ca218 + 8 * v52);
      if (v60 != nullptr) {
        *v35 = *v60;
        *v60 = (__int64)v35;
      }
      else {
        v61 = GameData_21ca228;
        GameData_21ca228 = (__int64)v35;
        *v35 = v61;
        *(_QWORD*)(v59 + 8 * v52) = &GameData_21ca228;
        if (*v35 != 0) {
          v62 = *(_QWORD*)(*v35 + 8);
          if ((v51 & v53) != 0) {
            if (v62 >= v51) {
              v62 %= v51;
            }
          }
          else {
            v62 &= v53;
          }
          *(_QWORD*)(GameData_21ca218 + 8 * v62) = v35;
        }
      }
      v34 = v90_.v90;
      ++GameData_21ca230;
      if (v90_.v90 == 0) {
        goto LABEL_146;
      }
      goto LABEL_142;
    }
    while (1) {
      v77 = v76[1];
      if (v77 >= v58) {
        v77 %= v58;
      }
      if (v77 != v74) {
        if (*(_QWORD*)(GameData_21ca218 + 8 * v77) == 0) {
          *(_QWORD*)(GameData_21ca218 + 8 * v77) = v73;
          goto LABEL_133;
        }
        *v73 = (_QWORD*)*v76;
        *v76 = **(_QWORD**)(GameData_21ca218 + 8 * v77);
        **(_QWORD**)(GameData_21ca218 + 8 * v77) = v76;
        v76 = v73;
      }
      v77 = v74;
    LABEL_133:
      v73 = (_QWORD**)v76;
      v76 = (_QWORD*)*v76;
      v74 = v77;
      if (v76 == nullptr) {
        goto LABEL_87;
      }
    }
  }
}

__int64 DisposFile_6bbce0(__int64 result, __int64 a2)
{
  __int64** v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;

  if (a2 != 0) {
    v2 = *(__int64***)(a2 + 40);
    v3 = (__int64*)result;
    v4 = *v2;
    v5 = v2[1];
    if (*v2 == v5) {
      v6 = *(_QWORD**)(result + 8);
    }
    else {
      v6 = *(_QWORD**)(result + 8);
      v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v8 = *v4;
        v9 = v3[2];
        if ((unsigned __int64)v6 < v9) {
          *v6++ = v8;
        }
        else {
          v10 = *v3;
          v11 = (__int64)v6 - *v3;
          v12 = (v11 >> 3) + 1;
          if (v12 >> 61 != 0) {
            GameRoutine_6bddd0();
          }
          v13 = v9 - v10;
          if (v13 >> 2 > v12) {
            v12 = v13 >> 2;
          }
          if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v12;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v15 = fw_memory_HeapManager_Allocate(*v7, 8 * v14, 16, 0);
          }
          else {
            v15 = 0;
          }
          v16 = v15 + 8 * v14;
          v17 = v15 + v11 - 8 * (v11 >> 3);
          *(_QWORD*)(v15 + v11) = v8;
          v6 = (_QWORD*)(v15 + v11 + 8);
          result = memcpy(v17, v10, v11);
          *v3 = v17;
          v3[1] = (__int64)v6;
          v3[2] = v16;
          if (v10 != 0) {
            v18 = 128;
            if (*(_QWORD*)(*v7 + 200LL) == 0) {
              v18 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v7 + v18, v10);
          }
        }
        ++v4;
        v3[1] = (__int64)v6;
      } while (v4 != v5);
    }
    v19 = *v3;
    v20 = (__int64)v6 - *v3;
    v21 = v20 >> 3;
    if (v20 >> 3 < 129) {
      v25 = 0;
      return GameRoutine_6bde00(v19, v6, v21, 0, v25);
    }
    else {
      v22 = v20 >> 3;
      v23 = GameData_212c060;
      while (1) {
        v24 = GameRoutine_1a09d20(8 * v22, v23);
        if (v24 != 0) {
          break;
        }
        v25 = v22 >> 1;
        v26 = v22 > 1;
        v22 >>= 1;
        if (!v26) {
          return GameRoutine_6bde00(v19, v6, v21, 0, v25);
        }
      }
      v27 = v24;
      GameRoutine_6bde00(v19, v6, v21, v24, v22);
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
    }
  }
  return result;
}

void DisposFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if (GameData_21ca230 != 0) {
    v0 = (_QWORD*)GameData_21ca228;
    if (GameData_21ca228 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v0;
        v4 = v0[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v1;
          v0[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v2, (__int64)v0);
        v0 = v3;
      } while (v3 != nullptr);
    }
    GameData_21ca228 = 0;
    if (GameData_21ca220 != 0) {
      v7 = GameData_21ca220 & 7;
      if ((unsigned __int64)GameData_21ca220 >= 8) {
        v9 = GameData_21ca220 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21ca218 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v8 + 48) = 0;
          v10 = GameData_21ca218 + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(GameData_21ca218 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21ca230 = 0;
  }
  GameData_21ca248 = GameData_21ca240;
}

__int64 DisposFile_6bc0a0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21ca230 != 0) {
    v0 = (_QWORD*)GameData_21ca228;
    if (GameData_21ca228 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = v0[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v1;
          v0[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7, v5);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2, v0);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21ca228 = 0;
    if (GameData_21ca220 != 0) {
      v8 = GameData_21ca220 & 7;
      if ((unsigned __int64)GameData_21ca220 >= 8) {
        v10 = GameData_21ca220 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21ca218 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21ca218 + 8 * v9 + 48) = 0;
          v11 = GameData_21ca218 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21ca218 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21ca230 = 0;
  }
  GameData_21ca248 = GameData_21ca240;
  return result;
}

_QWORD* DisposFile_6bc220(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v9;

  v1 = game_HashString(a1);
  if (GameData_21ca220 != 0 && GameData_21ca230 != 0) {
    v3 = GameData_21ca220 - 1;
    if ((GameData_21ca220 & (GameData_21ca220 - 1)) != 0) {
      v4 = v1;
      if (v1 >= GameData_21ca220) {
        v4 = v1 % GameData_21ca220;
      }
    }
    else {
      v4 = v3 & v1;
    }
    v5 = *(_QWORD**)(GameData_21ca218 + 8 * v4);
    if (v5 != nullptr) {
      v6 = (_QWORD*)*v5;
      if (v6 != nullptr) {
        if ((GameData_21ca220 & v3) != 0) {
          while (1) {
            v7 = v6[1];
            if (v7 == v1) {
              if (v6[2] == v1) {
                return v6 + 3;
              }
            }
            else {
              if (v7 >= GameData_21ca220) {
                v7 %= (unsigned __int64)GameData_21ca220;
              }
              if (v7 != v4) {
                return &GameData_1b37e20;
              }
            }
            v6 = (_QWORD*)*v6;
            if (v6 == nullptr) {
              return &GameData_1b37e20;
            }
          }
        }
        while (1) {
          v9 = v6[1];
          if (v9 == v1) {
            if (v6[2] == v1) {
              return v6 + 3;
            }
          }
          else if ((v9 & v3) != v4) {
            return &GameData_1b37e20;
          }
          v6 = (_QWORD*)*v6;
          if (v6 == nullptr) {
            return &GameData_1b37e20;
          }
        }
      }
    }
  }
  return &GameData_1b37e20;
}

char* DisposFile_6bde00(char* result, char* a2, unsigned __int64 a3,
                        __int64* a4, __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int16 v7;
  int v8;
  __int16 v9;
  int v10;
  char* v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int16 v17;
  int v18;
  __int16 v19;
  int v20;
  __int64 v21;
  __int16 v22;
  int v23;
  __int16 v24;
  int v25;
  unsigned __int64 v26;
  unsigned __int64 v28;
  char* v29;
  char* v32;
  __int64* v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int16 v40;
  int v41;
  __int16 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *((_QWORD*)a2 - 1);
      v6 = *(_QWORD*)result;
      v7 = *(_WORD*)(v5 + 50);
      if ((*(_BYTE*)(v5 + 58) & 0xFE) == 2) {
        v8 = 256;
      }
      else {
        v8 = 0;
      }
      if ((v7 & 0x20) != 0) {
        v8 -= 2;
      }
      if ((v7 & 0x10) != 0) {
        v8 -= 4;
      }
      v9 = *(_WORD*)(v6 + 50);
      if ((*(_BYTE*)(v6 + 58) & 0xFE) == 2) {
        v10 = 256;
      }
      else {
        v10 = 0;
      }
      if ((v9 & 0x20) != 0) {
        v10 -= 2;
      }
      if ((v9 & 0x10) != 0) {
        v10 -= 4;
      }
      if (v8 > v10) {
        *(_QWORD*)result = v5;
        *((_QWORD*)a2 - 1) = v6;
      }
    }
    else if ((__int64)a3 > 128) {
      v26 = a3 >> 1;
      v28 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v32 = result;
        v34 = a4;
        GameRoutine_6be180((__int64)result, (__int64*)&result[8 * v26], a3 >> 1,
                           a4);
        v35 = &v34[v26];
        result = (char*)GameRoutine_6be180((__int64)&v32[8 * v26], (__int64*)a2,
                                           v28, v35);
        v36 = &v34[a3];
        v37 = v35;
        while (v37 != v36) {
          v38 = *v37;
          v39 = *v34;
          v40 = *(_WORD*)(*v37 + 50);
          if ((*(_BYTE*)(*v37 + 58) & 0xFE) == 2) {
            v41 = 256;
          }
          else {
            v41 = 0;
          }
          if ((v40 & 0x20) != 0) {
            v41 -= 2;
          }
          if ((v40 & 0x10) != 0) {
            v41 -= 4;
          }
          v42 = *(_WORD*)(v39 + 50);
          if ((*(_BYTE*)(v39 + 58) & 0xFE) == 2) {
            v43 = 256;
          }
          else {
            v43 = 0;
          }
          if ((v42 & 0x20) != 0) {
            v43 -= 2;
          }
          if ((v42 & 0x10) != 0) {
            v43 -= 4;
          }
          if (v41 > v43) {
            v44 = 0;
          }
          else {
            v38 = *v34;
            v44 = 8;
          }
          v34 = (__int64*)((char*)v34 + v44);
          if (v41 <= v43) {
            v45 = 0;
          }
          else {
            v45 = 8;
          }
          *(_QWORD*)v32 = v38;
          v32 += 8;
          v37 = (__int64*)((char*)v37 + v45);
          if (v34 == v35) {
            while (v37 != v36) {
              v47 = *v37++;
              *(_QWORD*)v32 = v47;
              v32 += 8;
            }
            return result;
          }
        }
        while (v34 != v35) {
          v46 = *v34++;
          *(_QWORD*)v32 = v46;
          v32 += 8;
        }
      }
      else {
        v29 = result;
        DisposFile_6bde00(result, (__int64*)&result[8 * v26], a3 >> 1, a4, a5);
        DisposFile_6bde00(&v29[8 * v26], (__int64*)a2, v28, a4, a5);
        return GameRoutine_6be500(v29, &v29[8 * v26], a2, v26, v28, (__int64)a4,
                                  a5);
      }
    }
    else if (result != a2) {
      v11 = result + 8;
      if (result + 8 != a2) {
        v12 = 0;
        v13 = result;
        do {
          v16 = *(_QWORD*)v13;
          v15 = *((_QWORD*)v13 + 1);
          v13 = v11;
          v17 = *(_WORD*)(v15 + 50);
          if ((*(_BYTE*)(v15 + 58) & 0xFE) == 2) {
            v18 = 256;
          }
          else {
            v18 = 0;
          }
          if ((v17 & 0x20) != 0) {
            v18 -= 2;
          }
          if ((v17 & 0x10) != 0) {
            v18 -= 4;
          }
          v19 = *(_WORD*)(v16 + 50);
          if ((*(_BYTE*)(v16 + 58) & 0xFE) == 2) {
            v20 = 256;
          }
          else {
            v20 = 0;
          }
          if ((v19 & 0x20) != 0) {
            v20 -= 2;
          }
          if ((v19 & 0x10) != 0) {
            v20 -= 4;
          }
          if (v18 > v20) {
            v21 = v12;
            do {
              *(_QWORD*)&result[v21 + 8] = v16;
              if (v21 == 0) {
                v14 = result;
                goto LABEL_25;
              }
              v16 = *(_QWORD*)&result[v21 - 8];
              v22 = *(_WORD*)(v15 + 50);
              v21 -= 8;
              if ((*(_BYTE*)(v15 + 58) & 0xFE) == 2) {
                v23 = 256;
              }
              else {
                v23 = 0;
              }
              if ((v22 & 0x20) != 0) {
                v23 -= 2;
              }
              if ((v22 & 0x10) != 0) {
                v23 -= 4;
              }
              v24 = *(_WORD*)(v16 + 50);
              if ((*(_BYTE*)(v16 + 58) & 0xFE) == 2) {
                v25 = 256;
              }
              else {
                v25 = 0;
              }
              if ((v24 & 0x20) != 0) {
                v25 -= 2;
              }
              if ((v24 & 0x10) != 0) {
                v25 -= 4;
              }
            } while (v23 > v25);
            v14 = &result[v21 + 8];
          LABEL_25:
            *(_QWORD*)v14 = v15;
          }
          v11 = v13 + 8;
          v12 += 8;
        } while (v13 + 8 != a2);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
