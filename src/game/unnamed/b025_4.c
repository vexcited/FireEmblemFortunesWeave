#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern __int64 GameData_212bf68;
extern __int64* GameData_212c738[2];
extern _DWORD* GameData_212d330;
extern __int64* GameData_212e348;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a5bc0(__int64);
__int64 GameRoutine_18dc920(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ca0(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84cb50(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51f40(_QWORD);
__int64 Alignment_56b600(__int64 result);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Registration_a51f40(__int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern _DWORD* game_g_shared_system_skills_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_18a5bc0_alt1(__int64) __asm__("GameRoutine_18a5bc0");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void GameHr_18aba70(__int64 a1, __int64 a2);
__int64* GameRoutine_18dc920_alt1(_QWORD*,
                                  __int64*) __asm__("GameRoutine_18dc920");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_18d73c0(_QWORD* a1, const char* a2, unsigned __int64 a3);

void GameHr_18aba70(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned int v4;
  int v5;
  unsigned __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  int v21;
  char v22;
  __int64 v23;
  struct {
    _QWORD v24[4];
    int v25;
    int v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v24_;
  float v40;
  _DWORD v41[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v4 = 0;
  v5 = *(unsigned __int8*)(a2 + 498);
  if (v5 != 99) {
    v6 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    if (v5 >= (int)v6) {
      v7 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    else {
      v7 = *(unsigned __int8*)(a2 + 498);
    }
    if (*(_BYTE*)(a2 + 498) != 0) {
      v8 = v7;
    }
    else {
      v8 = 1;
    }
    if (v8 == (_DWORD)v6) {
      v9 = 0;
    }
    else {
      v9 = *(_DWORD*)(GameData_21d9968 + 4LL * v8);
    }
    v4 = v9 - *(_DWORD*)(a2 + 504);
  }
  v10 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v4, 0);
  v11 = *(_QWORD*)(a2 + 440);
  if (v11 == 0 || *(_BYTE*)(v11 + 16) != 0 ||
      (LODWORD(v24_.v24[0]) = *game_g_shared_system_skills_ptr & 0xFFF,
       (game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)v24_.v24) & 1) !=
           0)) {
    v12 = "MID_H_Sys_Lv_NotGrow";
  }
  else if (*(_BYTE*)(a2 + 498) == 99) {
    v12 = "MID_H_Sys_Lv_Max";
  }
  else {
    v12 = "MID_H_Sys_Lv";
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
  v13 = *v10;
  v24_.v27 = -1;
  v24_.v28 = -1;
  v24_.v29 = -1;
  v24_.v30 = -1;
  v24_.v31 = -1;
  v24_.v32 = -1;
  v24_.v33 = -1;
  v24_.v34 = -1;
  v24_.v35 = -1;
  v24_.v36 = -1;
  v24_.v37 = -1;
  v24_.v38 = -1;
  v24_.v24[0] = GameData_212e348 + 2;
  v24_.v24[1] = 0xFFFF0001FFFF0000LL;
  v24_.v24[2] = 0xFFFF0004FFFF0002LL;
  v24_.v24[3] = 0xFFFF0006FFFF0005LL;
  v24_.v39 = 8;
  v24_.v25 = -65529;
  v24_.v26 = -65528;
  v14 = GameRoutine_a4dbe0_alt1(v13, v12, 0);
  if (v14 != nullptr) {
    v15 = (__int64)v14;
    v16 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                        (__int64)"L_InfoTxt/T_Txt");
    if (v16 != 0) {
      GameRoutine_156c5d0_alt1(v16, v15, 0);
    }
  }
  v17 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v17 != 0) {
    v18 = v17;
    v19 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v19 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v24_.v24, (__int64)v41, &v40, v19,
                               v19[27]);
      v20 = v41[0];
      v21 = v41[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  Registration_a51f40(*v10 + 14704);
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v23 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v23 != 0) {
    Alignment_56b600(v23);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

__int64 GameHr_18d73c0(_QWORD* a1, const char* a2, unsigned __int64 a3)
{
  const char* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v29;
  int v30;
  struct {
    __int64 v31;
    unsigned __int64 v32;
    const char* v33;
  } v31_;
  struct {
    char* v34;
    unsigned __int64 v35;
  } v34_;

  v3 = a2;
  v34_.v34 = (char*)a2;
  v34_.v35 = a3;
  if (a3 < 4 || *(_DWORD*)&a2[a3 - 4] != 1953724974) {
    v5 = strlen(a2);
    if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v6 = v5;
    if (v5 >= 0x17) {
      if ((v5 | 7) == 0x17) {
        v8 = 26;
      }
      else {
        v8 = (v5 | 7) + 1;
      }
      v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8,
                                                 16, 0);
      v31_.v32 = v6;
      v31_.v33 = v7;
      v31_.v31 = v8 | 1;
    }
    else {
      LOBYTE(v31_.v31) = 2 * v5;
      v7 = (char*)&v31_.v31 + 1;
      if (v5 == 0) {
        goto LABEL_12;
      }
    }
    memmove((__int64)v7, (__int64)v3, v6);
  LABEL_12:
    v7[v6] = 0;
    GameRoutine_1a09ce0_alt1((__int64)&v31_.v31, ".zst", 4u);
    v9 = a1[1];
    v10 = 1;
    if (v9 != 0 && a1[3] != 0) {
      if ((v31_.v31 & 1) != 0) {
        v3 = v31_.v33;
      }
      else {
        v3 = (char*)&v31_.v31 + 1;
      }
      if ((v31_.v31 & 1) != 0) {
        v11 = v31_.v32;
      }
      else {
        v11 = (unsigned __int64)(unsigned __int8)v31_.v31 >> 1;
      }
      v12 = std___1___hash_memory((__int64)v3, v11);
      v13 = v9 - 1;
      v14 = v12;
      if ((v9 & (v9 - 1)) != 0) {
        v15 = v12;
        if (v12 >= v9) {
          v15 = v12 % v9;
        }
      }
      else {
        v15 = v12 & v13;
      }
      v17 = *(__int64***)(*a1 + 8 * v15);
      if (v17 == nullptr || (v18 = *v17, *v17 == nullptr)) {
      LABEL_54:
        v10 = 1;
        goto LABEL_55;
      }
      if ((v9 & v13) == 0) {
        while (1) {
          v23 = v18[1];
          if (v14 == v23) {
            v24 = *((unsigned __int8*)v18 + 16);
            v25 = v18[3];
            if ((v24 & 1) == 0) {
              v25 = v24 >> 1;
            }
            if (v25 == v11) {
              v26 = (v24 & 1) != 0 ? v18[4] : (__int64)v18 + 17;
              if (memcmp(v26, (__int64)v3, v11) == 0) {
                goto LABEL_53;
              }
            }
          }
          else if ((v23 & v13) != v15) {
            goto LABEL_54;
          }
          v18 = (__int64*)*v18;
          if (v18 == nullptr) {
            goto LABEL_54;
          }
        }
      }
      while (1) {
        v19 = v18[1];
        if (v14 == v19) {
          v20 = *((unsigned __int8*)v18 + 16);
          v21 = v18[3];
          if ((v20 & 1) == 0) {
            v21 = v20 >> 1;
          }
          if (v21 == v11) {
            v22 = (v20 & 1) != 0 ? v18[4] : (__int64)v18 + 17;
            if (memcmp(v22, (__int64)v3, v11) == 0) {
            LABEL_53:
              LODWORD(v3) = *((_DWORD*)v18 + 10);
              v10 = 0;
              break;
            }
          }
        }
        else {
          if (v19 >= v9) {
            v19 %= v9;
          }
          if (v19 != v15) {
            goto LABEL_54;
          }
        }
        v18 = (__int64*)*v18;
        if (v18 == nullptr) {
          goto LABEL_54;
        }
      }
    }
  LABEL_55:
    if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v31_.v33);
    }
    if (v10 == 0) {
      return (unsigned int)v3;
    }
    goto LABEL_61;
  }
  v31_.v31 = (__int64)v34_.v34;
  v31_.v32 = v34_.v35 - 4;
  v16 = GameRoutine_18dc920_alt1(a1, &v31_.v31);
  if (v16 != nullptr) {
  LABEL_62:
    LODWORD(v3) = *((_DWORD*)v16 + 10);
    return (unsigned int)v3;
  }
LABEL_61:
  v16 = GameRoutine_18dc920_alt1(a1, (__int64*)&v34_.v34);
  if (v16 != nullptr) {
    goto LABEL_62;
  }
  while (1) {
    v29 = v34_.v35;
    if (v34_.v35 == 0) {
      break;
    }
    do {
      if (v29 == 0) {
        goto LABEL_65;
      }
      v30 = (unsigned __int8)v34_.v34[--v29];
    } while (v30 != 47);
    if (v29 == -1) {
    LABEL_65:
      v29 = 0;
      v34_.v34 = &GameData_1a9f09e;
    }
    v34_.v35 = v29;
    v16 = GameRoutine_18dc920_alt1(a1, (__int64*)&v34_.v34);
    if (v16 != nullptr) {
      goto LABEL_62;
    }
  }
  LODWORD(v3) = 0;
  return (unsigned int)v3;
}

#pragma GCC visibility pop
