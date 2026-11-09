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

__int64 ProcGuideMenu_Unknown143(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1084) != 0) {
    return 2;
  }
  else {
    return 3;
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

#pragma GCC visibility pop
