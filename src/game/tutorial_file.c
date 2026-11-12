#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
_QWORD* TutorialFile_97ffe0(__int64 a1);
_QWORD* TutorialFile_980100(__int64 a1);
__int64 Format_7a7fc0(const char**);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6ed1a0(void);
__int64 GameRoutine_6fbd80(_QWORD, _QWORD);
__int64 GameRoutine_7a7e90(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ab0047;
extern _UNKNOWN GameData_1ada40b;
extern _UNKNOWN GameData_1af4ee0;
extern _UNKNOWN GameData_21f4d10;
extern _UNKNOWN GameData_21f4d30;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21ca0a8;
extern __int64 GameData_21f4cc8[];
extern __int64 GameData_21f4cd0;
extern __int64 GameData_21f4ce0;
extern __int64 GameData_21f4ce8;
extern __int64 GameData_21f4cf8;
extern __int64 GameData_21f4d00;
extern __int64 GameData_21f4d08;
extern __int64 GameData_21f4d18;
extern __int64 GameData_21f4d20;
extern __int64 GameData_21f4d28;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_9829b0();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void TutorialFile_Unknown4();
void TutorialFile_Unknown5();
void TutorialFile_Unknown6();
__attribute__((swiftcall)) void TutorialFile_97fb60(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2);
__int64* TutorialFile_980b00();
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_6ed030(void);
__int64 HistoryLogInfo_6fb810(void);
__int64 Registration_a4db40(_QWORD, _QWORD);
__int64 Registration_a51f10(_QWORD, _QWORD, _QWORD);
__int64 Registration_a51f40(_QWORD);
extern __int64 GameData_21c99c8;
extern __int64 msg_MessageManager_instance_;
__attribute__((swiftcall)) void TutorialFile_97f5e0(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2);
__int64 GameRoutine_715440();
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 strtol(const char*, __int64, int);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212cdd8[12];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d750;
extern __int64 GameData_212dbb8[9];
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern char GameData_1a9f09e;
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TutorialFile_980240(_QWORD* a1, char a2, int a3);

void TutorialFile_Unknown4()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  GameData_21f4cd0 = GameData_21f4cc8[0];
  GameData_21f4ce8 = GameData_21f4ce0;
  v0 = *(__int64**)(GameData_21ca0a8 + 64);
  for (i = *(__int64**)(GameData_21ca0a8 + 72); v0 != i; v6[1] = v2) {
    v3 = *v0;
    v4 = **(__int64***)(*v0 + 40);
    if ((int)((*(_QWORD*)(*(_QWORD*)(*v0 + 40) + 8LL) - (_QWORD)v4) >> 3) < 1) {
      LODWORD(v5) = 0;
    }
    else {
      v5 = *v4;
      if (v5 != 0) {
        LODWORD(v5) = *(unsigned __int8*)(v5 + 96);
      }
    }
    v6 = &GameData_21f4cc8[3 * (unsigned int)v5];
    v8 = (_QWORD*)v6[1];
    v7 = v6[2];
    if ((unsigned __int64)v8 < v7) {
      *v8 = v3;
      v2 = (__int64)(v8 + 1);
    }
    else {
      v9 = *v6;
      v10 = (__int64)v8 - *v6;
      v11 = (v10 >> 3) + 1;
      if (v11 >> 61 != 0) {
        GameRoutine_9829b0();
      }
      v12 = v7 - v9;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v11;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210();
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = v14 + v10 - 8 * (v10 >> 3);
      *(_QWORD*)(v14 + v10) = v3;
      v2 = v14 + v10 + 8;
      memcpy(v16, v9, v10);
      *v6 = v16;
      v6[1] = v2;
      v6[2] = v15;
      if (v9 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v17);
      }
    }
    ++v0;
  }
}

void TutorialFile_Unknown5()
{
  GameData_21f4cd0 = GameData_21f4cc8[0];
  GameData_21f4ce8 = GameData_21f4ce0;
}

void TutorialFile_Unknown6()
{
  GameData_21f4cd0 = GameData_21f4cc8[0];
  GameData_21f4ce8 = GameData_21f4ce0;
}

__attribute__((swiftcall)) void TutorialFile_97f5e0(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 result;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  const char* v52;
  __int64 v53;
  __int64 v54;
  _QWORD v55[4];
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;

  v4 = *(unsigned __int8*)(a1 + 32);
  if (v4 <= 1) {
    if (*(_BYTE*)(a1 + 32) != 0) {
      v11 = game_HashString_alt1(*(_QWORD*)(a1 + 40), a2);
      if (v11 == 0) {
        goto LABEL_65;
      }
      v12 = *(_QWORD*)(GameData_21c99b8 + 96);
      if (v12 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
        goto LABEL_65;
      }
      v14 = v12 - 1;
      if ((v12 & (v12 - 1)) != 0) {
        v15 = v11;
        if (v11 >= v12) {
          v15 = v11 % v12;
        }
      }
      else {
        v15 = v14 & v11;
      }
      v25 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v15);
      if (v25 == nullptr) {
        goto LABEL_65;
      }
      v26 = (_QWORD*)*v25;
      if (v26 == nullptr) {
        goto LABEL_65;
      }
      if ((v12 & v14) == 0) {
        while (1) {
          v28 = v26[1];
          if (v28 == v11) {
            if (v26[2] == v11) {
              goto LABEL_61;
            }
          }
          else if ((v28 & v14) != v15) {
            goto LABEL_65;
          }
          v26 = (_QWORD*)*v26;
          if (v26 == nullptr) {
            goto LABEL_65;
          }
        }
      }
      while (1) {
        v27 = v26[1];
        if (v27 == v11) {
          if (v26[2] == v11) {
          LABEL_61:
            if (v26[3] != 0) {
              v34 = GameRoutine_6ed030();
              if (v34 != 0) {
                v20 = (char*)v34;
              }
              else {
                v20 = *msg_MessageManager_empty_text__ptr;
              }
            LABEL_66:
              v19 = (__int64)v20;
            LABEL_67:
              result = strlen(v19);
              if (result < 0xFFFFFFFFFFFFFFF7LL) {
                v35 = result;
                if (result >= 0x17) {
                  if ((result | 7) == 0x17) {
                    v37 = 26;
                  }
                  else {
                    v37 = (result | 7) + 1;
                  }
                  v38 = fw_memory_HeapManager_Allocate_alt1(
                      fw_memory_g_heap_manager, v37, 16, 0);
                  a3[1] = v35;
                  a3[2] = v38;
                  *a3 = v37 | 1;
                  v36 = (char*)v38;
                }
                else {
                  *(_BYTE*)a3 = 2 * result;
                  v36 = (char*)a3 + 1;
                  if (result == 0) {
                    goto LABEL_76;
                  }
                }
                result = memmove(v36, v20, v35);
              LABEL_76:
                v36[v35] = 0;
                {
                  result;
                  return;
                }
              }
            LABEL_114:
              String_60a1d0(result);
            }
          LABEL_65:
            v20 = msg_MessageManager_empty_text_;
            goto LABEL_66;
          }
        }
        else {
          if (v27 >= v12) {
            v27 %= v12;
          }
          if (v27 != v15) {
            goto LABEL_65;
          }
        }
        v26 = (_QWORD*)*v26;
        if (v26 == nullptr) {
          goto LABEL_65;
        }
      }
    }
  LABEL_21:
    v16 = msg_MessageManager_instance__ptr[0];
    Registration_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
    v17 = *v16;
    v18 = *(_QWORD*)(a1 + 40);
    v58 = -1;
    v59 = -1;
    v60 = -1;
    v61 = -1;
    v62 = -1;
    v63 = -1;
    v64 = -1;
    v65 = -1;
    v66 = -1;
    v67 = -1;
    v68 = -1;
    v69 = -1;
    v55[0] = GameData_212e348 + 2;
    v55[1] = 0xFFFF0001FFFF0000LL;
    v55[2] = 0xFFFF0004FFFF0002LL;
    v55[3] = 0xFFFF0006FFFF0005LL;
    v70 = 8;
    v56 = -65529;
    v57 = -65528;
    v19 = GameRoutine_a4dbe0(v17, v18, 0, v55);
    v20 = (char*)v19;
    goto LABEL_67;
  }
  if (v4 - 2 >= 2) {
    if (v4 != 4) {
      goto LABEL_65;
    }
    goto LABEL_21;
  }
  v6 = game_HashString_alt1(*(_QWORD*)(a1 + 40), a2);
  if (v6 == 0) {
    goto LABEL_65;
  }
  v7 = *(_QWORD*)(GameData_21c99b0 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0) {
    goto LABEL_65;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v6;
    if (v6 >= v7) {
      v10 = v6 % v7;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v21 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v10);
  if (v21 == nullptr) {
    goto LABEL_65;
  }
  v22 = (_QWORD*)*v21;
  if (v22 == nullptr) {
    goto LABEL_65;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v24 = v22[1];
      if (v24 == v6) {
        if (v22[2] == v6) {
          goto LABEL_56;
        }
      }
      else if ((v24 & v9) != v10) {
        goto LABEL_65;
      }
      v22 = (_QWORD*)*v22;
      if (v22 == nullptr) {
        goto LABEL_65;
      }
    }
  }
  while (1) {
    v23 = v22[1];
    if (v23 == v6) {
      break;
    }
    if (v23 >= v7) {
      v23 %= v7;
    }
    if (v23 != v10) {
      goto LABEL_65;
    }
  LABEL_28:
    v22 = (_QWORD*)*v22;
    if (v22 == nullptr) {
      goto LABEL_65;
    }
  }
  if (v22[2] != v6) {
    goto LABEL_28;
  }
LABEL_56:
  if (v22[3] == 0) {
    goto LABEL_65;
  }
  v29 = HistoryLogInfo_6fb810();
  result = strlen(v29);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_114;
  }
  v32 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (result | 7) + 1;
    }
    v33 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v39, 16,
                                              0);
    a3[1] = v32;
    a3[2] = v33;
    *a3 = v39 | 1;
    goto LABEL_82;
  }
  *(_BYTE*)a3 = 2 * result;
  v33 = (__int64)a3 + 1;
  if (result != 0) {
  LABEL_82:
    memmove(v33, v29, v32);
  }
  *(_BYTE*)(v33 + v32) = 0;
  result = game_HashString_alt1(*(_QWORD*)(a1 + 48), v31);
  if (result == 0) {
    result;
    return;
  }
  v40 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v40 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    result;
    return;
  }
  v42 = v40 - 1;
  if ((v40 & (v40 - 1)) != 0) {
    v43 = result;
    if (result >= v40) {
      v43 = result % v40;
    }
  }
  else {
    v43 = v42 & result;
  }
  v44 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v43);
  if (v44 == nullptr) {
    result;
    return;
  }
  v45 = (_QWORD*)*v44;
  if (v45 == nullptr) {
    result;
    return;
  }
  if ((v40 & v42) == 0) {
    while (1) {
      v47 = v45[1];
      if (v47 == result) {
        if (v45[2] == result) {
          goto LABEL_108;
        }
      }
      else if ((v47 & v42) != v43) {
        {
          result;
          return;
        }
      }
      v45 = (_QWORD*)*v45;
      if (v45 == nullptr) {
        result;
        return;
      }
    }
  }
  while (2) {
    v46 = v45[1];
    if (v46 != result) {
      if (v46 >= v40) {
        v46 %= v40;
      }
      if (v46 != v43) {
        result;
        return;
      }
    }
    else if (v45[2] == result) {
    LABEL_108:
      result = v45[3];
      if (result != 0) {
        v48 = msg_MessageManager_instance_;
        v49 = GameRoutine_67ed20(result);
        result = Registration_a51f10(v48 + 14704, 0, v49);
        v50 = *(unsigned __int8*)(a1 + 32);
        if (v50 == 3) {
          v51 = msg_MessageManager_instance_;
          v52 = "MID_Tips_UniqueSymbol";
        LABEL_113:
          v53 = Registration_a4db40(v51, v52);
          v54 = strlen(v53);
          {
            GameRoutine_1a09ce0(a3, v53, v54);
            return;
          }
        }
        else if (v50 == 2) {
          v51 = msg_MessageManager_instance_;
          v52 = "MID_Tips_UniqueSkills";
          goto LABEL_113;
        }
      }
      {
        result;
        return;
      }
    }
    v45 = (_QWORD*)*v45;
    if (v45 == nullptr) {
      result;
      return;
    }
    continue;
  }
}

__attribute__((swiftcall)) void TutorialFile_97fb60(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 result;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;

  v4 = *(unsigned __int8*)(a1 + 32);
  if (v4 <= 1) {
    if (*(_BYTE*)(a1 + 32) != 0) {
      v11 = game_HashString_alt1(*(_QWORD*)(a1 + 40), a2);
      if (v11 != 0) {
        v12 = *(_QWORD*)(GameData_21c99b8 + 96);
        if (v12 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
          v14 = v12 - 1;
          if ((v12 & (v12 - 1)) != 0) {
            v15 = v11;
            if (v11 >= v12) {
              v15 = v11 % v12;
            }
          }
          else {
            v15 = v14 & v11;
          }
          v35 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v15);
          if (v35 != nullptr) {
            v36 = (_QWORD*)*v35;
            if (v36 != nullptr) {
              if ((v12 & v14) == 0) {
                while (1) {
                  v38 = v36[1];
                  if (v38 == v11) {
                    if (v36[2] == v11) {
                      goto LABEL_73;
                    }
                  }
                  else if ((v38 & v14) != v15) {
                    goto LABEL_78;
                  }
                  v36 = (_QWORD*)*v36;
                  if (v36 == nullptr) {
                    goto LABEL_78;
                  }
                }
              }
              while (1) {
                v37 = v36[1];
                if (v37 == v11) {
                  if (v36[2] == v11) {
                  LABEL_73:
                    if (v36[3] != 0) {
                      v40 = GameRoutine_6ed1a0();
                      goto LABEL_75;
                    }
                    goto LABEL_78;
                  }
                }
                else {
                  if (v37 >= v12) {
                    v37 %= v12;
                  }
                  if (v37 != v15) {
                    goto LABEL_78;
                  }
                }
                v36 = (_QWORD*)*v36;
                if (v36 == nullptr) {
                  goto LABEL_78;
                }
              }
            }
          }
        }
      }
      goto LABEL_78;
    }
  LABEL_21:
    v49 = 0;
    v50 = 0;
    v48 = nullptr;
    v16 = msg_MessageManager_instance__ptr[0];
    if (*(_WORD*)(a1 + 56) != 0) {
      v17 = 8LL * *(unsigned __int16*)(a1 + 56);
      v18 = 0;
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + v18);
        v47 = 0;
        v46 = v19;
        GameRoutine_7a7e90(&v48, &v46);
        v18 += 8;
      } while (v17 != v18);
      v20 = v48;
      if ((__int64*)v49 != v48) {
        v21 = 1;
        v22 = 0;
        do {
          v23 = Format_7a7fc0((const char**)&v20[v21 - 1]);
          v24 = *v16;
          if (v23 != 0) {
            v25 = v22;
            if (v22 > 7) {
              v25 = 0;
            }
            GameRoutine_60a020(v24 + 24LL * v25 + 14704, v23);
          }
          else {
            Manager_a51e10(v24 + 14704, (unsigned int)v22, LODWORD(v48[v21]),
                           0);
          }
          v20 = v48;
          ++v22;
          v21 += 2;
        } while (v22 < (__int64)(v49 - (_QWORD)v48) >> 4);
      }
      if (v20 != nullptr) {
        v49 = (unsigned __int64)v20;
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v20);
      }
    }
    v27 = *v16;
    v28 = *(_QWORD*)(a1 + 48);
    v54 = -1;
    v55 = -1;
    v56 = -1;
    v57 = -1;
    v58 = -1;
    v59 = -1;
    v60 = -1;
    v61 = -1;
    v62 = -1;
    v63 = -1;
    v64 = -1;
    v65 = -1;
    v48 = GameData_212e348 + 2;
    v49 = 0xFFFF0001FFFF0000LL;
    v50 = 0xFFFF0004FFFF0002LL;
    v51 = 0xFFFF0006FFFF0005LL;
    v66 = 8;
    v52 = -65529;
    v53 = -65528;
    v29 = GameRoutine_a4dbe0(v27, v28, 0, &v48);
    v30 = (char*)v29;
    goto LABEL_80;
  }
  if (v4 - 2 >= 2) {
    if (v4 != 4) {
      goto LABEL_78;
    }
    goto LABEL_21;
  }
  v6 = game_HashString_alt1(*(_QWORD*)(a1 + 40), a2);
  if (v6 == 0) {
    goto LABEL_78;
  }
  v7 = *(_QWORD*)(GameData_21c99b0 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0) {
    goto LABEL_78;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v6;
    if (v6 >= v7) {
      v10 = v6 % v7;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v10);
  if (v31 == nullptr) {
    goto LABEL_78;
  }
  v32 = (_QWORD*)*v31;
  if (v32 == nullptr) {
    goto LABEL_78;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v34 = v32[1];
      if (v34 == v6) {
        if (v32[2] == v6) {
          goto LABEL_71;
        }
      }
      else if ((v34 & v9) != v10) {
        goto LABEL_78;
      }
      v32 = (_QWORD*)*v32;
      if (v32 == nullptr) {
        goto LABEL_78;
      }
    }
  }
  while (1) {
    v33 = v32[1];
    if (v33 == v6) {
      break;
    }
    if (v33 >= v7) {
      v33 %= v7;
    }
    if (v33 != v10) {
      goto LABEL_78;
    }
  LABEL_43:
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_78;
    }
  }
  if (v32[2] != v6) {
    goto LABEL_43;
  }
LABEL_71:
  v39 = v32[3];
  if (v39 == 0) {
  LABEL_78:
    v30 = msg_MessageManager_empty_text_;
    goto LABEL_79;
  }
  v40 = GameRoutine_6fbd80(v39, *(unsigned __int8*)(v39 + 304));
LABEL_75:
  if (v40 != 0) {
    v30 = (char*)v40;
  }
  else {
    v30 = *msg_MessageManager_empty_text__ptr;
  }
LABEL_79:
  v29 = (__int64)v30;
LABEL_80:
  result = strlen(v29);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v42 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v44 = 26;
    }
    else {
      v44 = (result | 7) + 1;
    }
    v45 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v44, 16,
                                              0);
    a3[1] = v42;
    a3[2] = v45;
    *a3 = v44 | 1;
    v43 = (char*)v45;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v43 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_89;
    }
  }
  result = memmove(v43, v30, v42);
LABEL_89:
  v43[v42] = 0;
  {
    result;
    return;
  }
}

_QWORD* TutorialFile_97ffe0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  if (*(_BYTE*)(a1 + 32) != 1) {
    return nullptr;
  }
  v1 = game_HashString(*(_QWORD*)(a1 + 40));
  if (v1 == 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    return nullptr;
  }
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = v1;
    if (v1 >= v2) {
      v7 = v1 % v2;
    }
  }
  else {
    v7 = v6 & v1;
  }
  v4 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v7);
  if (v4 != nullptr) {
    v8 = (_QWORD*)*v4;
    if (*v4 != 0) {
      if ((v2 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v1) {
            if (v8[2] == v1) {
              return (_QWORD*)v8[3];
            }
          }
          else if ((v10 & v6) != v7) {
            return nullptr;
          }
          v8 = (_QWORD*)*v8;
          v4 = nullptr;
          if (v8 == nullptr) {
            return v4;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v1) {
          if (v8[2] == v1) {
            return (_QWORD*)v8[3];
          }
        }
        else {
          if (v9 >= v2) {
            v9 %= v2;
          }
          if (v9 != v7) {
            return nullptr;
          }
        }
        v8 = (_QWORD*)*v8;
        v4 = nullptr;
        if (v8 == nullptr) {
          return v4;
        }
      }
    }
    return nullptr;
  }
  return v4;
}

_QWORD* TutorialFile_980100(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  if ((*(_BYTE*)(a1 + 32) & 0xFE) != 2) {
    return nullptr;
  }
  v1 = game_HashString(*(_QWORD*)(a1 + 40));
  if (v1 == 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(GameData_21c99b0 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0) {
    return nullptr;
  }
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = v1;
    if (v1 >= v2) {
      v7 = v1 % v2;
    }
  }
  else {
    v7 = v6 & v1;
  }
  v4 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v7);
  if (v4 != nullptr) {
    v8 = (_QWORD*)*v4;
    if (*v4 != 0) {
      if ((v2 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v1) {
            if (v8[2] == v1) {
              return (_QWORD*)v8[3];
            }
          }
          else if ((v10 & v6) != v7) {
            return nullptr;
          }
          v8 = (_QWORD*)*v8;
          v4 = nullptr;
          if (v8 == nullptr) {
            return v4;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v1) {
          if (v8[2] == v1) {
            return (_QWORD*)v8[3];
          }
        }
        else {
          if (v9 >= v2) {
            v9 %= v2;
          }
          if (v9 != v7) {
            return nullptr;
          }
        }
        v8 = (_QWORD*)*v8;
        v4 = nullptr;
        if (v8 == nullptr) {
          return v4;
        }
      }
    }
    return nullptr;
  }
  return v4;
}

void TutorialFile_980240(_QWORD* a1, char a2, int a3)
{
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 i;
  __int64 v24;
  unsigned int v25;
  const char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  int v30;
  const char* v31;
  int v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  int v38;
  __int64 v39;
  unsigned __int8* v40;
  int v41;
  unsigned __int64 v42;
  char* v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  unsigned __int64 v48;
  const char* v49;
  int v50;
  int v51;
  char v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  unsigned __int64 v59;
  _QWORD* v60;
  unsigned __int64 v61;
  unsigned __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  bool v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned int v76;
  int v77;
  __int64* v78;
  int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  unsigned int v83;
  unsigned int v84;
  int v85;
  unsigned int v86;
  __int64 v87;
  int v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  __int64 j;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned int v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v101;
  _QWORD* v102;
  _QWORD* v103;
  struct {
    __int64 v104;
    unsigned __int64 v105;
    __int64 v106;
  } v104_;
  struct {
    __int64 v107;
    unsigned __int64 v108;
    char* v109;
  } v107_;

  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (a1[2] != 0) {
    v6 = (_QWORD*)a1[1];
    v7 = *(_QWORD**)(*a1 + 8LL);
    *(_QWORD*)(*v6 + 8LL) = v7;
    *v7 = *v6;
    a1[2] = 0;
    if (v6 != a1) {
      do {
        v8 = (_QWORD*)v6[1];
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v9, (__int64)v6);
        v6 = v8;
      } while (v8 != a1);
    }
  }
  v102 = a1;
  v10 = *(_QWORD**)(*GameData_212cdd8[0] + 64);
  v103 = *(_QWORD**)(*GameData_212cdd8[0] + 72);
  if (v10 != v103) {
    v101 = a3;
    do {
      v12 = (_QWORD*)*v10;
      v13 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 32, 16, 0);
      v14 = v12[13];
      v15 = v13;
      v13[2] = v12[12];
      v13[3] = v14;
      v16 = v12[11];
      *v13 = v12[10];
      v13[1] = v16;
      v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 64, 16, 0);
      v18 = v12[15];
      v19 = (__int64)v17;
      v17[4] = v12[14];
      v17[5] = v18;
      v20 = v15[3];
      v17[2] = v15[2];
      v17[3] = v20;
      v21 = v15[1];
      *v17 = *v15;
      v17[1] = v21;
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v22 = 128;
      }
      else {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v22, (__int64)v15);
      for (i = 0; i != 48; i += 16) {
        v24 = v19 + i;
        v25 = *(unsigned __int8*)(v19 + i);
        if (v25 > 3) {
          if (v25 == 4) {
            if (*(_QWORD*)GameData_212d750 == 0) {
              goto LABEL_9;
            }
          }
          else if (v25 == 5) {
            if (game_hub_ProcHubSeqView_instance_ == 0 ||
                *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 9LL) != 1 ||
                *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 136LL) != 0) {
              goto LABEL_9;
            }
          }
          else if (v25 == 6 &&
                   (game_hub_ProcHubSeqView_instance_ == 0 ||
                    *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 9LL) != 1 ||
                    *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 136LL) != 1)) {
            goto LABEL_9;
          }
          continue;
        }
        if (v25 != 1) {
          if (v25 != 2) {
            if (v25 == 3 && game_script_map_effect_g_sequence == 0) {
              goto LABEL_9;
            }
            continue;
          }
          v30 = GameRoutine_715440();
          v31 = *(const char**)(v24 + 8);
          v32 = v30;
          v33 = strlen_alt1(v31);
          if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
          LABEL_166:
            String_60a1d0_alt1();
          }
          v34 = v33;
          if (v33 >= 0x17) {
            v45 = *v5;
            if ((v34 | 7) == 0x17) {
              v46 = 26;
            }
            else {
              v46 = (v34 | 7) + 1;
            }
            v35 = (char*)fw_memory_HeapManager_Allocate(v45, v46, 16, 0);
            v107_.v108 = v34;
            v107_.v109 = v35;
            v107_.v107 = v46 | 1;
          }
          else {
            v35 = (char*)&v107_.v107 + 1;
            LOBYTE(v107_.v107) = 2 * v33;
            if (v33 == 0) {
            LABEL_72:
              v35[v34] = 0;
              v47 = v107_.v107 & 1;
              v48 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
              if (v47 != 0) {
                v48 = v107_.v108;
              }
              if (v48 != 0) {
                v104_.v104 = 0;
                if (v47 != 0) {
                  v49 = v107_.v109;
                }
                else {
                  v49 = (char*)&v107_.v107 + 1;
                }
                v50 = strtol(v49, (__int64)&v104_.v104, 0);
                if (*(_BYTE*)v104_.v104 != 0) {
                  v51 = -1;
                }
                else {
                  v51 = v50;
                }
                v47 = v107_.v107 & 1;
              }
              else {
                v51 = -1;
              }
              v5 = (__int64*)fw_memory_g_heap_manager_ptr;
              if (v47 != 0 && v107_.v109 != nullptr) {
                v53 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v53 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                    (__int64)v107_.v109);
              }
              if (v51 == -1 || v32 < v51) {
                goto LABEL_9;
              }
              continue;
            }
          }
          memmove_alt1((__int64)v35, (__int64)v31, v34);
          goto LABEL_72;
        }
        if (*(_QWORD*)(v24 + 8) != 0) {
          v26 = *(const char**)(v24 + 8);
        }
        else {
          v26 = &GameData_1a9f09e;
        }
        v27 = strlen_alt1(v26);
        if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_166;
        }
        v28 = v27;
        if (v27 >= 0x17) {
          if ((v27 | 7) == 0x17) {
            v36 = 26;
          }
          else {
            v36 = (v27 | 7) + 1;
          }
          v29 = (char*)fw_memory_HeapManager_Allocate(*v5, v36, 16, 0);
          v107_.v108 = v28;
          v107_.v109 = v29;
          v107_.v107 = v36 | 1;
        LABEL_52:
          memmove_alt1((__int64)v29, (__int64)v26, v28);
          goto LABEL_53;
        }
        v29 = (char*)&v107_.v107 + 1;
        LOBYTE(v107_.v107) = 2 * v27;
        if (v27 != 0) {
          goto LABEL_52;
        }
      LABEL_53:
        v29[v28] = 0;
        v37 = v107_.v108;
        v38 = v107_.v107 & 1;
        if (v38 == 0) {
          v37 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
        }
        if (v37 == 0) {
          v52 = 0;
          if (v38 != 0) {
            goto LABEL_136;
          }
          goto LABEL_140;
        }
        v39 = (__int64)v107_.v109;
        if (v38 != 0) {
          v40 = (unsigned __int8*)v107_.v109;
        }
        else {
          v40 = (unsigned __int8*)&v107_.v107 + 1;
        }
        v41 = *v40;
        if (v41 != 33) {
          goto LABEL_104;
        }
        v42 = v37 - 1;
        if (v38 != 0) {
          v43 = v107_.v109 + 1;
        }
        else {
          v43 = (char*)&v107_.v107 + 2;
        }
        if (v42 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_166;
        }
        if (v37 >= 0x18) {
          if ((v42 | 7) == 0x17) {
            v54 = 26;
          }
          else {
            v54 = (v42 | 7) + 1;
          }
          v44 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v54, 16, 0);
          v104_.v105 = v42;
          v104_.v106 = (__int64)v44;
          v104_.v104 = v54 | 1;
        LABEL_97:
          memmove_alt1((__int64)v44, (__int64)v43, v42);
          goto LABEL_98;
        }
        v44 = (char*)&v104_.v104 + 1;
        LOBYTE(v104_.v104) = 2 * v42;
        if (v37 != 1) {
          goto LABEL_97;
        }
      LABEL_98:
        v55 = v107_.v107;
        v44[v42] = 0;
        if ((v55 & 1) != 0 && v107_.v109 != nullptr) {
          v56 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v56,
              (__int64)v107_.v109);
        }
        v107_.v107 = v104_.v104;
        v107_.v108 = v104_.v105;
        v39 = v104_.v106;
        v38 = v104_.v104 & 1;
        v107_.v109 = (char*)v104_.v106;
      LABEL_104:
        v57 = game_GameModeData_instance_;
        if (v38 != 0) {
          v58 = (char*)v39;
        }
        else {
          v58 = (char*)&v107_.v107 + 1;
        }
        v59 = game_HashString_alt2((__int64)v58);
        if (v59 == 0) {
          goto LABEL_134;
        }
        v60 = *(_QWORD**)(v57 + 48);
        v61 = v60[2];
        if (v61 == 0 || v60[4] == 0) {
          goto LABEL_134;
        }
        v63 = v61 - 1;
        if ((v61 & (v61 - 1)) != 0) {
          v64 = v59;
          if (v59 >= v61) {
            v64 = v59 % v61;
          }
        }
        else {
          v64 = v63 & v59;
        }
        v65 = *(_QWORD**)(v60[1] + 8 * v64);
        if (v65 == nullptr) {
          goto LABEL_134;
        }
        v66 = (_QWORD*)*v65;
        if (v66 == nullptr) {
          goto LABEL_134;
        }
        if ((v61 & v63) == 0) {
          while (1) {
            v69 = v66[1];
            if (v59 == v69) {
              if (v66[2] == v59) {
                goto LABEL_132;
              }
            }
            else if ((v69 & v63) != v64) {
              goto LABEL_134;
            }
            v66 = (_QWORD*)*v66;
            v68 = false;
            if (v66 == nullptr) {
              goto LABEL_135;
            }
          }
        }
        while (1) {
          v67 = v66[1];
          if (v59 == v67) {
            break;
          }
          if (v67 >= v61) {
            v67 %= v61;
          }
          if (v67 != v64) {
            goto LABEL_134;
          }
        LABEL_121:
          v66 = (_QWORD*)*v66;
          if (v66 == nullptr) {
            goto LABEL_134;
          }
        }
        if (v66[2] != v59) {
          goto LABEL_121;
        }
      LABEL_132:
        v70 = v66[3];
        if (v70 != 0) {
          v68 = *(_DWORD*)(v70 + 32) != 0;
          goto LABEL_135;
        }
      LABEL_134:
        v68 = false;
      LABEL_135:
        v52 = (v41 == 33) ^ v68;
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        if ((v107_.v107 & 1) != 0) {
        LABEL_136:
          if (v107_.v109 != nullptr) {
            v71 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v71 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v5 + v71, (__int64)v107_.v109);
          }
        }
      LABEL_140:
        if ((v52 & 1) == 0) {
        LABEL_9:
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v5 + v11, v19);
          goto LABEL_13;
        }
      }
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v72 = 128;
      }
      else {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v72, v19);
      v73 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 24, 16, 0);
      v74 = *v102;
      v73[1] = v102;
      v73[2] = v12;
      *v73 = v74;
      *(_QWORD*)(v74 + 8) = v73;
      *v102 = v73;
      v75 = v102[2] + 1LL;
      v102[2] = v75;
      if (v75 >= v101) {
        break;
      }
    LABEL_13:
      ++v10;
    } while (v10 != v103);
  }
  if ((a2 & 1) != 0) {
    v76 = *((_DWORD*)v102 + 4);
    if ((int)v76 >= 1) {
      v77 = 0;
      v78 = game_map_MapRandom_instance__ptr[0];
      if ((int)(2 * v76) <= 1) {
        v79 = 1;
      }
      else {
        v79 = 2 * v76;
      }
      do {
        v81 = v102[1];
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v82 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78);
        v83 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78 + 4);
        v84 = *(_DWORD*)v78 ^ (*(_DWORD*)v78 << 11);
        *(_DWORD*)v78 = *((_DWORD*)v78 + 1);
        *((_DWORD*)v78 + 1) = v82;
        v85 = (v84 >> 8) ^ (v83 >> 19) ^ v84 ^ v83;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78) = v83;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78 + 4) = v85;
        v86 = v85 & 0x7FFFFFFF;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v87 = v86 % v76;
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v88 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78);
        v89 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78 + 4);
        v90 = *(_DWORD*)v78 ^ (*(_DWORD*)v78 << 11);
        *(_DWORD*)v78 = *((_DWORD*)v78 + 1);
        *((_DWORD*)v78 + 1) = v88;
        v91 = (v90 >> 8) ^ (v89 >> 19) ^ v90 ^ v89;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78) = v89;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v78 + 4) = v91;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        j = v81;
        if ((_DWORD)v87 != 0) {
          v93 = v87 & 7;
          v94 = v87;
          for (j = v81; v93 != 0; --v93) {
            j = *(_QWORD*)(j + 8);
            --v94;
          }
          if ((unsigned int)v87 >= 8) {
            v95 = v94 - 1;
            do {
              v95 -= 8LL;
              j = *(
                  _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(j +
                                                                                                        8) +
                                                                                             8LL) +
                                                                                  8LL) +
                                                                       8LL) +
                                                            8LL) +
                                                 8LL) +
                                      8LL) +
                           8LL);
            } while (v95 < 0xFFFFFFFFFFFFFFFELL);
          }
        }
        v96 = (v91 & 0x7FFFFFFFu) % v76;
        if (v96 != 0) {
          v97 = v96 & 7;
          v98 = (v91 & 0x7FFFFFFFu) % v76;
          if ((v96 & 7) != 0) {
            do {
              v81 = *(_QWORD*)(v81 + 8);
              --v98;
              --v97;
            } while (v97 != 0);
          }
          if (v96 >= 8) {
            v99 = v98 - 1;
            do {
              v99 -= 8LL;
              v81 = *(
                  _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v81 +
                                                                                                        8) +
                                                                                             8LL) +
                                                                                  8LL) +
                                                                       8LL) +
                                                            8LL) +
                                                 8LL) +
                                      8LL) +
                           8LL);
            } while (v99 < 0xFFFFFFFFFFFFFFFELL);
          }
        }
        v80 = *(_QWORD*)(j + 16);
        ++v77;
        *(_QWORD*)(j + 16) = *(_QWORD*)(v81 + 16);
        *(_QWORD*)(v81 + 16) = v80;
      } while (v77 != v79);
    }
  }
}

__int64* TutorialFile_980b00()
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d10,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4d10) != 0) {
    GameData_21f4cf8 = (__int64)&GameData_1af4ee0;
    GameData_21f4d00 = (__int64)&GameData_1ab0047;
    GameData_21f4d08 = (__int64)&GameData_1ada40b;
    __cxa_guard_release(&GameData_21f4d10);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d30,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4d30) != 0) {
    v1 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    GameData_21f4d18 = (__int64)v1;
    v2 = GameData_21f4d00;
    v3 = GameData_21f4d08;
    GameData_21f4d20 = (__int64)(v1 + 3);
    GameData_21f4d28 = (__int64)(v1 + 3);
    *v1 = GameData_21f4cf8;
    v1[1] = v2;
    v1[2] = v3;
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21f4d30);
  }
  return &GameData_21f4d18;
}

#pragma GCC visibility pop
