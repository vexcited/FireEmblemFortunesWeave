#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_8229c0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_2026810;
extern __int64 GameData_22416c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212d728[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_2130e70;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
void GmapSpotMenu_Unknown95();
__int64 GmapSpotMenu_Unknown96(_QWORD* a1);
__int64 GmapSpotMenu_Unknown133(__int64 a1);
__int64 GmapSpotMenu_Unknown143(__int64 a1, __int64* a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_TraderMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64 game_gmap_GmapSpotMenu_CreateBind_lambda0_Invoke(__int64 result,
                                                         __int64* a2);
__int64 game_gmap_GmapSpotMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                         __int64** a2,
                                                         __int64* a3);

void GmapSpotMenu_Unknown95()
{
  int v0;

  v0 = *(unsigned __int8*)(GameData_22416c0 + 59);
  *(_BYTE*)(GameData_22416c0 + 59) = 0;
  if (v0 != 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5836LL) = 1;
  }
}

__int64 GmapSpotMenu_Unknown96(_QWORD* a1)
{
  char v2;
  __int64* v3;
  __int64 v4;
  __int64 result;

  v2 = *(_BYTE*)(*GameData_2130e70 + 59);
  *(_BYTE*)(*GameData_2130e70 + 59) = 1;
  v3 = GameData_212d728[0];
  if ((v2 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5836LL) = 1;
  }
  (*(void (**)(_QWORD*))(*a1 + 680LL))(a1);
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v4 = *(_QWORD*)(*v3 + 8);
  GameRoutine_155e830(*(_QWORD*)(v4 + 16), 1);
  result = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    result = GameRoutine_17b8e80(result, 1);
  }
  *(_DWORD*)(v4 + 5856) |= 0x10000u;
  *(_DWORD*)(*(_QWORD*)(*v3 + 8) + 5856LL) |= 0x40u;
  return result;
}

__int64 GmapSpotMenu_Unknown133(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned int v4;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_2026810, 0);
    if (result != 0) {
      v2 = result;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 576LL))(result) & 1) !=
          0) {
        v3 = *(_QWORD*)(*GameData_212d728[0] + 8);
        GameRoutine_155e830(*(_QWORD*)(v3 + 16), 0);
        if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
          GameRoutine_17b8f40(
              *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
        }
        result = game_gameui_Footer_instance_;
        v4 = *(_DWORD*)(v3 + 5856) & 0xFFFEFFFF;
        *(_DWORD*)(v3 + 5856) = v4;
        if (result != 0) {
          result = GameRoutine_1567000(result, 0);
          v4 = *(_DWORD*)(v3 + 5856);
        }
        *(_DWORD*)(v3 + 5856) = v4 & 0xFFFDFFFF;
      }
      else {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 584LL))(v2);
        if ((result & 1) != 0) {
          *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) &= ~0x40u;
        }
      }
    }
  }
  return result;
}

__int64 GmapSpotMenu_Unknown143(__int64 a1, __int64* a2)
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
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  result = GameRoutine_8229c0();
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
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
        v14 = result;
        v15 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
        LODWORD(result) = v14;
      }
      else {
        v15 = 0;
      }
      v16 = v15 + v9;
      *(_QWORD*)v16 = &GameData_1a9f09e;
      *(_QWORD*)(v16 + 8) = &GameData_1a9f09e;
      v17 = v15 + 40 * v13;
      v7 = v15 + v9 + 40;
      *(_QWORD*)(v16 + 32) = 0;
      *(_BYTE*)(v16 + 16) = 1;
      *(_DWORD*)(v16 + 20) = 2;
      *(_DWORD*)(v16 + 24) = result;
      *(_BYTE*)(v16 + 28) = 4;
      result = memcpy(v15, v8, v9);
      *a2 = v15;
      a2[1] = v7;
      a2[2] = v17;
      if (v8 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18);
      }
    }
    else {
      v7 = v5 + 40;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = &GameData_1a9f09e;
      *(_QWORD*)(v5 + 8) = &GameData_1a9f09e;
      *(_BYTE*)(v5 + 16) = 1;
      *(_DWORD*)(v5 + 20) = 2;
      *(_DWORD*)(v5 + 24) = result;
      *(_BYTE*)(v5 + 28) = 4;
    }
    a2[1] = v7;
  }
  return result;
}

__int64 game_gmap_GmapSpotMenu_CreateBind_lambda0_Invoke(__int64 result,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && *(_BYTE*)(v3 + 32) == 2) {
    v4 = **(_QWORD**)(result + 8);
    v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 96, 16, 0);
    v6 = *(_QWORD*)(v2 + 96);
    *(_WORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_WORD*)(v5 + 84) = 0;
    *(_WORD*)(v5 + 80) = 257;
    *(_BYTE*)(v5 + 82) = 1;
    *(_QWORD*)v5 = game_gmap_anonymous_TraderMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 88) = v6;
    return BasicMenuCursor_16e0c00(v4, v5);
  }
  return result;
}

__int64 game_gmap_GmapSpotMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                         __int64** a2,
                                                         __int64* a3)
{
  __int64* v3;
  __int64 v4;
  int v5;
  char v6;
  __int64 v7;
  int v9;

  v3 = *a2;
  v4 = *a3;
  v5 = (*(__int64 (**)(__int64*))(**a2 + 464))(*a2) & 1;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4);
  v7 = *v3;
  if (v5 != (v6 & 1)) {
    return (*(__int64 (**)(__int64*))(v7 + 464))(v3);
  }
  v9 = (*(__int64 (**)(__int64*))(v7 + 568))(v3);
  return v9 < (*(int (**)(__int64))(*(_QWORD*)v4 + 568LL))(v4);
}

#pragma GCC visibility pop
