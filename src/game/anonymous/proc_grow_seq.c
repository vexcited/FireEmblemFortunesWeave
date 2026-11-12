#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcGrowSeq_vtable[])();
extern __int64 GameData_21ca2f8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcGrowSeq_Destructor(__int64 a1);
__int64 GameRoutine_1373b10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1373bf0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17685e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ef00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6fcb20(_QWORD, _QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 GameRoutine_932360(_QWORD, _QWORD);
__int64 UnitSkillList_84d980(_QWORD, _QWORD);
__int64 Unit_6cc580(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cc9e0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1f9cef8[])();
extern __int64 GameData_21c99b0;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6881c0(void);
void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);
__int64 ProcGrowSeq_7faa40(__int64 result);
__int64 game_anonymous_ProcGrowSeq_UpdateLearn_alt1(_QWORD* a1) __asm__(
    "game_anonymous_ProcGrowSeq_UpdateLearn");
__int64 ProcGrowSeq_7fafb0(__int64 result);
__int64 ProcGrowSeq_7fb040(__int64 result);
__int64 game_anonymous_ProcGrowSeq_LevelUp_closure_Invoke(__int64 result);
__int64 game_anonymous_ProcGrowSeq_UpdateLearn_closure_Invoke(__int64 result,
                                                              __int64* a2);
__int64* AchieveMap_9b19a0(__int64* result, unsigned __int8, unsigned __int8);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, __int64);
__int64 game_HashString(__int64 result);
__int64 game_HashString32(__int64 result);
__int64 game_telop_1745d80(__int64, __int64, int, char, __int64);
extern _UNKNOWN GameData_1a8d262;
extern _UNKNOWN GameData_1a8d283;
extern _UNKNOWN GameData_1a94c11;
extern _UNKNOWN GameData_1abf8e3;
extern __int64 (*GameData_1f9ce78[])();
extern __int64 GameData_21f61c0[];
void game_Unit_LevelUp(__int64, char);
__int64 game_anonymous_ProcGrowSeq_LevelUp(__int64 result);
__int64* ProcGrowSeq_7fa8f0(__int64* result);
__int64*
GameRoutine_7fb7c0_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_7fb7c0");
__int64
UnitSkillList_84d980_alt1(__int64*,
                          unsigned int*) __asm__("UnitSkillList_84d980");
__int64 Unit_6cc580_alt1(__int64, _DWORD*) __asm__("Unit_6cc580");
__int64 Unit_6cc9e0_alt1(__int64, _DWORD*) __asm__("Unit_6cc9e0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_67ef00(__int64 result, __int64, __int64);
__int64
game_Unit_Unknown6c4610_alt1(__int64) __asm__("game_Unit_Unknown6c4610");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
bool GameRoutine_6fcb20_alt1(__int64, _QWORD*) __asm__("GameRoutine_6fcb20");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6881c0_alt1() __asm__("GameRoutine_6881c0");
void __attribute__((noreturn))
GameRoutine_6e3e20_alt1() __asm__("GameRoutine_6e3e20");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_ProcGrowSeq_UpdateLearn(__int64* a1);

__int64 game_anonymous_ProcGrowSeq_LevelUp(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  char v4;
  __int64 v5;
  unsigned int v6;
  char v7;
  char v8;
  int v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v1 = result;
  if ((*(_BYTE*)(result + 250) & 2) != 0 ||
      (*(_BYTE*)(result + 474) & 1) != 0) {
    result = *(_QWORD*)(result + 152);
    v6 = *(unsigned __int8*)(result + 498);
    if (*(_DWORD*)(v1 + 256) < (signed int)v6) {
      do {
        v7 = v6 - 1;
        if (v6 > 0x64) {
          v7 = 99;
        }
        if (v6 < 2) {
          v8 = 1;
        }
        else {
          v8 = v7;
        }
        game_Unit_LevelUp(result, v8);
        result = *(_QWORD*)(v1 + 152);
        v9 = *(_DWORD*)(v1 + 256) + 1;
        *(_DWORD*)(v1 + 256) = v9;
        v6 = *(unsigned __int8*)(result + 498);
      } while (v9 < (int)v6);
    }
    return result;
  }
  v2 = *(_QWORD*)(result + 152);
  v3 = *(_DWORD*)(result + 256);
  if (v3 >= *(unsigned __int8*)(v2 + 498)) {
    return result;
  }
  v4 = *(_BYTE*)(result + 473);
  v11_.v11[0] = GameData_1f9ce78;
  v11_.v11[1] = result;
  v11_.v12 = v11_.v11;
  game_telop_1745d80(result, v2, v3, v4, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v5 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_17;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v5))((__int64)v11_.v12);
LABEL_17:
  ++*(_DWORD*)(v1 + 256);
  result = game_HashString32((__int64)"LevelUp");
  v10 = *(_QWORD*)(v1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == (_DWORD)result) {
          *(_QWORD*)(v1 + 16) = v10;
          *(_WORD*)(v1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        return result;
      }
      v10 += 64;
    }
  }
  return result;
}

__int64* ProcGrowSeq_7fa8f0(__int64* result)
{
  char* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  void* v5;
  unsigned int v6;
  struct {
    __int64 v7;
    void* v8;
  } v7_;

  v1 = (char*)result + 292;
  v2 = result;
  v3 = 0;
  v4 = result[19] + 540;
  do {
    if (*(int*)&v1[4 * v3 - 112] >= 1) {
      v6 = *(unsigned __int8*)(v4 + v3);
      if ((unsigned __int8)v1[v3] < v6) {
        if (*(unsigned __int8*)(v4 + v3) > 8u) {
          if (v6 == 9) {
            v7_.v8 = &GameData_1abf8e3;
            v5 = &GameData_1abf8e3;
          }
          else {
            if (v6 != 12) {
              goto LABEL_4;
            }
            v7_.v8 = &GameData_1a8d283;
            v5 = &GameData_1a8d283;
          }
        }
        else if (v6 == 5) {
          v7_.v8 = &GameData_1a94c11;
          v5 = &GameData_1a94c11;
        }
        else {
          if (v6 != 7) {
            goto LABEL_4;
          }
          v7_.v8 = &GameData_1a8d262;
          v5 = &GameData_1a8d262;
        }
        v7_.v7 = game_HashString((__int64)v5);
        GameRoutine_9b11a0(GameData_21f61c0, (unsigned __int64*)&v7_.v7, 1);
      LABEL_4:
        v7_.v7 = *(_QWORD*)(v2[19] + 392);
        result = AchieveMap_9b19a0(&v7_.v7, v3, v6);
      }
    }
    ++v3;
  } while (v3 != 13);
  return result;
}

__int64 ProcGrowSeq_7faa40(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  _DWORD* v16;
  _DWORD* i;
  int v18;

  v1 = *(_QWORD**)(result + 152);
  if (v1[51] == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(v1[50] + 24LL) + 1104LL);
    if (v2 != 0 && *(_DWORD*)(result + 172) >= 1) {
      v4 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1104LL);
      if (v4 != 0) {
        v5 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1104LL);
        if (v5 != 0) {
          v6 = *(unsigned __int16*)(v5 + 412);
          if (*(_WORD*)(v5 + 412) != 0) {
            v7 = *(_QWORD*)(result + 312);
            v8 = *(unsigned __int16*)(v5 + 16);
            if (v8 >= (*(_QWORD*)(result + 320) - v7) >> 1) {
              v9 = 0;
            }
            else {
              v9 = *(_WORD*)(v7 + 2 * v8) & 0x3FF;
            }
            v6 = v9 >= v6;
          }
        }
        else {
          v6 = 0;
        }
        v10 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1104LL);
        if (v10 != 0 && (v11 = *(unsigned __int16*)(v10 + 412),
                         *(_WORD*)(v10 + 412) != 0)) {
          v12 = v1[70];
          v13 = *(unsigned __int16*)(v10 + 16);
          if (v13 >= (v1[71] - v12) >> 1) {
            v14 = 0;
          }
          else {
            v14 = *(_WORD*)(v12 + 2 * v13) & 0x3FF;
          }
          if (v6 == v14 >= v11) {
            return result;
          }
        }
        else if ((v6 & 1) == 0) {
          return result;
        }
        *(_QWORD*)(result + 440) = v2;
        v15 = *(_QWORD*)(v2 + 24);
        v16 = *(_DWORD**)(v15 + 800);
        for (i = *(_DWORD**)(v15 + 808); v16 != i; ++v16) {
          if ((*v16 & 0xFFF) != 0) {
            result = GameRoutine_6fcb20(
                *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                           8LL * (*v16 & 0xFFF)),
                v1 + 230);
            if ((result & 1) != 0) {
              v18 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                              64) +
                                                   8LL * (*v16 & 0xFFF)) +
                                        104LL);
              if (v18 == 2) {
                result = Unit_6cc580(v1, v16, 0);
              }
              else if (v18 == 1) {
                result = Unit_6cc9e0(v1, v16, 0);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

void game_anonymous_ProcGrowSeq_UpdateLearn(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  unsigned int* v19;
  char v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  int v34;
  char v35;
  __int64 v36;
  char v37;
  int v38;
  int v39;
  __int64 v40;
  char v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  struct {
    _QWORD v53[4];
    _QWORD* v54;
  } v53_;
  struct {
    __int64 v55;
    __int64 v56;
    __int64 v57;
    int v58;
    char gap76_[4];
    __int64 v59;
    __int64 v60;
    unsigned __int64 v61;
    __int64 v62;
    __int64 v63;
    unsigned __int64 v64;
    __int64 v65;
    __int64 v66;
  } v55_;

  v2 = (__int64*)game_Unit_Unknown6c4610_alt1(a1[19]);
  v3 = v2;
  v55_.v55 = 0;
  v55_.v56 = 0;
  v55_.v57 = 0;
  v55_.v58 = 0;
  if (&v55_.v55 != v2) {
    GameRoutine_7fb7c0_alt1(&v55_.v55, *v2, v2[1], (v2[1] - *v2) >> 2);
  }
  v4 = *((_DWORD*)v3 + 6);
  v55_.v60 = 0;
  v55_.v61 = 0;
  v55_.v59 = 0;
  v55_.v58 = v4;
  v6 = v3[4];
  v5 = v3[5];
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = v5 - v6;
  if (v5 != v6) {
    if ((v8 & 0x8000000000000000LL) != 0) {
      goto LABEL_45;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5 - v6, 16, 0);
    v10 = v9 + v8;
    v55_.v59 = v9;
    v55_.v60 = v9;
    v55_.v61 = v9 + v8;
    memcpy_alt1(v9, v6, v8);
    v55_.v60 = v10;
  }
  v55_.v63 = 0;
  v55_.v64 = 0;
  v55_.v62 = 0;
  v12 = v3[7];
  v11 = v3[8];
  v13 = v11 - v12;
  if (v11 != v12) {
    if ((v13 & 0x8000000000000000LL) != 0) {
    LABEL_45:
      GameRoutine_6e3e20_alt1();
    }
    v14 = fw_memory_HeapManager_Allocate_alt1(*v7, v11 - v12, 16, 0);
    v15 = v14 + v13;
    v55_.v62 = v14;
    v55_.v63 = v14;
    v55_.v64 = v14 + v13;
    memcpy_alt1(v14, v12, v13);
    v55_.v63 = v15;
  }
  v16 = v3[10];
  v17 = v3[11];
  v18 = (unsigned int*)a1[46];
  v19 = (unsigned int*)a1[47];
  v55_.v65 = v16;
  v55_.v66 = v17;
  if (v18 == v19) {
    v22 = v55_.v59;
    v23 = v55_.v60;
  }
  else {
    v20 = 0;
    do {
      v21 = UnitSkillList_84d980_alt1(&v55_.v55, v18++);
      v20 |= v21;
    } while (v18 != v19);
    v22 = v55_.v59;
    v23 = v55_.v60;
    if ((v20 & 1) != 0) {
      v55_.v65 = 0;
      v55_.v66 = 0;
      if ((int)((unsigned __int64)(v55_.v60 - v55_.v59) >> 2) >= 1) {
        v24 = (int)((v55_.v60 - v55_.v59) >> 2);
        v25 = v24 <= 1 ? 1LL : (int)((v55_.v60 - v55_.v59) >> 2);
        v26 = *GameData_212c880[0];
        if (v24 >= 2) {
          v32 = (int*)(v55_.v59 + 4);
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          do {
            v31 += 2;
            v33 = *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (*(v32 - 1) & 0xFFF));
            v34 = v30 | (1 << *(_BYTE*)(v33 + 104));
            v35 = *(_BYTE*)(v33 + 250);
            LOWORD(v55_.v65) = v34;
            v36 = (1LL << v35) | v29;
            v37 = *(_BYTE*)(v33 + 115);
            v55_.v66 = v36;
            HIDWORD(v55_.v65) = (1 << v37) | v28;
            v38 = *(unsigned __int16*)(*(_QWORD*)(v33 + 24) + 1064LL) | v27;
            WORD1(v55_.v65) = v38;
            v39 = *v32;
            v32 += 2;
            v40 = *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (v39 & 0xFFF));
            v30 = v34 | (1 << *(_BYTE*)(v40 + 104));
            v41 = *(_BYTE*)(v40 + 250);
            LOWORD(v55_.v65) = v30;
            v29 = (1LL << v41) | v36;
            v42 = *(_BYTE*)(v40 + 115);
            v55_.v66 = v29;
            v28 = (1 << v42) | HIDWORD(v55_.v65);
            HIDWORD(v55_.v65) = v28;
            v27 = *(unsigned __int16*)(*(_QWORD*)(v40 + 24) + 1064LL) | v38;
            WORD1(v55_.v65) = v27;
          } while ((v25 & 0x7FFFFFFFFFFFFFFELL) != v31);
        }
        else {
          LOWORD(v27) = 0;
          v28 = 0;
          v29 = 0;
          LOWORD(v30) = 0;
          v31 = 0;
        }
        if ((v25 & 1) != 0) {
          v43 = *(_QWORD*)(*(_QWORD*)(v26 + 64) +
                           8LL * (*(_DWORD*)(v55_.v59 + 4 * v31) & 0xFFF));
          LOWORD(v55_.v65) = v30 | (1 << *(_BYTE*)(v43 + 104));
          v55_.v66 = (1LL << *(_BYTE*)(v43 + 250)) | v29;
          HIDWORD(v55_.v65) = (1 << *(_BYTE*)(v43 + 115)) | v28;
          WORD1(v55_.v65) = *(_WORD*)(*(_QWORD*)(v43 + 24) + 1064LL) | v27;
        }
      }
    }
  }
  for (; v22 != v23; v22 += 4) {
    v45 = a1[19];
    v53_.v53[0] = GameData_1f9cef8;
    v53_.v53[1] = v22;
    v53_.v53[2] = a1;
    v46 = *(_QWORD*)(v45 + 392);
    v53_.v54 = v53_.v53;
    game_67ef00(v46, v45, (__int64)v53_.v53);
    if (v53_.v54 == v53_.v53) {
      v44 = 32;
    }
    else {
      if (v53_.v54 == nullptr) {
        continue;
      }
      v44 = 40;
    }
    (*(void (**)(__int64))(*v53_.v54 + v44))((__int64)v53_.v54);
  }
  if (v55_.v62 != 0) {
    v47 = *v7;
    v55_.v63 = v55_.v62;
    v48 = 128;
    if (*(_QWORD*)(v47 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v47 + v48, v55_.v62);
  }
  if (v55_.v59 != 0) {
    v49 = *v7;
    v55_.v60 = v55_.v59;
    v50 = 128;
    if (*(_QWORD*)(v49 + 200) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v49 + v50, v55_.v59);
  }
  if (v55_.v55 != 0) {
    v51 = *v7;
    v55_.v56 = v55_.v55;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v51 + v52, v55_.v55);
  }
}

__int64 ProcGrowSeq_7fafb0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  _QWORD v4[2];

  if ((*(_BYTE*)(result + 250) & 4) == 0) {
    v1 = *(_QWORD*)(result + 152);
    if (*(_BYTE*)(v1 + 1880) != 0) {
      v2 = result;
      v4[0] = *(_QWORD*)(v1 + 392);
      v4[1] = v1;
      result = GameRoutine_932360(v1 + 1880, v4);
      v3 = *(_DWORD*)result;
      if ((*(_DWORD*)result & 0xFFF) != 0) {
        result = v2;
        if (((*(_DWORD*)(v2 + 432) ^ v3) & 0xFFF) != 0) {
          return GameRoutine_17685e0(v2, *(_QWORD*)(v2 + 152), v1 + 1880);
        }
      }
    }
  }
  return result;
}

__int64 ProcGrowSeq_7fb040(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 250) & 4) == 0) {
    v1 = *(_QWORD*)(result + 152);
    v2 = *(_QWORD*)(result + 440);
    v3 = result + 448;
    if (*(_BYTE*)(result + 472) == 1) {
      return GameRoutine_1373b10(result, v1, v3, v2);
    }
    else {
      return GameRoutine_1373bf0(result, v1, v3, v2);
    }
  }
  return result;
}

__int64 game_anonymous_ProcGrowSeq_LevelUp_closure_Invoke(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 474LL) = 1;
  return result;
}

__int64 game_anonymous_ProcGrowSeq_UpdateLearn_closure_Invoke(__int64 result,
                                                              __int64* a2)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  int v23;

  v2 = *a2;
  v3 = GameData_212c880[0];
  if (*(_QWORD*)(*a2 + 48) ==
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (**(_DWORD**)(result + 8) & 0xFFF))) {
    v4 = *(_QWORD**)(result + 16);
    v6 = (_QWORD*)v4[57];
    v5 = v4[58];
    if ((unsigned __int64)v6 >= v5) {
      v8 = v4[56];
      v9 = (char*)v6 - v8;
      v10 = ((__int64)v6 - v8) >> 3;
      v11 = v10 + 1;
      if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
        GameRoutine_6881c0_alt1();
      }
      v12 = v5 - v8;
      v13 = fw_memory_g_heap_manager_ptr;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v11;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v15 = result;
        v16 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = result;
        v16 = 0;
      }
      v17 = v16 + 8 * v14;
      v18 = (unsigned __int64)v6 - v8;
      v19 = (__int64)&v9[v16 + -8 * v10];
      *(_QWORD*)&v9[v16] = v2;
      v7 = (__int64)&v9[v16 + 8];
      memcpy_alt1(v19, v8, v18);
      v4[56] = v19;
      v4[57] = v7;
      v4[58] = v17;
      if (v8 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v20, v8);
      }
      result = v15;
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[57] = v7;
    v21 = *(_DWORD**)(result + 8);
    if ((*v21 & 0xFFF) != 0) {
      v22 = v4[19];
      result = GameRoutine_6fcb20_alt1(
          *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*v21 & 0xFFF)),
          (_QWORD*)(v22 + 1840));
      if ((result & 1) != 0) {
        v23 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * (*v21 & 0xFFF)) +
                                  104LL);
        if (v23 == 2) {
          return Unit_6cc580_alt1(v22, v21);
        }
        else if (v23 == 1) {
          return Unit_6cc9e0_alt1(v22, v21);
        }
      }
    }
  }
  return result;
}

__int64 ProcGrowSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = game_anonymous_ProcGrowSeq_vtable;
  if (*(_BYTE*)(a1 + 475) == 1 && GameData_21ca2f8 != 0) {
    *(_DWORD*)(GameData_21ca2f8 + 20) &= ~0x10000000u;
  }
  v2 = *(_QWORD*)(a1 + 448);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 456) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = *(_QWORD*)(a1 + 392);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 400) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 368);
  if (v9 != 0) {
    v10 = *v3;
    *(_QWORD*)(a1 + 376) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = *(_QWORD*)(a1 + 336);
  if (v12 != 0) {
    v13 = *v3;
    *(_QWORD*)(a1 + 344) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = *(_QWORD*)(a1 + 312);
  if (v15 != 0) {
    v16 = *v3;
    *(_QWORD*)(a1 + 320) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
