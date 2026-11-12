#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameConst_7f8880(PSEUDO_X8);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__int64* GameRoutine_19a2d40(__int64* result, __int64*, __int64*, __int64*,
                             __int64*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_108c540(int);
__int64 GameRoutine_1553130(__int64 result);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 GameRoutine_19f06c0(_QWORD*, __int64*, unsigned __int8, char);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_64be60();
__int64 Mind_746340(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool Unit_6c9ab0(_QWORD*, _DWORD*, unsigned __int16*);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* game_util_Format(const char*, ...);
const char* Pane_58fac0(__int64, const char*);
const char* game_HashString32(const char* result);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a85309;
extern _UNKNOWN GameData_1a90b0d;
extern _UNKNOWN GameData_1a974d5;
extern _UNKNOWN GameData_1a974d7;
extern _UNKNOWN GameData_1abe0f9;
extern _UNKNOWN GameData_21c6868;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_2120738[])();
extern __int64 (*GameData_2120788[])();
extern __int64 (*GameData_2120838[])();
extern __int64 (*GameData_21208d8[])();
extern __int64 (*game_anonymous_ProcWarRecordSeq_GroupDrawObj_vtable[])();
extern __int64 (
    *game_anonymous_ProcWarRecordSeq_ProcEndingMouseMode_vtable[])();
extern __int64 (*game_anonymous_ProcWarRecordSeq_RecordDrawObj_vtable[])();
extern __int64 (*game_anonymous_ProcWarRecordSeq_TitleDrawObj_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cde8[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212dea8;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f84b8;
extern __int64 GameData_2241830;
extern __int64 GameData_2272000;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern char* GameData_211bee8[6];
extern char GameData_1a9f09e;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_2272768;
extern int GameData_227276c;
extern int GameData_2272770;
extern int GameData_2272774;
extern int GameData_2272778;
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
unsigned __int64 strlen(const char*);
void* game_97b2f0(__int64);
void* game_facility_140c9a0();
void GameRoutine_19b4ae0(__int64*, _QWORD*);
void MapCombatPrediction_19f34f0(_QWORD*, __int64, __int64);
void MapCombatPrediction_19f3700(__int64*);
void __attribute__((noreturn)) GameRoutine_19b4ac0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_705570();
void __attribute__((noreturn)) GameRoutine_9a0990();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__int64 game_19307a0(__int64 a1, char a2);
void game_195ab40(__int64 a1, __int64 a2);
void game_195b020(__int64 a1, int a2, unsigned __int8* a3, __int64* a4,
                  __int64* a5);
__int64 game_1971a30(__int64 a1, __int64 a2, char a3);
bool game_19a2f80(__int64* a1, __int64* a2, __int64* a3);
__int64 game_19b1330(__int64* a1);
__int64 game_19b2e40(_QWORD* a1);
bool game_19f0540(_QWORD* a1, _QWORD* a2);
_QWORD* game_19f2c80(_QWORD* a1, _QWORD* a2, unsigned __int16*** a3, int a4,
                     _QWORD* a5, __int64 a6);
__int64 game_19f3620(__int64 a1, char a2);
void game_1a09140(__int64 a1);

__int64 game_19307a0(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 result;
  __int64 v10;
  __int64* v11;
  unsigned __int64* v12;
  __int64 v13;
  const char* v14;
  const char* v15;
  const char* v16;
  __int64* v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;

  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v17 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
  std___1___shared_weak_count___release_weak(v6);
  v8 = v17;
  if (v17 == nullptr) {
  LABEL_5:
    v8 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_1560070((void*)(&v18_.v18), v8, "L_KeyHelp");
  result = v18_.v19;
  if (v18_.v19 != 0) {
    v10 = std___1___shared_weak_count_lock(v18_.v19);
    v11 = v18_.v18;
    result = v18_.v19;
    if (v18_.v19 != 0) {
      result = std___1___shared_weak_count___release_weak(v18_.v19);
    }
    if (v10 != 0 && v11 != nullptr) {
      v12 = (unsigned __int64*)(GameData_21f84b8 +
                                40LL * *(unsigned __int8*)(a1 + 96));
      if (*v12 != 0 && game_GameModeData_instance_ != 0 &&
          (v13 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v12)) != 0) {
        v14 = "Accent_Default";
        if ((a2 & 1) != 0) {
          v14 = "Accent_Select";
        }
        v15 = "Default";
        if ((a2 & 1) != 0) {
          v15 = "Select";
        }
        if ((unsigned __int8)*(_DWORD*)(v13 + 32) == 1) {
          v16 = v15;
        }
        else {
          v16 = v14;
        }
      }
      else if ((a2 & 1) != 0) {
        v16 = "Accent_Select";
      }
      else {
        v16 = "Accent_Default";
      }
      GameHr_1562680((__int64)v11, v16, 0x1.0000000000000p+0f);
      result = ui_LayoutAccessor_FindAlignment(v11, (__int64)"A_Txt");
      if (result != 0) {
        result = Alignment_56b600(result);
      }
    }
    else if (v10 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      return std___1___shared_weak_count___release_weak(v10);
    }
  }
  return result;
}

void game_195ab40(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  int v22;
  unsigned __int8* v23;
  int v24;
  int v25;
  int v26;
  int v27;
  _BYTE* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  unsigned int v33;
  char v34;
  __int128 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  const char* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  struct {
    _QWORD v57[2];
    char* v58;
  } v57_;
  struct {
    __int128 v59;
    char* v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
  } v59_;

  *(_DWORD*)a1 = 0;
  v4 = game_facility_140c9a0();
  v5 = v4[1];
  *(_QWORD*)(a1 + 16) = *v4;
  *(_QWORD*)(a1 + 24) = v5;
  *(_DWORD*)(a1 + 32) = *((_DWORD*)v4 + 4);
  if ((v4[3] & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(a1 + 40), v4[5], v4[4]);
  }
  else {
    v6 = v4[3];
    v7 = v4[5];
    *(_QWORD*)(a1 + 48) = v4[4];
    *(_QWORD*)(a1 + 56) = v7;
    *(_QWORD*)(a1 + 40) = v6;
  }
  *(_WORD*)(a1 + 64) = 0;
  v8 = (_BYTE*)(a1 + 64);
  *(_WORD*)(a1 + 88) = 0;
  v9 = (_BYTE*)(a1 + 88);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v10 = *(_QWORD*)(a2 + 16);
  }
  else {
    v10 = a2 + 1;
  }
  v11 = game_HashString(v10);
  if (v11 == 0) {
    return;
  }
  v12 = *(_QWORD*)(GameData_2241830 + 96);
  if (v12 == 0 || *(_QWORD*)(GameData_2241830 + 112) == 0) {
    return;
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
  v16 = *(_QWORD**)(*(_QWORD*)(GameData_2241830 + 88) + 8 * v15);
  if (v16 == nullptr) {
    return;
  }
  v17 = (_QWORD*)*v16;
  if (v17 == nullptr) {
    return;
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v19 = v17[1];
      if (v19 == v11) {
        if (v17[2] == v11) {
          goto LABEL_32;
        }
      }
      else if ((v19 & v14) != v15) {
        return;
      }
      v17 = (_QWORD*)*v17;
      if (v17 == nullptr) {
        return;
      }
    }
  }
  while (1) {
    v18 = v17[1];
    if (v18 == v11) {
      break;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      return;
    }
  LABEL_21:
    v17 = (_QWORD*)*v17;
    if (v17 == nullptr) {
      return;
    }
  }
  if (v17[2] != v11) {
    goto LABEL_21;
  }
LABEL_32:
  v20 = v17[3];
  if (v20 != 0) {
    v21 = *(unsigned __int8**)(v20 + 32);
    if (v21 != nullptr) {
      v24 = *v21;
      v23 = v21 + 1;
      v22 = v24;
      if (v24 != 0) {
        v25 = 0;
        do {
          v25 = v22 - v25 + 32 * v25;
          v26 = *v23++;
          v22 = v26;
        } while (v26 != 0);
        *(_DWORD*)a1 = v25;
        if ((GameRoutine_108c540(v25) & 1) != 0) {
          v27 = v25;
        }
        else {
          v27 = 0;
        }
        *(_DWORD*)a1 = v27;
      }
    }
    v28 = *(_BYTE**)(v20 + 40);
    if (v28 == nullptr || *v28 == 0) {
      goto LABEL_62;
    }
    v29 = strlen(*(const char**)(v20 + 40));
    if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_98;
    }
    v30 = v29;
    if (v29 >= 0x17) {
      v32 = (v29 | 7) == 0x17 ? 26LL : (v29 | 7) + 1;
      v31 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v32,
                                                  16, 0);
      v57_.v57[1] = v30;
      v57_.v58 = v31;
      v57_.v57[0] = v32 | 1;
    }
    else {
      LOBYTE(v57_.v57[0]) = 2 * v29;
      v31 = (char*)v57_.v57 + 1;
      if (v29 == 0) {
        goto LABEL_52;
      }
    }
    memmove((__int64)v31, (__int64)v28, v30);
  LABEL_52:
    v31[v30] = 0;
    game_facility_140d160((void*)(&v59_.v59), (__int64)v57_.v57);
    v33 = DWORD2(v59_.v59);
    v34 = *(_BYTE*)(a1 + 40);
    *(_QWORD*)(a1 + 16) = v59_.v59;
    v35 = *(_OWORD*)(a1 + 16);
    *((_QWORD*)&v35 + 1) = v33;
    *(_DWORD*)(a1 + 32) = (_DWORD)v59_.v60;
    *(_OWORD*)(a1 + 16) = v35;
    if ((v34 & 1) != 0) {
      v36 = *(_QWORD*)(a1 + 56);
      if (v36 != 0) {
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v36);
      }
    }
    v38 = v59_.v61;
    v39 = v59_.v62;
    LOWORD(v59_.v61) = 0;
    *(_QWORD*)(a1 + 40) = v38;
    *(_QWORD*)(a1 + 48) = v39;
    *(_QWORD*)(a1 + 56) = v59_.v63;
    if ((v57_.v57[0] & 1) != 0 && v57_.v58 != nullptr) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v57_.v58);
    }
  LABEL_62:
    v41 = *(_QWORD*)(v20 + 48) != 0 ? *(const char**)(v20 + 48)
                                    : &GameData_1a9f09e;
    v42 = strlen(v41);
    if (v42 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_98;
    }
    v43 = v42;
    if (v42 >= 0x17) {
      v45 = (v42 | 7) == 0x17 ? 26LL : (v42 | 7) + 1;
      v44 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v45,
                                                  16, 0);
      *((_QWORD*)&v59_.v59 + 1) = v43;
      v59_.v60 = v44;
      *(_QWORD*)&v59_.v59 = v45 | 1;
    }
    else {
      LOBYTE(v59_.v59) = 2 * v42;
      v44 = (char*)&v59_.v59 + 1;
      if (v42 == 0) {
        goto LABEL_74;
      }
    }
    memmove((__int64)v44, (__int64)v41, v43);
  LABEL_74:
    v44[v43] = 0;
    if ((*v8 & 1) != 0) {
      v46 = *(_QWORD*)(a1 + 80);
      if (v46 != 0) {
        v47 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v46);
      }
    }
    v48 = *((_QWORD*)&v59_.v59 + 1);
    *(_QWORD*)v8 = v59_.v59;
    *(_QWORD*)(a1 + 72) = v48;
    *(_QWORD*)(a1 + 80) = v59_.v60;
    v49 = *(_QWORD*)(v20 + 56) != 0 ? *(const char**)(v20 + 56)
                                    : &GameData_1a9f09e;
    v50 = strlen(v49);
    if (v50 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_98:
      String_60a1d0();
    }
    v51 = v50;
    if (v50 >= 0x17) {
      if ((v50 | 7) == 0x17) {
        v53 = 26;
      }
      else {
        v53 = (v50 | 7) + 1;
      }
      v52 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v53,
                                                  16, 0);
      *((_QWORD*)&v59_.v59 + 1) = v51;
      v59_.v60 = v52;
      *(_QWORD*)&v59_.v59 = v53 | 1;
    }
    else {
      LOBYTE(v59_.v59) = 2 * v50;
      v52 = (char*)&v59_.v59 + 1;
      if (v50 == 0) {
        goto LABEL_91;
      }
    }
    memmove((__int64)v52, (__int64)v49, v51);
  LABEL_91:
    v52[v51] = 0;
    if ((*v9 & 1) != 0) {
      v54 = *(_QWORD*)(a1 + 104);
      if (v54 != 0) {
        v55 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v54);
      }
    }
    v56 = *((_QWORD*)&v59_.v59 + 1);
    *(_QWORD*)v9 = v59_.v59;
    *(_QWORD*)(a1 + 96) = v56;
    *(_QWORD*)(a1 + 104) = v59_.v60;
  }
}

void game_195b020(__int64 a1, int a2, unsigned __int8* a3, __int64* a4,
                  __int64* a5)
{
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  char v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int128 v25;
    int v26;
    char gap20_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v25_;

  *(_DWORD*)a1 = a2;
  v9 = game_facility_140c9a0();
  v10 = v9[1];
  *(_QWORD*)(a1 + 16) = *v9;
  *(_QWORD*)(a1 + 24) = v10;
  *(_DWORD*)(a1 + 32) = *((_DWORD*)v9 + 4);
  if ((v9[3] & 1) == 0) {
    v11 = v9[3];
    v12 = v9[5];
    *(_QWORD*)(a1 + 48) = v9[4];
    *(_QWORD*)(a1 + 56) = v12;
    *(_QWORD*)(a1 + 40) = v11;
    if ((*(_BYTE*)a4 & 1) != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    v13 = *a4;
    v14 = a4[2];
    *(_QWORD*)(a1 + 72) = a4[1];
    *(_QWORD*)(a1 + 80) = v14;
    *(_QWORD*)(a1 + 64) = v13;
    if ((*(_BYTE*)a5 & 1) != 0) {
      goto LABEL_4;
    }
    goto LABEL_7;
  }
  fw_text_String_CopyTerminated((__int64*)(a1 + 40), v9[5], v9[4]);
  if ((*(_BYTE*)a4 & 1) == 0) {
    goto LABEL_6;
  }
LABEL_3:
  fw_text_String_CopyTerminated((__int64*)(a1 + 64), a4[2], a4[1]);
  if ((*(_BYTE*)a5 & 1) != 0) {
  LABEL_4:
    fw_text_String_CopyTerminated((__int64*)(a1 + 88), a5[2], a5[1]);
    goto LABEL_8;
  }
LABEL_7:
  v15 = *a5;
  v16 = a5[2];
  *(_QWORD*)(a1 + 96) = a5[1];
  *(_QWORD*)(a1 + 104) = v16;
  *(_QWORD*)(a1 + 88) = v15;
LABEL_8:
  v17 = *a3;
  if ((v17 & 1) != 0) {
    v18 = *((_QWORD*)a3 + 1);
  }
  else {
    v18 = v17 >> 1;
  }
  if (v18 != 0) {
    game_facility_140d160((void*)(&v25_.v25), (__int64)a3);
    v19 = DWORD2(v25_.v25);
    v20 = *(_BYTE*)(a1 + 40);
    *(_QWORD*)(a1 + 16) = v25_.v25;
    v21 = *(_OWORD*)(a1 + 16);
    *((_QWORD*)&v21 + 1) = v19;
    *(_DWORD*)(a1 + 32) = v25_.v26;
    *(_OWORD*)(a1 + 16) = v21;
    if ((v20 & 1) != 0) {
      v22 = *(_QWORD*)(a1 + 56);
      if (v22 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
      }
    }
    v24 = v25_.v28;
    *(_QWORD*)(a1 + 40) = v25_.v27;
    *(_QWORD*)(a1 + 48) = v24;
    *(_QWORD*)(a1 + 56) = v25_.v29;
  }
}

__int64 game_1971a30(__int64 a1, __int64 a2, char a3)
{
  char* v6;
  unsigned __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  const char* v10;
  unsigned __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  const char* v15;

  if ((*(_BYTE*)a2 & 1) != 0) {
    *(_QWORD*)(a2 + 8) = 7;
    v6 = *(char**)(a2 + 16);
  }
  else {
    *(_BYTE*)a2 = 14;
    v6 = (char*)(a2 + 1);
  }
  strcpy(v6, "MID_SV_");
  v7 = *(unsigned __int8*)(a1 + 32);
  if (v7 > 5) {
    v8 = &GameData_1a9f09e;
  }
  else {
    v8 = GameData_211bee8[v7];
  }
  v9 = strlen(v8);
  GameRoutine_1a09ce0(a2, v8, v9);
  GameRoutine_1a09ce0(a2, "_", 1u);
  if ((unsigned int)*(unsigned __int8*)(a1 + 32) - 1 < 5) {
    v10 = *(const char**)(a1 + 56);
    v11 = strlen(v10);
    GameRoutine_1a09ce0(a2, v10, v11);
    GameRoutine_1a09ce0(a2, "_", 1u);
    v12 = 80;
  LABEL_9:
    v13 = *(const char**)(a1 + v12);
    v14 = strlen(v13);
    GameRoutine_1a09ce0(a2, v13, v14);
    goto LABEL_10;
  }
  if (*(_BYTE*)(a1 + 32) == 0) {
    v12 = 80;
    if ((a3 & 1) != 0) {
      v12 = 56;
    }
    goto LABEL_9;
  }
LABEL_10:
  GameRoutine_1a09ce0(a2, "_", 1u);
  if ((a3 & 1 | (*(_BYTE*)(a1 + 32) == 0)) != 0) {
    v15 = "m01_01";
  }
  else {
    v15 = "m01_02";
  }
  return GameRoutine_1a09ce0(a2, v15, 6u);
}

bool game_19a2f80(__int64* a1, __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;

  v3 = a2 - a1;
  if (v3 > 2) {
    if (v3 != 3) {
      if (v3 == 4) {
        GameRoutine_19a2d40(a1, a1 + 1, a1 + 2, a2 - 1, a3);
        return true;
      }
      if (v3 == 5) {
        GameRoutine_19a2d40(a1, a1 + 1, a1 + 2, a1 + 3, a3);
        v9 = *(a2 - 1);
        v10 = a1[3];
        if ((v9 == *a3) != (v10 != *a3)) {
          if (*(float*)(v9 + 52) <= *(float*)(v10 + 52)) {
            return true;
          }
        }
        else if (v9 == *a3) {
          return true;
        }
        a1[3] = v9;
        *(a2 - 1) = v10;
        v24 = a1[2];
        v23 = a1[3];
        if ((v23 == *a3) != (v24 != *a3)) {
          if (*(float*)(v23 + 52) <= *(float*)(v24 + 52)) {
            return true;
          }
        }
        else if (v23 == *a3) {
          return true;
        }
        a1[2] = v23;
        a1[3] = v24;
        v25 = a1[1];
        if ((v23 == *a3) != (v25 != *a3)) {
          if (*(float*)(v23 + 52) <= *(float*)(v25 + 52)) {
            return true;
          }
        }
        else if (v23 == *a3) {
          return true;
        }
        a1[1] = v23;
        a1[2] = v25;
        v28 = *a1;
        if ((v23 == *a3) != (*a1 != *a3)) {
          if (*(float*)(v23 + 52) <= *(float*)(v28 + 52)) {
            return true;
          }
        }
        else if (v23 == *a3) {
          return true;
        }
        *a1 = v23;
        a1[1] = v28;
        return true;
      }
      goto LABEL_18;
    }
    v11 = *a1;
    v12 = a1[1];
    v13 = *a3;
    if ((v12 == *a3) != (*a1 != *a3)) {
      if (*(float*)(v12 + 52) <= *(float*)(v11 + 52)) {
        goto LABEL_15;
      }
    }
    else if (v12 == v13) {
    LABEL_15:
      v14 = *(a2 - 1);
      if ((v12 != v13) != (v14 == v13)) {
        if (*(float*)(v14 + 52) <= *(float*)(v12 + 52)) {
          return true;
        }
      }
      else if (v14 == v13) {
        return true;
      }
      a1[1] = v14;
      *(a2 - 1) = v12;
      v27 = *a1;
      v26 = a1[1];
      if ((v26 == *a3) != (*a1 != *a3)) {
        if (*(float*)(v26 + 52) <= *(float*)(v27 + 52)) {
          return true;
        }
      }
      else if (v26 == *a3) {
        return true;
      }
      *a1 = v26;
      a1[1] = v27;
      return true;
    }
    v20 = *(a2 - 1);
    if ((v12 != v13) != (v20 == v13)) {
      if (*(float*)(v20 + 52) <= *(float*)(v12 + 52)) {
        goto LABEL_27;
      }
    }
    else if (v20 == v13) {
    LABEL_27:
      *a1 = v12;
      a1[1] = v11;
      v21 = *(a2 - 1);
      if ((v21 == *a3) != (v11 != *a3)) {
        if (*(float*)(v21 + 52) <= *(float*)(v11 + 52)) {
          return true;
        }
      }
      else if (v21 == *a3) {
        return true;
      }
      a1[1] = v21;
      *(a2 - 1) = v11;
      return true;
    }
    *a1 = v20;
    *(a2 - 1) = v11;
    return true;
  }
  if ((unsigned __int64)v3 < 2) {
    return true;
  }
  if (v3 == 2) {
    v4 = *(a2 - 1);
    v5 = *a1;
    if ((v4 == *a3) != (*a1 != *a3)) {
      if (*(float*)(v4 + 52) <= *(float*)(v5 + 52)) {
        return true;
      }
    }
    else if (v4 == *a3) {
      return true;
    }
    *a1 = v4;
    *(a2 - 1) = v5;
    return true;
  }
LABEL_18:
  v15 = *a1;
  v16 = a1[1];
  v17 = *a3;
  v18 = a1 + 2;
  if ((v16 == *a3) != (*a1 != *a3)) {
    if (*(float*)(v16 + 52) <= *(float*)(v15 + 52)) {
      goto LABEL_20;
    }
  LABEL_31:
    v22 = *v18;
    if ((v16 != v17) != (*v18 == v17)) {
      if (*(float*)(v22 + 52) <= *(float*)(v16 + 52)) {
      LABEL_33:
        *a1 = v16;
        a1[1] = v15;
        if ((v22 == *a3) != (v15 != *a3)) {
          if (*(float*)(v22 + 52) <= *(float*)(v15 + 52)) {
            goto LABEL_71;
          }
        }
        else if (v22 == *a3) {
          goto LABEL_71;
        }
        a1[1] = v22;
      LABEL_68:
        a1[2] = v15;
        goto LABEL_71;
      }
    }
    else if (v22 == v17) {
      goto LABEL_33;
    }
    *a1 = v22;
    goto LABEL_68;
  }
  if (v16 != v17) {
    goto LABEL_31;
  }
LABEL_20:
  v19 = *v18;
  if ((v16 != v17) != (*v18 == v17)) {
    if (*(float*)(v19 + 52) <= *(float*)(v16 + 52)) {
      goto LABEL_71;
    }
  }
  else if (v19 == v17) {
    goto LABEL_71;
  }
  a1[1] = v19;
  a1[2] = v16;
  if ((v19 == *a3) == (v15 != *a3)) {
    if (v19 == *a3) {
      goto LABEL_71;
    }
  }
  else if (*(float*)(v19 + 52) <= *(float*)(v15 + 52)) {
  LABEL_71:
    v29 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v30 = *a3;
    v31 = 0;
    v32 = 0;
    while (1) {
      v33 = *v29;
      v34 = *v18;
      if ((*v29 == v30) == (*v18 != v30)) {
        break;
      }
      if (*(float*)(v33 + 52) > *(float*)(v34 + 52)) {
        goto LABEL_81;
      }
    LABEL_76:
      v18 = v29++;
      v31 += 8;
      if (v29 == a2) {
        return true;
      }
    }
    if (v33 == v30) {
      goto LABEL_76;
    }
  LABEL_81:
    *v29 = v34;
    v35 = v31;
    while (1) {
      v36 = (char*)a1 + v35;
      v37 = *(__int64*)((char*)a1 + v35 + 8);
      if ((v33 == *a3) != (v37 != *a3)) {
        if (*(float*)(v33 + 52) <= *(float*)(v37 + 52)) {
          goto LABEL_74;
        }
        goto LABEL_83;
      }
      if (v33 == *a3) {
        break;
      }
    LABEL_83:
      --v18;
      v35 -= 8;
      *((_QWORD*)v36 + 2) = v37;
      if (v35 == -16) {
        v18 = a1;
        goto LABEL_74;
      }
    }
    v18 = (__int64*)((char*)a1 + v35 + 16);
  LABEL_74:
    ++v32;
    *v18 = v33;
    if (v32 != 8) {
      v30 = *a3;
      goto LABEL_76;
    }
    return v29 + 1 == a2;
  }
  *a1 = v19;
  a1[1] = v15;
  goto LABEL_71;
}

__int64 game_19b1330(__int64* a1)
{
  int v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int32x4_t* v12;
  unsigned __int64 v13;
  __int64 v14;
  float32x2_t v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int32x4_t* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _BOOL4 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _BOOL4 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  float v49;
  __int64 v50;
  const char* v51;
  float v52;
  __int64 v53;
  unsigned __int32 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _BOOL4 v58;
  __int64 v59;
  __int64 v60;
  int32x4_t* v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _BOOL4 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  float32x4_t v73;
  int32x2_t* v74;
  float32x4_t v75;
  __int64 v76;
  unsigned __int32 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _BOOL4 v81;
  __int64 v82;
  __int64 v83;
  int32x4_t* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _BOOL4 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  float32x4_t v96;
  int32x2_t* v97;
  float32x4_t v98;
  __int64 v99;
  unsigned __int32 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _BOOL4 v104;
  __int64 v105;
  __int64 v106;
  int32x4_t* v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  _BOOL4 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  float32x4_t v119;
  int32x2_t* v120;
  float32x4_t v121;
  __int64 v122;
  unsigned __int32 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  _BOOL4 v127;
  __int64 v128;
  __int64 v129;
  int32x4_t* v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  _BOOL4 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  float32x4_t v142;
  int32x2_t* v143;
  float32x4_t v144;
  __int64 v145;
  unsigned __int32 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  _BOOL4 v150;
  __int64 v151;
  __int64 v152;
  int32x4_t* v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  _BOOL4 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  float32x4_t v165;
  int32x2_t* v166;
  float32x4_t v167;
  __int64 v168;
  unsigned __int32 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  _BOOL4 v173;
  __int64 v174;
  __int64 v175;
  int32x4_t* v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  _BOOL4 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  float32x4_t v188;
  int32x2_t* v189;
  float32x4_t v190;
  __int64 v191;
  unsigned __int32 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  _BOOL4 v196;
  __int64 v197;
  __int64 v198;
  int32x4_t* v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  _BOOL4 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  float32x4_t v211;
  int32x2_t* v212;
  float32x4_t v213;
  __int64 v214;
  unsigned __int32 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  _BOOL4 v219;
  __int64 v220;
  __int64 v221;
  int32x4_t* v222;
  unsigned __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  _BOOL4 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  float32x4_t v234;
  int32x2_t* v235;
  float32x4_t v236;
  __int64 v237;
  unsigned __int32 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  _BOOL4 v242;
  __int64 v243;
  __int64 v244;
  int32x4_t* v245;
  unsigned __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  _BOOL4 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  float32x4_t v257;
  int32x2_t* v258;
  float32x4_t v259;
  __int64 v260;
  unsigned __int32 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  _BOOL4 v265;
  __int64 v266;
  __int64 v267;
  int32x4_t* v268;
  unsigned __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  _BOOL4 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  float32x4_t v280;
  int32x2_t* v281;
  float32x4_t v282;
  __int64 result;
  unsigned __int32 v284;
  __int64 v285;
  __int64 v286;
  _BOOL4 v287;
  __int64 v288;
  __int64 v289;
  unsigned __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  _BOOL4 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  float32x4_t v298;
  int32x2_t* v299;
  float32x4_t v300;
  unsigned __int64 v301;
  unsigned __int64 v302;
  unsigned __int64 v303;
  unsigned __int64 v304;
  unsigned __int64 v305;
  unsigned __int64 v306;
  unsigned __int64 v307;
  unsigned __int64 v308;
  unsigned __int64 v309;
  unsigned __int64 v310;
  unsigned __int64 v311;
  float32x2_t v312;
  unsigned __int32 v313;
  unsigned __int32 v314;
  unsigned __int32 v315;
  unsigned __int32 v316;
  unsigned __int32 v317;
  unsigned __int32 v318;
  unsigned __int32 v319;
  unsigned __int32 v320;
  unsigned __int32 v321;
  unsigned __int32 v322;
  unsigned __int32 v323;

  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = &GameData_2272000;
  if (a1[31] == 0) {
    goto LABEL_26;
  }
  v4 = a1[30];
  LANES64(v312).n64_u64[0] = 0;
  if (v4 == 0) {
    goto LABEL_19;
  }
  v5 = std___1___shared_weak_count_lock(v4),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v5 == 0) {
    goto LABEL_11;
  }
  v6 = a1[29];
  if (v6 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != a1[31];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak(v10),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v8) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v1 & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  if (!v8) {
    goto LABEL_15;
  }
LABEL_11:
  v9 = a1[30];
  if (v9 != 0 && *(_QWORD*)(v9 + 8) != -1) {
  LABEL_16:
    v11 = a1[31];
    if (v11 == 0) {
    LABEL_26:
      GameData_2272768 = 0;
      goto LABEL_57;
    }
    v12 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v11, "L_Chapter02"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v12 != nullptr) {
      LODWORD(v13) = LANES128_OF(vdupq_laneq_s32(v12[7], 3)).n128_u32[0];
      HIDWORD(v13) = HIDWORD(LANES128(v12[8]).n128_u64[1]);
      LANES64(v312).n64_u64[0] = v13;
    }
  }
LABEL_19:
  if (a1[31] == 0) {
  LABEL_45:
    v27 = 0x0.0p+0f;
    GameData_2272768 = (int)LANES64(v312).n64_f32[1];
    goto LABEL_58;
  }
  v14 = a1[30];
  LANES64(v15).n64_u64[0] = 0;
  if (v14 == 0) {
    goto LABEL_38;
  }
  v16 = std___1___shared_weak_count_lock(v14),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v16 == 0) {
    goto LABEL_30;
  }
  v17 = a1[29];
  if (v17 != 0) {
    v1 = *(unsigned __int8*)(v17 + 24);
    v18 = v17 + 152;
    if (v1 == 0) {
      v18 = 0;
    }
    v19 = v18 != a1[31];
  }
  else {
    v19 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v21 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak(v21),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v19) {
      goto LABEL_30;
    }
  LABEL_34:
    LANES64(v15).n64_u64[0] = 0;
    if ((v1 & 1) == 0) {
      goto LABEL_38;
    }
    goto LABEL_35;
  }
  if (!v19) {
    goto LABEL_34;
  }
LABEL_30:
  v20 = a1[30];
  LANES64(v15).n64_u64[0] = 0;
  if (v20 != 0) {
    LANES64(v15).n64_u64[0] = 0;
    if (*(_QWORD*)(v20 + 8) == -1) {
      goto LABEL_38;
    }
  LABEL_35:
    v22 = a1[31];
    if (v22 == 0) {
      goto LABEL_45;
    }
    v23 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v22, "L_Record00"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    LANES64(v15).n64_u64[0] = 0;
    if (v23 != nullptr) {
      LANES64(v15).n64_u32[0] =
          LANES128_OF(vdupq_laneq_s32(v23[7], 3)).n128_u32[0];
      LANES64(v15).n64_u32[1] = HIDWORD(LANES128(v23[8]).n128_u64[1]);
    }
  }
LABEL_38:
  v24 = a1[31];
  GameData_2272768 = (int)LANES64_OF(vsub_f32(v312, v15)).n64_f32[1];
  if (v24 == 0) {
    goto LABEL_57;
  }
  v25 = a1[30];
  if (v25 == 0) {
    goto LABEL_57;
  }
  v26 = std___1___shared_weak_count_lock(v25),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  v27 = 0x0.0p+0f;
  if (v26 != 0) {
    v28 = a1[29];
    if (v28 != 0) {
      LODWORD(v2) = *(unsigned __int8*)(v28 + 24);
      v29 = v28 + 152;
      if ((_DWORD)v2 == 0) {
        v29 = 0;
      }
      v30 = v29 != a1[31];
    }
    else {
      v30 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v31 = v26;
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak(v31),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
      v27 = 0x0.0p+0f;
    }
    if (!v30) {
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_58;
      }
      goto LABEL_54;
    }
  }
  v32 = a1[30];
  if (v32 != 0 && *(_QWORD*)(v32 + 8) != -1) {
  LABEL_54:
    v33 = a1[31];
    if (v33 == 0) {
      v36 = 0x0.0p+0f;
      v35 = 0x0.0p+0f;
      goto LABEL_78;
    }
    v34 = GameRoutine_155f760((__int64)(a1 + 29), v33, "L_Record00"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v34 != 0) {
      LODWORD(v27) = HIDWORD(*(_QWORD*)(v34 + 136));
      goto LABEL_58;
    }
  LABEL_57:
    v27 = 0x0.0p+0f;
  }
LABEL_58:
  v35 = v27;
  v36 = 0x0.0p+0f;
  if (a1[31] == 0) {
    goto LABEL_78;
  }
  v37 = a1[30];
  if (v37 == 0) {
    goto LABEL_78;
  }
  v38 = std___1___shared_weak_count_lock(v37),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v38 == 0) {
    goto LABEL_68;
  }
  v39 = a1[29];
  if (v39 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v39 + 24);
    v40 = v39 + 152;
    if ((_DWORD)v2 == 0) {
      v40 = 0;
    }
    v41 = v40 != a1[31];
  }
  else {
    v41 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v41) {
    LABEL_68:
      v42 = a1[30];
      v36 = 0x0.0p+0f;
      if (v42 == 0 || *(_QWORD*)(v42 + 8) == -1) {
        goto LABEL_78;
      }
      goto LABEL_73;
    }
  }
  else {
    v43 = v38;
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak(v43),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v41) {
      goto LABEL_68;
    }
  }
  v36 = 0x0.0p+0f;
  if (((unsigned __int8)v2 & 1) != 0) {
  LABEL_73:
    v44 = a1[31];
    if (v44 != 0) {
      v45 = GameRoutine_155f760((__int64)(a1 + 29), v44, "L_Record01"),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v45 != 0) {
        LODWORD(v36) = HIDWORD(*(_QWORD*)(v45 + 136));
      }
      else {
        v36 = 0x0.0p+0f;
      }
    }
  }
LABEL_78:
  GameData_227276c = (int)(float)(v35 - v36);
  ui_LayoutAccessor_GetPaneSize(a1 + 29, "L_Chapter00"),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  v47 = v46;
  ui_LayoutAccessor_GetPaneSize(a1 + 29, "L_Record00"),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  v49 = v47 + v48;
  GameData_2272770 = (int)(float)((float)(v49 * 0x1.0000000000000p-1f) +
                                  0x1.9000000000000p+5f);
  v50 = ui_LayoutAccessor_FindPane(a1 + 29, (__int64)"N_Body"),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v50 != 0) {
    v51 = Pane_58fac0(v50, "Margin_Chapter"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v51 != nullptr) {
      GameData_2272770 = (int)(float)(*(float*)&v51[*((unsigned int*)v51 + 1)] +
                                      (float)(v49 * 0x1.0000000000000p-1f));
    }
  }
  ui_LayoutAccessor_GetPaneSize(a1 + 29, "Viewport"),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  GameData_2272774 = (int)v52;
  GameData_2272778 = (int)vcvts_n_f32_s32((int)v52, 1u);
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Chapter00",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] != 0) {
    v53 = a1[30];
    v54 = 0;
    if (v53 == 0) {
      goto LABEL_102;
    }
    v55 = std___1___shared_weak_count_lock(v53),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v55 == 0) {
      goto LABEL_91;
    }
    v56 = a1[29];
    if (v56 != 0) {
      LODWORD(v2) = *(unsigned __int8*)(v56 + 24);
      v57 = v56 + 152;
      if ((_DWORD)v2 == 0) {
        v57 = 0;
      }
      v58 = v57 != a1[31];
    }
    else {
      v58 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v58) {
        goto LABEL_91;
      }
    }
    else {
      v63 = v55;
      (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak(v63),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v58) {
      LABEL_91:
        v59 = a1[30];
        if (v59 == 0) {
          v62 = 0;
          v54 = 0;
          if (a1[31] == 0) {
            goto LABEL_122;
          }
          goto LABEL_103;
        }
        v54 = 0;
        if (*(_QWORD*)(v59 + 8) != -1) {
        LABEL_93:
          v60 = a1[31];
          if (v60 == 0) {
            goto LABEL_122;
          }
          v61 = (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v60,
                                                "L_Chapter00"),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
          v54 = 0;
          v62 = 0;
          if (v61 != nullptr) {
            v54 = LANES128_OF(vdupq_laneq_s32(v61[7], 3)).n128_u32[0];
            v62 = LANES128(v61[9]).n128_u32[3];
          }
          if (a1[31] == 0) {
            goto LABEL_122;
          }
        LABEL_103:
          v64 = a1[30];
          if (v64 == 0) {
            goto LABEL_122;
          }
          v301 = v62;
          v313 = v54;
          v65 = std___1___shared_weak_count_lock(v64),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v65 != 0) {
            v66 = a1[29];
            if (v66 != 0) {
              LODWORD(v2) = *(unsigned __int8*)(v66 + 24);
              v67 = v66 + 152;
              if ((_DWORD)v2 == 0) {
                v67 = 0;
              }
              v68 = v67 != a1[31];
            }
            else {
              v68 = true;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v68) {
                goto LABEL_112;
              }
            }
            else {
              v70 = v65;
              (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v48 = COERCE_AS(__typeof__(v48),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v52 = COERCE_AS(__typeof__(v52),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
              std___1___shared_weak_count___release_weak(v70),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v48 = COERCE_AS(__typeof__(v48),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v52 = COERCE_AS(__typeof__(v52),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
              if (v68) {
                goto LABEL_112;
              }
            }
            if (((unsigned __int8)v2 & 1) == 0) {
              goto LABEL_122;
            }
          LABEL_117:
            v71 = a1[31];
            if (v71 != 0) {
              v72 = GameRoutine_155f760((__int64)(a1 + 29), v71, "L_Chapter00"),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              LANES128(v73).n128_u32[0] = v313;
              if (v72 != 0) {
                v74 = *(int32x2_t**)(v72 + 24);
                LANES128(v73).n128_u32[1] = -998637568;
                LANES128(v73).n128_u64[1] = v301;
                if (v74 != nullptr) {
                  LANES128(v75).n128_u64[0] =
                      LANES64_OF(vzip2_s32(v74[15], v74[17])).n64_u64[0];
                  LANES128(v75).n128_u64[1] = LANES64(v74[19]).n64_u32[1];
                  v73 = vsubq_f32(v73, v75);
                }
                *(_QWORD*)(v72 + 48) = LANES128(v73).n128_u64[0];
                *(_DWORD*)(v72 + 56) = LANES128(v73).n128_u32[2];
                *(_BYTE*)(v72 + 88) |= 0x10u;
              }
            }
            goto LABEL_122;
          }
        LABEL_112:
          v69 = a1[30];
          if (v69 == 0 || *(_QWORD*)(v69 + 8) == -1) {
            goto LABEL_122;
          }
          goto LABEL_117;
        }
      LABEL_102:
        v62 = 0;
        if (a1[31] == 0) {
          goto LABEL_122;
        }
        goto LABEL_103;
      }
    }
    v54 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_93;
    }
    goto LABEL_102;
  }
LABEL_122:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Chapter01",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_163;
  }
  v76 = a1[30];
  v77 = 0;
  if (v76 == 0) {
    goto LABEL_143;
  }
  v78 = std___1___shared_weak_count_lock(v76),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v78 == 0) {
    goto LABEL_132;
  }
  v79 = a1[29];
  if (v79 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v79 + 24);
    v80 = v79 + 152;
    if ((_DWORD)v2 == 0) {
      v80 = 0;
    }
    v81 = v80 != a1[31];
  }
  else {
    v81 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v81) {
      goto LABEL_132;
    }
  LABEL_142:
    v77 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_134;
    }
    goto LABEL_143;
  }
  v86 = v78;
  (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v86),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v81) {
    goto LABEL_142;
  }
LABEL_132:
  v82 = a1[30];
  if (v82 == 0) {
    v85 = 0;
    v77 = 0;
    if (a1[31] == 0) {
      goto LABEL_163;
    }
  LABEL_144:
    v87 = a1[30];
    if (v87 == 0) {
      goto LABEL_163;
    }
    v302 = v85;
    v314 = v77;
    v88 = std___1___shared_weak_count_lock(v87),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v88 != 0) {
      v89 = a1[29];
      if (v89 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v89 + 24);
        v90 = v89 + 152;
        if ((_DWORD)v2 == 0) {
          v90 = 0;
        }
        v91 = v90 != a1[31];
      }
      else {
        v91 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v91) {
          goto LABEL_153;
        }
      }
      else {
        v93 = v88;
        (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v93),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v91) {
          goto LABEL_153;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_163;
      }
    LABEL_158:
      v94 = a1[31];
      if (v94 != 0) {
        v95 = GameRoutine_155f760((__int64)(a1 + 29), v94, "L_Chapter01"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v96).n128_u32[0] = v314;
        if (v95 != 0) {
          v97 = *(int32x2_t**)(v95 + 24);
          LANES128(v96).n128_u32[1] = -998637568;
          LANES128(v96).n128_u64[1] = v302;
          if (v97 != nullptr) {
            LANES128(v98).n128_u64[0] =
                LANES64_OF(vzip2_s32(v97[15], v97[17])).n64_u64[0];
            LANES128(v98).n128_u64[1] = LANES64(v97[19]).n64_u32[1];
            v96 = vsubq_f32(v96, v98);
          }
          *(_QWORD*)(v95 + 48) = LANES128(v96).n128_u64[0];
          *(_DWORD*)(v95 + 56) = LANES128(v96).n128_u32[2];
          *(_BYTE*)(v95 + 88) |= 0x10u;
        }
      }
      goto LABEL_163;
    }
  LABEL_153:
    v92 = a1[30];
    if (v92 == 0 || *(_QWORD*)(v92 + 8) == -1) {
      goto LABEL_163;
    }
    goto LABEL_158;
  }
  v77 = 0;
  if (*(_QWORD*)(v82 + 8) == -1) {
  LABEL_143:
    v85 = 0;
    if (a1[31] == 0) {
      goto LABEL_163;
    }
    goto LABEL_144;
  }
LABEL_134:
  v83 = a1[31];
  if (v83 != 0) {
    v84 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v83, "L_Chapter01"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v77 = 0;
    v85 = 0;
    if (v84 != nullptr) {
      v77 = LANES128_OF(vdupq_laneq_s32(v84[7], 3)).n128_u32[0];
      v85 = LANES128(v84[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_144;
    }
  }
LABEL_163:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Chapter02",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_204;
  }
  v99 = a1[30];
  v100 = 0;
  if (v99 == 0) {
    goto LABEL_184;
  }
  v101 = std___1___shared_weak_count_lock(v99),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v101 == 0) {
    goto LABEL_173;
  }
  v102 = a1[29];
  if (v102 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v102 + 24);
    v103 = v102 + 152;
    if ((_DWORD)v2 == 0) {
      v103 = 0;
    }
    v104 = v103 != a1[31];
  }
  else {
    v104 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v104) {
      goto LABEL_173;
    }
  LABEL_183:
    v100 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_175;
    }
    goto LABEL_184;
  }
  v109 = v101;
  (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v109),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v104) {
    goto LABEL_183;
  }
LABEL_173:
  v105 = a1[30];
  if (v105 == 0) {
    v108 = 0;
    v100 = 0;
    if (a1[31] == 0) {
      goto LABEL_204;
    }
  LABEL_185:
    v110 = a1[30];
    if (v110 == 0) {
      goto LABEL_204;
    }
    v303 = v108;
    v315 = v100;
    v111 = std___1___shared_weak_count_lock(v110),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v111 != 0) {
      v112 = a1[29];
      if (v112 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v112 + 24);
        v113 = v112 + 152;
        if ((_DWORD)v2 == 0) {
          v113 = 0;
        }
        v114 = v113 != a1[31];
      }
      else {
        v114 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v114) {
          goto LABEL_194;
        }
      }
      else {
        v116 = v111;
        (*(void (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v116),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v114) {
          goto LABEL_194;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_204;
      }
    LABEL_199:
      v117 = a1[31];
      if (v117 != 0) {
        v118 = GameRoutine_155f760((__int64)(a1 + 29), v117, "L_Chapter02"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v119).n128_u32[0] = v315;
        if (v118 != 0) {
          v120 = *(int32x2_t**)(v118 + 24);
          LANES128(v119).n128_u32[1] = -998637568;
          LANES128(v119).n128_u64[1] = v303;
          if (v120 != nullptr) {
            LANES128(v121).n128_u64[0] =
                LANES64_OF(vzip2_s32(v120[15], v120[17])).n64_u64[0];
            LANES128(v121).n128_u64[1] = LANES64(v120[19]).n64_u32[1];
            v119 = vsubq_f32(v119, v121);
          }
          *(_QWORD*)(v118 + 48) = LANES128(v119).n128_u64[0];
          *(_DWORD*)(v118 + 56) = LANES128(v119).n128_u32[2];
          *(_BYTE*)(v118 + 88) |= 0x10u;
        }
      }
      goto LABEL_204;
    }
  LABEL_194:
    v115 = a1[30];
    if (v115 == 0 || *(_QWORD*)(v115 + 8) == -1) {
      goto LABEL_204;
    }
    goto LABEL_199;
  }
  v100 = 0;
  if (*(_QWORD*)(v105 + 8) == -1) {
  LABEL_184:
    v108 = 0;
    if (a1[31] == 0) {
      goto LABEL_204;
    }
    goto LABEL_185;
  }
LABEL_175:
  v106 = a1[31];
  if (v106 != 0) {
    v107 = (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v106,
                                           "L_Chapter02"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v100 = 0;
    v108 = 0;
    if (v107 != nullptr) {
      v100 = LANES128_OF(vdupq_laneq_s32(v107[7], 3)).n128_u32[0];
      v108 = LANES128(v107[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_185;
    }
  }
LABEL_204:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Record00",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_245;
  }
  v122 = a1[30];
  v123 = 0;
  if (v122 == 0) {
    goto LABEL_225;
  }
  v124 = std___1___shared_weak_count_lock(v122),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v124 == 0) {
    goto LABEL_214;
  }
  v125 = a1[29];
  if (v125 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v125 + 24);
    v126 = v125 + 152;
    if ((_DWORD)v2 == 0) {
      v126 = 0;
    }
    v127 = v126 != a1[31];
  }
  else {
    v127 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v127) {
      goto LABEL_214;
    }
  LABEL_224:
    v123 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_216;
    }
    goto LABEL_225;
  }
  v132 = v124;
  (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v132),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v127) {
    goto LABEL_224;
  }
LABEL_214:
  v128 = a1[30];
  if (v128 == 0) {
    v131 = 0;
    v123 = 0;
    if (a1[31] == 0) {
      goto LABEL_245;
    }
  LABEL_226:
    v133 = a1[30];
    if (v133 == 0) {
      goto LABEL_245;
    }
    v304 = v131;
    v316 = v123;
    v134 = std___1___shared_weak_count_lock(v133),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v134 != 0) {
      v135 = a1[29];
      if (v135 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v135 + 24);
        v136 = v135 + 152;
        if ((_DWORD)v2 == 0) {
          v136 = 0;
        }
        v137 = v136 != a1[31];
      }
      else {
        v137 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v134 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v137) {
          goto LABEL_235;
        }
      }
      else {
        v139 = v134;
        (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v139),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v137) {
          goto LABEL_235;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_245;
      }
    LABEL_240:
      v140 = a1[31];
      if (v140 != 0) {
        v141 = GameRoutine_155f760((__int64)(a1 + 29), v140, "L_Record00"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v142).n128_u32[0] = v316;
        if (v141 != 0) {
          v143 = *(int32x2_t**)(v141 + 24);
          LANES128(v142).n128_u32[1] = -998637568;
          LANES128(v142).n128_u64[1] = v304;
          if (v143 != nullptr) {
            LANES128(v144).n128_u64[0] =
                LANES64_OF(vzip2_s32(v143[15], v143[17])).n64_u64[0];
            LANES128(v144).n128_u64[1] = LANES64(v143[19]).n64_u32[1];
            v142 = vsubq_f32(v142, v144);
          }
          *(_QWORD*)(v141 + 48) = LANES128(v142).n128_u64[0];
          *(_DWORD*)(v141 + 56) = LANES128(v142).n128_u32[2];
          *(_BYTE*)(v141 + 88) |= 0x10u;
        }
      }
      goto LABEL_245;
    }
  LABEL_235:
    v138 = a1[30];
    if (v138 == 0 || *(_QWORD*)(v138 + 8) == -1) {
      goto LABEL_245;
    }
    goto LABEL_240;
  }
  v123 = 0;
  if (*(_QWORD*)(v128 + 8) == -1) {
  LABEL_225:
    v131 = 0;
    if (a1[31] == 0) {
      goto LABEL_245;
    }
    goto LABEL_226;
  }
LABEL_216:
  v129 = a1[31];
  if (v129 != 0) {
    v130 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v129, "L_Record00"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v123 = 0;
    v131 = 0;
    if (v130 != nullptr) {
      v123 = LANES128_OF(vdupq_laneq_s32(v130[7], 3)).n128_u32[0];
      v131 = LANES128(v130[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_226;
    }
  }
LABEL_245:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Record01",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_286;
  }
  v145 = a1[30];
  v146 = 0;
  if (v145 == 0) {
    goto LABEL_266;
  }
  v147 = std___1___shared_weak_count_lock(v145),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v147 == 0) {
    goto LABEL_255;
  }
  v148 = a1[29];
  if (v148 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v148 + 24);
    v149 = v148 + 152;
    if ((_DWORD)v2 == 0) {
      v149 = 0;
    }
    v150 = v149 != a1[31];
  }
  else {
    v150 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v150) {
      goto LABEL_255;
    }
  LABEL_265:
    v146 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_257;
    }
    goto LABEL_266;
  }
  v155 = v147;
  (*(void (**)(__int64))(*(_QWORD*)v147 + 16LL))(v147),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v155),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v150) {
    goto LABEL_265;
  }
LABEL_255:
  v151 = a1[30];
  if (v151 == 0) {
    v154 = 0;
    v146 = 0;
    if (a1[31] == 0) {
      goto LABEL_286;
    }
  LABEL_267:
    v156 = a1[30];
    if (v156 == 0) {
      goto LABEL_286;
    }
    v305 = v154;
    v317 = v146;
    v157 = std___1___shared_weak_count_lock(v156),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v157 != 0) {
      v158 = a1[29];
      if (v158 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v158 + 24);
        v159 = v158 + 152;
        if ((_DWORD)v2 == 0) {
          v159 = 0;
        }
        v160 = v159 != a1[31];
      }
      else {
        v160 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v157 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v160) {
          goto LABEL_276;
        }
      }
      else {
        v162 = v157;
        (*(void (**)(__int64))(*(_QWORD*)v157 + 16LL))(v157),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v162),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v160) {
          goto LABEL_276;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_286;
      }
    LABEL_281:
      v163 = a1[31];
      if (v163 != 0) {
        v164 = GameRoutine_155f760((__int64)(a1 + 29), v163, "L_Record01"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v165).n128_u32[0] = v317;
        if (v164 != 0) {
          v166 = *(int32x2_t**)(v164 + 24);
          LANES128(v165).n128_u32[1] = -998637568;
          LANES128(v165).n128_u64[1] = v305;
          if (v166 != nullptr) {
            LANES128(v167).n128_u64[0] =
                LANES64_OF(vzip2_s32(v166[15], v166[17])).n64_u64[0];
            LANES128(v167).n128_u64[1] = LANES64(v166[19]).n64_u32[1];
            v165 = vsubq_f32(v165, v167);
          }
          *(_QWORD*)(v164 + 48) = LANES128(v165).n128_u64[0];
          *(_DWORD*)(v164 + 56) = LANES128(v165).n128_u32[2];
          *(_BYTE*)(v164 + 88) |= 0x10u;
        }
      }
      goto LABEL_286;
    }
  LABEL_276:
    v161 = a1[30];
    if (v161 == 0 || *(_QWORD*)(v161 + 8) == -1) {
      goto LABEL_286;
    }
    goto LABEL_281;
  }
  v146 = 0;
  if (*(_QWORD*)(v151 + 8) == -1) {
  LABEL_266:
    v154 = 0;
    if (a1[31] == 0) {
      goto LABEL_286;
    }
    goto LABEL_267;
  }
LABEL_257:
  v152 = a1[31];
  if (v152 != 0) {
    v153 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v152, "L_Record01"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v146 = 0;
    v154 = 0;
    if (v153 != nullptr) {
      v146 = LANES128_OF(vdupq_laneq_s32(v153[7], 3)).n128_u32[0];
      v154 = LANES128(v153[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_267;
    }
  }
LABEL_286:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Record02",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_327;
  }
  v168 = a1[30];
  v169 = 0;
  if (v168 == 0) {
    goto LABEL_307;
  }
  v170 = std___1___shared_weak_count_lock(v168),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v170 == 0) {
    goto LABEL_296;
  }
  v171 = a1[29];
  if (v171 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v171 + 24);
    v172 = v171 + 152;
    if ((_DWORD)v2 == 0) {
      v172 = 0;
    }
    v173 = v172 != a1[31];
  }
  else {
    v173 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v170 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v173) {
      goto LABEL_296;
    }
  LABEL_306:
    v169 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_298;
    }
    goto LABEL_307;
  }
  v178 = v170;
  (*(void (**)(__int64))(*(_QWORD*)v170 + 16LL))(v170),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v178),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v173) {
    goto LABEL_306;
  }
LABEL_296:
  v174 = a1[30];
  if (v174 == 0) {
    v177 = 0;
    v169 = 0;
    if (a1[31] == 0) {
      goto LABEL_327;
    }
  LABEL_308:
    v179 = a1[30];
    if (v179 == 0) {
      goto LABEL_327;
    }
    v306 = v177;
    v318 = v169;
    v180 = std___1___shared_weak_count_lock(v179),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v180 != 0) {
      v181 = a1[29];
      if (v181 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v181 + 24);
        v182 = v181 + 152;
        if ((_DWORD)v2 == 0) {
          v182 = 0;
        }
        v183 = v182 != a1[31];
      }
      else {
        v183 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v180 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v183) {
          goto LABEL_317;
        }
      }
      else {
        v185 = v180;
        (*(void (**)(__int64))(*(_QWORD*)v180 + 16LL))(v180),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v185),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v183) {
          goto LABEL_317;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_327;
      }
    LABEL_322:
      v186 = a1[31];
      if (v186 != 0) {
        v187 = GameRoutine_155f760((__int64)(a1 + 29), v186, "L_Record02"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v188).n128_u32[0] = v318;
        if (v187 != 0) {
          v189 = *(int32x2_t**)(v187 + 24);
          LANES128(v188).n128_u32[1] = -998637568;
          LANES128(v188).n128_u64[1] = v306;
          if (v189 != nullptr) {
            LANES128(v190).n128_u64[0] =
                LANES64_OF(vzip2_s32(v189[15], v189[17])).n64_u64[0];
            LANES128(v190).n128_u64[1] = LANES64(v189[19]).n64_u32[1];
            v188 = vsubq_f32(v188, v190);
          }
          *(_QWORD*)(v187 + 48) = LANES128(v188).n128_u64[0];
          *(_DWORD*)(v187 + 56) = LANES128(v188).n128_u32[2];
          *(_BYTE*)(v187 + 88) |= 0x10u;
        }
      }
      goto LABEL_327;
    }
  LABEL_317:
    v184 = a1[30];
    if (v184 == 0 || *(_QWORD*)(v184 + 8) == -1) {
      goto LABEL_327;
    }
    goto LABEL_322;
  }
  v169 = 0;
  if (*(_QWORD*)(v174 + 8) == -1) {
  LABEL_307:
    v177 = 0;
    if (a1[31] == 0) {
      goto LABEL_327;
    }
    goto LABEL_308;
  }
LABEL_298:
  v175 = a1[31];
  if (v175 != 0) {
    v176 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v175, "L_Record02"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v169 = 0;
    v177 = 0;
    if (v176 != nullptr) {
      v169 = LANES128_OF(vdupq_laneq_s32(v176[7], 3)).n128_u32[0];
      v177 = LANES128(v176[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_308;
    }
  }
LABEL_327:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Record03",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_368;
  }
  v191 = a1[30];
  v192 = 0;
  if (v191 == 0) {
    goto LABEL_348;
  }
  v193 = std___1___shared_weak_count_lock(v191),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v193 == 0) {
    goto LABEL_337;
  }
  v194 = a1[29];
  if (v194 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v194 + 24);
    v195 = v194 + 152;
    if ((_DWORD)v2 == 0) {
      v195 = 0;
    }
    v196 = v195 != a1[31];
  }
  else {
    v196 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v193 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v196) {
      goto LABEL_337;
    }
  LABEL_347:
    v192 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_339;
    }
    goto LABEL_348;
  }
  v201 = v193;
  (*(void (**)(__int64))(*(_QWORD*)v193 + 16LL))(v193),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v201),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v196) {
    goto LABEL_347;
  }
LABEL_337:
  v197 = a1[30];
  if (v197 == 0) {
    v200 = 0;
    v192 = 0;
    if (a1[31] == 0) {
      goto LABEL_368;
    }
  LABEL_349:
    v202 = a1[30];
    if (v202 == 0) {
      goto LABEL_368;
    }
    v307 = v200;
    v319 = v192;
    v203 = std___1___shared_weak_count_lock(v202),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v203 != 0) {
      v204 = a1[29];
      if (v204 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v204 + 24);
        v205 = v204 + 152;
        if ((_DWORD)v2 == 0) {
          v205 = 0;
        }
        v206 = v205 != a1[31];
      }
      else {
        v206 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v203 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v206) {
          goto LABEL_358;
        }
      }
      else {
        v208 = v203;
        (*(void (**)(__int64))(*(_QWORD*)v203 + 16LL))(v203),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v208),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v206) {
          goto LABEL_358;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_368;
      }
    LABEL_363:
      v209 = a1[31];
      if (v209 != 0) {
        v210 = GameRoutine_155f760((__int64)(a1 + 29), v209, "L_Record03"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v211).n128_u32[0] = v319;
        if (v210 != 0) {
          v212 = *(int32x2_t**)(v210 + 24);
          LANES128(v211).n128_u32[1] = -998637568;
          LANES128(v211).n128_u64[1] = v307;
          if (v212 != nullptr) {
            LANES128(v213).n128_u64[0] =
                LANES64_OF(vzip2_s32(v212[15], v212[17])).n64_u64[0];
            LANES128(v213).n128_u64[1] = LANES64(v212[19]).n64_u32[1];
            v211 = vsubq_f32(v211, v213);
          }
          *(_QWORD*)(v210 + 48) = LANES128(v211).n128_u64[0];
          *(_DWORD*)(v210 + 56) = LANES128(v211).n128_u32[2];
          *(_BYTE*)(v210 + 88) |= 0x10u;
        }
      }
      goto LABEL_368;
    }
  LABEL_358:
    v207 = a1[30];
    if (v207 == 0 || *(_QWORD*)(v207 + 8) == -1) {
      goto LABEL_368;
    }
    goto LABEL_363;
  }
  v192 = 0;
  if (*(_QWORD*)(v197 + 8) == -1) {
  LABEL_348:
    v200 = 0;
    if (a1[31] == 0) {
      goto LABEL_368;
    }
    goto LABEL_349;
  }
LABEL_339:
  v198 = a1[31];
  if (v198 != 0) {
    v199 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v198, "L_Record03"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v192 = 0;
    v200 = 0;
    if (v199 != nullptr) {
      v192 = LANES128_OF(vdupq_laneq_s32(v199[7], 3)).n128_u32[0];
      v200 = LANES128(v199[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_349;
    }
  }
LABEL_368:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Record04",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_409;
  }
  v214 = a1[30];
  v215 = 0;
  if (v214 == 0) {
    goto LABEL_389;
  }
  v216 = std___1___shared_weak_count_lock(v214),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v216 == 0) {
    goto LABEL_378;
  }
  v217 = a1[29];
  if (v217 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v217 + 24);
    v218 = v217 + 152;
    if ((_DWORD)v2 == 0) {
      v218 = 0;
    }
    v219 = v218 != a1[31];
  }
  else {
    v219 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v216 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v219) {
      goto LABEL_378;
    }
  LABEL_388:
    v215 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_380;
    }
    goto LABEL_389;
  }
  v224 = v216;
  (*(void (**)(__int64))(*(_QWORD*)v216 + 16LL))(v216),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v224),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v219) {
    goto LABEL_388;
  }
LABEL_378:
  v220 = a1[30];
  if (v220 == 0) {
    v223 = 0;
    v215 = 0;
    if (a1[31] == 0) {
      goto LABEL_409;
    }
  LABEL_390:
    v225 = a1[30];
    if (v225 == 0) {
      goto LABEL_409;
    }
    v308 = v223;
    v320 = v215;
    v226 = std___1___shared_weak_count_lock(v225),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v226 != 0) {
      v227 = a1[29];
      if (v227 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v227 + 24);
        v228 = v227 + 152;
        if ((_DWORD)v2 == 0) {
          v228 = 0;
        }
        v229 = v228 != a1[31];
      }
      else {
        v229 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v226 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v229) {
          goto LABEL_399;
        }
      }
      else {
        v231 = v226;
        (*(void (**)(__int64))(*(_QWORD*)v226 + 16LL))(v226),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v231),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v229) {
          goto LABEL_399;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_409;
      }
    LABEL_404:
      v232 = a1[31];
      if (v232 != 0) {
        v233 = GameRoutine_155f760((__int64)(a1 + 29), v232, "L_Record04"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v234).n128_u32[0] = v320;
        if (v233 != 0) {
          v235 = *(int32x2_t**)(v233 + 24);
          LANES128(v234).n128_u32[1] = -998637568;
          LANES128(v234).n128_u64[1] = v308;
          if (v235 != nullptr) {
            LANES128(v236).n128_u64[0] =
                LANES64_OF(vzip2_s32(v235[15], v235[17])).n64_u64[0];
            LANES128(v236).n128_u64[1] = LANES64(v235[19]).n64_u32[1];
            v234 = vsubq_f32(v234, v236);
          }
          *(_QWORD*)(v233 + 48) = LANES128(v234).n128_u64[0];
          *(_DWORD*)(v233 + 56) = LANES128(v234).n128_u32[2];
          *(_BYTE*)(v233 + 88) |= 0x10u;
        }
      }
      goto LABEL_409;
    }
  LABEL_399:
    v230 = a1[30];
    if (v230 == 0 || *(_QWORD*)(v230 + 8) == -1) {
      goto LABEL_409;
    }
    goto LABEL_404;
  }
  v215 = 0;
  if (*(_QWORD*)(v220 + 8) == -1) {
  LABEL_389:
    v223 = 0;
    if (a1[31] == 0) {
      goto LABEL_409;
    }
    goto LABEL_390;
  }
LABEL_380:
  v221 = a1[31];
  if (v221 != 0) {
    v222 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v221, "L_Record04"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v215 = 0;
    v223 = 0;
    if (v222 != nullptr) {
      v215 = LANES128_OF(vdupq_laneq_s32(v222[7], 3)).n128_u32[0];
      v223 = LANES128(v222[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_390;
    }
  }
LABEL_409:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Record05",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_450;
  }
  v237 = a1[30];
  v238 = 0;
  if (v237 == 0) {
    goto LABEL_430;
  }
  v239 = std___1___shared_weak_count_lock(v237),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v239 == 0) {
    goto LABEL_419;
  }
  v240 = a1[29];
  if (v240 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v240 + 24);
    v241 = v240 + 152;
    if ((_DWORD)v2 == 0) {
      v241 = 0;
    }
    v242 = v241 != a1[31];
  }
  else {
    v242 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v239 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v242) {
      goto LABEL_419;
    }
  LABEL_429:
    v238 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_421;
    }
    goto LABEL_430;
  }
  v247 = v239;
  (*(void (**)(__int64))(*(_QWORD*)v239 + 16LL))(v239),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v247),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v242) {
    goto LABEL_429;
  }
LABEL_419:
  v243 = a1[30];
  if (v243 == 0) {
    v246 = 0;
    v238 = 0;
    if (a1[31] == 0) {
      goto LABEL_450;
    }
  LABEL_431:
    v248 = a1[30];
    if (v248 == 0) {
      goto LABEL_450;
    }
    v309 = v246;
    v321 = v238;
    v249 = std___1___shared_weak_count_lock(v248),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v249 != 0) {
      v250 = a1[29];
      if (v250 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v250 + 24);
        v251 = v250 + 152;
        if ((_DWORD)v2 == 0) {
          v251 = 0;
        }
        v252 = v251 != a1[31];
      }
      else {
        v252 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v249 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v252) {
          goto LABEL_440;
        }
      }
      else {
        v254 = v249;
        (*(void (**)(__int64))(*(_QWORD*)v249 + 16LL))(v249),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v254),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v252) {
          goto LABEL_440;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_450;
      }
    LABEL_445:
      v255 = a1[31];
      if (v255 != 0) {
        v256 = GameRoutine_155f760((__int64)(a1 + 29), v255, "L_Record05"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v257).n128_u32[0] = v321;
        if (v256 != 0) {
          v258 = *(int32x2_t**)(v256 + 24);
          LANES128(v257).n128_u32[1] = -998637568;
          LANES128(v257).n128_u64[1] = v309;
          if (v258 != nullptr) {
            LANES128(v259).n128_u64[0] =
                LANES64_OF(vzip2_s32(v258[15], v258[17])).n64_u64[0];
            LANES128(v259).n128_u64[1] = LANES64(v258[19]).n64_u32[1];
            v257 = vsubq_f32(v257, v259);
          }
          *(_QWORD*)(v256 + 48) = LANES128(v257).n128_u64[0];
          *(_DWORD*)(v256 + 56) = LANES128(v257).n128_u32[2];
          *(_BYTE*)(v256 + 88) |= 0x10u;
        }
      }
      goto LABEL_450;
    }
  LABEL_440:
    v253 = a1[30];
    if (v253 == 0 || *(_QWORD*)(v253 + 8) == -1) {
      goto LABEL_450;
    }
    goto LABEL_445;
  }
  v238 = 0;
  if (*(_QWORD*)(v243 + 8) == -1) {
  LABEL_430:
    v246 = 0;
    if (a1[31] == 0) {
      goto LABEL_450;
    }
    goto LABEL_431;
  }
LABEL_421:
  v244 = a1[31];
  if (v244 != 0) {
    v245 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v244, "L_Record05"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v238 = 0;
    v246 = 0;
    if (v245 != nullptr) {
      v238 = LANES128_OF(vdupq_laneq_s32(v245[7], 3)).n128_u32[0];
      v246 = LANES128(v245[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_431;
    }
  }
LABEL_450:
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29), (__int64)"L_Record06",
                                   0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    goto LABEL_491;
  }
  v260 = a1[30];
  v261 = 0;
  if (v260 == 0) {
    goto LABEL_471;
  }
  v262 = std___1___shared_weak_count_lock(v260),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v262 == 0) {
    goto LABEL_460;
  }
  v263 = a1[29];
  if (v263 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v263 + 24);
    v264 = v263 + 152;
    if ((_DWORD)v2 == 0) {
      v264 = 0;
    }
    v265 = v264 != a1[31];
  }
  else {
    v265 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v262 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v265) {
      goto LABEL_460;
    }
  LABEL_470:
    v261 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_462;
    }
    goto LABEL_471;
  }
  v270 = v262;
  (*(void (**)(__int64))(*(_QWORD*)v262 + 16LL))(v262),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak(v270),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v265) {
    goto LABEL_470;
  }
LABEL_460:
  v266 = a1[30];
  if (v266 == 0) {
    v269 = 0;
    v261 = 0;
    if (a1[31] == 0) {
      goto LABEL_491;
    }
  LABEL_472:
    v271 = a1[30];
    if (v271 == 0) {
      goto LABEL_491;
    }
    v310 = v269;
    v322 = v261;
    v272 = std___1___shared_weak_count_lock(v271),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v272 != 0) {
      v273 = a1[29];
      if (v273 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v273 + 24);
        v274 = v273 + 152;
        if ((_DWORD)v2 == 0) {
          v274 = 0;
        }
        v275 = v274 != a1[31];
      }
      else {
        v275 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v272 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v275) {
          goto LABEL_481;
        }
      }
      else {
        v277 = v272;
        (*(void (**)(__int64))(*(_QWORD*)v272 + 16LL))(v272),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v277),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v275) {
          goto LABEL_481;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        goto LABEL_491;
      }
    LABEL_486:
      v278 = a1[31];
      if (v278 != 0) {
        v279 = GameRoutine_155f760((__int64)(a1 + 29), v278, "L_Record06"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v280).n128_u32[0] = v322;
        if (v279 != 0) {
          v281 = *(int32x2_t**)(v279 + 24);
          LANES128(v280).n128_u32[1] = -998637568;
          LANES128(v280).n128_u64[1] = v310;
          if (v281 != nullptr) {
            LANES128(v282).n128_u64[0] =
                LANES64_OF(vzip2_s32(v281[15], v281[17])).n64_u64[0];
            LANES128(v282).n128_u64[1] = LANES64(v281[19]).n64_u32[1];
            v280 = vsubq_f32(v280, v282);
          }
          *(_QWORD*)(v279 + 48) = LANES128(v280).n128_u64[0];
          *(_DWORD*)(v279 + 56) = LANES128(v280).n128_u32[2];
          *(_BYTE*)(v279 + 88) |= 0x10u;
        }
      }
      goto LABEL_491;
    }
  LABEL_481:
    v276 = a1[30];
    if (v276 == 0 || *(_QWORD*)(v276 + 8) == -1) {
      goto LABEL_491;
    }
    goto LABEL_486;
  }
  v261 = 0;
  if (*(_QWORD*)(v266 + 8) == -1) {
  LABEL_471:
    v269 = 0;
    if (a1[31] == 0) {
      goto LABEL_491;
    }
    goto LABEL_472;
  }
LABEL_462:
  v267 = a1[31];
  if (v267 != 0) {
    v268 =
        (int32x4_t*)GameRoutine_155f760((__int64)(a1 + 29), v267, "L_Record06"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v261 = 0;
    v269 = 0;
    if (v268 != nullptr) {
      v261 = LANES128_OF(vdupq_laneq_s32(v268[7], 3)).n128_u32[0];
      v269 = LANES128(v268[9]).n128_u32[3];
    }
    if (a1[31] != 0) {
      goto LABEL_472;
    }
  }
LABEL_491:
  result = ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 29),
                                            (__int64)"L_Record07", 0),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a1[31] == 0) {
    return result;
  }
  result = a1[30];
  v284 = 0;
  if (result == 0) {
    goto LABEL_512;
  }
  result = std___1___shared_weak_count_lock(result),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result == 0) {
    goto LABEL_501;
  }
  v285 = a1[29];
  if (v285 != 0) {
    LODWORD(v2) = *(unsigned __int8*)(v285 + 24);
    v286 = v285 + 152;
    if ((_DWORD)v2 == 0) {
      v286 = 0;
    }
    v287 = v286 != a1[31];
  }
  else {
    v287 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v287) {
      goto LABEL_501;
    }
  LABEL_511:
    v284 = 0;
    if (((unsigned __int8)v2 & 1) != 0) {
      goto LABEL_503;
    }
    goto LABEL_512;
  }
  v291 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  result = std___1___shared_weak_count___release_weak(v291),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
  if (!v287) {
    goto LABEL_511;
  }
LABEL_501:
  v288 = a1[30];
  if (v288 == 0) {
    v290 = 0;
    v284 = 0;
    if (a1[31] == 0) {
      return result;
    }
  LABEL_513:
    result = a1[30];
    if (result == 0) {
      return result;
    }
    v311 = v290;
    v323 = v284;
    result = std___1___shared_weak_count_lock(result),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    if (result != 0) {
      v292 = a1[29];
      if (v292 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v292 + 24);
        v293 = v292 + 152;
        if ((_DWORD)v2 == 0) {
          v293 = 0;
        }
        v294 = v293 != a1[31];
      }
      else {
        v294 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v294) {
          goto LABEL_522;
        }
      }
      else {
        v296 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        result = std___1___shared_weak_count___release_weak(v296),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v294) {
          goto LABEL_522;
        }
      }
      if (((unsigned __int8)v2 & 1) == 0) {
        return result;
      }
    LABEL_527:
      v297 = a1[31];
      if (v297 != 0) {
        result = GameRoutine_155f760((__int64)(a1 + 29), v297, "L_Record07"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
        LANES128(v298).n128_u32[0] = v323;
        if (result != 0) {
          v299 = *(int32x2_t**)(result + 24);
          LANES128(v298).n128_u32[1] = -998637568;
          LANES128(v298).n128_u64[1] = v311;
          if (v299 != nullptr) {
            LANES128(v300).n128_u64[0] =
                LANES64_OF(vzip2_s32(v299[15], v299[17])).n64_u64[0];
            LANES128(v300).n128_u64[1] = LANES64(v299[19]).n64_u32[1];
            v298 = vsubq_f32(v298, v300);
          }
          *(_QWORD*)(result + 48) = LANES128(v298).n128_u64[0];
          *(_DWORD*)(result + 56) = LANES128(v298).n128_u32[2];
          *(_BYTE*)(result + 88) |= 0x10u;
        }
      }
      return result;
    }
  LABEL_522:
    v295 = a1[30];
    if (v295 == 0 || *(_QWORD*)(v295 + 8) == -1) {
      return result;
    }
    goto LABEL_527;
  }
  v284 = 0;
  if (*(_QWORD*)(v288 + 8) == -1) {
  LABEL_512:
    v290 = 0;
    if (a1[31] == 0) {
      return result;
    }
    goto LABEL_513;
  }
LABEL_503:
  v289 = a1[31];
  if (v289 != 0) {
    result = GameRoutine_155f760((__int64)(a1 + 29), v289, "L_Record07"),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s1", "=w"));
    v284 = 0;
    v290 = 0;
    if (result != 0) {
      v284 = LANES128_OF(vdupq_laneq_s32(*(int32x4_t*)(result + 112), 3))
                 .n128_u32[0];
      v290 = *(unsigned int*)(result + 156);
    }
    if (a1[31] != 0) {
      goto LABEL_513;
    }
  }
  return result;
}

__int64 game_19b2e40(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 i;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  int v26;
  char* v27;
  __int64* v28;
  int v29;
  unsigned int v30;
  __int64* v31;
  __int64 v32;
  char* v33;
  char* v34;
  __int64 v35;
  char* v36;
  char* v37;
  __int64 v38;
  char* v39;
  __int64* v40;
  char* v41;
  char* v42;
  __int64 v43;
  char* v44;
  const char* v45;
  __int64 v46;
  __int64 v47;
  _BYTE* v48;
  __int64* v49;
  char* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _BYTE* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  const char* v64;
  __int64 v65;
  const char* v66;
  __int64 v67;
  _BYTE* v68;
  __int64 v69;
  char* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  char* v73;
  _QWORD* v74;
  __int64 v75;
  const char* v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  const char* v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  char** v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  char** v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64* v131;
  char v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  _QWORD* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  _BOOL4 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  int32x4_t* v153;
  __int64* v154;
  int v155;
  __int64 v156;
  unsigned __int8** v157;
  float v158;
  unsigned __int8* v159;
  __int64 v160;
  unsigned __int8* v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  __int64 v169;
  _BOOL4 v170;
  unsigned __int8* v171;
  __int64 v172;
  float v173;
  float v174;
  float v175;
  __int64 v176;
  unsigned __int8* v177;
  __int64 v178;
  float v179;
  float v180;
  float v181;
  __int64 v182;
  __int64 v183;
  int v184;
  unsigned __int8* v185;
  __int64 v186;
  unsigned __int64 v187;
  __int64 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  unsigned __int8* v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  _QWORD* v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 result;
  __int64 v206;
  __int64 v207;
  __int64* v208;
  __int64* v209;
  __int64 v210;
  _QWORD* v211;
  char* v212;
  atomic_ullong* v213;
  atomic_ullong* v214;
  unsigned __int8** v215;
  struct {
    __int64 v216;
    unsigned __int64 v217;
    __int64 v218;
  } v216_;
  _QWORD v219[4];
  struct {
    __int64* v220;
    __int64 v221;
    unsigned __int64 v222;
    __int64 (*v223)();
    unsigned __int64 v224;
  } v220_;
  struct {
    _BYTE v225[96];
    __int64 v226;
    char gap288_[152];
    _BYTE* v227;
  } v225_;
  struct {
    __int64** v228;
    __int64 v229;
    _QWORD* v230;
    __int64 v231;
  } v228_;
  struct {
    char v232[8];
    char v233;
  } v232_;
  struct {
    _QWORD v234[2];
    int v235;
    char gap516_[4];
    __int64 v236;
    __int64 v237;
    char gap536_[16];
    __int64* j;
  } v234_;

  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = a1;
  v3 = *(_QWORD*)(a1[26] + 8LL);
  v4 = *(_QWORD*)(v3 + 16);
  v5 = *(_QWORD*)(v3 + 24);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = v5 - v4;
  if (v5 == v4) {
    v20 = nullptr;
    v8 = 0;
  }
  else {
    if (0xAAAAAAAAAAAAAAABLL * (v7 >> 5) >= 0x2AAAAAAAAAAAAABLL) {
      GameRoutine_9a0990(),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v7, 16, 0),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v1 = 0;
    v9 = GameData_212dea8 + 2;
    do {
      v12 = v8 + v1;
      v13 = *(_QWORD*)(v4 + v1 + 8);
      *(_QWORD*)v12 = *(_QWORD*)(v4 + v1);
      *(_QWORD*)(v12 + 8) = v13;
      v14 = *(_QWORD*)(v4 + v1 + 16);
      v15 = *(_QWORD*)(v4 + v1 + 24);
      v16 = *(_QWORD*)(v4 + v1 + 32);
      v17 = *(_QWORD*)(v4 + v1 + 40);
      *(_QWORD*)(v12 + 48) = v9;
      *(_QWORD*)(v12 + 32) = v16;
      *(_QWORD*)(v12 + 40) = v17;
      *(_QWORD*)(v12 + 16) = v14;
      *(_QWORD*)(v12 + 24) = v15;
      if ((*(_BYTE*)(v4 + v1 + 56) & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)(v12 + 56),
                                      *(_QWORD*)(v4 + v1 + 72),
                                      *(_QWORD*)(v4 + v1 + 64)),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      else {
        v18 = *(_QWORD*)(v4 + v1 + 56);
        v19 = *(_QWORD*)(v4 + v1 + 72);
        *(_QWORD*)(v12 + 64) = *(_QWORD*)(v4 + v1 + 64);
        *(_QWORD*)(v12 + 72) = v19;
        *(_QWORD*)(v12 + 56) = v18;
      }
      v10 = v4 + v1;
      v1 += 96;
      v11 = *(_DWORD*)(v10 + 80);
      *(_BYTE*)(v12 + 84) = *(_BYTE*)(v10 + 84);
      *(_DWORD*)(v12 + 80) = v11;
      *(_WORD*)(v12 + 88) = *(_WORD*)(v10 + 88);
    } while (v4 + v1 != v5);
    v20 = (__int64*)(v8 + v1);
  }
  v21 = v2[19];
  for (i = v2[20]; i != v21; i -= 16) {
    v1 = *(_QWORD*)(i - 8);
    if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak(v1),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  v2[20] = v21;
  v211 = v2;
  if ((__int64*)v8 == v20) {
    if (v20 != nullptr) {
      goto LABEL_230;
    }
    goto LABEL_233;
  }
  v23 = (__int64*)v8;
  v206 = v8;
  v208 = v20;
  v209 = GameData_212e348 + 2;
  do {
    v25 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 248, 16, 0),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v25[1] = 0;
    v25[2] = 0;
    v26 = *((unsigned __int8*)v23 + 1);
    v1 = (__int64)v25;
    *v25 = GameData_2120738;
    v25[4] = 0;
    v25[5] = 0;
    v214 = (atomic_ullong*)(v25 + 1);
    v25[3] = 0;
    v27 = (char*)(v25 + 3);
    v25[6] = 0;
    v25[7] = 0;
    v25[8] = 0;
    v25[9] = 0;
    v25[10] = 0;
    v25[11] = 0;
    v25[12] = 0;
    v25[13] = 0;
    v28 = v23;
    v29 = *(unsigned __int8*)v23;
    v30 = *((unsigned __int8*)v28 + 2);
    v25[14] = 0;
    v25[15] = 0;
    v25[16] = 0;
    v25[17] = 0;
    v25[18] = 0;
    v25[19] = 0;
    v25[20] = 0;
    v25[21] = 0;
    v25[22] = 0;
    v25[23] = 0;
    v25[24] = 0;
    v25[25] = 0;
    v25[26] = 0;
    v25[27] = 0;
    v234_.j = v28;
    v25[28] = 0;
    v25[29] = 0;
    v31 = msg_MessageManager_instance__ptr[0];
    v32 = *msg_MessageManager_instance__ptr[0];
    v25[30] = 0;
    v33 = game_util_Format("MCID_part_%d", v26),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    memset(v225_.v225, 255, sizeof(v225_.v225));
    v220_.v220 = v209;
    v220_.v221 = 0xFFFF0001FFFF0000LL;
    v220_.v222 = 0xFFFF0004FFFF0002LL;
    v220_.v223 = (__int64 (*)())0xFFFF0006FFFF0005LL,
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v225_.v226 = 8;
    v220_.v224 = 0xFFFF0008FFFF0007LL;
    v34 = GameRoutine_a4dbe0(v32, v33, 0),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v212 = v27;
    GameRoutine_60a020(v27, v34),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v35 = *v31;
    if (v26 > 1) {
      if (v26 == 2) {
        v37 = "ID_Sys_Physicalattack";
      }
      else if (v26 == 3) {
        v37 = "_EXFont_MouseR_Up";
      }
      else {
        v37 = nullptr;
      }
    }
    else if (v26 != 0) {
      GameConst_7f8880((void*)((__int64*)&v220_.v220)),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      if (((unsigned __int8)v220_.v220 & 1) != 0) {
        v36 = (char*)v220_.v222;
      }
      else {
        v36 = (char*)&v220_.v220 + 1;
      }
      v37 = game_util_Format("MCID_episode_%s", v36),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      if (((unsigned __int8)v220_.v220 & 1) != 0 && v220_.v222 != 0) {
        v38 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v220_.v222),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    else {
      v37 = "MCID_chapter_28";
    }
    memset(v225_.v225, 255, sizeof(v225_.v225));
    v220_.v220 = GameData_212e348 + 2;
    v220_.v221 = 0xFFFF0001FFFF0000LL;
    v220_.v222 = 0xFFFF0004FFFF0002LL;
    v220_.v223 = (__int64 (*)())0xFFFF0006FFFF0005LL,
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v225_.v226 = 8;
    v220_.v224 = 0xFFFF0008FFFF0007LL;
    v39 = GameRoutine_a4dbe0(v35, v37, 0),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    GameRoutine_60a020((char*)(v1 + 48), v39),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v26 == 3 && v30 == 7) {
      v40 = msg_MessageManager_instance__ptr[0];
      v207 = *msg_MessageManager_instance__ptr[0];
      v41 = game_util_Format("ll", 7),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      memset(v225_.v225, 255, sizeof(v225_.v225));
      v220_.v222 = 0xFFFF0004FFFF0002LL;
      v220_.v223 = (__int64 (*)())0xFFFF0006FFFF0005LL,
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v225_.v226 = 8;
      v220_.v220 = GameData_212e348 + 2;
      v220_.v221 = 0xFFFF0001FFFF0000LL;
      v220_.v224 = 0xFFFF0008FFFF0007LL;
      v42 = GameRoutine_a4dbe0(v207, v41, 0),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    else {
      v43 = *msg_MessageManager_instance__ptr[0];
      if (v26 != 0 || (v44 = "MID_Sys_Avoid", v30 != 3)) {
        if (v26 != 1 || v29 != 7 || (v44 = "MCID_chapter_Ex02", v30 != 13)) {
          v45 = "MCID_chapter_Sect%02d";
          v46 = *msg_MessageManager_instance__ptr[0];
          if ((unsigned int)v26 < 3) {
            v45 = "Sys_ItemStatus_Skill";
          }
          v44 = game_util_Format(v45, v30),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
          v43 = v46;
        }
      }
      memset(v225_.v225, 255, sizeof(v225_.v225));
      v220_.v222 = 0xFFFF0004FFFF0002LL;
      v220_.v223 = (__int64 (*)())0xFFFF0006FFFF0005LL,
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v220_.v220 = GameData_212e348 + 2;
      v220_.v221 = 0xFFFF0001FFFF0000LL;
      v220_.v224 = 0xFFFF0008FFFF0007LL;
      v225_.v226 = 8;
      v42 = GameRoutine_a4dbe0(v43, v44, 0),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v40 = msg_MessageManager_instance__ptr[0];
    }
    GameRoutine_60a020((char*)(v1 + 72), v42),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    memset(v225_.v225, 255, sizeof(v225_.v225));
    v47 = *v40;
    v48 = *(_BYTE**)(v234_.j[2] + 80);
    v220_.v222 = 0xFFFF0004FFFF0002LL;
    v220_.v223 = (__int64 (*)())0xFFFF0006FFFF0005LL,
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v225_.v226 = 8;
    v220_.v224 = 0xFFFF0008FFFF0007LL;
    v220_.v220 = GameData_212e348 + 2;
    v220_.v221 = 0xFFFF0001FFFF0000LL;
    v49 = v234_.j;
    v50 = GameRoutine_a4dbe0(v47, v48, 0),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    GameRoutine_60a020((char*)(v1 + 96), v50),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v51 = *((unsigned __int16*)v49 + 2);
    v220_.v224 = 0;
    v225_.v227 = v225_.v225;
    v234_.v235 = 0;
    v232_.v232[0] = 0;
    v232_.v233 = 0;
    v220_.v220 = (__int64*)v225_.v225;
    v220_.v221 = 256;
    v219[1] = 0;
    v219[2] = 6;
    v220_.v222 = 0;
    v220_.v223 = GameRoutine_64be60;
    v219[0] = v51;
    v234_.v234[0] = &GameData_1a974d5;
    v234_.v234[1] = &GameData_1a974d7;
    v234_.v236 = 0;
    v234_.v237 = 1;
    v228_.v229 = 1;
    v228_.v230 = v219;
    v228_.v231 = 6;
    v228_.v228 = &v220_.v220;
    GameRoutine_6380e0((__int64)v234_.v234, (__int64**)&v228_.v228),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v232_.v233 == 1) {
      std___1_locale_Destroy_locale((__int64)v232_.v232),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v52 = v220_.v222;
    if (v220_.v222 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_339:
      String_60a1d0(),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v53 = (__int64)v225_.v227;
    if (v220_.v222 >= 0x17) {
      if ((v220_.v222 | 7) == 0x17) {
        v55 = 26;
      }
      else {
        v55 = (v220_.v222 | 7) + 1;
      }
      v56 = fw_memory_HeapManager_Allocate(*v6, v55, 16, 0),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v57 = v55 | 1;
      v49 = v234_.j;
      v54 = (char*)v56;
      v216_.v217 = v52;
      v216_.v218 = v56;
      v216_.v216 = v57;
    }
    else {
      v54 = (char*)&v216_.v216 + 1;
      LOBYTE(v216_.v216) = 2 * v220_.v222;
      if (v220_.v222 == 0) {
        goto LABEL_59;
      }
    }
    memmove((__int64)v54, v53, v52),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  LABEL_59:
    v58 = v225_.v227;
    v54[v52] = 0;
    if (v58 != v225_.v225 && v58 != nullptr) {
      v59 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v59, (__int64)v58),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if ((*(_BYTE*)(v1 + 120) & 1) != 0) {
      v60 = *(_QWORD*)(v1 + 136);
      if (v60 != 0) {
        v61 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v61 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v61, v60),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    v62 = v216_.v217;
    *(_QWORD*)(v1 + 120) = v216_.v216;
    *(_QWORD*)(v1 + 128) = v62;
    *(_QWORD*)(v1 + 136) = v216_.v218;
    v63 = v49[3];
    if (v63 != 0) {
      v64 = *(const char**)(v63 + 8);
    }
    else {
      v64 = &GameData_1a9f09e;
    }
    GameRoutine_60a020((char*)(v1 + 168), v64),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v65 = v49[5];
    if (v65 != 0) {
      v66 = *(const char**)(v65 + 8);
    }
    else {
      v66 = &GameData_1a9f09e;
    }
    GameRoutine_60a020((char*)(v1 + 216), v66),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v67 = v49[4];
    if (v67 == 0 || (v68 = *(_BYTE**)(v67 + 72)) == nullptr || *v68 == 0) {
      v74 = (_QWORD*)v49[3];
      if (v74 == nullptr) {
      LABEL_86:
        v76 = &GameData_1a9f09e;
        goto LABEL_134;
      }
      v75 = *(_QWORD*)(v74[3] + 1784LL);
      if (v75 != 0) {
        if (v75 == game_GetHero(9u)) {
          GameRoutine_682bc0(&v220_.v220, (__int64)&GameData_1a90b0d),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          if (v220_.v220 != nullptr) {
            v80 = *(_QWORD*)(GameData_21ca310 + 56);
            if (v80 != 0) {
              v81 = 250;
              while (1) {
                v82 = *(_QWORD*)(v80 + 440);
                if (v82 != 0 && *(_BYTE*)(v82 + 16) != 9 &&
                    *(__int64**)(v80 + 392) == v220_.v220) {
                  break;
                }
                v83 = *(_QWORD*)(v80 + 2664);
                if (v83 != 0 && *(_BYTE*)(v83 + 16) != 9 &&
                    *(__int64**)(v80 + 2616) == v220_.v220) {
                  v80 += 2224;
                  break;
                }
                v84 = *(_QWORD*)(v80 + 4888);
                if (v84 != 0 && *(_BYTE*)(v84 + 16) != 9 &&
                    *(__int64**)(v80 + 4840) == v220_.v220) {
                  v80 += 4448;
                  break;
                }
                v85 = *(_QWORD*)(v80 + 7112);
                if (v85 != 0 && *(_BYTE*)(v85 + 16) != 9 &&
                    *(__int64**)(v80 + 7064) == v220_.v220) {
                  v80 += 6672;
                  break;
                }
                v86 = *(_QWORD*)(v80 + 9336);
                if (v86 != 0 && *(_BYTE*)(v86 + 16) != 9 &&
                    *(__int64**)(v80 + 9288) == v220_.v220) {
                  v80 += 8896;
                  break;
                }
                v87 = *(_QWORD*)(v80 + 11560);
                if (v87 != 0 && *(_BYTE*)(v87 + 16) != 9 &&
                    *(__int64**)(v80 + 11512) == v220_.v220) {
                  v80 += 11120;
                  break;
                }
                v88 = *(_QWORD*)(v80 + 13784);
                if (v88 != 0 && *(_BYTE*)(v88 + 16) != 9 &&
                    *(__int64**)(v80 + 13736) == v220_.v220) {
                  v80 += 13344;
                  break;
                }
                v89 = *(_QWORD*)(v80 + 16008);
                if (v89 != 0 && *(_BYTE*)(v89 + 16) != 9 &&
                    *(__int64**)(v80 + 15960) == v220_.v220) {
                  v80 += 15568;
                  break;
                }
                v90 = *(_QWORD*)(v80 + 18232);
                if (v90 != 0 && *(_BYTE*)(v90 + 16) != 9 &&
                    *(__int64**)(v80 + 18184) == v220_.v220) {
                  v80 += 17792;
                  break;
                }
                v91 = *(_QWORD*)(v80 + 20456);
                if (v91 != 0 && *(_BYTE*)(v91 + 16) != 9 &&
                    *(__int64**)(v80 + 20408) == v220_.v220) {
                  v80 += 20016;
                  break;
                }
                v81 -= 10;
                v80 += 22240;
                if (v81 == 0) {
                  goto LABEL_128;
                }
              }
            }
          }
          else {
          LABEL_128:
            v80 = 0;
          }
          if (*(_BYTE*)(v80 + 2136) != 0) {
            v92 = (const char*)game_97b2f0(v80 + 2104),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
          LABEL_133:
            v76 = v92;
          LABEL_134:
            v93 = strlen(v76),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v93 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_339;
            }
            v94 = v93;
            if (v93 >= 0x17) {
              if ((v93 | 7) == 0x17) {
                v96 = 26;
              }
              else {
                v96 = (v93 | 7) + 1;
              }
              v97 = fw_memory_HeapManager_Allocate(*v6, v96, 16, 0),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(float, "s1", "=w"));
              v98 = (__int64*)(v96 | 1);
              v49 = v234_.j;
              v95 = (char*)v97;
              v228_.v229 = v94;
              v228_.v230 = (_QWORD*)v97;
              v228_.v228 = (__int64**)v98;
            }
            else {
              v95 = (char*)&v228_.v228 + 1;
              LOBYTE(v228_.v228) = 2 * v93;
              if (v93 == 0) {
                goto LABEL_143;
              }
            }
            memmove((__int64)v95, (__int64)v76, v94),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v179 = COERCE_AS(__typeof__(v179),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          LABEL_143:
            v95[v94] = 0;
            goto LABEL_144;
          }
          v74 = *(_QWORD**)(v80 + 392);
        }
        else {
          v74 = (_QWORD*)v49[3];
          if (v74 == nullptr) {
            goto LABEL_86;
          }
        }
      }
      v92 = GameHr_67ed20(v74),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      goto LABEL_133;
    }
    v69 = *msg_MessageManager_instance__ptr[0];
    memset(v225_.v225, 255, sizeof(v225_.v225));
    v220_.v220 = GameData_212e348 + 2;
    v220_.v221 = 0xFFFF0001FFFF0000LL;
    v220_.v222 = 0xFFFF0004FFFF0002LL;
    v220_.v223 = (__int64 (*)())0xFFFF0006FFFF0005LL,
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v225_.v226 = 8;
    v220_.v224 = 0xFFFF0008FFFF0007LL;
    v70 = GameRoutine_a4dbe0(v69, v68, 0),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    v71 = strlen(v70),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v71 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_339;
    }
    v72 = v71;
    if (v71 >= 0x17) {
      if ((v71 | 7) == 0x17) {
        v77 = 26;
      }
      else {
        v77 = (v71 | 7) + 1;
      }
      v78 = fw_memory_HeapManager_Allocate(*v6, v77, 16, 0),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v79 = (__int64*)(v77 | 1);
      v49 = v234_.j;
      v73 = (char*)v78;
      v228_.v229 = v72;
      v228_.v230 = (_QWORD*)v78;
      v228_.v228 = (__int64**)v79;
    }
    else {
      v73 = (char*)&v228_.v228 + 1;
      LOBYTE(v228_.v228) = 2 * v71;
      if (v71 == 0) {
        goto LABEL_92;
      }
    }
    memmove((__int64)v73, (__int64)v70, v72),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  LABEL_92:
    v73[v72] = 0;
  LABEL_144:
    v2 = v211;
    if ((*(_BYTE*)(v1 + 144) & 1) != 0) {
      v99 = *(_QWORD*)(v1 + 160);
      if (v99 != 0) {
        v100 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v100, v99),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    v101 = (__int64*)v228_.v228;
    v102 = v228_.v229;
    *(_QWORD*)(v1 + 240) = 0;
    *(_QWORD*)(v1 + 144) = v101;
    *(_QWORD*)(v1 + 152) = v102;
    *(_QWORD*)(v1 + 160) = v228_.v230;
    v103 = v49[3];
    if (v103 != 0) {
      v104 = *(_QWORD*)(*(_QWORD*)(v103 + 24) + 1784LL);
      if (v104 != 0 && v104 == game_GetHero(9u)) {
        GameRoutine_682bc0(&v220_.v220, (__int64)&GameData_1a90b0d),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v220_.v220 != nullptr) {
          v105 = *(_QWORD**)(GameData_21ca310 + 56);
          if (v105 != nullptr) {
            v106 = 250;
            while (1) {
              v107 = v105[55];
              if (v107 != 0 && *(_BYTE*)(v107 + 16) != 9 &&
                  (__int64*)v105[49] == v220_.v220) {
                break;
              }
              v108 = v105[333];
              if (v108 != 0 && *(_BYTE*)(v108 + 16) != 9 &&
                  (__int64*)v105[327] == v220_.v220) {
                v105 += 278;
                break;
              }
              v109 = v105[611];
              if (v109 != 0 && *(_BYTE*)(v109 + 16) != 9 &&
                  (__int64*)v105[605] == v220_.v220) {
                v105 += 556;
                break;
              }
              v110 = v105[889];
              if (v110 != 0 && *(_BYTE*)(v110 + 16) != 9 &&
                  (__int64*)v105[883] == v220_.v220) {
                v105 += 834;
                break;
              }
              v111 = v105[1167];
              if (v111 != 0 && *(_BYTE*)(v111 + 16) != 9 &&
                  (__int64*)v105[1161] == v220_.v220) {
                v105 += 1112;
                break;
              }
              v112 = v105[1445];
              if (v112 != 0 && *(_BYTE*)(v112 + 16) != 9 &&
                  (__int64*)v105[1439] == v220_.v220) {
                v105 += 1390;
                break;
              }
              v113 = v105[1723];
              if (v113 != 0 && *(_BYTE*)(v113 + 16) != 9 &&
                  (__int64*)v105[1717] == v220_.v220) {
                v105 += 1668;
                break;
              }
              v114 = v105[2001];
              if (v114 != 0 && *(_BYTE*)(v114 + 16) != 9 &&
                  (__int64*)v105[1995] == v220_.v220) {
                v105 += 1946;
                break;
              }
              v115 = v105[2279];
              if (v115 != 0 && *(_BYTE*)(v115 + 16) != 9 &&
                  (__int64*)v105[2273] == v220_.v220) {
                v105 += 2224;
                break;
              }
              v116 = v105[2557];
              if (v116 != 0 && *(_BYTE*)(v116 + 16) != 9 &&
                  (__int64*)v105[2551] == v220_.v220) {
                v105 += 2502;
                break;
              }
              v106 -= 10;
              v105 += 2780;
              if (v106 == 0) {
                goto LABEL_187;
              }
            }
          }
        }
        else {
        LABEL_187:
          v105 = nullptr;
        }
        *(_QWORD*)(v1 + 240) = v105;
      }
    }
    v117 = (char**)v211[20];
    v118 = v211[21];
    if ((unsigned __int64)v117 >= v118) {
      v120 = v211[19];
      v121 = (unsigned __int64)v117 - v120;
      v122 = ((__int64)v117 - v120) >> 4;
      v123 = v122 + 1;
      if ((unsigned __int64)(v122 + 1) >> 60 != 0) {
        GameRoutine_19b4ac0(),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v124 = v118 - v120;
      if (v124 >> 3 > v123) {
        v123 = v124 >> 3;
      }
      if ((unsigned __int64)v124 >= 0x7FFFFFFFFFFFFFF0LL) {
        v125 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v125 = v123;
      }
      if (v125 >> 60 != 0) {
        GameRoutine_60a210(),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v126 = fw_memory_HeapManager_Allocate(*v6, 16 * v125, 16, 0),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v127 = (char**)(v126 + v121);
      v128 = v126 + 16 * v125;
      v129 = v126 + v121 - 16 * v122;
      v119 = v126 + v121 + 16;
      *v127 = v212;
      v127[1] = (char*)v1;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v129, v120, v121),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v211[19] = v129;
      v211[20] = v119;
      v2 = v211;
      v211[21] = v128;
      if (v120 != 0) {
        v130 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v130 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v130, v120),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    else {
      v119 = (__int64)(v117 + 2);
      *v117 = v27;
      v117[1] = (char*)v1;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
    }
    v2[20] = v119;
    if (atomic_fetch_add(v214, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak(v1),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v24 = v208;
    v23 = v234_.j + 12;
  } while (v234_.j + 12 != v208);
  v8 = v206;
  if (v206 != 0) {
    LOBYTE(v1) = 0x80;
    v131 = GameData_212dea8 + 2;
    do {
      v132 = *((_BYTE*)v24 - 40);
      *(v24 - 6) = (__int64)v131;
      if ((v132 & 1) != 0) {
        v133 = *(v24 - 3);
        if (v133 != 0) {
          if (*(_QWORD*)(*v6 + 200) != 0) {
            v134 = 128;
          }
          else {
            v134 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v134, v133),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
      v24 -= 12;
    } while (v24 != (__int64*)v206);
  LABEL_230:
    v135 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v135 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v135, v8),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  }
LABEL_233:
  v136 = v2[22];
  v137 = v2[23];
  for (v234_.j = v2 + 22; v137 != v136; v137 -= 16) {
    v1 = *(_QWORD*)(v137 - 8);
    if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak(v1),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  v138 = *v6;
  v2[23] = v136;
  v139 = v2 + 29;
  v140 = (_QWORD*)fw_memory_HeapManager_Allocate(v138, 72, 16, 0),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  v140[1] = 0;
  v141 = v2[31];
  v142 = 0;
  v143 = (__int64)v140;
  v140[2] = 0;
  v140[6] = 0;
  v140[7] = v2 + 29;
  v213 = (atomic_ullong*)(v140 + 1);
  *v140 = GameData_2120788;
  v140[3] = game_anonymous_ProcWarRecordSeq_TitleDrawObj_vtable;
  v144 = v140 + 3;
  v140[8] = "Frm";
  if (v141 != 0) {
    v145 = v2[30];
    if (v145 != 0) {
      v146 = std___1___shared_weak_count_lock(v145),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v146 != 0) {
        v147 = *v139;
        if (*v139 != 0) {
          LODWORD(v1) = *(unsigned __int8*)(v147 + 24);
          v148 = v147 + 152;
          if ((_DWORD)v1 == 0) {
            v148 = 0;
          }
          v149 = v148 != v211[31];
        }
        else {
          v149 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v146 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v149) {
            goto LABEL_249;
          }
        }
        else {
          v151 = v146;
          (*(void (**)(__int64))(*(_QWORD*)v146 + 16LL))(v146),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v151),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          if (v149) {
            goto LABEL_249;
          }
        }
        v2 = v211;
        v142 = 0;
        if ((v1 & 1) != 0) {
        LABEL_254:
          v152 = v2[31];
          if (v152 != 0) {
            v153 = (int32x4_t*)GameRoutine_155f760((__int64)v139, v152, "Frm"),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
            v142 = 0;
            if (v153 != nullptr) {
              LODWORD(v142) =
                  LANES128_OF(vdupq_laneq_s32(v153[7], 3)).n128_u32[0];
              HIDWORD(v142) = HIDWORD(LANES128(v153[8]).n128_u64[1]);
            }
          }
        }
      }
      else {
      LABEL_249:
        v2 = v211;
        v142 = 0;
        v150 = v211[30];
        if (v150 != 0 && *(_QWORD*)(v150 + 8) != -1) {
          goto LABEL_254;
        }
      }
    }
  }
  v154 = v6;
  *(_QWORD*)(v143 + 32) = v142;
  *(float*)(v143 + 40) = ui_LayoutAccessor_GetPaneSize(v139, "Frm"),
                   v155 = COERCE_AS(__typeof__(v155),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                   v173 = COERCE_AS(__typeof__(v173),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                   v179 = COERCE_AS(__typeof__(v179),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
  *(_DWORD*)(v143 + 44) = v155;
  ui_LayoutAccessor_SetPaneVisible((__int64)v139, (__int64)"Frm", 0),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_SetPaneVisible((__int64)v139, (__int64)"Frm", 1),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  v220_.v220 = v144;
  v220_.v221 = v143;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v143 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_19b4ae0(v234_.j, &v220_.v220),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  v156 = v220_.v221;
  if (v220_.v221 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v220_.v221 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v156 + 16LL))(v156),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak(v156),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v157 = (unsigned __int8**)v2[19];
  v215 = (unsigned __int8**)v2[20];
  if (v157 != v215) {
    v158 = 0x0.0p+0f;
    v210 = v143;
    v159 = nullptr;
    v160 = 0;
    while (1) {
      if (v160 == 0 || *(_QWORD*)(v160 + 8) == -1) {
        goto LABEL_284;
      }
      v161 = *v157;
      v162 = std___1___shared_weak_count_lock(v160),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v163 = *v161;
      v164 = v162;
      if ((v163 & 1) != 0) {
        v165 = *((_QWORD*)v161 + 1);
      }
      else {
        v165 = v163 >> 1;
      }
      v166 = *v159;
      v167 = *((_QWORD*)v159 + 1);
      if ((v166 & 1) == 0) {
        v167 = v166 >> 1;
      }
      if (v165 != v167 || ((v163 & 1) == 0 ? (v168 = (__int64)(v161 + 1))
                                           : (v168 = *((_QWORD*)v161 + 2)),
                           (v166 & 1) == 0 ? (v169 = (__int64)(v159 + 1))
                                           : (v169 = *((_QWORD*)v159 + 2)),
                           memcmp(v168, v169, v165) != 0)) {
        v170 = true;
        goto LABEL_279;
      }
      v185 = *v157;
      v186 = std___1___shared_weak_count_lock(v160),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v187 = v185[24];
      v188 = v186;
      if ((v187 & 1) != 0) {
        v189 = *((_QWORD*)v185 + 4);
      }
      else {
        v189 = v187 >> 1;
      }
      v190 = v159[24];
      v191 = *((_QWORD*)v159 + 4);
      if ((v190 & 1) == 0) {
        v191 = v190 >> 1;
      }
      if (v189 == v191) {
        if (v186 != 0) {
          v192 = v159;
        }
        else {
          v192 = nullptr;
        }
        v193 = (__int64)(v192 + 25);
        if ((v187 & 1) != 0) {
          v194 = *((_QWORD*)v185 + 5);
        }
        else {
          v194 = (__int64)(v185 + 25);
        }
        if ((v190 & 1) != 0) {
          v195 = *((_QWORD*)v159 + 5);
        }
        else {
          v195 = v193;
        }
        v170 = memcmp(v194, v195, v189) != 0,
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v188 == 0) {
          goto LABEL_279;
        }
      }
      else {
        v170 = true;
        if (v186 == 0) {
          goto LABEL_279;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v188 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v188 + 16LL))(v188),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v188),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    LABEL_279:
      if (atomic_fetch_add((atomic_ullong* volatile)(v164 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v170) {
          goto LABEL_283;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v164 + 16LL))(v164),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v164),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v170) {
        LABEL_283:
          v158 = v158 - (float)(GameData_2272770 - GameData_227276c);
        LABEL_284:
          v171 = *v157;
          v172 = fw_memory_HeapManager_Allocate(*v154, 80, 16, 0),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
          *(_QWORD*)(v172 + 16) = 0;
          *(_QWORD*)(v172 + 32) = 0;
          *(_QWORD*)(v172 + 56) = v139;
          *(_QWORD*)(v172 + 64) = 0;
          *(_QWORD*)(v172 + 8) = 0;
          *(_QWORD*)v172 = GameData_2120838;
          *(_QWORD*)(v172 + 72) = v171;
          *(float*)(v172 + 36) = v158;
          *(_QWORD*)(v172 + 24) =
              game_anonymous_ProcWarRecordSeq_GroupDrawObj_vtable;
          *(float*)(v172 + 40) =
              ui_LayoutAccessor_GetPaneSize(v139, "L_Chapter00"),
                           v155 = COERCE_AS(__typeof__(v155),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                           v173 = COERCE_AS(__typeof__(v173),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                           v179 = COERCE_AS(__typeof__(v179),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
          *(float*)(v172 + 44) = v173;
          v220_.v220 = (__int64*)(v172 + 24);
          v220_.v221 = v172;
          v174 = (float)((float)(GameData_2272778 - GameData_2272774) -
                         (float)(v173 * 0x1.0000000000000p-1f)) +
                 -0x1.0000000000000p+4f;
          v175 = (float)((float)GameData_2272778 +
                         (float)(v173 * 0x1.0000000000000p-1f)) +
                 0x1.0000000000000p+4f;
          *(float*)(v172 + 48) = v174;
          *(float*)(v172 + 52) = v175;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v172 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_19b4ae0(v234_.j, &v220_.v220),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v176 = v220_.v221;
          if (v220_.v221 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v220_.v221 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v176 + 16LL))(v176),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v179 = COERCE_AS(__typeof__(v179),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v176),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v179 = COERCE_AS(__typeof__(v179),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v158 = v158 - (float)GameData_2272768;
          if (atomic_fetch_add((atomic_ullong* volatile)(v172 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v172 + 16LL))(v172),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v179 = COERCE_AS(__typeof__(v179),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak(v172),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(float, "s1", "=w")),
                v179 = COERCE_AS(__typeof__(v179),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
      }
      v177 = *v157;
      v178 = fw_memory_HeapManager_Allocate(*v154, 80, 16, 0),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      *(_QWORD*)(v178 + 16) = 0;
      *(_QWORD*)(v178 + 32) = 0;
      *(_QWORD*)(v178 + 56) = v139;
      *(_QWORD*)(v178 + 64) = 0;
      *(_QWORD*)(v178 + 8) = 0;
      *(_QWORD*)v178 = GameData_21208d8;
      *(_QWORD*)(v178 + 72) = v177;
      *(float*)(v178 + 36) = v158;
      *(_QWORD*)(v178 + 24) =
          game_anonymous_ProcWarRecordSeq_RecordDrawObj_vtable;
      *(float*)(v178 + 40) = ui_LayoutAccessor_GetPaneSize(v139, "L_Record00"),
                       v155 = COERCE_AS(__typeof__(v155),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                       v173 = COERCE_AS(__typeof__(v173),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                       v179 = COERCE_AS(__typeof__(v179),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
      *(float*)(v178 + 44) = v179;
      v220_.v220 = (__int64*)(v178 + 24);
      v220_.v221 = v178;
      v180 = (float)((float)(GameData_2272778 - GameData_2272774) -
                     (float)(v179 * 0x1.0000000000000p-1f)) +
             -0x1.0000000000000p+4f;
      v181 = (float)((float)GameData_2272778 +
                     (float)(v179 * 0x1.0000000000000p-1f)) +
             0x1.0000000000000p+4f;
      *(float*)(v178 + 48) = v180;
      *(float*)(v178 + 52) = v181;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v178 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_19b4ae0(v234_.j, &v220_.v220),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      v182 = v220_.v221;
      if (v220_.v221 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v220_.v221 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v182 + 16LL))(v182),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v182),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v159 = *v157;
      v183 = (__int64)v157[1];
      v184 = GameData_227276c;
      if (v183 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v183 + 16), 1u,
                                  memory_order_relaxed);
      }
      if (v160 != 0) {
        std___1___shared_weak_count___release_weak(v160),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v178 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v178 + 16LL))(v178),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v178),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
            v173 =
                COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
            v179 =
                COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      v157 += 2;
      v160 = v183;
      v158 = v158 - (float)v184;
      if (v157 == v215) {
        v143 = v210;
        v2 = v211;
        if (v183 != 0) {
          std___1___shared_weak_count___release_weak(v183),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(float, "s1", "=w")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(float, "s1", "=w"));
        }
        break;
      }
    }
  }
  if (atomic_fetch_add(v213, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak(v143),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  *((_DWORD*)v2 + 50) = 0;
  v196 = game_HashString((__int64)&GameData_1abe0f9),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  v197 = *GameData_212cde8[0];
  v198 = *(_QWORD*)(*GameData_212cde8[0] + 96);
  if ((v198 & (v198 - 1)) != 0) {
    v199 = v196;
    if (v196 >= v198) {
      v199 = v196 % v198;
    }
    v200 = *(_QWORD**)(*(_QWORD*)(v197 + 88) + 8 * v199);
    do {
      do {
        v200 = (_QWORD*)*v200;
      } while (v200[1] != v196);
    } while (v200[2] != v196);
  }
  else {
    v200 = *(_QWORD**)(*(_QWORD*)(v197 + 88) + 8 * ((v198 - 1) & v196));
    do {
      do {
        v200 = (_QWORD*)*v200;
      } while (v200[1] != v196);
    } while (v200[2] != v196);
  }
  v201 = *v154;
  *((_DWORD*)v2 + 51) = *(_DWORD*)(v200[3] + 32LL);
  v202 = fw_memory_HeapManager_Allocate(v201, 152, 16, 0),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  v203 = GameData_212c608[0];
  *(_QWORD*)(v202 + 96) = 0;
  *(_QWORD*)(v202 + 104) = 0;
  *(_QWORD*)(v202 + 112) = 0;
  *(_QWORD*)(v202 + 120) = 0;
  *(_QWORD*)(v202 + 128) = 0;
  *(_WORD*)(v202 + 136) = 0;
  *(_QWORD*)(v202 + 16) = 0;
  *(_QWORD*)(v202 + 24) = &GameData_1a85309;
  *(_QWORD*)(v202 + 138) = 0;
  *(_QWORD*)(v202 + 144) = 0;
  *(_QWORD*)(v202 + 32) = 0;
  *(_QWORD*)(v202 + 40) = 0;
  *(_QWORD*)(v202 + 48) = 0;
  *(_QWORD*)(v202 + 56) = 0;
  *(_QWORD*)(v202 + 64) = 0;
  *(_QWORD*)(v202 + 72) = 0;
  *(_QWORD*)(v202 + 80) = 0;
  *(_QWORD*)(v202 + 88) = 0;
  *(_QWORD*)v202 = v203 + 16;
  *(_QWORD*)(v202 + 8) = 0;
  game_ProcInst_Register(v202),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  *(_QWORD*)v202 = game_anonymous_ProcWarRecordSeq_ProcEndingMouseMode_vtable;
  GameRoutine_1553130(21),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21c6868) != 0) {
    GameData_21c67d0 = 0;
    GameData_21c67d8 = 0;
    GameData_21c67e0 = 0;
    GameData_21c67b0 = 0;
    GameData_21c67b8 = 0;
    GameData_21c67c0 = 0;
    GameData_21c67c8 = 0;
    GameData_21c6808 = 0;
    GameData_21c6810 = 0;
    GameData_21c6818 = 0;
    GameData_21c67a8 = 3;
    GameData_21c6820 = 0;
    GameData_21c6828 = 0;
    GameData_21c6850 = 0;
    GameData_21c6858 = 0;
    GameData_21c6860 = 0;
    GameData_21c6848 = 0;
    GameData_21c6838 = 0;
    GameData_21c6840 = 0;
    GameData_21c6830 = 0;
    GameData_21c67e8 = 14;
    GameData_21c67f0 = 0;
    GameData_21c67f8 = 16;
    GameData_21c6800 = 1;
    __cxa_guard_release((__int64)&GameData_21c6868),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v204 = v2[5];
  if (v204 != 0) {
    *(_QWORD*)(v204 + 48) = v202;
    *(_QWORD*)(v202 + 56) = v2[5];
  }
  v2[5] = v202;
  *(_QWORD*)(v202 + 24) = "ProcEndingMouseMode";
  *(_QWORD*)(v202 + 32) = v2;
  *(_DWORD*)(v202 + 140) =
      (unsigned int)game_HashString32("ProcEndingMouseMode"),
                    v155 = COERCE_AS(__typeof__(v155),
                                     PSEUDO_REGISTER(float, "s1", "=w")),
                    v173 = COERCE_AS(__typeof__(v173),
                                     PSEUDO_REGISTER(float, "s1", "=w")),
                    v179 = COERCE_AS(__typeof__(v179),
                                     PSEUDO_REGISTER(float, "s1", "=w"));
  *(_QWORD*)(v202 + 8) = &GameData_21c67a8;
  *(_QWORD*)(v202 + 16) = &GameData_21c67a8;
  *(_QWORD*)(v202 + 64) = 0;
  *(_QWORD*)(v202 + 72) = 24;
  *(_QWORD*)(v202 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v202 + 32LL))(v202),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v202 + 136LL))(v202),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s1", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(float, "s1", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((result & 1) != 0 && (*(_WORD*)(v202 + 136) & 0x100) == 0) {
    *(_WORD*)(v202 + 136) |= 0x100u;
  }
  return result;
}

bool game_19f0540(_QWORD* a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int8 v4;
  __int64 v5;
  unsigned __int8 v6;
  __int64 v7;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64* v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  bool v20;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25[3];
  __int64 v26[3];
  __int64 v27[3];
  _QWORD v28[3];

  v3 = *(_QWORD*)(*a1 + 440LL);
  if (v3 != 0) {
    v4 = *(_BYTE*)(v3 + 16);
  }
  else {
    v4 = 9;
  }
  v5 = *(_QWORD*)(*a2 + 440LL);
  if (v5 != 0) {
    v6 = *(_BYTE*)(v5 + 16);
  }
  else {
    v6 = 9;
  }
  v7 = a1[1];
  v27[0] = *a1;
  v27[1] = v7;
  v27[2] = a1[2];
  v9 = (unsigned __int8)(v4 - 7) < 0xFEu && (unsigned __int8)(v6 - 7) < 0xFEu;
  GameRoutine_19f06c0(v28, v27, v4, v9);
  v10 = a2[1];
  v25[0] = *a2;
  v25[1] = v10;
  v25[2] = a2[2];
  GameRoutine_19f06c0(v26, v25, v6, v9);
  v11 = v28[0];
  v12 = (__int64)(v28[1] - v28[0]) >> 3;
  v13 = (v26[1] - v26[0]) >> 3;
  if (v13 >= v12) {
    v14 = (__int64)(v28[1] - v28[0]) >> 3;
  }
  else {
    v14 = (v26[1] - v26[0]) >> 3;
  }
  if (v14 < 1) {
  LABEL_20:
    v21 = v12 < v13;
  }
  else {
    v15 = (unsigned __int64*)v28[0];
    v16 = (unsigned __int64*)v26[0];
    while (1) {
      v18 = *v15++;
      v17 = v18;
      v19 = *v16++;
      v20 = v17 >= v19;
      if (v17 != v19) {
        break;
      }
      if (--v14 == 0) {
        goto LABEL_20;
      }
    }
    v21 = !v20;
  }
  if (v26[0] != 0) {
    v22 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v22, v26[0]);
  }
  if (v11 != 0) {
    v23 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v11);
  }
  return v21;
}

_QWORD* game_19f2c80(_QWORD* a1, _QWORD* a2, unsigned __int16*** a3, int a4,
                     _QWORD* a5, __int64 a6)
{
  _QWORD* v6;
  unsigned __int64 v7;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  _DWORD* v22;
  _DWORD* v23;
  __int64* v24;
  __int16* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v30;
  unsigned int v31;
  int v32;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int16** v48;
  unsigned __int16** v49;
  __int64* v50;
  __int64* v51;
  unsigned __int16* v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int8* v55;
  int v56;
  unsigned int v57;
  bool v58;
  __int16 v59;
  __int64 v60;
  unsigned int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  char v67;
  int v68;
  unsigned __int16* v69;
  __int64* v70;
  __int64* v71;
  __int64 v72;
  int v73;
  unsigned __int16* v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  char v82;
  _QWORD* v83;
  char* v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  char* v89;
  __int64 v90;
  unsigned __int16* v91;
  _QWORD* result;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  char* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  char* v103;
  unsigned __int64 v104;
  unsigned __int16*** v105;
  __int64 v106;
  unsigned __int16* v107;
  int v108;

  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = (_QWORD*)a1[4];
  v7 = a1[6];
  a1[12] = a2;
  a1[5] = v6;
  if ((unsigned __int64)v6 >= v7) {
    v15 = v7 - (_QWORD)v6;
    v16 = v15 >> 2;
    if ((unsigned __int64)(v15 >> 2) <= 1) {
      v16 = 1;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v16;
    }
    if (v17 >> 61 != 0) {
    LABEL_147:
      GameRoutine_60a210(),
          v93 = COERCE_AS(__typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v18 = fw_memory_g_heap_manager_ptr;
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20 = &v19[v17];
    *v19 = 0;
    v14 = v19 + 1;
    a1[4] = v19;
    a1[5] = v19 + 1;
    a1[6] = v20;
    if (v6 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v21, (__int64)v6),
          v93 = COERCE_AS(__typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    *v6 = 0;
    v14 = v6 + 1;
  }
  v106 = a6;
  a1[5] = v14;
  if (*GameData_212cfd0[0] == 0 ||
      (Mind_746340(*(__int64**)GameData_212cfd0[0], 5) & 1) != 0) {
    v22 = (_DWORD*)a2[186];
    v23 = (_DWORD*)a2[187];
    if (v22 != v23) {
      v24 = GameData_212c880[0];
      v25 = GameData_212cf08[0];
      while (1) {
        v27 = *(_QWORD*)(*(_QWORD*)(*v24 + 64) + 8LL * (*v22 & 0xFFF));
        if (v27 == 0 || *(_BYTE*)(v27 + 104) != 2 || (*v25 & 4) == 0) {
          goto LABEL_19;
        }
        v28 = *(unsigned __int8*)(v27 + 106);
        if (*(_BYTE*)(v27 + 106) == 0 || v28 == 6) {
          break;
        }
        if (v28 != 1) {
          goto LABEL_19;
        }
        v30 = *(_QWORD*)(v27 + 576);
        if (v30 != 0) {
          goto LABEL_32;
        }
      LABEL_37:
        if (((*(__int64 (**)(_QWORD*, _DWORD*))(*a1 + 24LL))(a1, v22) & 1) !=
            0) {
          v34 = *(_QWORD*)(*(_QWORD*)(*v24 + 64) + 8LL * (*v22 & 0xFFF));
          v36 = (_QWORD*)a1[5];
          v35 = a1[6];
          if ((unsigned __int64)v36 < v35) {
            *v36 = v34;
            v26 = (__int64)(v36 + 1);
          }
          else {
            v37 = a1[4];
            v105 = a3;
            v38 = (unsigned __int64)v36 - v37;
            v39 = ((__int64)v36 - v37) >> 3;
            v40 = v39 + 1;
            if ((unsigned __int64)(v39 + 1) >> 61 != 0) {
              GameRoutine_705570(),
                  v93 = COERCE_AS(
                      __typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v41 = v35 - v37;
            if (v41 >> 2 > v40) {
              v40 = v41 >> 2;
            }
            if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
              v42 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v42 = v40;
            }
            if (v42 != 0) {
              v102 = ((__int64)v36 - v37) >> 3;
              v103 = (char*)v36 - v37;
              if (v42 >> 61 != 0) {
                goto LABEL_147;
              }
              v43 = *(_QWORD*)(*(_QWORD*)(*v24 + 64) + 8LL * (*v22 & 0xFFF));
              v44 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v42, 16, 0),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v39 = v102;
              v38 = (unsigned __int64)v103;
              v34 = v43;
            }
            else {
              v44 = 0;
            }
            v45 = v44 + 8 * v42;
            v46 = v44 + v38 - 8 * v39;
            v104 = v45;
            *(_QWORD*)(v44 + v38) = v34;
            v26 = v44 + v38 + 8;
            memcpy(v46, v37, v38),
                v93 =
                    COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            a1[4] = v46;
            a1[5] = v26;
            a1[6] = v104;
            if (v37 != 0) {
              v47 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v47 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v37),
                  v93 = COERCE_AS(
                      __typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            a3 = v105;
            v25 = GameData_212cf08[0];
          }
          a1[5] = v26;
        }
      LABEL_19:
        if (++v22 == v23) {
          goto LABEL_54;
        }
      }
      v30 = *(_QWORD*)(v27 + 576);
      if (v30 == 0) {
        goto LABEL_19;
      }
    LABEL_32:
      v31 = *(unsigned __int8*)(v30 + 72);
      v32 = *(unsigned __int8*)(v30 + 73);
      if (v31 > 7 || v32 != 1) {
        goto LABEL_19;
      }
      goto LABEL_37;
    }
  }
LABEL_54:
  a1[2] = a1[1];
  v49 = *a3;
  v48 = a3[1];
  if (*a3 != v48) {
    v50 = GameData_212c878[0];
    v51 = GameData_212c880[0];
    while (1) {
      v52 = *v49;
      if (*v49 == nullptr) {
        goto LABEL_58;
      }
      if (a4 == 1) {
        v55 = *(unsigned __int8**)(*(_QWORD*)(*v50 + 64) + 8LL * *v52);
        v56 = v55[73];
        v57 = v55[72];
        v58 = v57 > 7 || ((1LL << v56) & 0x7DC) == 0;
        if (v58 ||
            v57 - 5 <= 1 &&
                (*((_DWORD*)v52 + 1) & 0xF) * (unsigned int)v55[87] - 1 <
                    *((unsigned __int8*)v52 + 2) ||
            (*((_BYTE*)v52 + 3) & 0x20) != 0 || v56 == 7) {
          goto LABEL_58;
        }
      }
      else {
        if (a4 != 0 || ((*(__int64 (**)(_QWORD*))*a1)(a1) & 1) == 0) {
          goto LABEL_58;
        }
        v52 = *v49;
      }
      if (a5 == nullptr) {
        goto LABEL_89;
      }
      if (v106 == 0 || *a5 != *(_QWORD*)v52) {
        break;
      }
      v59 = *(_WORD*)(v106 + 16);
      v107 = nullptr;
      v108 = v59 & 0xFFF;
      v107 = *(unsigned __int16**)v52;
      if (!Unit_6c9ab0(a2, &v108, (unsigned __int16*)&v107)) {
        v52 = *v49;
      LABEL_89:
        v107 = nullptr;
        if (v52 != nullptr) {
        LABEL_90:
          v69 = *(unsigned __int16**)v52;
        }
        else {
          v69 = nullptr;
        }
        v107 = v69;
        if (((*(__int64 (**)(_QWORD*, unsigned __int16**))(*a1 + 16LL))(a1,
                                                                        &v107) &
             1) == 0 ||
            ((*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 8LL))(a1, *v49) & 1) ==
                0) {
          v70 = (__int64*)a1[4];
          v71 = (__int64*)a1[5];
          while (v70 != v71) {
            if (*v70 != 0) {
              v108 = *(_WORD*)(*v70 + 16) & 0xFFF;
              v74 = *v49;
              v107 = nullptr;
              if (v74 != nullptr) {
                v74 = *(unsigned __int16**)v74;
              }
              v107 = v74;
              if (Unit_6c9ab0(a2, &v108, (unsigned __int16*)&v107)) {
                v75 = *v70 != 0 ? *(_WORD*)(*v70 + 16) & 0xFFFu : 0LL;
                v76 = *v50;
                v77 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v51 + 64) +
                                                     8 * v75) +
                                          274LL);
                v78 = **v49;
                if (v77 != 0) {
                  v72 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8 * v78);
                  if (*(unsigned __int8*)(v72 + 72) <= 7u &&
                      (v79 = a2[218],
                       (((v80 = *(
                              unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                             game_g_shared_system_skills_ptr)) >>
                         5) &
                        0x7F) + 1 <=
                           (a2[219] - v79) >> 2) &&
                      ((*(_DWORD*)(v79 + 4 * ((v80 >> 5) & 0x7F)) >> v80) &
                       1) != 0) {
                    v77 = 0;
                  }
                  else {
                    v81 = a2[55];
                    v82 = v81 != 0 ? *(_BYTE*)(v81 + 16) : 9;
                    v77 = (0xFFFFFFF9 >> v82) & 1;
                  }
                }
                else {
                  v72 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8 * v78);
                }
                v73 = (*((_DWORD*)*v49 + 1) & 0xF) *
                          *(unsigned __int8*)(v72 + 87) -
                      *((unsigned __int8*)*v49 + 2);
                if (v77 <= (v73 & (unsigned int)~(v73 >> 31))) {
                  v52 = *v49;
                  v54 = *v70;
                  v53 = a1;
                  goto LABEL_57;
                }
              }
            }
            ++v70;
          }
          goto LABEL_58;
        }
        v52 = *v49;
        v53 = a1;
        v54 = 0;
        goto LABEL_57;
      }
      v60 = *v50;
      v61 =
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v51 + 64) +
                                         8LL * (*(_WORD*)(v106 + 16) & 0xFFF)) +
                              274LL);
      v62 = **v49;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v51 + 64) +
                               8LL * (*(_WORD*)(v106 + 16) & 0xFFF)) +
                    274LL) != 0) {
        v63 = *(_QWORD*)(*(_QWORD*)(v60 + 64) + 8 * v62);
        if (*(unsigned __int8*)(v63 + 72) <= 7u &&
            (v64 = a2[218],
             (((v65 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                       game_g_shared_system_skills_ptr)) >>
               5) &
              0x7F) + 1 <=
                 (a2[219] - v64) >> 2) &&
            ((*(_DWORD*)(v64 + 4 * ((v65 >> 5) & 0x7F)) >> v65) & 1) != 0) {
          v61 = 0;
        }
        else {
          v66 = a2[55];
          if (v66 != 0) {
            v67 = *(_BYTE*)(v66 + 16);
          }
          else {
            v67 = 9;
          }
          v61 = (0xFFFFFFF9 >> v67) & 1;
        }
      }
      else {
        v63 = *(_QWORD*)(*(_QWORD*)(v60 + 64) + 8 * v62);
      }
      v52 = *v49;
      v68 = (*((_DWORD*)*v49 + 1) & 0xF) * *(unsigned __int8*)(v63 + 87) -
            *((unsigned __int8*)*v49 + 2);
      if (v61 > (v68 & (unsigned int)~(v68 >> 31))) {
        goto LABEL_89;
      }
      v53 = a1;
      v54 = v106;
    LABEL_57:
      MapCombatPrediction_19f34f0(v53, (__int64)v52, v54),
          v93 = COERCE_AS(__typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_58:
      if (++v49 == v48) {
        goto LABEL_117;
      }
    }
    v107 = nullptr;
    goto LABEL_90;
  }
LABEL_117:
  a1[10] = 0;
  a1[11] = 0;
  v83 = a1 + 10;
  *((_DWORD*)a1 + 26) = -1;
  if (a5 != nullptr) {
    v84 = (char*)a1[1];
    v85 = (char*)a1[2];
    if (v85 != v84) {
      if (v106 != 0) {
        v86 = 0;
        v87 = 0;
        while (1) {
          v89 = &v84[v86];
          if (*a5 == **(_QWORD**)&v84[v86]) {
            if (*(_QWORD*)(v106 + 664) != 0) {
              v88 = *((_QWORD*)v89 + 1);
              *v83 = *(_QWORD*)v89;
              a1[11] = v88;
            }
            else {
              if (v106 != *(_QWORD*)&v84[v86 + 8]) {
                goto LABEL_123;
              }
              v90 = *((_QWORD*)v89 + 1);
              *v83 = *(_QWORD*)v89;
              a1[11] = v90;
              v91 = *(unsigned __int16**)v89;
              v107 = nullptr;
              if (v91 != nullptr) {
                v91 = *(unsigned __int16**)v91;
              }
              v107 = v91;
              if (((*(__int64 (**)(_QWORD*, unsigned __int16**))(*a1 + 16LL))(
                       a1, &v107) &
                   1) != 0) {
                *(_QWORD*)(a1[1] + v86 + 8) = 0;
              }
            }
            (*(void (**)(_QWORD*))(*a1 + 32LL))(a1),
                v93 =
                    COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v84 = (char*)a1[1];
            v85 = (char*)a1[2];
          }
        LABEL_123:
          ++v87;
          v86 += 16;
          if (v87 >= (v85 - v84) >> 4) {
            goto LABEL_139;
          }
        }
      }
      v94 = 0;
      v95 = 0;
      do {
        v96 = &v84[v94];
        if (*a5 == **(_QWORD**)&v84[v94]) {
          v97 = *((_QWORD*)v96 + 1);
          *v83 = *(_QWORD*)v96;
          a1[11] = v97;
          (*(void (**)(_QWORD*))(*a1 + 32LL))(a1),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v84 = (char*)a1[1];
          v85 = (char*)a1[2];
        }
        ++v95;
        v94 += 16;
      } while (v95 < (v85 - v84) >> 4);
    }
  LABEL_139:
    result = (_QWORD*)*v83;
    if (*v83 == 0) {
      return result;
    }
    goto LABEL_140;
  }
  result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*a1 + 40LL))(a1),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result == nullptr) {
    v84 = (char*)a1[1];
    v85 = (char*)a1[2];
    if (v85 != v84) {
      v98 = *((_QWORD*)v84 + 1);
      *v83 = *(_QWORD*)v84;
      a1[11] = v98;
    }
    goto LABEL_139;
  }
  v84 = (char*)a1[1];
  v85 = (char*)a1[2];
  a1[10] = result;
  a1[11] = v93;
LABEL_140:
  if (v85 != v84) {
    v99 = (v85 - v84) >> 4;
    v100 = 0;
    while (1) {
      v101 = *(_QWORD**)v84;
      v84 += 16;
      if (*result == *v101) {
        break;
      }
      if (v99 == ++v100) {
        return result;
      }
    }
    *((_DWORD*)a1 + 26) = v100;
  }
  return result;
}

__int64 game_19f3620(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  _QWORD* v15;
  int v16;

  v2 = *(int*)(a1 + 104);
  if ((a2 & 1) != 0) {
    v4 = v2 - 1;
  }
  else {
    v4 = v2 + 1;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v6 = (((*(_QWORD*)(a1 + 16) - v5) >> 4) + v4) %
       (unsigned __int64)((*(_QWORD*)(a1 + 16) - v5) >> 4);
  *(_DWORD*)(a1 + 104) = v6;
  v7 = (_QWORD*)(v5 + 16LL * (int)v6);
  v8 = v7[1];
  *(_QWORD*)(a1 + 80) = *v7;
  v9 = a1 + 80;
  v11 = *(_QWORD*)(a1 + 88);
  v10 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(v9 + 8) = v8;
  if (v11 != 0) {
    v12 = *(_WORD*)(v11 + 16) & 0xFFF;
  }
  else {
    v12 = 0;
  }
  v13 = *(_QWORD**)v9;
  v16 = v12;
  if (v13 != nullptr) {
    v13 = (_QWORD*)*v13;
  }
  v15 = v13;
  if (Unit_6c9ab0(v10, &v16, (unsigned __int16*)&v15)) {
    *(_QWORD*)(a1 + 88) = v11;
  }
  MapCombatPrediction_19f3700((__int64*)a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  return *(_QWORD*)(a1 + 80);
}

void game_1a09140(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  memset(&v16_.v16[2], 0, 32);
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000050LL;
  game_1366bd0((void*)(&v14_.v14), (__int64)"Layout/Ending.arc",
               (__int64)"Ending_Fin", (__int64)v16_.v16);
  v2 = v14_.v14;
  v3 = v14_.v15;
  v4 = *(_QWORD*)(a1 + 168);
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 160) = v2;
  *(_QWORD*)(a1 + 168) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v16_.v18;
  if (v16_.v18 != 0) {
    v7 = v16_.v19;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v9 = v16_.v19;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v7 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
        }
      }
      v7 = v9;
    } while (v9 != v6);
    v16_.v19 = v6;
    v6 = v16_.v18;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6);
    }
  }
}

#pragma GCC visibility pop
