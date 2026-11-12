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

__int64

game_facility_anonymous_ProcClassRankMenu_ChangeUnit_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2)
{
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 560LL))(
      *a2, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1064LL));
  return 0;
}

#pragma GCC visibility pop
