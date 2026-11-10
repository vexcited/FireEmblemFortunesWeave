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
_QWORD* game_hub_ObjectControllerTreasureChest_InitializeImpl_lambda0_Invoke(
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

_QWORD*

game_hub_ObjectControllerTreasureChest_InitializeImpl_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  long double v13;
  __int64 v15;
  __int128* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  void* v22;
  __int64 v23;
  void* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  void* v29;
  __int64 v30;
  _QWORD* v31;
  int v32;
  __int64 v33;
  void* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  void* v48;
  __int64 v49;
  __int64 v50;
  void* v51;
  __int64 v52;
  int v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD v57[2];
  char v58;

  v1 = *(_QWORD*)(a1 + 8);
  result = (_QWORD*)GameRoutine_dbc2c0(*(_QWORD**)GameData_212c6a0[0],
                                       *(_QWORD*)(v1 + 8));
  if (result == nullptr || *((_DWORD*)result + 3) != 0) {
    return result;
  }
  v3 = result;
  GameRoutine_14a1520(v1 + 24, 1);
  HubObjectNatives_dfcc60(*(_QWORD*)(v1 + 8), (__int64)"Done", 4);
  v4 = *(_QWORD**)(v1 + 8);
  if (v4[102] != 0) {
    v6 = *(_QWORD*)(v4[100] + 8LL);
    v5 = *(_QWORD*)(v4[100] + 16LL);
    if (v5 != v6) {
      while (*(_DWORD*)(*(_QWORD*)(v6 + 8) + 284LL) != 2) {
        v6 += 32;
        if (v6 == v5) {
          goto LABEL_9;
        }
      }
      GameRoutine_989ea0(v4[102], 1);
      v4 = *(_QWORD**)(v1 + 8);
    }
  }
LABEL_9:
  Object_df9f60(v4);
  v7 = GameData_212d458[0];
  v8 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v8 != 0) {
    v9 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v10 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v11 = std___1___shared_weak_count_lock(v10);
    std___1___shared_weak_count___release_weak(v8);
    if (v11 == 0 || v9 == 0) {
      if (v11 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v15 = *(_QWORD*)(v1 + 8);
      if ((*(_BYTE*)(v15 + 976) & 1) != 0) {
        v16 = (__int128*)(v15 + 960);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0) {
        v16 = &GameData_21a6120;
      }
      else {
        v16 = &GameData_21a6120;
        if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130, v12, v13) !=
            0) {
          v46 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v46;
          __cxa_guard_release(&GameData_21a6130);
        }
      }
      v17 = *(_QWORD*)(*(_QWORD*)(v9 + 24) + 24LL);
      *(_BYTE*)(v17 + 25) = 0;
      *(_QWORD*)(v17 + 32) = 0;
      *(_QWORD*)(v17 + 37) = 0;
      *(_BYTE*)(v17 + 48) = 0;
      *(_BYTE*)(v17 + 64) = 0;
      *(_QWORD*)(v17 + 80) = 0;
      *(_BYTE*)(v17 + 96) = 1;
      *(_DWORD*)(v17 + 32) = 1086918608;
      *(_QWORD*)(v17 + 56) = *((_QWORD*)v16 + 1);
      v18 = *(_QWORD*)v16;
      *(_BYTE*)(v17 + 64) = 1;
      *(_QWORD*)(v17 + 48) = v18;
      GameRoutine_d523c0(*(_QWORD*)(*(_QWORD*)(v17 + 16) + 488LL));
      v19 = *v7;
      v57[0] = v9;
      v57[1] = v11;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
      HubCharacterNatives_cba040(v19, v57);
      std___1___shared_weak_count___release_weak(v11);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
LABEL_24:
  v55 = 0;
  v56 = 0;
  v54 = 0;
  v50 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 72LL);
  v53 = 1;
  v55 = ProcHubSeqEnter_918ce0(&v54, &v50);
  if (v53 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fe2820[v53])(&v47, &v50);
  }
  v20 = *(__int64**)(*(_QWORD*)(v1 + 8) + 224LL);
  v21 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 232LL) - (_QWORD)v20;
  if (v21 != 0) {
    if (0xAAAAAAAAAAAAAAABLL * (v21 >> 3) > 1 &&
        game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      if ((v20[3] & 1) == 0) {
        v22 = (void*)v20[4];
        v47 = v20[3];
        v48 = v22;
        v49 = v20[5];
        goto LABEL_37;
      }
      v27 = v20[4];
      v26 = v20[5];
    }
    else {
      if ((*(_BYTE*)v20 & 1) == 0) {
        v23 = *v20;
        v24 = (void*)v20[1];
        v25 = v20[2];
        v48 = v24;
        v49 = v25;
        v47 = v23;
        goto LABEL_37;
      }
      v27 = v20[1];
      v26 = v20[2];
    }
    fw_text_String_CopyTerminated(&v47, v26, v27);
  }
  else {
    LOWORD(v47) = 0;
  }
LABEL_37:
  v28 = v47;
  v29 = v48;
  v47 = 0;
  v48 = nullptr;
  v50 = v28;
  v51 = v29;
  v30 = v49;
  v31 = (_QWORD*)v55;
  v49 = 0;
  v52 = v30;
  v32 = 4;
  v53 = 4;
  if (v55 >= v56) {
    v36 = ProcHubSeqEnter_918ce0(&v54, &v50);
    v32 = v53;
    v55 = v36;
    if (v53 == -1) {
      goto LABEL_41;
    }
  }
  else {
    v33 = v50;
    v34 = v51;
    v35 = v52;
    *(_DWORD*)(v55 + 24) = 4;
    v31[1] = v34;
    v31[2] = v35;
    *v31 = v33;
    v51 = nullptr;
    v52 = 0;
    v50 = 0;
    v55 = (unsigned __int64)(v31 + 4);
  }
  ((void (*)(char*, __int64*))GameData_1fe2820[v32])(&v58, &v50);
LABEL_41:
  v53 = -1;
  if ((v47 & 1) != 0 && v49 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37);
  }
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v38 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v38 = 0;
  }
  if (GameData_22127a8 != 0) {
    v39 = GameData_22127a8;
  }
  else {
    v39 = v38;
  }
  result = X8CALL_X0(
      _QWORD*,
      GameRoutine_d9b810((void*)&v50, v39, "ItemGainWaitObjAnim", 19, &v54, 0));
  *((_DWORD*)v3 + 3) = 1;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v40 = GameRoutine_13339e0(result);
    v51 = &GameData_1acf9d4;
    v50 = game_HashString(&GameData_1acf9d4);
    result = (_QWORD*)GameRoutine_9b11a0(&GameData_21f61c0, &v50, v40);
  }
  v41 = v54;
  if (v54 != 0) {
    v42 = v55;
    if (v54 == v55) {
      goto LABEL_62;
    }
    do {
      v43 = *(unsigned int*)(v42 - 8);
      v44 = v42 - 32;
      if ((_DWORD)v43 != -1) {
        result = (_QWORD*)((__int64 (*)(
            __int64*, unsigned __int64))GameData_1fe2820[v43])(&v50, v42 - 32);
      }
      *(_DWORD*)(v42 - 8) = -1;
      v42 -= 32LL;
    } while (v44 != v41);
    v55 = v41;
    if (v54 != 0) {
    LABEL_62:
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
    }
  }
  return result;
}

#pragma GCC visibility pop
