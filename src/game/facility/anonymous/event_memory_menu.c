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
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_87dcb0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_19577f0(__int64, __int64);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 TimelineFile_890160(const char*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0_alt2(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern _UNKNOWN* GameData_1f9caf8;
extern _UNKNOWN GameData_1aabf2c;
extern _UNKNOWN GameData_1abf85f;
extern _UNKNOWN GameData_1ad64fb;
extern __int64 (*GameData_21237e0[])();
extern __int64 (*GameData_2123870[])();
extern __int64 (*GameData_21238f0[])();
extern __int64 (*GameData_2123970[])();
extern __int64 (*GameData_2123cc0[])();
extern __int64* GameData_212e008[9];
extern __int64 GameData_21237b8;
extern __int64 game_GameModeData_instance_;
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_1957ca0(int, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_facility_anonymous_EventMemoryMenu_OnBuild(_QWORD* a1);
__int64 game_facility_anonymous_EventMemoryMenu_ACall(__int64 a1);
__int64 game_facility_anonymous_EventMemoryMenu_SortAndFilter(_QWORD* a1);
const char* EventMemoryMenu_Unknown140(__int64 a1);
const char* EventMemoryMenu_Unknown141(__int64 a1);
const char* EventMemoryMenu_Unknown3(__int64 a1);
const char* EventMemoryMenu_Unknown5(__int64 a1);
void EventMemoryMenu_19e6970(__int64 a1);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 LayoutAccessor_1562f00(__int64 result, __int64, float);
__int64 LayoutAccessor_1563030(__int64 result, __int64, char);
__int64 UnitUtil_15e0120(__int64);
__int64 UnitUtil_15e0200(__int64);
__int64 UnitUtil_15e04f0(__int64 result);
__int64 game_GetHero(unsigned __int8);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 game_menu_PageTab_SetupLabel(__int64, __int64*, __int64, unsigned int,
                                     unsigned int, unsigned int);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64 (*GameData_21236c8[])();
extern __int64 (*GameData_2123748[])();
float LayoutAccessor_15638b0(__int64*, char*, char);
const char* game_facility_anonymous_EventMemoryMenu_OnInit(const char* a1);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_1612a90(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 AsyncLoadImage_17e4db0(__int64 result, const char*, char);
__int64 BasicMenu_16df7a0(__int64 result);
__int64
EventMemoryMenu_19e5e70_alt1(__int64*,
                             __int64) __asm__("EventMemoryMenu_19e5e70");
__int64 GameRoutine_1840e20_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1840e20");
__int64 LayoutAccessor_1562ea0(__int64*, char*);
bool LayoutAccessor_1563380(__int64*, __int64, char);
int memcmp(__int64, __int64, unsigned __int64);
__int64 EventMemoryMenu_Unknown2(__int64 a1);

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

__int64 EventMemoryMenu_Unknown2(__int64 a1)
{
  __int64 result;
  int v3;
  unsigned __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  const char* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  const char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  const char* v42;
  __int64* v43;
  const char* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD v51[2];
  struct {
    __int64* v52;
    __int64 v53;
  } v52_;

  result = BasicMenu_16df7a0(a1);
  v3 = *(_DWORD*)(a1 + 1552);
  v4 = (unsigned __int64*)(a1 + 848);
  if (v3 <= 1) {
    if (v3 != 0) {
      if (v3 != 1) {
        return result;
      }
      v9 = "In";
      goto LABEL_24;
    }
    if (*(_BYTE*)(a1 + 1556) != 1) {
      return result;
    }
    v15 = *(unsigned __int8*)(a1 + 1584);
    v16 = *(_QWORD*)(a1 + 1592);
    *(_BYTE*)(a1 + 1556) = 0;
    v17 = (v15 & 1) != 0 ? v16 : v15 >> 1;
    v18 = *(unsigned __int8*)(a1 + 1560);
    v19 = (v18 & 1) != 0 ? *(_QWORD*)(a1 + 1568) : v18 >> 1;
    if (v17 == v19) {
      v20 = (v15 & 1) != 0 ? *(_QWORD*)(a1 + 1600) : a1 + 1585;
      v21 = (v18 & 1) != 0 ? *(_QWORD*)(a1 + 1576) : a1 + 1561;
      result = memcmp(v20, v21, v17);
      if ((_DWORD)result == 0 &&
          *(_QWORD*)(a1 + 1616) == *(_QWORD*)(a1 + 1608)) {
        return result;
      }
    }
    if (v19 == 0) {
      *(_DWORD*)(a1 + 1552) = 2;
      GameHr_1562680(a1 + 848, "Out", 0x1.0000000000000p+0f);
      goto LABEL_139;
    }
    if ((*(_BYTE*)(a1 + 1557) & 1) != 0) {
      *(_DWORD*)(a1 + 1552) = 3;
      GameHr_1562680(a1 + 848, "Change", 0x1.0000000000000p+0f);
      ui_LayoutAccessor_SetPaneVisible(a1 + 848, (__int64)"L_Img_01", 1);
      v22 = *(_QWORD*)(a1 + 856);
      v51[0] = "L_Img_01/L_Img";
      v51[1] = 14;
      if (v22 == 0) {
        goto LABEL_127;
      }
      v23 = std___1___shared_weak_count_lock(v22);
      if (v23 == 0) {
        goto LABEL_127;
      }
      v24 = *v4;
      v25 = v23;
      if (*v4 != 0) {
        GameRoutine_1612a90((void*)((__int64*)&v52_.v52), *v4, (__int64)v51);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak_alt1(v25);
      }
      if (v24 == 0 || v52_.v53 == 0) {
        goto LABEL_127;
      }
      v26 = std___1___shared_weak_count_lock(v52_.v53);
      v27 = (__int64)v52_.v52;
      if (v52_.v53 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v52_.v53);
      }
      if (v26 != 0 && v27 != 0) {
        if ((*(_BYTE*)(a1 + 1560) & 1) != 0) {
          v28 = *(const char**)(a1 + 1576);
        }
        else {
          v28 = (const char*)(a1 + 1561);
        }
        AsyncLoadImage_17e4db0(v27, v28, 0);
      }
      else if (v26 == 0) {
      LABEL_127:
        LayoutAccessor_1560070((void*)(&v52_.v52), (__int64*)(a1 + 848),
                               "L_Img_01");
        if (v52_.v53 == 0) {
          goto LABEL_139;
        }
        v40 = std___1___shared_weak_count_lock(v52_.v53);
        v43 = v52_.v52;
        if (v52_.v53 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v52_.v53);
        }
        if (v40 != 0 && v43 != nullptr) {
          if (*(_QWORD*)(a1 + 1608) != 0) {
            v44 = "ClearImg_Off";
          }
          else {
            v44 = "ClearImg";
          }
          GameHr_1562680((__int64)v43, v44, 0x1.0000000000000p+0f);
          EventMemoryMenu_19e5e70_alt1(v43, *(_QWORD*)(a1 + 1608));
          goto LABEL_137;
        }
        goto LABEL_136;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak_alt1(v26);
      }
      goto LABEL_127;
    }
    *(_DWORD*)(a1 + 1552) = 1;
    GameHr_1562680(a1 + 848, "In", 0x1.0000000000000p+0f);
    LayoutAccessor_1560070((void*)(&v52_.v52), (__int64*)(a1 + 848),
                           "L_Img_00");
    if (v52_.v53 != 0) {
      v34 = std___1___shared_weak_count_lock(v52_.v53);
      v35 = v52_.v52;
      if (v52_.v53 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v52_.v53);
      }
      if (v34 != 0 && v35 != nullptr) {
        GameHr_1562680((__int64)v35, "Wait", 0x1.0000000000000p+0f);
        EventMemoryMenu_19e5e70_alt1(v35, *(_QWORD*)(a1 + 1608));
      }
      else if (v34 == 0) {
        goto LABEL_104;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak_alt1(v34);
      }
    }
  LABEL_104:
    v36 = *(_QWORD*)(a1 + 856);
    v51[0] = "L_Img_00/L_Img";
    v51[1] = 14;
    if (v36 == 0) {
      goto LABEL_139;
    }
    v37 = std___1___shared_weak_count_lock(v36);
    if (v37 == 0) {
      goto LABEL_139;
    }
    v38 = *v4;
    v39 = v37;
    if (v38 != 0) {
      GameRoutine_1612a90((void*)((__int64*)&v52_.v52), v38, (__int64)v51);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
      std___1___shared_weak_count___release_weak_alt1(v39);
    }
    if (v38 == 0 || v52_.v53 == 0) {
      goto LABEL_139;
    }
    v40 = std___1___shared_weak_count_lock(v52_.v53);
    v41 = (__int64)v52_.v52;
    if (v52_.v53 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v52_.v53);
    }
    if (v40 != 0 && v41 != 0) {
      if ((*(_BYTE*)(a1 + 1560) & 1) != 0) {
        v42 = *(const char**)(a1 + 1576);
      }
      else {
        v42 = (const char*)(a1 + 1561);
      }
      AsyncLoadImage_17e4db0(v41, v42, 0);
      *(_BYTE*)(v41 + 256) = 1;
    LABEL_137:
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak_alt1(v40);
      }
      goto LABEL_139;
    }
  LABEL_136:
    if (v40 != 0) {
      goto LABEL_137;
    }
  LABEL_139:
    v45 = *(unsigned __int8*)(a1 + 1560);
    v46 = *(_QWORD*)(a1 + 1568);
    result = a1 + 1584;
    v47 = v45 >> 1;
    if ((v45 & 1) != 0) {
      v47 = *(_QWORD*)(a1 + 1568);
    }
    *(_BYTE*)(a1 + 1557) = v47 != 0;
    if ((*(_BYTE*)(a1 + 1584) & 1) != 0) {
      if ((v45 & 1) != 0) {
        v50 = *(_QWORD*)(a1 + 1576);
      }
      else {
        v50 = a1 + 1561;
      }
      result = (__int64)SpineModel_64dde0((__int64*)result, v50, v47);
    }
    else if ((v45 & 1) != 0) {
      result = (__int64)GameRoutine_64df20((_QWORD*)result,
                                           *(_QWORD*)(a1 + 1576), v46);
    }
    else {
      v48 = *(_QWORD*)(a1 + 1568);
      v49 = *(_QWORD*)(a1 + 1576);
      *(_QWORD*)result = *(_QWORD*)(a1 + 1560);
      *(_QWORD*)(a1 + 1592) = v48;
      *(_QWORD*)(a1 + 1600) = v49;
    }
    *(_QWORD*)(a1 + 1616) = *(_QWORD*)(a1 + 1608);
    return result;
  }
  switch (v3) {
  case 2:
    v9 = "Out";
  LABEL_24:
    result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
        (__int64*)(a1 + 848), (__int64)v9, 0);
    if ((result & 1) != 0) {
      *(_DWORD*)(a1 + 1552) = 0;
    }
    return result;
  case 3:
    result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
        (__int64*)(a1 + 848), (__int64)"Change", 0);
    if ((result & 1) == 0) {
      return result;
    }
    LayoutAccessor_1560070((void*)(&v52_.v52), (__int64*)(a1 + 848),
                           "L_Img_00");
    if (v52_.v53 != 0) {
      v10 = std___1___shared_weak_count_lock(v52_.v53);
      v11 = v52_.v52;
      if (v52_.v53 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v52_.v53);
      }
      if (v10 != 0 && v11 != nullptr) {
        GameHr_1562680((__int64)v11, "Wait", 0x1.0000000000000p+0f);
        v12 = *(_QWORD*)(a1 + 1616);
        if (v12 != 0) {
          v13 = "ClearImg_Off";
        }
        else {
          v13 = "ClearImg";
        }
        LayoutAccessor_1562cf0_alt1((__int64)v11, v13);
        v14 = ui_LayoutAccessor_FindPane_alt1(v11, (__int64)"Icon_Clan");
        if (v14 != 0) {
          v14 =
              __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1840e20_alt1(v14, v12);
      }
      else if (v10 == 0) {
        goto LABEL_76;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
  LABEL_76:
    result = *(_QWORD*)(a1 + 856);
    v51[0] = "L_Img_00/L_Img";
    v51[1] = 14;
    if (result == 0) {
      goto LABEL_123;
    }
    result = std___1___shared_weak_count_lock(result);
    if (result == 0) {
      goto LABEL_123;
    }
    v29 = *v4;
    v30 = result;
    if (v29 != 0) {
      result =
          X8CALL_X0(__int64, GameRoutine_1612a90((void*)((__int64*)&v52_.v52),
                                                 v29, (__int64)v51));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      result = std___1___shared_weak_count___release_weak_alt1(v30);
    }
    if (v29 == 0) {
      goto LABEL_123;
    }
    result = v52_.v53;
    if (v52_.v53 == 0) {
      goto LABEL_123;
    }
    v31 = std___1___shared_weak_count_lock(v52_.v53);
    v32 = (__int64)v52_.v52;
    result = v52_.v53;
    if (v52_.v53 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v52_.v53);
    }
    if (v31 != 0 && v32 != 0) {
      if ((*(_BYTE*)(a1 + 1584) & 1) != 0) {
        v33 = *(const char**)(a1 + 1600);
      }
      else {
        v33 = (const char*)(a1 + 1585);
      }
      result = AsyncLoadImage_17e4db0(v32, v33, 0);
      *(_BYTE*)(v32 + 256) = 0;
    }
    else if (v31 == 0) {
    LABEL_123:
      *(_DWORD*)(a1 + 1552) = 4;
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      result = std___1___shared_weak_count___release_weak_alt1(v31);
    }
    goto LABEL_123;
  case 4:
    result = *(_QWORD*)(a1 + 856);
    v51[0] = "L_Img_00/L_Img";
    v51[1] = 14;
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v5 = *v4;
        v6 = result;
        if (*v4 != 0) {
          result = X8CALL_X0(__int64,
                             GameRoutine_1612a90((void*)((__int64*)&v52_.v52),
                                                 *v4, (__int64)v51));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          result = std___1___shared_weak_count___release_weak_alt1(v6);
        }
        if (v5 != 0) {
          result = v52_.v53;
          if (v52_.v53 != 0) {
            v7 = std___1___shared_weak_count_lock(v52_.v53);
            v8 = v52_.v52;
            result = v52_.v53;
            if (v52_.v53 != 0) {
              result =
                  std___1___shared_weak_count___release_weak_alt1(v52_.v53);
            }
            if (v7 != 0 && v8 != nullptr) {
              if ((v8[30] & 1) == 0) {
                result = (*(__int64 (**)(__int64*))(*v8 + 160))(v8);
                if ((result & 1) == 0) {
                  LayoutAccessor_1562ea0((__int64*)(a1 + 848), "In");
                  *(_DWORD*)(a1 + 1552) = 0;
                  result = ui_LayoutAccessor_SetPaneVisible(
                      a1 + 848, (__int64)"L_Img_01", 0);
                }
              }
            }
            else if (v7 == 0) {
              return result;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              return std___1___shared_weak_count___release_weak_alt1(v7);
            }
          }
        }
      }
    }
    break;
  default:
    break;
  }
  return result;
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

const char* game_facility_anonymous_EventMemoryMenu_OnInit(const char* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  const char* result;
  __int64 v30;
  __int64* v31;
  int v32;
  float v33;
  __int64 v34;
  __int64* v35;
  float v36;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;
  struct {
    __int64 (**v39)();
    const char* v40;
    char v41;
    char gap33_[3];
    int v42;
    int v43;
    char v44;
    char gap45_[3];
    __int64 (***v45)();
  } v39_;
  struct {
    __int64 v46;
    __int64 v47;
  } v46_;
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;

  LayoutAccessor_1560070((void*)(&v46_.v46), (__int64*)a1 + 106,
                         "L_PageTab_Category");
  if (v46_.v47 != 0 && (v2 = std___1___shared_weak_count_lock(v46_.v47)) != 0) {
    v3 = v2;
    v4 = 0;
    v48_.v48 = v46_.v46;
    v48_.v49 = v2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v3 = 0;
    v48_.v48 = 0;
    v48_.v49 = 0;
    v4 = 1;
  }
  v39_.v39 = GameData_21236c8;
  v39_.v40 = a1;
  v5 = *(_QWORD*)a1;
  v39_.v45 = &v39_.v39;
  v6 = (*(__int64 (**)(const char*))(v5 + 192))(a1);
  game_menu_PageTab_SetupLabel((__int64)(a1 + 1072), &v48_.v48,
                               (__int64)&v39_.v39, v6, 4u, 5u);
  if (v39_.v45 == &v39_.v39) {
    v7 = 4;
  }
  else {
    if (v39_.v45 == nullptr) {
      goto LABEL_10;
    }
    v7 = 5;
  }
  ((__int64 (*)(__int64))(*v39_.v45)[v7])((__int64)v39_.v45);
LABEL_10:
  if (v48_.v49 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v48_.v49);
  }
  if ((v4 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  if (v46_.v47 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v46_.v47);
  }
  LayoutAccessor_1560070((void*)(&v46_.v46), (__int64*)a1 + 106, "L_PageTab");
  if (v46_.v47 != 0 && (v8 = std___1___shared_weak_count_lock(v46_.v47)) != 0) {
    v9 = v8;
    v10 = 0;
    v37_.v37 = v46_.v46;
    v37_.v38 = v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v9 = 0;
    v37_.v37 = 0;
    v37_.v38 = 0;
    v10 = 1;
  }
  v39_.v39 = GameData_2123748;
  v39_.v40 = a1;
  v11 = *(_QWORD*)a1;
  v39_.v45 = &v39_.v39;
  v12 = (*(__int64 (**)(const char*))(v11 + 192))(a1);
  game_menu_PageTab_SetupLabel((__int64)(a1 + 1200), &v37_.v37,
                               (__int64)&v39_.v39, v12, 0xEu, 0xFu);
  if (v39_.v45 == &v39_.v39) {
    v13 = 4;
  }
  else {
    if (v39_.v45 == nullptr) {
      goto LABEL_26;
    }
    v13 = 5;
  }
  ((void (*)(__int64 (***)(void)))(*v39_.v45)[v13])(v39_.v45);
LABEL_26:
  if (v37_.v38 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v37_.v38);
  }
  if ((v10 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  if (v46_.v47 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v46_.v47);
  }
  LayoutAccessor_1560070((void*)(&v39_.v39), (__int64*)a1 + 106,
                         "L_PageTab_Category");
  if (v39_.v40 != nullptr) {
    v14 = std___1___shared_weak_count_lock((__int64)v39_.v40);
    v15 = (__int64*)v39_.v39;
    if (v39_.v40 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v39_.v40);
    }
    if (v14 != 0 && v15 != nullptr) {
      ui_LayoutAccessor_SetPaneVisible((__int64)v15, (__int64)"A_Tab", 0);
      LayoutAccessor_1562cf0_alt1((__int64)v15, "UnitOn");
      v16 = ui_LayoutAccessor_FindPane_alt1(v15, (__int64)"Face");
      if (v16 != 0) {
        v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
        if (v17 != 0) {
          v18 = *((_DWORD*)a1 + 269);
          v19 = *((_QWORD*)a1 + 136);
          v20 = v17;
          if (v18 < (unsigned __int64)((*((_QWORD*)a1 + 137) - v19) >> 2)) {
            v18 = *(_DWORD*)(v19 + 4LL * v18);
          }
          v21 = ~*((_DWORD*)a1 + 332) + *((_DWORD*)a1 + 334);
          if (v21 >= v18) {
            v21 = v18;
          }
          if (v18 >= 0) {
            v22 = v21;
          }
          else {
            v22 = 0;
          }
          v23 = *(unsigned __int8*)(*((_QWORD*)a1 + 166) + v22);
          UnitUtil_15e0120((__int64)&v39_.v39);
          if (v23 != 9) {
            UnitUtil_15e0200((__int64)&v39_.v39);
          }
          v24 = *((_DWORD*)a1 + 269);
          v25 = *((_QWORD*)a1 + 136);
          if (v24 < (unsigned __int64)((*((_QWORD*)a1 + 137) - v25) >> 2)) {
            v24 = *(_DWORD*)(v25 + 4LL * v24);
          }
          v26 = ~*((_DWORD*)a1 + 332) + *((_DWORD*)a1 + 334);
          if (v26 >= v24) {
            v26 = v24;
          }
          if (v24 >= 0) {
            v27 = v26;
          }
          else {
            v27 = 0;
          }
          v28 = game_GetHero(*(_BYTE*)(*((_QWORD*)a1 + 166) + v27));
          GameHr_1840a20(v20, 0, v28, 6u, 1);
          UnitUtil_15e04f0((__int64)&v39_.v39);
        }
      }
    }
    else if (v14 == 0) {
      goto LABEL_60;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt1(v14);
    }
  }
LABEL_60:
  LayoutAccessor_1560070((void*)(&v39_.v39), (__int64*)a1 + 106, "L_KeyHelp00");
  result = v39_.v40;
  if (v39_.v40 == nullptr) {
    goto LABEL_68;
  }
  v30 = std___1___shared_weak_count_lock((__int64)v39_.v40);
  v31 = (__int64*)v39_.v39;
  result = v39_.v40;
  if (v39_.v40 != nullptr) {
    result = (const char*)std___1___shared_weak_count___release_weak_alt1(
        (__int64)v39_.v40);
  }
  if (v30 != 0 && v31 != nullptr) {
    v32 = (*(__int64 (**)(const char*))(*(_QWORD*)a1 + 192LL))(a1);
    v39_.v42 = 0;
    v39_.v43 = v32;
    v39_.v44 = 0;
    v39_.v45 = nullptr;
    v39_.v39 = (__int64 (**)(void)) "Play";
    v39_.v40 = "MID_KeyHelp_Play";
    v39_.v41 = 1;
    result = (const char*)game_gameui_1593d90(v31, (__int64)&v39_.v39);
  }
  else if (v30 == 0) {
    goto LABEL_68;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = (const char*)std___1___shared_weak_count___release_weak_alt1(v30);
    if ((a1[1065] & 1) != 0) {
      goto LABEL_81;
    }
  LABEL_69:
    GameHr_1562680((__int64)(a1 + 848), "Out", 0x1.0000000000000p+0f);
    v33 = LayoutAccessor_15638b0((__int64*)a1 + 106, "Out", 0);
    LayoutAccessor_1562f00((__int64)(a1 + 848), (__int64)"Out", v33);
    LayoutAccessor_1563030((__int64)(a1 + 848), (__int64)"Out", 0);
    LayoutAccessor_1560070((void*)(&v39_.v39), (__int64*)a1 + 106,
                           "L_Condition");
    result = v39_.v40;
    if (v39_.v40 != nullptr) {
      v34 = std___1___shared_weak_count_lock((__int64)v39_.v40);
      v35 = (__int64*)v39_.v39;
      result = v39_.v40;
      if (v39_.v40 != nullptr) {
        result = (const char*)std___1___shared_weak_count___release_weak_alt1(
            (__int64)v39_.v40);
      }
      if (v34 != 0 && v35 != nullptr) {
        GameHr_1562680((__int64)v35, "Out", 0x1.0000000000000p+0f);
        v36 = LayoutAccessor_15638b0(v35, "Out", 0);
        LayoutAccessor_1562f00((__int64)v35, (__int64)"Out", v36);
        result = (const char*)LayoutAccessor_1563030((__int64)v35,
                                                     (__int64)"Out", 0);
        goto LABEL_78;
      }
      if (v34 != 0) {
      LABEL_78:
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          result =
              (const char*)std___1___shared_weak_count___release_weak_alt1(v34);
        }
      }
    }
    *((_BYTE*)a1 + 1520) = 0;
    goto LABEL_81;
  }
LABEL_68:
  if ((a1[1065] & 1) == 0) {
    goto LABEL_69;
  }
LABEL_81:
  *((_BYTE*)a1 + 1065) = 1;
  return result;
}

__int64 game_facility_anonymous_EventMemoryMenu_OnBuild(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 (***v4)();
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  struct {
    __int64 (**v15)();
    __int64 v16;
    char gap16_[16];
    __int64 (***v17)();
  } v15_;
  __int64 v18;

  v3 = a1[32];
  v2 = a1[33];
  v4 = &v15_.v15;
  v15_.v15 = GameData_21237e0;
  v15_.v17 = &v15_.v15;
  if (v2 == v3) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v3 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_21237b8, 0);
      if (v8 == 0) {
        goto LABEL_3;
      }
      v18 = v8;
      if (v15_.v17 == nullptr) {
        GameRoutine_60a310();
      }
      if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v15_.v17)[6])(
               v15_.v17, &v18) &
           1) != 0) {
        break;
      }
      v3 = a1[32];
      v2 = a1[33];
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v2 - v3) >> 3);
  v4 = v15_.v17;
  if (v15_.v17 != &v15_.v15) {
    if (v15_.v17 != nullptr) {
      v9 = 5;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_12:
  v9 = 4;
LABEL_13:
  ((__int64 (*)(__int64))(*v4)[v9])((__int64)v4);
LABEL_14:
  result = a1[42];
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_21237b8, 0);
    if (result != 0) {
      v11 = result;
      LayoutAccessor_1560070((void*)(&v15_.v15), a1 + 106, "L_KeyHelp00");
      result = v15_.v16;
      if (v15_.v16 != 0) {
        v12 = std___1___shared_weak_count_lock(v15_.v16);
        v13 = (__int64)v15_.v15;
        result = v15_.v16;
        if (v15_.v16 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v15_.v16);
        }
        if (v12 != 0 && v13 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 464LL))(v11) & 1) !=
              0) {
            v14 = "Default";
          }
          else {
            v14 = "Disable";
          }
          result = LayoutAccessor_1562cf0_alt1(v13, v14);
        LABEL_26:
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            return std___1___shared_weak_count___release_weak_alt1(v12);
          }
        }
        else if (v12 != 0) {
          goto LABEL_26;
        }
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_EventMemoryMenu_ACall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  const char* v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  struct {
    _QWORD v29[4];
    _QWORD* v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
  } v29_;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_21237b8, 0);
    if (v3 != 0) {
      v4 = v3;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) != 0) {
        v5 = *(_QWORD*)(v4 + 112);
        if (v5 != *(_QWORD*)(v4 + 120)) {
          v6 = *(_QWORD*)(v5 + 8LL * *(int*)(v4 + 136));
          if (v6 != 0) {
            v7 = *(_QWORD*)(v6 + 96);
            v8 = *(_QWORD*)(v6 + 104);
            if (v7 != v8) {
              v9 = 0;
              do {
                LOBYTE(v11) = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v12 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)(*(_QWORD*)v7 + 16LL));
                  if (v12 != 0) {
                    v13 = *(_DWORD*)(v12 + 32);
                    v11 = v13 / 0x21B7900 -
                          11 * ((390451573 *
                                 (unsigned __int64)(v13 / 0x21B7900)) >>
                                32);
                    if (v11 != 0) {
                      v14 = (v13 / 0x86DE40uLL) & 3;
                      if ((int)v14 > 1) {
                        if ((_DWORD)v14 == 3) {
                          v10 = (const char*)&GameData_1aabf2c;
                        }
                        else {
                          v10 = (const char*)&GameData_1ad64fb;
                        }
                      }
                      else {
                        v10 = (const char*)&GameData_1abf85f;
                        if ((_DWORD)v14 != 0) {
                          v10 = (const char*)*(&GameData_1f9caf8 + v11);
                        }
                      }
                      TimelineFile_890160(v10);
                      LOBYTE(v11) = 1;
                    }
                  }
                  else {
                    LOBYTE(v11) = 0;
                  }
                }
                v7 += 8;
                v9 |= v11;
              } while (v7 != v8);
              if ((v9 & 1) != 0) {
                v15 = *(_DWORD*)(a1 + 1076);
                v16 = *(_QWORD*)(a1 + 1088);
                if (v15 <
                    (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v16) >> 2)) {
                  v15 = *(_DWORD*)(v16 + 4LL * v15);
                }
                v17 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
                if (v17 >= v15) {
                  v17 = v15;
                }
                if (v15 >= 0) {
                  v18 = v17;
                }
                else {
                  v18 = 0;
                }
                if ((unsigned int)*(unsigned __int8*)(*(_QWORD*)(a1 + 1328) +
                                                      v18) -
                        5 >
                    3) {
                  v29_.v32 = 0;
                  v29_.v33 = 0;
                  v29_.v30 = nullptr;
                  v29_.v31 = 0;
                  memset(v29_.v29, 0, sizeof(v29_.v29));
                  v34_.v34[0] = GameData_2123870;
                  v34_.v34[1] = v6;
                  v34_.v35 = v34_.v34;
                  GameRoutine_87dcb0(v34_.v34, v29_.v29);
                  if (v34_.v35 == v34_.v34) {
                    v22 = 32;
                  }
                  else {
                    if (v34_.v35 == nullptr) {
                      goto LABEL_39;
                    }
                    v22 = 40;
                  }
                  (*(void (**)(__int64))(*v34_.v35 + v22))((__int64)v34_.v35);
                LABEL_39:
                  BYTE1(v29_.v32) = 1;
                  GameRoutine_19577f0(a1, (__int64)v29_.v29);
                  v34_.v35 = v34_.v34;
                  v34_.v34[0] = GameData_21238f0;
                  GameRoutine_1957ca0(2, (__int64)v34_.v34);
                  if (v34_.v35 == v34_.v34) {
                    v23 = 32;
                  }
                  else {
                    if (v34_.v35 == nullptr) {
                      goto LABEL_44;
                    }
                    v23 = 40;
                  }
                  (*(void (**)(__int64))(*v34_.v35 + v23))((__int64)v34_.v35);
                LABEL_44:
                  v34_.v35 = v34_.v34;
                  v27_.v27[0] = GameData_2123970;
                  v27_.v28 = v27_.v27;
                  v34_.v34[0] = GameData_2123970;
                  GameRoutine_654050(v34_.v34, (_QWORD*)(a1 + 288));
                  if (v34_.v35 == v34_.v34) {
                    v24 = 32;
                  }
                  else {
                    if (v34_.v35 == nullptr) {
                      goto LABEL_49;
                    }
                    v24 = 40;
                  }
                  (*(void (**)(__int64))(*v34_.v35 + v24))((__int64)v34_.v35);
                LABEL_49:
                  if (v27_.v28 == v27_.v27) {
                    v25 = 32;
                  }
                  else {
                    if (v27_.v28 == nullptr) {
                      goto LABEL_54;
                    }
                    v25 = 40;
                  }
                  (*(void (**)(__int64))(*v27_.v28 + v25))((__int64)v27_.v28);
                LABEL_54:
                  if (v29_.v30 == v29_.v29) {
                    v26 = 32;
                  }
                  else {
                    if (v29_.v30 == nullptr) {
                      return 10;
                    }
                    v26 = 40;
                  }
                  (*(void (**)(__int64))(*v29_.v30 + v26))((__int64)v29_.v30);
                  return 10;
                }
                v34_.v34[0] = "MID_Memory_NotData_Message";
                v19 = game_menu_Dialog__CreateBind_game_menu_Dialog(
                    a1, (__int64)v34_.v34);
                if (v19 != 0) {
                  v29_.v30 = nullptr;
                  GameRoutine_6680e0(v29_.v29, (_QWORD*)(v19 + 1248));
                  if (v29_.v30 == v29_.v29) {
                    v20 = 32;
                    goto LABEL_61;
                  }
                  if (v29_.v30 != nullptr) {
                    v20 = 40;
                  LABEL_61:
                    (*(void (**)(__int64))(*v29_.v30 + v20))((__int64)v29_.v30);
                  }
                }
                return 12;
              }
            }
          }
        }
      }
    }
  }
  return 1;
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

__int64 game_facility_anonymous_EventMemoryMenu_SortAndFilter(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _BYTE v4[32];
    _BYTE* v5;
  } v4_;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v4_.v5 = nullptr;
  v6_.v6[0] = GameData_2123cc0;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  BasicMenu_16e1f40(a1, (__int64)v6_.v6, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v1 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4_.v5 + v1))((__int64)v4_.v5);
LABEL_6:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v3))((__int64)v6_.v7);
}

const char* EventMemoryMenu_Unknown140(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1064) != 0) {
    return "MID_ObeliskMenu_Memory_Movie";
  }
  else {
    return "MID_ObeliskMenu_Memory_Event";
  }
}

const char* EventMemoryMenu_Unknown141(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1064) != 0) {
    return "MID_MemoryMovieMenu_Help";
  }
  else {
    return "MID_MemoryEventMenu_Help";
  }
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

const char* EventMemoryMenu_Unknown3(__int64 a1)
{
  if (*(_BYTE*)(a1 + 8) != 0) {
    return "MID_ObeliskMenu_Memory_Movie";
  }
  else {
    return "MID_ObeliskMenu_Memory_Event";
  }
}

const char* EventMemoryMenu_Unknown5(__int64 a1)
{
  if (*(_BYTE*)(a1 + 8) != 0) {
    return "MID_MemoryMovieMenu_Help";
  }
  else {
    return "MID_MemoryEventMenu_Help";
  }
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

void EventMemoryMenu_19e6970(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64* v22;
    __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
    __int64 v28;
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
  } v22_;

  LayoutAccessor_1560070((void*)(&v22_.v22), (__int64*)(a1 + 848),
                         "L_Condition");
  if (v22_.v23 != 0) {
    v2 = std___1___shared_weak_count_lock(v22_.v23);
    v3 = v22_.v22;
    if (v22_.v23 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v22_.v23);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        return;
      }
      goto LABEL_28;
    }
    v5 = *(_QWORD*)(a1 + 336);
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_212e008[0], &GameData_21237b8, 0);
      if (v6 != 0) {
        v7 = *(_QWORD*)(v6 + 112);
        if ((unsigned __int64)(*(_QWORD*)(v6 + 120) - v7) >= 9) {
          v8 = *(_DWORD*)(a1 + 1396);
          v9 = *(_QWORD*)(a1 + 1408);
          v10 = v8;
          if (v8 < (unsigned __int64)((*(_QWORD*)(a1 + 1416) - v9) >> 2)) {
            v8 = *(_DWORD*)(v9 + 4LL * v8);
            v10 = v8;
          }
          *(_DWORD*)(v6 + 136) = v8;
          v11 = *(_QWORD*)(v7 + 8 * v10);
          v12 = *(_QWORD*)(v11 + 8);
          if (v12 == 0) {
            goto LABEL_25;
          }
          v13 = *(_BYTE**)(v12 + 80);
          if (v13 != nullptr) {
            v22_.v28 = -1;
            v22_.v29 = -1;
            v22_.v30 = -1;
            v22_.v31 = -1;
            v14 = *msg_MessageManager_instance__ptr[0];
            v22_.v32 = -1;
            v22_.v33 = -1;
            v22_.v34 = -1;
            v22_.v35 = -1;
            v22_.v36 = -1;
            v22_.v37 = -1;
            v22_.v38 = -1;
            v22_.v39 = -1;
            v22_.v22 = GameData_212e348 + 2;
            v22_.v23 = 0xFFFF0001FFFF0000LL;
            v22_.v24 = 0xFFFF0004FFFF0002LL;
            v22_.v25 = 0xFFFF0006FFFF0005LL;
            v22_.v40 = 8;
            v22_.v26 = -65529;
            v22_.v27 = -65528;
            if (GameRoutine_a4dbe0_alt2(v14, v13, 0) == nullptr) {
            LABEL_25:
              v19 = "p";
              goto LABEL_26;
            }
          }
          else {
            v15 = *(_QWORD*)(*(_QWORD*)(v12 + 24) + 8LL);
            if (v15 == 0 || *(_QWORD*)(v15 + 32) == 0) {
              goto LABEL_25;
            }
          }
          v16 = *(_QWORD*)(v11 + 8);
          if (v16 != 0) {
            v17 = *(_BYTE**)(v16 + 80);
            if (v17 != nullptr) {
              v22_.v28 = -1;
              v22_.v29 = -1;
              v22_.v30 = -1;
              v22_.v31 = -1;
              v18 = *msg_MessageManager_instance__ptr[0];
              v22_.v32 = -1;
              v22_.v33 = -1;
              v22_.v34 = -1;
              v22_.v35 = -1;
              v22_.v36 = -1;
              v22_.v37 = -1;
              v22_.v38 = -1;
              v22_.v39 = -1;
              v22_.v22 = GameData_212e348 + 2;
              v22_.v23 = 0xFFFF0001FFFF0000LL;
              v22_.v24 = 0xFFFF0004FFFF0002LL;
              v22_.v25 = 0xFFFF0006FFFF0005LL;
              v22_.v40 = 8;
              v22_.v26 = -65529;
              v22_.v27 = -65528;
              v19 = GameRoutine_a4dbe0_alt2(v18, v17, 0);
            }
            else {
              v21 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 8LL);
              if (v21 == 0) {
                goto LABEL_28;
              }
              v19 = *(char**)(v21 + 32);
            }
            if (v19 != nullptr) {
            LABEL_26:
              v20 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Txt");
              if (v20 != 0) {
                GameRoutine_156c5d0(v20, (__int64)v19, 0);
              }
            }
          }
        }
      }
    }
  LABEL_28:
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
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
