#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120dd60(_QWORD);
__int64 GameRoutine_17b9400(_QWORD, _QWORD);
__int64 GameRoutine_197f100(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_70e760(_QWORD, _QWORD);
__int64 GameRoutine_869d10(_QWORD);
__int64 GameRoutine_8ab560(_QWORD);
__int64 MapSortieMenu_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcNextSeq_16b0ac0_alt1(_QWORD, _QWORD) __asm__("ProcNextSeq_16b0ac0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_gmap_SpotMgr_OnProgressCycle(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1aaa318;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ac4744;
extern __int64 (*GameData_208ac20[])();
extern __int64 (*GameData_208aca0[])();
extern __int64 (*GameData_208ad10[])();
extern __int64 (*GameData_208ae10[])();
extern __int64 (*GameData_208aea0[])();
extern __int64 (*GameData_208af20[])();
extern __int64 (*GameData_208afa0[])();
extern __int64 (*GameData_208b020[])();
extern __int64 (*GameData_208b0a0[])();
extern __int64 (*game_menu_anonymous_ProcMainQuestSeq_vtable[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_2261508;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProgressDisplayView_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d2b8;
extern char GameData_226b868;
extern int game_script_hub_ui_g_talk_result;
void __attribute__((noreturn)) String_60a1d0(void);
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_16b0100(void* a1);
void ProcNextSeq_16b0340();
__int64 ProcNextSeq_16b0680(__int64 result, __int64 a2);
__int64 ProcNextSeq_16b0800(__int64 a1, __int64 a2, __int16* a3);
__int64 game_menu_anonymous_ProcNextSeq_CheckNext_closure_Invoke(__int64 a1,
                                                                 __int64 a2);
__int64 ProcNextSeq_16b0ac0(__int64 a1);
__int64 game_menu_anonymous_ProcNextSeq_CheckNext_closure0_Invoke();
__int64
game_menu_anonymous_ProcNextSeq_CheckNextPart2_closure_Invoke(__int64 a1);
__int64 game_menu_anonymous_ProcNextSeq_CheckNextPart2_closure0_Invoke();
__int64
game_menu_anonymous_ProcNextSeq_CheckNextFree_closure_Invoke(__int64 a1);
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure_Invoke(__int64 a1);
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_16b1230(__int64 a1,
                                                          __int64* a2);
__int64
game_menu_anonymous_ProcNextSeq_TryCreateSkipReminderDialog_closure_Invoke(
    __int64 a1);
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure0_Invoke(__int64 a1);
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure1_Invoke();
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure2_Invoke();
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure3_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure4_Invoke();
_QWORD* GameRoutine_658c00(_QWORD* result);
_QWORD* RouteMenuItem_166e450(__int64, char**, __int64, __int64, __int64);
__int64 (***GameRoutine_1933ba0(__int64, signed int, __int64, __int64))();
__int64 GameRoutine_145c3e0();
__int64 GameRoutine_946c20(int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_212dcd8;
extern _UNKNOWN* GameData_21319e0;
extern __int64 (*GameData_208ab20[])();
extern __int64 (*GameData_208aba0[])();
extern __int64 (*GameData_208ad80[])();
extern __int64 (*GameData_208b2f0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_anonymous_ProcNextSeq_vtable)();
extern __int64* GameData_212dcc8[2];
extern __int64* GameData_212dcd0;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131b60;
extern __int64 GameData_2132370[2];
extern __int64 game_ProcGameSkipView_instance_;
extern char* GameData_2131b68[4];
extern int* GameData_2131b58[2];
void GameRoutine_8679c0();
__int64 game_menu_anonymous_ProcNextSeq_CheckNextFree(__int64 a1);
__int64 ProcNextSeq_16b0370(__int64 a1);
__int64
game_menu_anonymous_ProcNextSeq_CheckFree_closure0_Invoke_16b14d0(__int64 a1,
                                                                  __int64* a2);
__int64
game_menu_anonymous_ProcNextSeq_CheckFree_closure_Invoke_16b19c0(__int64 a1,
                                                                 __int64* a2);
_QWORD* ProcNextSeq_Destructor(__int64 a1);
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
void GameHr_8679c0();

__int64 game_menu_anonymous_ProcNextSeq_CheckNextFree(__int64 a1)
{
  unsigned __int64 v2;
  char* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[2];
    char* v14;
  } v13_;
  char* v15;

  v11_.v11[0] = GameData_208ab20;
  v11_.v11[1] = a1;
  v9_.v10 = v9_.v9;
  v11_.v12 = v11_.v11;
  v9_.v9[0] = GameData_208aba0;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 152LL))((void*)(v13_.v13), (__int64)a1);
  v2 = v13_.v13[1];
  if ((v13_.v13[0] & 1) != 0) {
    v3 = v13_.v14;
  }
  else {
    v2 = (unsigned __int64)LOBYTE(v13_.v13[0]) >> 1;
    v3 = (char*)v13_.v13 + 1;
  }
  if (v2 != 0) {
    v4 = v3;
  }
  else {
    v4 = nullptr;
  }
  v15 = v4;
  RouteMenuItem_166e450(a1, &v15, (__int64)v11_.v11, (__int64)v9_.v9,
                        (__int64)v9_.v9);
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != nullptr) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_17;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
LABEL_17:
  result = (__int64)v11_.v12;
  if (v11_.v12 == v11_.v11) {
    v8 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v11_.v12 + v8))((__int64)v11_.v12);
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_16b0100(void* a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  __int64 (**v7)();
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 (**v16)();
  void* v17;
  __int64 (***v18)();
  __int64 v19;
  int v20;

  v19 = 0;
  v20 = 0;
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  GameRoutine_17b9400(v2, &v19);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_14;
  }
  v3 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v3 != 3) {
    if (v3 != 1) {
      goto LABEL_14;
    }
    v17 = &GameData_1abbb2b;
    v16 = (__int64 (**)())game_HashString(&GameData_1abbb2b);
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v16);
      if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
        v17 = &GameData_1abbb2b;
        v16 = (__int64 (**)())game_HashString(&GameData_1abbb2b);
        if (game_GameModeData_instance_ != 0) {
          v5 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), &v16);
          if (v5 != 0 && *(_DWORD*)(v5 + 32) != 0) {
            v13 = nullptr;
            v6 = a1;
            v16 = GameData_208af20;
            v17 = a1;
            v15 = v14;
            v18 = &v16;
            v7 = GameData_208afa0;
          LABEL_15:
            v14[0] = v7;
            goto LABEL_17;
          }
        }
      LABEL_14:
        v13 = nullptr;
        v6 = a1;
        v16 = GameData_208b020;
        v17 = a1;
        v15 = v14;
        v18 = &v16;
        v7 = GameData_208b0a0;
        goto LABEL_15;
      }
    }
  }
  v6 = a1;
  v16 = GameData_208ac20;
  v17 = a1;
  v14[0] = GameData_208aca0;
  v14[1] = a1;
  v13 = v12;
  v18 = &v16;
  v15 = v14;
  v12[0] = GameData_208aea0;
LABEL_17:
  (*(void (**)(void*, __int64 (***)(), _QWORD*, _QWORD*))(
      *(_QWORD*)a1 + 160LL))(v6, &v16, v14, v12);
  if (v13 == v12) {
    v8 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_22;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*))(*v13 + v8))(v13);
LABEL_22:
  if (v15 == v14) {
    v9 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_27;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*))(*v15 + v9))(v15);
LABEL_27:
  result = (__int64)v18;
  if (v18 == &v16) {
    v11 = 4;
  }
  else {
    if (v18 == nullptr) {
      return result;
    }
    v11 = 5;
  }
  return ((__int64 (*)(__int64 (***)()))(*v18)[v11])(v18);
}

void ProcNextSeq_16b0340()
{
  if (game_hub_ProgressEventView_instance_ != 0 &&
      game_hub_ProgressDisplayView_instance_ != 0) {
    *(_BYTE*)(game_hub_ProgressDisplayView_instance_ + 153) = 1;
  }
}

__int64 ProcNextSeq_16b0370(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  float v10;
  int* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _BYTE** v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  void* v23;
  __int64 result;
  _BYTE* v25;
  char v26;

  v2 = GameData_212dcd0;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*GameData_212dcd0 != 0) {
    ++*GameData_212dcd8;
  }
  else {
    v4 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v5 = v4;
    if (*v2 == 0) {
      *v2 = (__int64)v4;
      *GameData_212dcd8 = 1;
    }
    v6 = GameData_212dcc8[0];
    v4[6] = 0;
    v4[7] = 0;
    v4[8] = 0;
    v4[9] = 0;
    v4[10] = 0;
    v4[11] = 0;
    v4[2] = -1;
    v4[3] = -1;
    v4[4] = -1;
    v4[5] = -1;
    *v4 = (__int64)(v6 + 2);
    v4[1] = -1;
    GameRoutine_145c3e0();
    v7 = *v5;
    *v2 = (__int64)v5;
    (*(void (**)(__int64*))(v7 + 16))(v5);
  }
  GameHr_8679c0();
  v8 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v9 & 0x10) == 0) {
      v10 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v9 & 0xFFFFFFE2 | 1;
      if (v10 > 0x0.0p+0f) {
        *(_DWORD*)(v8 + 224) = 0;
      }
    }
  }
  *GameData_2131b68[0] = 0;
  v11 = GameData_2131b58[0];
  *GameData_2131b58[0] = 0;
  v12 = GameData_2131b60;
  v13 = *v3;
  *GameData_2131b60 = 0;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = 0;
  v14 = fw_memory_HeapManager_Allocate_alt1(v13, 360, 16, 0);
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 152) = 0;
  *(_QWORD*)(v14 + 160) = 0;
  *(_QWORD*)(v14 + 168) = 0;
  v15 = v14;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_QWORD*)(v14 + 256) = 0;
  *(_QWORD*)(v14 + 264) = 0;
  *(_QWORD*)(v14 + 272) = 0;
  *(_QWORD*)(v14 + 280) = 0;
  *(_QWORD*)(v14 + 288) = 0;
  *(_QWORD*)(v14 + 296) = 0;
  *(_QWORD*)(v14 + 304) = 0;
  *(_QWORD*)(v14 + 312) = 0;
  *(_QWORD*)(v14 + 320) = 0;
  *(_QWORD*)(v14 + 328) = 0;
  *(_QWORD*)(v14 + 336) = 0;
  *(_QWORD*)(v14 + 344) = 0;
  *(_QWORD*)(v14 + 352) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  v16 = (_QWORD*)(v14 + 232);
  v17 = GameData_212c608[0] + 16;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_QWORD*)(v14 + 128) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  v18 = (_BYTE**)(v14 + 32);
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 24) = "NULL";
  *(_QWORD*)(v14 + 138) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)v14 = v17;
  *(_QWORD*)(v14 + 8) = 0;
  game_ProcInst_Register_alt1(v14);
  *(_BYTE*)(v15 + 168) = 0;
  v19 = GameData_2130240[0];
  *(_BYTE*)(v15 + 172) = 0;
  *v16 = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_QWORD*)(v15 + 208) = 0;
  *(_QWORD*)(v15 + 216) = 0;
  *(_QWORD*)(v15 + 224) = v16;
  *(_QWORD*)(v15 + 240) = 0;
  *(_QWORD*)(v15 + 248) = 0;
  *(_QWORD*)(v15 + 256) = 0;
  *(_QWORD*)(v15 + 264) = 0;
  *(_QWORD*)(v15 + 272) = 0;
  *(_QWORD*)(v15 + 344) = 0;
  *(_QWORD*)(v15 + 352) = 0;
  *(_QWORD*)(v15 + 328) = 0;
  *(_QWORD*)(v15 + 336) = 0;
  *(_QWORD*)(v15 + 312) = 0;
  *(_QWORD*)(v15 + 320) = 0;
  *(_QWORD*)(v15 + 296) = 0;
  *(_QWORD*)(v15 + 304) = 0;
  *(_QWORD*)(v15 + 288) = 0;
  *(_QWORD*)(v15 + 152) = 0;
  *(_QWORD*)(v15 + 160) = v19 + 2;
  *(_DWORD*)(v15 + 280) = 1065353216;
  v20 = GameData_2132370[0];
  *(_QWORD*)v15 = GameData_2132370[0] + 16;
  v21 = v20 + 440;
  v22 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(v15 + 176) = v21;
  *(_QWORD*)(v15 + 184) = 0;
  if (v22 != 0) {
    *(_QWORD*)(v22 + 48) = v15;
    *(_QWORD*)(v15 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v15;
  *(_QWORD*)(v15 + 24) = "IndividualMenu";
  *(_QWORD*)(v15 + 32) = a1;
  *(_DWORD*)(v15 + 140) =
      (unsigned int)game_HashString32_alt1("IndividualMenu");
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 24;
  *(_QWORD*)(v15 + 80) = 1;
  v23 = GameData_21319e0;
  *(_QWORD*)(v15 + 8) = GameData_21319e0;
  *(_QWORD*)(v15 + 16) = v23;
  (*(void (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 136LL))(v15);
  if ((result & 1) != 0 && (*(_WORD*)(v15 + 136) & 0x100) == 0) {
    *(_WORD*)(v15 + 136) |= 0x100u;
  }
  v25 = *v18;
  v26 = v25[138];
  if (v26 == 0) {
    result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v25 + 64LL))(v25);
    v26 = v25[138];
  }
  v25[138] = v26 + 1;
  *(_WORD*)(v15 + 136) |= 2u;
  *v11 = *(_DWORD*)(a1 + 232);
  *v12 = *(_QWORD*)(a1 + 236);
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = *(_DWORD*)(a1 + 244);
  return result;
}

__int64 ProcNextSeq_16b0680(__int64 result, __int64 a2)
{
  __int64 v2;

  if (GameData_226b868 == 1) {
    v2 = result;
    ProcNextSeq_16b0ac0_alt1(result, a2);
    result = GameRoutine_197f100(v2, v2 + 236);
    game_script_hub_ui_g_talk_result = 2;
  }
  return result;
}

__int64 ProcNextSeq_16b0800(__int64 a1, __int64 a2, __int16* a3)
{
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;

  v6 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v6 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_WORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  GameData_2261508 = a1;
  *(_QWORD*)a1 = game_menu_anonymous_ProcMainQuestSeq_vtable;
  v7 = strlen(a2);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v10, 16, 0);
    *(_QWORD*)(a1 + 264) = v8;
    *(_QWORD*)(a1 + 272) = v9;
    *(_QWORD*)(a1 + 256) = v10 | 1;
    goto LABEL_9;
  }
  v9 = a1 + 257;
  *(_BYTE*)(a1 + 256) = 2 * v7;
  if (v7 != 0) {
  LABEL_9:
    v7 = memmove(v9, a2, v8);
  }
  *(_BYTE*)(v9 + v8) = 0;
  if (a3[1] * *a3 * a3[2] != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v11 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v11 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    result = GameRoutine_70e760(v11, a3);
  }
  else {
    result = GameRoutine_869d10(v7);
    if (game_gmap_GmapClock_instance_ != 0) {
      a3 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
    }
    else {
      a3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
  }
  *(_DWORD*)(a1 + 232) = result;
  v13 = *(_QWORD*)a3;
  *(_DWORD*)(a1 + 244) = *((_DWORD*)a3 + 2);
  *(_QWORD*)(a1 + 236) = v13;
  return result;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckNext_closure_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  ProcNextSeq_16b0ac0_alt1(*(_QWORD*)(a1 + 8), a2);
  game_script_hub_ui_g_talk_result = 1;
  return 2;
}

__int64 ProcNextSeq_16b0ac0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  void* v4;

  v1 = a1;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      (*(_DWORD*)(game_GameModeData_instance_ + 64) == 6 ||
       (*(_BYTE*)(a1 + 248) & 1) != 0) &&
          (v4 = &GameData_1ac4744, a1 = game_HashString(&GameData_1ac4744),
           v3 = a1, game_GameModeData_instance_ != 0) &&
          (a1 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v3)) != 0 &&
          *(_DWORD*)(a1 + 32) != 0) {
    v4 = &GameData_1aaa318;
    v3 = game_HashString(&GameData_1aaa318);
    if (game_GameModeData_instance_ == 0 ||
        (a1 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v3)) == 0 ||
        *(_DWORD*)(a1 + 32) == 0) {
      a1 = GameRoutine_8ab560(4);
    }
  }
  GameRoutine_120dd60(a1);
  return game_gmap_SpotMgr_OnProgressCycle(*(unsigned int*)(v1 + 232));
}

__int64 game_menu_anonymous_ProcNextSeq_CheckNext_closure0_Invoke()
{
  game_script_hub_ui_g_talk_result = 0;
  return 3;
}

__int64

game_menu_anonymous_ProcNextSeq_CheckNextPart2_closure_Invoke(__int64 a1)
{
  ProcNextSeq_16b0ac0(*(_QWORD*)(a1 + 8));
  game_script_hub_ui_g_talk_result = 1;
  return 2;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckNextPart2_closure0_Invoke()
{
  game_script_hub_ui_g_talk_result = 0;
  return 3;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckNextFree_closure_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 152) = 5;
  return 2;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 152) = 6;
  return 2;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_16b1230(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64 (*v3)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[4];
  _QWORD* v16;
  __int64 (*v17[4])();
  __int64 (**v18)();
  const char* v19;
  __int64 (*v20[4])();
  __int64 (**v21)();

  v2 = *a2;
  v3 = *(__int64 (**)())(a1 + 8);
  *(_BYTE*)(*(_QWORD*)(v2 + 8) + 1300LL) = 1;
  v4 = *(_QWORD*)(v2 + 8);
  v19 = "MID_NextSelect_Yes_Confirm";
  v16 = v15;
  v20[0] = (__int64 (*)())GameData_208ad10;
  v20[1] = v3;
  v21 = v20;
  v17[0] = (__int64 (*)())GameData_208ae10;
  v17[1] = (__int64 (*)())v2;
  v15[0] = GameData_208ae10;
  v15[1] = v2;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = v4;
  }
  v18 = v17;
  v7 = MapSortieMenu_871860(v5, &v19, v20, v17, v15);
  if (v16 == v15) {
    v8 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v16 + v8))(v16, v6);
LABEL_9:
  if (v18 == v17) {
    v9 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_14;
    }
    v9 = 40;
  }
  (*(void (**)(__int64 (**)(), __int64))((char*)*v18 + v9))(v18, v6);
LABEL_14:
  if (v21 == v20) {
    v10 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_19;
    }
    v10 = 40;
  }
  (*(void (**)(__int64 (**)(), __int64))((char*)*v21 + v10))(v21, v6);
LABEL_19:
  v18 = v17;
  v21 = v20;
  v17[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v17[1] = game_sound_PlayDecideLightSe_ptr[0];
  v20[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v20[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v20, v7 + 1152);
  if (v21 == v20) {
    v12 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_24;
    }
    v12 = 40;
  }
  (*(void (**)(__int64 (**)(), __int64))((char*)*v21 + v12))(v21, v11);
LABEL_24:
  if (v18 == v17) {
    v13 = 32;
    goto LABEL_28;
  }
  if (v18 != nullptr) {
    v13 = 40;
  LABEL_28:
    (*(void (**)(__int64 (**)(), __int64))((char*)*v18 + v13))(v18, v11);
  }
  return 9;
}

__int64

game_menu_anonymous_ProcNextSeq_CheckFree_closure0_Invoke_16b14d0(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  signed int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _BYTE v10[32];
    _BYTE* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = GameRoutine_946c20(*(_DWORD*)(v2 + 232));
  if (*(_DWORD*)(v2 + 232) == v4) {
    ProcNextSeq_16b0ac0(v2);
    game_script_hub_ui_g_talk_result = 1;
    return 6;
  }
  v6 = v4;
  v7 = *(_QWORD*)(v3 + 8);
  v10_.v11 = nullptr;
  v12_.v12[0] = GameData_208ad80;
  v12_.v12[1] = v2;
  v12_.v13 = v12_.v12;
  GameRoutine_1933ba0(v7, v6, (__int64)v12_.v12, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_8;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10_.v11 + v8))((__int64)v10_.v11);
LABEL_8:
  if (v12_.v13 == v12_.v12) {
    v9 = 32;
    goto LABEL_12;
  }
  if (v12_.v13 != nullptr) {
    v9 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v12_.v13 + v9))((__int64)v12_.v13);
  }
  return 9;
}

__int64

game_menu_anonymous_ProcNextSeq_TryCreateSkipReminderDialog_closure_Invoke(
    __int64 a1)
{
  ProcNextSeq_16b0ac0(*(_QWORD*)(a1 + 8));
  game_script_hub_ui_g_talk_result = 1;
  return 6;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(*(_QWORD*)(v1 + 8) + 1300LL) = 0;
  return 3;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure1_Invoke()
{
  game_script_hub_ui_g_talk_result = 0;
  return 3;
}

__int64

game_menu_anonymous_ProcNextSeq_CheckFree_closure_Invoke_16b19c0(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  signed int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _BYTE v10[32];
    _BYTE* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = GameRoutine_946c20(*(_DWORD*)(v2 + 232));
  if (*(_DWORD*)(v2 + 232) == v4) {
    ProcNextSeq_16b0ac0(v2);
    game_script_hub_ui_g_talk_result = 1;
    return 2;
  }
  v6 = v4;
  v7 = *(_QWORD*)(v3 + 8);
  v10_.v11 = nullptr;
  v12_.v12[0] = GameData_208ad80;
  v12_.v12[1] = v2;
  v12_.v13 = v12_.v12;
  GameRoutine_1933ba0(v7, v6, (__int64)v12_.v12, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_8;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10_.v11 + v8))((__int64)v10_.v11);
LABEL_8:
  if (v12_.v13 == v12_.v12) {
    v9 = 32;
    goto LABEL_12;
  }
  if (v12_.v13 != nullptr) {
    v9 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v12_.v13 + v9))((__int64)v12_.v13);
  }
  return 9;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure2_Invoke()
{
  game_script_hub_ui_g_talk_result = 0;
  return 3;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure3_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)a2 + 8LL) + 1300LL) = 1;
  ProcNextSeq_16b0ac0(v2);
  game_script_hub_ui_g_talk_result = 1;
  return 6;
}

__int64 game_menu_anonymous_ProcNextSeq_CheckFree_closure4_Invoke()
{
  game_script_hub_ui_g_talk_result = 0;
  return 3;
}

_QWORD* ProcNextSeq_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = &game_menu_anonymous_ProcNextSeq_vtable;
  if ((*(_BYTE*)(a1 + 208) & 1) != 0 && *(_QWORD*)(a1 + 224) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  v3 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_208b2f0;
  if (v3 == (_QWORD*)(a1 + 160)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_11:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

void __attribute__((noreturn)) ProcNextSeq_DeletingDestructor()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
