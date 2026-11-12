#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_224adb0;
extern __int64 GameData_224adb8;
extern __int64 GameData_224adc8;
extern __int64 game_GameModeData_instance_;
__int64 PerchQuestionFile_147eb20(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64* GameData_212ccf0[41];
extern __int64 GameData_224adc0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_224add0;
void __attribute__((noreturn)) GameRoutine_60a210();
void PerchQuestionFile_Unknown4();
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void PerchQuestionFile_Unknown4()
{

#pragma clang fp contract(off)
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64*** v18;
  __int64** v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  char v25;
  float v26;
  float v27;
  float v28;
  _BOOL8 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 primeEm;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  _QWORD** v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64* v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  _QWORD* v64;

  if (GameData_224adc8 != 0) {
    v1 = (_QWORD*)GameData_224adc0;
    if (GameData_224adc0 != 0) {
      v0 = 128;
      v2 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v4, (__int64)v1);
        v1 = v3;
      } while (v3 != nullptr);
    }
    GameData_224adc0 = 0;
    if (GameData_224adb8 != 0) {
      v5 = GameData_224adb8 & 7;
      if ((unsigned __int64)GameData_224adb8 >= 8) {
        v7 = GameData_224adb8 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_224adb0 + 8 * v6) = 0;
          *(_QWORD*)(GameData_224adb0 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_224adb0 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_224adb0 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_224adb0 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_224adb0 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_224adb0 + 8 * v6 + 48) = 0;
          v8 = GameData_224adb0 + 8 * v6;
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
          *(_QWORD*)(GameData_224adb0 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_224adc8 = 0;
  }
  v10 = *(__int64**)(*GameData_212ccf0[0] + 64);
  v11 = *(__int64**)(*GameData_212ccf0[0] + 72);
  if (v10 != v11) {
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v13 = *v10;
      v14 = *(_QWORD*)(*v10 + 40);
      if (v14 != 0) {
        break;
      }
    LABEL_19:
      if (++v10 == v11) {
        return;
      }
    }
    v15 = *(unsigned __int8*)(v14 + 48);
    v16 = GameData_224adb8;
    if (GameData_224adb8 != 0) {
      v17 = GameData_224adb8 - 1;
      if ((GameData_224adb8 & (GameData_224adb8 - 1)) != 0) {
        v0 = *(unsigned __int8*)(v14 + 48);
        if (GameData_224adb8 <= v15) {
          v0 = (unsigned int)v15 % (unsigned int)GameData_224adb8;
        }
      }
      else {
        v0 = ((_DWORD)GameData_224adb8 - 1) & (unsigned int)v15;
      }
      v18 = *(__int64****)(GameData_224adb0 + 8 * v0);
      if (v18 != nullptr) {
        v19 = *v18;
        if (v19 != nullptr) {
          if ((GameData_224adb8 & v17) == 0) {
            while (1) {
              v21 = v19[1];
              if (v21 == (__int64*)v15) {
                if (*((unsigned __int8*)v19 + 16) == (_DWORD)v15) {
                  goto LABEL_116;
                }
              }
              else if (((unsigned __int64)v21 & v17) != v0) {
                goto LABEL_41;
              }
              v19 = (__int64**)*v19;
              if (v19 == nullptr) {
                goto LABEL_41;
              }
            }
          }
          do {
            v20 = (unsigned __int64)v19[1];
            if (v20 == v15) {
              if (*((unsigned __int8*)v19 + 16) == (_DWORD)v15) {
                goto LABEL_116;
              }
            }
            else {
              if (v20 >= GameData_224adb8) {
                v20 %= (unsigned __int64)GameData_224adb8;
              }
              if (v20 != v0) {
                break;
              }
            }
            v19 = (__int64**)*v19;
          } while (v19 != nullptr);
        }
      }
    }
  LABEL_41:
    v22 = v12;
    v23 = fw_memory_HeapManager_Allocate(*v12, 32, 16, 0);
    *(_QWORD*)v23 = 0;
    *(_QWORD*)(v23 + 8) = v15;
    v24 = v23;
    v25 = *(_BYTE*)(v14 + 48);
    v26 = *(float*)&GameData_224add0;
    *(_QWORD*)(v23 + 24) = v13;
    *(_BYTE*)(v23 + 16) = v25;
    v27 = (float)(unsigned __int64)(GameData_224adc8 + 1);
    if (v16 != 0 && (float)(v26 * (float)v16) >= v27) {
    LABEL_107:
      v52 = GameData_224adb0;
      v53 = *(__int64**)(GameData_224adb0 + 8 * v0);
      if (v53 != nullptr) {
        *(_QWORD*)v24 = *v53;
        *v53 = v24;
      }
      else {
        v54 = GameData_224adc0;
        GameData_224adc0 = v24;
        *(_QWORD*)v24 = v54;
        *(_QWORD*)(v52 + 8 * v0) = &GameData_224adc0;
        if (*(_QWORD*)v24 != 0) {
          v55 = *(_QWORD*)(*(_QWORD*)v24 + 8LL);
          if ((v16 & (v16 - 1)) != 0) {
            if (v55 >= v16) {
              v55 %= v16;
            }
          }
          else {
            v55 &= v16 - 1;
          }
          *(_QWORD*)(GameData_224adb0 + 8 * v55) = v24;
        }
      }
      v12 = v22;
      ++GameData_224adc8;
    LABEL_116:
      v56 = *(__int64**)(v13 + 24);
      v57 = *v56;
      v56[7] = 0;
      v56[8] = 0;
      if (v57 != 0) {
        v58 = *(unsigned __int16*)(v57 + 16);
        v59 = *GameData_212ccf0[0];
        if (*(_WORD*)(v57 + 16) != 0) {
          v60 =
              *(_QWORD*)(*(_QWORD*)(v59 + 64) + 8LL * (unsigned int)(v58 - 1));
          if (v60 != 0 && *(_QWORD*)(v57 + 40) == *(_QWORD*)(v60 + 40) &&
              *(_QWORD*)(v57 + 56) != 0) {
            v56[7] = *(_QWORD*)(v60 + 24);
            v58 = *(unsigned __int16*)(v57 + 16);
          }
        }
        v62 = v59 + 64;
        v61 = *(_QWORD*)(v59 + 64);
        v63 = v58 + 1;
        if (v63 < (int)((unsigned __int64)(*(_QWORD*)(v62 + 8) - v61) >> 3)) {
          v64 = *(_QWORD**)(v61 + 8LL * (unsigned int)v63);
          if (v64 != nullptr && *(_QWORD*)(v57 + 40) == v64[5] && v64[7] != 0) {
            v56[8] = v64[3];
          }
        }
      }
      goto LABEL_19;
    }
    v28 = v27 / v26;
    v29 = (v16 & (v16 - 1)) != 0;
    if (v16 < 3) {
      v29 = true;
    }
    v30 = v29 | (2 * v16);
    v31 = vcvtps_u64_f32(v28);
    if (v30 <= v31) {
      primeEm = v31;
    }
    else {
      primeEm = v30;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime_alt1(primeEm);
      v16 = GameData_224adb8;
    }
    if (primeEm <= v16) {
      if (primeEm >= v16) {
        goto LABEL_102;
      }
      v37 = vcvtps_u64_f32((float)(unsigned __int64)GameData_224adc8 /
                           *(float*)&GameData_224add0);
      if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
        v37 = std___1___next_prime_alt1(v37);
      }
      else {
        v38 = 1LL << -(char)__clz(v37 - 1);
        if (v37 >= 2) {
          v37 = v38;
        }
      }
      if (primeEm <= v37) {
        primeEm = v37;
      }
      if (primeEm >= v16) {
        goto LABEL_102;
      }
      if (primeEm == 0) {
        v50 = GameData_224adb0;
        GameData_224adb0 = 0;
        if (v50 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*v22 + 200) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v22 + v51, v50);
        }
        GameData_224adb8 = 0;
        goto LABEL_102;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v33 = fw_memory_HeapManager_Allocate(*v22, 8 * primeEm, 16, 0);
    v34 = GameData_224adb0;
    GameData_224adb0 = v33;
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v22 + v35, v34);
    }
    GameData_224adb8 = primeEm;
    if (primeEm >= 8) {
      v36 = 0;
      do {
        *(_QWORD*)(GameData_224adb0 + 8 * v36) = 0;
        *(_QWORD*)(GameData_224adb0 + 8 * v36 + 8) = 0;
        *(_QWORD*)(GameData_224adb0 + 8 * v36 + 16) = 0;
        *(_QWORD*)(GameData_224adb0 + 8 * v36 + 24) = 0;
        *(_QWORD*)(GameData_224adb0 + 8 * v36 + 32) = 0;
        *(_QWORD*)(GameData_224adb0 + 8 * v36 + 40) = 0;
        *(_QWORD*)(GameData_224adb0 + 8 * v36 + 48) = 0;
        v39 = GameData_224adb0 + 8 * v36;
        v36 += 8;
        *(_QWORD*)(v39 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v36);
    }
    else {
      v36 = 0;
    }
    v40 = primeEm & 7;
    if ((primeEm & 7) != 0) {
      v41 = 8 * v36;
      do {
        --v40;
        *(_QWORD*)(GameData_224adb0 + v41) = 0;
        v41 += 8;
      } while (v40 != 0);
    }
    v42 = (_QWORD**)GameData_224adc0;
    if (GameData_224adc0 != 0) {
      v43 = *(_QWORD*)(GameData_224adc0 + 8);
      v44 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v43 >= primeEm) {
          v43 %= primeEm;
        }
        *(_QWORD*)(GameData_224adb0 + 8 * v43) = &GameData_224adc0;
        v45 = *v42;
        if (*v42 == nullptr) {
          goto LABEL_102;
        }
        while (1) {
          v46 = v45[1];
          if (v46 >= primeEm) {
            v46 %= primeEm;
          }
          if (v46 != v43) {
            if (*(_QWORD*)(GameData_224adb0 + 8 * v46) == 0) {
              *(_QWORD*)(GameData_224adb0 + 8 * v46) = v42;
              goto LABEL_79;
            }
            *v42 = (_QWORD*)*v45;
            *v45 = **(_QWORD**)(GameData_224adb0 + 8 * v46);
            **(_QWORD**)(GameData_224adb0 + 8 * v46) = v45;
            v45 = v42;
          }
          v46 = v43;
        LABEL_79:
          v42 = (_QWORD**)v45;
          v45 = (_QWORD*)*v45;
          v43 = v46;
          if (v45 == nullptr) {
            goto LABEL_102;
          }
        }
      }
      v47 = v43 & v44;
      *(_QWORD*)(GameData_224adb0 + 8 * v47) = &GameData_224adc0;
      while (1) {
        v48 = *v42;
        if (*v42 == nullptr) {
          break;
        }
        v49 = v48[1] & v44;
        if (v49 == v47) {
          v42 = (_QWORD**)*v42;
        }
        else if (*(_QWORD*)(GameData_224adb0 + 8 * v49) != 0) {
          *v42 = (_QWORD*)*v48;
          *v48 = **(_QWORD**)(GameData_224adb0 + 8 * v49);
          **(_QWORD**)(GameData_224adb0 + 8 * v49) = v48;
        }
        else {
          *(_QWORD*)(GameData_224adb0 + 8 * v49) = v42;
          v42 = (_QWORD**)v48;
          v47 = v49;
        }
      }
    }
  LABEL_102:
    v16 = GameData_224adb8;
    if ((GameData_224adb8 & (GameData_224adb8 - 1)) != 0) {
      if (GameData_224adb8 <= v15) {
        v0 = v15 % GameData_224adb8;
      }
      else {
        v0 = v15;
      }
    }
    else {
      v0 = ((_DWORD)GameData_224adb8 - 1) & (unsigned int)v15;
    }
    goto LABEL_107;
  }
}

__int64 PerchQuestionFile_147eb20(__int64 a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64*** v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(_QWORD);
  __int64 v18;
  _QWORD* v19;

  if (*(_QWORD*)a1 == 0) {
    return 0;
  }
  if (GameData_224adb8 == 0 || GameData_224adc8 == 0) {
    return 0;
  }
  v2 = *(unsigned __int8*)(*(_QWORD*)a1 + 48LL);
  v3 = GameData_224adb8 - 1;
  if ((GameData_224adb8 & (GameData_224adb8 - 1)) != 0) {
    v4 = *(unsigned __int8*)(*(_QWORD*)a1 + 48LL);
    if (GameData_224adb8 <= v2) {
      v4 = (unsigned int)v2 % (unsigned int)GameData_224adb8;
    }
  }
  else {
    v4 = ((_DWORD)GameData_224adb8 - 1) & (unsigned int)v2;
  }
  v5 = *(__int64****)(GameData_224adb0 + 8 * v4);
  if (v5 == nullptr) {
    return 0;
  }
  v6 = *v5;
  if (v6 == nullptr) {
    return 0;
  }
  if ((GameData_224adb8 & v3) == 0) {
    while (1) {
      v9 = v6[1];
      if (v9 == (__int64*)v2) {
        if (*((unsigned __int8*)v6 + 16) == (_DWORD)v2) {
          goto LABEL_27;
        }
      }
      else if (((unsigned __int64)v9 & v3) != v4) {
        return 0;
      }
      v6 = (__int64**)*v6;
      v8 = 0;
      if (v6 == nullptr) {
        return v8;
      }
    }
  }
  while (1) {
    v7 = (unsigned __int64)v6[1];
    if (v7 == v2) {
      break;
    }
    if (v7 >= GameData_224adb8) {
      v7 %= (unsigned __int64)GameData_224adb8;
    }
    if (v7 != v4) {
      return 0;
    }
  LABEL_15:
    v6 = (__int64**)*v6;
    if (v6 == nullptr) {
      return 0;
    }
  }
  if (*((unsigned __int8*)v6 + 16) != (_DWORD)v2) {
    goto LABEL_15;
  }

LABEL_27:
  v11 = (__int64*)v6[3][3];
  v8 = *v11;
  do {
    v12 = v11;
    v11 = (__int64*)v11[7];
  } while (v11 != nullptr);
  while (1) {
    v13 = v12[1];
    v14 = v12[2];
    if (v14 != v13) {
      break;
    }
  LABEL_30:
    v8 = *v12;
    v12 = (__int64*)v12[8];
    if (v12 == nullptr) {
      return v8;
    }
  }
  while (1) {
    if (*(_QWORD*)v13 != 0) {
      v15 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v16 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v13);
        if (v16 != 0) {
          v17 = *(__int64 (**)(_QWORD))(v16 + 72);
          v18 = *(_QWORD*)(v16 + 80);
          v19 = (_QWORD*)(v16 + (v18 >> 1));
          if ((v18 & 1) != 0) {
            v17 = *(__int64 (**)(_QWORD))((char*)v17 + *v19);
          }
          LOBYTE(a1) = v17(v19);
        }
        else {
          LOBYTE(a1) = 1;
        }
      }
      if (*(_BYTE*)(v13 + 16) != ((v15 == 0) | a1 & 1)) {
        return v8;
      }
    }
    v13 += 24;
    if (v13 == v14) {
      goto LABEL_30;
    }
  }
}

#pragma GCC visibility pop
