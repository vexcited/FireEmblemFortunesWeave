#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_947af0(void);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_sound_PlayListRightSe(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
extern __int64 (*game_facility_anonymous_IndividualMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
extern int game_script_hub_ui_g_talk_result;
__int64 IndividualMenuItem_Destructor_1935f60(__int64 a1);
__int64 IndividualMenuItem_DeletingDestructor(__int64 a1);
__int64 IndividualMenuItem_Unknown25(__int64 a1);
__int64 IndividualMenuItem_UpCall(__int64 a1, char a2);
__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
__int64 GameRoutine_65a180(_QWORD);
_QWORD* IndividualMenuItem_OnClose(_QWORD* result);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcNextSeq_16af630(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131b60;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2132370[2];
extern __int64 game_GameModeData_instance_;
extern char* GameData_2131b68[4];
extern int* GameData_2131b58[2];
__int64 IndividualMenuItem_ACall(_QWORD* a1);

bool IndividualMenuItem_IsDecidable()
{
  return (unsigned int)GameRoutine_947af0() < 0x400000;
}

_QWORD* IndividualMenuItem_OnClose(_QWORD* result)
{
  __int64 v1;

  v1 = result[1];
  if (game_script_hub_ui_g_talk_result == 1) {
    if (v1 != 0) {
    LABEL_3:
      GameRoutine_65a180(result[1]);
      return (_QWORD*)BasicMenuCursor_16ddaa0(v1, 4);
    }
  }
  else if (v1 != 0 && game_script_hub_ui_g_talk_result == 2) {
    goto LABEL_3;
  }
  if (*(_QWORD**)(v1 + 336) == result) {
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 64LL))(result,
                                                                       0);
  }
  return result;
}

__int64 IndividualMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    v2 = a1[1];
    goto LABEL_7;
  }
  v2 = a1[1];
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
  LABEL_7:
    *GameData_2131b68[0] = 0;
    *GameData_2131b58[0] = 0;
    v4 = GameData_2131b60;
    *GameData_2131b60 = 0;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = 0;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        360, 16, 0);
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 152) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    v6 = v5;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 224) = 0;
    *(_QWORD*)(v5 + 240) = 0;
    *(_QWORD*)(v5 + 248) = 0;
    *(_QWORD*)(v5 + 256) = 0;
    *(_QWORD*)(v5 + 264) = 0;
    *(_QWORD*)(v5 + 272) = 0;
    *(_QWORD*)(v5 + 280) = 0;
    *(_QWORD*)(v5 + 288) = 0;
    *(_QWORD*)(v5 + 296) = 0;
    *(_QWORD*)(v5 + 304) = 0;
    *(_QWORD*)(v5 + 312) = 0;
    *(_QWORD*)(v5 + 320) = 0;
    *(_QWORD*)(v5 + 328) = 0;
    *(_QWORD*)(v5 + 336) = 0;
    *(_QWORD*)(v5 + 344) = 0;
    *(_QWORD*)(v5 + 232) = 0;
    v7 = (_QWORD*)(v5 + 232);
    v8 = GameData_212c608[0] + 16;
    *(_QWORD*)(v5 + 352) = 0;
    *(_QWORD*)(v5 + 96) = 0;
    *(_QWORD*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 112) = 0;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 128) = 0;
    *(_WORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = "NULL";
    *(_QWORD*)(v5 + 138) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)v5 = v8;
    *(_QWORD*)(v5 + 8) = 0;
    game_ProcInst_Register(v5);
    *(_BYTE*)(v6 + 168) = 0;
    v9 = GameData_2130240[0];
    *(_BYTE*)(v6 + 172) = 0;
    *v7 = 0;
    *(_QWORD*)(v6 + 192) = 0;
    *(_QWORD*)(v6 + 200) = 0;
    *(_QWORD*)(v6 + 208) = 0;
    *(_QWORD*)(v6 + 216) = 0;
    *(_QWORD*)(v6 + 224) = v7;
    *(_QWORD*)(v6 + 240) = 0;
    *(_QWORD*)(v6 + 248) = 0;
    *(_QWORD*)(v6 + 256) = 0;
    *(_QWORD*)(v6 + 264) = 0;
    *(_QWORD*)(v6 + 272) = 0;
    *(_QWORD*)(v6 + 344) = 0;
    *(_QWORD*)(v6 + 352) = 0;
    *(_QWORD*)(v6 + 328) = 0;
    *(_QWORD*)(v6 + 336) = 0;
    *(_QWORD*)(v6 + 312) = 0;
    *(_QWORD*)(v6 + 320) = 0;
    *(_QWORD*)(v6 + 296) = 0;
    *(_QWORD*)(v6 + 304) = 0;
    *(_QWORD*)(v6 + 288) = 0;
    *(_QWORD*)(v6 + 152) = 0;
    *(_QWORD*)(v6 + 160) = v9 + 2;
    *(_DWORD*)(v6 + 280) = 1065353216;
    v10 = GameData_2132370[0] + 440;
    *(_QWORD*)v6 = GameData_2132370[0] + 16;
    *(_QWORD*)(v6 + 176) = v10;
    *(_QWORD*)(v6 + 184) = 0;
    ProcInst_657850(v6, GameData_21319e0, "IndividualMenu", 1, v2);
    return 9;
  }
  ProcNextSeq_16af630(v2);
  return 9;
}

__int64 IndividualMenuItem_Destructor_1935f60(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  *(_QWORD*)a1 = game_facility_anonymous_IndividualMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 104);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__int64 IndividualMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_facility_anonymous_IndividualMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 104);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
}

__int64 IndividualMenuItem_Unknown25(__int64 a1)
{
  unsigned int v1;

  v1 = 1;
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 312LL))(a1, 1) & 1) !=
      0) {
    game_sound_PlayListRightSe();
    return 13;
  }
  return v1;
}

__int64 IndividualMenuItem_UpCall(__int64 a1, char a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v9;
  long double v10;
  double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(int*)(a1 + 40);
  v4 = GameData_212dcd0;
  v5 = *GameData_212dcd0;
  if ((a2 & 1) == 0 && *(int*)(*(_QWORD*)(v5 + 72) + 4 * v2) > 2) {
    return 0;
  }
  v6 = *(unsigned __int8*)(a1 + 112);
  if (v6 <= 1) {
    v7 = 1;
  }
  else {
    v7 = *(unsigned __int8*)(a1 + 112);
  }
  if (v6 <= 2) {
    v8 = v7 + 1;
  }
  else {
    v8 = 1;
  }
  *(_BYTE*)(a1 + 112) = v8;
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 48) + 8 * v2) + 392LL);
  if (v9 != 0) {
    game_VariableManager_SetFlag(*(_QWORD*)(v9 + 24) + 1352LL,
                                 (unsigned __int8)v8);
    v5 = *v4;
    v2 = *(int*)(a1 + 40);
  }
  *(_DWORD*)(*(_QWORD*)(v5 + 72) + 4 * v2) = v8;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
  v12 = *(_QWORD*)(a1 + 104);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 96);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v14 = std___1___shared_weak_count_lock(v10, v11);
    if (v14 != 0) {
      v15 = v14;
      if (v13 != 0) {
        GameRoutine_159e7c0(v13, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
    std___1___shared_weak_count___release_weak(v12);
  }
  return 1;
}

#pragma GCC visibility pop
