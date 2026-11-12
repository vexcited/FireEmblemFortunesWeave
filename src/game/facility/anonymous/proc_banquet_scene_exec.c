#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcBanquetSceneExec_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcBanquetSceneExec_Destructor(__int64 a1);
__int64 ProcBanquetSceneExec_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void game_gmap_BanquetManager_GetFood(PSEUDO_X8,
                                                                 _QWORD);
__attribute__((swiftcall)) void game_gmap_BanquetManager_GetTaste(PSEUDO_X8,
                                                                  _QWORD);
__int64 BanquetManager_96a680(_QWORD, _QWORD, _QWORD);
__int64 BanquetManager_96af60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 BanquetManager_96b520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1753970(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c730;
extern __int64 (**game_menu_MenuInput_InputUnknown00_ptr)();
extern __int64 (**game_telop_RestListResultMenu_vtable)();
extern __int64 (**game_telop_anonymous_RestMenuItem_vtable)();
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_2131d10[24];
__int64 ProcBanquetSceneExec_144dc90_alt1(__int64 result) __asm__(
    "ProcBanquetSceneExec_144dc90");
__attribute__((swiftcall)) void game_gmap_BanquetManager_GetFood_alt1(
    PSEUDO_X8, __int64) __asm__("game_gmap_BanquetManager_GetFood");
__attribute__((swiftcall)) void game_gmap_BanquetManager_GetTaste_alt1(
    PSEUDO_X8, __int64) __asm__("game_gmap_BanquetManager_GetTaste");
__int64 BanquetManager_96a680_alt1(__int64, __int64,
                                   __int64*) __asm__("BanquetManager_96a680");
__int64
BanquetManager_96af60_alt1(__int64, __int64, __int64,
                           unsigned __int8**) __asm__("BanquetManager_96af60");
__int64
BanquetManager_96b520_alt1(__int64, __int64, __int64,
                           unsigned __int8**) __asm__("BanquetManager_96b520");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void GameRoutine_1753970_alt1(__int64, int) __asm__("GameRoutine_1753970");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcBanquetSceneExec_144dc90(__int64 a1);

void ProcBanquetSceneExec_144dc90(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  int v7;
  __int64** v8;
  __int64** v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  bool v27;
  _WORD* v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  signed int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  __int16 v40;
  unsigned int v41;
  int v42;
  __int16 v44;
  __int64 v45;
  unsigned int v46;
  int v47;
  __int16 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int8* v56[3];
  __int64 v57[3];
  __int64* v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61[25];

  v3 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 16LL;
  if (*GameData_212c780 == 0) {
    return;
  }
  *(_QWORD*)&v61[1] = v1;
  *(_QWORD*)&v61[3] = v2;
  v4 = v3;
  if (*GameData_212c790 != 0) {
    v6 = *(_QWORD*)(*GameData_212c790 + 8);
    v7 = *(_DWORD*)(v6 + 56);
    v8 = *(__int64***)(v6 + 8);
    v9 = *(__int64***)(v6 + 16);
    if (v7 < 0) {
      for (; v8 != v9; ++v8) {
        v10 = *v8;
        if ((*v8)[12] == 0 && v10[69] == 0) {
          goto LABEL_108;
        }
      }
    }
    else if (v8 != v9) {
      while (1) {
        v11 = *v8++;
        v10 = v11;
        if (*((_DWORD*)v11 + 21) == v7) {
          break;
        }
        if (v8 == v9) {
          goto LABEL_9;
        }
      }
    LABEL_108:
      v12 = *v10;
      goto LABEL_10;
    }
  }
LABEL_9:
  v12 = 0;
LABEL_10:
  v59 = 0;
  v60 = 0;
  v58 = nullptr;
  BanquetManager_96a680_alt1(v4, v12, (__int64*)&v58);
  v13 = (__int64)v58;
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v58 != (__int64*)v59) {
    game_gmap_BanquetManager_GetFood_alt1((void*)(v57), v4);
    game_gmap_BanquetManager_GetTaste_alt1((void*)((__int64*)v56), v4);
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v14, 1072, 16, 0);
    GameRoutine_1753970_alt1((__int64)v15, 3);
    *v15 = game_telop_RestListResultMenu_vtable;
    v15[22] = game_menu_MenuInput_InputUnknown00_ptr;
    ProcInst_657850_alt1((__int64)v15, (__int64)GameData_212c730,
                         (__int64)"RestListResultMenu", 1, a1);
    v16 = v58;
    v17 = (__int64*)v59;
    if (v58 != (__int64*)v59) {
      v18 = GameData_2131d10[0] + 16;
      do {
        v19 = *v16;
        v20 = BanquetManager_96af60_alt1(v4, *v16, (__int64)v57, v56);
        v21 = BanquetManager_96b520_alt1(v4, v19, (__int64)v57, v56);
        v22 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 280, 16, 0);
        *(_WORD*)(v22 + 16) = 0;
        *(_DWORD*)(v22 + 40) = 0;
        *(_QWORD*)(v22 + 48) = 0;
        *(_QWORD*)(v22 + 56) = 0;
        *(_QWORD*)(v22 + 64) = 0;
        *(_QWORD*)(v22 + 72) = 0;
        *(_BYTE*)(v22 + 82) = 1;
        *(_QWORD*)(v22 + 84) = 0;
        *(_QWORD*)(v22 + 112) = 0;
        *(_QWORD*)(v22 + 120) = 0;
        *(_QWORD*)(v22 + 127) = 0;
        *(_WORD*)(v22 + 80) = 257;
        *(_WORD*)(v22 + 152) = 0;
        *(_WORD*)(v22 + 160) = 0;
        *(_WORD*)(v22 + 184) = 0;
        *(_WORD*)(v22 + 208) = 0;
        *(_QWORD*)(v22 + 232) = 0;
        *(_QWORD*)(v22 + 240) = 0;
        *(_QWORD*)(v22 + 256) = 0;
        *(_QWORD*)(v22 + 264) = 0;
        *(_WORD*)(v22 + 272) = 0;
        *(_QWORD*)(v22 + 96) = v19;
        *(_QWORD*)(v22 + 104) = v18;
        LOBYTE(v61[0]) = 0;
        *(_QWORD*)v22 = game_telop_anonymous_RestMenuItem_vtable;
        *(_QWORD*)(v22 + 8) = 0;
        *(_QWORD*)(v22 + 136) = 0;
        *(_QWORD*)(v22 + 144) = 1065353216;
        v23 = game_Unit_GetParam_alt1(v19);
        v24 = *(_QWORD*)(v22 + 96);
        v25 = *(__int16*)(v24 + 492);
        *(_DWORD*)(v22 + 268) = v21;
        v26 = v23 - v25;
        if (v26 >= v20) {
          v26 = v20;
        }
        *(_DWORD*)(v22 + 264) = v26;
        v61[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                            game_g_shared_system_skills_ptr) &
                 0xFFF;
        if ((game_HasSkill_alt1((_QWORD*)(v24 + 1744), v61) & 1) == 0) {
          v27 = *(_WORD*)(v24 + 492) == 0 && *(_BYTE*)(v24 + 496) == 0;
          if (!v27 ||
              (v61[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF,
               (game_HasSkill_alt1((_QWORD*)(v24 + 1744), v61) & 1) == 0)) {
            v61[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) +
                                game_g_shared_system_skills_ptr + 4) &
                     0xFFF;
            if ((game_HasSkill_alt1((_QWORD*)(v24 + 1744), v61) & 1) == 0) {
              v28 = *(_WORD**)(v22 + 96);
              if (v28[438] != 0) {
                v29 = (v28[442] != 0) + 1;
              }
              else {
                v29 = v28[442] != 0;
              }
              if (v28[446] != 0) {
                ++v29;
              }
              if (v28[450] != 0) {
                ++v29;
              }
              if (v28[454] != 0) {
                ++v29;
              }
              if (v28[458] != 0) {
                ++v29;
              }
              if (v28[462] != 0) {
                ++v29;
              }
              if (v28[466] != 0) {
                ++v29;
              }
              if (v28[470] != 0) {
                ++v29;
              }
              if (v28[474] != 0) {
                ++v29;
              }
              if (v28[478] != 0) {
                ++v29;
              }
              if (v28[482] != 0) {
                ++v29;
              }
              if (v28[486] != 0) {
                ++v29;
              }
              if (v28[490] != 0) {
                ++v29;
              }
              if (v28[494] != 0) {
                ++v29;
              }
              if (v28[498] != 0) {
                ++v29;
              }
              if (v28[502] != 0) {
                ++v29;
              }
              if (v28[506] != 0) {
                ++v29;
              }
              if (v28[510] != 0) {
                ++v29;
              }
              if (v28[514] != 0) {
                ++v29;
              }
              if (v28[518] != 0) {
                ++v29;
              }
              v27 = v28[522] == 0;
              v30 = (unsigned __int16)v28[526];
              v31 = (unsigned __int16)v28[530];
              if (!v27) {
                ++v29;
              }
              if (v30 != 0) {
                ++v29;
              }
              if ((v29 | (v31 != 0)) != 0) {
                v32 = 0;
                v33 = 0;
                v34 = *(_QWORD*)(v22 + 96);
                v35 = *GameData_212c878[0];
                do {
                  v36 = v34 + v32;
                  if (*(_WORD*)(v34 + v32 + 876) != 0) {
                    v37 =
                        (*(_DWORD*)(v36 + 880) & 0xF) *
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v35 + 64) +
                                                       8LL *
                                                           *(unsigned __int16*)(v34 +
                                                                                v32 +
                                                                                876)) +
                                            87LL);
                    if (v37 >= *(unsigned __int8*)(v36 + 878)) {
                      v37 = *(unsigned __int8*)(v36 + 878);
                    }
                    v38 = *(_DWORD*)(v22 + 268);
                    if (v37 != 0 && v38 >= 1) {
                      *(_BYTE*)(v22 + 272) = 1;
                      if (v38 < v37) {
                        v37 = v38;
                      }
                      if (v33 < (int)v37) {
                        v40 = *(_WORD*)(v36 + 876);
                        *(_BYTE*)(v22 + 258) = *(_BYTE*)(v36 + 878);
                        *(_WORD*)(v22 + 256) = v40;
                        *(_BYTE*)(v22 + 259) = *(_BYTE*)(v34 + v32 + 879);
                        *(_DWORD*)(v22 + 260) = *(_DWORD*)(v36 + 880);
                        v33 = v37;
                      }
                    }
                  }
                  if (*(_WORD*)(v36 + 884) != 0) {
                    v41 =
                        (*(_DWORD*)(v34 + v32 + 888) & 0xF) *
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v35 + 64) +
                                                       8LL *
                                                           *(unsigned __int16*)(v36 +
                                                                                884)) +
                                            87LL);
                    if (v41 >= *(unsigned __int8*)(v34 + v32 + 886)) {
                      v41 = *(unsigned __int8*)(v34 + v32 + 886);
                    }
                    v42 = *(_DWORD*)(v22 + 268);
                    if (v41 != 0 && v42 >= 1) {
                      *(_BYTE*)(v22 + 272) = 1;
                      if (v42 < v41) {
                        v41 = v42;
                      }
                      if (v33 < (int)v41) {
                        v44 = *(_WORD*)(v36 + 884);
                        *(_BYTE*)(v22 + 258) = *(_BYTE*)(v36 + 886);
                        *(_WORD*)(v22 + 256) = v44;
                        *(_BYTE*)(v22 + 259) = *(_BYTE*)(v34 + v32 + 887);
                        *(_DWORD*)(v22 + 260) = *(_DWORD*)(v34 + v32 + 888);
                        v33 = v41;
                      }
                    }
                  }
                  v45 = v34 + v32;
                  if (*(_WORD*)(v34 + v32 + 892) != 0) {
                    v46 =
                        (*(_DWORD*)(v45 + 896) & 0xF) *
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v35 + 64) +
                                                       8LL *
                                                           *(unsigned __int16*)(v34 +
                                                                                v32 +
                                                                                892)) +
                                            87LL);
                    if (v46 >= *(unsigned __int8*)(v45 + 894)) {
                      v46 = *(unsigned __int8*)(v45 + 894);
                    }
                    v47 = *(_DWORD*)(v22 + 268);
                    if (v46 != 0 && v47 >= 1) {
                      *(_BYTE*)(v22 + 272) = 1;
                      if (v47 < v46) {
                        v46 = v47;
                      }
                      if (v33 < (int)v46) {
                        v49 = *(_WORD*)(v45 + 892);
                        *(_BYTE*)(v22 + 258) = *(_BYTE*)(v45 + 894);
                        *(_WORD*)(v22 + 256) = v49;
                        *(_BYTE*)(v22 + 259) = *(_BYTE*)(v34 + v32 + 895);
                        *(_DWORD*)(v22 + 260) = *(_DWORD*)(v45 + 896);
                        v33 = v46;
                      }
                    }
                  }
                  v32 += 24;
                } while (v32 != 192);
              }
            }
          }
        }
        BasicMenuCursor_16e0c00_alt1(v15, v22);
        ++v16;
      } while (v16 != v17);
    }
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v56[0] != nullptr) {
      v50 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v56[1] = v56[0];
      v51 = 128;
      if (*(_QWORD*)(v50 + 200) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v50 + v51, (__int64)v56[0]);
    }
    if (v57[0] != 0) {
      v52 = *v14;
      v57[1] = v57[0];
      v53 = 128;
      if (*(_QWORD*)(v52 + 200) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v52 + v53, v57[0]);
    }
    v13 = (__int64)v58;
  }
  if (v13 != 0) {
    v54 = *v14;
    v59 = v13;
    v55 = 128;
    if (*(_QWORD*)(v54 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v54 + v55, v13);
  }
}

__int64 ProcBanquetSceneExec_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_facility_anonymous_ProcBanquetSceneExec_vtable;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 160) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcBanquetSceneExec_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_facility_anonymous_ProcBanquetSceneExec_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 160) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

#pragma GCC visibility pop
