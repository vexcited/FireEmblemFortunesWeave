#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BelongingMenu_16ca580(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_157e0f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ca2e0(void);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(void);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21f1668;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
extern __int64* GameData_21319f8[8];
__int64 GmapTalkMenu_Unknown84(__int64 a1);
__int64 GmapTalkMenu_Unknown96(_QWORD* a1);
__int64 GmapTalkMenu_Unknown85(__int64 a1);
__int64 GmapTalkMenu_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "GmapTalkMenu_DeletingDestructor");
__attribute__((swiftcall)) void game_gmap_Troop_GetAmong(PSEUDO_X8,
                                                         _QWORD* result);
__int64 Impl_13262e0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
extern __int64 (*game_gmap_anonymous_TalkEventMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_TalkOtherClanMenuItem_vtable[])();
extern __int64* GameData_212c790;
extern __int64 game_GameModeData_instance_;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapTalkMenu_Unknown128(_QWORD* a1);
__int64 LayoutAccessor_155e140(__int64*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_1563f90_alt1(__int64, __int64) __asm__("GameRoutine_1563f90");
void GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void GmapTalkMenu_DeletingDestructor(_QWORD* a1);

void GmapTalkMenu_Unknown128(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD** v4;
  _QWORD** v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(_QWORD);
  __int64 v25;
  _QWORD* v26;
  struct {
    __int64* v27;
    __int64* v28;
  } v27_;

  v2 = a1[148];
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_QWORD***)(v3 + 8);
  v5 = *(_QWORD***)(v3 + 16);
  while (v4 != v5) {
    v6 = *v4;
    if (**v4 == v2 && v6[12] == 0 && v6[69] != 0 &&
        (v6[13] != 0 || *((__int16*)v6 + 321) * *((__int16*)v6 + 320) *
                                *((__int16*)v6 + 322) !=
                            0)) {
      game_gmap_Troop_GetAmong((void*)(&v27_.v27), v6);
      v7 = v27_.v27;
      v8 = v27_.v28;
      if (v27_.v27 != v27_.v28) {
        v9 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          v10 = *v7++;
          v11 = fw_memory_HeapManager_Allocate(*v9, 96, 16, 0);
          *(_QWORD*)(v11 + 16) = 0;
          *(_QWORD*)(v11 + 24) = 0;
          *(_QWORD*)(v11 + 32) = 0;
          *(_QWORD*)(v11 + 40) = 0;
          *(_BYTE*)(v11 + 17) = 0;
          *(_QWORD*)(v11 + 48) = 0;
          *(_QWORD*)(v11 + 56) = 0;
          *(_QWORD*)(v11 + 64) = 0;
          *(_QWORD*)(v11 + 72) = 0;
          *(_WORD*)(v11 + 80) = 257;
          *(_BYTE*)(v11 + 82) = 1;
          *(_QWORD*)v11 = game_gmap_anonymous_TalkOtherClanMenuItem_vtable;
          *(_QWORD*)(v11 + 8) = 0;
          *(_QWORD*)(v11 + 88) = v10;
          BasicMenuCursor_16e0c00(a1, v11);
        } while (v7 != v8);
        v7 = v27_.v27;
      }
      if (v7 != nullptr) {
        v27_.v28 = v7;
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v7);
      }
      v2 = a1[148];
      break;
    }
    ++v4;
  }
  v13 = Impl_13262e0(v2);
  if (v13 != 0) {
    v14 = *(__int64***)(v13 + 24);
    v15 = *v14;
    v16 = v14[1];
    if (*v14 != v16) {
      do {
        v18 = *v15;
        v19 = *(__int64**)(*v15 + 24);
        v20 = *v19;
        v21 = v19[1];
        if (v21 == *v19) {
        LABEL_21:
          v17 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
          *(_QWORD*)(v17 + 16) = 0;
          *(_QWORD*)(v17 + 24) = 0;
          *(_QWORD*)(v17 + 32) = 0;
          *(_QWORD*)(v17 + 40) = 0;
          *(_BYTE*)(v17 + 17) = 0;
          *(_QWORD*)(v17 + 48) = 0;
          *(_QWORD*)(v17 + 56) = 0;
          *(_QWORD*)(v17 + 64) = 0;
          *(_QWORD*)(v17 + 72) = 0;
          *(_BYTE*)(v17 + 82) = 1;
          *(_QWORD*)v17 = game_gmap_anonymous_TalkEventMenuItem_vtable;
          *(_QWORD*)(v17 + 8) = 0;
          *(_QWORD*)(v17 + 88) = v18;
          *(_WORD*)(v17 + 80) = 257;
          BasicMenuCursor_16e0c00(a1, v17);
        }
        else {
          while (1) {
            if (*(_QWORD*)v20 != 0) {
              v22 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v23 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v20);
                if (v23 != 0) {
                  v24 = *(__int64 (**)(_QWORD))(v23 + 72);
                  v25 = *(_QWORD*)(v23 + 80);
                  v26 = (_QWORD*)(v23 + (v25 >> 1));
                  if ((v25 & 1) != 0) {
                    v24 = *(__int64 (**)(_QWORD))((char*)v24 + *v26);
                  }
                  LOBYTE(v13) = v24(v26);
                }
                else {
                  LOBYTE(v13) = 1;
                }
              }
              if (*(_BYTE*)(v20 + 16) != ((v22 == 0) | v13 & 1)) {
                break;
              }
            }
            v20 += 24;
            if (v20 == v21) {
              goto LABEL_21;
            }
          }
        }
        ++v15;
      } while (v15 != v16);
    }
  }
}

__int64 GmapTalkMenu_Unknown84(__int64 a1)
{
  __int64 v2;

  GameRoutine_16ca2e0();
  GameRoutine_1562cf0(a1 + 952, "Menu_09_Header");
  v2 = GameRoutine_155fbe0(a1 + 952, "L_MenuItem_InfoHeader");
  GameRoutine_157e0f0(v2, "MID_Menu_Detail", 0);
  BelongingMenu_16ca580(a1);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_InfoDetail", 0);
}

__int64 GmapTalkMenu_Unknown96(_QWORD* a1)
{
  __int64 v2;

  game_menu_BasicMenu_Unknown16defa0();
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
  GameRoutine_155e830(*(_QWORD*)(v2 + 16), 1);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v2 + 5856) |= 0x10000u;
  return GameRoutine_155e830(a1 + 106, 1);
}

__int64 GmapTalkMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned int*)(a1 + 660);
    v4 = *(_QWORD*)(a1 + 672);
    if ((int)v3 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v4) >> 2)) {
      v3 = *(unsigned int*)(v4 + 4LL * (int)v3);
    }
    v5 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 1136LL))(a1, v3);
    result = GameRoutine_1562060(a1 + 952, "L_MenuItem_InfoHeader/T_Title", v5);
  }
  *(_DWORD*)(*(_QWORD*)(GameData_21f1668 + 8) + 5856LL) &= ~0x40u;
  return result;
}

void GmapTalkMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  LayoutAccessor_155e140(a1 + 133);
  v3 = a1[145];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  GameRoutine_1564060_alt1(a1 + 139);
  GameRoutine_1563f90_alt1((__int64)(a1 + 136), a1[137]);
  v4 = a1[134];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

#pragma GCC visibility pop
