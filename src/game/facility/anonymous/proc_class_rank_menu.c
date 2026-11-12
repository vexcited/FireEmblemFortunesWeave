#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_145e5c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_145e820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1575e70(_QWORD, _QWORD);
__int64 GameRoutine_16bb880(_QWORD, _QWORD);
__int64 GameRoutine_16bb9c0(_QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_208d800;
extern __int64 GameData_21f1e08;
extern __int64 GameData_21f3ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcClassRankMenu_Unknown96_alt1(_QWORD* a1) __asm__(
    "ProcClassRankMenu_Unknown96");
__int64 ProcClassRankMenu_Unknown103(__int64 a1);
__int64 ProcClassRankMenu_Unknown105(__int64 a1);
const char* ProcClassRankMenu_Unknown130(__int64 a1);
__int64 ProcClassRankMenu_Unknown142(__int64 a1, __int64* a2);
__int64 GameRoutine_1467a30(_QWORD);
__int64 _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(_QWORD, _QWORD);
extern __int64 (*GameData_208d828[])();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64
ProcClassRankMenu_16bb880_alt1(_QWORD* a1,
                               __int64 a2) __asm__("ProcClassRankMenu_16bb880");
__int64
game_facility_anonymous_ProcClassRankMenu_ChangeUnit_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2);
__int64* FloatingHelp_18af120(_QWORD*, __int64*);
__int64 GameRoutine_18af980(__int64, __int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
extern __int64* GameData_212d890[2];
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
void LayoutAccessor_1566d90(__int64, char);
void LayoutAccessor_1567000(__int64, char);
void ProcClassRankMenu_Unknown94(__int64* a1);
_QWORD* GameMenu_16e9cd0(__int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 game_gameui_Util_SetUnitInfoMasteryLevel(_QWORD*);
__int64 game_menu_BasicMenu_Unknown16de4d0_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Unknown16de4d0");
__int64 game_menu_BasicMenu_Unknown96_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown96");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void FloatingHelp_18aee60(_QWORD*, __int64*);
void GameRoutine_16bb9c0_alt1(__int64) __asm__("GameRoutine_16bb9c0");
void GameRoutine_18ae960_alt1(_QWORD*, char) __asm__("GameRoutine_18ae960");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_facility_1467a30(__int64);
void ProcClassRankMenu_Unknown96(__int64* a1);
void ProcClassRankMenu_16bb880(_QWORD* a1, __int64 a2);
_QWORD* Util_1576480(__int64, __int64, unsigned __int8);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_16bc660(__int64*, const char**, int*);
__int64 GameRoutine_16bc360(__int64*, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_facility_anonymous_16bc520(__int64, const char*, int*);
__int64 game_facility_anonymous_16bc820(__int64, const char**, int*);
bool game_159e890(__int64, char, __int64);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern __int64 game_GameModeData_instance_;
void game_159f000(__int64*, __int64*, __int64*, char);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcClassRankMenu_Unknown84(__int64 a1);
void ProcClassRankMenu_16bb9c0(__int64 a1);

__int64 ProcClassRankMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  const char* v5;
  __int64 result;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  LayoutAccessor_1560070((void*)(&v10_.v10), (__int64*)(a1 + 848), "L_JobList");
  if (v10_.v11 == 0) {
    goto LABEL_21;
  }
  v2 = std___1___shared_weak_count_lock_alt1(v10_.v11);
  v3 = v10_.v10;
  if (v10_.v11 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v10_.v11);
  }
  if (v2 == 0 || v3 == 0) {
    if (v2 == 0) {
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v5 = "LvOff";
  if (*(_BYTE*)(a1 + 1072) != 1) {
    if (*(_BYTE*)(a1 + 1072) != 0) {
      goto LABEL_19;
    }
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
        v5 = "LvOn";
      }
    }
    else {
      v5 = "LvOn";
    }
  }
  LayoutAccessor_1562cf0(v3, v5);
LABEL_19:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
LABEL_21:
  result = ProcClassRankMenu_16bb880_alt1((_QWORD*)a1, *(_QWORD*)(a1 + 1064));
  v7 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v8 = (_QWORD*)GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60(v8, (__int64*)(a1 + 848));
    GameRoutine_18ae960_alt1((_QWORD*)v7, 1);
    result = *(_QWORD*)(v7 + 240);
    *(_QWORD*)(v7 + 232) = 0;
    *(_QWORD*)(v7 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(result);
    }
    *(_QWORD*)(v7 + 160) = a1;
    *(_BYTE*)(v7 + 257) = 0;
    *(_DWORD*)(v7 + 248) = -1;
    v9 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v9 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

void ProcClassRankMenu_Unknown94(__int64* a1)
{
  _QWORD* v2;
  char v3[4];
  struct {
    __int64* v4;
    int v5;
    char gap20_[4];
    __int64 v6;
  } v4_;

  if (a1[78] != 0) {
    a1[78] = 0;
  }
  LayoutAccessor_155e830((__int64)(a1 + 106), 0);
  v2 = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
      v4_.v6 = 0;
      v4_.v4 = GameData_212d890[0] + 2;
      v4_.v5 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
          *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
          (void*)(v3), GameData_21f1e08 + 8, &v4_.v4);
    }
    v2[20] = 0;
    FloatingHelp_18af120(v2, a1 + 106);
    GameRoutine_18af980((__int64)v2, a1 + 106);
  }
  if ((*(unsigned int (**)(__int64*))(*a1 + 168))(a1) == 9) {
    if (game_gameui_Header_instance_ != 0) {
      LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
    }
    if (game_gameui_Footer_instance_ != 0) {
      LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
  }
}

void ProcClassRankMenu_Unknown96(__int64* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  game_menu_BasicMenu_Unknown96_alt1((__int64)a1);
  if ((*(unsigned int (**)(__int64*))(*a1 + 168))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(__int64*))(a1[132] + 96))(a1 + 132);
  }
  if (GameData_21f3ff8 != 0) {
    v2 = *(__int64**)(GameData_21f3ff8 + 48);
    if (*(__int64**)(GameData_21f3ff8 + 56) != v2) {
      v3 = *v2;
      if (*v2 != 0) {
        if (a1[133] != v3) {
          ProcClassRankMenu_16bb880_alt1(a1, v3);
          game_menu_BasicMenu_Unknown16de4d0_alt1((__int64)a1);
        }
        LayoutAccessor_1560070((void*)(&v11_.v11), a1 + 106, "L_UnitInfo00");
        if (v11_.v12 == 0) {
          goto LABEL_21;
        }
        v4 = std___1___shared_weak_count_lock_alt1(v11_.v12);
        if (v4 != 0) {
          v5 = v11_.v11;
        }
        else {
          v5 = 0;
        }
        if (v11_.v12 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v11_.v12);
        }
        if (v5 != 0) {
          v10[0] = v5;
          v10[1] = v4;
          if (v4 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                      memory_order_relaxed);
            game_gameui_Util_SetUnitInfoMasteryLevel(v10);
            std___1___shared_weak_count___release_weak_alt1(v4);
            goto LABEL_18;
          }
          game_gameui_Util_SetUnitInfoMasteryLevel(v10);
        }
        else if (v4 != 0) {
        LABEL_18:
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            std___1___shared_weak_count___release_weak_alt1(v4);
          }
        }
      LABEL_21:
        GameRoutine_16bb9c0_alt1((__int64)a1);
      }
    }
  }
  v6 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v7 = (_QWORD*)GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60(v7, a1 + 106);
    GameRoutine_18ae960_alt1((_QWORD*)v6, 1);
    v8 = *(_QWORD*)(v6 + 240);
    *(_QWORD*)(v6 + 232) = 0;
    *(_QWORD*)(v6 + 240) = 0;
    if (v8 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v8);
    }
    *(_QWORD*)(v6 + 160) = a1;
    *(_BYTE*)(v6 + 257) = 0;
    *(_DWORD*)(v6 + 248) = -1;
    v9 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v9 + 276) = 0xC4048000446D8000LL;
    }
  }
}

__int64 ProcClassRankMenu_Unknown103(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  if (result != 0) {
    v3 = GameRoutine_145e5c0(result, *(_QWORD*)(a1 + 1064), 2);
    if (*(_QWORD*)(a1 + 1064) == v3) {
      return 0;
    }
    else {
      GameRoutine_16bb880(a1, v3);
      game_menu_BasicMenu_Unknown16de4d0(a1);
      return 13;
    }
  }
  return result;
}

__int64 ProcClassRankMenu_Unknown105(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  if (result != 0) {
    v3 = GameRoutine_145e820(result, *(_QWORD*)(a1 + 1064), 2);
    if (*(_QWORD*)(a1 + 1064) == v3) {
      return 0;
    }
    else {
      GameRoutine_16bb880(a1, v3);
      game_menu_BasicMenu_Unknown16de4d0(a1);
      return 13;
    }
  }
  return result;
}

const char* ProcClassRankMenu_Unknown130(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_208d800, 0)) != 0) {
    v4 = *(unsigned __int8*)(v3 + 96);
    if (*(_BYTE*)(v3 + 96) == 0 && *(_BYTE*)(a1 + 1072) == 1) {
      return "L_JobList/L_JobIcon00";
    }
  }
  else {
    v4 = 1;
  }
  return (const char*)game_util_Format("L_JobList/L_JobIcon_Rank%d_Attr0_00",
                                       v4);
}

__int64 ProcClassRankMenu_Unknown142(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

void ProcClassRankMenu_16bb880(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  __int64 v14;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[133] = a2;
  game_facility_1467a30(a2),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameMenu_16e9cd0((__int64)a1, a1[133]),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = a1[29];
  v4 = a1[30];
  v6 = v12_.v12;
  v12_.v12[0] = GameData_208d828;
  v12_.v12[1] = a1;
  v12_.v13 = v12_.v12;
  if (v4 == v5) {
    goto LABEL_12;
  }
  v7 = 0;
  v8 = GameData_212e008[0];
  do {
    v9 = *(_QWORD*)(v5 + 8 * v7);
    if (v9 != 0) {
      v10 = __dynamic_cast(v9, v8, &GameData_208d800, 0),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v10 == 0) {
        goto LABEL_3;
      }
      v14 = v10;
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310_alt1(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v12_.v13 + 48LL))(v12_.v13,
                                                                  &v14) &
           1) != 0) {
        break;
      }
      v5 = a1[29];
      v4 = a1[30];
    }
  LABEL_3:
    ++v7;
  } while (v7 < (v4 - v5) >> 3);
  v6 = v12_.v13;
  if (v12_.v13 != v12_.v12) {
    if (v12_.v13 != nullptr) {
      v11 = 40;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_12:
  v11 = 32;
LABEL_13:
  (*(void (**)(_QWORD*, __int64))(*v6 + v11))(v6, v3),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_14:
  GameRoutine_16bb9c0_alt1((__int64)a1),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

void ProcClassRankMenu_16bb9c0(__int64 a1)
{
  __int64* v1;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  const char* v39;
  const char* v40;
  const char* v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  char* v54;
  struct {
    char* v55;
    const char* v56;
    unsigned __int64 v57;
  } v55_;
  struct {
    __int64* v58;
    __int64* v59;
    unsigned __int64 v60;
  } v58_;
  struct {
    __int64 v61;
    __int64 v62;
  } v61_;
  _QWORD v63[2];
  struct {
    char v64[32];
    __int64 v65;
  } v64_;

  v1 = (__int64*)(a1 + 848);
  LayoutAccessor_1560070((void*)(&v58_.v58), (__int64*)(a1 + 848),
                         "L_UnitInfo00/L_UnitInfo");
  if (v58_.v59 != nullptr) {
    v3 = std___1___shared_weak_count_lock_alt1((__int64)v58_.v59);
    v4 = v58_.v58;
    if (v58_.v59 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v58_.v59);
    }
    if (v3 == 0 || v4 == nullptr) {
      if (v3 == 0) {
        goto LABEL_20;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v64_.v65 = 0;
      v6 = *(_QWORD*)(a1 + 1064);
      v7 = game_159e890(v6, 0, (__int64)v64_.v64);
      v8 = std___1___shared_weak_count_lock_alt1(v3);
      if (v8 != 0) {
        v9 = v8;
        LayoutAccessor_1571860(v4, v6, 1, 0, 0, v7);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak_alt1(v9);
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v3);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock_alt1(v3);
      if (v10 != 0) {
        v11 = v10;
        LayoutAccessor_1562cf0((__int64)v4, "Simple00");
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1(v11);
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
LABEL_20:
  LayoutAccessor_1560070((void*)(&v58_.v58), v1, "L_UnitInfo00");
  if (v58_.v59 == nullptr) {
    goto LABEL_33;
  }
  v12 = std___1___shared_weak_count_lock_alt1((__int64)v58_.v59);
  if (v12 != 0) {
    v13 = (__int64)v58_.v58;
  }
  else {
    v13 = 0;
  }
  if (v58_.v59 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v58_.v59);
  }
  if (v13 != 0) {
    v63[0] = v13;
    v63[1] = v12;
    if (v12 == 0) {
      game_gameui_Util_SetUnitInfoMasteryLevel(v63);
      goto LABEL_33;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    game_gameui_Util_SetUnitInfoMasteryLevel(v63);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  else if (v12 == 0) {
    goto LABEL_33;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
LABEL_33:
  LayoutAccessor_1560070((void*)(&v61_.v61), v1, "L_JobList");
  Util_1576480((__int64)&v61_.v61, *(_QWORD*)(a1 + 1064),
               *(_BYTE*)(a1 + 1072) == 0);
  if (v61_.v62 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v61_.v62);
  }
  v14 = *(_QWORD*)(a1 + 856);
  if (v14 != 0) {
    v15 = std___1___shared_weak_count_lock_alt1(v14);
    if (v15 != 0) {
      v16 = v15;
      if (*v1 != 0) {
        ControlCreator_13633c0(*v1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
    }
  }
  v58_.v59 = nullptr;
  v58_.v60 = 0;
  v58_.v58 = nullptr;
  LODWORD(v55_.v55) = 0;
  v17 = GameRoutine_16bc360(
      (__int64*)&v58_.v58, (__int64)"L_UnitInfo/L_HPGroup", (__int64)&v55_.v55);
  v18 = v58_.v60;
  v58_.v59 = (__int64*)v17;
  LODWORD(v55_.v55) = 0;
  if (v17 >= v58_.v60) {
    v20 = GameRoutine_16bc360((__int64*)&v58_.v58,
                              (__int64)"L_UnitInfo/L_LvGroup",
                              (__int64)&v55_.v55);
    v18 = v58_.v60;
    v19 = v20;
  }
  else {
    v19 = game_facility_anonymous_16bc520(v17, "L_UnitInfo/L_LvGroup",
                                          (int*)&v55_.v55) +
          32;
  }
  v58_.v59 = (__int64*)v19;
  v55_.v55 = game_util_Format_alt1("L_MasteryInfoItem%02d", 6);
  LODWORD(v54) = 0;
  if (v19 >= v18) {
    v22 = GameHr_16bc660((__int64*)&v58_.v58, (const char**)&v55_.v55,
                         (int*)&v54);
    v18 = v58_.v60;
    v21 = v22;
  }
  else {
    game_facility_anonymous_16bc820(v19, (const char**)&v55_.v55, (int*)&v54);
    v21 = v19 + 32;
  }
  v58_.v59 = (__int64*)v21;
  v55_.v55 = game_util_Format_alt1("L_MasteryInfoItem%02d", 7);
  LODWORD(v54) = 0;
  if (v21 >= v18) {
    v24 = GameHr_16bc660((__int64*)&v58_.v58, (const char**)&v55_.v55,
                         (int*)&v54);
    v18 = v58_.v60;
    v23 = v24;
  }
  else {
    game_facility_anonymous_16bc820(v21, (const char**)&v55_.v55, (int*)&v54);
    v23 = v21 + 32;
  }
  v58_.v59 = (__int64*)v23;
  v55_.v55 = game_util_Format_alt1("L_MasteryInfoItem%02d", 8);
  LODWORD(v54) = 0;
  if (v23 >= v18) {
    v25 = GameHr_16bc660((__int64*)&v58_.v58, (const char**)&v55_.v55,
                         (int*)&v54);
  }
  else {
    game_facility_anonymous_16bc820(v23, (const char**)&v55_.v55, (int*)&v54);
    v25 = v23 + 32;
  }
  v58_.v59 = (__int64*)v25;
  v55_.v55 = game_util_Format_alt1("L_MasteryInfoItem%02d", 9);
  LODWORD(v54) = 0;
  if (v25 >= v58_.v60) {
    v26 = GameHr_16bc660((__int64*)&v58_.v58, (const char**)&v55_.v55,
                         (int*)&v54);
  }
  else {
    game_facility_anonymous_16bc820(v25, (const char**)&v55_.v55, (int*)&v54);
    v26 = v25 + 32;
  }
  v58_.v59 = (__int64*)v26;
  v55_.v55 = game_util_Format_alt1("L_MasteryInfoItem%02d", 10);
  LODWORD(v54) = 0;
  if (v26 >= v58_.v60) {
    v27 = GameHr_16bc660((__int64*)&v58_.v58, (const char**)&v55_.v55,
                         (int*)&v54);
  }
  else {
    game_facility_anonymous_16bc820(v26, (const char**)&v55_.v55, (int*)&v54);
    v27 = v26 + 32;
  }
  v58_.v59 = (__int64*)v27;
  v55_.v55 = game_util_Format_alt1("L_MasteryInfoItem%02d", 11);
  LODWORD(v54) = 0;
  if (v27 >= v58_.v60) {
    v28 = GameHr_16bc660((__int64*)&v58_.v58, (const char**)&v55_.v55,
                         (int*)&v54);
  }
  else {
    game_facility_anonymous_16bc820(v27, (const char**)&v55_.v55, (int*)&v54);
    v28 = v27 + 32;
  }
  v58_.v59 = (__int64*)v28;
  v55_.v57 = 0;
  v29 = *(unsigned __int8*)(a1 + 1072);
  v30 = fw_memory_g_heap_manager_ptr;
  v55_.v55 = nullptr;
  v55_.v56 = nullptr;
  if (v29 != 0) {
    v31 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v32 = v31 + 32;
    v55_.v55 = (char*)v31;
    v55_.v56 = (const char*)(v31 + 32);
    v55_.v57 = v31 + 32;
    v33 = v31 + 32;
    strcpy((char*)v31, "*L_JobList/L_JobIcon00");
    *(_BYTE*)(v31 + 23) = 0;
    *(_QWORD*)(v31 + 24) = 0xFFFFFFFF00000000LL;
  }
  else {
    v54 = game_util_Format_alt1("L_JobList/L_JobIcon_Rank1_Attr%d_00", 0);
    v53 = 0;
    v34 = GameHr_16bc660((__int64*)&v55_.v55, (const char**)&v54, &v53);
    v32 = v55_.v57;
    v33 = v34;
    v55_.v56 = (const char*)v34;
  }
  v54 = game_util_Format_alt1("L_JobList/L_JobIcon_Rank1_Attr%d_00", 1);
  v53 = 0;
  if (v33 >= v32) {
    v35 = GameHr_16bc660((__int64*)&v55_.v55, (const char**)&v54, &v53);
  }
  else {
    game_facility_anonymous_16bc820(v33, (const char**)&v54, &v53);
    v35 = v33 + 32;
  }
  v55_.v56 = (const char*)v35;
  v54 = game_util_Format_alt1("L_JobList/L_JobIcon_Rank1_Attr%d_00", 2);
  v53 = 0;
  if (v35 >= v55_.v57) {
    v36 = GameHr_16bc660((__int64*)&v55_.v55, (const char**)&v54, &v53);
  }
  else {
    game_facility_anonymous_16bc820(v35, (const char**)&v54, &v53);
    v36 = v35 + 32;
  }
  v55_.v56 = (const char*)v36;
  v54 = game_util_Format_alt1("L_JobList/L_JobIcon_Rank1_Attr%d_00", 3);
  v53 = 0;
  if (v36 >= v55_.v57) {
    v37 = GameHr_16bc660((__int64*)&v55_.v55, (const char**)&v54, &v53);
  }
  else {
    game_facility_anonymous_16bc820(v36, (const char**)&v54, &v53);
    v37 = v36 + 32;
  }
  v55_.v56 = (const char*)v37;
  v54 = game_util_Format_alt1("L_JobList/L_JobIcon_Rank1_Attr%d_00", 4);
  v53 = 0;
  if (v37 >= v55_.v57) {
    v38 = GameHr_16bc660((__int64*)&v55_.v55, (const char**)&v54, &v53);
  }
  else {
    game_facility_anonymous_16bc820(v37, (const char**)&v54, &v53);
    v38 = v37 + 32;
  }
  v55_.v56 = (const char*)v38;
  game_159f000(v1, (__int64*)&v58_.v58, (__int64*)&v55_.v55, 1);
  game_159f000(v1, (__int64*)&v55_.v55, (__int64*)&v58_.v58, 1);
  if (GameData_21f1e08 != 0) {
    GameRoutine_18ae960_alt1((_QWORD*)GameData_21f1e08, 0);
  }
  v39 = v55_.v55;
  if (v55_.v55 != nullptr) {
    v40 = v55_.v56;
    if (v55_.v55 == v55_.v56) {
      goto LABEL_90;
    }
    v41 = v55_.v56;
    do {
      v42 = *(v41 - 32);
      v41 -= 32;
      if ((v42 & 1) != 0) {
        v43 = *((_QWORD*)v40 - 2);
        if (v43 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) != 0) {
            v44 = 128;
          }
          else {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v30 + v44, v43);
        }
      }
      v40 = v41;
    } while (v41 != v39);
    v55_.v56 = v39;
    v39 = v55_.v55;
    if (v55_.v55 != nullptr) {
    LABEL_90:
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v30 + v45, (__int64)v39);
    }
  }
  v46 = (__int64)v58_.v58;
  if (v58_.v58 != nullptr) {
    v47 = (__int64)v58_.v59;
    if (v58_.v58 == v58_.v59) {
      goto LABEL_104;
    }
    v48 = (__int64)v58_.v59;
    do {
      v49 = *(_BYTE*)(v48 - 32);
      v48 -= 32;
      if ((v49 & 1) != 0) {
        v50 = *(_QWORD*)(v47 - 16);
        if (v50 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) != 0) {
            v51 = 128;
          }
          else {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v30 + v51, v50);
        }
      }
      v47 = v48;
    } while (v48 != v46);
    v58_.v59 = (__int64*)v46;
    v46 = (__int64)v58_.v58;
    if (v58_.v58 != nullptr) {
    LABEL_104:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v30 + v52, v46);
    }
  }
}

__int64

game_facility_anonymous_ProcClassRankMenu_ChangeUnit_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2)
{
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 560LL))(
      *a2, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1064LL));
  return 0;
}

#pragma GCC visibility pop
