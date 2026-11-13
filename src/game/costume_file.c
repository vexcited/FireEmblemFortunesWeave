#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f92e0;
extern __int64 GameData_21f92e8;
extern __int64 GameData_21f92f0;
extern __int64 GameData_21f92f8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CostumeFile_Unknown5_alt1() __asm__("CostumeFile_Unknown5");
__int64 CostumeFile_9ffa20_alt1() __asm__("CostumeFile_9ffa20");
__int64 AssetTableFile_7e9960(__int64, __int64, __int64*);
__int64 GameRoutine_6c2b50(__int64);
__int64 TrickEntity_7d1480(__int64 result);
__int64 Unit_6dcb40(__int64, __int64, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64* GameData_212d590[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21c9ce0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern int GameData_21f9300;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a008f0();
__attribute__((swiftcall)) void CostumeFile_9fea70(PSEUDO_X8 x8_,
                                                   __int64 result, __int64 a2);
void CostumeFile_Unknown4();
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CostumeFile_Unknown5();
void CostumeFile_9ffa20();

__attribute__((swiftcall)) void CostumeFile_9fea70(PSEUDO_X8 x8_,
                                                   __int64 result, __int64 a2)
{
  char* a3 = (char*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64* v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  char v12;
  char v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v27;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 (*v35)(_QWORD);
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  struct {
    unsigned int v39[120];
    __int64* v40;
  } v39_;
  struct {
    _QWORD v41[2];
    int v42;
  } v41_;
  struct {
    _BYTE v43[392];
    __int64 v44;
    __int64 v45;
  } v43_;
  _QWORD v46[62];

  *a3 = 0;
  if (result == 0) {
    result;
    return;
  }
  if (a2 == 0) {
    result;
    return;
  }
  v3 = *(_QWORD*)(result + 24);
  v5 = (unsigned __int64*)result;
  if (*(_QWORD*)(v3 + 1392) == 0) {
    result;
    return;
  }
  GameRoutine_6c2b50((__int64)v43_.v43);
  Unit_6dcb40((__int64)v43_.v43, (__int64)v5, a2, 0);
  v7 = GameData_212d590[0];
  v8 = *(_QWORD*)(v3 + 1392);
  v39_.v40 = GameData_212d590[0] + 2;
  v41_.v41[0] = v8;
  v41_.v41[1] = *(_QWORD*)(v3 + 1400);
  if (game_GameModeData_instance_ != 0 &&
      (v9 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)(v3 + 1392))) != 0) {
    v10 = *(_DWORD*)(v9 + 32);
  }
  else {
    v10 = 0;
  }
  v41_.v42 = v10;
  game_VariableManager_SetFlag(v3 + 1392, 0);
  AssetTableFile_7e9960((__int64)v39_.v39, (__int64)v43_.v43,
                        game_vstring_kEmpty_ptr[0]);
  if (*(_QWORD*)v39_.v39 == 0) {
    goto LABEL_14;
  }
  v11 = *(unsigned __int8*)(*(_QWORD*)v39_.v39 + 3LL);
  if ((unsigned int)(v11 - 48) < 2) {
  LABEL_10:
    v12 = 2;
    *a3 = 2;
    goto LABEL_16;
  }
  if (v11 == 73) {
    if (*(_BYTE*)(*(_QWORD*)v39_.v39 + 4LL) == 115 &&
        *(_BYTE*)(*(_QWORD*)v39_.v39 + 5LL) == 109) {
      goto LABEL_10;
    }
  LABEL_14:
    TrickEntity_7d1480((__int64)v39_.v39);
    v12 = 0;
    goto LABEL_19;
  }
  v12 = 0;
LABEL_16:
  if ((unsigned int)(v11 - 53) >= 0xFFFFFFFE) {
    v12 |= 1u;
    *a3 = v12;
  }
  v13 = TrickEntity_7d1480((__int64)v39_.v39);
  if ((v12 & 2) != 0) {
    if ((v12 & 1) != 0) {
      goto LABEL_26;
    }
  LABEL_29:
    game_VariableManager_SetFlag(v3 + 1392, 1);
    AssetTableFile_7e9960((__int64)v39_.v39, (__int64)v43_.v43,
                          game_vstring_kEmpty_ptr[0]);
    if (*(_QWORD*)v39_.v39 == 0 ||
        (unsigned int)*(unsigned __int8*)(*(_QWORD*)v39_.v39 + 3LL) - 53 <=
            0xFFFFFFFD) {
      v12 |= 4u;
      *a3 = v12;
    }
    v13 = TrickEntity_7d1480((__int64)v39_.v39);
    if ((v12 & 2) != 0) {
      goto LABEL_83;
    }
    goto LABEL_33;
  }
LABEL_19:
  game_VariableManager_SetFlag(v3 + 1392, 2);
  AssetTableFile_7e9960((__int64)v39_.v39, (__int64)v43_.v43,
                        game_vstring_kEmpty_ptr[0]);
  if (*(_QWORD*)v39_.v39 == 0 ||
      (unsigned int)((v14 = *(unsigned __int8*)(*(_QWORD*)v39_.v39 + 3LL)) -
                     48) >= 2 &&
          (v14 != 73 || *(_BYTE*)(*(_QWORD*)v39_.v39 + 4LL) != 115 ||
           *(_BYTE*)(*(_QWORD*)v39_.v39 + 5LL) != 109)) {
    v12 |= 8u;
    *a3 = v12;
  }
  v13 = TrickEntity_7d1480((__int64)v39_.v39);
  if ((v12 & 1) == 0) {
    goto LABEL_29;
  }
LABEL_26:
  if ((v12 & 2) != 0) {
    goto LABEL_83;
  }
LABEL_33:
  if (GameData_21f92e8 == 0 || GameData_21f92f8 == 0) {
    goto LABEL_83;
  }
  v15 = *v5;
  v16 = GameData_21f92e8 - 1;
  if ((GameData_21f92e8 & (GameData_21f92e8 - 1)) != 0) {
    v17 = *v5;
    if (v15 >= GameData_21f92e8) {
      v17 = v15 % GameData_21f92e8;
    }
  }
  else {
    v17 = v16 & v15;
  }
  v18 = *(_QWORD**)(GameData_21f92e0 + 8 * v17);
  if (v18 == nullptr) {
    goto LABEL_83;
  }
  v19 = (_QWORD*)*v18;
  if (v19 == nullptr) {
    goto LABEL_83;
  }
  if ((GameData_21f92e8 & v16) == 0) {
    while (1) {
      v21 = v19[1];
      if (v21 == v15) {
        if (v19[2] == v15) {
          goto LABEL_55;
        }
      }
      else if ((v21 & v16) != v17) {
        goto LABEL_83;
      }
      v19 = (_QWORD*)*v19;
      if (v19 == nullptr) {
        goto LABEL_83;
      }
    }
  }
  while (1) {
    v20 = v19[1];
    if (v20 == v15) {
      break;
    }
    if (v20 >= GameData_21f92e8) {
      v20 %= (unsigned __int64)GameData_21f92e8;
    }
    if (v20 != v17) {
      goto LABEL_83;
    }
  LABEL_44:
    v19 = (_QWORD*)*v19;
    if (v19 == nullptr) {
      goto LABEL_83;
    }
  }
  if (v19[2] != v15) {
    goto LABEL_44;
  }
LABEL_55:
  v23 = v19[3];
  v22 = v19[4];
  v38 = v22;
  while (v23 != v22) {
    v24 = *(_QWORD**)v23;
    v25 = *(_QWORD*)(*(_QWORD*)v23 + 40LL);
    if (v25 == 0 || v25 == v43_.v44) {
      v27 = v24[7];
      if (v27 == 0 || v27 == v43_.v45) {
        v29 = v24[9];
        if (v29 == 0 || (v39_.v39[0] = *(_WORD*)(v29 + 16) & 0xFFF,
                         ((v13 = game_HasSkill(v46, v39_.v39)) & 1) != 0)) {
          if (v24[11] == 0 ||
              (v30 = (__int64*)v24[3], v31 = *v30, (v32 = v30[1]) == *v30)) {
          LABEL_82:
            *a3 = v12 | 8;
            break;
          }
          while (1) {
            if (*(_QWORD*)v31 != 0) {
              v33 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v34 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v31);
                if (v34 != 0) {
                  v35 = *(__int64 (**)(_QWORD))(v34 + 72);
                  v36 = *(_QWORD*)(v34 + 80);
                  v37 = (_QWORD*)(v34 + (v36 >> 1));
                  if ((v36 & 1) != 0) {
                    v35 = *(__int64 (**)(_QWORD))((char*)v35 + *v37);
                  }
                  v13 = v35(v37);
                }
                else {
                  v13 = 1;
                }
              }
              if (*(_BYTE*)(v31 + 16) != ((v33 == 0) | v13 & 1)) {
                break;
              }
            }
            v31 += 24;
            if (v31 == v32) {
              goto LABEL_82;
            }
          }
        }
      }
    }
    v22 = v38;
    v23 += 8;
  }
LABEL_83:
  v39_.v40 = v7 + 2;
  game_VariableManager_SetFlag((__int64)v41_.v41, v10);
  {
    game_Unit_Destroy_Unit((__int64)v43_.v43);
    return;
  }
}

void CostumeFile_Unknown4()
{

#pragma clang fp contract(off)
  __int64 v0;
  _QWORD* v1;
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
  unsigned __int64** v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  _BOOL8 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 primeEm;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD** v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64* v59;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  __int64 v65;
  unsigned __int64 v66;
  _QWORD* v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  _QWORD* v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  _QWORD* v84;
  __int64 v85;
  char* v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;

  if (GameData_21f92f8 != 0) {
    v1 = (_QWORD*)GameData_21f92f0;
    if (GameData_21f92f0 != 0) {
      v0 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v1;
        v4 = v1[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v0;
          v1[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v2, (__int64)v1);
        v1 = v3;
      } while (v3 != nullptr);
    }
    GameData_21f92f0 = 0;
    if (GameData_21f92e8 != 0) {
      v7 = GameData_21f92e8 & 7;
      if ((unsigned __int64)GameData_21f92e8 >= 8) {
        v9 = GameData_21f92e8 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21f92e0 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 48) = 0;
          v10 = GameData_21f92e0 + 8 * v8;
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
          *(_QWORD*)(GameData_21f92e0 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21f92f8 = 0;
  }
  v12 = (unsigned __int64**)GameData_21c9a78;
  v13 = GameData_21c9a80;
  if (GameData_21c9a78 == GameData_21c9a80) {
    goto LABEL_119;
  }
  do {
    v14 = GameData_21f92e8;
    v15 = **v12;
    if (GameData_21f92e8 != 0) {
      v16 = GameData_21f92e8 - 1;
      if ((GameData_21f92e8 & (GameData_21f92e8 - 1)) != 0) {
        v0 = **v12;
        if (v15 >= GameData_21f92e8) {
          v0 = v15 % GameData_21f92e8;
        }
      }
      else {
        v0 = v16 & v15;
      }
      v17 = *(__int64***)(GameData_21f92e0 + 8 * v0);
      if (v17 != nullptr) {
        v18 = *v17;
        if (*v17 != nullptr) {
          if ((GameData_21f92e8 & v16) == 0) {
            while (1) {
              v20 = v18[1];
              if (v20 == v15) {
                if (v18[2] == v15) {
                  goto LABEL_118;
                }
              }
              else if ((v20 & v16) != v0) {
                goto LABEL_43;
              }
              v18 = (__int64*)*v18;
              if (v18 == nullptr) {
                goto LABEL_43;
              }
            }
          }
          do {
            v19 = v18[1];
            if (v19 == v15) {
              if (v18[2] == v15) {
                goto LABEL_118;
              }
            }
            else {
              if (v19 >= GameData_21f92e8) {
                v19 %= (unsigned __int64)GameData_21f92e8;
              }
              if (v19 != v0) {
                break;
              }
            }
            v18 = (__int64*)*v18;
          } while (v18 != nullptr);
        }
      }
    }
  LABEL_43:
    v21 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v22 = GameData_21f92f8;
    v23 = *(float*)&GameData_21f9300;
    v18 = v21;
    *v21 = 0;
    v21[1] = v15;
    v21[2] = v15;
    v21[3] = 0;
    v21[4] = 0;
    v21[5] = 0;
    v24 = (float)(unsigned __int64)(v22 + 1);
    if (v14 == 0 || (float)(v23 * (float)v14) < v24) {
      v25 = v24 / v23;
      v26 = (v14 & (v14 - 1)) != 0;
      if (v14 < 3) {
        v26 = true;
      }
      v27 = v26 | (2 * v14);
      v28 = vcvtps_u64_f32(v25);
      if (v27 <= v28) {
        v29 = v28;
      }
      else {
        v29 = v27;
      }
      if (v29 == 1) {
        v29 = 2;
      }
      else if ((v29 & (v29 - 1)) != 0) {
        primeEm = std___1___next_prime_alt1(v29);
        v14 = GameData_21f92e8;
        v29 = primeEm;
      }
      if (v29 <= v14) {
        if (v29 >= v14) {
          goto LABEL_104;
        }
        v36 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f92f8 /
                             *(float*)&GameData_21f9300);
        if (v14 < 3 || (v14 & (v14 - 1)) != 0) {
          v36 = std___1___next_prime_alt1(v36);
        }
        else {
          v37 = 1LL << (-(char)__clz(v36 - 1) & 63);
          if (v36 >= 2) {
            v36 = v37;
          }
        }
        if (v29 <= v36) {
          v29 = v36;
        }
        if (v29 >= v14) {
          goto LABEL_104;
        }
        if (v29 == 0) {
          v49 = GameData_21f92e0;
          GameData_21f92e0 = 0;
          if (v49 != 0) {
            v50 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v50,
                                               v49);
          }
          GameData_21f92e8 = 0;
          goto LABEL_104;
        }
      }
      v31 = fw_memory_g_heap_manager_ptr;
      if (v29 >> 61 != 0) {
      LABEL_185:
        GameRoutine_60a210();
      }
      v32 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
      v33 = GameData_21f92e0;
      GameData_21f92e0 = v32;
      if (v33 != 0) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v31 + v34, v33);
      }
      GameData_21f92e8 = v29;
      if (v29 >= 8) {
        v35 = 0;
        do {
          *(_QWORD*)(GameData_21f92e0 + 8 * v35) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v35 + 8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v35 + 16) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v35 + 24) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v35 + 32) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v35 + 40) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v35 + 48) = 0;
          v38 = GameData_21f92e0 + 8 * v35;
          v35 += 8;
          *(_QWORD*)(v38 + 56) = 0;
        } while ((v29 & 0x1FFFFFFFFFFFFFF8LL) != v35);
      }
      else {
        v35 = 0;
      }
      v39 = v29 & 7;
      if ((v29 & 7) != 0) {
        v40 = 8 * v35;
        do {
          --v39;
          *(_QWORD*)(GameData_21f92e0 + v40) = 0;
          v40 += 8;
        } while (v39 != 0);
      }
      v41 = (_QWORD**)GameData_21f92f0;
      if (GameData_21f92f0 == 0) {
        goto LABEL_104;
      }
      v42 = *(_QWORD*)(GameData_21f92f0 + 8);
      v43 = v29 - 1;
      if ((v29 & (v29 - 1)) == 0) {
        v46 = v42 & v43;
        *(_QWORD*)(GameData_21f92e0 + 8 * v46) = &GameData_21f92f0;
        while (1) {
          v47 = *v41;
          if (*v41 == nullptr) {
            break;
          }
          v48 = v47[1] & v43;
          if (v48 == v46) {
            v41 = (_QWORD**)*v41;
          }
          else if (*(_QWORD*)(GameData_21f92e0 + 8 * v48) != 0) {
            *v41 = (_QWORD*)*v47;
            *v47 = **(_QWORD**)(GameData_21f92e0 + 8 * v48);
            **(_QWORD**)(GameData_21f92e0 + 8 * v48) = v47;
          }
          else {
            *(_QWORD*)(GameData_21f92e0 + 8 * v48) = v41;
            v41 = (_QWORD**)v47;
            v46 = v48;
          }
        }
      LABEL_104:
        v14 = GameData_21f92e8;
        if ((v14 & (v14 - 1)) != 0) {
          if (v15 >= GameData_21f92e8) {
            v0 = v15 % GameData_21f92e8;
          }
          else {
            v0 = v15;
          }
        }
        else {
          v0 = (GameData_21f92e8 - 1) & v15;
        }
        goto LABEL_109;
      }
      if (v42 >= v29) {
        v42 %= v29;
      }
      *(_QWORD*)(GameData_21f92e0 + 8 * v42) = &GameData_21f92f0;
      v44 = *v41;
      if (*v41 == nullptr) {
        goto LABEL_104;
      }
      while (1) {
        v45 = v44[1];
        if (v45 >= v29) {
          v45 %= v29;
        }
        if (v45 != v42) {
          if (*(_QWORD*)(GameData_21f92e0 + 8 * v45) == 0) {
            *(_QWORD*)(GameData_21f92e0 + 8 * v45) = v41;
            goto LABEL_81;
          }
          *v41 = (_QWORD*)*v44;
          *v44 = **(_QWORD**)(GameData_21f92e0 + 8 * v45);
          **(_QWORD**)(GameData_21f92e0 + 8 * v45) = v44;
          v44 = v41;
        }
        v45 = v42;
      LABEL_81:
        v41 = (_QWORD**)v44;
        v44 = (_QWORD*)*v44;
        v42 = v45;
        if (v44 == nullptr) {
          goto LABEL_104;
        }
      }
    }
  LABEL_109:
    v51 = GameData_21f92e0;
    v52 = *(__int64**)(GameData_21f92e0 + 8 * v0);
    if (v52 != nullptr) {
      *v18 = *v52;
      *v52 = (__int64)v18;
    }
    else {
      v53 = GameData_21f92f0;
      GameData_21f92f0 = (__int64)v18;
      *v18 = v53;
      *(_QWORD*)(v51 + 8 * v0) = &GameData_21f92f0;
      if (*v18 != 0) {
        v54 = *(_QWORD*)(*v18 + 8);
        if ((v14 & (v14 - 1)) != 0) {
          if (v54 >= v14) {
            v54 %= v14;
          }
        }
        else {
          v54 &= v14 - 1;
        }
        *(_QWORD*)(GameData_21f92e0 + 8 * v54) = v18;
      }
    }
    ++GameData_21f92f8;
  LABEL_118:
    ++v12;
    v18[4] = v18[3];
  } while (v12 != (unsigned __int64**)v13);
LABEL_119:
  v55 = *(__int64**)(GameData_21c9ce0 + 64);
  v96 = *(__int64**)(GameData_21c9ce0 + 72);
  if (v55 != v96) {
    v56 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v58 = *v55;
      v59 = *(unsigned __int64**)(*v55 + 40);
      if (v59 == nullptr) {
        v64 = (_QWORD*)GameData_21f92f0;
        if (GameData_21f92f0 == 0) {
          goto LABEL_123;
        }
        while (1) {
          v67 = (_QWORD*)v64[4];
          v66 = v64[5];
          if ((unsigned __int64)v67 < v66) {
            *v67 = v58;
            v65 = (__int64)(v67 + 1);
          }
          else {
            v68 = v64[3];
            v69 = (char*)v67 - v68;
            v70 = ((__int64)v67 - v68) >> 3;
            v71 = v70 + 1;
            if ((unsigned __int64)(v70 + 1) >> 61 != 0) {
              goto LABEL_184;
            }
            v72 = v66 - v68;
            if (v72 >> 2 > v71) {
              v71 = v72 >> 2;
            }
            if ((unsigned __int64)v72 >= 0x7FFFFFFFFFFFFFF8LL) {
              v73 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v73 = v71;
            }
            if (v73 != 0) {
              if (v73 >> 61 != 0) {
                goto LABEL_185;
              }
              v74 = fw_memory_HeapManager_Allocate(*v56, 8 * v73, 16, 0);
            }
            else {
              v74 = 0;
            }
            v75 = v74 + 8 * v73;
            v76 = (unsigned __int64)v67 - v68;
            v77 = (__int64)&v69[v74 + -8 * v70];
            *(_QWORD*)&v69[v74] = v58;
            v65 = (__int64)&v69[v74 + 8];
            memcpy_alt1(v77, v68, v76);
            v64[3] = v77;
            v64[4] = v65;
            v64[5] = v75;
            if (v68 != 0) {
              v78 = 128;
              if (*(_QWORD*)(*v56 + 200) == 0) {
                v78 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v56 + v78, v68);
            }
          }
          v64[4] = v65;
          v64 = (_QWORD*)*v64;
          if (v64 == nullptr) {
            goto LABEL_123;
          }
        }
      }
      if (GameData_21f92e8 == 0 || GameData_21f92f8 == 0) {
        goto LABEL_123;
      }
      v61 = *v59;
      v62 = GameData_21f92e8 - 1;
      if ((GameData_21f92e8 & (GameData_21f92e8 - 1)) != 0) {
        v63 = v61;
        if (v61 >= GameData_21f92e8) {
          v63 = v61 % GameData_21f92e8;
        }
      }
      else {
        v63 = v62 & v61;
      }
      v79 = *(_QWORD**)(GameData_21f92e0 + 8 * v63);
      if (v79 == nullptr) {
        goto LABEL_123;
      }
      v80 = (_QWORD*)*v79;
      if (*v79 == 0) {
        goto LABEL_123;
      }
      if ((GameData_21f92e8 & v62) == 0) {
        while (1) {
          v82 = v80[1];
          if (v82 == v61) {
            if (v80[2] == v61) {
              goto LABEL_168;
            }
          }
          else if ((v82 & v62) != v63) {
            goto LABEL_123;
          }
          v80 = (_QWORD*)*v80;
          if (v80 == nullptr) {
            goto LABEL_123;
          }
        }
      }
      while (1) {
        v81 = v80[1];
        if (v81 == v61) {
          break;
        }
        if (v81 >= GameData_21f92e8) {
          v81 %= (unsigned __int64)GameData_21f92e8;
        }
        if (v81 != v63) {
          goto LABEL_123;
        }
      LABEL_157:
        v80 = (_QWORD*)*v80;
        if (v80 == nullptr) {
          goto LABEL_123;
        }
      }
      if (v80[2] != v61) {
        goto LABEL_157;
      }
    LABEL_168:
      v84 = (_QWORD*)v80[4];
      v83 = v80[5];
      if ((unsigned __int64)v84 < v83) {
        *v84 = v58;
        v57 = (__int64)(v84 + 1);
        goto LABEL_122;
      }
      v85 = v80[3];
      v86 = (char*)v84 - v85;
      v87 = ((__int64)v84 - v85) >> 3;
      v88 = v87 + 1;
      if ((unsigned __int64)(v87 + 1) >> 61 != 0) {
      LABEL_184:
        GameRoutine_a008f0();
      }
      v89 = v83 - v85;
      if (v89 >> 2 > v88) {
        v88 = v89 >> 2;
      }
      if ((unsigned __int64)v89 >= 0x7FFFFFFFFFFFFFF8LL) {
        v90 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v90 = v88;
      }
      if (v90 == 0) {
        v91 = 0;
        goto LABEL_179;
      }
      if (v90 >> 61 != 0) {
        goto LABEL_185;
      }
      v91 = fw_memory_HeapManager_Allocate(*v56, 8 * v90, 16, 0);
    LABEL_179:
      v92 = v91 + 8 * v90;
      v93 = (unsigned __int64)v84 - v85;
      v94 = (__int64)&v86[v91 + -8 * v87];
      *(_QWORD*)&v86[v91] = v58;
      v57 = (__int64)&v86[v91 + 8];
      memcpy_alt1(v94, v85, v93);
      v80[3] = v94;
      v80[4] = v57;
      v80[5] = v92;
      if (v85 != 0) {
        v95 = 128;
        if (*(_QWORD*)(*v56 + 200) == 0) {
          v95 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v56 + v95, v85);
      }
    LABEL_122:
      v80[4] = v57;
    LABEL_123:
      ++v55;
    } while (v55 != v96);
  }
}

void CostumeFile_Unknown5()
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

  if (GameData_21f92f8 != 0) {
    v0 = (_QWORD*)GameData_21f92f0;
    if (GameData_21f92f0 != 0) {
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
    GameData_21f92f0 = 0;
    if (GameData_21f92e8 != 0) {
      v7 = GameData_21f92e8 & 7;
      if ((unsigned __int64)GameData_21f92e8 >= 8) {
        v9 = GameData_21f92e8 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21f92e0 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 48) = 0;
          v10 = GameData_21f92e0 + 8 * v8;
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
          *(_QWORD*)(GameData_21f92e0 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21f92f8 = 0;
  }
}

void CostumeFile_9ffa20()
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

  if (GameData_21f92f8 != 0) {
    v0 = (_QWORD*)GameData_21f92f0;
    if (GameData_21f92f0 != 0) {
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
    GameData_21f92f0 = 0;
    if (GameData_21f92e8 != 0) {
      v7 = GameData_21f92e8 & 7;
      if ((unsigned __int64)GameData_21f92e8 >= 8) {
        v9 = GameData_21f92e8 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21f92e0 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21f92e0 + 8 * v8 + 48) = 0;
          v10 = GameData_21f92e0 + 8 * v8;
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
          *(_QWORD*)(GameData_21f92e0 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21f92f8 = 0;
  }
}

#pragma GCC visibility pop
