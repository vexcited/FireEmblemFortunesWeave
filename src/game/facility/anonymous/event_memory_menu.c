#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173f310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_173fc80(_QWORD, _QWORD);
__int64 GameRoutine_1840e20(_QWORD, _QWORD);
__int64 GameRoutine_19e6970(_QWORD);
__int64 GameRoutine_a14090(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcInOutAnim_173fac0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64* GameRoutine_19e2c00(__int64);
extern __int64 GameData_2260e70;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 EventMemoryMenu_Unknown103(__int64 a1);
__int64 EventMemoryMenu_Unknown105(__int64 a1);
__int64 EventMemoryMenu_Unknown108(__int64 a1, char a2);
__int64 EventMemoryMenu_Unknown110(__int64 a1, char a2);
__int64 EventMemoryMenu_Unknown143(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_Unknown144(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_Unknown7(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_Unknown8(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_19e5e70(__int64 a1, __int64 a2);
__int64
game_facility_anonymous_EventMemoryMenu_OnBuild_closure_Invoke(__int64 a1,
                                                               __int64 a2);
__int64
game_facility_anonymous_EventMemoryMenu_ACall_closure_Invoke(__int64 a1,
                                                             __int64* a2);
void game_facility_anonymous_EventMemoryMenu_ACall_closure0_Invoke();
bool game_facility_anonymous_EventMemoryMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64 a2);
__attribute__((swiftcall)) void GameConst_7f8880(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitHeroes_6828a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown76(void);
__int64 game_menu_BasicMenu_Unknown77(void);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 strlen(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_22736a8;
extern __int64 GameData_22736b0;
extern __int64 GameData_22736c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64* EventMemoryMenu_19e2a20(unsigned __int8 a1);
__int64 EventMemoryMenu_Unknown76(__int64 a1, int a2);
__int64 EventMemoryMenu_Unknown77(__int64 a1, int a2);
__attribute__((swiftcall)) void
game_facility_anonymous_EventMemoryMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1,
                                                              int* a2);
__attribute__((swiftcall)) void
game_facility_anonymous_EventMemoryMenu_OnInit_closure0_Invoke(PSEUDO_X8 x8_,
                                                               __int64 a1);
__int64 game_facility_anonymous_EventMemoryMenu_ACall_closure_Invoke_19e6f40();

__int64* EventMemoryMenu_19e2a20(unsigned __int8 a1)
{
  __int64 v2;
  __int64 v3;
  __int64** v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64** v9;
  unsigned __int64 v10;
  __int64 v11;

  if (GameData_22736b0 == 0 || GameData_22736c0 == 0) {
    goto LABEL_44;
  }
  v2 = GameData_22736b0 - 1;
  if ((GameData_22736b0 & (GameData_22736b0 - 1)) != 0) {
    v3 = a1;
    if (GameData_22736b0 <= (unsigned __int64)a1) {
      v3 = a1 % (unsigned int)GameData_22736b0;
    }
  }
  else {
    v3 = ((_DWORD)GameData_22736b0 - 1) & (unsigned int)a1;
  }
  v4 = *(__int64***)(GameData_22736a8 + 8 * v3);
  if (v4 == nullptr || (v5 = *v4) == nullptr) {
  LABEL_24:
    if ((GameData_22736b0 & v2) != 0) {
      v8 = 9;
      if ((unsigned __int64)GameData_22736b0 <= 9) {
        v8 = 9u % (unsigned __int8)GameData_22736b0;
      }
    }
    else {
      v8 = ((int)GameData_22736b0 - 1) & 9LL;
    }
    v9 = *(__int64***)(GameData_22736a8 + 8 * v8);
    if (v9 != nullptr) {
      v5 = *v9;
      if (v5 != nullptr) {
        if ((GameData_22736b0 & v2) == 0) {
          while (1) {
            v11 = v5[1];
            if (v11 == 9) {
              if (*((_BYTE*)v5 + 16) == 9) {
                return v5 + 3;
              }
            }
            else if ((v11 & v2) != v8) {
              goto LABEL_44;
            }
            v5 = (__int64*)*v5;
            if (v5 == nullptr) {
              goto LABEL_44;
            }
          }
        }
        do {
          v10 = v5[1];
          if (v10 == 9) {
            if (*((_BYTE*)v5 + 16) == 9) {
              return v5 + 3;
            }
          }
          else {
            if (v10 >= GameData_22736b0) {
              v10 %= (unsigned __int64)GameData_22736b0;
            }
            if (v10 != v8) {
              break;
            }
          }
          v5 = (__int64*)*v5;
        } while (v5 != nullptr);
      }
    }
  LABEL_44:
    String_60a250("unordered_map::at: key not found");
  }
  if ((GameData_22736b0 & v2) == 0) {
    while (1) {
      v7 = v5[1];
      if (v7 == a1) {
        if (*((unsigned __int8*)v5 + 16) == a1) {
          return v5 + 3;
        }
      }
      else if ((v7 & v2) != v3) {
        goto LABEL_24;
      }
      v5 = (__int64*)*v5;
      if (v5 == nullptr) {
        goto LABEL_24;
      }
    }
  }
  while (1) {
    v6 = v5[1];
    if (v6 == a1) {
      break;
    }
    if (v6 >= GameData_22736b0) {
      v6 %= (unsigned __int64)GameData_22736b0;
    }
    if (v6 != v3) {
      goto LABEL_24;
    }
  LABEL_14:
    v5 = (__int64*)*v5;
    if (v5 == nullptr) {
      goto LABEL_24;
    }
  }
  if (*((unsigned __int8*)v5 + 16) != a1) {
    goto LABEL_14;
  }
  return v5 + 3;
}

__int64 EventMemoryMenu_Unknown76(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _BYTE v6[200];
  __int64 v7;
  __int64 v8;

  if (a2 != 13) {
    return game_menu_BasicMenu_Unknown76();
  }
  v7 = v2;
  v8 = v3;
  snd_Fade_Fade_10c830(v6, 0.0f);
  snd_play_ff2d0((void*)(&v5), "SE_SYS_UnitChange_Left",
                 "SE_SYS_UnitChange_Left", v6, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v6);
}

__int64 EventMemoryMenu_Unknown77(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _BYTE v6[200];
  __int64 v7;
  __int64 v8;

  if (a2 != 13) {
    return game_menu_BasicMenu_Unknown77();
  }
  v7 = v2;
  v8 = v3;
  snd_Fade_Fade_10c830(v6, 0.0f);
  snd_play_ff2d0((void*)(&v5), "SE_SYS_UnitChange_Right",
                 "SE_SYS_UnitChange_Right", v6, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v6);
}

__int64 EventMemoryMenu_Unknown103(__int64 a1)
{
  if ((game_menu_PageTab_Move(a1 + 1072, 0xFFFFFFFFLL, 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e2c00(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown105(__int64 a1)
{
  if ((game_menu_PageTab_Move(a1 + 1072, 1, 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e2c00(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown108(__int64 a1, char a2)
{
  if (*(_BYTE*)(a1 + 1520) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1392, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e6970(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown110(__int64 a1, char a2)
{
  if (*(_BYTE*)(a1 + 1520) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1392, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e6970(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown143(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1200, 0xFFFFFFFFLL, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1204);
  v4 = *(_QWORD*)(a1 + 1216);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1224) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1376) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown144(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1200, 1, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1204);
  v4 = *(_QWORD*)(a1 + 1216);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1224) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1376) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown7(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1024, 0xFFFFFFFFLL, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1028);
  v4 = *(_QWORD*)(a1 + 1040);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1048) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1200) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1 - 176);
  return 13;
}

__int64 EventMemoryMenu_Unknown8(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1024, 1, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1028);
  v4 = *(_QWORD*)(a1 + 1040);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1048) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1200) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1 - 176);
  return 13;
}

__int64 EventMemoryMenu_19e5e70(__int64 a1, __int64 a2)
{
  const char* v4;
  __int64 v5;

  if (a2 != 0) {
    v4 = "ClearImg_Off";
  }
  else {
    v4 = "ClearImg";
  }
  LayoutAccessor_1562cf0(a1, v4);
  v5 = ui_LayoutAccessor_FindPane(a1, "Icon_Clan");
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  }
  return GameRoutine_1840e20(v5, a2);
}

__attribute__((swiftcall)) void

game_facility_anonymous_EventMemoryMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1,
                                                              int* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;

  v4 = UnitHeroes_6828a0(
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1328LL) + *a2));
  if (v4 != 0) {
    v5 = v4;
  }
  else {
    v5 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  result = strlen(v5);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a3[1] = v7;
    a3[2] = v10;
    *a3 = v9 | 1;
    v8 = (char*)v10;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v8 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v8, v5, v7);
LABEL_13:
  v8[v7] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_facility_anonymous_EventMemoryMenu_OnInit_closure0_Invoke(PSEUDO_X8 x8_,
                                                               __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  __int64* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  int v14;
  bool v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  int* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _BYTE* v25;
  int v26;
  char* v27;
  const char* v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  char** v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 result;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  char v44;
  char* v45;
  char* v46;
  char* v47;
  char* v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  char* v55;
  char* v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD v65[2];
  char* v66;
  _QWORD v67[2];
  char* v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  int v73;
  int v74;
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
  __int64 v86;
  __int64 v87;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_DWORD*)(v2 + 1076);
  v5 = *(_QWORD*)(v2 + 1088);
  if (v4 < (unsigned __int64)((*(_QWORD*)(v2 + 1096) - v5) >> 2)) {
    v4 = *(_DWORD*)(v5 + 4LL * v4);
  }
  v6 = ~*(_DWORD*)(v2 + 1328) + *(_DWORD*)(v2 + 1336);
  if (v6 >= v4) {
    v6 = v4;
  }
  if (v4 >= 0) {
    v7 = v6;
  }
  else {
    v7 = 0;
  }
  v8 = EventMemoryMenu_19e2a20(*(_BYTE*)(*(_QWORD*)(v2 + 1328) + v7));
  v9 = *(_DWORD*)(v2 + 1204);
  v10 = *(_QWORD*)(v2 + 1216);
  v11 = 3;
  if (*(_BYTE*)(v2 + 1064) == 0) {
    v11 = 0;
  }
  v12 = &v8[v11];
  if (v9 < (unsigned __int64)((*(_QWORD*)(v2 + 1224) - v10) >> 2)) {
    v9 = *(_DWORD*)(v10 + 4LL * v9);
  }
  v13 = *(_QWORD*)(v2 + 1352);
  v14 = ((unsigned __int64)(*(_QWORD*)(v2 + 1360) - v13) >> 2) - 1;
  if (v14 >= v9) {
    v14 = v9;
  }
  v15 = v9 < 0;
  v16 = *v12;
  if (v15) {
    v14 = 0;
  }
  v17 = *(_DWORD*)(v13 + 4LL * v14);
  if (v17 < 0) {
    v18 = 0;
  }
  else {
    v18 = -1 - 1431655765 * ((unsigned __int64)(v12[1] - v16) >> 3);
    if (v17 < v18) {
      v18 = v17;
    }
  }
  v19 = v16 + 24LL * v18;
  v21 = *(_DWORD*)(v19 + 4);
  v20 = (int*)(v19 + 4);
  v22 = game_util_Format("MCID_part_%d", v21);
  v23 = *(_QWORD*)(v2 + 1088);
  v24 = *(int*)(v2 + 1076);
  v25 = (_BYTE*)v22;
  if (v24 < (*(_QWORD*)(v2 + 1096) - v23) >> 2) {
    v24 = *(int*)(v23 + 4 * v24);
  }
  v26 = *v20;
  if (*v20 > 1) {
    if (v26 == 2) {
      v28 = "MCID_chapter_29";
      goto LABEL_40;
    }
    if (v26 == 3) {
      v28 = "MCID_chapter_30";
      goto LABEL_40;
    }
  LABEL_37:
    v28 = nullptr;
    goto LABEL_40;
  }
  if (v26 == 0) {
    v28 = "MCID_chapter_28";
    goto LABEL_40;
  }
  if (v26 != 1) {
    goto LABEL_37;
  }
  GameConst_7f8880((void*)(&v69),
                   *(unsigned __int8*)(*(_QWORD*)(v2 + 1328) + v24));
  if ((v69 & 1) != 0) {
    v27 = (char*)v71;
  }
  else {
    v27 = (char*)&v69 + 1;
  }
  v28 = (const char*)game_util_Format("MCID_episode_%s", v27);
  if ((v69 & 1) != 0 && v71 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
LABEL_40:
  v30 = msg_MessageManager_instance__ptr[0];
  v31 = GameData_212e348;
  v32 = msg_MessageManager_empty_text__ptr;
  if (*v25 != 0) {
    v33 = *msg_MessageManager_instance__ptr[0];
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v82 = -1;
    v83 = -1;
    v84 = -1;
    v85 = -1;
    v86 = -1;
    v69 = (__int64)(GameData_212e348 + 2);
    v70 = 0xFFFF0001FFFF0000LL;
    v71 = 0xFFFF0004FFFF0002LL;
    v72 = 0xFFFF0006FFFF0005LL;
    v87 = 8;
    v73 = -65529;
    v74 = -65528;
    v34 = GameRoutine_a4dbe0(v33, v25, 0, &v69);
  }
  else {
    v34 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  result = strlen(v34);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_117:
    String_60a1d0(result);
  }
  v36 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (result | 7) + 1;
    }
    v37 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v38, 16, 0);
    v67[1] = v36;
    v68 = v37;
    v67[0] = v38 | 1;
  LABEL_52:
    memmove(v37, v34, v36);
    v37[v36] = 0;
    if (v28 == nullptr) {
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  LOBYTE(v67[0]) = 2 * result;
  v37 = (char*)v67 + 1;
  if (result != 0) {
    goto LABEL_52;
  }
  BYTE1(v67[0]) = 0;
  if (v28 == nullptr) {
    goto LABEL_55;
  }
LABEL_53:
  if (*v28 != 0) {
    v39 = *v30;
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v82 = -1;
    v83 = -1;
    v84 = -1;
    v85 = -1;
    v86 = -1;
    v69 = (__int64)(v31 + 2);
    v70 = 0xFFFF0001FFFF0000LL;
    v71 = 0xFFFF0004FFFF0002LL;
    v72 = 0xFFFF0006FFFF0005LL;
    v87 = 8;
    v73 = -65529;
    v74 = -65528;
    v40 = GameRoutine_a4dbe0(v39, v28, 0, &v69);
    goto LABEL_56;
  }
LABEL_55:
  v40 = (__int64)*v32;
LABEL_56:
  result = strlen(v40);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_117;
  }
  v41 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v43 = 26;
    }
    else {
      v43 = (result | 7) + 1;
    }
    v42 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v43, 16, 0);
    v65[1] = v41;
    v66 = v42;
    v65[0] = v43 | 1;
    goto LABEL_64;
  }
  LOBYTE(v65[0]) = 2 * result;
  v42 = (char*)v65 + 1;
  if (result != 0) {
  LABEL_64:
    memmove(v42, v40, v41);
  }
  v44 = v67[0];
  v45 = v68;
  v42[v41] = 0;
  if ((v44 & 1) != 0) {
    v46 = v45;
  }
  else {
    v46 = (char*)v67 + 1;
  }
  if ((v65[0] & 1) != 0) {
    v47 = v66;
  }
  else {
    v47 = (char*)v65 + 1;
  }
  if (v46 != nullptr) {
    v48 = v46;
  }
  else {
    v48 = *v32;
  }
  GameRoutine_60a020(*v30 + 14704, v48);
  if (v47 != nullptr) {
    v49 = v47;
  }
  else {
    v49 = *v32;
  }
  GameRoutine_60a020(*v30 + 14728, v49);
  v50 = *v30;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v84 = -1;
  v85 = -1;
  v86 = -1;
  v69 = (__int64)(v31 + 2);
  v70 = 0xFFFF0001FFFF0000LL;
  v71 = 0xFFFF0004FFFF0002LL;
  v72 = 0xFFFF0006FFFF0005LL;
  v87 = 8;
  v73 = -65529;
  v74 = -65528;
  v51 = GameRoutine_a4dbe0(v50, "MID_Chapter_PartChapter", 0, &v69);
  result = strlen(v51);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_117;
  }
  v52 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v54 = 26;
    }
    else {
      v54 = (result | 7) + 1;
    }
    v53 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v54, 16, 0);
    v70 = v52;
    v71 = (unsigned __int64)v53;
    v69 = v54 | 1;
    goto LABEL_85;
  }
  LOBYTE(v69) = 2 * result;
  v53 = (char*)&v69 + 1;
  if (result != 0) {
  LABEL_85:
    memmove(v53, v51, v52);
  }
  v53[v52] = 0;
  if ((v69 & 1) != 0) {
    v55 = (char*)v71;
  }
  else {
    v55 = (char*)&v69 + 1;
  }
  if (v55 != nullptr) {
    v56 = v55;
  }
  else {
    v56 = *v32;
  }
  result = strlen(v56);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_117;
  }
  v57 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v59 = 26;
    }
    else {
      v59 = (result | 7) + 1;
    }
    v60 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v59, 16, 0);
    a2[1] = v57;
    a2[2] = v60;
    *a2 = v59 | 1;
    v58 = (char*)v60;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v58 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_101;
    }
  }
  result = memmove(v58, v56, v57);
LABEL_101:
  v61 = v69;
  v58[v57] = 0;
  if ((v61 & 1) != 0 && v71 != 0) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v62);
  }
  if ((v65[0] & 1) != 0 && v66 != nullptr) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v63);
  }
  if ((v67[0] & 1) != 0 && v68 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v64);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64

game_facility_anonymous_EventMemoryMenu_OnBuild_closure_Invoke(__int64 a1,
                                                               __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 136LL) = 0;
  return 0;
}

__int64

game_facility_anonymous_EventMemoryMenu_ACall_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  if (GameData_2260e70 != 0) {
    v4 = *(_QWORD*)(GameData_2260e70 + 168);
    if (v4 != 0) {
      ProcInOutAnim_173fac0(v4, 1);
    }
  }
  return GameRoutine_a14090(v2, *(_QWORD*)(a1 + 8));
}

void game_facility_anonymous_EventMemoryMenu_ACall_closure0_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[2];
  __int64 v5;
  __int64 v6;

  v0 = GameData_2260e70;
  if (GameData_2260e70 != 0) {
    v1 = *(_QWORD*)(GameData_2260e70 + 168);
    if (v1 != 0) {
      GameRoutine_173fc80(v1, 1);
    }
    else {
      v2 = *(_QWORD*)(GameData_2260e70 + 160);
      v5 = *(_QWORD*)(GameData_2260e70 + 152);
      v6 = v2;
      if (v2 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                  memory_order_relaxed);
      }
      v4[0] = "In";
      v4[1] = 2;
      v3[0] = "Out";
      v3[1] = 3;
      *(_QWORD*)(v0 + 168) = GameRoutine_173f310(v0, &v5, 1, v4, v3, -1.0);
      if (v6 != 0) {
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
}

__int64 game_facility_anonymous_EventMemoryMenu_ACall_closure_Invoke_19e6f40()
{
  __int64 v1;
  _BYTE v2[200];

  snd_Fade_Fade_10c830(v2, 0.0f);
  snd_play_ff2d0((void*)(&v1), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v2, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v2);
}

bool game_facility_anonymous_EventMemoryMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(v2 + 1204);
  v4 = *(_QWORD*)(v2 + 1224);
  v5 = *(_QWORD*)(v2 + 1216);
  if (v3 < (unsigned __int64)((v4 - v5) >> 2)) {
    v3 = *(_DWORD*)(v5 + 4LL * v3);
  }
  return *(_DWORD*)(*(_QWORD*)a2 + 84LL) == v3;
}

#pragma GCC visibility pop
