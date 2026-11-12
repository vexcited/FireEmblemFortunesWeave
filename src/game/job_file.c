#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c99c0;
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret GameRoutine_677000(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_67afd0(void);
__int64* JobFile_676c00_alt1(__int64* result,
                             __int64 a2) __asm__("JobFile_676c00");
__int64 JobFile_676ef0(__int64* a1);
unsigned __int64 JobFile_6774a0(_QWORD* a1, __int64 a2);
__int64 game_JobFile_GetFromClassChangeCondition_lambda0_Invoke(__int64 result,
                                                                _QWORD* a2);
__int64 Resources_66bfc0(unsigned __int64*);
__int64 UnitSkillList_84cf20(__int64, __int64, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a98a4e;
extern __int64 (*GameData_1f907e0[])();
extern __int64* GameData_212c868;
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 GameData_21c9878;
extern __int64 GameData_21c9880;
extern __int64 GameData_21c9888;
extern __int64 GameData_21c9890;
extern __int64 GameData_21c9898[];
extern __int64 GameData_21c98a0;
extern __int64 GameData_21c98b0;
extern __int64 GameData_21c98b8;
extern __int64 GameData_21c98c8;
extern __int64 GameData_21c98d0;
extern __int64 GameData_21c98e0;
extern __int64 GameData_21c98e8;
extern __int64 GameData_21c98f8;
extern __int64 GameData_21c9900;
extern __int64 GameData_21c9910;
extern __int64 GameData_21c9918;
extern __int64 GameData_21c9930;
extern __int64 GameData_21c9948;
extern __int64 GameData_21c9950;
extern __int64 GameData_21c9978;
extern __int64 GameData_21c9980;
extern __int64 GameData_21c9988;
extern __int64 game_g_marked_skills;
extern int GameData_21c9940;
unsigned __int64 GameRoutine_67e0a0(unsigned __int64 result, unsigned int,
                                    __int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_667c50();
void __attribute__((noreturn))
GameRoutine_67afd0_alt1() __asm__("GameRoutine_67afd0");
void __attribute__((noreturn))
GameRoutine_67afd0_alt2(_QWORD) __asm__("GameRoutine_67afd0");
__int64 JobFile_6763c0(__int64 a1, unsigned __int8* a2, __int64 a3);
unsigned __int64 JobFile_Unknown4(_QWORD* a1);
void JobFile_Unknown5();
void JobFile_Unknown6();
__attribute__((swiftcall)) void
game_JobFile_GetFromClassChangeCondition(PSEUDO_X8 x8_, __int64** result);
__attribute__((swiftcall)) void JobFile_6772e0(PSEUDO_X8 x8_,
                                               unsigned __int16* a1);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void JobFile_676c00(__int64* a1, __int64 a2);

__int64 JobFile_6763c0(__int64 a1, unsigned __int8* a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  char v8;
  int v9;
  int v11;

  if (a3 == 0) {
    return (unsigned int)*(char*)(a1 + *a2 + 398);
  }
  LODWORD(v5) = *a2;
  if ((_DWORD)v5 != 10) {
    return (unsigned int)*(char*)(a1 + (unsigned int)v5 + 398);
  }
  v6 = a1;
  v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) +
                   game_g_shared_system_skills_ptr + 4) &
        0xFFF;
  v8 = game_HasSkill((_QWORD*)(a3 + 1744), (unsigned int*)&v11);
  a1 = v6;
  v5 = *a2;
  if ((v8 & 1) == 0) {
    return (unsigned int)*(char*)(a1 + (unsigned int)v5 + 398);
  }
  v9 = *(char*)(v6 + v5 + 398);
  if (v9 <= 1) {
    return 1;
  }
  else {
    return (unsigned int)v9;
  }
}

unsigned __int64 JobFile_Unknown4(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64* i;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 result;
  unsigned __int64 v57;
  bool v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int** v77;
  unsigned int** v78;
  unsigned int* v79;
  unsigned int v80;

  v2 = GameData_212c868;
  v3 = *GameData_212c868;
  v4 = *(__int64**)(*GameData_212c868 + 64);
  v5 = *(__int64**)(*GameData_212c868 + 72);
  if (v4 != v5) {
    do {
      v6 = *v4++;
      *(_QWORD*)(*(_QWORD*)(v6 + 24) + 1104LL) = v6;
      *(_QWORD*)(*(_QWORD*)(v6 + 24) + 1112LL) = *(_QWORD*)(v6 + 88);
    } while (v4 != v5);
    v4 = *(__int64**)(v3 + 64);
    v5 = *(__int64**)(v3 + 72);
  }
  if (v4 != v5) {
    do {
      v7 = *v4;
      v8 = *(_QWORD*)(*v4 + 88);
      if (v8 != 0) {
        *(_QWORD*)(*(_QWORD*)(v8 + 24) + 1104LL) = v7;
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 88) + 24LL) + 1112LL) = v7;
      }
      ++v4;
    } while (v4 != v5);
    v9 = *(__int64**)(v3 + 64);
    v10 = *(__int64**)(v3 + 72);
    if (v9 != v10) {
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*v9 + 88) != 0) {
          v12 = *(_QWORD*)(*(_QWORD*)(*v9 + 24) + 1112LL);
        }
        else {
          v12 = *v9;
        }
        if (*(_QWORD*)(*(_QWORD*)(*v9 + 24) + 1112LL) != 0) {
          v13 = (_QWORD*)v12;
        }
        else {
          v13 = nullptr;
        }
        if (v13 != v11) {
          v14 = v11[9];
          if (v14 != 0) {
            JobFile_676c00_alt1((__int64*)(*(_QWORD*)(v14 + 24) + 984LL), *v9);
            JobFile_676c00_alt1((__int64*)(v11[3] + 960LL), v11[9]);
          }
          v15 = v11[10];
          if (v15 != 0) {
            JobFile_676c00_alt1((__int64*)(*(_QWORD*)(v15 + 24) + 960LL),
                                (__int64)v11);
            JobFile_676c00_alt1((__int64*)(v11[3] + 984LL), v11[10]);
          }
        }
        ++v9;
      } while (v9 != v10);
      v3 = *v2;
    }
  }
  GameData_21c9988 = 0;
  GameData_21c9870 = GameData_21c9868;
  GameData_21c9888 = GameData_21c9880;
  GameData_21c9940 = 0;
  GameData_21c9978 = 0;
  GameData_21c9980 = 0;
  GameData_21c9930 = game_g_marked_skills;
  GameData_21c9950 = GameData_21c9948;
  GameData_21c98a0 = GameData_21c9898[0];
  GameData_21c98b8 = GameData_21c98b0;
  GameData_21c98d0 = GameData_21c98c8;
  GameData_21c98e8 = GameData_21c98e0;
  GameData_21c9900 = GameData_21c98f8;
  GameData_21c9918 = GameData_21c9910;
  v17 = *(__int64**)(v3 + 64);
  for (i = *(__int64**)(v3 + 72); v17 != i; ++v17) {
    v19 = *v17;
    if (*(_BYTE*)(*v17 + 504) != 0 &&
        v19 == *(_QWORD*)(*(_QWORD*)(v19 + 24) + 1104LL) &&
        (*(char*)(*v17 + 504) < 0 || *(_QWORD*)(v19 + 480) != 0)) {
      v20 = GameData_21c9870;
      if (GameData_21c9870 >= (unsigned __int64)GameData_21c9878) {
        v22 = GameData_21c9868;
        v23 = GameData_21c9870 - GameData_21c9868;
        v24 = (GameData_21c9870 - GameData_21c9868) >> 3;
        v25 = v24 + 1;
        if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
          goto LABEL_135;
        }
        v26 = GameData_21c9878 - GameData_21c9868;
        if ((GameData_21c9878 - GameData_21c9868) >> 2 > v25) {
          v25 = v26 >> 2;
        }
        if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
          v27 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v27 = v25;
        }
        if (v27 != 0) {
          if (v27 >> 61 != 0) {
            goto LABEL_136;
          }
          v28 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
        }
        else {
          v28 = 0;
        }
        v29 = v28 + 8 * v27;
        v30 = v28 + v23 - 8 * v24;
        *(_QWORD*)(v28 + v23) = v19;
        v21 = v28 + v23 + 8;
        memcpy(v30, v22, v23);
        GameData_21c9868 = v30;
        GameData_21c9870 = v21;
        GameData_21c9878 = v29;
        if (v22 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
        }
      }
      else {
        *(_QWORD*)GameData_21c9870 = v19;
        v21 = v20 + 8;
      }
      GameData_21c9870 = v21;
      v32 = &GameData_21c9898[3 * *(unsigned __int8*)(v19 + 49)];
      v34 = (_QWORD*)v32[1];
      v33 = v32[2];
      if ((unsigned __int64)v34 >= v33) {
        v36 = *v32;
        v37 = (__int64)v34 - *v32;
        v38 = (v37 >> 3) + 1;
        if (v38 >> 61 != 0) {
          goto LABEL_135;
        }
        v39 = v33 - v36;
        if (v39 >> 2 > v38) {
          v38 = v39 >> 2;
        }
        if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
          v40 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v40 = v38;
        }
        if (v40 != 0) {
          if (v40 >> 61 != 0) {
            goto LABEL_136;
          }
          v41 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
        }
        else {
          v41 = 0;
        }
        v42 = v41 + 8 * v40;
        v43 = v41 + v37 - 8 * (v37 >> 3);
        *(_QWORD*)(v41 + v37) = v19;
        v35 = v41 + v37 + 8;
        memcpy(v43, v36, v37);
        *v32 = v43;
        v32[1] = v35;
        v32[2] = v42;
        if (v36 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v36);
        }
      }
      else {
        *v34 = v19;
        v35 = (__int64)(v34 + 1);
      }
      v32[1] = v35;
    }
    if (*(_WORD*)(v19 + 440) != 0) {
      v45 = GameData_21c9888;
      if (GameData_21c9888 < (unsigned __int64)GameData_21c9890) {
        *(_QWORD*)GameData_21c9888 = v19;
        v18 = v45 + 8;
      }
      else {
        v46 = GameData_21c9880;
        v47 = GameData_21c9888 - GameData_21c9880;
        v48 = (GameData_21c9888 - GameData_21c9880) >> 3;
        v49 = v48 + 1;
        if ((unsigned __int64)(v48 + 1) >> 61 != 0) {
        LABEL_135:
          GameRoutine_67afd0_alt1();
        }
        v50 = GameData_21c9890 - GameData_21c9880;
        if ((GameData_21c9890 - GameData_21c9880) >> 2 > v49) {
          v49 = v50 >> 2;
        }
        if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
          v51 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v51 = v49;
        }
        if (v51 != 0) {
          if (v51 >> 61 != 0) {
          LABEL_136:
            GameRoutine_60a210_alt1();
          }
          v52 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v51, 16, 0);
        }
        else {
          v52 = 0;
        }
        v53 = v52 + 8 * v51;
        v54 = v52 + v47 - 8 * v48;
        *(_QWORD*)(v52 + v47) = v19;
        v18 = v52 + v47 + 8;
        memcpy(v54, v46, v47);
        GameData_21c9880 = v54;
        GameData_21c9888 = v18;
        GameData_21c9890 = v53;
        if (v46 != 0) {
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v46);
        }
      }
      GameData_21c9888 = v18;
    }
    UnitSkillList_84cf20((__int64)&game_g_marked_skills,
                         *(_QWORD*)(v19 + 24) + 768LL, 1);
  }
  result = game_HashString_alt1((__int64)&GameData_1a98a4e);
  if (result == 0 || ((v57 = *(_QWORD*)(GameData_21c99c0 + 96)) != 0
                          ? (v58 = *(_QWORD*)(GameData_21c99c0 + 112) == 0)
                          : (v58 = true),
                      v58)) {
    v59 = 0;
    goto LABEL_110;
  }
  v60 = v57 - 1;
  if ((v57 & (v57 - 1)) != 0) {
    v61 = result;
    if (result >= v57) {
      v61 = result % v57;
    }
  }
  else {
    v61 = v60 & result;
  }
  v62 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v61);
  if (v62 == nullptr || (v63 = (_QWORD*)*v62) == nullptr) {
  LABEL_109:
    v59 = 0;
    goto LABEL_110;
  }
  if ((v57 & v60) == 0) {
    while (1) {
      v65 = v63[1];
      if (v65 == result) {
        if (v63[2] == result) {
          goto LABEL_134;
        }
      }
      else if ((v65 & v60) != v61) {
        goto LABEL_109;
      }
      v63 = (_QWORD*)*v63;
      v59 = 0;
      if (v63 == nullptr) {
        goto LABEL_110;
      }
    }
  }
  while (1) {
    v64 = v63[1];
    if (v64 == result) {
      break;
    }
    if (v64 >= v57) {
      v64 %= v57;
    }
    if (v64 != v61) {
      goto LABEL_109;
    }
  LABEL_99:
    v63 = (_QWORD*)*v63;
    if (v63 == nullptr) {
      goto LABEL_109;
    }
  }
  if (v63[2] != result) {
    goto LABEL_99;
  }
LABEL_134:
  v59 = v63[3];
LABEL_110:
  v66 = a1[19];
  GameData_21c9988 = v59;
  if (v66 != 0) {
    v67 = (_QWORD*)a1[18];
    if (v67 != nullptr) {
      v68 = fw_memory_g_heap_manager_ptr;
      do {
        v69 = (_QWORD*)*v67;
        if (*(_QWORD*)(*(_QWORD*)v68 + 200LL) != 0) {
          v70 = 128;
        }
        else {
          v70 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v68 + v70, v67);
        v67 = v69;
      } while (v69 != nullptr);
    }
    v71 = a1[17];
    a1[18] = 0;
    if (v71 != 0) {
      v72 = v71 & 7;
      if (v71 >= 8) {
        v74 = v71 & 0xFFFFFFFFFFFFFFF8LL;
        v73 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v73) = 0;
          *(_QWORD*)(a1[16] + 8 * v73 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v73 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v73 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v73 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v73 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v73 + 48) = 0;
          v75 = a1[16] + 8 * v73;
          v73 += 8;
          *(_QWORD*)(v75 + 56) = 0;
        } while (v74 != v73);
      }
      else {
        v73 = 0;
      }
      if (v72 != 0) {
        v76 = 8 * v73;
        do {
          --v72;
          *(_QWORD*)(a1[16] + v76) = 0;
          v76 += 8;
        } while (v72 != 0);
      }
    }
    a1[19] = 0;
  }
  v77 = (unsigned int**)a1[8];
  v78 = (unsigned int**)a1[9];
  while (v77 != v78) {
    v79 = *v77;
    v80 = **v77;
    if (v80 != 0) {
      GameRoutine_67e0a0((unsigned __int64)(a1 + 1), v80, (__int64)*v77);
    }
    result = Resources_66bfc0((unsigned __int64*)v79);
    if ((_DWORD)result != 0) {
      result =
          GameRoutine_67e0a0((unsigned __int64)(a1 + 1), result, (__int64)v79);
    }
    ++v77;
  }
  return result;
}

void JobFile_676c00(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = *a1;
  v3 = (__int64*)a1[1];
  if ((__int64*)*a1 == v3) {
    goto LABEL_7;
  }
  v5 = (unsigned __int64)v3 - v2 - 8;
  v6 = (__int64*)*a1;
  if ((~(_BYTE)v5 & 0x18) == 0) {
  LABEL_6:
    if (v5 >= 0x18) {
      while (*v6 != a2 && v6[1] != a2 && v6[2] != a2 && v6[3] != a2) {
        v6 += 4;
        if (v6 == v3) {
          goto LABEL_7;
        }
      }
      return;
    }
  LABEL_7:
    v9 = a1[2];
    if ((unsigned __int64)v3 >= v9) {
      v11 = (unsigned __int64)v3 - v2;
      v12 = ((__int64)v3 - v2) >> 3;
      v13 = v12 + 1;
      if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
        GameRoutine_67afd0_alt1();
      }
      v14 = v9 - v2;
      v15 = fw_memory_g_heap_manager_ptr;
      if (v14 >> 2 > v13) {
        v13 = v14 >> 2;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v17 = a2;
        v18 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
        a2 = v17;
      }
      else {
        v18 = 0;
      }
      v19 = v18 + 8 * v16;
      v20 = v18 + v11 - 8 * v12;
      *(_QWORD*)(v18 + v11) = a2;
      v10 = v18 + v11 + 8;
      memcpy_alt1(v20, v2, v11);
      *a1 = v20;
      a1[1] = v10;
      a1[2] = v19;
      if (v2 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v21, v2);
      }
    }
    else {
      *v3 = a2;
      v10 = (__int64)(v3 + 1);
    }
    a1[1] = v10;
    return;
  }
  v7 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
  v6 = (__int64*)*a1;
  while (1) {
    v8 = *v6++;
    if (v8 == a2) {
      break;
    }
    if (--v7 == 0) {
      goto LABEL_6;
    }
  }
}

void JobFile_Unknown5()
{
  GameData_21c9870 = GameData_21c9868;
  GameData_21c9888 = GameData_21c9880;
  GameData_21c9988 = 0;
  GameData_21c9940 = 0;
  GameData_21c9978 = 0;
  GameData_21c9980 = 0;
  GameData_21c9930 = game_g_marked_skills;
  GameData_21c9950 = GameData_21c9948;
  GameData_21c98a0 = GameData_21c9898[0];
  GameData_21c98b8 = GameData_21c98b0;
  GameData_21c98d0 = GameData_21c98c8;
  GameData_21c98e8 = GameData_21c98e0;
  GameData_21c9900 = GameData_21c98f8;
  GameData_21c9918 = GameData_21c9910;
}

void JobFile_Unknown6()
{
  GameData_21c9870 = GameData_21c9868;
  GameData_21c9888 = GameData_21c9880;
  GameData_21c9988 = 0;
  GameData_21c9940 = 0;
  GameData_21c9978 = 0;
  GameData_21c9980 = 0;
  GameData_21c9930 = game_g_marked_skills;
  GameData_21c9950 = GameData_21c9948;
  GameData_21c98a0 = GameData_21c9898[0];
  GameData_21c98b8 = GameData_21c98b0;
  GameData_21c98d0 = GameData_21c98c8;
  GameData_21c98e8 = GameData_21c98e0;
  GameData_21c9900 = GameData_21c98f8;
  GameData_21c9918 = GameData_21c9910;
}

__int64 JobFile_676ef0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[3];
  _QWORD v13[3];

  v2 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v4 = v2;
  v5 = v4;
  v13[0] = v4;
  v13[1] = v4 + 1;
  v13[2] = v4 + 1;
  *(struct PseudoSret*)(v12) = GameRoutine_677000(v13);
  v6 = v12[0];
  v7 = v12[1];
  if (v12[1] == v12[0]) {
    if (v12[1] == 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v5);
      return 0;
    }
  }
  else {
    v1 = *(_QWORD*)v12[0];
  }
  v8 = *(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0 ? 128LL : 56LL;
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v12[0]);
  v9 = *(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0 ? 128LL : 56LL;
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v5);
  if (v7 == v6) {
    return 0;
  }
  return v1;
}

__attribute__((swiftcall)) void

game_JobFile_GetFromClassChangeCondition(PSEUDO_X8 x8_, __int64** result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
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
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64* v25;
  _QWORD v26[4];
  __int64** v27;
  char v28;
  __int64** v29;
  __int64 v30;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *result;
  v2 = result[1];
  v4 = (char*)v2 - (char*)*result;
  v25 = v2;
  if (v2 == *result) {
    v21 = 0;
    v24 = 0;
    goto LABEL_37;
  }
  if (v4 < 0) {
    ((void(__attribute__((noreturn))*)(void))GameRoutine_67afd0_alt2)();
  }
  v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v4, 16, 0);
  v23 = (_QWORD*)v21;
  v24 = v21 + v4;
  *a2 = v21;
  a2[1] = v21;
  a2[2] = v21 + v4;
  while (2) {
    v30 = *v3;
    result = (__int64**)game_HashString(v30);
    v29 = result;
    v28 = 0;
    v6 = GameData_21c9880;
    v7 = GameData_21c9888;
    while (v6 != v7) {
      v9 = *(_QWORD*)v6;
      v10 = *(_QWORD*)(*(_QWORD*)v6 + 24LL);
      if (v10 == 0) {
        goto LABEL_11;
      }
      v11 = *(_QWORD*)(v10 + 1032);
      v12 = *(_QWORD*)(v10 + 1040);
      result = (__int64**)v26;
      v26[0] = GameData_1f907e0;
      v26[1] = &v29;
      v26[2] = &v28;
      v27 = (__int64**)v26;
      if (v11 == v12) {
        goto LABEL_8;
      }
      do {
        if (v27 == nullptr) {
          GameRoutine_60a310(0);
        }
        ((void (*)(__int64**, __int64))(*v27)[6])(v27, v11);
        v11 += 16;
      } while (v11 != v12);
      result = v27;
      if (v27 == v26) {
      LABEL_8:
        v8 = 4;
      LABEL_9:
        result = (__int64**)((__int64 (*)(void*))(*result)[v8])(result);
        goto LABEL_10;
      }
      if (v27 != nullptr) {
        v8 = 5;
        goto LABEL_9;
      }
    LABEL_10:
      if (v28 == 1) {
        if ((unsigned __int64)v23 < v24) {
          *v23 = v9;
          v5 = (__int64)(v23 + 1);
        }
        else {
          v13 = (char*)v23 - v21;
          v14 = ((__int64)v23 - v21) >> 3;
          v15 = v14 + 1;
          if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
            a2[2] = v24;
            *a2 = v21;
            GameRoutine_67afd0_alt2(result);
          }
          if ((__int64)(v24 - v21) >> 2 > v15) {
            v15 = (__int64)(v24 - v21) >> 2;
          }
          if (v24 - v21 >= 0x7FFFFFFFFFFFFFF8LL) {
            v16 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v16 = v15;
          }
          if (v16 != 0) {
            if (v16 >> 61 != 0) {
              a2[2] = v24;
              *a2 = v21;
              GameRoutine_60a210(result);
            }
            v17 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
          }
          else {
            v17 = 0;
          }
          v18 = v17 + 8 * v16;
          v19 = (__int64)&v13[v17 + -8 * v14];
          v24 = v18;
          *(_QWORD*)&v13[v17] = v9;
          v5 = (__int64)&v13[v17 + 8];
          result = (__int64**)memcpy(v19, v21, v13);
          a2[1] = v5;
          if (v21 != 0) {
            v20 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v20 = 56;
            }
            result = (__int64**)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v21);
          }
          v21 = v19;
        }
        v23 = (_QWORD*)v5;
        a2[1] = v5;
        break;
      }
    LABEL_11:
      v6 += 8;
    }
    if (++v3 != v25) {
      continue;
    }
    break;
  }
LABEL_37:
  a2[2] = v24;
  *a2 = v21;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void JobFile_6772e0(PSEUDO_X8 x8_,
                                               unsigned __int16* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v2;
  __int64* v4;
  unsigned __int64 v5;
  char* v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  signed __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64** result;
  __int64 v19;
  struct {
    __int64* v21;
    char* v22;
    unsigned __int64 v23;
  } v21_;

  v2 = *a1;
  v21_.v22 = nullptr;
  v21_.v23 = 0;
  v21_.v21 = nullptr;
  if (v2 == 0) {
    X8CALL_X0(__int64**,
              game_JobFile_GetFromClassChangeCondition((void*)(a2), &v21_.v21));
    return;
  }
  v4 = nullptr;
  v5 = 0;
  v6 = nullptr;
  v7 = 0;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v9 = *((_QWORD*)a1 + 1);
    if ((unsigned __int64)v6 < v5) {
      *(_QWORD*)v6 = *(_QWORD*)(v9 + 8 * v7);
      v6 += 8;
    }
    else {
      v10 = v6 - (char*)v4;
      v11 = (v6 - (char*)v4) >> 3;
      v12 = v11 + 1;
      if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
        GameRoutine_667c50();
      }
      if ((__int64)(v5 - (_QWORD)v4) >> 2 > v12) {
        v12 = (__int64)(v5 - (_QWORD)v4) >> 2;
      }
      if (v5 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v12;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v14 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = *(_QWORD*)(v9 + 8 * v7);
      v5 = v14 + 8 * v13;
      v16 = v14 + v10 - 8 * v11;
      *(_QWORD*)(v14 + v10) = v15;
      v6 = (char*)(v14 + v10 + 8);
      memcpy(v16, v4, v10);
      if (v4 != nullptr) {
        v17 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v17, v4);
      }
      v4 = (__int64*)v16;
    }
    ++v7;
  } while (v7 < *a1);
  v21_.v22 = v6;
  v21_.v23 = v5;
  v21_.v21 = v4;
  result = X8CALL_X0(__int64**, game_JobFile_GetFromClassChangeCondition(
                                    (void*)(a2), &v21_.v21));
  if (v4 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v19 = 56;
    }
    {
      (__int64**)nn_mem_StandardAllocator_Free(*v8 + v19, v4);
      return;
    }
  }
  {
    result;
    return;
  }
}

unsigned __int64 JobFile_6774a0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  result = game_HashString(a2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c99c0 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c99c0 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == result) {
                if (v9[2] == result) {
                  goto LABEL_27;
                }
              }
              else if ((v12 & v6) != v7) {
                goto LABEL_25;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_27:
                v11 = v9[3];
                goto LABEL_26;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v11 = 0;

LABEL_26:
  *a1 = v11;
  return result;
}

__int64 game_JobFile_GetFromClassChangeCondition_lambda0_Invoke(__int64 result,
                                                                _QWORD* a2)
{
  if (**(_QWORD**)(result + 8) == *a2) {
    **(_BYTE**)(result + 16) = 1;
  }
  return result;
}

#pragma GCC visibility pop
