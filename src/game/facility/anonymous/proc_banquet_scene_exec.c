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
__int64 ProcBanquetSceneExec_144dc90(__int64 result);

__int64 ProcBanquetSceneExec_144dc90(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  bool v28;
  _WORD* v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  signed int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  __int16 v41;
  unsigned int v42;
  int v43;
  __int16 v45;
  __int64 v46;
  unsigned int v47;
  int v48;
  __int16 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD v57[3];
  _QWORD v58[3];
  _QWORD* v59;
  _QWORD* v60;
  __int64 v61;
  _DWORD v62[25];

  v3 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 16LL;
  if (*GameData_212c780 == 0) {
    return result;
  }
  *(_QWORD*)&v62[1] = v1;
  *(_QWORD*)&v62[3] = v2;
  v4 = v3;
  v5 = result;
  if (*GameData_212c790 != 0) {
    v6 = *(_QWORD*)(*GameData_212c790 + 8);
    v7 = *(_DWORD*)(v6 + 56);
    v8 = *(__int64**)(v6 + 8);
    v9 = *(__int64**)(v6 + 16);
    if (v7 < 0) {
      for (; v8 != v9; ++v8) {
        v10 = (__int64*)*v8;
        if (*(_QWORD*)(*v8 + 96) == 0 && v10[69] == 0) {
          goto LABEL_108;
        }
      }
    }
    else if (v8 != v9) {
      while (1) {
        v11 = *v8++;
        v10 = (__int64*)v11;
        if (*(_DWORD*)(v11 + 84) == v7) {
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
  v60 = nullptr;
  v61 = 0;
  v59 = nullptr;
  result = BanquetManager_96a680(v4, v12, &v59);
  v14 = v59;
  v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v59 != v60) {
    game_gmap_BanquetManager_GetFood((void*)(v58), v4);
    game_gmap_BanquetManager_GetTaste((void*)(v57), v4);
    v16 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 1072, 16, 0);
    GameRoutine_1753970(v16, 3);
    *v16 = game_telop_RestListResultMenu_vtable;
    v16[22] = game_menu_MenuInput_InputUnknown00_ptr;
    result =
        ProcInst_657850(v16, GameData_212c730, "RestListResultMenu", 1, v5);
    v17 = v59;
    v18 = v60;
    if (v59 != v60) {
      v19 = GameData_2131d10[0] + 16;
      do {
        v20 = *v17;
        v21 = BanquetManager_96af60(v4, *v17, v58, v57);
        v22 = BanquetManager_96b520(v4, v20, v58, v57);
        v23 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 280, 16, 0);
        *(_WORD*)(v23 + 16) = 0;
        *(_DWORD*)(v23 + 40) = 0;
        *(_QWORD*)(v23 + 48) = 0;
        *(_QWORD*)(v23 + 56) = 0;
        *(_QWORD*)(v23 + 64) = 0;
        *(_QWORD*)(v23 + 72) = 0;
        *(_BYTE*)(v23 + 82) = 1;
        *(_QWORD*)(v23 + 84) = 0;
        *(_QWORD*)(v23 + 112) = 0;
        *(_QWORD*)(v23 + 120) = 0;
        *(_QWORD*)(v23 + 127) = 0;
        *(_WORD*)(v23 + 80) = 257;
        *(_WORD*)(v23 + 152) = 0;
        *(_WORD*)(v23 + 160) = 0;
        *(_WORD*)(v23 + 184) = 0;
        *(_WORD*)(v23 + 208) = 0;
        *(_QWORD*)(v23 + 232) = 0;
        *(_QWORD*)(v23 + 240) = 0;
        *(_QWORD*)(v23 + 256) = 0;
        *(_QWORD*)(v23 + 264) = 0;
        *(_WORD*)(v23 + 272) = 0;
        *(_QWORD*)(v23 + 96) = v20;
        *(_QWORD*)(v23 + 104) = v19;
        LOBYTE(v62[0]) = 0;
        *(_QWORD*)v23 = game_telop_anonymous_RestMenuItem_vtable;
        *(_QWORD*)(v23 + 8) = 0;
        *(_QWORD*)(v23 + 136) = 0;
        *(_QWORD*)(v23 + 144) = 1065353216;
        v24 = game_Unit_GetParam(v20, v62, 1);
        v25 = *(_QWORD*)(v23 + 96);
        v26 = *(__int16*)(v25 + 492);
        *(_DWORD*)(v23 + 268) = v22;
        v27 = v24 - v26;
        if (v27 >= v21) {
          v27 = v21;
        }
        *(_DWORD*)(v23 + 264) = v27;
        v62[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                            game_g_shared_system_skills_ptr) &
                 0xFFF;
        if ((game_HasSkill(v25 + 1744, v62) & 1) == 0) {
          v28 = *(_WORD*)(v25 + 492) == 0 && *(_BYTE*)(v25 + 496) == 0;
          if (!v28 || (v62[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                           game_g_shared_system_skills_ptr) &
                                0xFFF,
                       (game_HasSkill(v25 + 1744, v62) & 1) == 0)) {
            v62[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) +
                                game_g_shared_system_skills_ptr + 4) &
                     0xFFF;
            if ((game_HasSkill(v25 + 1744, v62) & 1) == 0) {
              v29 = *(_WORD**)(v23 + 96);
              if (v29[438] != 0) {
                v30 = (v29[442] != 0) + 1;
              }
              else {
                v30 = v29[442] != 0;
              }
              if (v29[446] != 0) {
                ++v30;
              }
              if (v29[450] != 0) {
                ++v30;
              }
              if (v29[454] != 0) {
                ++v30;
              }
              if (v29[458] != 0) {
                ++v30;
              }
              if (v29[462] != 0) {
                ++v30;
              }
              if (v29[466] != 0) {
                ++v30;
              }
              if (v29[470] != 0) {
                ++v30;
              }
              if (v29[474] != 0) {
                ++v30;
              }
              if (v29[478] != 0) {
                ++v30;
              }
              if (v29[482] != 0) {
                ++v30;
              }
              if (v29[486] != 0) {
                ++v30;
              }
              if (v29[490] != 0) {
                ++v30;
              }
              if (v29[494] != 0) {
                ++v30;
              }
              if (v29[498] != 0) {
                ++v30;
              }
              if (v29[502] != 0) {
                ++v30;
              }
              if (v29[506] != 0) {
                ++v30;
              }
              if (v29[510] != 0) {
                ++v30;
              }
              if (v29[514] != 0) {
                ++v30;
              }
              if (v29[518] != 0) {
                ++v30;
              }
              v28 = v29[522] == 0;
              v31 = (unsigned __int16)v29[526];
              v32 = (unsigned __int16)v29[530];
              if (!v28) {
                ++v30;
              }
              if (v31 != 0) {
                ++v30;
              }
              if ((v30 | (v32 != 0)) != 0) {
                v33 = 0;
                v34 = 0;
                v35 = *(_QWORD*)(v23 + 96);
                v36 = *GameData_212c878[0];
                do {
                  v37 = v35 + v33;
                  if (*(_WORD*)(v35 + v33 + 876) != 0) {
                    v38 =
                        (*(_DWORD*)(v37 + 880) & 0xF) *
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v36 + 64) +
                                                       8LL *
                                                           *(unsigned __int16*)(v35 +
                                                                                v33 +
                                                                                876)) +
                                            87LL);
                    if (v38 >= *(unsigned __int8*)(v37 + 878)) {
                      v38 = *(unsigned __int8*)(v37 + 878);
                    }
                    v39 = *(_DWORD*)(v23 + 268);
                    if (v38 != 0 && v39 >= 1) {
                      *(_BYTE*)(v23 + 272) = 1;
                      if (v39 < v38) {
                        v38 = v39;
                      }
                      if (v34 < (int)v38) {
                        v41 = *(_WORD*)(v37 + 876);
                        *(_BYTE*)(v23 + 258) = *(_BYTE*)(v37 + 878);
                        *(_WORD*)(v23 + 256) = v41;
                        *(_BYTE*)(v23 + 259) = *(_BYTE*)(v35 + v33 + 879);
                        *(_DWORD*)(v23 + 260) = *(_DWORD*)(v37 + 880);
                        v34 = v38;
                      }
                    }
                  }
                  if (*(_WORD*)(v37 + 884) != 0) {
                    v42 =
                        (*(_DWORD*)(v35 + v33 + 888) & 0xF) *
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v36 + 64) +
                                                       8LL *
                                                           *(unsigned __int16*)(v37 +
                                                                                884)) +
                                            87LL);
                    if (v42 >= *(unsigned __int8*)(v35 + v33 + 886)) {
                      v42 = *(unsigned __int8*)(v35 + v33 + 886);
                    }
                    v43 = *(_DWORD*)(v23 + 268);
                    if (v42 != 0 && v43 >= 1) {
                      *(_BYTE*)(v23 + 272) = 1;
                      if (v43 < v42) {
                        v42 = v43;
                      }
                      if (v34 < (int)v42) {
                        v45 = *(_WORD*)(v37 + 884);
                        *(_BYTE*)(v23 + 258) = *(_BYTE*)(v37 + 886);
                        *(_WORD*)(v23 + 256) = v45;
                        *(_BYTE*)(v23 + 259) = *(_BYTE*)(v35 + v33 + 887);
                        *(_DWORD*)(v23 + 260) = *(_DWORD*)(v35 + v33 + 888);
                        v34 = v42;
                      }
                    }
                  }
                  v46 = v35 + v33;
                  if (*(_WORD*)(v35 + v33 + 892) != 0) {
                    v47 =
                        (*(_DWORD*)(v46 + 896) & 0xF) *
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v36 + 64) +
                                                       8LL *
                                                           *(unsigned __int16*)(v35 +
                                                                                v33 +
                                                                                892)) +
                                            87LL);
                    if (v47 >= *(unsigned __int8*)(v46 + 894)) {
                      v47 = *(unsigned __int8*)(v46 + 894);
                    }
                    v48 = *(_DWORD*)(v23 + 268);
                    if (v47 != 0 && v48 >= 1) {
                      *(_BYTE*)(v23 + 272) = 1;
                      if (v48 < v47) {
                        v47 = v48;
                      }
                      if (v34 < (int)v47) {
                        v50 = *(_WORD*)(v46 + 892);
                        *(_BYTE*)(v23 + 258) = *(_BYTE*)(v46 + 894);
                        *(_WORD*)(v23 + 256) = v50;
                        *(_BYTE*)(v23 + 259) = *(_BYTE*)(v35 + v33 + 895);
                        *(_DWORD*)(v23 + 260) = *(_DWORD*)(v46 + 896);
                        v34 = v47;
                      }
                    }
                  }
                  v33 += 24;
                } while (v33 != 192);
              }
            }
          }
        }
        result = BasicMenuCursor_16e0c00(v16, v23);
        ++v17;
      } while (v17 != v18);
    }
    v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v57[0] != 0) {
      v51 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v57[1] = v57[0];
      v52 = 128;
      if (*(_QWORD*)(v51 + 200) == 0) {
        v52 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(v51 + v52, v57[0], v13);
    }
    if (v58[0] != 0) {
      v53 = *v15;
      v58[1] = v58[0];
      v54 = 128;
      if (*(_QWORD*)(v53 + 200) == 0) {
        v54 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(v53 + v54, v58[0], v13);
    }
    v14 = v59;
  }
  if (v14 != nullptr) {
    v55 = *v15;
    v60 = v14;
    v56 = 128;
    if (*(_QWORD*)(v55 + 200) == 0) {
      v56 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(v55 + v56, v14, v13);
  }
  return result;
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
