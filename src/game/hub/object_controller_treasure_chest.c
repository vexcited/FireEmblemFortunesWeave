#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_ObjectControllerTreasureChest_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ObjectControllerTreasureChest_Destructor(_QWORD* result);
__int64 ObjectControllerTreasureChest_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_d9b810(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13339e0(_QWORD);
__int64 GameRoutine_989ea0(_QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d523c0(_QWORD);
__int64 GameRoutine_dbc2c0(_QWORD*, __int64);
__int64 HubCharacterNatives_cba040(_QWORD, _QWORD);
__int64 HubObjectNatives_dfcc60(__int64, __int64, __int64);
__int64 Object_df9f60(_QWORD*);
__int64 ProcHubSeqEnter_918ce0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD, long double, long double);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1acf9d4;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fe2820[7])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21f61c0;
extern __int64 GameData_22127a8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d458[7];
_QWORD*
game_hub_ObjectControllerTreasureChest_InitializeImpl_lambda0_Invoke_alt1(
    __int64 a1) __asm__("game_hub_ObjectControllerTreasureChest_InitializeImpl_"
                        "lambda0_Invoke");
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__int64*
HubCharacterNatives_cba040_alt1(__int64,
                                __int64*) __asm__("HubCharacterNatives_cba040");
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 GameRoutine_989ea0_alt1(__int64 result, int,
                                __int64) __asm__("GameRoutine_989ea0");
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 ProcHubSeqEnter_918ce0_alt1(__int64*,
                                    __int64) __asm__("ProcHubSeqEnter_918ce0");
__int64 SpotMgr_13339e0();
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_d523c0(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void HubObjectNatives_dfcc60_alt1(__int64, __int64, unsigned __int64) __asm__(
    "HubObjectNatives_dfcc60");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_hub_ObjectControllerTreasureChest_InitializeImpl_lambda0_Invoke(
    __int64 a1);

_QWORD* ObjectControllerTreasureChest_Destructor(_QWORD* result)
{
  _DWORD* v1;
  _QWORD* v2;
  __int64 v3;

  *result = game_hub_ObjectControllerTreasureChest_vtable;
  v1 = (_DWORD*)result[3];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v2 = result;
    GameRoutine_14a1520(result + 3, 1);
    result = v2;
  }
  v3 = result[4];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 ObjectControllerTreasureChest_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_hub_ObjectControllerTreasureChest_vtable;
  v4 = (_QWORD*)a1[3];
  v2 = a1 + 3;
  v3 = v4;
  v5 = *v4;
  if (*v4 != 0 && *(_DWORD*)(v5 + 16) == *((_DWORD*)v3 + 2)) {
    GameRoutine_14a1520(v2, 1);
  }
  v6 = a1[4];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v7);
}

void game_hub_ObjectControllerTreasureChest_InitializeImpl_lambda0_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int128* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  void* v28;
  __int64 v29;
  _QWORD* v30;
  int v31;
  unsigned __int64 v32;
  void* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    __int64 v46;
    void* v47;
    __int64 v48;
  } v46_;
  struct {
    __int64 v49;
    void* v50;
    __int64 v51;
    int v52;
  } v49_;
  struct {
    __int64 v53;
    unsigned __int64 v54;
    unsigned __int64 v55;
  } v53_;
  __int64 v56[2];
  char v57;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameRoutine_dbc2c0(*(_QWORD**)GameData_212c6a0[0], *(_QWORD*)(v1 + 8));
  if (v2 == 0 || *(_DWORD*)(v2 + 12) != 0) {
    return;
  }
  v3 = v2;
  GameRoutine_14a1520_alt1((__int64*)(v1 + 24), 1);
  HubObjectNatives_dfcc60_alt1(*(_QWORD*)(v1 + 8), (__int64)"Done", 4u);
  v4 = *(_QWORD**)(v1 + 8);
  if (v4[102] != 0) {
    v6 = *(_QWORD*)(v4[100] + 8LL);
    v5 = *(_QWORD*)(v4[100] + 16LL);
    if (v5 != v6) {
      while (1) {
        v7 = *(_QWORD*)(v6 + 8);
        if (*(_DWORD*)(v7 + 284) == 2) {
          break;
        }
        v6 += 32;
        if (v6 == v5) {
          goto LABEL_9;
        }
      }
      GameRoutine_989ea0_alt1(v4[102], 1, v7);
      v4 = *(_QWORD**)(v1 + 8);
    }
  }
LABEL_9:
  Object_df9f60(v4);
  v8 = GameData_212d458[0];
  v9 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v9 != 0) {
    v10 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v11 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v12 = std___1___shared_weak_count_lock_alt1(v11);
    std___1___shared_weak_count___release_weak_alt1(v9);
    if (v12 == 0 || v10 == 0) {
      if (v12 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v14 = *(_QWORD*)(v1 + 8);
      if ((*(_BYTE*)(v14 + 976) & 1) != 0) {
        v15 = (__int128*)(v14 + 960);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0) {
        v15 = &GameData_21a6120;
      }
      else {
        v15 = &GameData_21a6120;
        if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
          v45 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v45;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130);
        }
      }
      v16 = *(_QWORD*)(*(_QWORD*)(v10 + 24) + 24LL);
      *(_BYTE*)(v16 + 25) = 0;
      *(_QWORD*)(v16 + 32) = 0;
      *(_QWORD*)(v16 + 37) = 0;
      *(_BYTE*)(v16 + 48) = 0;
      *(_BYTE*)(v16 + 64) = 0;
      *(_QWORD*)(v16 + 80) = 0;
      *(_BYTE*)(v16 + 96) = 1;
      *(_DWORD*)(v16 + 32) = 1086918608;
      *(_QWORD*)(v16 + 56) = *((_QWORD*)v15 + 1);
      v17 = *(_QWORD*)v15;
      *(_BYTE*)(v16 + 64) = 1;
      *(_QWORD*)(v16 + 48) = v17;
      game_d523c0(*(_QWORD*)(*(_QWORD*)(v16 + 16) + 488LL));
      v18 = *v8;
      v56[0] = v10;
      v56[1] = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      HubCharacterNatives_cba040_alt1(v18, v56);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
LABEL_24:
  v53_.v54 = 0;
  v53_.v55 = 0;
  v53_.v53 = 0;
  v49_.v49 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 72LL);
  v49_.v52 = 1;
  v53_.v54 = ProcHubSeqEnter_918ce0_alt1(&v53_.v53, (__int64)&v49_.v49);
  if (v49_.v52 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fe2820[v49_.v52])(&v46_.v46,
                                                               &v49_.v49);
  }
  v19 = *(__int64**)(*(_QWORD*)(v1 + 8) + 224LL);
  v20 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 232LL) - (_QWORD)v19;
  if (v20 != 0) {
    if (0xAAAAAAAAAAAAAAABLL * (v20 >> 3) > 1 &&
        game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      if ((v19[3] & 1) == 0) {
        v21 = v19[4];
        v46_.v46 = v19[3];
        v46_.v47 = (void*)v21;
        v46_.v48 = v19[5];
        goto LABEL_37;
      }
      v26 = v19[4];
      v25 = v19[5];
    }
    else {
      if ((*(_BYTE*)v19 & 1) == 0) {
        v22 = *v19;
        v23 = v19[1];
        v24 = v19[2];
        v46_.v47 = (void*)v23;
        v46_.v48 = v24;
        v46_.v46 = v22;
        goto LABEL_37;
      }
      v26 = v19[1];
      v25 = v19[2];
    }
    fw_text_String_CopyTerminated_alt1(&v46_.v46, v25, v26);
  }
  else {
    LOWORD(v46_.v46) = 0;
  }
LABEL_37:
  v27 = v46_.v46;
  v28 = v46_.v47;
  v46_.v46 = 0;
  v46_.v47 = nullptr;
  v49_.v49 = v27;
  v49_.v50 = v28;
  v29 = v46_.v48;
  v30 = (_QWORD*)v53_.v54;
  v46_.v48 = 0;
  v49_.v51 = v29;
  v31 = 4;
  v49_.v52 = 4;
  if (v53_.v54 >= v53_.v55) {
    v35 = ProcHubSeqEnter_918ce0_alt1(&v53_.v53, (__int64)&v49_.v49);
    v31 = v49_.v52;
    v53_.v54 = v35;
    if (v49_.v52 == -1) {
      goto LABEL_41;
    }
  }
  else {
    v32 = v49_.v49;
    v33 = v49_.v50;
    v34 = v49_.v51;
    *(_DWORD*)(v53_.v54 + 24) = 4;
    v30[1] = v33;
    v30[2] = v34;
    *v30 = v32;
    v49_.v50 = nullptr;
    v49_.v51 = 0;
    v49_.v49 = 0;
    v53_.v54 = (unsigned __int64)(v30 + 4);
  }
  ((void (*)(char*, __int64*))GameData_1fe2820[v31])(&v57, &v49_.v49);
LABEL_41:
  v49_.v52 = -1;
  if ((v46_.v46 & 1) != 0 && v46_.v48 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v46_.v48);
  }
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v37 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v37 = 0;
  }
  if (GameData_22127a8 != 0) {
    v38 = GameData_22127a8;
  }
  else {
    v38 = v37;
  }
  Manager_d9b810((void*)((__int64)&v49_.v49), v38,
                 (__int64)"ItemGainWaitObjAnim", 19, (__int64)&v53_.v53, 0);
  *(_DWORD*)(v3 + 12) = 1;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v39 = SpotMgr_13339e0();
    v49_.v50 = &GameData_1acf9d4;
    v49_.v49 = game_HashString_alt1((__int64)&GameData_1acf9d4);
    GameRoutine_9b11a0_alt1(&GameData_21f61c0, (unsigned __int64*)&v49_.v49,
                            v39);
  }
  v40 = v53_.v53;
  if (v53_.v53 != 0) {
    v41 = v53_.v54;
    if (v53_.v53 == v53_.v54) {
      goto LABEL_62;
    }
    do {
      v42 = *(unsigned int*)(v41 - 8);
      v43 = v41 - 32;
      if ((_DWORD)v42 != -1) {
        ((void (*)(__int64*, unsigned __int64))GameData_1fe2820[v42])(&v49_.v49,
                                                                      v41 - 32);
      }
      *(_DWORD*)(v41 - 8) = -1;
      v41 -= 32LL;
    } while (v43 != v40);
    v53_.v54 = v40;
    v40 = v53_.v53;
    if (v53_.v53 != 0) {
    LABEL_62:
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v40);
    }
  }
}

#pragma GCC visibility pop
