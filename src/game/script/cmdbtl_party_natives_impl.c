#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlUnit_e79df0(_QWORD);
__int64 CmdbtlPartyNatives_e9cb40(_QWORD, _QWORD);
__int64 CmdbtlPartyNatives_eb8a30(_QWORD, _QWORD);
__int64 GameRoutine_1084940(_QWORD, _QWORD, double);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_e73e20(_QWORD);
__int64 GameRoutine_e74040(_QWORD, _QWORD);
__int64 GameRoutine_e790e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e7c3f0(__int64, int, __int16, float);
__int64 GameRoutine_e7cd60(_QWORD);
__int64 GameRoutine_e80220(__int64, __int64*, _QWORD*, __int64, __int64, float);
__int64 GameRoutine_ebabe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_CountAll(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _QWORD GameData_1b91af0[3];
extern _QWORD GameData_1b94450[3];
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern _UNKNOWN GameData_2216780;
extern __int64 (*GameData_1fe7b78[])();
extern __int64 (*GameData_1fe7ec8[])();
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_1fec998[])();
extern __int64 (*GameData_1feca18[])();
extern __int64 (*GameData_1fecc18[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_22190c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern char GameData_2216858;
extern int GameData_216772c;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(void);
bool CmdbtlPartyNatives_e73070(_QWORD* a1, __int64* a2);
__int64 CmdbtlPartyNatives_e738c0(__int64 a1, unsigned int a2);
__int64 CmdbtlPartyNatives_e73d00(__int64 a1, __int64 a2);
__int64 CmdbtlPartyNatives_e749a0(__int64 result, _QWORD* a2);
__int64 CmdbtlPartyNatives_e77d30(__int64 result, int a2);
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD* a1, __int64 a2);
_QWORD* CmdbtlPartyNatives_e9aba0(_QWORD* a1, __int64 a2);
__int64 CmdbtlPartyNatives_e9ba00(__int64 a1, __int64 a2, unsigned int a3,
                                  unsigned __int8 a4, __int64* a5, float a6);
__int64 CmdbtlPartyNatives_e9c620(_QWORD* a1, char a2);
__int64 CmdbtlPartyNatives_e9cce0(__int64 result);
unsigned __int64 CmdbtlPartyNatives_eb4500(__int64 a1);
__int64 CmdbtlPartyNatives_eb7a80(__int64 result);
__int64 CmdbtlPartyNatives_eb8c40(__int64 a1);
_QWORD* CmdbtlPartyNatives_eba910(_QWORD* a1, __int64* a2);
__int64* CmdbtlPartyNatives_ebaa20(__int64* result, _QWORD* a2);

bool CmdbtlPartyNatives_e73070(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 add;
  _BOOL4 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD v31[2];

  v2 = a1[11];
  if (v2 != 0) {
    v5 = a1[10];
    v6 = a1[11];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 == 0) {
      v5 = 0;
    }
    v8 = a2[1];
    if (v8 == 0) {
      goto LABEL_13;
    }
  }
  else {
    v7 = 0;
    v5 = 0;
    v8 = a2[1];
    if (v8 == 0) {
    LABEL_13:
      v12 = v5 == 0;
      goto LABEL_14;
    }
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = v5 == *a2;
  add =
      atomic_fetch_add((atomic_ullong* volatile)(v9 + 8), 0xFFFFFFFFFFFFFFFFLL);
  v12 = v10;
  if (add == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak();
  }

LABEL_14:
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak();
  }
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (!v12) {
    v13 = a1[11];
    if (v13 == 0) {
      goto LABEL_31;
    }
    v14 = (_QWORD*)a1[10];
    v15 = a1[11];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v16 = std___1___shared_weak_count_lock(v15);
    std___1___shared_weak_count___release_weak();
    if (v16 == 0) {
      goto LABEL_31;
    }
    if (v14 != nullptr) {
      v31[0] = "Leader";
      v31[1] = 6;
      GameRoutine_ff7720(v14 + 43, v31);
      v17 = v14[27];
      v18 = v14[28];
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v17 != 0) {
        *(_BYTE*)(v17 + 60) = v14[44] != v14[43];
      }
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak();
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak();
      v19 = a1[9];
      if (v19 == 0) {
        goto LABEL_33;
      }
    }
    else {
    LABEL_31:
      v19 = a1[9];
      if (v19 == 0) {
        goto LABEL_33;
      }
    }
    if (*(_QWORD*)(v19 + 8) != -1) {
    LABEL_37:
      v23 = *a2;
      v22 = a2[1];
      if (v22 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                  memory_order_relaxed);
      }
      v24 = a1[11];
      a1[10] = v23;
      a1[11] = v22;
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak();
        v22 = a1[11];
      }
      if (v22 != 0) {
        v25 = std___1___shared_weak_count_lock(v22);
        if (v25 != 0) {
          v26 = (_QWORD*)a1[10];
          v27 = v25;
          if (v26 != nullptr) {
            v31[0] = "Leader";
            v31[1] = 6;
            GameRoutine_ff7420(v26 + 43, v31);
            v28 = v26[27];
            v29 = v26[28];
            if (v29 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                        memory_order_relaxed);
            }
            if (v28 != 0) {
              *(_BYTE*)(v28 + 60) = v26[44] != v26[43];
            }
            if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
              std___1___shared_weak_count___release_weak();
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
            std___1___shared_weak_count___release_weak();
          }
        }
      }
      CmdbtlPartyNatives_e9cce0(GameData_2203490);
      return !v12;
    }
  LABEL_33:
    v21 = *a2;
    v20 = a2[1];
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
      v19 = a1[9];
    }
    a1[8] = v21;
    a1[9] = v20;
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak();
    }
    goto LABEL_37;
  }
  return !v12;
}

__int64 CmdbtlPartyNatives_e738c0(__int64 a1, unsigned int a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  atomic_ullong* v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31[2];
  __int64 v32[2];
  __int64 v33;
  __int64 v34;
  __int64 v35[2];
  _QWORD v36[2];
  _QWORD v37[4];
  _QWORD* v38;
  __int64 v39;

  v2 = *(__int64**)(a1 + 40);
  v3 = *(__int64**)(a1 + 48);
  if (v2 != v3) {
    do {
      v6 = *v2;
      v2 += 2;
      CmdBtlUnit_e79df0(v6);
    } while (v2 != v3);
    v2 = *(__int64**)(a1 + 40);
    v3 = *(__int64**)(a1 + 48);
  }
  for (; v3 != v2; v3 -= 2) {
    v7 = *(v3 - 1);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 48) = v2;
  *(_DWORD*)(a1 + 28) = 0;
  GameRoutine_e73e20(a1);
  *(_DWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 20) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  v30 = a2;
  if (a2 > 2) {
    v8 = 8;
  }
  else {
    v8 = GameData_1b91af0[a2];
  }
  v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 24 * v8 + 556000);
  while (v9 != 0) {
    v10 = v9;
    v9 = *(_QWORD*)(v9 + 432);
    v11 = *(_DWORD*)(*GameData_212ea58 + 1224);
    *(_DWORD*)(*GameData_212ea58 + 1224) = v11 + 1;
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 560,
                                                  16, 0);
    v13 = v12 + 4;
    v14 = v12;
    v12[1] = 0;
    v15 = (atomic_ullong*)(v12 + 1);
    v12[2] = 0;
    *v12 = GameData_1fe7b78;
    GameRoutine_e790e0(v12 + 4, v11, v10);
    v36[0] = v13;
    v36[1] = v14;
    atomic_fetch_add_explicit(v15, 1u, memory_order_relaxed);
    GameRoutine_e74040(a1, v36);
    if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        goto LABEL_20;
      }
    }
    else {
      (*(void (**)(_QWORD*))(*v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak();
      if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      LABEL_20:
        (*(void (**)(_QWORD*))(*v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  v35[0] = 0;
  v35[1] = 0;
  result = CmdbtlPartyNatives_e73070((_QWORD*)a1, v35);
  if (v30 >= 2) {
    return result;
  }
  if (*(_QWORD*)(GameData_22190c8 + 8LL * *(int*)(a1 + 8) + 192) != 0) {
    v39 = *(_QWORD*)(GameData_22190c8 + 8LL * *(int*)(a1 + 8) + 192);
    v33 = 0;
    v34 = 0;
    v38 = v37;
    v17 = *GameData_212ea58;
    v37[0] = GameData_1fec818;
    v37[1] = &v39;
    v37[2] = &v33;
    CmdbtlPartyNatives_e9a800(v17, v37);
    result = (__int64)v38;
    if (v38 == v37) {
      v18 = 32;
    }
    else {
      if (v38 == nullptr) {
        goto LABEL_28;
      }
      v18 = 40;
    }
    result = (*(__int64 (**)(void))(*v38 + v18))();
  LABEL_28:
    if (v33 != 0) {
      v32[0] = v33;
      v32[1] = v34;
      if (v34 == 0) {
        result = CmdbtlPartyNatives_e73070((_QWORD*)a1, v32);
        v19 = v34;
        if (v34 == 0) {
          goto LABEL_35;
        }
        goto LABEL_32;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                memory_order_relaxed);
      CmdbtlPartyNatives_e73070((_QWORD*)a1, v32);
      result = std___1___shared_weak_count___release_weak();
    }
    v19 = v34;
    if (v34 == 0) {
      goto LABEL_35;
    }
  LABEL_32:
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      result = std___1___shared_weak_count___release_weak();
    }
  }

LABEL_35:
  v20 = *(_QWORD*)(a1 + 88);
  if (v20 == 0) {
    if (*(_QWORD*)(a1 + 48) == *(_QWORD*)(a1 + 40)) {
      return result;
    }
    goto LABEL_47;
  }
  v21 = *(_QWORD*)(a1 + 80);
  v22 = *(_QWORD*)(a1 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                            memory_order_relaxed);
  v23 = std___1___shared_weak_count_lock(v22);
  if (v23 == 0) {
    v25 = *(_QWORD*)(a1 + 40);
    v24 = *(_QWORD*)(a1 + 48);
    result = std___1___shared_weak_count___release_weak();
    if (v24 == v25) {
      return result;
    }
    goto LABEL_47;
  }
  if (v21 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak();
    }
    return std___1___shared_weak_count___release_weak();
  }
  v27 = *(_QWORD*)(a1 + 40);
  v26 = *(_QWORD*)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak();
  }
  result = std___1___shared_weak_count___release_weak();
  if (v26 != v27) {
  LABEL_47:
    v28 = *(__int64**)(a1 + 40);
    v29 = v28[1];
    v31[0] = *v28;
    v31[1] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                memory_order_relaxed);
      CmdbtlPartyNatives_e73070((_QWORD*)a1, v31);
      return std___1___shared_weak_count___release_weak();
    }
    return CmdbtlPartyNatives_e73070((_QWORD*)a1, v31);
  }
  return result;
}

__int64 CmdbtlPartyNatives_e73d00(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;

  v2 = *(__int64**)(a1 + 40);
  v3 = *(__int64**)(a1 + 48);
  v13 = 0;
  v9[0] = GameData_1fe7ec8;
  v9[1] = &v13;
  v10 = v9;
  if (v2 == v3) {
    v6 = v9;
  LABEL_14:
    v7 = 32;
    goto LABEL_15;
  }
  do {
    v11 = *v2;
    v4 = v2[1];
    v12 = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v10 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v11);
    v5 = v12;
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
    v2 += 2;
  } while (v2 != v3);
  v6 = v10;
  if (v10 == v9) {
    goto LABEL_14;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v6 + v7))(v6, a2);
  }
  return v13;
}

__int64 CmdbtlPartyNatives_e749a0(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(__int64**)result;
  v3 = *(__int64**)(result + 8);
  v5 = result;
  if (*(__int64**)result != v3) {
    while (*v2 != *a2) {
      v2 += 2;
      if (v2 == v3) {
        return result;
      }
    }
  }
  v6 = v2 + 2;
  if (v2 != v3 && v6 != v3) {
    do {
      v8 = *v6;
      if (*v6 != *a2) {
        v9 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v10 = v2[1];
        *v2 = v8;
        v2[1] = v9;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak();
        }
        v2 += 2;
      }
      v6 += 2;
    } while (v6 != v3);
    v3 = *(__int64**)(v5 + 8);
  }
  if (v2 != v3) {
    do {
      v11 = *(v3 - 1);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak();
      }
      v3 -= 2;
    } while (v3 != v2);
    *(_QWORD*)(v5 + 8) = v2;
  }
  return result;
}

__int64 CmdbtlPartyNatives_e77d30(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  void* v9;
  __int64 v10;
  __int64 v11;

  if (*(_DWORD*)(result + 8) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    v10 = v2;
    v11 = v3;
    v9 = &GameData_1ad7123;
    v8 = game_HashString(&GameData_1ad7123);
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v8);
      if (v6 != 0) {
        v5 = *(_DWORD*)(v6 + 32);
      }
      else {
        v5 = 0;
      }
    }
    if (v5 >= a2) {
      v5 = a2;
    }
    v9 = &GameData_1af5ec9;
    if (a2 >= 0) {
      v7 = v5;
    }
    else {
      v7 = 0;
    }
    v8 = game_HashString(&GameData_1af5ec9);
    return game_VariableManager_SetFlag(&v8, v7);
  }
  return result;
}

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* result;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  __int64 v31;
  __int64 v32;

  v2 = (__int64*)a1[89];
  v3 = (__int64*)a1[90];
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v30 = v29;
  if (v2 == v3) {
    v9 = v29;
  LABEL_14:
    v10 = 32;
    goto LABEL_15;
  }
  do {
    v31 = *v2;
    v6 = v2[1];
    v32 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
    LABEL_62:
      GameRoutine_60a310(v7, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v8 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak();
    }
    v2 += 2;
  } while (v2 != v3);
  v9 = v30;
  if (v30 == v29) {
    goto LABEL_14;
  }
  if (v30 != nullptr) {
    v10 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v9 + v10))(v9, a2);
  }
  v11 = (__int64*)a1[105];
  v12 = (__int64*)a1[106];
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v30 = v29;
  if (v11 == v12) {
    v15 = v29;
  LABEL_29:
    v16 = 32;
    goto LABEL_30;
  }
  do {
    v31 = *v11;
    v13 = v11[1];
    v32 = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v14 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak();
    }
    v11 += 2;
  } while (v11 != v12);
  v15 = v30;
  if (v30 == v29) {
    goto LABEL_29;
  }
  if (v30 != nullptr) {
    v16 = 40;
  LABEL_30:
    (*(void (**)(_QWORD*, __int64))(*v15 + v16))(v15, a2);
  }
  v17 = (__int64*)a1[121];
  v18 = (__int64*)a1[122];
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v30 = v29;
  if (v17 == v18) {
    v21 = v29;
  LABEL_44:
    v22 = 32;
    goto LABEL_45;
  }
  do {
    v31 = *v17;
    v19 = v17[1];
    v32 = v19;
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v20 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak();
    }
    v17 += 2;
  } while (v17 != v18);
  v21 = v30;
  if (v30 == v29) {
    goto LABEL_44;
  }
  if (v30 != nullptr) {
    v22 = 40;
  LABEL_45:
    (*(void (**)(_QWORD*, __int64))(*v21 + v22))(v21, a2);
  }
  v29[0] = GameData_1fec998;
  v29[1] = a2;
  v23 = (__int64*)a1[137];
  v24 = (__int64*)a1[138];
  v30 = v29;
  if (v23 == v24) {
    result = v29;
  LABEL_59:
    v28 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                       a2);
  }
  do {
    v31 = *v23;
    v25 = v23[1];
    v32 = v25;
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v26 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak();
    }
    v23 += 2;
  } while (v23 != v24);
  result = v30;
  if (v30 == v29) {
    goto LABEL_59;
  }
  if (v30 == nullptr) {
    return result;
  }
  v28 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                     a2);
}

_QWORD* CmdbtlPartyNatives_e9aba0(_QWORD* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* result;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  __int64 v31;
  __int64 v32;

  v2 = (__int64*)a1[89];
  v3 = (__int64*)a1[90];
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v30 = v29;
  if (v2 == v3) {
    v9 = v29;
  LABEL_14:
    v10 = 32;
    goto LABEL_15;
  }
  do {
    v31 = *v2;
    v6 = v2[1];
    v32 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
    LABEL_62:
      GameRoutine_60a310(v7, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v8 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak();
    }
    v2 += 2;
  } while (v2 != v3);
  v9 = v30;
  if (v30 == v29) {
    goto LABEL_14;
  }
  if (v30 != nullptr) {
    v10 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v9 + v10))(v9, a2);
  }
  v11 = (__int64*)a1[105];
  v12 = (__int64*)a1[106];
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v30 = v29;
  if (v11 == v12) {
    v15 = v29;
  LABEL_29:
    v16 = 32;
    goto LABEL_30;
  }
  do {
    v31 = *v11;
    v13 = v11[1];
    v32 = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v14 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak();
    }
    v11 += 2;
  } while (v11 != v12);
  v15 = v30;
  if (v30 == v29) {
    goto LABEL_29;
  }
  if (v30 != nullptr) {
    v16 = 40;
  LABEL_30:
    (*(void (**)(_QWORD*, __int64))(*v15 + v16))(v15, a2);
  }
  v17 = (__int64*)a1[121];
  v18 = (__int64*)a1[122];
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v30 = v29;
  if (v17 == v18) {
    v21 = v29;
  LABEL_44:
    v22 = 32;
    goto LABEL_45;
  }
  do {
    v31 = *v17;
    v19 = v17[1];
    v32 = v19;
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v20 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak();
    }
    v17 += 2;
  } while (v17 != v18);
  v21 = v30;
  if (v30 == v29) {
    goto LABEL_44;
  }
  if (v30 != nullptr) {
    v22 = 40;
  LABEL_45:
    (*(void (**)(_QWORD*, __int64))(*v21 + v22))(v21, a2);
  }
  v29[0] = GameData_1feca18;
  v29[1] = a2;
  v23 = (__int64*)a1[137];
  v24 = (__int64*)a1[138];
  v30 = v29;
  if (v23 == v24) {
    result = v29;
  LABEL_59:
    v28 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                       a2);
  }
  do {
    v31 = *v23;
    v25 = v23[1];
    v32 = v25;
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v30;
    if (v30 == nullptr) {
      goto LABEL_62;
    }
    (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
    v26 = v32;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak();
    }
    v23 += 2;
  } while (v23 != v24);
  result = v30;
  if (v30 == v29) {
    goto LABEL_59;
  }
  if (v30 == nullptr) {
    return result;
  }
  v28 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v28))(result,
                                                                     a2);
}

__int64 CmdbtlPartyNatives_e9ba00(__int64 a1, __int64 a2, unsigned int a3,
                                  unsigned __int8 a4, __int64* a5, float a6)
{
  int v6;
  char v7;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 add;
  _BOOL4 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v34[4];
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int16 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v6 = *(_DWORD*)(a1 + 1204);
  v7 = a4 | v6;
  if (((a4 | (unsigned __int8)v6) & 1) == 0) {
    return v7 & 1;
  }
  *(_DWORD*)(a1 + 1204) = v6 & 0xFFFFFFFE;
  if (a6 == 0.0) {
    v40 = 0;
    v41 = 0;
    v42 = 0;
    CmdbtlPartyNatives_e9cb40(a1, &v40);
    if (v42 != 0) {
      std___1___shared_weak_count___release_weak();
    }
  }
  v13 = a1 + 672 + ((__int64)(int)a3 << 7);
  v15 = *(_QWORD*)(v13 + 80);
  v14 = *(_QWORD*)(v13 + 88);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  v16 = a5[1];
  if (v16 == 0 || *(_QWORD*)(v16 + 8) == -1) {
    goto LABEL_51;
  }
  if (v14 == 0) {
    v17 = 0;
    v19 = 0;
    v20 = std___1___shared_weak_count_lock(v16);
    if (v20 != 0) {
      goto LABEL_15;
    }
  LABEL_21:
    v23 = v19 != 0;
    goto LABEL_22;
  }
  v17 = std___1___shared_weak_count_lock(v14);
  v18 = a5[1];
  if (v17 != 0) {
    v19 = v15;
  }
  else {
    v19 = 0;
  }
  if (v18 == 0) {
    goto LABEL_21;
  }
  v20 = std___1___shared_weak_count_lock(v18);
  if (v20 == 0) {
    goto LABEL_21;
  }

LABEL_15:
  v21 = v19 == *a5;
  add = atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL);
  v23 = !v21;
  if (add == 0) {
    v24 = *(_QWORD*)v20;
    v43 = v20;
    (*(void (**)(void))(v24 + 16))();
    std___1___shared_weak_count___release_weak();
  }

LABEL_22:
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak();
    if (v23) {
    LABEL_25:
      v26 = *a5;
      v25 = a5[1];
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                  memory_order_relaxed);
      }
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak();
      }
      if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
        *(_DWORD*)(GameData_2203490 + 1204) |= 1u;
      }
      v38 = v26;
      v39 = v25;
      if (v25 != 0) {
        goto LABEL_32;
      }
      goto LABEL_33;
    }
  }
  else if (v23) {
    goto LABEL_25;
  }

LABEL_51:
  v25 = v14;
  v38 = v15;
  v39 = v14;
  if (v14 != 0) {
  LABEL_32:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
  }

LABEL_33:
  if (a3 > 2) {
    v27 = 3;
  }
  else {
    v27 = GameData_1b94450[a3];
  }
  v28 = a1 + 672 + (v27 << 7);
  v30 = *(_QWORD*)(v28 + 80);
  v29 = *(_QWORD*)(v28 + 88);
  v36 = v30;
  v37 = v29;
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                              memory_order_relaxed);
  }
  v34[0] = GameData_1fecc18;
  v34[1] = a1;
  v35 = v34;
  v34[2] = a6 == 0.0;
  GameRoutine_e80220(a1 + 16, &v38, &v36, a2, (__int64)v34, a6);
  if (v35 == v34) {
    v32 = 32;
    goto LABEL_42;
  }
  if (v35 != nullptr) {
    v32 = 40;
  LABEL_42:
    (*(void (**)(_QWORD*, __int64))(*v35 + v32))(v35, v31);
  }
  if (v37 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (v39 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (v25 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  return v7 & 1;
}

__int64 CmdbtlPartyNatives_e9c620(_QWORD* a1, char a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;

  v4 = GameData_212ea58;
  v5 = *GameData_212ea58;
  *(_DWORD*)(*GameData_212ea58 + 1204) |= 8u;
  v6 = (__int64*)a1[89];
  v7 = (__int64*)a1[90];
  if (v6 != v7) {
    do {
      v8 = *v6;
      v6 += 2;
      GameRoutine_e7c3f0(v8, 1, 256, 0.0);
    } while (v6 != v7);
    v5 = *v4;
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  *(_BYTE*)(*GameData_212f2e0 + 112) = 1;
  CmdbtlPartyNatives_e9cb40(v5, &v20);
  result = v22;
  if (v22 != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((a2 & 1) == 0) {
    v10 = (__int64*)a1[105];
    v11 = (__int64*)a1[106];
    while (v10 != v11) {
      v12 = *v10;
      *(_BYTE*)(v12 + 186) = 0;
      v13 = *(_QWORD*)(v12 + 216);
      if (v13 != 0) {
        v14 = *(__int64**)(v13 + 40);
        v15 = *((_DWORD*)v14 + 5);
        *((_DWORD*)v14 + 5) = v15 | 2;
        if (v15 != (v15 | 2)) {
          v16 = *v14;
          v17 = *(_QWORD*)(v16 + 8);
          if (v17 != 0) {
            v18 = *(_QWORD*)(v16 + 16);
            v19 = *(_QWORD*)(v17 + 8) == -1 || v18 == 0;
            if (!v19 && *(_QWORD*)(v17 + 8) != -1 &&
                (*(_BYTE*)(v16 + 61) & 1) == 0 && *(_DWORD*)(v16 + 64) != 1 &&
                (*(_BYTE*)(v18 + 342) & 1) != 0) {
              result = GameRoutine_1084940(v18, 0, 0.0);
              *(_BYTE*)(*(_QWORD*)(v18 + 8) + 289LL) = 0;
            }
          }
        }
      }
      v10 += 2;
    }
  }
  return result;
}

__int64 CmdbtlPartyNatives_e9cce0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* i;
  __int64 v4;
  __int64* v5;
  __int64* j;
  __int64 v7;
  __int64* v8;
  __int64* k;
  __int64 v10;
  __int64* v11;
  __int64* m;
  __int64 v13;

  v1 = *(__int64**)(result + 712);
  v2 = *(__int64**)(result + 720);
  for (i = (_QWORD*)result; v1 != v2; result = GameRoutine_e7cd60(v4)) {
    v4 = *v1;
    v1 += 2;
  }
  v5 = (__int64*)i[105];
  for (j = (__int64*)i[106]; v5 != j; result = GameRoutine_e7cd60(v7)) {
    v7 = *v5;
    v5 += 2;
  }
  v8 = (__int64*)i[121];
  for (k = (__int64*)i[122]; v8 != k; result = GameRoutine_e7cd60(v10)) {
    v10 = *v8;
    v8 += 2;
  }
  v11 = (__int64*)i[137];
  for (m = (__int64*)i[138]; v11 != m; result = GameRoutine_e7cd60(v13)) {
    v13 = *v11;
    v11 += 2;
  }
  return result;
}

unsigned __int64 CmdbtlPartyNatives_eb4500(__int64 a1)
{
  __int64 v1;
  unsigned __int64 result;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  char v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 16);
  }
  else {
    v1 = a1 + 1;
  }
  result = game_HashString(v1);
  if (result != 0) {
    v3 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = result;
        if (result >= v3) {
          v6 = result % v3;
        }
      }
      else {
        v6 = v5 & result;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v10 = v8[1];
              if (v10 == result) {
                if (v8[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v10 & v5) != v6) {
                return result;
              }
              v8 = (_QWORD*)*v8;
              if (v8 == nullptr) {
                return result;
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == result) {
              if (v8[2] == result) {
              LABEL_29:
                if (v8[3] != 0) {
                  v16 = v8[3];
                  v17 = 0;
                  v24 = 0;
                  v18 = 0;
                  v19 = 0;
                  v20 = 0;
                  v21 = 0;
                  v22 = 0;
                  v23 = 0;
                  v25 = 3;
                  v26 = 0;
                  v27 = 2;
                  v28 = 0;
                  if ((GameData_2216858 & 1) == 0) {
                    GameRoutine_8123d0();
                  }
                  result = CmdbtlPartyNatives_eb8a30(&GameData_2216780, &v16);
                  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v20 != 0) {
                    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
                    v21 = v20;
                    v13 = 128;
                    if (*(_QWORD*)(v12 + 200) == 0) {
                      v13 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(v12 + v13, v20);
                  }
                  if (v17 != 0) {
                    v14 = *v11;
                    v18 = v17;
                    v15 = 128;
                    if (*(_QWORD*)(v14 + 200) == 0) {
                      v15 = 56;
                    }
                    return nn_mem_StandardAllocator_Free(v14 + v15, v17);
                  }
                }
                return result;
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                return result;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 CmdbtlPartyNatives_eb7a80(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  bool v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;

  v1 = result;
  v2 = 16 * *(_DWORD*)(result + 72);
  if ((*(_BYTE*)(result + 76) & 1) != 0) {
    v16 = *(_QWORD*)result;
    result = game_UnitPool_Find_6ead60(&v16, &GameData_216772c);
    if (result != 0) {
      v3 = result;
      v4 = game_UnitPool_GetFirst(&GameData_216772c);
      if (v4 == 0) {
        goto LABEL_21;
      }
      v5 = *(_QWORD*)(v4 + 432);
      if (v5 == 0) {
        v5 = *(_QWORD*)(v4 + 440);
        if (v5 != 0) {
          v6 = *(unsigned __int8*)(v5 + 16);
          if (v6 <= 8) {
            while (1) {
              v15 = v6 + 1;
              if ((((unsigned int)GameData_216772c >> v6) & 2) != 0) {
                v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v6 + 1) + 556000);
                if (v5 != 0) {
                  break;
                }
              }
              v6 = v15;
              if (v15 == 9) {
                goto LABEL_7;
              }
            }
          }
          else {
          LABEL_7:
            v5 = 0;
          }
        }
      }
      if (v4 == v3) {
      LABEL_21:
        v14 = 0;
      }
      else {
        v7 = 0;
        do {
          v10 = v7;
          if (v5 == 0) {
            break;
          }
          v8 = *(_QWORD*)(v5 + 432);
          if (v8 == 0) {
            v11 = *(_QWORD*)(v5 + 440);
            if (v11 != 0 &&
                (unsigned int)(v12 = *(unsigned __int8*)(v11 + 16)) <= 8) {
              while (1) {
                v13 = v12 + 1;
                if ((((unsigned int)GameData_216772c >> v12) & 2) != 0) {
                  v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                  24LL * (unsigned __int8)(v12 + 1) + 556000);
                  if (v8 != 0) {
                    break;
                  }
                }
                v12 = v13;
                if (v13 == 9) {
                  goto LABEL_10;
                }
              }
            }
            else {
            LABEL_10:
              v8 = 0;
            }
          }
          v7 = v10 + 1;
          v9 = v5 == v3;
          v5 = v8;
        } while (!v9);
        v14 = ~v10;
      }
      result = game_UnitPool_CountAll(&GameData_216772c);
      v2 += v14 + result;
    }
  }
  *(_DWORD*)(v1 + 80) = v2;
  return result;
}

__int64 CmdbtlPartyNatives_eb8c40(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 72);
  v2 = *(_QWORD*)(a1 + 80);
  if (v1 != v2) {
    do {
      CmdbtlPartyNatives_eb7a80(v1);
      v1 += 88;
    } while (v1 != v2);
    v1 = *(_QWORD*)(a1 + 72);
    v2 = *(_QWORD*)(a1 + 80);
  }
  if (v2 - v1 < 1) {
    v7 = 0;
    return GameRoutine_ebabe0(v1, v2, 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3),
                              0, v7);
  }
  else {
    v4 = 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3);
    v5 = GameData_212c060;
    while (1) {
      v6 = GameRoutine_1a09d20(88 * v4, v5);
      if (v6 != 0) {
        break;
      }
      v7 = v4 >> 1;
      v8 = v4 > 1;
      v4 >>= 1;
      if (!v8) {
        return GameRoutine_ebabe0(
            v1, v2, 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3), 0, v7);
      }
    }
    v10 = v6;
    GameRoutine_ebabe0(v1, v2, 0x2E8BA2E8BA2E8BA3LL * ((v2 - v1) >> 3), v6, v4);
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
  }
}

_QWORD* CmdbtlPartyNatives_eba910(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *a2;
  a1[2] = 0;
  a1[3] = 0;
  v4 = a1;
  *a1 = v2;
  a1[1] = 0;
  v6 = a2[1];
  v5 = a2[2];
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v8 = v5 - v6;
  if (v5 != v6) {
    if (v8 < 0) {
      GameRoutine_6e5c60(a1);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v6, 16, 0);
    v10 = v9 + v8;
    v4[1] = v9;
    v4[2] = v9;
    v4[3] = v9 + v8;
    a1 = (_QWORD*)memcpy(v9, v6, v8);
    v4[2] = v10;
  }
  v4[5] = 0;
  v4[6] = 0;
  v4[4] = 0;
  v12 = a2[4];
  v11 = a2[5];
  v13 = v11 - v12;
  if (v11 != v12) {
    if (v13 < 0) {
      GameRoutine_705570(a1);
    }
    v14 = fw_memory_HeapManager_Allocate(*v7, v11 - v12, 16, 0);
    v15 = v14 + v13;
    v4[4] = v14;
    v4[5] = v14;
    v4[6] = v14 + v13;
    memcpy(v14, v12, v13);
    v4[5] = v15;
  }
  v16 = a2[7];
  v17 = a2[8];
  *((_DWORD*)v4 + 18) = *((_DWORD*)a2 + 18);
  v4[7] = v16;
  v4[8] = v17;
  *((_DWORD*)v4 + 19) = *((_DWORD*)a2 + 19);
  *((_DWORD*)v4 + 20) = *((_DWORD*)a2 + 20);
  return v4;
}

__int64* CmdbtlPartyNatives_ebaa20(__int64* result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v3 = (__int64*)*result;
  v2 = (__int64*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (__int64*)*result) {
    v7 = (__int64*)*result;
    v8 = a2[1] + *result - (_QWORD)v2;
    do {
      v9 = *v7;
      *(_QWORD*)(v8 + 16) = 0;
      *(_QWORD*)(v8 + 24) = 0;
      *(_QWORD*)v8 = v9;
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 8) = v7[1];
      *(_QWORD*)(v8 + 16) = v7[2];
      *(_QWORD*)(v8 + 24) = v7[3];
      v7[2] = 0;
      v7[3] = 0;
      v7[1] = 0;
      *(_QWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 32) = 0;
      *(_QWORD*)(v8 + 32) = v7[4];
      *(_QWORD*)(v8 + 40) = v7[5];
      *(_QWORD*)(v8 + 48) = v7[6];
      v7[5] = 0;
      v7[6] = 0;
      v7[4] = 0;
      v10 = v7[7];
      v11 = v7[8];
      *(_DWORD*)(v8 + 72) = *((_DWORD*)v7 + 18);
      *(_QWORD*)(v8 + 56) = v10;
      *(_QWORD*)(v8 + 64) = v11;
      *(_DWORD*)(v8 + 76) = *((_DWORD*)v7 + 19);
      LODWORD(v10) = *((_DWORD*)v7 + 20);
      v7 += 11;
      *(_DWORD*)(v8 + 80) = v10;
      v8 += 88;
    } while (v7 != v2);
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v13 = v3[4];
      if (v13 != 0) {
        v3[5] = v13;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, v13);
      }
      v15 = v3[1];
      if (v15 != 0) {
        v3[2] = v15;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v16, v15);
      }
      v3 += 11;
    } while (v3 != v2);
  }
  a2[1] = v6;
  v17 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v17;
  v18 = v5[1];
  v5[1] = a2[2];
  a2[2] = v18;
  v19 = v5[2];
  v5[2] = a2[3];
  a2[3] = v19;
  *a2 = a2[1];
  return result;
}

#pragma GCC visibility pop
