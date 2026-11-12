#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1750310(__int64, int);
__int64 GameRoutine_1758480(_QWORD, _QWORD);
__int64 GameRoutine_1758970(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_telop_anonymous_IndividualMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 IndividualMenuItem_Destructor_1756c80(__int64 a1);
__int64 IndividualMenuItem_Unknown73_1758340(__int64 a1, __int64 a2);
__int64 IndividualMenuItem_Unknown75(__int64 result);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BlnPopup_19f25b0(_QWORD, long double);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_174d800(__int64, float, float);
__int64 GameRoutine_174dbb0(__int64, int);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 StatusNum_1890220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64* GameData_212d670[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d690;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
__int64 IndividualMenuItem_1758480(__int64 a1, int a2);
__attribute__((swiftcall)) void
GameRoutine_1114920_alt1(PSEUDO_X8, __int64*,
                         const char**) __asm__("GameRoutine_1114920");
__attribute__((swiftcall)) void
GameRoutine_9d5180_alt1(PSEUDO_X8, __int64*,
                        _QWORD*) __asm__("GameRoutine_9d5180");
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, __int64*,
                                                   const char**);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1758970_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1758970");
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GaugeUtil_1750310(__int64, int);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 StatusClass_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 StatusClass_189dc40(__int64 result, float, __int64, int, unsigned int);
__int64 StatusNum_1890220_alt1(__int64, unsigned int, unsigned int,
                               unsigned int, char, char,
                               int) __asm__("StatusNum_1890220");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
bool GameRoutine_8c4ee0(__int64);
extern __int64* GameData_212d678[2];
extern __int64 ui_Manager_instance_;
extern char* GameData_20bb378[4];
extern char GameData_1a9f09e;
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910_alt1(__int64 result, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void GameRoutine_157cb40(__int64*, int, const char*, const char*, unsigned int,
                         char);
void IndividualMenuItem_1758480_alt1(__int64, unsigned int) __asm__(
    "IndividualMenuItem_1758480");
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void game_174d800(__int64*, float, float);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 IndividualMenuItem_Unknown55(__int64 a1);
void IndividualMenuItem_Unknown72(__int64 a1);

__int64 IndividualMenuItem_Destructor_1756c80(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  bool v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  __int64 v27;
  __int64 v28;

  v1 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)a1 = game_telop_anonymous_IndividualMenuItem_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 392);
    if (v1 == v3) {
      goto LABEL_8;
    }
    do {
      if (*(_QWORD*)(v3 - 8) != 0) {
        std___1___shared_weak_count___release_weak();
      }
      v3 -= 16;
    } while (v3 != v1);
    v4 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 392) = v1;
    v1 = v4;
    if (v4 != 0) {
    LABEL_8:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v1);
    }
  }
  v6 = *(_QWORD**)(a1 + 360);
  if (v6 != nullptr) {
    v7 = *(_QWORD**)(a1 + 368);
    if (v6 == v7) {
      goto LABEL_17;
    }
    v8 = v7 - 20;
    v9 = v7 - 20;
    do {
      v10 = *v9;
      v9 -= 20;
      (*(void (**)(_QWORD*))(v10 + 24))(v8);
      v11 = v8 == v6;
      v8 = v9;
    } while (!v11);
    v12 = *(_QWORD**)(a1 + 360);
    *(_QWORD*)(a1 + 368) = v6;
    v6 = v12;
    if (v12 != nullptr) {
    LABEL_17:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v6);
    }
  }
  *(_QWORD*)(a1 + 224) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 344);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 320);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 296);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  *(_QWORD*)(a1 + 96) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 216);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 192);
    if (v22 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
    }
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 168);
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
    }
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 32);
    if (v27 != 0) {
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

__int64 IndividualMenuItem_Unknown55(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  int v9;
  const char* v10;
  const char* v11;
  unsigned int* v12;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  _BYTE* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  int v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int64* v47;
  float v48;
  float v49;
  int v50;
  int v51;
  int v52;
  float v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  __int64* i;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 j;
  __int64 v67;
  __int64 v68;
  __int64 result;
  const char* v70[3];
  __int64 v71[3];

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v17 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak_alt2(v17);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v5 = ui_LayoutAccessor_FindPane_alt1(v4, "Face");
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  }
  if ((GameHr_1840740(v5, 0, **(_QWORD**)(a1 + 408), 6u, 1) & 1) != 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)v4, "Face", 1);
  }
  v6 = **(_QWORD**)(a1 + 408);
  if (*(_BYTE*)(v6 + 2136) != 0) {
    v7 = game_97b2f0(v6 + 2104);
    if (v7 == nullptr) {
      goto LABEL_16;
    }
  }
  else {
    v7 = GameHr_67ed20(*(_QWORD**)(v6 + 392));
    if (v7 == nullptr) {
      goto LABEL_16;
    }
  }
  v8 = ui_LayoutAccessor_FindTextBox(v4, "T_Txt");
  if (v8 != 0) {
    GameRoutine_156c5d0(v8, (__int64)v7, 0);
  }
LABEL_16:
  LOWORD(v71[0]) = 0;
  LOWORD(v70[0]) = 0;
  v9 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 408) + 64LL) + 16LL);
  switch (v9) {
  case 3:
    GameRoutine_60a020((__int64)v71, "MID_IndividualMenu_ActualCombat");
    v10 = "IndividualType_Practice";
    goto LABEL_22;
  case 2:
    v10 = "IndividualType_Training";
    strcpy((char*)v71, ",MID_ArenaMenu_Training");
  LABEL_22:
    GameRoutine_60a020((__int64)v70, v10);
    break;
  case 1:
    strcpy((char*)v71, "(MID_GmapMenu_Explore");
    strcpy((char*)v70, "*IndividualType_Search");
    break;
  default:
    break;
  }
  if ((v71[0] & 1) != 0) {
    v11 = (const char*)v71[2];
  }
  else {
    v11 = (char*)v71 + 1;
  }
  LayoutAccessor_1562060(v4, "T_IndividualType", v11);
  if (((__int64)v70[0] & 1) != 0) {
    v12 = (unsigned int*)v70[2];
  }
  else {
    v12 = (unsigned int*)((char*)v70 + 1);
  }
  GameHr_1562680((__int64)v4, v12, 0x1.0000000000000p+0f);
  v13 = ui_LayoutAccessor_FindPane_alt1(v4, "IndividualType_Icon");
  if (v13 != 0) {
    v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
    if (v14 != 0) {
      v15 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 408) + 64LL) + 16LL);
      if ((v15 & 0xFC) != 0) {
        v16 = &GameData_1a9f09e;
      }
      else {
        v16 = GameData_20bb378[v15 & 3];
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v14, 0, 7u, v16);
    }
  }
  if (((__int64)v70[0] & 1) != 0 && v70[2] != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v70[2]);
  }
  if ((v71[0] & 1) != 0 && v71[2] != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v71[2]);
  }
  v20 = *(_QWORD*)(a1 + 408);
  v22 = *(_QWORD*)(v20 + 32);
  v21 = *(_QWORD*)(v20 + 40);
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, "N_DropItem", v21 != v22);
  v23 = v21 - v22;
  if (v23 != 0) {
    v24 = ui_LayoutAccessor_FindPane_alt1(v4, "IconDropItem");
    if (v24 != 0) {
      v25 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d678[0], 0);
      if (v25 != 0) {
        v26 = **(_QWORD**)(*(_QWORD*)(a1 + 408) + 32LL);
        if (v26 != 0) {
          v27 = *(_QWORD*)(v26 + 24);
          v28 = *(unsigned __int8*)(v27 + 560);
          v29 = (v28 & 1) == 0;
          if ((v28 & 1) != 0) {
            v30 = *(_QWORD*)(v27 + 568);
          }
          else {
            v30 = v28 >> 1;
          }
          v31 = *(_BYTE**)(v27 + 576);
          v32 = (_BYTE*)(v27 + 561);
          if (!v29) {
            v32 = v31;
          }
          if (v30 != 0) {
            v33 = v32;
          }
          else {
            v33 = nullptr;
          }
          Manager_136a920(ui_Manager_instance_ + 1264, v25, 0, 2u, v33);
        }
      }
    }
    v34 = ui_LayoutAccessor_FindPane_alt1(v4, "T_NumItem");
    if (v34 != 0) {
      v35 = __dynamic_cast(v34, GameData_212d670[0], GameData_212d690, 0);
      if (v35 != 0) {
        GameRoutine_156c910_alt1(v35, "%d", 1, v23 >> 3);
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(
      (__int64)v4, "L_Gold",
      (signed __int32)*(_DWORD*)(*(_QWORD*)(a1 + 408) + 24LL) > 0);
  v36 = LayoutAccessor_155fbe0_alt1(v4, "L_Gold");
  GameRoutine_157cb40(v36, 0, "Icon", "T_Num",
                      *(_DWORD*)(*(_QWORD*)(a1 + 408) + 24LL), 1);
  v37 = *(_DWORD*)(a1 + 120);
  v38 = 0;
  v39 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if (v37 >= (int)v39) {
    v40 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  }
  else {
    v40 = *(_DWORD*)(a1 + 120);
  }
  v41 = v40 - 1;
  if (v37 <= 0) {
    v41 = 0;
  }
  if (v37 < 1) {
    v42 = 1;
  }
  else {
    v42 = v40;
  }
  if (v42 != (_DWORD)v39) {
    v38 = *(_DWORD*)(GameData_21d9968 + 4LL * v42);
  }
  v43 = *(_DWORD*)(GameData_21d9968 + 4LL * v41);
  v70[0] = "L_Lv/L_Num";
  v70[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
  GameRoutine_9d5180_alt1((void*)(v71), v4, v70);
  if (v71[1] != 0) {
    v44 = std___1___shared_weak_count_lock_alt1(v71[1]);
    v45 = v71[0];
    if (v71[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v71[1]);
    }
    if (v44 != 0 && v45 != 0) {
      v46 = *(unsigned __int8*)(**(_QWORD**)(a1 + 408) + 498LL);
      StatusNum_1890220_alt1(v45, v46, v46, 0x63u, 1, 0, -1);
    }
    else if (v44 == 0) {
      goto LABEL_82;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
      std___1___shared_weak_count___release_weak_alt2(v44);
    }
  }
LABEL_82:
  v47 = LayoutAccessor_155fbe0_alt1(v4, "L_Lv/L_Gauge");
  v48 = 0x1.0000000000000p+0f;
  v49 = 0x1.0000000000000p+0f;
  if (v38 >= 1) {
    v50 = v38 - v43;
    if (v38 != v43) {
      v51 = *(_DWORD*)(a1 + 108);
      if (v51 <= v43) {
        v51 = v43;
      }
      v52 = v51 - v43;
      if (v50 < v52) {
        v52 = v38 - v43;
      }
      v49 = (float)v52 / (float)v50;
    }
  }
  if (v38 >= 1) {
    v53 = (float)v43;
    if ((float)v43 != (float)v38) {
      v54 = *(float*)(a1 + 128);
      v55 = (float)v38 - v53;
      if (v54 < v53) {
        v54 = (float)v43;
      }
      v56 = v54 - v53;
      if (v55 < v56) {
        v56 = (float)v38 - v53;
      }
      v48 = v56 / v55;
    }
  }
  game_174d800(v47, v49, v48);
  v70[0] = "L_LvUP";
  v70[1] = (_BYTE*)((_UNKNOWN*)0x6LL);
  GameRoutine_1114920_alt1((void*)(v71), v4, v70);
  if (v71[1] != 0) {
    v57 = std___1___shared_weak_count_lock_alt1(v71[1]);
    v58 = v71[0];
    if (v71[1] != 0) {
      std___1___shared_weak_count___release_weak_alt2(v71[1]);
    }
    if (v57 != 0 && v58 != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v58 + 40LL))(
          v58, *(unsigned __int8*)(a1 + 92));
    }
    else if (v57 == 0) {
      goto LABEL_105;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
      std___1___shared_weak_count___release_weak_alt2(v57);
    }
  }
LABEL_105:
  v70[0] = "L_Class";
  v70[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
  GameRoutine_fa73c0((void*)(v71), v4, v70);
  if (v71[1] == 0) {
    goto LABEL_114;
  }
  v59 = std___1___shared_weak_count_lock_alt1(v71[1]);
  v60 = (__int64*)v71[0];
  if (v71[1] != 0) {
    std___1___shared_weak_count___release_weak_alt2(v71[1]);
  }
  if (v59 != 0 && v60 != nullptr) {
    StatusClass_189d120(v60, **(_QWORD***)(a1 + 408), 1, 0, 0, 0, 0);
    StatusClass_189dc40((__int64)v60, *(float*)(a1 + 256),
                        **(_QWORD**)(a1 + 408), *(_DWORD*)(a1 + 236),
                        *(_DWORD*)(a1 + 352));
  }
  else if (v59 == 0) {
    goto LABEL_114;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    std___1___shared_weak_count___release_weak_alt2(v59);
  }
LABEL_114:
  v61 = *(__int64**)(a1 + 384);
  for (i = *(__int64**)(a1 + 392); v61 != i; v61 += 2) {
    v63 = v61[1];
    if (v63 != 0) {
      v64 = std___1___shared_weak_count_lock_alt1(v63);
      if (v64 != 0) {
        v65 = v64;
        if (*v61 != 0) {
          LayoutAccessor_155e830(*v61, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
          std___1___shared_weak_count___release_weak_alt2(v65);
        }
      }
    }
  }
  v67 = *(_QWORD*)(a1 + 360);
  for (j = *(_QWORD*)(a1 + 368); v67 != j; v67 += 160) {
    GaugeUtil_1750310(v67, 0);
  }
  v68 = ui_LayoutAccessor_FindAlignment(v4, "A_MasteryInfo00");
  if (v68 != 0) {
    Alignment_56b600(v68);
  }
  result = ui_LayoutAccessor_FindAlignment(v4, "A_MasteryInfo01");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

void IndividualMenuItem_Unknown72(__int64 a1)
{

#pragma clang fp contract(off)
  long double v2;
  __int64 v3;
  __int64 i;
  bool v5;

  if (GameRoutine_8c4ee0(a1 + 416)) {
    if (*(float*)(a1 + 112) != 0x0.0p+0f) {
      IndividualMenuItem_1758480_alt1(a1, 1u);
    }
    if (*(float*)(a1 + 240) != 0x0.0p+0f) {
      GameRoutine_1758970_alt1(a1, 1);
    }
    v3 = *(_QWORD*)(a1 + 360);
    for (i = *(_QWORD*)(a1 + 368); v3 != i; v3 += 160) {
      GaugeUtil_1750310(v3, 1);
    }
  }
  LODWORD(v2) = *(_DWORD*)(a1 + 88);
  v5 = *(_DWORD*)(a1 + 84) == 2 || *(float*)&v2 < 0x1.0000000000000p+3f;
  if (!v5 &&
      ((*(__int64 (**)(__int64, long double))(*(_QWORD*)a1 + 584LL))(a1, v2) &
       1) != 0) {
    *(_DWORD*)(a1 + 84) = 2;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
  }
}

__int64 IndividualMenuItem_Unknown73_1758340(__int64 a1, __int64 a2)
{
  char v2;
  __int64 (***v4)(_QWORD, _QWORD);
  __int64 (***v5)(_QWORD, _QWORD);
  __int64 (***v6)(_QWORD, _QWORD);
  __int64 (**v7)(_QWORD, __int64);
  char v8;

  v2 = 0;
  if (*(float*)(a1 + 112) == 0.0 && *(float*)(a1 + 240) == 0.0) {
    v4 = *(__int64 (****)(_QWORD, _QWORD))(a1 + 360);
    v5 = *(__int64 (****)(_QWORD, _QWORD))(a1 + 368);
    if (v4 == v5) {
      v2 = 1;
    }
    else {
      v6 = v4;
      do {
        v7 = *v6;
        v6 += 20;
        v8 = (*v7)(v4, a2);
        if ((v8 & 1) != 0) {
          break;
        }
        v4 = v6;
      } while (v6 != v5);
      v2 = v8 ^ 1;
    }
  }
  return v2 & 1;
}

__int64 IndividualMenuItem_Unknown75(__int64 result)
{
  __int64 v1;
  __int64 i;
  __int64 v3;

  v1 = result;
  if (*(float*)(result + 112) != 0.0) {
    result = GameRoutine_1758480(result, 2);
  }
  if (*(float*)(v1 + 240) != 0.0) {
    result = GameRoutine_1758970(v1, 2);
  }
  v3 = *(_QWORD*)(v1 + 360);
  for (i = *(_QWORD*)(v1 + 368); v3 != i; v3 += 160) {
    result = GameRoutine_1750310(v3, 2);
  }
  return result;
}

__int64 IndividualMenuItem_1758480(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  atomic_ullong* v24;
  __int64* v25;
  __int64 v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  atomic_ullong* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  unsigned __int64 v40;
  int v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  float v46;
  float v47;
  int v48;
  int v49;
  int v50;
  float v51;
  float v52;
  float v53;
  float v54;
  __int64* v56;
  __int64* v57;
  _QWORD v58[2];
  __int64 v59;
  __int64 v60;

  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak_alt1();
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v7 < 1) {
    v9 = 0;
  }
  else {
    v8 = *(_DWORD*)(a1 + 104);
    v9 = 0;
    v10 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v7 - 1));
    if (v10 >= v8) {
      v10 = *(_DWORD*)(a1 + 104);
    }
    if (v8 >= *(_DWORD*)GameData_21d9968) {
      v11 = v10;
    }
    else {
      v11 = *(_DWORD*)GameData_21d9968;
    }
    while (1) {
      v12 = (unsigned int)(v9 + v7) >> 1;
      v13 = *(_DWORD*)(GameData_21d9968 + 4LL * v12);
      if (v11 == v13) {
        break;
      }
      if (v11 < v13) {
        LODWORD(v7) = (unsigned int)(v9 + v7) >> 1;
      }
      else {
        v9 = v12 + 1;
      }
      if (v9 >= (int)v7) {
        goto LABEL_20;
      }
    }
    v9 = v12 + 1;
  }
LABEL_20:
  GameRoutine_174dbb0(a1 + 96, a2);
  v14 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v14 < 1) {
    v16 = 0;
  }
  else {
    v15 = *(_DWORD*)(a1 + 104);
    v16 = 0;
    v17 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v14 - 1));
    if (v17 >= v15) {
      v17 = *(_DWORD*)(a1 + 104);
    }
    if (v15 >= *(_DWORD*)GameData_21d9968) {
      v18 = v17;
    }
    else {
      v18 = *(_DWORD*)GameData_21d9968;
    }
    while (1) {
      v19 = (unsigned int)(v16 + v14) >> 1;
      v20 = *(_DWORD*)(GameData_21d9968 + 4LL * v19);
      if (v18 == v20) {
        break;
      }
      if (v18 < v20) {
        LODWORD(v14) = (unsigned int)(v16 + v14) >> 1;
      }
      else {
        v16 = v19 + 1;
      }
      if (v16 >= (int)v14) {
        goto LABEL_34;
      }
    }
    v16 = v19 + 1;
  }
LABEL_34:
  snd_Fade_Fade_10c830(&v59, 0.0);
  snd_play_ff2d0((void*)(v58), "SE_SYS_EXP", "SE_SYS_EXP", &v59, 0, 65537, 0,
                 0.0, 1.0);
  snd_Fade_Destroy_Fade(&v59);
  if (v9 < v16) {
    v21 = *(_QWORD*)(a1 + 56);
    if (v21 != 0) {
      v22 = std___1___shared_weak_count_lock(v21);
      if (v22 != 0) {
        v23 = v22;
        v24 = (atomic_ullong*)(v22 + 8);
        v25 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v25 != nullptr) {
            goto LABEL_40;
          }
        }
        else {
          v56 = v25;
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak_alt1();
          v25 = v56;
          if (v56 != nullptr) {
          LABEL_40:
            v58[0] = "L_LvUP";
            v58[1] = 6;
            GameRoutine_1114920((void*)(&v59), v25, v58);
            if (v60 != 0) {
              v26 = std___1___shared_weak_count_lock(v60);
              v28 = v59;
              if (v60 != 0) {
                *(__n128*)&v27 =
                    std___1___shared_weak_count___release_weak_alt1();
              }
              if (v26 != 0 && v28 != 0) {
                BlnPopup_19f25b0(v28, v27);
              }
              else if (v26 == 0) {
                goto LABEL_49;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
                std___1___shared_weak_count___release_weak_alt1();
              }
            }
          LABEL_49:
            v58[0] = "L_Lv/L_Num";
            v58[1] = 10;
            GameRoutine_9d5180((void*)(&v59), v6, v58);
            if (v60 != 0) {
              v29 = std___1___shared_weak_count_lock(v60);
              v30 = v59;
              if (v60 != 0) {
                std___1___shared_weak_count___release_weak_alt1();
              }
              if (v29 != 0 && v30 != 0) {
                StatusNum_1890220(v30, (unsigned int)v16, (unsigned int)v16, 99,
                                  1, 0, 0xFFFFFFFFLL);
              }
              else if (v29 == 0) {
                goto LABEL_58;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                std___1___shared_weak_count___release_weak_alt1();
              }
            }
          LABEL_58:
            *(_BYTE*)(a1 + 92) = 1;
            snd_Fade_Fade_10c830(&v59, 0.0);
            snd_play_ff2d0((void*)(v58), "SE_SYS_Level_Up", "SE_SYS_Level_Up",
                           &v59, 0, 65537, 0, 0.0, 1.0);
            snd_Fade_Destroy_Fade(&v59);
            v31 = *(_QWORD*)(a1 + 56);
            if (v31 != 0) {
              v32 = std___1___shared_weak_count_lock(v31);
              if (v32 != 0) {
                v33 = v32;
                v34 = (atomic_ullong*)(v32 + 8);
                v35 = *(__int64**)(a1 + 48);
                if (atomic_fetch_add(v34, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  if (v35 != nullptr) {
                  LABEL_63:
                    v36 = ui_LayoutAccessor_FindPane(v35, "T_Lv_Num");
                    if (v36 != 0) {
                      v37 = __dynamic_cast(v36, GameData_212d670[0],
                                           GameData_212d690, 0);
                      if (v37 != 0) {
                        GameRoutine_156c910(v37, "%d", 1);
                      }
                    }
                    goto LABEL_66;
                  }
                }
                else {
                  v57 = v35;
                  (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
                  std___1___shared_weak_count___release_weak_alt1();
                  v35 = v57;
                  if (v57 != nullptr) {
                    goto LABEL_63;
                  }
                }
              }
            }
            v35 = ui_LayoutAccessor_empty__ptr[0];
            goto LABEL_63;
          }
        }
      }
    }
    v25 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_40;
  }
LABEL_66:
  v38 = *(_DWORD*)(a1 + 120);
  v39 = 0;
  v40 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if (v38 >= (int)v40) {
    v41 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  }
  else {
    v41 = *(_DWORD*)(a1 + 120);
  }
  v42 = v41 - 1;
  if (v38 <= 0) {
    v42 = 0;
  }
  if (v38 < 1) {
    v43 = 1;
  }
  else {
    v43 = v41;
  }
  if (v43 != (_DWORD)v40) {
    v39 = *(_DWORD*)(GameData_21d9968 + 4LL * v43);
  }
  v44 = *(_DWORD*)(GameData_21d9968 + 4LL * v42);
  v45 = LayoutAccessor_155fbe0(v6, "L_Lv/L_Gauge");
  v46 = 1.0;
  v47 = 1.0;
  if (v39 >= 1) {
    v48 = v39 - v44;
    if (v39 != v44) {
      v49 = *(_DWORD*)(a1 + 108);
      if (v49 <= v44) {
        v49 = v44;
      }
      v50 = v49 - v44;
      if (v48 < v50) {
        v50 = v39 - v44;
      }
      v47 = (float)v50 / (float)v48;
    }
  }
  if (v39 >= 1) {
    v51 = (float)v44;
    if ((float)v44 != (float)v39) {
      v52 = *(float*)(a1 + 128);
      v53 = (float)v39 - v51;
      if (v52 < v51) {
        v52 = (float)v44;
      }
      v54 = v52 - v51;
      if (v53 < v54) {
        v54 = (float)v39 - v51;
      }
      v46 = v54 / v53;
    }
  }
  return GameRoutine_174d800(v45, v47, v46);
}

#pragma GCC visibility pop
