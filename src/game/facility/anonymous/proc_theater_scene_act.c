#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2036570[])();
extern __int64 (*game_facility_anonymous_ProcTheaterSceneAct_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_2131208[3];
extern __int64 GameData_2131210[2];
extern __int64 GameData_224ade8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
extern int GameData_224ade4;
__int64 ProcTheaterSceneAct_Destructor(__int64 a1);
__int64 ProcTheaterSceneAct_Unknown21(__int64 a1);

__int64 ProcTheaterSceneAct_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;

  *(_QWORD*)a1 = game_facility_anonymous_ProcTheaterSceneAct_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2036570;
  v2 = a1 + 152;
  v3 = (_QWORD*)GameData_2131210[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131210[0] + 24LL))(
      *(_QWORD*)GameData_2131210[0]);
  if (*v3 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = (_QWORD*)GameData_2131208[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131208[0] + 24LL))(
      *(_QWORD*)GameData_2131208[0]);
  if (*v4 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
  }
  *v4 = 0;
  if (GameData_224ade8 != 0) {
    v5 = GameData_224ade4-- <= 1;
    if (v5) {
      (*(void (**)(void))(*(_QWORD*)GameData_224ade8 + 24LL))();
      if (GameData_224ade8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_224ade8 + 8LL))(
            GameData_224ade8);
      }
      GameData_224ade8 = 0;
    }
  }
  v6 = *(_QWORD*)(a1 + 376);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 360);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 344);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    if ((*(_BYTE*)(a1 + 288) & 1) == 0) {
      goto LABEL_25;
    }
  }
  else if ((*(_BYTE*)(a1 + 288) & 1) == 0) {
    goto LABEL_25;
  }
  if (*(_QWORD*)(a1 + 304) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }

LABEL_25:
  v10 = *(_QWORD*)(a1 + 216);
  if (v10 != 0) {
    *(_QWORD*)(a1 + 224) = v10;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  v12 = *(_QWORD*)(a1 + 184);
  if (v12 != 0) {
    *(_QWORD*)(a1 + 192) = v12;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  v14 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v14;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v15 = (_QWORD*)GameData_212dce8;
  v16 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v5 = (*GameData_2130fb8)-- <= 1;
    if (v5) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
      if (*v15 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v15 + 8LL))(*v15);
      }
      *v15 = 0;
    }
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcTheaterSceneAct_Unknown21(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 248);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 34);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
