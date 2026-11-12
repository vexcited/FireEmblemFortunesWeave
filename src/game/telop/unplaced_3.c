#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_93eed0(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_Unit_GetParams(PSEUDO_X8, __int64);
__int64* GameHr_17ccf20(__int64, const char*);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 EmbeddedImage_1889ae0(__int64, __int64);
__int64 EmbeddedImage_1889df0(__int64, __int64);
__int64 EmbeddedImage_1889fc0(__int64, _BYTE*);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1748c20(_QWORD*, _QWORD*, __int64*, __int64, __int64,
                            __int64, __int64, __int64);
__int64 GameRoutine_1841190(__int64, unsigned __int8);
__int64 GameRoutine_1841470(__int64, unsigned __int8);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_6c2b50(__int64);
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_93f040(__int64 result, __int64, int);
__int64 JobIcon_19a8c50(__int64, __int64);
__int64 JobIcon_19a9be0(__int64, __int64, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 StatusNum_1890980(__int64, unsigned int, unsigned int, char);
__int64 Unit_6ccca0(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_14a3920(__int64 result);
__int64 game_6e8720(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_GetJob(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
bool GameRoutine_17cd0a0(__int64, char);
char* GameHr_675980(__int64, __int64*);
char* GameHr_6ed030(__int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* HistoryLogInfo_6fb810(__int64);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_1af335e;
extern _UNKNOWN GameData_2174af8;
extern _UNKNOWN GameData_22594f0;
extern __int64 (*EventLocation_Destructor_175f4d0_ptr[])();
extern __int64 (*GameData_1f91be8[])();
extern __int64 (*GameData_20b9830[])();
extern __int64 (*game_telop_EventLocation_vtable[])();
extern __int64 (*game_telop_MotivationGaugeInfo_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_2130240[8];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d690;
extern __int64 GameData_2130f78[2];
extern __int64 GameData_2263bf0;
extern __int64 GameData_2263bf8;
extern __int64 GameData_2263c00;
extern __int64 GameData_2263c08;
extern __int64 GameData_2263c10;
extern __int64 GameData_2263c18;
extern __int64 GameData_2263c20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_20b94b0[];
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern int GameData_22594e8;
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void BasicInfo_15e5b50(__int64, __int64*, __int64);
void GameHr_1585490(__int64*, unsigned __int16*, char);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_157cb40(__int64*, int, const char*, const char*, unsigned int,
                         char);
void GameRoutine_1741f10(__int64*, unsigned __int64);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void TextBoxEx_188ab20(__int64, const char*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_telop_17418a0(_QWORD* a1);
__int64 game_telop_1748da0(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4,
                           __int64 a5, _QWORD* a6);
__int64 game_telop_1749040(__int64 a1);
__int64* game_telop_175bde0(__int64** a1);
__int64 game_telop_175ca40(__int64 a1);
__int64 game_telop_175e8f0(__int64 a1, unsigned __int8* a2, __int64* a3);
void game_telop_17624c0(__int64* a1, int a2);
__int64 game_telop_1762ef0(__int64 a1, __int64 a2);
void game_telop_1763490(__int64* a1, const char* a2, __int64 a3);
void game_telop_17ca960(__int64 a1, __int64 a2);

__int64 game_telop_17418a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      256, 16, 0);
  v10_.v10 = 0;
  v10_.v11 = 0;
  BasicInfo_15e5b50(v2, &v10_.v10, 0);
  v3 = v10_.v11;
  if (v10_.v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 216) = 0;
  *(_QWORD*)(v2 + 224) = 0;
  *(_QWORD*)(v2 + 229) = 0;
  *(_QWORD*)(v2 + 240) = 0;
  *(_QWORD*)(v2 + 246) = 0;
  *(_QWORD*)v2 = game_telop_MotivationGaugeInfo_vtable;
  v4 = a1[20];
  v5 = a1[21];
  if (v5 != v4) {
    GameRoutine_1741f10((__int64*)(v2 + 208),
                        0xAAAAAAAAAAAAAAABLL * ((v5 - v4) >> 3));
    v4 = a1[20];
    v6 = *(_QWORD*)(v2 + 208);
    v7 = a1[21] - v4;
    if (v7 == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v6 = 0;
  v7 = v5 - v4;
  if (v7 != 0) {
  LABEL_6:
    memmove(v6, v4, v7 - 4);
  }
LABEL_7:
  v8 = a1[5];
  *(_BYTE*)(v2 + 253) = 0;
  if (v8 != 0) {
    *(_QWORD*)(v8 + 48) = v2;
    *(_QWORD*)(v2 + 56) = a1[5];
  }
  a1[5] = v2;
  *(_QWORD*)(v2 + 24) = "MotivationGaugeInfo";
  *(_QWORD*)(v2 + 32) = a1;
  *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32("MotivationGaugeInfo");
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 24;
  *(_QWORD*)(v2 + 80) = 1;
  *(_QWORD*)(v2 + 8) = &GameData_2174af8;
  *(_QWORD*)(v2 + 16) = &GameData_2174af8;
  (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2);
  if ((result & 1) != 0 && (*(_WORD*)(v2 + 136) & 0x100) == 0) {
    *(_WORD*)(v2 + 136) |= 0x100u;
  }
  a1[23] = v2;
  *(_QWORD*)(v2 + 240) = 0;
  *(_BYTE*)(v2 + 236) = 1;
  return result;
}

__int64 game_telop_1748da0(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4,
                           __int64 a5, _QWORD* a6)
{
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v28[3];
  struct {
    _QWORD v29[4];
    _QWORD* v30;
  } v29_;
  struct {
    __int64* v31;
    __int64 v32;
    __int64 v33;
  } v31_;
  struct {
    _BYTE v34[1296];
    __int64 v35;
    __int64 v36;
    char gap1424_[32];
    char v37;
  } v34_;
  struct {
    _QWORD v38[4];
    _QWORD* v39;
  } v38_;

  *(_DWORD*)(a1 + 388) = 1;
  GameRoutine_6c2b50((__int64)v34_.v34);
  GameRoutine_6c3980((__int64)v34_.v34, (__int64)a2);
  v12 = v38_.v38;
  v31_.v32 = 0;
  v31_.v33 = 0;
  v31_.v31 = nullptr;
  v29_.v29[0] = GameData_20b9830;
  v29_.v29[1] = &v31_.v31;
  v38_.v39 = v38_.v38;
  v29_.v30 = v29_.v29;
  v38_.v38[0] = GameData_1f91be8;
  v38_.v38[1] = v29_.v29;
  if ((v34_.v37 & 2) == 0) {
    goto LABEL_11;
  }
  v13 = v34_.v36;
  v14 = v34_.v35;
  if ((int)((unsigned __int64)(v34_.v36 - v34_.v35) >> 2) < 1) {
    goto LABEL_11;
  }
  v15 = 0;
  v16 = 0;
  v17 = GameData_212c880[0];
  v18 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v18 + 64) +
                             8LL * (*(_DWORD*)(v14 + v15) & 0xFFF)) +
                  104LL) == 1) {
      if (v38_.v39 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, __int64))(*v38_.v39 + 48LL))(v38_.v39, v14 + v15);
      v18 = *v17;
      v13 = v34_.v36;
      v14 = v34_.v35;
    }
    ++v16;
    v15 += 4;
  } while (v16 < (int)((unsigned __int64)(v13 - v14) >> 2));
  v12 = v38_.v39;
  if (v38_.v39 == v38_.v38) {
  LABEL_11:
    v19 = 32;
  }
  else {
    if (v38_.v39 == nullptr) {
      goto LABEL_13;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v12 + v19))((__int64)v12);
LABEL_13:
  if (v29_.v30 == v29_.v29) {
    v20 = 32;
    goto LABEL_17;
  }
  if (v29_.v30 != nullptr) {
    v20 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v29_.v30 + v20))((__int64)v29_.v30);
  }
  v21 = v31_.v31;
  v22 = (__int64*)v31_.v32;
  while (v21 != v22) {
    v23 = *v21;
    if (*v21 != 0) {
      LODWORD(v23) = *(_WORD*)(v23 + 16) & 0xFFF;
    }
    LODWORD(v38_.v38[0]) = v23;
    Unit_6ccca0((__int64)v34_.v34, (__int64)v38_.v38);
    ++v21;
  }
  game_Unit_GetParams((void*)(v29_.v29), (__int64)v34_.v34);
  if (*(_BYTE*)(game_Unit_GetJob((__int64)v34_.v34) + 96) != 2) {
    GameRoutine_93f040((__int64)v38_.v38, (__int64)v34_.v34, 1);
    game_Unit_GetParams((void*)(v29_.v29), (__int64)v34_.v34);
    GameRoutine_93eed0(v38_.v38);
  }
  v24 = a6[1];
  v28[0] = *a6;
  v28[1] = v24;
  *(_QWORD*)((char*)&v28[1] + 6) = *(_QWORD*)((char*)a6 + 14);
  v25 = game_Unit_GetJob((__int64)a2);
  GameRoutine_1748c20((_QWORD*)a1, a2, a3, a5, (__int64)v29_.v29, (__int64)v28,
                      a4, v25);
  if (v31_.v31 != nullptr) {
    v31_.v32 = (__int64)v31_.v31;
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v31_.v31);
  }
  return game_Unit_Destroy_Unit((__int64)v34_.v34);
}

__int64 game_telop_1749040(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  int* v40;
  __int64 v41;
  char** v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64* v49;
  bool v50;
  const char* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64* v63;
  __int64* v65;
  const char* v66[2];
  struct {
    __int64* v67;
    __int64 v68;
    unsigned __int64 v69;
    unsigned __int64 v70;
    int v71;
    int v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
  } v67_;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    v4 = ui_LayoutAccessor_empty__ptr[0];
    if (v3 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v4 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v5 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  else {
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
  v6 = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(v6 + 2136) != 0) {
    v7 = game_97b2f0(v6 + 2104);
    if (v7 == nullptr) {
      goto LABEL_14;
    }
  LABEL_12:
    v8 = ui_LayoutAccessor_FindTextBox(v4, "T_UnitName");
    if (v8 != 0) {
      GameRoutine_156c5d0(v8, (__int64)v7, 0);
    }
    goto LABEL_14;
  }
  v7 = GameHr_67ed20(*(_QWORD**)(v6 + 392));
  if (v7 != nullptr) {
    goto LABEL_12;
  }
LABEL_14:
  v9 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(a1 + 32) != 0) {
    v10 = *(_QWORD*)(a1 + 32);
  }
  else {
    v10 = *(_QWORD*)(a1 + 40);
  }
  if (v9 != 0) {
    v11 = std___1___shared_weak_count_lock(v9);
    v12 = ui_LayoutAccessor_empty__ptr[0];
    if (v11 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v12 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v13 = v11;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  else {
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }
  v14 = *(_QWORD*)(a1 + 24);
  if (v14 != 0) {
    v14 = *(_QWORD*)(v14 + 392);
  }
  v67_.v67 = (__int64*)v14;
  v15 = GameHr_675980(v10, (__int64*)&v67_.v67);
  if (v15 != nullptr) {
    v16 = (__int64)v15;
    v17 = ui_LayoutAccessor_FindTextBox(v12, "T_Class");
    if (v17 != 0) {
      GameRoutine_156c5d0(v17, v16, 0);
    }
  }
  v18 = *(_QWORD*)(a1 + 8);
  if (v18 != 0) {
    v19 = std___1___shared_weak_count_lock(v18);
    v20 = ui_LayoutAccessor_empty__ptr[0];
    if (v19 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v20 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v21 = v20;
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
        v20 = v21;
      }
    }
  }
  else {
    v20 = ui_LayoutAccessor_empty__ptr[0];
  }
  v66[0] = "L_ClassIcon";
  v66[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
  GameRoutine_1587740((void*)(&v67_.v67), v20, v66);
  if (v67_.v68 == 0) {
    goto LABEL_44;
  }
  v22 = std___1___shared_weak_count_lock(v67_.v68);
  v23 = (__int64)v67_.v67;
  if (v67_.v68 != 0) {
    std___1___shared_weak_count___release_weak(v67_.v68);
  }
  if (v22 != 0 && v23 != 0) {
    *(_BYTE*)(v23 + 1105) = 0;
    JobIcon_19a9be0(v23, *(_QWORD*)(a1 + 24), v10);
  }
  else if (v22 == 0) {
    goto LABEL_44;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_44:
    v24 = *(_QWORD*)(a1 + 8);
    if (v24 != 0) {
      goto LABEL_45;
    }
  LABEL_51:
    v26 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_52;
  }
  (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
  std___1___shared_weak_count___release_weak(v22);
  v24 = *(_QWORD*)(a1 + 8);
  if (v24 == 0) {
    goto LABEL_51;
  }
LABEL_45:
  v25 = std___1___shared_weak_count_lock(v24);
  v26 = ui_LayoutAccessor_empty__ptr[0];
  if (v25 != 0) {
    if (*(_QWORD*)a1 != 0) {
      v26 = *(__int64**)a1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v27 = v25;
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v27);
    }
  }
LABEL_52:
  v28 = *(_QWORD*)(a1 + 40);
  v29 = *(_QWORD*)(a1 + 24);
  if (v29 != 0) {
    v29 = *(_QWORD*)(v29 + 392);
  }
  v67_.v67 = (__int64*)v29;
  v30 = GameHr_675980(v28, (__int64*)&v67_.v67);
  if (v30 != nullptr) {
    v31 = (__int64)v30;
    v32 = ui_LayoutAccessor_FindTextBox(v26, "T_NewClass");
    if (v32 != 0) {
      GameRoutine_156c5d0(v32, v31, 0);
    }
  }
  v33 = *(_QWORD*)(a1 + 8);
  v34 = ui_LayoutAccessor_empty__ptr[0];
  if (v33 != 0) {
    v35 = std___1___shared_weak_count_lock(v33);
    v36 = ui_LayoutAccessor_empty__ptr[0];
    if (v35 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v36 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v37 = v36;
        (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
        std___1___shared_weak_count___release_weak(v35);
        v36 = v37;
      }
    }
  }
  else {
    v36 = ui_LayoutAccessor_empty__ptr[0];
  }
  v66[0] = "L_NewClassIcon";
  v66[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 6);
  GameRoutine_1587740((void*)(&v67_.v67), v36, v66);
  if (v67_.v68 == 0) {
    goto LABEL_73;
  }
  v38 = std___1___shared_weak_count_lock(v67_.v68);
  v39 = (__int64)v67_.v67;
  if (v67_.v68 != 0) {
    std___1___shared_weak_count___release_weak(v67_.v68);
  }
  if (v38 != 0 && v39 != 0) {
    *(_BYTE*)(v39 + 1105) = 0;
    JobIcon_19a8c50(v39, *(_QWORD*)(a1 + 24));
  }
  else if (v38 == 0) {
  LABEL_73:
    v40 = (int*)(a1 + 92);
    v41 = 0;
    v42 = GameData_20b94b0;
    v65 = GameData_212e348 + 2;
    do {
      v43 = *(_QWORD*)(a1 + 8);
      if (v43 != 0 && (v44 = std___1___shared_weak_count_lock(v43)) != 0) {
        v45 = v44;
        if (*(_QWORD*)a1 != 0) {
          v46 = *(__int64**)a1;
        }
        else {
          v46 = v34;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v47 = v46;
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
          std___1___shared_weak_count___release_weak(v45);
          v46 = v47;
          v34 = ui_LayoutAccessor_empty__ptr[0];
        }
      }
      else {
        v46 = v34;
      }
      LayoutAccessor_1560070((void*)(&v67_.v67), v46, *v42);
      if (v67_.v68 != 0) {
        v48 = std___1___shared_weak_count_lock(v67_.v68);
        v49 = v67_.v67;
        if (v67_.v68 != 0) {
          std___1___shared_weak_count___release_weak(v67_.v68);
        }
        if (v48 == 0 || v49 == nullptr) {
          if (v48 == 0) {
            goto LABEL_74;
          }
          goto LABEL_114;
        }
        if (*(_DWORD*)(a1 + 388) != 1 && *((_BYTE*)v42 + 32) == 10) {
          LayoutAccessor_155e830((__int64)v49, 0);
          goto LABEL_114;
        }
        LayoutAccessor_155e830((__int64)v49, 1);
        LayoutAccessor_1562060(v49, "T_Status", v42[1]);
        if (*(_DWORD*)(a1 + 388) == 2) {
          v50 = false;
          v51 = "MID_Sys_Plus";
        }
        else {
          v50 = *(v40 - 10) < *v40;
          if (*(v40 - 10) >= *v40) {
            v51 = "MID_Sys_Plus";
          }
          else {
            v51 = "MID_Sys_Minus";
          }
        }
        *(_BYTE*)(a1 + 212 + v41) = v50;
        v67_.v73 = -1;
        v67_.v74 = -1;
        v67_.v75 = -1;
        v67_.v76 = -1;
        v67_.v77 = -1;
        v67_.v78 = -1;
        v67_.v79 = -1;
        v67_.v80 = -1;
        v67_.v81 = -1;
        v67_.v82 = -1;
        v67_.v83 = -1;
        v67_.v84 = -1;
        v52 = *msg_MessageManager_instance__ptr[0];
        v67_.v67 = v65;
        v67_.v68 = 0xFFFF0001FFFF0000LL;
        v67_.v69 = 0xFFFF0004FFFF0002LL;
        v67_.v70 = 0xFFFF0006FFFF0005LL;
        v67_.v85 = 8;
        v67_.v71 = -65529;
        v67_.v72 = -65528;
        v53 = GameRoutine_a4dbe0(v52, v51, 0);
        if (v53 != nullptr) {
          v54 = (__int64)v53;
          v55 = ui_LayoutAccessor_FindTextBox(v49, "T_Plus");
          if (v55 != 0) {
            GameRoutine_156c5d0(v55, v54, 0);
          }
        }
        v56 = ui_LayoutAccessor_FindPane(v49, "T_NumUp");
        if (v56 != 0) {
          v57 = __dynamic_cast(v56, GameData_212d670[0], GameData_212d690, 0);
          if (v57 != 0) {
            GameRoutine_156c910(v57, "%01d", 1, 0);
          }
        }
        v66[0] = "L_NumStatus";
        v66[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
        GameRoutine_9d5180((void*)(&v67_.v67), v49, v66);
        if (v67_.v68 != 0) {
          v58 = std___1___shared_weak_count_lock(v67_.v68);
          v59 = (__int64)v67_.v67;
          if (v67_.v68 != 0) {
            std___1___shared_weak_count___release_weak(v67_.v68);
          }
          if (v58 != 0 && v59 != 0) {
            StatusNum_1890980(v59, *v40 & ~(*v40 >> 31), *v40 & ~(*v40 >> 31),
                              v40[20] > 0);
            goto LABEL_111;
          }
          if (v58 != 0) {
          LABEL_111:
            if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
              std___1___shared_weak_count___release_weak(v58);
            }
          }
        }
        GameHr_1562680((__int64)v49, (unsigned int*)"UpDownOff",
                       0x1.0000000000000p+0f);
        v34 = ui_LayoutAccessor_empty__ptr[0];
      LABEL_114:
        if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
          std___1___shared_weak_count___release_weak(v48);
        }
      }
    LABEL_74:
      ++v41;
      ++v40;
      v42 += 5;
    } while (v41 != 10);
    v60 = *(_QWORD*)(a1 + 8);
    if (v60 != 0) {
      v61 = std___1___shared_weak_count_lock(v60);
      v62 = ui_LayoutAccessor_empty__ptr[0];
      if (v61 != 0) {
        if (*(_QWORD*)a1 != 0) {
          v62 = *(__int64**)a1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v63 = v62;
          (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
          std___1___shared_weak_count___release_weak(v61);
          v62 = v63;
        }
      }
    }
    else {
      v62 = ui_LayoutAccessor_empty__ptr[0];
    }
    return GameHr_1562680((__int64)v62, (unsigned int*)"In", 0x0.0p+0f);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v38);
  }
  goto LABEL_73;
}

__int64* game_telop_175bde0(__int64** a1)
{

#pragma clang fp contract(off)
  __int64* result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  int v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  char v25;
  int v26;
  int v27;
  int v28;
  int* v29;
  int v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  char v37;
  int v38;
  int v39;
  int v40;
  int* v41;
  int v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  char v49;
  int v50;
  int v51;
  int v52;
  int* v53;
  int v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  char v61;
  int v62;
  int v63;
  int v64;
  int* v65;
  int v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  char v72;
  char v73;
  int v74;
  int v75;
  int v76;
  int* v77;
  int v78;
  __int64 v79;
  char* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  char v84;
  char v85;
  int v86;
  int v87;
  int v88;
  int* v89;
  int v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  int v94;
  __int64 v95;
  int v96;
  _QWORD* v97;
  __int64 v98;
  int v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  struct {
    __int64 v108;
    __int64 v109;
  } v108_;
  struct {
    __int64 v110;
    __int64 v111;
  } v110_;
  struct {
    __int64 v112;
    __int64 v113;
  } v112_;
  struct {
    __int64 v114;
    __int64 v115;
  } v114_;
  struct {
    __int64 v116;
    __int64 v117;
  } v116_;
  struct {
    __int64 v118;
    __int64 v119;
  } v118_;
  unsigned __int64 v120[2];

  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  result = a1[1];
  if (result == nullptr) {
    return result;
  }
  result = (__int64*)std___1___shared_weak_count_lock((__int64)result),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (result == nullptr) {
    return result;
  }
  v3 = *a1;
  v4 = (__int64)result;
  if (*a1 == nullptr) {
    goto LABEL_129;
  }
  v118_.v118 = 0;
  v118_.v119 = 0;
  v116_.v116 = 0;
  v116_.v117 = 0;
  v114_.v114 = 0;
  v114_.v115 = 0;
  v112_.v112 = 0;
  v112_.v113 = 0;
  v110_.v110 = 0;
  v110_.v111 = 0;
  v108_.v108 = 0;
  v108_.v109 = 0;
  v120[1] = (unsigned __int64)&GameData_1ade186;
  v120[0] = game_HashString((__int64)&GameData_1ade186),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (game_GameModeData_instance_ == 0 ||
      (v5 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v120)) == 0 ||
      *(int*)(v5 + 32) < 1) {
    v10 = *(_QWORD*)(*GameData_212c790 + 8);
    v11 = *(_DWORD*)(v10 + 56);
    v12 = *(__int64**)(v10 + 8);
    v13 = *(__int64**)(v10 + 16);
    if (v11 < 0) {
      if (v12 == v13) {
        goto LABEL_31;
      }
      while (1) {
        v14 = (__int64*)*v12;
        if (*(_QWORD*)(*v12 + 96) == 0 && v14[69] == 0) {
          break;
        }
        if (++v12 == v13) {
          goto LABEL_31;
        }
      }
    }
    else {
      if (v12 == v13) {
        goto LABEL_31;
      }
      while (1) {
        v15 = (__int64*)*v12++;
        v14 = v15;
        if (*((_DWORD*)v15 + 21) == v11) {
          break;
        }
        if (v12 == v13) {
          goto LABEL_31;
        }
      }
    }
    if (*v14 != 0) {
      v108_.v108 = *v14;
      v19 = 1;
      LOBYTE(v108_.v109) = (v14[68] & 0x10) != 0;
    }
    else {
      v19 = 0;
      LOBYTE(v108_.v109) = 0;
    }
    goto LABEL_32;
  }
  v6 = *(_QWORD*)(*GameData_212c790 + 8);
  v7 = *(__int64**)(v6 + 8);
  v8 = *(__int64**)(v6 + 16);
  if (v7 == v8) {
  LABEL_31:
    v19 = 0;
    goto LABEL_32;
  }
  v9 = 0;
  do {
    v16 = *v7;
    if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v16 + 552) == 0) {
      v17 = *(_QWORD*)v16;
      if (v108_.v108 == *(_QWORD*)v16) {
        v18 = &v108_.v108;
      }
      else {
        v18 = &v110_.v110;
        if (v110_.v110 != v17) {
          v18 = &v112_.v112;
          if (v112_.v112 != v17) {
            v18 = &v114_.v114;
            if (v114_.v114 != v17) {
              v18 = &v116_.v116;
              if (v116_.v116 != v17) {
                v18 = &v118_.v118;
                if (v118_.v118 != v17) {
                  if (v9 > 5) {
                    goto LABEL_15;
                  }
                  LOBYTE(v16) = *(_BYTE*)(v16 + 544);
                  v18 = &v108_.v108 + 2 * v9++;
                  *v18 = v17;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
      if (*((_BYTE*)v18 + 8) != 1) {
        *((_BYTE*)v18 + 8) = 0;
        goto LABEL_15;
      }
      LOWORD(v16) = *(_WORD*)(v16 + 544);
    LABEL_29:
      *((_BYTE*)v18 + 8) = (v16 & 0x10) != 0;
    }
  LABEL_15:
    ++v7;
  } while (v7 != v8);
  v19 = v9;
LABEL_32:
  v20 = game_util_Format("IconUnit%02d", 0),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  v21 = ui_LayoutAccessor_FindPane(v3, v20),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v21 != 0) {
    v22 = __dynamic_cast(v21, GameData_212d670[0], GameData_212d678[0], 0),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
    v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
    v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v22 != 0) {
      v23 = v22;
      v24 = v19 <= 0 ? *(_BYTE*)(v22 + 88) & 0xFE
                     : (*(_BYTE*)(v22 + 88) & 0xFE) + 1;
      *(_BYTE*)(v22 + 88) = v24;
      if (v19 >= 1) {
        game_telop_175ca40((__int64)a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        v25 = *(_BYTE*)(v23 + 88);
        *(_DWORD*)(v23 + 48) = v26;
        *(_DWORD*)(v23 + 52) = v27;
        *(_DWORD*)(v23 + 56) = v28;
        *(_BYTE*)(v23 + 88) = v25 | 0x10;
        Manager_136a920(ui_Manager_instance_ + 1264, v23, 0, 7u,
                        "IconGmapMap_Player"),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((v108_.v109 & 1) != 0) {
          v29 = (int*)((char*)GameData_212da30 + 232);
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_22594f0,
                      memory_order_acquire) &
                  1) != 0) {
          v29 = &GameData_22594e8;
        }
        else {
          v103 = __cxa_guard_acquire((__int64)&GameData_22594f0),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
          v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
          v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
          v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
          v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
          v29 = &GameData_22594e8;
          if (v103 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release((__int64)&GameData_22594f0),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v75 = COERCE_AS(__typeof__(v75),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v88 = COERCE_AS(__typeof__(v88),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            v29 = &GameData_22594e8;
          }
        }
        v30 = *v29;
        v31 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v23 + 88LL))(v23, 0),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
        v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
        v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v31 != 0) {
          *(_DWORD*)(v31 + 12) = v30;
        }
      }
    }
  }
  v32 = game_util_Format("IconUnit%02d", 1),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  v33 = ui_LayoutAccessor_FindPane(v3, v32),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v33 != 0) {
    v34 = __dynamic_cast(v33, GameData_212d670[0], GameData_212d678[0], 0),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
    v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
    v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v34 != 0) {
      v35 = v34;
      v36 = v19 <= 1 ? *(_BYTE*)(v34 + 88) & 0xFE
                     : (*(_BYTE*)(v34 + 88) & 0xFE) + 1;
      *(_BYTE*)(v34 + 88) = v36;
      if (v19 >= 2) {
        game_telop_175ca40((__int64)a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        v37 = *(_BYTE*)(v35 + 88);
        *(_DWORD*)(v35 + 48) = v38;
        *(_DWORD*)(v35 + 52) = v39;
        *(_DWORD*)(v35 + 56) = v40;
        *(_BYTE*)(v35 + 88) = v37 | 0x10;
        Manager_136a920(ui_Manager_instance_ + 1264, v35, 0, 7u,
                        "IconGmapMap_Player"),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((v110_.v111 & 1) != 0) {
          v41 = (int*)((char*)GameData_212da30 + 232);
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_22594f0,
                      memory_order_acquire) &
                  1) != 0) {
          v41 = &GameData_22594e8;
        }
        else {
          v104 = __cxa_guard_acquire((__int64)&GameData_22594f0),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
          v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
          v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
          v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
          v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
          v41 = &GameData_22594e8;
          if (v104 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release((__int64)&GameData_22594f0),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v75 = COERCE_AS(__typeof__(v75),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v88 = COERCE_AS(__typeof__(v88),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            v41 = &GameData_22594e8;
          }
        }
        v42 = *v41;
        v43 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v35 + 88LL))(v35, 0),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
        v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
        v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v43 != 0) {
          *(_DWORD*)(v43 + 12) = v42;
        }
      }
    }
  }
  v44 = game_util_Format("IconUnit%02d", 2),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  v45 = ui_LayoutAccessor_FindPane(v3, v44),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v45 != 0) {
    v46 = __dynamic_cast(v45, GameData_212d670[0], GameData_212d678[0], 0),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
    v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
    v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v46 != 0) {
      v47 = v46;
      v48 = v19 <= 2 ? *(_BYTE*)(v46 + 88) & 0xFE
                     : (*(_BYTE*)(v46 + 88) & 0xFE) + 1;
      *(_BYTE*)(v46 + 88) = v48;
      if (v19 >= 3) {
        game_telop_175ca40((__int64)a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        v49 = *(_BYTE*)(v47 + 88);
        *(_DWORD*)(v47 + 48) = v50;
        *(_DWORD*)(v47 + 52) = v51;
        *(_DWORD*)(v47 + 56) = v52;
        *(_BYTE*)(v47 + 88) = v49 | 0x10;
        Manager_136a920(ui_Manager_instance_ + 1264, v47, 0, 7u,
                        "IconGmapMap_Player"),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((v112_.v113 & 1) != 0) {
          v53 = (int*)((char*)GameData_212da30 + 232);
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_22594f0,
                      memory_order_acquire) &
                  1) != 0) {
          v53 = &GameData_22594e8;
        }
        else {
          v105 = __cxa_guard_acquire((__int64)&GameData_22594f0),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
          v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
          v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
          v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
          v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
          v53 = &GameData_22594e8;
          if (v105 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release((__int64)&GameData_22594f0),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v75 = COERCE_AS(__typeof__(v75),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v88 = COERCE_AS(__typeof__(v88),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            v53 = &GameData_22594e8;
          }
        }
        v54 = *v53;
        v55 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v47 + 88LL))(v47, 0),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
        v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
        v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v55 != 0) {
          *(_DWORD*)(v55 + 12) = v54;
        }
      }
    }
  }
  v56 = game_util_Format("IconUnit%02d", 3),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  v57 = ui_LayoutAccessor_FindPane(v3, v56),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v57 != 0) {
    v58 = __dynamic_cast(v57, GameData_212d670[0], GameData_212d678[0], 0),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
    v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
    v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v58 != 0) {
      v59 = v58;
      v60 = v19 <= 3 ? *(_BYTE*)(v58 + 88) & 0xFE
                     : (*(_BYTE*)(v58 + 88) & 0xFE) + 1;
      *(_BYTE*)(v58 + 88) = v60;
      if (v19 >= 4) {
        game_telop_175ca40((__int64)a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        v61 = *(_BYTE*)(v59 + 88);
        *(_DWORD*)(v59 + 48) = v62;
        *(_DWORD*)(v59 + 52) = v63;
        *(_DWORD*)(v59 + 56) = v64;
        *(_BYTE*)(v59 + 88) = v61 | 0x10;
        Manager_136a920(ui_Manager_instance_ + 1264, v59, 0, 7u,
                        "IconGmapMap_Player"),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((v114_.v115 & 1) != 0) {
          v65 = (int*)((char*)GameData_212da30 + 232);
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_22594f0,
                      memory_order_acquire) &
                  1) != 0) {
          v65 = &GameData_22594e8;
        }
        else {
          v106 = __cxa_guard_acquire((__int64)&GameData_22594f0),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
          v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
          v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
          v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
          v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
          v65 = &GameData_22594e8;
          if (v106 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release((__int64)&GameData_22594f0),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v75 = COERCE_AS(__typeof__(v75),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v88 = COERCE_AS(__typeof__(v88),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            v65 = &GameData_22594e8;
          }
        }
        v66 = *v65;
        v67 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v59 + 88LL))(v59, 0),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
        v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
        v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v67 != 0) {
          *(_DWORD*)(v67 + 12) = v66;
        }
      }
    }
  }
  v68 = game_util_Format("IconUnit%02d", 4),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  v69 = ui_LayoutAccessor_FindPane(v3, v68),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v69 != 0) {
    v70 = __dynamic_cast(v69, GameData_212d670[0], GameData_212d678[0], 0),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
    v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
    v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v70 != 0) {
      v71 = v70;
      v72 = v19 <= 4 ? *(_BYTE*)(v70 + 88) & 0xFE
                     : (*(_BYTE*)(v70 + 88) & 0xFE) + 1;
      *(_BYTE*)(v70 + 88) = v72;
      if (v19 >= 5) {
        game_telop_175ca40((__int64)a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        v73 = *(_BYTE*)(v71 + 88);
        *(_DWORD*)(v71 + 48) = v74;
        *(_DWORD*)(v71 + 52) = v75;
        *(_DWORD*)(v71 + 56) = v76;
        *(_BYTE*)(v71 + 88) = v73 | 0x10;
        Manager_136a920(ui_Manager_instance_ + 1264, v71, 0, 7u,
                        "IconGmapMap_Player"),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((v116_.v117 & 1) != 0) {
          v77 = (int*)((char*)GameData_212da30 + 232);
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_22594f0,
                      memory_order_acquire) &
                  1) != 0) {
          v77 = &GameData_22594e8;
        }
        else {
          v107 = __cxa_guard_acquire((__int64)&GameData_22594f0),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
          v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
          v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
          v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
          v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
          v77 = &GameData_22594e8;
          if (v107 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release((__int64)&GameData_22594f0),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v75 = COERCE_AS(__typeof__(v75),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v88 = COERCE_AS(__typeof__(v88),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            v77 = &GameData_22594e8;
          }
        }
        v78 = *v77;
        v79 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v71 + 88LL))(v71, 0),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
        v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
        v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v79 != 0) {
          *(_DWORD*)(v79 + 12) = v78;
        }
      }
    }
  }
  v80 = game_util_Format("IconUnit%02d", 5),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  v81 = ui_LayoutAccessor_FindPane(v3, v80),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v81 != 0) {
    v82 = __dynamic_cast(v81, GameData_212d670[0], GameData_212d678[0], 0),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
    v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
    v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v82 != 0) {
      v83 = v82;
      v84 = *(_BYTE*)(v82 + 88) & 0xFE;
      if (v19 > 5) {
        ++v84;
      }
      *(_BYTE*)(v82 + 88) = v84;
      if (v19 >= 6) {
        game_telop_175ca40((__int64)a1),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        v85 = *(_BYTE*)(v83 + 88);
        *(_DWORD*)(v83 + 48) = v86;
        *(_DWORD*)(v83 + 52) = v87;
        *(_DWORD*)(v83 + 56) = v88;
        *(_BYTE*)(v83 + 88) = v85 | 0x10;
        Manager_136a920(ui_Manager_instance_ + 1264, v83, 0, 7u,
                        "IconGmapMap_Player"),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
            v75 =
                COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
            v88 =
                COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if ((v118_.v119 & 1) != 0) {
          v89 = (int*)((char*)GameData_212da30 + 232);
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_22594f0,
                      memory_order_acquire) &
                  1) != 0) {
          v89 = &GameData_22594e8;
        }
        else {
          v89 = &GameData_22594e8;
          if (__cxa_guard_acquire((__int64)&GameData_22594f0) != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release((__int64)&GameData_22594f0),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v51 = COERCE_AS(__typeof__(v51),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v74 = COERCE_AS(__typeof__(v74),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v75 = COERCE_AS(__typeof__(v75),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v88 = COERCE_AS(__typeof__(v88),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
        }
        v90 = *v89;
        v91 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v83 + 88LL))(v83, 0),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
        v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
        v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v91 != 0) {
          *(_DWORD*)(v91 + 12) = v90;
        }
      }
    }
  }
  result = (__int64*)ui_LayoutAccessor_FindPane(v3, "N_Unit"),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
  v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
  v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
  if (result != nullptr) {
    v92 = result[5];
    v93 = result + 4;
    if ((__int64*)v92 != result + 4) {
      v94 = -1;
      v95 = result[5];
      do {
        v95 = *(_QWORD*)(v95 + 8);
        ++v94;
      } while ((__int64*)v95 != v93);
      if (v94 != 0) {
        v96 = 0;
        do {
          if ((__int64*)v92 == v93) {
            break;
          }
          v98 = 0;
          v99 = 0;
          do {
            if (v99 < v96) {
              ++v99;
            }
            else if ((*(_BYTE*)(v92 + 80) & 1) != 0 &&
                     *(_BYTE*)(v92 + 82) != 0 &&
                     (v98 == 0 || *(float*)(v92 + 44) < *(float*)(v98 + 52))) {
              v98 = v92 - 8;
            }
            v92 = *(_QWORD*)(v92 + 8);
          } while ((__int64*)v92 != v93);
          if (v98 == 0) {
            break;
          }
          v92 = v98 + 8;
          v100 = *(_QWORD*)(v98 + 8);
          if ((__int64*)(v98 + 8) != v93) {
            v101 = *(__int64**)(v98 + 16);
            v102 = *v101;
            *(_QWORD*)(v100 + 8) = v101;
            v100 = v102;
            *v101 = *(_QWORD*)(v98 + 8);
            *(_QWORD*)(v102 + 8) = v92;
          }
          *(_QWORD*)v92 = v93;
          ++v96;
          v97 = (_QWORD*)result[5];
          *(_QWORD*)(v100 + 8) = v97;
          *v97 = v100;
          result[5] = v92;
        } while (v94 != v96);
      }
    }
  }
LABEL_129:
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s2", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(float, "s1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(float, "s2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s0", "=w")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(float, "s1", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s2", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(float, "s0", "=w")),
        v75 = COERCE_AS(__typeof__(v75), PSEUDO_REGISTER(float, "s1", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s2", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(float, "s1", "=w")),
        v88 = COERCE_AS(__typeof__(v88), PSEUDO_REGISTER(float, "s2", "=w"));
    return (__int64*)std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_telop_175ca40(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(__int64**)a1;
      if (*(_QWORD*)a1 == 0) {
        goto LABEL_10;
      }
      if (v3[1] == 0) {
        goto LABEL_10;
      }
      v4 = result;
      v5 = std___1___shared_weak_count_lock(v3[1]);
      result = v4;
      if (v5 != 0) {
        if (*(_BYTE*)(*v3 + 24) == 1) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_10;
          }
        }
        else if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_10;
        }
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
        result = v4;
      }
    LABEL_10:
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v6 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return result;
}

__int64 game_telop_175e8f0(__int64 a1, unsigned __int8* a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned int v3;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  void* v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  float v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v57[2];

  if (GameData_2263c20 != 0) {
    return 0;
  }
  if ((GameData_2263bf0 & 1) != 0) {
    v5 = GameData_2263bf8;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)GameData_2263bf0 >> 1;
  }
  v6 = *a2;
  v7 = *((_QWORD*)a2 + 1);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v5 != v7) {
    v17 = false;
    v3 = 0;
    if (a1 == 0) {
      return v3;
    }
    goto LABEL_33;
  }
  v8 = a1;
  v9 = a2;
  if ((GameData_2263bf0 & 1) != 0) {
    v10 = (char*)GameData_2263c00;
  }
  else {
    v10 = (char*)&GameData_2263bf0 + 1;
  }
  if ((v6 & 1) != 0) {
    v11 = *((_QWORD*)a2 + 2);
  }
  else {
    v11 = (__int64)(a2 + 1);
  }
  if (memcmp((__int64)v10, v11, v5) != 0) {
    goto LABEL_31;
  }
  if ((GameData_2263c08 & 1) != 0) {
    v12 = GameData_2263c10;
  }
  else {
    v12 = (unsigned __int64)(unsigned __int8)GameData_2263c08 >> 1;
  }
  v13 = *(unsigned __int8*)a3;
  v14 = a3[1];
  if ((v13 & 1) == 0) {
    v14 = v13 >> 1;
  }
  if (v12 != v14) {
  LABEL_31:
    v17 = false;
  }
  else {
    if ((GameData_2263c08 & 1) != 0) {
      v15 = (char*)GameData_2263c18;
    }
    else {
      v15 = (char*)&GameData_2263c08 + 1;
    }
    if ((v13 & 1) != 0) {
      v16 = a3[2];
    }
    else {
      v16 = (__int64)a3 + 1;
    }
    v17 = memcmp((__int64)v15, v16, v12) == 0;
  }
  a2 = v9;
  a1 = v8;
  v3 = 0;
  if (v8 != 0) {
  LABEL_33:
    if (!v17) {
      v18 = a1;
      v19 = (__int64*)a2;
      v20 = fw_memory_g_heap_manager_ptr;
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 832, 16, 0);
      memset(v21 + 144, 0, 0x2B0u);
      v22 = GameData_212c608[0];
      *(_QWORD*)(v21 + 96) = 0;
      *(_QWORD*)(v21 + 104) = 0;
      *(_QWORD*)(v21 + 112) = 0;
      *(_QWORD*)(v21 + 120) = 0;
      *(_QWORD*)(v21 + 128) = 0;
      *(_WORD*)(v21 + 136) = 0;
      *(_QWORD*)(v21 + 16) = 0;
      *(_QWORD*)(v21 + 24) = "NULL";
      *(_QWORD*)(v21 + 138) = 0;
      *(_QWORD*)(v21 + 144) = 0;
      *(_QWORD*)(v21 + 32) = 0;
      *(_QWORD*)(v21 + 40) = 0;
      *(_QWORD*)(v21 + 48) = 0;
      *(_QWORD*)(v21 + 56) = 0;
      *(_QWORD*)(v21 + 64) = 0;
      *(_QWORD*)(v21 + 72) = 0;
      *(_QWORD*)(v21 + 80) = 0;
      *(_QWORD*)(v21 + 88) = 0;
      *(_QWORD*)v21 = v22 + 16;
      *(_QWORD*)(v21 + 8) = 0;
      game_ProcInst_Register(v21);
      v23 = GameData_2130f78[0];
      *(_QWORD*)(v21 + 200) = 0;
      *(_QWORD*)(v21 + 152) = 0;
      *(_QWORD*)(v21 + 160) = 0;
      *(_QWORD*)(v21 + 168) = 0;
      *(_QWORD*)(v21 + 176) = 0;
      *(_QWORD*)(v21 + 208) = 0;
      *(_QWORD*)(v21 + 216) = 0;
      *(_QWORD*)(v21 + 184) = 0;
      *(_QWORD*)(v21 + 192) = v21 + 200;
      *(_QWORD*)(v21 + 224) = 0;
      *(_QWORD*)(v21 + 232) = 0;
      *(_QWORD*)(v21 + 240) = 0;
      *(_DWORD*)(v21 + 248) = 1065353216;
      *(_QWORD*)(v21 + 256) = 0;
      *(_QWORD*)(v21 + 264) = 0;
      *(_QWORD*)(v21 + 272) = 0;
      *(_QWORD*)(v21 + 280) = 0;
      *(_QWORD*)(v21 + 288) = 0;
      *(_QWORD*)(v21 + 296) = 0;
      *(_QWORD*)(v21 + 304) = 0;
      *(_QWORD*)(v21 + 312) = 0;
      *(_DWORD*)(v21 + 332) = 0;
      *(_BYTE*)(v21 + 338) = 0;
      *(_QWORD*)(v21 + 344) = 0;
      *(_QWORD*)(v21 + 352) = 0;
      *(_QWORD*)(v21 + 360) = 0;
      *(_QWORD*)(v21 + 368) = 0;
      *(_QWORD*)(v21 + 376) = 0;
      *(_QWORD*)(v21 + 384) = 0;
      *(_QWORD*)(v21 + 392) = 0;
      *(_QWORD*)(v21 + 400) = 0;
      *(_QWORD*)(v21 + 408) = 0;
      *(_QWORD*)(v21 + 416) = 0;
      *(_QWORD*)(v21 + 424) = 0;
      *(_QWORD*)(v21 + 472) = 0;
      *(_QWORD*)(v21 + 480) = 0;
      *(_QWORD*)(v21 + 440) = 0;
      *(_QWORD*)(v21 + 448) = 0;
      *(_QWORD*)(v21 + 504) = 0;
      *(_QWORD*)(v21 + 512) = 0;
      *(_QWORD*)(v21 + 488) = 0;
      *(_QWORD*)(v21 + 496) = 0;
      *(_DWORD*)(v21 + 520) = 1065353216;
      *(_QWORD*)(v21 + 528) = 0;
      *(_QWORD*)(v21 + 536) = 0;
      *(_QWORD*)(v21 + 544) = 0;
      *(_DWORD*)(v21 + 552) = 1065353216;
      *(_WORD*)(v21 + 560) = 0;
      *(_WORD*)(v21 + 584) = 0;
      *(_BYTE*)(v21 + 608) = 0;
      *(_QWORD*)(v21 + 656) = 0;
      *(_QWORD*)(v21 + 648) = 0;
      *(_QWORD*)(v21 + 632) = 0;
      *(_QWORD*)(v21 + 624) = 0;
      *(_QWORD*)(v21 + 616) = 0;
      *(_QWORD*)(v21 + 688) = 0;
      *(_QWORD*)(v21 + 680) = 0;
      *(_QWORD*)(v21 + 672) = 0;
      *(_QWORD*)(v21 + 664) = 0;
      *(_DWORD*)(v21 + 696) = 1065353216;
      *(_QWORD*)(v21 + 720) = 0;
      *(_QWORD*)(v21 + 712) = 0;
      *(_QWORD*)(v21 + 704) = 0;
      *(_DWORD*)(v21 + 728) = 1065353216;
      *(_WORD*)(v21 + 736) = 0;
      *(_WORD*)(v21 + 760) = 0;
      *(_BYTE*)(v21 + 784) = 0;
      *(_QWORD*)(v21 + 792) = 0;
      *(_BYTE*)(v21 + 800) = 0;
      *(_QWORD*)v21 = v23 + 16;
      *(_DWORD*)(v21 + 320) = 3;
      *(_QWORD*)(v21 + 324) = 0;
      *(_WORD*)(v21 + 336) = 1;
      *(_DWORD*)(v21 + 432) = 0x2000;
      *(_QWORD*)(v21 + 456) = 0;
      *(_QWORD*)(v21 + 464) = v21 + 472;
      *(_QWORD*)(v21 + 640) = v21 + 648;
      v24 = GameData_2130240[0] + 2;
      *(_BYTE*)(v21 + 816) = 0;
      *(_BYTE*)(v21 + 820) = 0;
      *(_QWORD*)(v21 + 808) = v24;
      if (GameData_2263c20 == 0) {
        GameData_2263c20 = v21;
      }
      *(_QWORD*)v21 = game_telop_EventLocation_vtable;
      *(_QWORD*)(v21 + 824) = EventLocation_Destructor_175f4d0_ptr;
      v25 = *(_QWORD*)(v18 + 40);
      if (v25 != 0) {
        *(_QWORD*)(v25 + 48) = v21;
        *(_QWORD*)(v21 + 56) = *(_QWORD*)(v18 + 40);
      }
      *(_QWORD*)(v18 + 40) = v21;
      *(_QWORD*)(v21 + 24) = "EventLocation";
      *(_QWORD*)(v21 + 32) = v18;
      *(_DWORD*)(v21 + 140) = (unsigned int)game_HashString32("EventLocation");
      *(_QWORD*)(v21 + 64) = 0;
      *(_QWORD*)(v21 + 72) = 24;
      *(_QWORD*)(v21 + 80) = 1;
      v26 = GameData_2130f68;
      *(_QWORD*)(v21 + 8) = GameData_2130f68;
      *(_QWORD*)(v21 + 16) = v26;
      (*(void (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 136LL))(v21) & 1) != 0 &&
          (*(_WORD*)(v21 + 136) & 0x100) == 0) {
        *(_WORD*)(v21 + 136) |= 0x100u;
      }
      if ((*(_BYTE*)(v21 + 272) & 1) != 0) {
        *(_QWORD*)(v21 + 280) = 17;
        v27 = *(char**)(v21 + 288);
      }
      else {
        *(_BYTE*)(v21 + 272) = 34;
        v27 = (char*)(v21 + 273);
      }
      strcpy(v27, "Layout/Common.arc");
      GameRoutine_60a020(v21 + 296, "Common_TlpEventLocation");
      if (v19 != &GameData_2263bf0) {
        v28 = *(unsigned __int8*)v19;
        if ((GameData_2263bf0 & 1) != 0) {
          v31 = (v28 & 1) == 0;
          v32 = v28 >> 1;
          if (v31) {
            v33 = (__int64)v19 + 1;
          }
          else {
            v33 = v19[2];
          }
          if (v31) {
            v34 = v32;
          }
          else {
            v34 = v19[1];
          }
          SpineModel_64dde0(&GameData_2263bf0, v33, v34);
        }
        else if ((v28 & 1) != 0) {
          GameRoutine_64df20(&GameData_2263bf0, v19[2], v19[1]);
        }
        else {
          v29 = *v19;
          v30 = v19[2];
          GameData_2263bf8 = v19[1];
          GameData_2263c00 = v30;
          GameData_2263bf0 = v29;
        }
      }
      if (a3 != &GameData_2263c08) {
        v35 = *(unsigned __int8*)a3;
        if ((GameData_2263c08 & 1) != 0) {
          if ((v35 & 1) != 0) {
            v38 = a3[2];
          }
          else {
            v38 = (__int64)a3 + 1;
          }
          if ((v35 & 1) != 0) {
            v39 = a3[1];
          }
          else {
            v39 = v35 >> 1;
          }
          SpineModel_64dde0(&GameData_2263c08, v38, v39);
        }
        else if ((v35 & 1) != 0) {
          GameRoutine_64df20(&GameData_2263c08, a3[2], a3[1]);
        }
        else {
          v36 = *a3;
          v37 = a3[2];
          GameData_2263c10 = a3[1];
          GameData_2263c18 = v37;
          GameData_2263c08 = v36;
        }
      }
      v57[1] = (unsigned __int64)&GameData_1af335e;
      v40 = 0x0.0p+0f;
      v57[0] = game_HashString((__int64)&GameData_1af335e);
      if (game_GameModeData_instance_ != 0) {
        v41 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48), v57);
        if (v41 != 0) {
          v40 = (float)(int)(float)((float)*(int*)(v41 + 32) *
                                    0x1.eb851e0000000p-5f);
        }
      }
      if (*(_DWORD*)(v21 + 320) == 2) {
        v42 = (_QWORD*)game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0) {
          v44 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
          v43 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
          v46 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
          v45 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
          v31 = v45 == v46;
          v47 = v43 - 1 + v44;
          v48 = v47 >> 7;
          v49 = v47 & 0x7F;
          v50 = 16 * (v45 - v46) - 1;
          v51 = *(_QWORD*)(v46 + 8 * v48);
          if (v31) {
            v50 = 0;
          }
          v52 = v51 + 32 * v49;
          *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
              *(_DWORD*)v52 & 0xFFFFFFFD |
              (2 *
               ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
          v42[21] = *(_QWORD*)(v52 + 24);
          v53 = *(_QWORD*)(v52 + 16);
          v42[27] = v43 - 1;
          v42[20] = v53;
          if ((unsigned __int64)(v50 - (v43 + v44) - 255) <=
              0xFFFFFFFFFFFFFEFFLL) {
            v54 = *(_QWORD*)(v45 - 8);
            if (v54 != 0) {
              v55 = 128;
              if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
                v55 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v55, v54);
              v45 = v42[24];
            }
            v42[24] = v45 - 8;
          }
        }
      }
      v3 = 1;
      *(float*)(v21 + 324) = v40;
      *(_DWORD*)(v21 + 320) = 1;
    }
  }
  return v3;
}

void game_telop_17624c0(__int64* a1, int a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  _BYTE* v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int128 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;
  _BYTE v41[24];
  struct {
    _QWORD v42[3];
    int v43;
    char gap76_[4];
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } v42_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = LayoutAccessor_155fbe0(a1 + 21, "L_Title"),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 == 3) {
    v5 = &v41[23];
    qmemcpy(v41, ",UI_Deco_Result_Perfect", 23);
  }
  else {
    if (a2 == 2) {
      v41[0] = 40;
      v5 = &v41[21];
      *(_DWORD*)&v41[17] = 1952540018;
      v6 = "UI_Deco_Result_Great";
    }
    else {
      if (a2 != 1) {
        return;
      }
      v41[0] = 38;
      v5 = &v41[20];
      *(_DWORD*)&v41[16] = 1685024583;
      v6 = "UI_Deco_Result_Good";
    }
    v8 = *(_QWORD*)v6;
    v7 = *((_QWORD*)v6 + 1);
    *(_QWORD*)&v41[1] = v8;
    *(_QWORD*)&v41[9] = v7;
  }
  v9 = a1[22];
  *v5 = 0;
  if (v9 != 0) {
    v10 = std___1___shared_weak_count_lock(v9),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v10 != 0) {
      v11 = v10;
      v12 = a1[21];
      if (v12 != 0) {
        ControlCreator_13633c0(v12),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v11),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v42_.v42[0] = 0;
  v42_.v42[1] = 0;
  v42_.v42[2] = &v41[1];
  v13 = *((_QWORD*)GameData_212c540 + 1);
  v15 = *(_QWORD*)GameData_212c548;
  v14 = *((_QWORD*)GameData_212c548 + 1);
  v42_.v44 = *(_QWORD*)GameData_212c540;
  v42_.v45 = v13;
  v42_.v48 = v42_.v44;
  v42_.v49 = v13;
  v42_.v46 = v15;
  v42_.v47 = v14;
  v42_.v43 = 9;
  v16 = Manager_bc6460(*(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v42_.v42,
                       0),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(&v39_.v39, (__int64)v16, v17, (__int64)&GameData_1a9f09e),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = v39_.v39;
  v19 = v39_.v40;
  if (v39_.v40 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39_.v40 + 8), 1u,
                              memory_order_relaxed);
  }
  v20 = a1[107];
  a1[106] = v18;
  a1[107] = v19;
  if (v20 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v20),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v19 = a1[107];
  }
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v19),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v21 = v39_.v40;
  if (v39_.v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39_.v40 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v21),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v22 = 0x0.0p+0f;
  if (v4[2] != 0) {
    v23 = v4[1];
    if (v23 != 0) {
      v24 = std___1___shared_weak_count_lock(v23),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v24 == 0) {
      LABEL_36:
        v28 = v4[1];
        v22 = 0x0.0p+0f;
        if (v28 == 0 || *(_QWORD*)(v28 + 8) == -1) {
          goto LABEL_44;
        }
      LABEL_41:
        v30 = v4[2];
        if (v30 != 0) {
          v31 = *(_QWORD*)(v30 + 24);
          if (v31 != 0) {
            LODWORD(v22) = HIDWORD(*(_QWORD*)(v31 + 136));
          }
        }
        goto LABEL_44;
      }
      v25 = *v4;
      if (*v4 != 0) {
        LODWORD(v20) = *(unsigned __int8*)(v25 + 24);
        v26 = v25 + 152;
        if ((_DWORD)v20 == 0) {
          v26 = 0;
        }
        v27 = v26 != v4[2];
      }
      else {
        v27 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v27) {
          goto LABEL_36;
        }
      }
      else {
        v29 = v24;
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v29),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v27) {
          goto LABEL_36;
        }
      }
      v22 = 0x0.0p+0f;
      if ((v20 & 1) != 0) {
        goto LABEL_41;
      }
    }
  }
LABEL_44:
  v32 = a1[106];
  v33 = *(_QWORD*)v32;
  if (*(_QWORD*)v32 != 0 && *(_DWORD*)(v33 + 16) == *(_DWORD*)(v32 + 8)) {
    v34 = *(_DWORD*)(v33 + 36);
    if (v34 != 0) {
      v35 = 0;
      LODWORD(v36) = 0;
      *((_QWORD*)&v36 + 1) = 0;
      do {
        if ((int)v34 > (int)v35) {
          v37 = *(_QWORD*)(v33 + 40 + 8LL * (int)v35);
          if (v37 != 0) {
            *((float*)&v36 + 1) = v22 + 0x1.4000000000000p+6f;
            *(_OWORD*)(v37 + 16) = v36;
            *(_BYTE*)(v37 + 128) = 1;
            v34 = *(_DWORD*)(v33 + 36);
          }
        }
        ++v35;
      } while (v35 < v34);
    }
  }
  game_14a3920(v32),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v41[0] & 1) != 0 && *(_QWORD*)&v41[16] != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v38,
                                  *(__int64*)&v41[16]),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

__int64 game_telop_1762ef0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  char* v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  const char* v13[2];
  struct {
    __int64 (**v14)();
    __int64 v15;
    unsigned __int64 v16;
    unsigned __int64 v17;
    int v18;
    int v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v14_;

  v3 = GameRoutine_1760e40(a1, 0);
  v13[0] = "L_Txt";
  v13[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  GameRoutine_9b8fe0((void*)(&v14_.v14), v3, v13);
  result = v14_.v15;
  if (v14_.v15 != 0) {
    v5 = std___1___shared_weak_count_lock(v14_.v15);
    v6 = (__int64)v14_.v14;
    result = v14_.v15;
    if (v14_.v15 != 0) {
      result = std___1___shared_weak_count___release_weak(v14_.v15);
    }
    if (v5 == 0 || v6 == 0) {
      if (v5 == 0) {
        return result;
      }
      goto LABEL_20;
    }
    v14_.v20 = -1;
    v14_.v21 = -1;
    v14_.v22 = -1;
    v14_.v23 = -1;
    v14_.v24 = -1;
    v14_.v25 = -1;
    v7 = *(const char**)(a2 + 32);
    v8 = *msg_MessageManager_instance__ptr[0];
    v14_.v26 = -1;
    v14_.v27 = -1;
    v14_.v28 = -1;
    v14_.v29 = -1;
    v14_.v30 = -1;
    v14_.v31 = -1;
    v14_.v14 = msg_TagSelector_vtable;
    v14_.v15 = 0xFFFF0001FFFF0000LL;
    v14_.v16 = 0xFFFF0004FFFF0002LL;
    v14_.v17 = 0xFFFF0006FFFF0005LL;
    v14_.v32 = 8;
    v14_.v18 = -65529;
    v14_.v19 = -65528;
    v9 = GameRoutine_a4dbe0(v8, v7, 0);
    if (v9 != nullptr) {
      v10 = v9;
    }
    else {
      v10 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(v8 + 14704, v10);
    TextBoxEx_188ab20(v6, "MID_Sys_Result_Msg_GetReward");
    TextBoxEx_188aa00((void*)(&v14_.v14), v6, 0);
    result = v14_.v15;
    if (v14_.v15 != 0) {
      v11 = std___1___shared_weak_count_lock(v14_.v15);
      v12 = (__int64)v14_.v14;
      result = v14_.v15;
      if (v14_.v15 != 0) {
        result = std___1___shared_weak_count___release_weak(v14_.v15);
      }
      if (v11 != 0 && v12 != 0) {
        EmbeddedImage_1889df0(
            v12,
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] +
                                                        64) +
                                             8LL *
                                                 *(unsigned __int8*)(a2 + 16)) +
                                  64LL) +
                       8LL));
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v12 + 40LL))(v12, 1);
        goto LABEL_18;
      }
      if (v11 != 0) {
      LABEL_18:
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = std___1___shared_weak_count___release_weak(v11);
        }
      }
    }
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
  }
  return result;
}

void game_telop_1763490(__int64* a1, const char* a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  char** v12;
  const char* v13;
  int v14;
  const char* v15;
  int v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  const char* v21;
  const char* v22[2];
  struct {
    __int64* v23;
    __int64 v24;
    unsigned __int64 v25;
    unsigned __int64 v26;
    int v27;
    int v28;
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
    __int64 v40;
    int v41;
    int v42;
  } v23_;

  v22[0] = a2;
  v22[1] = (const char*)strlen(a2);
  GameRoutine_9b8fe0((void*)(&v23_.v23), a1, v22);
  if (v23_.v24 != 0) {
    v5 = std___1___shared_weak_count_lock(v23_.v24);
    v6 = (__int64)v23_.v23;
    if (v23_.v24 != 0) {
      std___1___shared_weak_count___release_weak(v23_.v24);
    }
    if (v5 == 0 || v6 == 0) {
      if (v5 == 0) {
        return;
      }
      goto LABEL_43;
    }
    v7 = HistoryLogInfo_6fb810(a3);
    TextBoxEx_188aa00((void*)(&v23_.v23), v6, 0);
    if (v23_.v24 != 0) {
      v8 = std___1___shared_weak_count_lock(v23_.v24);
      v9 = (__int64)v23_.v23;
      if (v23_.v24 != 0) {
        std___1___shared_weak_count___release_weak(v23_.v24);
      }
      if (v8 != 0 && v9 != 0) {
        if (*(_BYTE*)(a3 + 250) == 20 && (v10 = *(_QWORD*)(a3 + 576)) != 0) {
          v7 = GameHr_6ed030(v10);
          EmbeddedImage_1889ae0(v9, *(_QWORD*)(a3 + 576));
        }
        else {
          EmbeddedImage_1889df0(v9, *(_QWORD*)(a3 + 8));
        }
        (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 40LL))(v9, 1);
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
        goto LABEL_22;
      }
      if (v8 != 0) {
        goto LABEL_20;
      }
    }
  LABEL_22:
    v11 = msg_MessageManager_instance__ptr[0];
    v12 = msg_MessageManager_empty_text__ptr;
    if (v7 != nullptr) {
      v13 = v7;
    }
    else {
      v13 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14728, v13);
    v14 = *(unsigned __int8*)(a3 + 250);
    if (v14 == 46) {
      v15 = "MID_Sys_Singular_BlazeSkill";
    }
    else if (v14 == 20 && *(_QWORD*)(a3 + 576) != 0) {
      v15 = "MID_Sys_Singular_Magic";
    }
    else {
      v15 = "MID_Sys_Singular_Special";
      if (*(_QWORD*)(a3 + 552) == 0) {
        v16 = *(unsigned __int8*)(a3 + 104);
        v17 = "MID_Sys_Singular_Skill";
        if (v16 == 2) {
          v17 = "MID_Sys_Singular_Arts";
        }
        if (v16 != 3) {
          v15 = v17;
        }
      }
    }
    v18 = *v11;
    if (*v15 != 0) {
      v19 = *v11;
      v23_.v29 = -1;
      v23_.v30 = -1;
      v23_.v31 = -1;
      v23_.v32 = -1;
      v23_.v33 = -1;
      v23_.v34 = -1;
      v23_.v35 = -1;
      v23_.v36 = -1;
      v23_.v37 = -1;
      v23_.v38 = -1;
      v23_.v39 = -1;
      v23_.v40 = -1;
      v23_.v23 = GameData_212e348 + 2;
      v23_.v24 = 0xFFFF0001FFFF0000LL;
      v23_.v25 = 0xFFFF0004FFFF0002LL;
      v23_.v26 = 0xFFFF0006FFFF0005LL;
      v23_.v41 = 8;
      v23_.v42 = 0;
      v23_.v27 = -65529;
      v23_.v28 = -65528;
      v20 = GameRoutine_a4dbe0(v19, v15, 0);
    }
    else {
      v20 = *v12;
    }
    if (v20 != nullptr) {
      v21 = v20;
    }
    else {
      v21 = *v12;
    }
    GameRoutine_60a020(v18 + 14704, v21);
    TextBoxEx_188ab20(v6, "MID_Sys_Result_Msg_Acquired");
  LABEL_43:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
}

void game_telop_17ca960(__int64 a1, __int64 a2)
{
  int v2;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  char v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64* v59;
  char v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  bool v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  char v74;
  __int64* v75;
  __int64* v76;
  __int64 v77;
  const char* v78;
  __int64* v79;
  const char* v80;
  __int64 v81;
  const char* v82;
  __int64* v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;
  __int64* v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  char* v93;
  char* v94;
  __int64* v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  const char* v100;
  const char* v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  const char* v104;
  const char* v105;
  const char* v106;
  __int64 v107;
  __int64 v108;
  int v109;
  _BYTE* v110;
  __int64* v111;
  __int64* v112;
  __int64* v113;
  __int64* v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  const char* v118;
  const char* v119;
  const char* v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64* v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  unsigned __int8 v136;
  __int64 v137;
  int v138;
  __int64 v139;
  __int64* v140;
  __int64 v141;
  __int64 v142;
  int v143;
  __int64* v144;
  __int64* v145;
  const char* v146;
  __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  const char* v152;
  const char* v153;
  __int64* v154;
  const char* v155;
  const char** v156;
  const char* v157;
  const char* v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  char* v164;
  __int64 v165;
  __int64 v166;
  _QWORD* v167;
  _QWORD* v168;
  unsigned __int64 v169;
  __int64 v170;
  const char* v171;
  __int64* v172;
  const char* v173;
  const char* v174;
  char* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64* v179;
  __int64* v180;
  __int64* v181;
  unsigned int v182;
  __int64 v183;
  __int64 v184;
  _QWORD* v185;
  _QWORD* v186;
  unsigned __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  unsigned __int64 v197;
  _QWORD* v198;
  _QWORD* v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64 v202;
  const char* v203[3];
  struct {
    __int64* v204;
    __int64 v205;
    unsigned __int64 v206;
    unsigned __int64 v207;
    int v208;
    int v209;
    __int64 v210;
    __int64 v211;
    __int64 v212;
    __int64 v213;
    __int64 v214;
    __int64 v215;
    __int64 v216;
    __int64 v217;
    __int64 v218;
    __int64 v219;
    __int64 v220;
    __int64 v221;
    __int64 v222;
  } v204_;

  v2 = *(_DWORD*)a2;
  if (*(int*)a2 > 4) {
    if (v2 <= 6) {
      if (v2 != 5) {
        if (v2 != 6 || *(_QWORD*)(a2 + 32) == 0 || *(_BYTE*)(a2 + 48) == 15 ||
            *(_BYTE*)(a2 + 49) == 0) {
          return;
        }
        goto LABEL_36;
      }
      v6 = *(unsigned __int8*)(a2 + 192);
      v7 = *(_QWORD*)(a2 + 200);
    }
    else {
      if ((unsigned int)(v2 - 7) >= 2) {
        if (v2 == 9) {
          if (*(_QWORD*)(a2 + 32) == 0) {
            return;
          }
        }
        else if (v2 != 10) {
          return;
        }
        goto LABEL_36;
      }
      v6 = *(unsigned __int8*)(a2 + 112);
      v7 = *(_QWORD*)(a2 + 120);
    }
    if ((v6 & 1) != 0) {
      v8 = v7;
    }
    else {
      v8 = v6 >> 1;
    }
    if (v8 == 0) {
      return;
    }
    goto LABEL_36;
  }
  if (v2 > 2) {
    if (*(_QWORD*)(a2 + 32) == 0 || *(_QWORD*)(a2 + 40) == 0) {
      return;
    }
  }
  else if (v2 != 0) {
    if (v2 != 1 && v2 != 2 || *(_DWORD*)(a2 + 24) == 0) {
      return;
    }
  }
  else if (*(_QWORD*)(a2 + 8) == 0 || *(int*)(a2 + 24) <= 0) {
    return;
  }
LABEL_36:
  v10 = *(_QWORD*)(a2 + 8);
  v9 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a1 + 16) = *(_QWORD*)a2;
  v11 = (_DWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 24) = v10;
  *(_QWORD*)(a1 + 32) = v9;
  v12 = *(_QWORD*)(a2 + 24);
  v13 = *(_QWORD*)(a2 + 32);
  v14 = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a1 + 64) = v14;
  *(_QWORD*)(a1 + 40) = v12;
  *(_QWORD*)(a1 + 48) = v13;
  v15 = *(_QWORD*)(a2 + 56);
  v16 = *(_QWORD*)(a2 + 64);
  v17 = *(_QWORD*)(a2 + 72);
  *(_QWORD*)(a1 + 95) = *(_QWORD*)(a2 + 79);
  *(_QWORD*)(a1 + 80) = v16;
  *(_QWORD*)(a1 + 88) = v17;
  *(_QWORD*)(a1 + 72) = v15;
  if (a1 + 16 == a2) {
    *(_QWORD*)(a1 + 200) = *(_QWORD*)(a2 + 184);
    *(_DWORD*)(a1 + 232) = *(_DWORD*)(a2 + 216);
  }
  else {
    v18 = *(unsigned __int8*)(a2 + 88);
    if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
      v21 = (v18 & 1) == 0;
      v22 = v18 >> 1;
      v23 = (__int64*)(a1 + 104);
      if (v21) {
        v24 = a2 + 89;
      }
      else {
        v24 = *(_QWORD*)(a2 + 104);
      }
      if (v21) {
        v25 = v22;
      }
      else {
        v25 = *(_QWORD*)(a2 + 96);
      }
      SpineModel_64dde0(v23, v24, v25);
    }
    else if ((v18 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 104), *(_QWORD*)(a2 + 104),
                         *(_QWORD*)(a2 + 96));
    }
    else {
      v19 = *(_QWORD*)(a2 + 88);
      v20 = *(_QWORD*)(a2 + 104);
      *(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 96);
      *(_QWORD*)(a1 + 120) = v20;
      *(_QWORD*)(a1 + 104) = v19;
    }
    v26 = (__int64*)(a1 + 128);
    v27 = *(unsigned __int8*)(a2 + 112);
    if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
      v30 = (v27 & 1) == 0;
      v31 = v27 >> 1;
      if (v30) {
        v32 = a2 + 113;
      }
      else {
        v32 = *(_QWORD*)(a2 + 128);
      }
      if (v30) {
        v33 = v31;
      }
      else {
        v33 = *(_QWORD*)(a2 + 120);
      }
      SpineModel_64dde0(v26, v32, v33);
    }
    else if ((v27 & 1) != 0) {
      GameRoutine_64df20(v26, *(_QWORD*)(a2 + 128), *(_QWORD*)(a2 + 120));
    }
    else {
      v28 = *(_QWORD*)(a2 + 112);
      v29 = *(_QWORD*)(a2 + 128);
      *(_QWORD*)(a1 + 136) = *(_QWORD*)(a2 + 120);
      *(_QWORD*)(a1 + 144) = v29;
      *v26 = v28;
    }
    v34 = (__int64*)(a1 + 152);
    v35 = *(unsigned __int8*)(a2 + 136);
    if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
      v38 = (v35 & 1) == 0;
      v39 = v35 >> 1;
      if (v38) {
        v40 = a2 + 137;
      }
      else {
        v40 = *(_QWORD*)(a2 + 152);
      }
      if (v38) {
        v41 = v39;
      }
      else {
        v41 = *(_QWORD*)(a2 + 144);
      }
      SpineModel_64dde0(v34, v40, v41);
    }
    else if ((v35 & 1) != 0) {
      GameRoutine_64df20(v34, *(_QWORD*)(a2 + 152), *(_QWORD*)(a2 + 144));
    }
    else {
      v36 = *(_QWORD*)(a2 + 136);
      v37 = *(_QWORD*)(a2 + 152);
      *(_QWORD*)(a1 + 160) = *(_QWORD*)(a2 + 144);
      *(_QWORD*)(a1 + 168) = v37;
      *v34 = v36;
    }
    v42 = (__int64*)(a1 + 176);
    v43 = *(unsigned __int8*)(a2 + 160);
    if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
      v46 = (v43 & 1) == 0;
      v47 = v43 >> 1;
      if (v46) {
        v48 = a2 + 161;
      }
      else {
        v48 = *(_QWORD*)(a2 + 176);
      }
      if (v46) {
        v49 = v47;
      }
      else {
        v49 = *(_QWORD*)(a2 + 168);
      }
      SpineModel_64dde0(v42, v48, v49);
    }
    else if ((v43 & 1) != 0) {
      GameRoutine_64df20(v42, *(_QWORD*)(a2 + 176), *(_QWORD*)(a2 + 168));
    }
    else {
      v44 = *(_QWORD*)(a2 + 160);
      v45 = *(_QWORD*)(a2 + 176);
      *(_QWORD*)(a1 + 184) = *(_QWORD*)(a2 + 168);
      *(_QWORD*)(a1 + 192) = v45;
      *v42 = v44;
    }
    v50 = (__int64*)(a1 + 208);
    v51 = *(_BYTE*)(a1 + 208);
    *(_QWORD*)(a1 + 200) = *(_QWORD*)(a2 + 184);
    v52 = *(unsigned __int8*)(a2 + 192);
    if ((v51 & 1) != 0) {
      v55 = (v52 & 1) == 0;
      v56 = v52 >> 1;
      if (v55) {
        v57 = a2 + 193;
      }
      else {
        v57 = *(_QWORD*)(a2 + 208);
      }
      if (v55) {
        v58 = v56;
      }
      else {
        v58 = *(_QWORD*)(a2 + 200);
      }
      SpineModel_64dde0(v50, v57, v58);
    }
    else if ((v52 & 1) != 0) {
      GameRoutine_64df20(v50, *(_QWORD*)(a2 + 208), *(_QWORD*)(a2 + 200));
    }
    else {
      v53 = *(_QWORD*)(a2 + 192);
      v54 = *(_QWORD*)(a2 + 208);
      *(_QWORD*)(a1 + 216) = *(_QWORD*)(a2 + 200);
      *(_QWORD*)(a1 + 224) = v54;
      *v50 = v53;
    }
    v59 = (__int64*)(a1 + 240);
    v60 = *(_BYTE*)(a1 + 240);
    *(_DWORD*)(a1 + 232) = *(_DWORD*)(a2 + 216);
    v61 = *(unsigned __int8*)(a2 + 224);
    if ((v60 & 1) != 0) {
      v64 = (v61 & 1) == 0;
      v65 = v61 >> 1;
      if (v64) {
        v66 = a2 + 225;
      }
      else {
        v66 = *(_QWORD*)(a2 + 240);
      }
      if (v64) {
        v67 = v65;
      }
      else {
        v67 = *(_QWORD*)(a2 + 232);
      }
      SpineModel_64dde0(v59, v66, v67);
    }
    else if ((v61 & 1) != 0) {
      GameRoutine_64df20(v59, *(_QWORD*)(a2 + 240), *(_QWORD*)(a2 + 232));
    }
    else {
      v62 = *(_QWORD*)(a2 + 224);
      v63 = *(_QWORD*)(a2 + 240);
      *(_QWORD*)(a1 + 248) = *(_QWORD*)(a2 + 232);
      *(_QWORD*)(a1 + 256) = v63;
      *v59 = v62;
    }
  }
  *(_DWORD*)(a1 + 452) = 1157234688;
  switch (*(_DWORD*)(a1 + 16)) {
  case 0:
    v68 = game_HashString(*(_QWORD*)(a1 + 24));
    if (v68 == 0) {
      return;
    }
    v69 = *(_QWORD*)(*GameData_212c878[0] + 96);
    if (v69 == 0 || *(_QWORD*)(*GameData_212c878[0] + 112) == 0) {
      return;
    }
    v71 = v69 - 1;
    if ((v69 & (v69 - 1)) != 0) {
      v72 = v68;
      if (v68 >= v69) {
        v72 = v68 % v69;
      }
    }
    else {
      v72 = v71 & v68;
    }
    v167 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 88) + 8 * v72);
    if (v167 == nullptr) {
      return;
    }
    v168 = (_QWORD*)*v167;
    if (v168 == nullptr) {
      return;
    }
    if ((v69 & v71) != 0) {
      while (1) {
        v169 = v168[1];
        if (v169 == v68) {
          if (v168[2] == v68) {
            goto LABEL_312;
          }
        }
        else {
          if (v169 >= v69) {
            v169 %= v69;
          }
          if (v169 != v72) {
            return;
          }
        }
        v168 = (_QWORD*)*v168;
        if (v168 == nullptr) {
          return;
        }
      }
    }
    while (2) {
      v170 = v168[1];
      if (v170 != v68) {
        if ((v170 & v71) != v72) {
          return;
        }
      }
      else if (v168[2] == v68) {
      LABEL_312:
        v178 = v168[3];
        if (v178 != 0) {
          v179 = GameHr_17ccf20(a1, "L_ItemGet");
          if (v179 != nullptr) {
            v180 = v179;
            LayoutAccessor_1562cf0((__int64)v179, (unsigned int*)"Item");
            v181 = LayoutAccessor_155fbe0(v180, "L_Item");
            game_6e8720((__int64)&v204_.v204, v178);
            GameHr_1585490(v181, (unsigned __int16*)&v204_.v204, 0);
            ui_LayoutAccessor_SetPaneVisible((__int64)v180, "T_Num", 1);
            v182 = *(_DWORD*)(a1 + 40);
            v183 = ui_LayoutAccessor_FindPane(v180, "T_Num");
            if (v183 != 0) {
              v184 = __dynamic_cast(v183, GameData_212d670[0], GameData_212d690,
                                    0);
              if (v184 != 0) {
                GameRoutine_156c910(v184, "%d", 1, v182);
              }
            }
            goto LABEL_340;
          }
        }
        return;
      }
      v168 = (_QWORD*)*v168;
      if (v168 == nullptr) {
        return;
      }
      continue;
    }
  case 1:
    v111 = GameHr_17ccf20(a1, "L_ItemGet");
    if (v111 != nullptr) {
      v112 = v111;
      LayoutAccessor_1562cf0((__int64)v111, (unsigned int*)"Stock");
      v113 = LayoutAccessor_155fbe0(v112, "L_Stock");
      GameRoutine_157cb40(v113, 0, "Icon", "T_Num", *(_DWORD*)(a1 + 40), 1);
      goto LABEL_340;
    }
    return;
  case 2:
    v83 = GameHr_17ccf20(a1, "L_ItemGet");
    if (v83 != nullptr) {
      v84 = v83;
      LayoutAccessor_1562cf0((__int64)v83, (unsigned int*)"Param");
      v85 = msg_MessageManager_instance__ptr[0];
      v204_.v210 = -1;
      v204_.v211 = -1;
      v204_.v212 = -1;
      v204_.v213 = -1;
      v86 = *msg_MessageManager_instance__ptr[0];
      v87 = GameData_212e348;
      v204_.v214 = -1;
      v204_.v215 = -1;
      v204_.v216 = -1;
      v204_.v217 = -1;
      v204_.v218 = -1;
      v204_.v219 = -1;
      v204_.v220 = -1;
      v204_.v221 = -1;
      v204_.v204 = GameData_212e348 + 2;
      v204_.v205 = 0xFFFF0001FFFF0000LL;
      v204_.v206 = 0xFFFF0004FFFF0002LL;
      v204_.v207 = 0xFFFF0006FFFF0005LL;
      v204_.v222 = 8;
      v204_.v208 = -65529;
      v204_.v209 = -65528;
      v88 = GameRoutine_a4dbe0(v86, "MID_Sys_Concentration", 0);
      if (v88 != nullptr) {
        v89 = (__int64)v88;
        v90 = ui_LayoutAccessor_FindTextBox(v84, "T_Param");
        if (v90 != 0) {
          GameRoutine_156c5d0(v90, v89, 0);
        }
      }
      v91 = *(_DWORD*)(a1 + 40);
      if (v91 < 0) {
        v94 = game_util_Format("%d", v91);
      }
      else {
        v92 = *v85;
        v204_.v210 = -1;
        v204_.v211 = -1;
        v204_.v212 = -1;
        v204_.v213 = -1;
        v204_.v214 = -1;
        v204_.v215 = -1;
        v204_.v216 = -1;
        v204_.v217 = -1;
        v204_.v218 = -1;
        v204_.v219 = -1;
        v204_.v220 = -1;
        v204_.v221 = -1;
        v204_.v204 = v87 + 2;
        v204_.v205 = 0xFFFF0001FFFF0000LL;
        v204_.v206 = 0xFFFF0004FFFF0002LL;
        v204_.v207 = 0xFFFF0006FFFF0005LL;
        v204_.v222 = 8;
        v204_.v208 = -65529;
        v204_.v209 = -65528;
        v93 = GameRoutine_a4dbe0(v92, "MID_Sys_Plus", 0);
        v94 = game_util_Format("%s%d", v93, v91);
      }
      v160 = (__int64)v94;
      v161 = ui_LayoutAccessor_FindTextBox(v84, "T_Param_Num");
      if (v161 != 0) {
        GameRoutine_156c5d0(v161, v160, 0);
      }
      v162 = ui_LayoutAccessor_FindAlignment(v84, "A_Param");
      if (v162 != 0) {
        Alignment_56b600(v162);
      }
      goto LABEL_340;
    }
    return;
  case 3:
    v73 = a1;
    v74 = 0;
    goto LABEL_128;
  case 4:
    v73 = a1;
    v74 = 1;
  LABEL_128:
    if (!GameRoutine_17cd0a0(v73, v74)) {
      return;
    }
    goto LABEL_340;
  case 5:
    v114 = GameHr_17ccf20(a1, "L_CommonTxt");
    if (v114 == nullptr) {
      return;
    }
    v203[0] = "L_Txt";
    v203[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
    GameRoutine_9b8fe0((void*)(&v204_.v204), v114, v203);
    if (v204_.v205 == 0) {
      return;
    }
    v96 = std___1___shared_weak_count_lock(v204_.v205);
    v115 = (__int64)v204_.v204;
    if (v204_.v205 != 0) {
      std___1___shared_weak_count___release_weak(v204_.v205);
    }
    if (v96 == 0 || v115 == 0) {
      if (v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
        std___1___shared_weak_count___release_weak(v96);
      }
      return;
    }
    v116 = *(unsigned __int8*)(a1 + 152);
    v117 = *(_QWORD*)(a1 + 160);
    if ((v116 & 1) == 0) {
      v117 = v116 >> 1;
    }
    if (v117 != 0) {
      if ((v116 & 1) != 0) {
        v118 = *(const char**)(a1 + 168);
      }
      else {
        v118 = (const char*)(a1 + 153);
      }
      if (v118 != nullptr) {
        v119 = v118;
      }
      else {
        v119 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v119);
    }
    if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
      v120 = *(const char**)(a1 + 144);
    }
    else {
      v120 = (const char*)(a1 + 129);
    }
    TextBoxEx_188ab20(v115, v120);
    TextBoxEx_188aa00((void*)(&v204_.v204), v115, 0);
    if (v204_.v205 != 0) {
      v107 = std___1___shared_weak_count_lock(v204_.v205);
      v121 = (__int64)v204_.v204;
      if (v204_.v205 != 0) {
        std___1___shared_weak_count___release_weak(v204_.v205);
      }
      if (v107 != 0 && v121 != 0) {
        if ((*(_BYTE*)(a1 + 208) & 1) != 0) {
          v122 = *(_QWORD*)(a1 + 224);
        }
        else {
          v122 = a1 + 209;
        }
        v123 = game_HashString(v122);
        v124 = 0;
        if (v123 == 0) {
          goto LABEL_334;
        }
        v125 = *GameData_212c878[0];
        v126 = *(_QWORD*)(*GameData_212c878[0] + 96);
        if (v126 == 0 || *(_QWORD*)(v125 + 112) == 0) {
          goto LABEL_334;
        }
        v127 = v126 - 1;
        if ((v126 & (v126 - 1)) != 0) {
          v128 = v123;
          if (v123 >= v126) {
            v128 = v123 % v126;
          }
        }
        else {
          v128 = v127 & v123;
        }
        v185 = *(_QWORD**)(*(_QWORD*)(v125 + 88) + 8 * v128);
        if (v185 != nullptr) {
          v186 = (_QWORD*)*v185;
          if (v186 != nullptr) {
            if ((v126 & v127) == 0) {
              while (1) {
                v188 = v186[1];
                if (v188 == v123) {
                  if (v186[2] == v123) {
                    goto LABEL_378;
                  }
                }
                else if ((v188 & v127) != v128) {
                  goto LABEL_333;
                }
                v186 = (_QWORD*)*v186;
                v124 = 0;
                if (v186 == nullptr) {
                  goto LABEL_334;
                }
              }
            }
            do {
              v187 = v186[1];
              if (v187 == v123) {
                if (v186[2] == v123) {
                LABEL_378:
                  v124 = v186[3];
                  goto LABEL_334;
                }
              }
              else {
                if (v187 >= v126) {
                  v187 %= v126;
                }
                if (v187 != v128) {
                  break;
                }
              }
              v186 = (_QWORD*)*v186;
            } while (v186 != nullptr);
          }
        }
      LABEL_333:
        v124 = 0;
      LABEL_334:
        EmbeddedImage_1889ae0(v121, v124);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v121 + 40LL))(v121, 1);
      }
    LABEL_335:
      if (v107 != 0) {
      LABEL_336:
        if (atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107);
          std___1___shared_weak_count___release_weak(v107);
        }
      }
    }
  LABEL_338:
    if (atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
      std___1___shared_weak_count___release_weak(v96);
    }
    goto LABEL_340;
  case 6:
    v129 = GameHr_17ccf20(a1, "L_LvUP");
    if (v129 == nullptr) {
      return;
    }
    v130 = v129;
    v131 = ui_LayoutAccessor_FindPane(v129, "Face");
    if (v131 != 0) {
      v131 = __dynamic_cast(v131, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameHr_1840a20(v131, 0, *(_QWORD*)(a1 + 48), 6u, 1);
    v132 = ui_LayoutAccessor_FindPane(v130, "Icon_00");
    if (v132 != 0) {
      v133 = __dynamic_cast(v132, GameData_212d670[0], GameData_212d678[0], 0);
      if (v133 != 0) {
        GameRoutine_1841190(v133, *(_BYTE*)(a1 + 64));
      }
    }
    v134 = ui_LayoutAccessor_FindPane(v130, "Icon_01");
    if (v134 != 0) {
      v135 = __dynamic_cast(v134, GameData_212d670[0], GameData_212d678[0], 0);
      if (v135 != 0) {
        v136 = *(_BYTE*)(a1 + 65);
        v137 = v135;
        v138 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        v139 =
            (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v135 + 88LL))(v135, 0);
        if (v139 != 0) {
          *(_DWORD*)(v139 + 12) = v138;
        }
        GameRoutine_1841470(v137, v136);
      }
    }
    goto LABEL_340;
  case 7:
    v95 = GameHr_17ccf20(a1, "L_CommonTxt");
    if (v95 == nullptr) {
      return;
    }
    v203[0] = "L_Txt";
    v203[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
    GameRoutine_9b8fe0((void*)(&v204_.v204), v95, v203);
    if (v204_.v205 == 0) {
      goto LABEL_340;
    }
    v96 = std___1___shared_weak_count_lock(v204_.v205);
    v97 = (__int64)v204_.v204;
    if (v204_.v205 != 0) {
      std___1___shared_weak_count___release_weak(v204_.v205);
    }
    if (v96 == 0 || v97 == 0) {
      if (v96 != 0) {
        goto LABEL_338;
      }
      goto LABEL_340;
    }
    v98 = *(unsigned __int8*)(a1 + 152);
    v99 = *(_QWORD*)(a1 + 160);
    if ((v98 & 1) == 0) {
      v99 = v98 >> 1;
    }
    if (v99 != 0) {
      if ((v98 & 1) != 0) {
        v100 = *(const char**)(a1 + 168);
      }
      else {
        v100 = (const char*)(a1 + 153);
      }
      if (v100 != nullptr) {
        v101 = v100;
      }
      else {
        v101 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v101);
    }
    v102 = *(unsigned __int8*)(a1 + 176);
    v103 = *(_QWORD*)(a1 + 184);
    if ((v102 & 1) == 0) {
      v103 = v102 >> 1;
    }
    if (v103 != 0) {
      if ((v102 & 1) != 0) {
        v104 = *(const char**)(a1 + 192);
      }
      else {
        v104 = (const char*)(a1 + 177);
      }
      if (v104 != nullptr) {
        v105 = v104;
      }
      else {
        v105 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14728, v105);
    }
    if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
      v106 = *(const char**)(a1 + 144);
    }
    else {
      v106 = (const char*)(a1 + 129);
    }
    TextBoxEx_188ab20(v97, v106);
    TextBoxEx_188aa00((void*)(&v204_.v204), v97, 0);
    if (v204_.v205 == 0) {
      goto LABEL_338;
    }
    v107 = std___1___shared_weak_count_lock(v204_.v205);
    v108 = (__int64)v204_.v204;
    if (v204_.v205 != 0) {
      std___1___shared_weak_count___release_weak(v204_.v205);
    }
    if (v107 != 0 && v108 != 0) {
      v109 = *(_DWORD*)(a1 + 204);
      if (v109 == 0) {
        if ((*(_BYTE*)(a1 + 208) & 1) != 0) {
          v110 = *(_BYTE**)(a1 + 224);
        }
        else {
          v110 = (_BYTE*)(a1 + 209);
        }
        EmbeddedImage_1889fc0(v108, v110);
      }
      (*(void (**)(__int64, bool))(*(_QWORD*)v108 + 40LL))(v108, v109 == 0);
      goto LABEL_336;
    }
    goto LABEL_335;
  case 8:
    v143 = *(_DWORD*)(a1 + 232);
    strcpy((char*)v203, " L_TitleTxt_Black");
    if (v143 == 1) {
      qmemcpy((char*)v203 + 1, "L_TitleTxt_Black", 16);
    }
    else {
      if (v143 != 0) {
        goto LABEL_224;
      }
      qmemcpy((char*)v203 + 1, "L_TitleTxt_White", 16);
    }
    BYTE1(v203[2]) = 0;
  LABEL_224:
    v144 = GameHr_17ccf20(a1, (const char*)v203 + 1);
    v145 = v144;
    if (v144 == nullptr) {
      goto LABEL_305;
    }
    if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
      v146 = *(const char**)(a1 + 120);
    }
    else {
      v146 = (const char*)(a1 + 105);
    }
    LayoutAccessor_1562060(v144, "T_Title", v146);
    ui_LayoutAccessor_SetPaneVisible((__int64)v145, "Icon", 1);
    if (*(_BYTE*)(a1 + 200) == 1) {
      if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
        v147 = *(_QWORD*)(a1 + 144);
      }
      else {
        v147 = a1 + 129;
      }
      if (v147 == 0) {
        goto LABEL_305;
      }
      goto LABEL_303;
    }
    v148 = *(unsigned __int8*)(a1 + 152);
    v149 = *(_QWORD*)(a1 + 160);
    if ((v148 & 1) == 0) {
      v149 = v148 >> 1;
    }
    if (v149 == 0) {
      if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
        v171 = *(const char**)(a1 + 144);
      }
      else {
        v171 = (const char*)(a1 + 129);
      }
      LayoutAccessor_1562060(v145, "T_Txt", v171);
      goto LABEL_305;
    }
    v150 = *(unsigned __int8*)(a1 + 176);
    v151 = *(_QWORD*)(a1 + 184);
    if ((v150 & 1) == 0) {
      v151 = v150 >> 1;
    }
    if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
      v152 = *(const char**)(a1 + 144);
    }
    else {
      v152 = (const char*)(a1 + 129);
    }
    if (v151 != 0) {
      if (v152 == nullptr) {
        goto LABEL_305;
      }
      if ((v150 & 1) != 0) {
        v153 = *(const char**)(a1 + 192);
      }
      else {
        v153 = (const char*)(a1 + 177);
      }
      v154 = msg_MessageManager_instance__ptr[0];
      if ((v148 & 1) != 0) {
        v155 = *(const char**)(a1 + 168);
      }
      else {
        v155 = (const char*)(a1 + 153);
      }
      v156 = (const char**)msg_MessageManager_empty_text__ptr;
      if (v155 != nullptr) {
        v157 = v155;
      }
      else {
        v157 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v157);
      if (v153 != nullptr) {
        v158 = v153;
      }
      else {
        v158 = *v156;
      }
      GameRoutine_60a020(*v154 + 14728, v158);
      v159 = *v154;
    }
    else {
      if (v152 == nullptr) {
        goto LABEL_305;
      }
      v172 = msg_MessageManager_instance__ptr[0];
      if ((v148 & 1) != 0) {
        v173 = *(const char**)(a1 + 168);
      }
      else {
        v173 = (const char*)(a1 + 153);
      }
      if (v173 != nullptr) {
        v174 = v173;
      }
      else {
        v174 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v174);
      v159 = *v172;
    }
    v204_.v210 = -1;
    v204_.v211 = -1;
    v204_.v212 = -1;
    v204_.v213 = -1;
    v204_.v214 = -1;
    v204_.v215 = -1;
    v204_.v216 = -1;
    v204_.v217 = -1;
    v204_.v218 = -1;
    v204_.v219 = -1;
    v204_.v220 = -1;
    v204_.v221 = -1;
    v204_.v204 = GameData_212e348 + 2;
    v204_.v205 = 0xFFFF0001FFFF0000LL;
    v204_.v206 = 0xFFFF0004FFFF0002LL;
    v204_.v207 = 0xFFFF0006FFFF0005LL;
    v204_.v222 = 8;
    v204_.v208 = -65529;
    v204_.v209 = -65528;
    v175 = GameRoutine_a4dbe0(v159, v152, 0);
    if (v175 != nullptr) {
      v147 = (__int64)v175;
    LABEL_303:
      v176 = ui_LayoutAccessor_FindTextBox(v145, "T_Txt");
      if (v176 != 0) {
        GameRoutine_156c5d0(v176, v147, 0);
      }
    }
  LABEL_305:
    if (((__int64)v203[0] & 1) != 0 && v203[2] != nullptr) {
      v177 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v177 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v177, (__int64)v203[2]);
    }
    if (v145 != nullptr) {
    LABEL_340:
      v189 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 448) = 1;
      GameHr_1562680(v189, (unsigned int*)"In", 0x1.0000000000000p+0f);
      if (*(_DWORD*)(a1 + 16) == 8) {
        snd_Fade_Fade_10c830((__int64)&v204_.v204, 0x0.0p+0f);
        snd_play_ff2d0((__int64)"SE_SYS_Information2",
                       (__int64)"SE_SYS_Information2", (__int64)&v204_.v204, 0,
                       0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(&v204_.v204);
        goto LABEL_343;
      }
      snd_Fade_Fade_10c830((__int64)&v204_.v204, 0x0.0p+0f);
      snd_play_ff2d0((__int64)"SE_SYS_Information",
                     (__int64)"SE_SYS_Information", (__int64)&v204_.v204, 0,
                     0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(&v204_.v204);
      if (*v11 == 0) {
        v193 = game_HashString(*(_QWORD*)(a1 + 24));
        if (v193 != 0) {
          v194 = *GameData_212c878[0];
          v195 = *(_QWORD*)(*GameData_212c878[0] + 96);
          if (v195 != 0 && *(_QWORD*)(v194 + 112) != 0) {
            v196 = v195 - 1;
            if ((v195 & (v195 - 1)) != 0) {
              v197 = v193;
              if (v193 >= v195) {
                v197 = v193 % v195;
              }
            }
            else {
              v197 = v196 & v193;
            }
            v198 = *(_QWORD**)(*(_QWORD*)(v194 + 88) + 8 * v197);
            if (v198 != nullptr) {
              v199 = (_QWORD*)*v198;
              if (v199 != nullptr) {
                if ((v195 & v196) == 0) {
                  while (1) {
                    v201 = v199[1];
                    if (v201 == v193) {
                      if (v199[2] == v193) {
                        goto LABEL_375;
                      }
                    }
                    else if ((v201 & v196) != v197) {
                      goto LABEL_343;
                    }
                    v199 = (_QWORD*)*v199;
                    if (v199 == nullptr) {
                      goto LABEL_343;
                    }
                  }
                }
                do {
                  v200 = v199[1];
                  if (v200 == v193) {
                    if (v199[2] == v193) {
                    LABEL_375:
                      v202 = v199[3];
                      if (v202 != 0 && (*(_BYTE*)(v202 + 337) & 0x20) != 0) {
                        game_80c770((void*)((__int64)&v204_.v204),
                                    (__int64)"SE_SYS_ItemGet_Quest");
                      }
                      break;
                    }
                  }
                  else {
                    if (v200 >= v195) {
                      v200 %= v195;
                    }
                    if (v200 != v197) {
                      break;
                    }
                  }
                  v199 = (_QWORD*)*v199;
                } while (v199 != nullptr);
              }
            }
          }
        }
      }
    LABEL_343:
      v190 = *(unsigned __int8*)(a1 + 240);
      v191 = *(_QWORD*)(a1 + 248);
      if ((v190 & 1) == 0) {
        v191 = v190 >> 1;
      }
      if (v191 != 0) {
        if ((v190 & 1) != 0) {
          v192 = *(_QWORD*)(a1 + 256);
        }
        else {
          v192 = a1 + 241;
        }
        if (v192 != 0) {
          snd_Fade_Fade_10c830((__int64)&v204_.v204, 0x0.0p+0f);
          snd_play_ff2d0(v192, v192, (__int64)&v204_.v204, 0, 0x10001u, 0,
                         0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade(&v204_.v204);
        }
      }
    }
    break;
  case 9:
    v75 = GameHr_17ccf20(a1, "L_AssistAttack");
    if (v75 == nullptr) {
      return;
    }
    v76 = v75;
    v77 = ui_LayoutAccessor_FindPane(v75, "Face");
    if (v77 != 0) {
      v77 = __dynamic_cast(v77, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameHr_1840a20(v77, 0, *(_QWORD*)(a1 + 48), 6u, 1);
    v78 = (const char*)GameHr_67ed20(*(_QWORD**)(a1 + 48));
    v79 = msg_MessageManager_instance__ptr[0];
    if (v78 != nullptr) {
      v80 = v78;
    }
    else {
      v80 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v80);
    v81 = *v79;
    v82 = "MID_Sys_InfoTelop_CmdBtl_Support";
    v204_.v210 = -1;
    v204_.v211 = -1;
    v204_.v212 = -1;
    v204_.v213 = -1;
    v204_.v214 = -1;
    v204_.v215 = -1;
    v204_.v216 = -1;
    v204_.v217 = -1;
    v204_.v218 = -1;
    v204_.v219 = -1;
    v204_.v220 = -1;
    v204_.v221 = -1;
    v204_.v204 = GameData_212e348 + 2;
    v204_.v205 = 0xFFFF0001FFFF0000LL;
    goto LABEL_264;
  case 0xA:
    v140 = GameHr_17ccf20(a1, "L_AssistAttack");
    if (v140 == nullptr) {
      return;
    }
    v76 = v140;
    v141 = ui_LayoutAccessor_FindPane(v140, "Face");
    if (v141 != 0) {
      v142 = __dynamic_cast(v141, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v142 = 0;
    }
    v163 = game_GetHero(9u);
    GameHr_1840a20(v142, 0, v163, 6u, 1);
    v82 = "MID_Sys_InfoTelop_CmdBtl_IshAttack";
    v204_.v210 = -1;
    v204_.v211 = -1;
    v204_.v212 = -1;
    v204_.v213 = -1;
    v81 = *msg_MessageManager_instance__ptr[0];
    v204_.v214 = -1;
    v204_.v215 = -1;
    v204_.v216 = -1;
    v204_.v217 = -1;
    v204_.v218 = -1;
    v204_.v219 = -1;
    v204_.v220 = -1;
    v204_.v221 = -1;
    v204_.v204 = GameData_212e348 + 2;
    v204_.v205 = 0xFFFF0001FFFF0000LL;
  LABEL_264:
    v204_.v206 = 0xFFFF0004FFFF0002LL;
    v204_.v207 = 0xFFFF0006FFFF0005LL;
    v204_.v222 = 8;
    v204_.v208 = -65529;
    v204_.v209 = -65528;
    v164 = GameRoutine_a4dbe0(v81, v82, 0);
    if (v164 != nullptr) {
      v165 = (__int64)v164;
      v166 = ui_LayoutAccessor_FindTextBox(v76, "T_Txt");
      if (v166 != 0) {
        GameRoutine_156c5d0(v166, v165, 0);
      }
    }
    goto LABEL_340;
  default:
    return;
  }
}

#pragma GCC visibility pop
