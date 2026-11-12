#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1847710(__int64, int, __int64);
__int64 GameSubquestData_125a000(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20e5c58[])();
extern __int64 (*game_menu_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_QuestBoardMenuItem_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
void ProcQuestBoard_18485e0();
__int64 ProcQuestBoard_Unknown128(__int64 a1);
bool ProcQuestBoard_Unknown144(__int64 a1);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcQuestBoard_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");

void ProcQuestBoard_18485e0()
{
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
}

__int64 ProcQuestBoard_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_DWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_DWORD*)(v3 + 40) = -1;
  *(_QWORD*)v3 = game_menu_anonymous_EmptyMenuItem_vtable;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v13 = nullptr;
  v14 = 0;
  v12 = nullptr;
  result = GameSubquestData_125a000(*(_QWORD*)GameData_212c7b0[0], &v12, 1);
  v6 = v12;
  v7 = v13;
  if (v12 != v13) {
    do {
      v8 = *v6++;
      v9 = fw_memory_HeapManager_Allocate(*v2, 176, 16, 0);
      GameRoutine_1847710(v9, 1, v8);
      *(_QWORD*)v9 = game_menu_anonymous_QuestBoardMenuItem_vtable;
      *(_BYTE*)(v9 + 160) = 0;
      *(_QWORD*)(v9 + 144) = GameData_20e5c58;
      result = GameRoutine_16e0c00(a1, v9);
    } while (v6 != v7);
    v6 = v12;
  }
  if (v6 != nullptr) {
    v10 = *v2;
    v13 = v6;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(v10 + v11, v6);
  }
  return result;
}

bool ProcQuestBoard_Unknown144(__int64 a1)
{
  __int64 v1;
  _BOOL8 result;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 336);
  result = false;
  if (v1 != 0 &&
      *(__int64 (***)())v1 == game_menu_anonymous_QuestBoardMenuItem_vtable) {
    v3 = **(_QWORD**)(v1 + 152);
    if (*(_WORD*)(v3 + 128) != 0 &&
        game_gmap_SpotMgr_FindSpot(*(_QWORD*)(*(_QWORD*)(v3 + 136) + 8LL)) !=
            0) {
      return true;
    }
  }
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcQuestBoard_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _BYTE* v3;
  char* v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = (_BYTE*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 1136LL))(
      *(_QWORD*)(a1 + 8));
  if (v3 != nullptr && *v3 != 0) {
    v4 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v3, 0);
  }
  else {
    v4 = msg_MessageManager_empty_text_;
  }
  result = strlen_alt1(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = (__int64)a2 + 1;
    if (result == 0) {
      goto LABEL_14;
    }
  }
  result = memmove_alt1(v7, (__int64)v4, v6);
LABEL_14:
  *(_BYTE*)(v7 + v6) = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
