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
__attribute__((swiftcall)) void
    GameConst_7f8880_alt1(PSEUDO_X8) __asm__("GameConst_7f8880");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_menu_BasicMenu_Unknown76_alt1(__int64, int) __asm__(
    "game_menu_BasicMenu_Unknown76");
__int64 game_menu_BasicMenu_Unknown77_alt1(__int64, int) __asm__(
    "game_menu_BasicMenu_Unknown77");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

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
  _QWORD v5[27];

  if (a2 != 13) {
    return game_menu_BasicMenu_Unknown76_alt1(a1, a2);
  }
  v5[25] = v2;
  v5[26] = v3;
  snd_Fade_Fade_10c830_alt1((__int64)v5, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_UnitChange_Left",
                      (__int64)"SE_SYS_UnitChange_Left", (__int64)v5, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade_alt1(v5);
}

__int64 EventMemoryMenu_Unknown77(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD v5[27];

  if (a2 != 13) {
    return game_menu_BasicMenu_Unknown77_alt1(a1, a2);
  }
  v5[25] = v2;
  v5[26] = v3;
  snd_Fade_Fade_10c830_alt1((__int64)v5, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_UnitChange_Right",
                      (__int64)"SE_SYS_UnitChange_Right", (__int64)v5, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade_alt1(v5);
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
  char* v20;
  int v21;
  char* v22;
  char* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  char** v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  char v40;
  __int64 v41;
  const char* v42;
  const char* v43;
  const char* v44;
  const char* v45;
  __int64 v46;
  char* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  const char* v52;
  const char* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  struct {
    _QWORD v63[2];
    const char* v64;
  } v63_;
  struct {
    _QWORD v65[2];
    char* v66;
  } v65_;
  struct {
    __int64* v67;
    unsigned __int64 v68;
    char* v69;
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
  v20 = game_util_Format_alt1("MCID_part_%d", *(_DWORD*)(v19 + 4));
  v21 = *(_DWORD*)(v19 + 4);
  if (v21 > 1) {
    if (v21 == 2) {
      v23 = "MCID_chapter_29";
      goto LABEL_38;
    }
    if (v21 == 3) {
      v23 = "MCID_chapter_30";
      goto LABEL_38;
    }
  LABEL_35:
    v23 = nullptr;
    goto LABEL_38;
  }
  if (v21 == 0) {
    v23 = "MCID_chapter_28";
    goto LABEL_38;
  }
  if (v21 != 1) {
    goto LABEL_35;
  }
  GameConst_7f8880_alt1((void*)((__int64*)&v67_.v67));
  if (((unsigned __int8)v67_.v67 & 1) != 0) {
    v22 = v67_.v69;
  }
  else {
    v22 = (char*)&v67_.v67 + 1;
  }
  v23 = game_util_Format_alt1("MCID_episode_%s", v22);
  if (((unsigned __int8)v67_.v67 & 1) != 0 && v67_.v69 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v67_.v69);
  }
LABEL_38:
  v25 = msg_MessageManager_instance__ptr[0];
  v26 = GameData_212e348;
  v27 = msg_MessageManager_empty_text__ptr;
  if (*v20 != 0) {
    v28 = *msg_MessageManager_instance__ptr[0];
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
    v67_.v67 = GameData_212e348 + 2;
    v67_.v68 = 0xFFFF0001FFFF0000LL;
    v67_.v69 = (char*)0xFFFF0004FFFF0002LL;
    v67_.v70 = 0xFFFF0006FFFF0005LL;
    v67_.v85 = 8;
    v67_.v71 = -65529;
    v67_.v72 = -65528;
    v29 = GameRoutine_a4dbe0_alt1(v28, v20, 0);
  }
  else {
    v29 = *msg_MessageManager_empty_text__ptr;
  }
  v30 = strlen_alt1(v29);
  if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_115:
    String_60a1d0_alt1();
  }
  v31 = v30;
  if (v30 >= 0x17) {
    if ((v30 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v30 | 7) + 1;
    }
    v32 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v33, 16, 0);
    v65_.v65[1] = v31;
    v65_.v66 = v32;
    v65_.v65[0] = v33 | 1;
  LABEL_50:
    memmove_alt1((__int64)v32, (__int64)v29, v31);
    v32[v31] = 0;
    if (v23 == nullptr) {
      goto LABEL_53;
    }
    goto LABEL_51;
  }
  LOBYTE(v65_.v65[0]) = 2 * v30;
  v32 = (char*)v65_.v65 + 1;
  if (v30 != 0) {
    goto LABEL_50;
  }
  BYTE1(v65_.v65[0]) = 0;
  if (v23 == nullptr) {
    goto LABEL_53;
  }
LABEL_51:
  if (*v23 != 0) {
    v34 = *v25;
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
    v67_.v67 = v26 + 2;
    v67_.v68 = 0xFFFF0001FFFF0000LL;
    v67_.v69 = (char*)0xFFFF0004FFFF0002LL;
    v67_.v70 = 0xFFFF0006FFFF0005LL;
    v67_.v85 = 8;
    v67_.v71 = -65529;
    v67_.v72 = -65528;
    v35 = GameRoutine_a4dbe0_alt1(v34, v23, 0);
    goto LABEL_54;
  }
LABEL_53:
  v35 = *v27;
LABEL_54:
  v36 = strlen_alt1(v35);
  if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_115;
  }
  v37 = v36;
  if (v36 >= 0x17) {
    if ((v36 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v36 | 7) + 1;
    }
    v38 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v39, 16, 0);
    v63_.v63[1] = v37;
    v63_.v64 = v38;
    v63_.v63[0] = v39 | 1;
    goto LABEL_62;
  }
  LOBYTE(v63_.v63[0]) = 2 * v36;
  v38 = (char*)v63_.v63 + 1;
  if (v36 != 0) {
  LABEL_62:
    memmove_alt1((__int64)v38, (__int64)v35, v37);
  }
  v40 = v65_.v65[0];
  v41 = (__int64)v65_.v66;
  v38[v37] = 0;
  if ((v40 & 1) != 0) {
    v42 = (const char*)v41;
  }
  else {
    v42 = (char*)v65_.v65 + 1;
  }
  if ((v63_.v63[0] & 1) != 0) {
    v43 = v63_.v64;
  }
  else {
    v43 = (char*)v63_.v63 + 1;
  }
  if (v42 != nullptr) {
    v44 = v42;
  }
  else {
    v44 = *v27;
  }
  GameRoutine_60a020_alt1(*v25 + 14704, v44);
  if (v43 != nullptr) {
    v45 = v43;
  }
  else {
    v45 = *v27;
  }
  GameRoutine_60a020_alt1(*v25 + 14728, v45);
  v46 = *v25;
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
  v67_.v67 = v26 + 2;
  v67_.v68 = 0xFFFF0001FFFF0000LL;
  v67_.v69 = (char*)0xFFFF0004FFFF0002LL;
  v67_.v70 = 0xFFFF0006FFFF0005LL;
  v67_.v85 = 8;
  v67_.v71 = -65529;
  v67_.v72 = -65528;
  v47 = GameRoutine_a4dbe0_alt1(v46, "MID_Chapter_PartChapter", 0);
  v48 = strlen_alt1(v47);
  if (v48 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_115;
  }
  v49 = v48;
  if (v48 >= 0x17) {
    if ((v48 | 7) == 0x17) {
      v51 = 26;
    }
    else {
      v51 = (v48 | 7) + 1;
    }
    v50 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v51, 16, 0);
    v67_.v68 = v49;
    v67_.v69 = v50;
    v67_.v67 = (__int64*)(v51 | 1);
    goto LABEL_83;
  }
  LOBYTE(v67_.v67) = 2 * v48;
  v50 = (char*)&v67_.v67 + 1;
  if (v48 != 0) {
  LABEL_83:
    memmove_alt1((__int64)v50, (__int64)v47, v49);
  }
  v50[v49] = 0;
  if (((unsigned __int8)v67_.v67 & 1) != 0) {
    v52 = v67_.v69;
  }
  else {
    v52 = (char*)&v67_.v67 + 1;
  }
  if (v52 != nullptr) {
    v53 = v52;
  }
  else {
    v53 = *v27;
  }
  v54 = strlen_alt1(v53);
  if (v54 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_115;
  }
  v55 = v54;
  if (v54 >= 0x17) {
    if ((v54 | 7) == 0x17) {
      v57 = 26;
    }
    else {
      v57 = (v54 | 7) + 1;
    }
    v58 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v57, 16, 0);
    a2[1] = v55;
    a2[2] = v58;
    *a2 = v57 | 1;
    v56 = v58;
  }
  else {
    *(_BYTE*)a2 = 2 * v54;
    v56 = (__int64)a2 + 1;
    if (v54 == 0) {
      goto LABEL_99;
    }
  }
  memmove_alt1(v56, (__int64)v53, v55);
LABEL_99:
  v59 = (char)v67_.v67;
  *(_BYTE*)(v56 + v55) = 0;
  if ((v59 & 1) != 0 && v67_.v69 != nullptr) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, (__int64)v67_.v69);
  }
  if ((v63_.v63[0] & 1) != 0 && v63_.v64 != nullptr) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, (__int64)v63_.v64);
  }
  if ((v65_.v65[0] & 1) != 0 && v65_.v66 != nullptr) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, (__int64)v65_.v66);
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
