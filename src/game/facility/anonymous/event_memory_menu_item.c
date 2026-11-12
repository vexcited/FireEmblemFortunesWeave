#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* EventMemoryMenuItem_Unknown3(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1859ec0(_QWORD, _QWORD);
__int64 GameRoutine_185a4f0(_QWORD, _QWORD, _QWORD);
__int64 TimelineFile_890160(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64* GameRoutine_19e2a20(unsigned __int8);
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN GameData_21f8620;
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_2123c30[])();
extern __int64 (*game_facility_anonymous_EventMemoryMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_19e5e30(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* game_facility_anonymous_EventMemoryMenuItem_EventMemoryMenuItem_alt1(
    __int64 a1) __asm__("game_facility_anonymous_EventMemoryMenuItem_"
                        "EventMemoryMenuItem");
__int64* EventMemoryMenu_19e2a20(unsigned __int8);
__int64 GameHr_1859ec0(__int64 result, __int64);
__int64 GameRoutine_185a4f0_alt1(unsigned int, unsigned int,
                                 int) __asm__("GameRoutine_185a4f0");
__int64 TimelineFile_890160_alt1(const char*) __asm__("TimelineFile_890160");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void __attribute__((noreturn))
GameRoutine_19e5e30_alt1() __asm__("GameRoutine_19e5e30");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_EventMemoryMenuItem_EventMemoryMenuItem(
    __int64 a1);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char* GameData_20660e0[8];
extern char GameData_1a9f09e;
void GameRoutine_156c5d0(__int64, __int64, char);
void game_menu_GameMenuItem_DrawText(_QWORD*);
void EventMemoryMenuItem_DrawText(__int64 a1);

void game_facility_anonymous_EventMemoryMenuItem_EventMemoryMenuItem(__int64 a1)
{
  __int64 v1;
  int v2;
  _QWORD* v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  char* v18;
  int** v19;
  int v20;
  int* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  const char* v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  unsigned __int64 v31;
  __int64 v32;
  int* v33;
  int v34;
  unsigned __int8* i;
  unsigned __int8 v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  const char* v57;
  unsigned int v58;
  __int64 v59;
  unsigned int v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  char v65;
  unsigned __int64 v66;
  unsigned __int8 v67;
  _QWORD* v68;
  int** v69;
  __int64 v70;
  struct {
    _QWORD v71[4];
    _QWORD* v72;
  } v71_;
  int* v73;

  v1 = *(_QWORD*)(a1 + 1088);
  v2 = *(_DWORD*)(a1 + 1076);
  v3 = (_QWORD*)a1;
  v4 = v2;
  v5 = (*(_QWORD*)(a1 + 1096) - v1) >> 2;
  if (v5 > v2) {
    v4 = *(_DWORD*)(v1 + 4LL * v2);
  }
  v6 = *(_QWORD*)(a1 + 1328);
  v7 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  if (v7 >= v4) {
    v8 = v4;
  }
  else {
    v8 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  }
  if (v4 >= 0) {
    v9 = v8;
  }
  else {
    v9 = 0;
  }
  if (v5 > v2) {
    v2 = *(_DWORD*)(v1 + 4LL * v2);
  }
  v10 = *(unsigned __int8*)(v6 + v9);
  if (v7 >= v2) {
    v11 = v2;
  }
  else {
    v11 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  }
  if (v2 >= 0) {
    v12 = v11;
  }
  else {
    v12 = 0;
  }
  v13 = EventMemoryMenu_19e2a20(*(_BYTE*)(v6 + v12));
  v14 = 24;
  if (*((_BYTE*)v3 + 1064) == 0) {
    v14 = 0;
  }
  v63 = v14;
  v64 = v13;
  v15 = v3[169];
  if (v3[170] != v15) {
    v16 = 0;
    v68 = v3;
    while (1) {
      v70 = v16;
      v17 = (unsigned __int8*)(*(__int64*)((char*)v64 + v63) +
                               24LL * *(int*)(v15 + 4 * v16));
      v18 = (char*)&GameData_21f8620 + 24 * *v17;
      v19 = *(int***)v18;
      v69 = *((int***)v18 + 1);
      if (*(int***)v18 != v69) {
        break;
      }
    LABEL_21:
      v15 = v3[169];
      v16 = v70 + 1;
      if (v70 + 1 >= (unsigned __int64)((v3[170] - v15) >> 2)) {
        return;
      }
    }
    v20 = *((_DWORD*)v17 + 1);
    if (v20 == 3) {
      while (1) {
        v33 = *v19;
        v34 = **v19;
        if (v34 == 7) {
          v37 = 1;
        }
        else if (v34 == 6) {
          for (i = (unsigned __int8*)v3[191]; i != (unsigned __int8*)v3[192];
               i += 16) {
            if (*i == v10 && *((_DWORD*)i + 1) == 3 && *((_DWORD*)i + 2) == 5) {
              v36 = i[12];
              goto LABEL_79;
            }
          }
          v36 = GameRoutine_185a4f0_alt1(v10, 3u, 5);
          v38 = v3[192];
          v39 = v3[193];
          v40 = v36 & 1;
          if (v38 >= v39) {
            v42 = v3[191];
            v43 = v38 - v42;
            v44 = (__int64)(v38 - v42) >> 4;
            v45 = v44 + 1;
            if ((unsigned __int64)(v44 + 1) >> 60 != 0) {
              GameRoutine_19e5e30_alt1();
            }
            v46 = v39 - v42;
            v67 = v36;
            if (v46 >> 3 > v45) {
              v45 = v46 >> 3;
            }
            if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF0LL) {
              v47 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v47 = v45;
            }
            if (v47 != 0) {
              v65 = v36 & 1;
              if (v47 >> 60 != 0) {
                GameRoutine_60a210_alt1();
              }
              v48 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v47, 16, 0);
              v40 = v65;
            }
            else {
              v48 = 0;
            }
            v49 = v48 + v43;
            v66 = v48 + 16 * v47;
            v50 = v48 + v43 - 16 * v44;
            *(_BYTE*)v49 = v10;
            *(_BYTE*)(v49 + 12) = v40;
            v41 = v48 + v43 + 16;
            *(_QWORD*)(v49 + 4) = 0x500000003LL;
            memcpy_alt1(v50, v42, v43);
            v68[191] = v50;
            v3 = v68;
            v68[192] = v41;
            v68[193] = v66;
            if (v42 != 0) {
              v51 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v51 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v42);
            }
            v36 = v67;
          }
          else {
            v41 = v38 + 16;
            *(_BYTE*)v38 = v10;
            *(_BYTE*)(v38 + 12) = v40;
            *(_QWORD*)(v38 + 4) = 0x500000003LL;
          }
          v3[192] = v41;
        LABEL_79:
          if ((v36 & 1) != 0) {
            v37 = 0;
          }
          else {
            v37 = 2;
          }
        }
        else {
          v37 = 0;
        }
        v52 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
        *(_WORD*)(v52 + 16) = 0;
        *(_DWORD*)(v52 + 40) = 0;
        v53 = v52;
        *(_QWORD*)(v52 + 48) = 0;
        *(_QWORD*)(v52 + 56) = 0;
        *(_QWORD*)(v52 + 64) = 0;
        *(_QWORD*)(v52 + 72) = 0;
        *(_QWORD*)(v52 + 88) = v33;
        *(_BYTE*)(v52 + 96) = v10;
        *(_BYTE*)(v52 + 108) = 0;
        *(_QWORD*)(v52 + 112) = 0;
        *(_QWORD*)(v52 + 120) = 0;
        *(_QWORD*)(v52 + 128) = 0;
        *(_DWORD*)(v52 + 136) = 0;
        *(_WORD*)(v52 + 80) = 257;
        v73 = v33;
        *(_BYTE*)(v52 + 82) = 1;
        *(_QWORD*)v52 = game_facility_anonymous_EventMemoryMenuItem_vtable;
        *(_QWORD*)(v52 + 8) = 0;
        *(_DWORD*)(v52 + 84) = v70;
        *(_DWORD*)(v52 + 100) = 3;
        *(_DWORD*)(v52 + 104) = v37;
        v55 = *((_QWORD*)v33 + 12);
        v54 = *((_QWORD*)v33 + 13);
        if (v55 == v54) {
          *(_BYTE*)(v52 + 108) = 0;
        }
        else {
          v56 = 0;
          do {
            v58 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v59 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)(*(_QWORD*)v55 + 16LL));
              if (v59 != 0) {
                v60 = *(_DWORD*)(v59 + 32);
                v58 = v60 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v60 / 0x21B7900)) >>
                            32);
                if (v58 != 0) {
                  v61 = (v60 / 0x86DE40uLL) & 3;
                  if ((int)v61 > 1) {
                    if ((_DWORD)v61 == 3) {
                      v57 = (const char*)&GameData_1aabf6c;
                    }
                    else {
                      v57 = (const char*)&GameData_1ad653b;
                    }
                  }
                  else {
                    v57 = (const char*)&GameData_1abf89f;
                    if ((_DWORD)v61 != 0) {
                      v57 = (const char*)*(&GameData_1f9caf8 + v58);
                    }
                  }
                  TimelineFile_890160_alt1(v57);
                  v58 = 1;
                }
              }
              else {
                v58 = 0;
              }
            }
            v56 += v58;
            v55 += 8;
          } while (v55 != v54);
          *(_BYTE*)(v53 + 108) = v56 != 0;
          if (v56 == 0) {
            goto LABEL_49;
          }
          v71_.v71[0] = GameData_2123c30;
          v71_.v71[1] = v53;
          v71_.v72 = v71_.v71;
          GameHr_1859ec0((__int64)&v73, (__int64)v71_.v71);
          if (v71_.v72 == v71_.v71) {
            v62 = 32;
            goto LABEL_101;
          }
          if (v71_.v72 != nullptr) {
            v62 = 40;
          LABEL_101:
            (*(void (**)(__int64))(*v71_.v72 + v62))((__int64)v71_.v72);
          }
        }
      LABEL_49:
        BasicMenuCursor_16e0c00_alt1(v3, v53);
        if (++v19 == v69) {
          goto LABEL_21;
        }
      }
    }
    while (1) {
      v21 = *v19;
      v22 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
      v23 = v22;
      *(_WORD*)(v22 + 16) = 0;
      *(_DWORD*)(v22 + 40) = 0;
      *(_QWORD*)(v22 + 48) = 0;
      *(_QWORD*)(v22 + 56) = 0;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 0;
      *(_QWORD*)(v22 + 88) = v21;
      *(_BYTE*)(v22 + 96) = v10;
      *(_DWORD*)(v22 + 100) = v20;
      *(_DWORD*)(v22 + 104) = 0;
      *(_BYTE*)(v22 + 108) = 0;
      *(_QWORD*)(v22 + 112) = 0;
      *(_QWORD*)(v22 + 120) = 0;
      *(_QWORD*)(v22 + 128) = 0;
      *(_WORD*)(v22 + 80) = 257;
      *(_DWORD*)(v22 + 136) = 0;
      v73 = v21;
      *(_BYTE*)(v22 + 82) = 1;
      *(_QWORD*)v22 = game_facility_anonymous_EventMemoryMenuItem_vtable;
      *(_QWORD*)(v22 + 8) = 0;
      *(_DWORD*)(v22 + 84) = v70;
      if (v21 == nullptr || (v24 = *((_QWORD*)v21 + 12),
                             v25 = *((_QWORD*)v21 + 13), v24 == v25)) {
        *(_BYTE*)(v22 + 108) = 0;
      }
      else {
        v26 = 0;
        do {
          v28 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v29 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)(*(_QWORD*)v24 + 16LL));
            if (v29 != 0) {
              v30 = *(_DWORD*)(v29 + 32);
              v28 = v30 / 0x21B7900 -
                    11 * ((390451573 * (unsigned __int64)(v30 / 0x21B7900)) >>
                          32);
              if (v28 != 0) {
                v31 = (v30 / 0x86DE40uLL) & 3;
                if ((int)v31 > 1) {
                  if ((_DWORD)v31 == 3) {
                    v27 = (const char*)&GameData_1aabf6c;
                  }
                  else {
                    v27 = (const char*)&GameData_1ad653b;
                  }
                }
                else {
                  v27 = (const char*)&GameData_1abf89f;
                  if ((_DWORD)v31 != 0) {
                    v27 = (const char*)*(&GameData_1f9caf8 + v28);
                  }
                }
                TimelineFile_890160_alt1(v27);
                v28 = 1;
              }
            }
            else {
              v28 = 0;
            }
          }
          v26 += v28;
          v24 += 8;
        } while (v24 != v25);
        *(_BYTE*)(v23 + 108) = v26 != 0;
        if (v26 == 0) {
          goto LABEL_26;
        }
        v71_.v71[0] = GameData_2123c30;
        v71_.v71[1] = v23;
        v71_.v72 = v71_.v71;
        GameHr_1859ec0((__int64)&v73, (__int64)v71_.v71);
        if (v71_.v72 == v71_.v71) {
          v32 = 32;
          goto LABEL_47;
        }
        if (v71_.v72 != nullptr) {
          v32 = 40;
        LABEL_47:
          (*(void (**)(__int64))(*v71_.v72 + v32))((__int64)v71_.v72);
        }
      }
    LABEL_26:
      v3 = v68;
      BasicMenuCursor_16e0c00_alt1(v68, v23);
      if (++v19 == v69) {
        goto LABEL_21;
      }
    }
  }
}

const char* EventMemoryMenuItem_Unknown3(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    return *(const char**)(*(_QWORD*)(a1[11] + 8LL) + 72LL);
  }
  else {
    return "MID_Sys_Unknown";
  }
}

void EventMemoryMenuItem_DrawText(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  char* v6;
  char* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  int v15;
  __int64 v16;
  const char* v17;
  char* v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64* v24;
  __int64 v25;
  const char* v26;

  game_menu_GameMenuItem_DrawText((_QWORD*)a1);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    v2 = *(_DWORD*)(a1 + 104);
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v5 != nullptr) {
            goto LABEL_6;
          }
        }
        else {
          v21 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v21);
          if (v5 != nullptr) {
          LABEL_6:
            if (v2 != 1) {
            LABEL_7:
              if (v2 == 2) {
                v6 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0],
                                        "MID_Sys_ValueEmptyLong", 0);
                if (v6 != nullptr) {
                  v7 = v6;
                  v8 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Chapter");
                  if (v8 != 0) {
                    v9 = v7;
                  LABEL_18:
                    GameRoutine_156c5d0(v8, (__int64)v9, 0);
                    return;
                  }
                }
                return;
              }
              v15 = *(_DWORD*)(a1 + 100);
              v16 = **(unsigned int**)(a1 + 88);
              if (v15 == 0 && (_DWORD)v16 == 3) {
                v17 = "MCID_chapter_Ex01";
              LABEL_51:
                LayoutAccessor_1562060((char*)v5, (__int64)"T_Chapter", v17);
                return;
              }
              if ((_DWORD)v16 == 13 && v15 == 1 && *(_BYTE*)(a1 + 96) == 7) {
                v17 = "MCID_chapter_Ex02";
                goto LABEL_51;
              }
              if (v15 >= 3) {
                v20 = game_util_Format("MCID_chapter_Sect%02d", v16);
              }
              else {
                v20 = game_util_Format("MCID_chapter_%02d", v16);
              }
              goto LABEL_50;
            }
          LABEL_35:
            v22 = *(_DWORD*)(a1 + 100);
            v23 = **(_DWORD**)(a1 + 88);
            if (v22 == 2) {
              v20 = game_util_Format("MCID_2_title%02d", v23);
            }
            else if (v22 == 1) {
              v25 = *(unsigned __int8*)(a1 + 96);
              if ((_DWORD)v25 == 10) {
                v26 = nullptr;
              }
              else {
                v26 = GameData_20660e0[v25];
              }
              v20 = game_util_Format("MCID_1_%s_title%02d", v26, v23);
            }
            else if (v22 != 0) {
              v20 = game_util_Format("MCID_3_ISM_title%02d", v23);
            }
            else {
              if (v23 == 3) {
                v17 = "MCID_0_ISM_title03_2";
                goto LABEL_51;
              }
              v20 = game_util_Format("MCID_0_ISM_title%02d", v23);
            }
          LABEL_50:
            v17 = v20;
            goto LABEL_51;
          }
        }
      }
    }
    v5 = ui_LayoutAccessor_empty__ptr[0];
    if (v2 != 1) {
      goto LABEL_7;
    }
    goto LABEL_35;
  }
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_15;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_15;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v24 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak(v12);
  v14 = v24;
  if (v24 == nullptr) {
  LABEL_15:
    v14 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_16:
  v8 = ui_LayoutAccessor_FindTextBox(v14, (__int64)"T_Chapter");
  if (v8 != 0) {
    v9 = &GameData_1a9f09e;
    goto LABEL_18;
  }
}

#pragma GCC visibility pop
