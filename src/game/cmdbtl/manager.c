#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 CmdBtlParty_Destructor(__int64);
__int64 CmdBtlUnit_e79df0(__int64 result);
__int64 GameRoutine_120faa0(_QWORD);
__int64 GameRoutine_e73e20(__int64 result);
__int64 GameRoutine_e7f9a0(__int64);
__int64 GameRoutine_e9a300(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fec768[])();
extern __int64 (*game_cmdbtl_Manager_vtable[])();
extern __int64 GameData_212d238[2];
extern __int64 GameData_2130f48;
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern __int64* GameData_212f770[3];
extern int GameData_21f61c8;
extern int* GameData_212f2e8[7];
__int64 Manager_Destructor_e99e00(__int64 a1);
__int64 Manager_e9a420(__int64 a1);

__int64 Manager_Destructor_e99e00(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  void (***v28)(_QWORD);
  void (***v29)(_QWORD);
  void (***v30)(_QWORD);
  void (***v31)(_QWORD);
  void (**v32)(_QWORD);
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 result;

  *(_QWORD*)a1 = game_cmdbtl_Manager_vtable;
  GameRoutine_e9a300(a1);
  v2 = *(__int64**)(a1 + 712);
  v3 = *(__int64**)(a1 + 720);
  if (v2 != v3) {
    do {
      v4 = *v2;
      v2 += 2;
      CmdBtlUnit_e79df0(v4);
    } while (v2 != v3);
    v3 = *(__int64**)(a1 + 720);
    v2 = *(__int64**)(a1 + 712);
  }
  for (; v3 != v2; v3 -= 2) {
    v5 = *(v3 - 1);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 720) = v2;
  *(_DWORD*)(a1 + 700) = 0;
  GameRoutine_e73e20(a1 + 672);
  v6 = *(__int64**)(a1 + 840);
  v7 = *(__int64**)(a1 + 848);
  if (v6 != v7) {
    do {
      v8 = *v6;
      v6 += 2;
      CmdBtlUnit_e79df0(v8);
    } while (v6 != v7);
    v7 = *(__int64**)(a1 + 848);
    v6 = *(__int64**)(a1 + 840);
  }
  for (; v7 != v6; v7 -= 2) {
    v9 = *(v7 - 1);
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 848) = v6;
  *(_DWORD*)(a1 + 828) = 0;
  GameRoutine_e73e20(a1 + 800);
  v10 = *(__int64**)(a1 + 968);
  v11 = *(__int64**)(a1 + 976);
  if (v10 != v11) {
    do {
      v12 = *v10;
      v10 += 2;
      CmdBtlUnit_e79df0(v12);
    } while (v10 != v11);
    v11 = *(__int64**)(a1 + 976);
    v10 = *(__int64**)(a1 + 968);
  }
  for (; v11 != v10; v11 -= 2) {
    v13 = *(v11 - 1);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 976) = v10;
  *(_DWORD*)(a1 + 956) = 0;
  GameRoutine_e73e20(a1 + 928);
  v14 = *(__int64**)(a1 + 1096);
  v15 = *(__int64**)(a1 + 1104);
  if (v14 != v15) {
    do {
      v16 = *v14;
      v14 += 2;
      CmdBtlUnit_e79df0(v16);
    } while (v14 != v15);
    v15 = *(__int64**)(a1 + 1104);
    v14 = *(__int64**)(a1 + 1096);
  }
  for (; v15 != v14; v15 -= 2) {
    v17 = *(v15 - 1);
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 1104) = v14;
  *(_DWORD*)(a1 + 1084) = 0;
  v18 = GameRoutine_e73e20(a1 + 1056);
  GameRoutine_120faa0(v18);
  if (*(_BYTE*)(a1 + 12576) != 0) {
    *(_BYTE*)(a1 + 12576) = 0;
    v19 = *(_QWORD*)GameData_2130f48;
    if (*(_QWORD*)GameData_2130f48 != 0) {
      v20 = *(_DWORD*)(v19 + 1736) - 1;
      *(_DWORD*)(v19 + 1736) = v20;
      if (v20 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v19 + 1728) + 8LL))(v19 + 1728);
      }
    }
    if (--GameData_21f61c8 == 0) {
      (*(void (**)(void))(GameData_21f61c0 + 8))();
    }
  }
  v21 = GameData_212f2e0;
  v22 = *GameData_212f2e0;
  *(_BYTE*)(*GameData_212f2e0 + 115) = 0;
  if ((*GameData_212f2e8[0])-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 24LL))(v22);
    if (*v21 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v21 + 8LL))(*v21);
    }
    *v21 = 0;
  }
  *(_QWORD*)(a1 + 1264) = GameData_212d238[0] + 16;
  v24 = *(_QWORD*)(a1 + 12568);
  *(_QWORD*)(a1 + 12560) = GameData_212da50[0] + 2;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(a1 + 12568) = 0;
  }
  *(_QWORD*)(a1 + 1272) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 3560);
  BattleSide_Destructor(a1 + 2800);
  BattleSide_Destructor(a1 + 2040);
  BattleSide_Destructor(a1 + 1280);
  if (*(_QWORD*)(a1 + 1256) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 1240) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  v25 = *(_QWORD*)(a1 + 1192);
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak();
  }
  CmdBtlParty_Destructor(a1 + 1056);
  CmdBtlParty_Destructor(a1 + 928);
  CmdBtlParty_Destructor(a1 + 800);
  CmdBtlParty_Destructor(a1 + 672);
  v26 = *(_QWORD*)(a1 + 664);
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak();
  }
  v27 = *(_QWORD*)(a1 + 648);
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak();
  }
  v28 = *(void (****)(_QWORD))(a1 + 584);
  *(_QWORD*)(a1 + 576) = GameData_212f770[0] + 2;
  if (v28 != nullptr) {
    v29 = *(void (****)(_QWORD))(a1 + 592);
    if (v28 == v29) {
      goto LABEL_69;
    }
    v30 = v29 - 6;
    v31 = v29 - 6;
    do {
      v32 = *v31;
      v31 -= 6;
      (*v32)(v30);
      v33 = v30 == v28;
      v30 = v31;
    } while (!v33);
    v34 = *(_QWORD*)(a1 + 584);
    *(_QWORD*)(a1 + 592) = v28;
    if (v34 != 0) {
    LABEL_69:
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v35);
    }
  }
  result = GameRoutine_e7f9a0(a1 + 16);
  *(_QWORD*)a1 = GameData_1fec768;
  if (*GameData_212ea58 == a1) {
    *GameData_212ea58 = 0;
  }
  return result;
}

__int64 Manager_e9a420(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = *(__int64**)(a1 + 712);
  v2 = *(__int64**)(a1 + 720);
  if (v1 != v2) {
    do {
      v4 = *v1;
      v1 += 2;
      CmdBtlUnit_e79df0(v4);
    } while (v1 != v2);
    v2 = *(__int64**)(a1 + 720);
    v1 = *(__int64**)(a1 + 712);
  }
  for (; v2 != v1; v2 -= 2) {
    v5 = *(v2 - 1);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 720) = v1;
  *(_DWORD*)(a1 + 700) = 0;
  GameRoutine_e73e20(a1 + 672);
  v6 = *(__int64**)(a1 + 840);
  v7 = *(__int64**)(a1 + 848);
  if (v6 != v7) {
    do {
      v8 = *v6;
      v6 += 2;
      CmdBtlUnit_e79df0(v8);
    } while (v6 != v7);
    v7 = *(__int64**)(a1 + 848);
    v6 = *(__int64**)(a1 + 840);
  }
  for (; v7 != v6; v7 -= 2) {
    v9 = *(v7 - 1);
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 848) = v6;
  *(_DWORD*)(a1 + 828) = 0;
  GameRoutine_e73e20(a1 + 800);
  v10 = *(__int64**)(a1 + 968);
  v11 = *(__int64**)(a1 + 976);
  if (v10 != v11) {
    do {
      v12 = *v10;
      v10 += 2;
      CmdBtlUnit_e79df0(v12);
    } while (v10 != v11);
    v11 = *(__int64**)(a1 + 976);
    v10 = *(__int64**)(a1 + 968);
  }
  for (; v11 != v10; v11 -= 2) {
    v13 = *(v11 - 1);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 976) = v10;
  *(_DWORD*)(a1 + 956) = 0;
  GameRoutine_e73e20(a1 + 928);
  v14 = *(__int64**)(a1 + 1096);
  v15 = *(__int64**)(a1 + 1104);
  if (v14 != v15) {
    do {
      v16 = *v14;
      v14 += 2;
      CmdBtlUnit_e79df0(v16);
    } while (v14 != v15);
    v15 = *(__int64**)(a1 + 1104);
    v14 = *(__int64**)(a1 + 1096);
  }
  for (; v15 != v14; v15 -= 2) {
    v17 = *(v15 - 1);
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 1104) = v14;
  *(_DWORD*)(a1 + 1084) = 0;
  v18 = GameRoutine_e73e20(a1 + 1056);
  return GameRoutine_120faa0(v18);
}

#pragma GCC visibility pop
