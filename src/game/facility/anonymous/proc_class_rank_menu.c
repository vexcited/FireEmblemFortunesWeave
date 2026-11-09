#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
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
__int64 ProcClassRankMenu_Unknown96(_QWORD* a1);
__int64 ProcClassRankMenu_Unknown103(__int64 a1);
__int64 ProcClassRankMenu_Unknown105(__int64 a1);
const char* ProcClassRankMenu_Unknown130(__int64 a1);
__int64 ProcClassRankMenu_Unknown142(__int64 a1, __int64* a2);

__int64 ProcClassRankMenu_Unknown96(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;

  game_menu_BasicMenu_Unknown96();
  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((unsigned int)(result - 8) <= 0xFFFFFFF9) {
    result = (*(__int64 (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  if (GameData_21f3ff8 != 0) {
    v3 = *(__int64**)(GameData_21f3ff8 + 48);
    if (*(__int64**)(GameData_21f3ff8 + 56) != v3) {
      v4 = *v3;
      if (*v3 != 0) {
        if (a1[133] != v4) {
          GameRoutine_16bb880(a1, v4);
          game_menu_BasicMenu_Unknown16de4d0(a1);
        }
        GameRoutine_1560070(&v11, a1 + 106, "L_UnitInfo00");
        if (v12 == 0) {
          goto LABEL_21;
        }
        v5 = std___1___shared_weak_count_lock(v12);
        if (v5 != 0) {
          v6 = v11;
        }
        else {
          v6 = 0;
        }
        if (v12 != 0) {
          std___1___shared_weak_count___release_weak(v12);
        }
        if (v6 != 0) {
          v10[0] = v6;
          v10[1] = v5;
          if (v5 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                      memory_order_relaxed);
            GameRoutine_1575e70(v10, v4);
            std___1___shared_weak_count___release_weak(v5);
            goto LABEL_18;
          }
          GameRoutine_1575e70(v10, v4);
        }
        else if (v5 != 0) {
        LABEL_18:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
          }
        }
      LABEL_21:
        result = GameRoutine_16bb9c0(a1);
      }
    }
  }
  v7 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v8 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    GameRoutine_18aee60(v8, a1 + 106);
    GameRoutine_18ae960(v7, 1);
    result = *(_QWORD*)(v7 + 240);
    *(_QWORD*)(v7 + 232) = 0;
    *(_QWORD*)(v7 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
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

#pragma GCC visibility pop
