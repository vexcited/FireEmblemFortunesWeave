#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_1015560(_QWORD);
__int64 GameRoutine_133f1d0(_QWORD);
__int64 GameRoutine_136a7b0(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 GameRoutine_16ddaa0(__int64 result, int);
__int64 GameRoutine_1713a00(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GuideBaseMenu_Unknown139(void);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_20ae070[])();
extern __int64 (*GameData_20ae390[])();
extern __int64 (*game_gameui_DelayImageLoader_vtable[])();
extern __int64 (*game_gameui_ImageLoader_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_anonymous_GuideMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_MarginMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ProcGuideMenu_vtable[])();
extern __int64 GameData_212c610;
extern __int64 GameData_212c7c8[8];
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2131cb8[35];
extern __int64 GameData_22416e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d6a8;
extern __int64* GameData_212dea8;
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130fa8[2];
extern __int64* GameData_2131ae8;
extern __int64* snd_g_fileIndex_ptr[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcGuideMenu_Unknown92(__int64 a1);
__int64 ProcGuideMenu_Unknown96(__int64 a1);
__int64 ProcGuideMenu_Unknown104(__int64 a1, char a2);
__int64 ProcGuideMenu_Unknown106(__int64 a1, char a2);
__int64 ProcGuideMenu_Unknown139_17137e0(__int64 result);
__int64 ProcGuideMenu_1713f50(__int64 result, _QWORD* a2);
__int64 ProcGuideMenu_1713fe0(__int64 a1, char a2);
__int64 ProcGuideMenu_Destructor(_QWORD* a1);
__int64 ProcGuideMenu_DeletingDestructor(_QWORD* a1);
_QWORD* ProcGuideMenu_Unknown128(__int64 a1, __int64 a2);
__int64 ProcGuideMenu_Unknown143(__int64 a1);
__int64 ProcGuideMenu_Unknown145(__int64 a1, int a2, char a3);
__int64
GuideBaseMenu_Unknown139_alt1(__int64,
                              __int64*) __asm__("GuideBaseMenu_Unknown139");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_13033d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcGuideMenu_Unknown10(__int64 result, __int64* a2);
__int64 ProcGuideMenu_Unknown139(__int64 a1, __int64* a2);
__int64 ProcGuideMenu_Unknown2(__int64 a1);
__int64
game_menu_anonymous_ProcGuideMenu_AddItemList_closure_Invoke(__int64 result,
                                                             __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1713820(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 game_821090(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_PageTab_SetupLabel(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern int GameData_2175540;
void __attribute__((noreturn)) GameRoutine_17139e0(void);
__int64 ProcGuideMenu_Unknown84(__int64* a1);
__int64 ProcGuideMenu_Unknown144(__int64 a1, int a2, char a3, char a4);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64 ProcGuideMenu_1713820(unsigned __int64 result, int a2);

__int64 ProcGuideMenu_Unknown84(__int64* a1)
{
  long double v2;
  char* v3;
  __int64 v4;
  char* v5;
  char* v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  signed __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  signed __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  signed __int64 v31;
  __int64 v32;
  __int64 v33;
  signed __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  signed __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  char* v47;
  char* v48;
  int v49;
  int* v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  long double v59;
  _BYTE* v60;
  __int64 result;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  char v66;
  _BYTE v67[7];
  _BYTE* v68;
  __int64 v69;

  snd_Fade_Fade_10c830(&v66, 0.0);
  snd_play_ff2d0((void*)(&v65), "SE_SYS_GuideMenu_Open",
                 "SE_SYS_GuideMenu_Open", &v66, 0, 65537, 0, 0.0, 1.0);
  snd_Fade_Destroy_Fade(&v66);
  LODWORD(v2) = 1.0;
  v3 = (char*)LayoutAccessor_1562680(a1 + 106, "Wait", v2);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    v5 = nullptr;
    v8 = nullptr;
    v7 = nullptr;
    goto LABEL_82;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v3 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
    v4 = game_GameModeData_instance_;
    *(_DWORD*)v3 = 0;
    v5 = v3 + 4;
    v6 = v3;
    v7 = v3;
    v8 = v3 + 4;
    if (v4 == 0) {
      goto LABEL_82;
    }
  }
  else {
    v6 = nullptr;
    v5 = nullptr;
  }
  if ((*(_DWORD*)(v4 + 60) | 2) == 3) {
    v9 = v5 - v6;
    v10 = (v5 - v6) >> 2;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 62 != 0) {
      goto LABEL_136;
    }
    if (v9 >> 1 > v11) {
      v11 = v9 >> 1;
    }
    if (v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v11;
    }
    if (v12 != 0) {
      if (v12 >> 62 != 0) {
        goto LABEL_137;
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v8 = (char*)(v13 + 4 * v12);
    v14 = (char*)(v5 - v6);
    v7 = (char*)(v13 + v9 - 4 * v10);
    *(_DWORD*)(v13 + v9) = 1;
    v5 = (char*)(v13 + v9 + 4);
    v3 = (char*)memcpy(v7, v6, v14);
    if (v6 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      v3 = (char*)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    }
  }
  else {
    v8 = v5;
    v7 = v6;
  }
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_82;
  }
  if ((*(_DWORD*)(game_GameModeData_instance_ + 60) | 2) == 3) {
    if (v5 >= v8) {
      v17 = v5 - v7;
      v18 = (v5 - v7) >> 2;
      v19 = v18 + 1;
      if ((unsigned __int64)(v18 + 1) >> 62 != 0) {
        goto LABEL_136;
      }
      if ((v8 - v7) >> 1 > v19) {
        v19 = (v8 - v7) >> 1;
      }
      if ((unsigned __int64)(v8 - v7) >= 0x7FFFFFFFFFFFFFFCLL) {
        v20 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v20 = v19;
      }
      if (v20 != 0) {
        if (v20 >> 62 != 0) {
          goto LABEL_137;
        }
        v21 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v20, 16, 0);
      }
      else {
        v21 = 0;
      }
      v8 = (char*)(v21 + 4 * v20);
      v22 = v5 - v7;
      v23 = v21 + v17 - 4 * v18;
      *(_DWORD*)(v21 + v17) = 2;
      v5 = (char*)(v21 + v17 + 4);
      v3 = (char*)memcpy(v23, v7, v22);
      if (v7 != nullptr) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        v3 = (char*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
      }
      v7 = (char*)v23;
      v16 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_82;
      }
      goto LABEL_44;
    }
    *(_DWORD*)v5 = 2;
    v5 += 4;
  }
  v16 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_82;
  }
LABEL_44:
  if ((*(_DWORD*)(v16 + 60) | 2) != 3) {
    goto LABEL_47;
  }
  if (v5 < v8) {
    *(_DWORD*)v5 = 3;
    v5 += 4;
  LABEL_47:
    v25 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_82;
    }
    goto LABEL_64;
  }
  v26 = v5 - v7;
  v27 = (v5 - v7) >> 2;
  v28 = v27 + 1;
  if ((unsigned __int64)(v27 + 1) >> 62 != 0) {
    goto LABEL_136;
  }
  if ((v8 - v7) >> 1 > v28) {
    v28 = (v8 - v7) >> 1;
  }
  if ((unsigned __int64)(v8 - v7) >= 0x7FFFFFFFFFFFFFFCLL) {
    v29 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v29 = v28;
  }
  if (v29 != 0) {
    if (v29 >> 62 != 0) {
      goto LABEL_137;
    }
    v30 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         4 * v29, 16, 0);
  }
  else {
    v30 = 0;
  }
  v8 = (char*)(v30 + 4 * v29);
  v31 = v5 - v7;
  v32 = v30 + v26 - 4 * v27;
  *(_DWORD*)(v30 + v26) = 3;
  v5 = (char*)(v30 + v26 + 4);
  v3 = (char*)memcpy(v32, v7, v31);
  if (v7 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    v3 = (char*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
  v7 = (char*)v32;
  v25 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
  LABEL_64:
    if ((unsigned int)(*(_DWORD*)(v25 + 60) - 1) > 2) {
      goto LABEL_82;
    }
    if (v5 < v8) {
      *(_DWORD*)v5 = 4;
      v5 += 4;
      goto LABEL_82;
    }
    v34 = v5 - v7;
    v35 = (v5 - v7) >> 2;
    v36 = v35 + 1;
    if ((unsigned __int64)(v35 + 1) >> 62 == 0) {
      v37 = fw_memory_g_heap_manager_ptr;
      if ((v8 - v7) >> 1 > v36) {
        v36 = (v8 - v7) >> 1;
      }
      if ((unsigned __int64)(v8 - v7) >= 0x7FFFFFFFFFFFFFFCLL) {
        v38 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v38 = v36;
      }
      if (v38 == 0) {
        v39 = 0;
        goto LABEL_77;
      }
      if (v38 >> 62 == 0) {
        v39 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v38, 16, 0);
      LABEL_77:
        v8 = (char*)(v39 + 4 * v38);
        v40 = v5 - v7;
        v41 = v39 + v34 - 4 * v35;
        *(_DWORD*)(v39 + v34) = 4;
        v5 = (char*)(v39 + v34 + 4);
        memcpy(v41, v7, v40);
        if (v7 != nullptr) {
          v42 = 128;
          if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) == 0) {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v37 + v42);
        }
        v7 = (char*)v41;
        goto LABEL_82;
      }
    LABEL_137:
      GameRoutine_60a210(v3);
    }
  LABEL_136:
    GameRoutine_17139e0();
  }
LABEL_82:
  v43 = a1[150];
  if (v43 != 0) {
    a1[151] = v43;
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v44);
  }
  a1[150] = (__int64)v7;
  a1[151] = (__int64)v5;
  v45 = GameData_2175540;
  a1[152] = (__int64)v8;
  if (v45 == 5 && v7 != v5) {
    do {
      v52 = *(_DWORD*)v7;
      if (*(int*)v7 <= 1) {
        if (v52 == 0) {
          if (game_GameModeData_instance_ == 0 ||
              *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
            goto LABEL_96;
          }
        LABEL_119:
          v54 = (unsigned int)(v52 + 35);
          goto LABEL_120;
        }
        if (v52 != 1 || game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v53 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if (v53 != 1) {
          goto LABEL_115;
        }
        v54 = 36;
      }
      else if (v52 == 2) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v53 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if (v53 != 1) {
        LABEL_115:
          if (v53 != 3) {
            goto LABEL_96;
          }
          goto LABEL_119;
        }
        v54 = 37;
      }
      else if (v52 == 3) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v53 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if (v53 != 1) {
          goto LABEL_115;
        }
        v54 = 38;
      }
      else {
        if (v52 != 4 || game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v53 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if ((unsigned int)(v53 - 1) >= 2) {
          goto LABEL_115;
        }
        v54 = 39;
      }
    LABEL_120:
      v55 = game_821090(v54);
      if (game_GameModeData_instance_ != 0) {
        v56 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v55);
        if (v56 != 0 && *(int*)(v56 + 32) >= 1) {
          GameData_2175540 = *(_DWORD*)v7;
          break;
        }
      }
    LABEL_96:
      v7 += 4;
    } while (v7 != v5);
  }
  v47 = (char*)a1[150];
  v48 = (char*)a1[151];
  if (v47 == v48) {
    v49 = 0;
  }
  else {
    v49 = 0;
    v50 = (int*)a1[150];
    do {
      v51 = *v50++;
      if (GameData_2175540 == v51) {
        break;
      }
      ++v49;
    } while (v50 != (int*)v48);
  }
  *((_DWORD*)a1 + 269) = v49;
  *((_DWORD*)a1 + 270) = v49;
  *((_DWORD*)a1 + 268) = ((unsigned __int64)(v48 - v47) >> 2) - 1;
  LayoutAccessor_1560070((void*)(&v63), a1 + 106, "L_PageTab");
  v57 = *a1;
  v69 = 0;
  v58 = (*(__int64 (**)(__int64*))(v57 + 192))(a1);
  game_menu_PageTab_SetupLabel(a1 + 134, &v63, &v66, v58, 4, 5);
  if (v64 != 0) {
    *(__n128*)&v59 = std___1___shared_weak_count___release_weak_alt1(v64);
  }
  GameRoutine_1713820(&v66, (unsigned int)GameData_2175540, v59);
  if ((v66 & 1) != 0) {
    v60 = v68;
  }
  else {
    v60 = v67;
  }
  result = LayoutAccessor_1562060(a1 + 106, "L_PageTab/T_Txt", v60);
  if ((v66 & 1) != 0 && v68 != nullptr) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v62);
  }
  return result;
}

__int64 ProcGuideMenu_Unknown92(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = a1;
  v3 = a1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v3, v4, v5, 0);
    v3 = *(_QWORD*)(v3 + 32);
    if (result != 0) {
      v2 = result;
    }
  } while (v3 != 0);
  if (v2 == a1) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  if (*(_BYTE*)(a1 + 1069) == 1) {
    v7 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0 &&
        game_gmap_GmapClock_instance_ != 0 &&
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
            0) {
      v8 = *(_QWORD*)(v7 + 8);
      if (v8 != 0) {
        while (1) {
          if (*(_BYTE*)v8 == 2) {
            if (*(_DWORD*)(v8 + 32) == 5) {
              *(_QWORD*)(v7 + 16) = v8;
              *(_WORD*)(v7 + 136) &= ~0x80u;
              return result;
            }
          }
          else if (*(_BYTE*)v8 == 0) {
            return result;
          }
          v8 += 64;
        }
      }
    }
  }
  return result;
}

__int64 ProcGuideMenu_Unknown96(__int64 a1)
{
  __int64 result;

  game_menu_BasicMenu_Unknown96(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  if ((unsigned int)(result - 8) <= 0xFFFFFFF9) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  if ((*(_BYTE*)(a1 + 1070) & 1) == 0) {
    return GameRoutine_16ddaa0(a1, 3);
  }
  return result;
}

__int64 ProcGuideMenu_Unknown104(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;

  if (*(_BYTE*)(a1 + 1070) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 1088);
  v4 = *(int*)(a1 + 1076);
  if (v4 < (*(_QWORD*)(a1 + 1096) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  GameRoutine_1713a00(a1, *(unsigned int*)(*(_QWORD*)(a1 + 1200) + 4 * v4));
  return 13;
}

__int64 ProcGuideMenu_Unknown106(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;

  if (*(_BYTE*)(a1 + 1070) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 1088);
  v4 = *(int*)(a1 + 1076);
  if (v4 < (*(_QWORD*)(a1 + 1096) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  GameRoutine_1713a00(a1, *(unsigned int*)(*(_QWORD*)(a1 + 1200) + 4 * v4));
  return 13;
}

__int64 ProcGuideMenu_Unknown139_17137e0(__int64 result)
{
  if (*(_BYTE*)(result + 1070) == 1) {
    return GuideBaseMenu_Unknown139();
  }
  return result;
}

__int64 ProcGuideMenu_Unknown10(__int64 result, __int64* a2)
{
  if (*(_BYTE*)(result + 14) == 1) {
    return GuideBaseMenu_Unknown139_alt1(result - 1056, a2);
  }
  return result;
}

unsigned __int64 ProcGuideMenu_1713820(unsigned __int64 result, int a2)
{
  _QWORD* v2;
  const char* v3;
  unsigned __int64 v4;
  char* v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result;
  if (a2 > 1) {
    switch (a2) {
    case 2:
      *(_BYTE*)result = 34;
      *(_WORD*)(result + 17) = 116;
      v6 = "MID_SysMenu_Quest";
      break;
    case 3:
      *(_BYTE*)result = 40;
      strcpy((char*)(result + 17), "ndar");
      v6 = "MID_SysMenu_Calendar";
      break;
    case 4:
      result = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      *v2 = 33;
      v2[1] = 24;
      v2[2] = result;
      strcpy((char*)result, "MID_PerchMenu_BattleHint");
      return result;
    default:
      goto LABEL_19;
    }
  LABEL_18:
    v8 = *(_QWORD*)v6;
    v7 = *((_QWORD*)v6 + 1);
    *(_QWORD*)(result + 1) = v8;
    *(_QWORD*)(result + 9) = v7;
    return result;
  }
  if (a2 == 0) {
    *(_BYTE*)result = 34;
    *(_WORD*)(result + 17) = 101;
    v6 = "MID_SysMenu_Guide";
    goto LABEL_18;
  }
  if (a2 != 1) {
  LABEL_19:
    *(_WORD*)result = 0;
    return result;
  }
  v3 = "MID_SysMenu_Honor";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v3 = "MID_SysMenu_Honor_Part3";
  }
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v4 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v9, 16,
                                              0);
    v2[1] = v4;
    v2[2] = v10;
    *v2 = v9 | 1;
    v5 = (char*)v10;
  }
  else {
    *(_BYTE*)v2 = 2 * result;
    v5 = (char*)v2 + 1;
    if (result == 0) {
      goto LABEL_25;
    }
  }
  result = memcpy(v5, v3, v4);
LABEL_25:
  v5[v4] = 0;
  return result;
}

__int64 ProcGuideMenu_1713f50(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  if ((**(_BYTE**)(result + 8) & 1) == 0) {
    v2 = *(_QWORD*)(*a2 + 96LL);
    if (v2 != 0 && *(_BYTE*)(v2 + 32) == 4) {
      v3 = result;
      result = GameRoutine_133f1d0(*a2);
      if ((result & 1) != 0) {
        **(_BYTE**)(v3 + 8) = 1;
      }
    }
  }
  return result;
}

__int64 ProcGuideMenu_1713fe0(__int64 a1, char a2)
{
  __int64 v2;
  int v3;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  char v12;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD v27[3];
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v2 != 0) {
      v3 = *(unsigned __int8*)(v2 + 89);
      while (1) {
        v2 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 8LL);
        if (v2 == 0 || *(unsigned __int8*)(v2 + 89) != v3) {
          break;
        }
        if (*(_BYTE*)(v2 + 33) == 17) {
          v6 = (__int64*)fw_memory_g_heap_manager_ptr;
          v7 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 1184, 16, 0);
          v31 = 0;
          v32 = 0;
          GameRoutine_16dcd30(v7, (__int64)"GuideMenu", &v31, 0);
          v8 = GameData_212d6a8;
          v9 = v32;
          *(_QWORD*)v7 = GameData_212d6a8 + 2;
          *(_QWORD*)(v7 + 176) = v8 + 143;
          *(_QWORD*)(v7 + 1056) = v8 + 169;
          if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
          v10 = a2 & 1;
          v11 = GameData_2131cb8[0];
          *(_DWORD*)(v7 + 1064) = 0;
          *(_BYTE*)(v7 + 1068) = 0;
          *(_QWORD*)v7 = v11 + 16;
          *(_QWORD*)(v7 + 176) = v11 + 1168;
          *(_QWORD*)(v7 + 1056) = v11 + 1376;
          if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
            v12 = GameRoutine_155ea30(
                *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] + 168LL);
          }
          else {
            v12 = 0;
          }
          v14 = v12 & 1;
          v15 = *v6;
          *(_BYTE*)(v7 + 1069) = v14;
          *(_QWORD*)v7 = game_menu_anonymous_ProcGuideMenu_vtable;
          *(_QWORD*)(v7 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
          *(_QWORD*)(v7 + 1056) = GameData_20ae070;
          v16 = fw_memory_HeapManager_Allocate(v15, 168, 16, 0);
          *(_QWORD*)v16 = 0;
          *(_QWORD*)(v16 + 8) = 0;
          *(_QWORD*)(v16 + 16) = 0;
          *(_QWORD*)(v16 + 24) = 0;
          *(_QWORD*)(v16 + 32) = 0;
          *(_QWORD*)(v16 + 40) = 0;
          *(_QWORD*)(v16 + 48) = 0;
          *(_QWORD*)(v16 + 56) = 0;
          *(_QWORD*)(v16 + 64) = 0;
          *(_QWORD*)(v16 + 72) = 0;
          *(_QWORD*)(v16 + 80) = 0;
          *(_QWORD*)(v16 + 88) = 0;
          *(_QWORD*)(v16 + 96) = 0;
          *(_QWORD*)(v16 + 104) = 0;
          *(_QWORD*)(v16 + 112) = 0;
          *(_QWORD*)(v16 + 120) = 0;
          *(_QWORD*)(v16 + 128) = 0;
          *(_QWORD*)(v16 + 136) = 0;
          *(_QWORD*)(v16 + 144) = 0;
          *(_QWORD*)(v16 + 152) = 0;
          *(_QWORD*)(v16 + 160) = 0;
          v17 = GameData_212fca0[0] + 2;
          *(_QWORD*)(v16 + 48) = 0;
          *(_QWORD*)(v16 + 56) = 0;
          *(_QWORD*)(v16 + 64) = 0;
          *(_QWORD*)(v16 + 72) = 0;
          *(_QWORD*)(v16 + 16) = v17;
          *(_QWORD*)(v16 + 24) = -1;
          v18 = GameData_212dea8;
          *(_QWORD*)(v16 + 128) = 0;
          *(_QWORD*)(v16 + 136) = 0;
          *(_QWORD*)(v16 + 144) = 0;
          *(_QWORD*)(v16 + 152) = 0;
          *(_BYTE*)(v16 + 160) = 0;
          *(_QWORD*)(v16 + 96) = 0;
          *(_QWORD*)(v16 + 104) = 0;
          *(_QWORD*)(v16 + 112) = 0;
          *(_QWORD*)(v16 + 117) = 0;
          *(_DWORD*)(v16 + 164) = 1;
          *(_QWORD*)(v7 + 1072) = v16;
          *(_DWORD*)(v7 + 1080) = 0;
          *(_BYTE*)(v7 + 1084) = 0;
          *(_DWORD*)(v7 + 1104) = 0;
          *(_QWORD*)(v7 + 1096) = 0;
          *(_QWORD*)(v7 + 1088) = 0;
          *(_QWORD*)(v16 + 80) = 0;
          *(_QWORD*)(v16 + 88) = v18 + 2;
          v19 = GameData_2131ae8 + 2;
          *(_QWORD*)(v7 + 1152) = 0;
          *(_QWORD*)(v7 + 1112) = v19;
          v20 = GameData_2130fa8[0];
          *(_QWORD*)(v7 + 1128) = 0;
          *(_QWORD*)(v7 + 1144) = -1;
          *(_QWORD*)(v7 + 1136) = v17;
          *(_QWORD*)(v7 + 1160) = 0;
          *(_DWORD*)(v7 + 1168) = 0;
          *(_QWORD*)(v7 + 1176) = 0;
          *(_QWORD*)(v7 + 1120) = v20 + 2;
          v21 = ui_Manager_instance_;
          v22 = *(_QWORD*)(ui_Manager_instance_ + 5776);
          ++*(_DWORD*)(ui_Manager_instance_ + 6148);
          if (v22 == 0) {
            sprintf(&v31, "Layout/Textures/%s.arc", "Thumb_Recipe");
            v27[0] = &v31;
            v23 = *snd_g_fileIndex_ptr[0];
            v27[1] = strlen(&v31);
            v27[2] = 0;
            v30 = 1;
            v28 = 0;
            v29 = GameData_22416e0;
            *(_QWORD*)(v21 + 5776) = GameRoutine_136a7b0(v23, v27);
            if (v28 != 0) {
              std___1___shared_weak_count___release_weak(v28);
            }
          }
          *(_BYTE*)(v7 + 1068) = v10;
          GameRoutine_657850(v7, GameData_212c730, "ProcGuideMenu", 1, a1);
          v25 = *(_QWORD**)(v7 + 256);
          v24 = *(_QWORD**)(v7 + 264);
          *(_QWORD*)(v7 + 336) = 0;
          while (v25 != v24) {
            if (*v25 != 0) {
              (*(void (**)(_QWORD))(*(_QWORD*)*v25 + 8LL))(*v25);
              v24 = *(_QWORD**)(v7 + 264);
            }
            ++v25;
          }
          v26 = *(_QWORD*)(v7 + 344);
          if (v26 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
            *(_QWORD*)(v7 + 344) = 0;
          }
          *(_QWORD*)(v7 + 264) = *(_QWORD*)(v7 + 256);
          *(_QWORD*)(v7 + 240) = *(_QWORD*)(v7 + 232);
          (*(void (**)(__int64))(*(_QWORD*)v7 + 1024LL))(v7);
          (*(void (**)(__int64))(*(_QWORD*)v7 + 1032LL))(v7);
          return v7;
        }
      }
    }
  }
  return 0;
}

__int64 ProcGuideMenu_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = ui_Manager_instance_;
  --*(_DWORD*)(ui_Manager_instance_ + 6148);
  *(_DWORD*)(v2 + 6144) = 1;
  a1[139] = game_gameui_DelayImageLoader_vtable;
  v3 = a1[147];
  if (v3 != 0) {
    if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      GameRoutine_657a50(v3, 1);
    }
    a1[147] = 0;
  }
  v4 = a1[141];
  a1[140] = game_gameui_ImageLoader_vtable;
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8));
    a1[141] = 0;
  }
  v5 = a1[134];
  a1[134] = 0;
  if (v5 != 0) {
    GameRoutine_1015560(v5);
    v6 = fw_memory_g_heap_manager_ptr;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v5);
    v8 = a1[134];
    a1[134] = 0;
    if (v8 != 0) {
      GameRoutine_1015560(v8);
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9, v8);
    }
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcGuideMenu_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = ui_Manager_instance_;
  --*(_DWORD*)(ui_Manager_instance_ + 6148);
  *(_DWORD*)(v2 + 6144) = 1;
  a1[139] = game_gameui_DelayImageLoader_vtable;
  v3 = a1[147];
  if (v3 != 0) {
    if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      GameRoutine_657a50(v3, 1);
    }
    a1[147] = 0;
  }
  v4 = a1[141];
  a1[140] = game_gameui_ImageLoader_vtable;
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8));
    a1[141] = 0;
  }
  v5 = a1[134];
  a1[134] = 0;
  if (v5 != 0) {
    GameRoutine_1015560(v5);
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6, v5);
    v7 = a1[134];
    a1[134] = 0;
    if (v7 != 0) {
      GameRoutine_1015560(v7);
      v8 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8, v7);
    }
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v9 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v9, a1);
}

_QWORD* ProcGuideMenu_Unknown128(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 (***v6)();
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  char v13;
  bool v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* result;
  int v33;
  _DWORD* v34;
  int* v35;
  __int64 v36;
  char v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  char v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v57;
  __int64 (**v58)();
  _QWORD v59[3];
  __int64 (***v60)();
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD v67[2];

  v65 = 0;
  v66 = 0;
  v63 = 0;
  v64 = 0;
  v61 = 0;
  v62 = 0;
  v2 = *(_QWORD*)GameData_212c7c8[0];
  v58 = GameData_20ae390;
  v59[0] = &v64;
  v59[1] = &v61;
  v60 = &v58;
  v3 = *(__int64**)(v2 + 16);
  v4 = *(__int64**)(v2 + 24);
  if (v3 == v4) {
    v7 = 4;
    v6 = &v58;
  }
  else {
    do {
      v5 = *v3++;
      v67[0] = v5;
      if (v60 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      ((void (*)(__int64 (***)(), _QWORD*))(*v60)[6])(v60, v67);
    } while (v3 != v4);
    v6 = v60;
    if (v60 == &v58) {
      v7 = 4;
    }
    else {
      if (v60 == nullptr) {
        goto LABEL_10;
      }
      v7 = 5;
    }
  }
  (*v6)[v7]();

LABEL_10:
  LODWORD(v59[0]) = 0;
  v58 = nullptr;
  if (v62 == v61) {
    *(_DWORD*)(a1 + 1080) = 0;
    v10 = 1;
    if ((unsigned __int64)(v65 - v64) < 0x68) {
      v11 = 1;
      goto LABEL_19;
    }
    v18 = 1;
    v12 = 4;
    v15 = 8;
    v17 = 1;
    goto LABEL_35;
  }
  v8 = (v62 - v61) >> 3;
  if (v65 == v64) {
    v12 = 4;
    *(_DWORD*)(a1 + 1080) = 4;
    v10 = 2;
    if (v8 < 0xD) {
      v11 = 2;
      goto LABEL_19;
    }
    v18 = 2;
    v15 = 8;
    v17 = 2;
  LABEL_35:
    v52 = v18;
  LABEL_36:
    v13 = 0;
    *(_DWORD*)((char*)&v59[-1] + v15) = v10;
    *(_DWORD*)((char*)&v59[-1] + v12) = v17;
    v50 = 1;
    v51 = 18;
    goto LABEL_37;
  }
  v9 = (v65 - v64) >> 3;
  if (v8 > 6 || v9 > 6) {
    v14 = v8 >= v9;
    v12 = 8;
    if (v8 >= v9) {
      v15 = 8;
    }
    else {
      v15 = 4;
    }
    if (v14) {
      v12 = 4;
    }
    if (v14) {
      v16 = 3;
    }
    else {
      v16 = 1;
    }
    *(_DWORD*)(a1 + 1080) = v16;
    v52 = 1;
    if (v14) {
      v10 = 2;
    }
    else {
      v10 = 1;
    }
    v17 = 2;
    goto LABEL_36;
  }
  v10 = 2;
  *(_DWORD*)(a1 + 1080) = 2;
  v11 = 1;

LABEL_19:
  HIDWORD(v58) = v10;
  v50 = 0;
  v13 = 1;
  v51 = 12;
  v52 = v11;

LABEL_37:
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  LODWORD(v67[0]) = 0;
  v57 = 0;
  *(_BYTE*)(a1 + 1084) = v13;
  v54 = a1 + 1096;
  do {
    v53 = v19;
    if (v52 != 1) {
      v25 = v61;
      v26 = v62 - v61;
      v27 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v24 = v27;
      v55 = v22;
      if (v21 < (unsigned __int64)(v26 >> 3)) {
        v28 = *(_QWORD*)(v25 + 8LL * v21++);
        *(_WORD*)(v27 + 16) = 0;
      LABEL_48:
        *(_QWORD*)(v24 + 88) = v28;
        *(_DWORD*)(v24 + 40) = 0;
        *(_WORD*)(v24 + 80) = 257;
        *(_QWORD*)(v24 + 48) = 0;
        *(_QWORD*)(v24 + 56) = 0;
        *(_QWORD*)(v24 + 64) = 0;
        *(_QWORD*)(v24 + 72) = 0;
        *(_BYTE*)(v24 + 82) = 1;
        *(_QWORD*)v24 = game_menu_anonymous_GuideMenuItem_vtable;
        *(_QWORD*)(v24 + 8) = 0;
        result = GameRoutine_16e0c00((_QWORD*)a1, v24);
        if (*(_DWORD*)(a1 + 1088) <= v19 + 1) {
          v33 = v19 + 1;
        }
        else {
          v33 = *(_DWORD*)(a1 + 1088);
        }
        *(_DWORD*)(a1 + 1088) = v33;
        ++*(_DWORD*)(a1 + 1096);
        goto LABEL_55;
      }
    LABEL_53:
      *(_WORD*)(v24 + 16) = 0;
      *(_DWORD*)(v24 + 40) = 0;
      *(_QWORD*)(v24 + 48) = 0;
      *(_QWORD*)(v24 + 56) = 0;
      *(_QWORD*)(v24 + 64) = 0;
      *(_QWORD*)(v24 + 72) = 0;
      *(_QWORD*)(v24 + 88) = 0;
      *(_WORD*)(v24 + 80) = 257;
      *(_BYTE*)(v24 + 82) = 1;
      *(_QWORD*)v24 = game_menu_anonymous_MarginMenuItem_vtable;
      *(_QWORD*)(v24 + 8) = 0;
      goto LABEL_54;
    }
    v23 = v50;
    if (v19 != 5) {
      v23 = 0;
    }
    if ((v23 & 1) == 0) {
      v29 = v64;
      v30 = v65 - v64;
      v31 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v24 = v31;
      if ((int)v22 < (unsigned __int64)(v30 >> 3)) {
        v28 = *(_QWORD*)(v29 + 8LL * (int)v22);
        *(_WORD*)(v31 + 16) = 0;
        v55 = (unsigned int)(v22 + 1);
        goto LABEL_48;
      }
      v55 = v22;
      goto LABEL_53;
    }
    v55 = v22;
    v24 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         96, 16, 0);
    *(_WORD*)(v24 + 16) = 0;
    *(_DWORD*)(v24 + 40) = 0;
    *(_QWORD*)(v24 + 48) = 0;
    *(_QWORD*)(v24 + 56) = 0;
    *(_QWORD*)(v24 + 64) = 0;
    *(_QWORD*)(v24 + 72) = 0;
    *(_QWORD*)(v24 + 88) = 0;
    *(_WORD*)(v24 + 80) = 257;
    *(_BYTE*)(v24 + 82) = 1;
    *(_QWORD*)v24 = game_menu_anonymous_MarginMenuItem_vtable;
    *(_QWORD*)(v24 + 8) = 0;
  LABEL_54:
    result = GameRoutine_16e0c00((_QWORD*)a1, v24);
  LABEL_55:
    v34 = (_DWORD*)&v58 + 1;
    ++v20;
    v35 = (int*)v67;
    v36 = 1;
    v37 = 0;
    do {
      v38 = v37;
      if (*v34 == 2) {
        v44 = v61;
        v45 = v62 - v61;
        v41 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
        if (v21 < (unsigned __int64)(v45 >> 3)) {
          v46 = *(_QWORD*)(v44 + 8LL * v21);
          *(_WORD*)(v41 + 16) = 0;
          ++v21;
          *(_WORD*)(v41 + 80) = 257;
          *(_QWORD*)(v41 + 88) = v46;
          *(_DWORD*)(v41 + 40) = 0;
          *(_QWORD*)(v41 + 48) = 0;
          *(_QWORD*)(v41 + 56) = 0;
          *(_QWORD*)(v41 + 64) = 0;
          *(_QWORD*)(v41 + 72) = 0;
          *(_BYTE*)(v41 + 82) = 1;
          *(_QWORD*)v41 = game_menu_anonymous_GuideMenuItem_vtable;
          *(_QWORD*)(v41 + 8) = 0;
          result = GameRoutine_16e0c00((_QWORD*)a1, v41);
          if (*(_DWORD*)(a1 + 1088) <= *v35 + 1) {
            v47 = *v35 + 1;
          }
          else {
            v47 = *(_DWORD*)(a1 + 1088);
          }
          *(_DWORD*)(a1 + 1088) = v47;
          ++*(_DWORD*)(v54 + 4 * v36);
          goto LABEL_57;
        }
        goto LABEL_56;
      }
      if (*v34 == 1) {
        v39 = v64;
        v40 = v65 - v64;
        v41 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
        if ((int)v55 < (unsigned __int64)(v40 >> 3)) {
          v42 = *(_QWORD*)(v39 + 8LL * (int)v55);
          *(_WORD*)(v41 + 16) = 0;
          *(_WORD*)(v41 + 80) = 257;
          *(_QWORD*)(v41 + 88) = v42;
          v55 = (unsigned int)(v55 + 1);
          *(_DWORD*)(v41 + 40) = 0;
          *(_QWORD*)(v41 + 48) = 0;
          *(_QWORD*)(v41 + 56) = 0;
          *(_QWORD*)(v41 + 64) = 0;
          *(_QWORD*)(v41 + 72) = 0;
          *(_BYTE*)(v41 + 82) = 1;
          *(_QWORD*)v41 = game_menu_anonymous_GuideMenuItem_vtable;
          *(_QWORD*)(v41 + 8) = 0;
          result = GameRoutine_16e0c00((_QWORD*)a1, v41);
          if (*(_DWORD*)(a1 + 1088) <= *v35 + 1) {
            v43 = *v35 + 1;
          }
          else {
            v43 = *(_DWORD*)(a1 + 1088);
          }
          *(_DWORD*)(a1 + 1088) = v43;
          ++*(_DWORD*)(v54 + 4 * v36);
          goto LABEL_57;
        }
      LABEL_56:
        *(_WORD*)(v41 + 16) = 0;
        *(_DWORD*)(v41 + 40) = 0;
        *(_QWORD*)(v41 + 48) = 0;
        *(_QWORD*)(v41 + 56) = 0;
        *(_QWORD*)(v41 + 64) = 0;
        *(_QWORD*)(v41 + 72) = 0;
        *(_QWORD*)(v41 + 88) = 0;
        *(_WORD*)(v41 + 80) = 257;
        *(_BYTE*)(v41 + 82) = 1;
        *(_QWORD*)v41 = game_menu_anonymous_MarginMenuItem_vtable;
        *(_QWORD*)(v41 + 8) = 0;
        result = GameRoutine_16e0c00((_QWORD*)a1, v41);
      LABEL_57:
        ++v20;
        ++*v35;
      }
      v35 = &v57;
      v37 = 1;
      v36 = 2;
      v34 = v59;
    } while ((v38 & 1) == 0);
    v22 = v55;
    v19 = v53 + 1;
  } while (v20 < v51);
  if (v61 != 0) {
    v62 = v61;
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v61);
  }
  if (v64 != 0) {
    v65 = v64;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v64);
  }
  return result;
}

__int64 ProcGuideMenu_Unknown139(__int64 a1, __int64* a2)
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

  result = GuideBaseMenu_Unknown139_alt1(a1, a2);
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

__int64 ProcGuideMenu_Unknown143(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1084) != 0) {
    return 2;
  }
  else {
    return 3;
  }
}

__int64 ProcGuideMenu_Unknown144(__int64 a1, int a2, char a3, char a4)
{
  char* v4;
  char* v5;
  int v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 result;
  int v25;
  int v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  char v34;

  v5 = *(char**)(a1 + 232);
  v4 = *(char**)(a1 + 240);
  if (*(_BYTE*)(a1 + 1084) != 0) {
    v9 = 2;
  }
  else {
    v9 = 3;
  }
  v10 = (unsigned __int64)(v4 - v5) >> 3;
  if (v4 != v5) {
    v11 = 0;
    do {
      v12 = *(_QWORD*)v5;
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v5 + 48LL))(*(_QWORD*)v5) &
           1) != 0) {
        if (v12 == *(_QWORD*)(a1 + 336)) {
          goto LABEL_12;
        }
        ++v11;
      }
      v5 += 8;
    } while (v5 != v4);
  }
  v11 = -1;
LABEL_12:
  v13 = v11 / v9;
  v14 = v10 - 1;
  v15 = *(_DWORD*)(a1 + 4LL * (v11 % v9) + 1096);
  if ((a3 & 1) != 0) {
    v34 = a3;
    do {
      if (v13 + a2 < 0 != __OFADD__(v13, a2)) {
        v16 = v15 - 1;
      }
      else {
        v16 = v13 + a2;
      }
      if (v13 + a2 >= v15) {
        v13 = 0;
      }
      else {
        v13 = v16;
      }
      v17 = v11 % v9 + v13 * v9;
      if (v14 >= v17) {
        v18 = v11 % v9 + v13 * v9;
      }
      else {
        v18 = v14;
      }
      if (v17 >= 0) {
        v19 = v18;
      }
      else {
        v19 = 0;
      }
      v20 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v19);
    } while (((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20) & 1) == 0 ||
             v11 == v19);
    v21 = v19;
  LABEL_41:
    v29 = *(_QWORD*)(a1 + 232);
    *(_DWORD*)(a1 + 1092) = v13;
    v30 = *(_QWORD*)(a1 + 336);
    v31 = *(_QWORD*)(v29 + 8 * v21);
    if (v30 != v31) {
      if (v30 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 168LL))(v30);
      }
      *(_QWORD*)(a1 + 336) = v31;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, a4 & 1, 1u, v34 & 1);
      v32 = *(_QWORD*)(a1 + 336);
      if (v32 == 0) {
        v33 = 4;
      LABEL_51:
        *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v33;
        return 13;
      }
      (*(void (**)(__int64))(*(_QWORD*)v32 + 160LL))(v32);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v30 = *(_QWORD*)(a1 + 336);
    }
    v33 = 4;
    if (v30 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 120LL))(v30) & 1) != 0) {
        v33 = 4;
      }
      else {
        v33 = 0;
      }
    }
    goto LABEL_51;
  }
  v22 = v9 * a2;
  v23 = v11 + v22;
  while (1) {
    v13 += a2;
    result = 0;
    if (v13 >= v15 || v13 < 0) {
      return result;
    }
    if (v14 >= v23) {
      v25 = v23;
    }
    else {
      v25 = v14;
    }
    if (v23 >= 0) {
      v26 = v25;
    }
    else {
      v26 = 0;
    }
    v27 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v26);
    v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
    v23 += v22;
    if (v11 != v26 && (v28 & 1) != 0) {
      v34 = a3;
      v21 = v26;
      goto LABEL_41;
    }
  }
}

__int64 ProcGuideMenu_Unknown145(__int64 a1, int a2, char a3)
{
  char* v3;
  char* v4;
  int v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 result;
  int v16;
  int v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;

  v4 = *(char**)(a1 + 232);
  v3 = *(char**)(a1 + 240);
  if (*(_BYTE*)(a1 + 1084) != 0) {
    v8 = 2;
  }
  else {
    v8 = 3;
  }
  v9 = (unsigned __int64)(v3 - v4) >> 3;
  if (v3 != v4) {
    v10 = 0;
    do {
      v11 = *(_QWORD*)v4;
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(*(_QWORD*)v4) &
           1) != 0) {
        if (v11 == *(_QWORD*)(a1 + 336)) {
          goto LABEL_11;
        }
        ++v10;
      }
      v4 += 8;
    } while (v4 != v3);
  }
  v10 = -1;

LABEL_11:
  v12 = v10 % v8 + a2;
  v13 = *(_DWORD*)(a1 + 1092) * v8;
  if (v12 < v8 && v13 + v12 < (int)v9) {
    if (v12 < 0) {
      if ((a3 & 1) == 0) {
        return 0;
      }
      v12 = v8 - 1;
    }
  LABEL_20:
    v16 = v12 + v13;
    if (v16 >= (int)v9 - 1) {
      v16 = v9 - 1;
    }
    do {
      v17 = v16;
      v18 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v16);
      v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18);
      v16 = v17 - v8;
    } while ((v19 & 1) == 0);
    if (v10 - v8 == v16) {
      return 0;
    }
    v20 = *(_QWORD*)(a1 + 336);
    v21 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v17);
    if (v20 != v21) {
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 168LL))(v20);
      }
      *(_QWORD*)(a1 + 336) = v21;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, a3 & 1);
      v22 = *(_QWORD*)(a1 + 336);
      if (v22 == 0) {
        v23 = 4;
      LABEL_35:
        *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v23;
        return 13;
      }
      (*(void (**)(__int64))(*(_QWORD*)v22 + 160LL))(v22);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v20 = *(_QWORD*)(a1 + 336);
    }
    v23 = 4;
    if (v20 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 120LL))(v20) & 1) != 0) {
        v23 = 4;
      }
      else {
        v23 = 0;
      }
    }
    goto LABEL_35;
  }
  v12 = 0;
  result = 0;
  if ((a3 & 1) != 0) {
    goto LABEL_20;
  }
  return result;
}

__int64 ProcGuideMenu_Unknown2(__int64 a1)
{
  if (*(_BYTE*)(a1 + 908) != 0) {
    return 2;
  }
  else {
    return 3;
  }
}

__int64

game_menu_anonymous_ProcGuideMenu_AddItemList_closure_Invoke(__int64 result,
                                                             __int64* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *a2;
  if (*(_BYTE*)(*a2 + 33) != 0) {
    v3 = *(__int64**)(result + 16);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v6 = *v3;
      v7 = (__int64)v5 - *v3;
      v8 = (v7 >> 3) + 1;
      if (v8 >> 61 == 0) {
        v9 = v4 - v6;
        v10 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v9 >> 2 > v8) {
          v8 = v9 >> 2;
        }
        if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
          v11 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v11 = v8;
        }
        if (v11 == 0) {
          v12 = 0;
          goto LABEL_24;
        }
        if (v11 >> 61 == 0) {
          v12 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
        LABEL_24:
          v20 = v12 + 8 * v11;
          v21 = v12 + v7 - 8 * (v7 >> 3);
          *(_QWORD*)(v12 + v7) = v2;
          v14 = v12 + v7 + 8;
          result = memcpy(v21, v6, v7);
          *v3 = v21;
          v3[1] = v14;
          v3[2] = v20;
          if (v6 == 0) {
            goto LABEL_32;
          }
          v22 = *v10;
          goto LABEL_29;
        }
      LABEL_34:
        GameRoutine_60a210(result);
      }
    LABEL_33:
      GameRoutine_13033d0();
    }
  LABEL_13:
    *v5 = v2;
    v14 = (__int64)(v5 + 1);
    goto LABEL_32;
  }
  v3 = *(__int64**)(result + 8);
  v5 = (_QWORD*)v3[1];
  v13 = v3[2];
  if ((unsigned __int64)v5 < v13) {
    goto LABEL_13;
  }
  v6 = *v3;
  v15 = (__int64)v5 - *v3;
  v16 = (v15 >> 3) + 1;
  if (v16 >> 61 != 0) {
    goto LABEL_33;
  }
  v17 = v13 - v6;
  if (v17 >> 2 > v16) {
    v16 = v17 >> 2;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
    v18 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 != 0) {
    if (v18 >> 61 != 0) {
      goto LABEL_34;
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v18, 16, 0);
  }
  else {
    v19 = 0;
  }
  v23 = v19 + 8 * v18;
  v24 = v19 + v15 - 8 * (v15 >> 3);
  *(_QWORD*)(v19 + v15) = v2;
  v14 = v19 + v15 + 8;
  result = memcpy(v24, v6, v15);
  *v3 = v24;
  v3[1] = v14;
  v3[2] = v23;
  if (v6 != 0) {
    v22 = fw_memory_g_heap_manager;
  LABEL_29:
    v25 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v25 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v22 + v25, v6);
  }
LABEL_32:
  v3[1] = v14;
  return result;
}

#pragma GCC visibility pop
