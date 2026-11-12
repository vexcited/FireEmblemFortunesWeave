#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_70e760(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1adfa87;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ProcMainQuestPart3Seq_Unknown18(__int64 a1);
_QWORD* GameRoutine_658c00(_QWORD* result);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_208b2f0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_anonymous_ProcMainQuestSeq_vtable[])();
extern __int64 (*game_menu_anonymous_ProcNextSeq_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcMainQuestPart3Seq_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcMainQuestPart3Seq_DeletingDestructor");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcMainQuestPart3Seq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memmove(__int64, __int64, unsigned __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN GameData_1ac4744;
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
__attribute__((swiftcall)) void ProcMainQuestPart3Seq_Unknown19(PSEUDO_X8 x8_,
                                                                __int64 a1);

void ProcMainQuestPart3Seq_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_menu_anonymous_ProcMainQuestSeq_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 256) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 272);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  *(_QWORD*)a1 = &game_menu_anonymous_ProcNextSeq_vtable;
  if ((*(_BYTE*)(a1 + 208) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 224);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_208b2f0;
  if (v7 == (_QWORD*)(a1 + 160)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v9, a1);
}

__int64 ProcMainQuestPart3Seq_Unknown18(__int64 a1)
{
  __int64 result;
  __int16* v3;
  __int64 v4;
  int* v5;
  int v6;
  _QWORD v7[2];

  v7[1] = &GameData_1adfa87;
  result = game_HashString(&GameData_1adfa87);
  v7[0] = result;
  if (game_GameModeData_instance_ != 0 &&
          (result = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v7)) != 0 &&
          *(_DWORD*)(result + 32) != 0 ||
      *(_BYTE*)(a1 + 248) == 1) {
    *(_DWORD*)(a1 + 152) = 2;
    return result;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
  }
  else {
    v3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v3[1] * *v3 * v3[2] == 0) {
    v5 = (int*)(a1 + 152);
  LABEL_16:
    v6 = 2;
    goto LABEL_17;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_70e760(v4, v3);
  v5 = (int*)(a1 + 152);
  if ((int)result < 1) {
    goto LABEL_16;
  }
  v6 = 4;

LABEL_17:
  *v5 = v6;
  return result;
}

__attribute__((swiftcall)) void ProcMainQuestPart3Seq_Unknown19(PSEUDO_X8 x8_,
                                                                __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15[3];
  struct {
    __int64 (**v16)();
    void* v17;
    unsigned __int64 v18;
    unsigned __int64 v19;
    int v20;
    int v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v16_;

  strcpy((char*)v15, "&MID_NextSelect_Main");
  v4 = (char*)v15 + 1;
  if ((game_GameModeData_instance_ != 0 &&
           *(int*)(game_GameModeData_instance_ + 64) > 5 ||
       (v16_.v17 = &GameData_1ac4744,
        v16_.v16 = (__int64 (**)(void))game_HashString_alt1(
            (__int64)&GameData_1ac4744),
        game_GameModeData_instance_ != 0) &&
           (v5 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v16_.v16)) != 0 &&
           *(_DWORD*)(v5 + 32) != 0 && (*(_BYTE*)(a1 + 248) & 1) != 0 ||
       (GameRoutine_60a020((__int64)v15, "MID_NextSelect_Main_HellGatePeriod"),
        (v15[0] & 1) == 0) ||
       (v4 = (const char*)v15[2], v15[2] != 0)) &&
      *v4 != 0) {
    v16_.v22 = -1;
    v16_.v23 = -1;
    v16_.v24 = -1;
    v16_.v25 = -1;
    v6 = *msg_MessageManager_instance__ptr[0];
    v16_.v26 = -1;
    v16_.v27 = -1;
    v16_.v28 = -1;
    v16_.v29 = -1;
    v16_.v30 = -1;
    v16_.v31 = -1;
    v16_.v32 = -1;
    v16_.v33 = -1;
    v16_.v16 = msg_TagSelector_vtable;
    v16_.v17 = (void*)0xFFFF0001FFFF0000LL;
    v16_.v18 = 0xFFFF0004FFFF0002LL;
    v16_.v19 = 0xFFFF0006FFFF0005LL;
    v16_.v34 = 8;
    v16_.v20 = -65529;
    v16_.v21 = -65528;
    v7 = GameRoutine_a4dbe0(v6, v4, 0);
  }
  else {
    v7 = msg_MessageManager_empty_text_;
  }
  v8 = strlen(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    a2[1] = v9;
    a2[2] = v12;
    *a2 = v11 | 1;
    v10 = v12;
  }
  else {
    *(_BYTE*)a2 = 2 * v8;
    v10 = (__int64)a2 + 1;
    if (v8 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v10, (__int64)v7, v9);
LABEL_21:
  v13 = v15[0];
  *(_BYTE*)(v10 + v9) = 0;
  if ((v13 & 1) != 0 && v15[2] != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v15[2]);
  }
}

#pragma GCC visibility pop
