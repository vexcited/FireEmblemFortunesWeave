#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_b15000(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___next_prime(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aedbbd;
extern __int64 GameData_21fe030;
extern __int64 GameData_21fe038;
extern __int64 GameData_21fe040;
extern __int64 GameData_21fe048;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ca68[122];
extern int GameData_21fe050;
void GmapDisposFile_Unknown4(long double a1);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c9e50;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_af2ab0(void);
__attribute__((swiftcall)) void GmapDisposFile_ae35a0(PSEUDO_X8 x8_,
                                                      __int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
extern char GameData_1aedbbd_alt1[] __asm__("GameData_1aedbbd");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_af2ab0_alt1() __asm__("GameRoutine_af2ab0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void GmapDisposFile_Unknown4(long double a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64** v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  long double v47;
  __int64** v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  unsigned __int64* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  unsigned __int64 v59;
  _QWORD** v60;
  _QWORD* v61;
  unsigned __int64 v62;
  __int64 v63;
  _QWORD* v64;
  unsigned __int64 v65;
  float v66;
  _BOOL8 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 primeEm;
  unsigned __int64 v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  unsigned __int64 v83;
  _QWORD* v84;
  unsigned __int64 v85;
  float v86;

  if (GameData_21fe048 != 0) {
    v2 = (_QWORD*)GameData_21fe040;
    v1 = fw_memory_g_heap_manager_ptr;
    if (GameData_21fe040 != 0) {
      do {
        v3 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v4, a1);
        v2 = v3;
      } while (v3 != nullptr);
    }
    GameData_21fe040 = 0;
    if (GameData_21fe038 != 0) {
      v5 = GameData_21fe038 & 7;
      if ((unsigned __int64)GameData_21fe038 >= 8) {
        v7 = GameData_21fe038 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21fe030 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21fe030 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21fe030 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21fe030 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21fe030 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21fe030 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21fe030 + 8 * v6 + 48) = 0;
          v8 = GameData_21fe030 + 8 * v6;
          v6 += 8;
          *(_QWORD*)(v8 + 56) = 0;
        } while (v7 != v6);
      }
      else {
        v6 = 0;
      }
      if (v5 != 0) {
        v9 = 8 * v6;
        do {
          --v5;
          *(_QWORD*)(GameData_21fe030 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21fe048 = 0;
  }
  v79 = *(__int64**)(*GameData_212ca68[0] + 72);
  if (*(__int64**)(*GameData_212ca68[0] + 64) != v79) {
    v10 = *(__int64**)(*GameData_212ca68[0] + 64);
    while (1) {
      v81 = v10;
      v80 = *v10;
      v11 = *(__int64***)(*v10 + 40);
      v13 = *v11;
      v12 = v11[1];
      if (*v11 != v12) {
        break;
      }
    LABEL_101:
      v45 = *(_QWORD*)(v80 + 8);
      if (v45 != 0) {
        v46 = strchr(*(_QWORD*)(v80 + 8), 95);
        if (v46 != 0) {
          v45 = v46 + 1;
        }
      }
      if ((unsigned int)strcmp(v45, &GameData_1aedbbd) == 0) {
        v84 = nullptr;
        v85 = 0;
        v82 = 0;
        v83 = 0;
        v86 = 1.0;
        v48 = *(__int64***)(v80 + 40);
        v49 = *v48;
        v50 = v48[1];
        if (*v48 != v50) {
          do {
            v53 = *v49;
            v54 = *(unsigned __int64**)(*v49 + 64);
            if (v54 != nullptr) {
              v55 = *v54;
              v56 = v83;
              if (v83 != 0) {
                v57 = v83 - 1;
                if ((v83 & (v83 - 1)) != 0) {
                  v1 = v55;
                  if (v55 >= v83) {
                    v1 = v55 % v83;
                  }
                }
                else {
                  v1 = v57 & v55;
                }
                v60 = *(_QWORD***)(v82 + 8 * v1);
                if (v60 != nullptr) {
                  v61 = *v60;
                  if (*v60 != nullptr) {
                    if ((v83 & v57) == 0) {
                      while (1) {
                        v63 = v61[1];
                        if (v63 == v55) {
                          if (v61[2] == v55) {
                            goto LABEL_111;
                          }
                        }
                        else if ((v63 & v57) != v1) {
                          goto LABEL_138;
                        }
                        v61 = (_QWORD*)*v61;
                        if (v61 == nullptr) {
                          goto LABEL_138;
                        }
                      }
                    }
                    do {
                      v62 = v61[1];
                      if (v62 == v55) {
                        if (v61[2] == v55) {
                          goto LABEL_111;
                        }
                      }
                      else {
                        if (v62 >= v83) {
                          v62 %= v83;
                        }
                        if (v62 != v1) {
                          break;
                        }
                      }
                      v61 = (_QWORD*)*v61;
                    } while (v61 != nullptr);
                  }
                }
              }
            LABEL_138:
              v64 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
              v65 = v85;
              v66 = v86;
              v61 = v64;
              *v64 = 0;
              v64[1] = v55;
              v64[2] = v55;
              v64[3] = 0;
              *(float*)&v47 = (float)(v65 + 1);
              if (v56 == 0 || (float)(v66 * (float)v56) < *(float*)&v47) {
                *(float*)&v47 = *(float*)&v47 / v66;
                v67 = (v56 & (v56 - 1)) != 0;
                if (v56 < 3) {
                  v67 = true;
                }
                v68 = v67 | (2 * v56);
                v69 = vcvtps_u64_f32(*(float*)&v47);
                if (v68 <= v69) {
                  v70 = v69;
                }
                else {
                  v70 = v68;
                }
                if (v70 == 1) {
                  v70 = 2;
                }
                else if ((v70 & (v70 - 1)) != 0) {
                  primeEm = std___1___next_prime(v70);
                  v56 = v83;
                  v70 = primeEm;
                }
                if (v70 > v56) {
                  goto LABEL_150;
                }
                if (v70 < v56) {
                  *(float*)&v47 = (float)v85 / v86;
                  v72 = vcvtps_u64_f32(*(float*)&v47);
                  if (v56 < 3 || (v56 & (v56 - 1)) != 0) {
                    v72 = std___1___next_prime(v72);
                  }
                  else {
                    v73 = 1LL << -(char)__clz(v72 - 1);
                    if (v72 >= 2) {
                      v72 = v73;
                    }
                  }
                  if (v70 <= v72) {
                    v70 = v72;
                  }
                  if (v70 < v56) {
                  LABEL_150:
                    GameRoutine_b15000(&v82, v70);
                  }
                }
                v56 = v83;
                if ((v83 & (v83 - 1)) != 0) {
                  if (v55 >= v83) {
                    v1 = v55 % v83;
                  }
                  else {
                    v1 = v55;
                  }
                }
                else {
                  v1 = (v83 - 1) & v55;
                }
              }
              v51 = v82;
              v52 = *(_QWORD**)(v82 + 8 * v1);
              if (v52 != nullptr) {
                *v61 = *v52;
                *v52 = v61;
              }
              else {
                v58 = v84;
                v84 = v61;
                *v61 = v58;
                *(_QWORD*)(v51 + 8 * v1) = &v84;
                if (*v61 != 0) {
                  v59 = *(_QWORD*)(*v61 + 8LL);
                  if ((v56 & (v56 - 1)) != 0) {
                    if (v59 >= v56) {
                      v59 %= v56;
                    }
                  }
                  else {
                    v59 &= v56 - 1;
                  }
                  *(_QWORD*)(v82 + 8 * v59) = v61;
                }
              }
              ++v85;
            LABEL_111:
              v61[3] = v53;
            }
            ++v49;
          } while (v49 != v50);
          v74 = v84;
          if (v84 != nullptr) {
            do {
              v75 = (_QWORD*)*v74;
              v76 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v76 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v47);
              v74 = v75;
            } while (v75 != nullptr);
          }
        }
        v77 = v82;
        v82 = 0;
        if (v77 != 0) {
          v78 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v78 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v47);
        }
      }
      v10 = v81 + 1;
      if (v81 + 1 == v79) {
        return;
      }
    }
    v14 = GameData_21fe038;
    v15 = GameData_21fe048;
    while (1) {
      v16 = *v13;
      v17 = *(unsigned __int64**)(*v13 + 24);
      v18 = *v17;
      if (v14 != 0 && v15 != 0) {
        v19 = v14 - 1;
        if ((v14 & (v14 - 1)) != 0) {
          v20 = *v17;
          if (v18 >= v14) {
            v20 = v18 % v14;
          }
        }
        else {
          v20 = v18 & v19;
        }
        v21 = *(_QWORD**)(GameData_21fe030 + 8 * v20);
        if (v21 != nullptr) {
          v22 = (_QWORD*)*v21;
          if (v22 != nullptr) {
            if ((v14 & v19) == 0) {
              while (1) {
                v24 = v22[1];
                if (v24 == v18) {
                  if (v22[2] == v18) {
                    goto LABEL_100;
                  }
                }
                else if ((v24 & v19) != v20) {
                  goto LABEL_42;
                }
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  goto LABEL_42;
                }
              }
            }
            while (1) {
              v23 = v22[1];
              if (v23 == v18) {
                if (v22[2] == v18) {
                  goto LABEL_100;
                }
              }
              else {
                if (v23 >= v14) {
                  v23 %= v14;
                }
                if (v23 != v20) {
                  goto LABEL_42;
                }
              }
              v22 = (_QWORD*)*v22;
              if (v22 == nullptr) {
                goto LABEL_42;
              }
            }
          }
        }
      }
      else {
      LABEL_42:
        if (v14 == 0) {
          goto LABEL_62;
        }
      }
      v25 = v14 - 1;
      if ((v14 & (v14 - 1)) != 0) {
        v1 = v18;
        if (v18 >= v14) {
          v1 = v18 % v14;
        }
      }
      else {
        v1 = v25 & v18;
      }
      v26 = *(__int64***)(GameData_21fe030 + 8 * v1);
      if (v26 != nullptr) {
        v27 = *v26;
        if (*v26 != nullptr) {
          if ((v14 & v25) == 0) {
            while (1) {
              v29 = v27[1];
              if (v29 == v18) {
                if (v27[2] == v18) {
                  goto LABEL_99;
                }
              }
              else if ((v29 & v25) != v1) {
                goto LABEL_62;
              }
              v27 = (__int64*)*v27;
              if (v27 == nullptr) {
                goto LABEL_62;
              }
            }
          }
          do {
            v28 = v27[1];
            if (v28 == v18) {
              if (v27[2] == v18) {
                goto LABEL_99;
              }
            }
            else {
              if (v28 >= v14) {
                v28 %= v14;
              }
              if (v28 != v1) {
                break;
              }
            }
            v27 = (__int64*)*v27;
          } while (v27 != nullptr);
        }
      }
    LABEL_62:
      v30 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      v31 = GameData_21fe048;
      v32 = *(float*)&GameData_21fe050;
      v27 = v30;
      *v30 = 0;
      v30[1] = v18;
      v30[2] = v18;
      v30[3] = 0;
      v33 = (float)(unsigned __int64)(v31 + 1);
      if (v14 == 0 || (float)(v32 * (float)v14) < v33) {
        v34 = v33 / v32;
        v35 = (v14 & (v14 - 1)) != 0;
        if (v14 < 3) {
          v35 = true;
        }
        v36 = v35 | (2 * v14);
        v37 = vcvtps_u64_f32(v34);
        if (v36 <= v37) {
          v38 = v37;
        }
        else {
          v38 = v36;
        }
        if (v38 == 1) {
          v38 = 2;
        }
        else if ((v38 & (v38 - 1)) != 0) {
          v38 = std___1___next_prime(v38);
          v14 = GameData_21fe038;
        }
        if (v38 > v14) {
          goto LABEL_74;
        }
        if (v38 < v14) {
          v39 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21fe048 /
                               *(float*)&GameData_21fe050);
          if (v14 < 3 || (v14 & (v14 - 1)) != 0) {
            v39 = std___1___next_prime(v39);
          }
          else {
            v40 = 1LL << -(char)__clz(v39 - 1);
            if (v39 >= 2) {
              v39 = v40;
            }
          }
          if (v38 <= v39) {
            v38 = v39;
          }
          if (v38 < v14) {
          LABEL_74:
            GameRoutine_b15000(&GameData_21fe030, v38);
          }
        }
        v14 = GameData_21fe038;
        if ((GameData_21fe038 & (GameData_21fe038 - 1)) != 0) {
          if (v18 >= GameData_21fe038) {
            v1 = v18 % GameData_21fe038;
          }
          else {
            v1 = v18;
          }
        }
        else {
          v1 = (GameData_21fe038 - 1) & v18;
        }
      }
      v41 = GameData_21fe030;
      v42 = *(__int64**)(GameData_21fe030 + 8 * v1);
      if (v42 != nullptr) {
        *v27 = *v42;
        *v42 = (__int64)v27;
      }
      else {
        v43 = GameData_21fe040;
        GameData_21fe040 = (__int64)v27;
        *v27 = v43;
        *(_QWORD*)(v41 + 8 * v1) = &GameData_21fe040;
        if (*v27 != 0) {
          v44 = *(_QWORD*)(*v27 + 8);
          if ((v14 & (v14 - 1)) != 0) {
            if (v44 >= v14) {
              v44 %= v14;
            }
          }
          else {
            v44 &= v14 - 1;
          }
          *(_QWORD*)(GameData_21fe030 + 8 * v44) = v27;
        }
      }
      v14 = GameData_21fe038;
      ++GameData_21fe048;
    LABEL_99:
      v27[3] = v16;
      v15 = GameData_21fe048;
    LABEL_100:
      if (++v13 == v12) {
        goto LABEL_101;
      }
    }
  }
}

__attribute__((swiftcall)) void GmapDisposFile_ae35a0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64* v4;
  char* v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *(__int64**)(GameData_21c9e50 + 64);
  v4 = *(__int64**)(GameData_21c9e50 + 72);
  if (v3 != v4) {
    v6 = nullptr;
    v7 = 0;
    v29 = *(__int64**)(GameData_21c9e50 + 72);
    do {
      v8 = *v3;
      v9 = *(const char**)(*v3 + 8);
      if (v9 != nullptr) {
        v10 = strchr_alt1(*(const char**)(*v3 + 8), 95);
        if (v10 != 0) {
          v9 = (const char*)(v10 + 1);
        }
      }
      if (strcmp_alt1(v9, GameData_1aedbbd_alt1) == 0) {
        v11 = *(__int64***)(v8 + 40);
        v30 = v3;
        v13 = *v11;
        v12 = v11[1];
        while (v13 != v12) {
          v14 = *v13;
          v15 = *(_QWORD*)(*v13 + 64);
          if (v15 != 0 && v15 == a1) {
            v17 = a2[2];
            if ((unsigned __int64)v6 < v17) {
              *(_QWORD*)v6 = v14;
              v6 += 8;
            }
            else {
              v18 = &v6[-v7];
              v19 = (__int64)&v6[-v7] >> 3;
              v20 = v19 + 1;
              if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
                *a2 = v7;
                GameRoutine_af2ab0_alt1();
              }
              v21 = v17 - v7;
              v22 = a1;
              if (v21 >> 2 > v20) {
                v20 = v21 >> 2;
              }
              if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
                v23 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v23 = v20;
              }
              if (v23 != 0) {
                if (v23 >> 61 != 0) {
                  *a2 = v7;
                  GameRoutine_60a210_alt1();
                }
                v24 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
              }
              else {
                v24 = 0;
              }
              v25 = v24 + 8 * v23;
              v26 = (unsigned __int64)&v6[-v7];
              v27 = (__int64)&v18[v24 + -8 * v19];
              *(_QWORD*)&v18[v24] = v14;
              v6 = &v18[v24 + 8];
              memcpy_alt1(v27, v7, v26);
              a2[1] = (__int64)v6;
              a2[2] = v25;
              if (v7 != 0) {
                v28 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v28 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v7);
              }
              v7 = v27;
              a1 = v22;
            }
            a2[1] = (__int64)v6;
          }
          ++v13;
        }
        v4 = v29;
        v3 = v30;
        *a2 = v7;
      }
      ++v3;
    } while (v3 != v4);
  }
}

#pragma GCC visibility pop
