#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1030ce0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_8903a0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1845b60(_QWORD);
__int64 GameRoutine_1846260(_QWORD);
__int64 GameRoutine_1847710(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSideStoryData_12b51c0(_QWORD, _QWORD);
__int64 GameSubquestData_125a300(_QWORD, _QWORD, _QWORD);
__int64 GuideBaseMenu_Unknown139(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_Help_SideStoryInfo_SideStoryInfo(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_20e41b0[])();
extern __int64 (*game_gameui_Help_SideStoryInfo_GetIcon_ptr[])();
extern __int64 (*game_menu_anonymous_BaseQuestMenuItem_vtable)();
extern __int64 (*game_menu_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_MainquestMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SideStoryMenuItem_vtable[])();
extern __int64 GameData_20e45c8;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212efa8[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d630[11];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcQuestMenu_Destructor(__int64 a1);
__int64 ProcQuestMenu_Unknown102(__int64 a1);
__int64 ProcQuestMenu_Unknown128(_QWORD* a1);
__int64 ProcQuestMenu_Unknown139(__int64 a1, __int64* a2);
bool game_menu_anonymous_ProcQuestMenu_SortAndFilter_closure_Invoke(__int64 a1,
                                                                    __int64 a2);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern char* game_menu_kRouteQuestLabels[4];
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcQuestMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                        __int64 unused_int0,
                                                        int* a1);

__int64 ProcQuestMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1072);
  if (v1 != 0) {
    *(_QWORD*)(a1 + 1080) = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
    a1 = v2;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcQuestMenu_Unknown102(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    return 0;
  }
  v3 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                      &GameData_20e45c8, 0);
  if (v3 == 0) {
    if (*(__int64 (***)())v1 == game_menu_anonymous_SideStoryMenuItem_vtable) {
      result = *(_QWORD*)(**(_QWORD**)(v1 + 152) + 200LL);
      if (result == 0) {
        return result;
      }
      goto LABEL_5;
    }
    return 0;
  }
  v4 = **(_QWORD**)(v3 + 152);
  if (*(_WORD*)(v4 + 128) == 0) {
    return 0;
  }
  result = *(_QWORD*)(*(_QWORD*)(v4 + 136) + 8LL);

LABEL_5:
  result = game_gmap_SpotMgr_FindSpot(result);
  if (result != 0) {
    if (*(_BYTE*)(a1 + 1096) == 1) {
      GameRoutine_1846260(a1);
    }
    else {
      GameRoutine_1845b60(a1);
    }
    return 13;
  }
  return result;
}

__int64 ProcQuestMenu_Unknown128(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64** v20;
  __int64* v21;
  __int64* v22;
  __int64** v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 result;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned int v56;
  __int128 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  int v83;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_DWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)v2 = game_menu_anonymous_EmptyMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v3 = a1[43];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  *(_QWORD*)(v2 + 8) = a1;
  a1[43] = v2;
  if (game_GameModeData_instance_ != 0) {
    v4 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  else {
    v4 = 0;
  }
  GameRoutine_8903a0((void*)&v65, v4);
  v5 = v65;
  v6 = v66;
  if ((__int64*)v66 == v65) {
    goto LABEL_30;
  }
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v9 = *(_QWORD*)(v6 - 8);
  v8 = (__int64*)(v6 - 8);
  v10 = v7;
  v11 = *(_QWORD*)(v9 + 144);
  *(_QWORD*)(v7 + 8) = 0;
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_70:
    GameRoutine_60a1d0(v12);
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v15, 16, 0);
    *(_QWORD*)(v10 + 24) = v13;
    *(_QWORD*)(v10 + 32) = v14;
    *(_QWORD*)(v10 + 16) = v15 | 1;
    goto LABEL_15;
  }
  v14 = v10 + 17;
  *(_BYTE*)(v10 + 16) = 2 * v12;
  if (v12 != 0) {
  LABEL_15:
    memmove(v14, v11, v13);
  }
  *(_BYTE*)(v14 + v13) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_DWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_DWORD*)(v10 + 40) = 0;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)v10 = game_menu_anonymous_MainquestMenuItem_vtable;
  *(_BYTE*)(v10 + 160) = 1;
  *(_QWORD*)(v10 + 144) = GameData_20e41b0;
  v16 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  *(_QWORD*)(v10 + 152) = v16;
  GameRoutine_16e0c00(a1, v10);
  v5 = v65;
  if (v8 != v65) {
    v17 = GameData_212d630[0] + 2;
    do {
      v20 = (__int64**)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
      v22 = (__int64*)*--v8;
      v21 = v22;
      v23 = v20;
      v24 = v22[18];
      *v20 = v17;
      v20[1] = nullptr;
      v12 = strlen(v24);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_70;
      }
      v25 = v12;
      if (v12 >= 0x17) {
        if ((v12 | 7) == 0x17) {
          v18 = 26;
        }
        else {
          v18 = (v12 | 7) + 1;
        }
        v19 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
        v23[3] = (__int64*)v25;
        v23[4] = (__int64*)v19;
        v23[2] = (__int64*)(v18 | 1);
      }
      else {
        v19 = (__int64)v23 + 17;
        *((_BYTE*)v23 + 16) = 2 * v12;
        if (v12 == 0) {
          goto LABEL_25;
        }
      }
      memmove(v19, v24, v25);
    LABEL_25:
      *(_BYTE*)(v19 + v25) = 0;
      v23[8] = nullptr;
      v23[9] = nullptr;
      v23[6] = nullptr;
      v23[7] = nullptr;
      *((_WORD*)v23 + 40) = 257;
      *((_DWORD*)v23 + 24) = 0;
      v23[13] = nullptr;
      v23[14] = nullptr;
      v23[16] = nullptr;
      v23[17] = nullptr;
      *((_DWORD*)v23 + 10) = 0;
      *v23 = (__int64*)game_menu_anonymous_MainquestMenuItem_vtable;
      *((_BYTE*)v23 + 82) = 1;
      *((_BYTE*)v23 + 160) = 0;
      v23[18] = (__int64*)GameData_20e41b0;
      v23[19] = v21;
      GameRoutine_16e0c00(a1, v23);
      v5 = v65;
    } while (v8 != v65);
  }

LABEL_30:
  v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v5 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v5);
  }
  v66 = 0;
  v67 = 0;
  v65 = nullptr;
  GameSubquestData_125a300(*(_QWORD*)GameData_212c7b0[0], &v65, 1);
  v28 = v65;
  v29 = (__int64*)v66;
  if (v65 != (__int64*)v66) {
    do {
      v30 = *v28++;
      v31 = fw_memory_HeapManager_Allocate(*v26, 160, 16, 0);
      GameRoutine_1847710(v31, 1, v30);
      GameRoutine_16e0c00(a1, v31);
    } while (v28 != v29);
    v28 = v65;
  }
  if (v28 != nullptr) {
    v32 = *v26;
    v66 = (unsigned __int64)v28;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(v32 + v33, v28);
  }
  v34 = (__int64*)a1[134];
  v35 = (__int64*)a1[135];
  while (v34 != v35) {
    v36 = *v34++;
    v37 = fw_memory_HeapManager_Allocate(*v26, 160, 16, 0);
    GameRoutine_1847710(v37, 3, v36);
    GameRoutine_16e0c00(a1, v37);
  }
  v63 = nullptr;
  v64 = 0;
  v62 = nullptr;
  result = GameSideStoryData_12b51c0(*(_QWORD*)GameData_212c7b8[0], &v62);
  v39 = v62;
  v40 = v63;
  if (v62 != v63) {
    v61 = GameData_212d630[0] + 2;
    v60 = GameData_212e348 + 2;
    while (1) {
      v41 = *v39;
      v42 = fw_memory_HeapManager_Allocate(*v26, 224, 16, 0);
      v43 = *(_BYTE**)(*(_QWORD*)v41 + 64LL);
      if (v43 != nullptr && *v43 != 0) {
        v44 = *msg_MessageManager_instance__ptr[0];
        v70 = -1;
        v71 = -1;
        v72 = -1;
        v73 = -1;
        v74 = -1;
        v75 = -1;
        v76 = -1;
        v77 = -1;
        v78 = -1;
        v79 = -1;
        v80 = -1;
        v81 = -1;
        v65 = v60;
        v66 = 0xFFFF0001FFFF0000LL;
        v67 = 0xFFFF0004FFFF0002LL;
        v68 = 0xFFFF0006FFFF0005LL;
        v82 = 8;
        v83 = 0;
        v69 = 0xFFFF0008FFFF0007LL;
        v45 = GameRoutine_a4dbe0(v44, v43, 0, &v65);
      }
      else {
        v45 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      *(_QWORD*)v42 = v61;
      *(_QWORD*)(v42 + 8) = 0;
      v12 = strlen(v45);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_70;
      }
      v46 = v12;
      if (v12 >= 0x17) {
        v48 = a1;
        v49 = v40;
        if ((v12 | 7) == 0x17) {
          v50 = 26;
        }
        else {
          v50 = (v12 | 7) + 1;
        }
        v51 = fw_memory_HeapManager_Allocate(*v26, v50, 16, 0);
        v52 = v50 | 1;
        v47 = v51;
        *(_QWORD*)(v42 + 24) = v46;
        *(_QWORD*)(v42 + 32) = v51;
        v40 = v49;
        a1 = v48;
        *(_QWORD*)(v42 + 16) = v52;
      }
      else {
        v47 = v42 + 17;
        *(_BYTE*)(v42 + 16) = 2 * v12;
        if (v12 == 0) {
          goto LABEL_59;
        }
      }
      memmove(v47, v45, v46);
    LABEL_59:
      *(_BYTE*)(v47 + v46) = 0;
      *(_QWORD*)(v42 + 64) = 0;
      *(_QWORD*)(v42 + 72) = 0;
      *(_QWORD*)(v42 + 48) = 0;
      *(_QWORD*)(v42 + 56) = 0;
      *(_WORD*)(v42 + 80) = 257;
      *(_DWORD*)(v42 + 96) = 0;
      *(_QWORD*)(v42 + 104) = 0;
      *(_QWORD*)(v42 + 112) = 0;
      *(_QWORD*)(v42 + 128) = 0;
      *(_QWORD*)(v42 + 136) = 0;
      *(_BYTE*)(v42 + 82) = 1;
      *(_DWORD*)(v42 + 40) = 2;
      *(_QWORD*)v42 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
      game_gameui_Help_SideStoryInfo_SideStoryInfo(v42 + 144, v41);
      *(_DWORD*)(v42 + 40) = 2;
      *(_QWORD*)v42 = game_menu_anonymous_SideStoryMenuItem_vtable;
      *(_QWORD*)(v42 + 144) = game_gameui_Help_SideStoryInfo_GetIcon_ptr;
      v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (*(_QWORD*)GameData_212efa8[0] != 0) {
        GameRoutine_1030ce0((void*)&v65, *(_QWORD*)GameData_212efa8[0],
                            *(_QWORD*)(v42 + 152));
        v53 = *(_QWORD*)(v42 + 112);
        *(_DWORD*)(v42 + 96) = (_DWORD)v65;
        v54 = v66;
        v55 = v67;
        v66 = 0;
        v67 = 0;
        *(_QWORD*)(v42 + 104) = v54;
        *(_QWORD*)(v42 + 112) = v55;
        if (v53 != 0) {
          std___1___shared_weak_count___release_weak(v53);
          v53 = v67;
        }
        v56 = v70;
        *(_QWORD*)(v42 + 128) = v69;
        v57 = *(_OWORD*)(v42 + 128);
        *((_QWORD*)&v57 + 1) = v56;
        *(_OWORD*)(v42 + 128) = v57;
        if (v53 != 0) {
          std___1___shared_weak_count___release_weak(v53);
        }
      }
      result = GameRoutine_16e0c00(a1, v42);
      if (++v39 == v40) {
        v39 = v62;
        break;
      }
    }
  }
  if (v39 != nullptr) {
    v58 = *v26;
    v63 = v39;
    v59 = 128;
    if (*(_QWORD*)(v58 + 200) == 0) {
      v59 = 56;
    }
    return nn_mem_StandardAllocator_Free(v58 + v59, v39);
  }
  return result;
}

__int64 ProcQuestMenu_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = GuideBaseMenu_Unknown139();
  if (*(_BYTE*)(a1 + 1068) == 1) {
    v5 = a2[1];
    v6 = a2[2];
    if (v5 >= v6) {
      v8 = *a2;
      v9 = v5 - *a2;
      v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
      if (v10 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v11 = fw_memory_g_heap_manager_ptr;
      v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
      if (2 * v12 > v10) {
        v10 = 2 * v12;
      }
      if (v12 >= 0x333333333333333LL) {
        v13 = 0x666666666666666LL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + v9;
      *(_QWORD*)v15 = &GameData_1a9f09e;
      *(_QWORD*)(v15 + 8) = "MID_KeyHelp_Cancel";
      *(_BYTE*)(v15 + 28) = 0;
      *(_QWORD*)(v15 + 32) = 0;
      *(_BYTE*)(v15 + 16) = 1;
      v16 = v14 + 40 * v13;
      v7 = v14 + v9 + 40;
      *(_QWORD*)(v15 + 20) = 0x300000001LL;
      result = memcpy(v14, v8, v9);
      *a2 = v14;
      a2[1] = v7;
      a2[2] = v16;
      if (v8 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v17, v8);
      }
    }
    else {
      *(_BYTE*)(v5 + 28) = 0;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = &GameData_1a9f09e;
      *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Cancel";
      v7 = v5 + 40;
      *(_BYTE*)(v5 + 16) = 1;
      *(_QWORD*)(v5 + 20) = 0x300000001LL;
    }
    a2[1] = v7;
  }
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcQuestMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                        __int64 unused_int0,
                                                        int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v3;
  const char* v4;
  const char* v5;
  __int64 v6;
  char* v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[4];
  int v14;
  int v15;
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
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v3 = *a1;
  if (*a1 == 3) {
    if (game_GameModeData_instance_ != 0 &&
        (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1) <=
            3u) {
      v5 = game_menu_kRouteQuestLabels[(
          unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1)];
    }
    else {
      v5 = "MID_QuestMenu_RouteQuest";
    }
  }
  else {
    v4 = "MID_QuestMenu_MaineQuest";
    if (v3 == 1) {
      v4 = "MID_QuestMenu_SubQuest";
    }
    if (v3 == 2) {
      v5 = "MID_QuestMenu_SideStoryQuest";
    }
    else {
      v5 = v4;
    }
  }
  if (*v5 != 0) {
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v6 = *msg_MessageManager_instance__ptr[0];
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v13[0] = msg_TagSelector_vtable;
    v13[1] = 0xFFFF0001FFFF0000LL;
    v13[2] = 0xFFFF0004FFFF0002LL;
    v13[3] = 0xFFFF0006FFFF0005LL;
    v28 = 8;
    v14 = -65529;
    v15 = -65528;
    v7 = (char*)GameRoutine_a4dbe0(v6, v5, 0, v13);
  }
  else {
    v7 = msg_MessageManager_empty_text_;
  }
  result = strlen(v7);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v9 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (result | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    a2[1] = v9;
    a2[2] = v12;
    *a2 = v11 | 1;
    v10 = (char*)v12;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v10 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_19;
    }
  }
  result = memmove(v10, v7, v9);
LABEL_19:
  v10[v9] = 0;
  {
    result;
    return;
  }
}

bool game_menu_anonymous_ProcQuestMenu_SortAndFilter_closure_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) == *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
