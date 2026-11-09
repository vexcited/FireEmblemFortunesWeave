#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cfa2a0(__int64 result, long double);
__int64 GameRoutine_d477c0(_QWORD, _QWORD);
__int64 GameRoutine_d4e840(_QWORD, _QWORD);
__int64 GameRoutine_edea70(_QWORD, float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_zview_CharacterController_StateActionBase_vtable[])();
extern __int64 (*game_zview_CharacterController_StateAttack_vtable[])();
extern __int64 GameData_21f3cb0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* StateAttack_d45080(_QWORD* result);
__int64 StateAttack_d45200(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4,
                           __int64 a5, __int64 a6);
__int64 StateAttack_d45e00(__int64 a1, _QWORD* a2);
__int64 StateAttack_d45f20(__int64 a1, __int64** a2);
__int64 StateAttack_Destructor(__int64 result);
_QWORD* Signal_d30dc0(__int64, __int64, __int64, int);
__int64 HitboxModule_d4e080(_QWORD, _QWORD, long double);
__int64 HubCharacterNatives_ceca80(_QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_cf66e0(_QWORD);
__int64 StateActionBase_Unknown5(void);
__int64 StateActionBase_d48970(_QWORD, float);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
extern __int64* GameData_212ee20[6];
__int64 StateAttack_d44c80(__int64 a1);

__int64 StateAttack_d44c80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  __int64 v19;
  __int64 v20;
  __int64 i;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v35;
  __int64 v36;
  char v37;
  char v38[15];
  __int64 v39;

  StateActionBase_Unknown5();
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL);
  v3 = *(_QWORD*)(v2 + 192);
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_BYTE*)(a1 + 384);
  *(_DWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 400);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  v8 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  v9 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 8LL);
  if (v9 != 0) {
    *(_BYTE*)(*(_QWORD*)(v9 + 336) + 68LL) = 0;
  }
  StateActionBase_d48970(a1, 0.1);
  StateAttack_d45080(a1);
  v10 = HubCharacterNatives_cf66e0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL));
  if (v10 != 0) {
    v11 = *(__int64**)(a1 + 256);
    v12 = *(__int64**)(a1 + 264);
    if (v11 != v12) {
      v13 = v10;
      v14 = GameData_212ee20[0];
      do {
        v15 = *v11;
        v16 = v11[1];
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                    memory_order_relaxed);
          v36 = v16;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                    memory_order_relaxed);
        }
        else {
          v36 = 0;
        }
        v17 = *v14;
        v35 = v15;
        *(__n128*)&v18 = nn_os_LockMutex(v17 + 48);
        HitboxModule_d4e080(v13 + 24, &v35, v18);
        nn_os_UnlockMutex(v17 + 48);
        v19 = v36;
        if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
          if (v16 != 0) {
          LABEL_24:
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              std___1___shared_weak_count___release_weak(v16);
            }
          }
        }
        else if (v16 != 0) {
          goto LABEL_24;
        }
        v11 += 2;
      } while (v11 != v12);
    }
  }
  v20 = *(_QWORD*)(a1 + 256);
  for (i = *(_QWORD*)(a1 + 264); i != v20; i -= 16) {
    v22 = *(_QWORD*)(i - 8);
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
  v23 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 264) = v20;
  v24 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v23 + 8) + 8LL) + 232LL);
  if (v24 != 0) {
    v25 = *(_QWORD*)(v24 + 320);
    v26 = *(_DWORD*)(a1 + 408);
    v37 = 20;
    strcpy(v38, "Signal_Hit");
    Signal_d30dc0(v25, (__int64)v38, 10, v26);
    if ((v37 & 1) != 0 && v39 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v39);
    }
    v28 = *(_DWORD*)(a1 + 412);
    v37 = 24;
    strcpy(v38, "Signal_Shoot");
    Signal_d30dc0(v25, (__int64)v38, 12, v28);
    if ((v37 & 1) != 0 && v39 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v39);
    }
    v23 = *(_QWORD*)(a1 + 8);
  }
  if ((*(_BYTE*)(a1 + 348) & 1) == 0) {
    v30 = *(_QWORD*)(*(_QWORD*)(v23 + 8) + 32LL);
    if (v30 != 0) {
      v31 = *(unsigned __int8*)(a1 + 160);
      if ((v31 & 1) != 0) {
        v32 = *(_QWORD*)(a1 + 168);
      }
      else {
        v32 = v31 >> 1;
      }
      if ((v31 & 1) != 0) {
        v33 = *(_QWORD*)(a1 + 176);
      }
      else {
        v33 = a1 + 161;
      }
      GameRoutine_60a060(v30 + 360, v33, v32);
      *(_DWORD*)(v30 + 356) = *(_DWORD*)(v30 + 352);
      v23 = *(_QWORD*)(a1 + 8);
    }
  }
  return HubCharacterNatives_ceca80(*(_QWORD*)(v23 + 8), 0x8000000000LL, 0);
}

_QWORD* StateAttack_d45080(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
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
  __int64 v14;

  v1 = result;
  if (result[39] != 0) {
    v2 = result[40];
    v3 = *(_QWORD*)(result[1] + 456LL);
    v13 = result[39];
    v14 = v2;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
    }
    result = (_QWORD*)GameRoutine_d477c0(v3 + 8, &v13);
    v4 = v14;
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
    }
    v5 = v1[40];
    v1[39] = 0;
    v1[40] = 0;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v5);
    }
  }
  if (v1[37] != 0) {
    v6 = v1[38];
    v7 = *(_QWORD*)(v1[1] + 456LL);
    v11 = v1[37];
    v12 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    result = (_QWORD*)GameRoutine_d477c0(v7 + 8, &v11);
    v8 = v12;
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v8);
    }
    v9 = v1[38];
    v1[37] = 0;
    v1[38] = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
    }
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1[1] + 8LL) + 8LL) + 344LL);
  if (*(_QWORD*)(v10 + 352) == v1[3]) {
    *(_DWORD*)(v10 + 340) = 0;
  }
  return result;
}

__int64 StateAttack_d45200(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4,
                           __int64 a5, __int64 a6)
{
  __int128 v8;
  __int64 result;
  __int64 v10;
  long double v11;

  *(_QWORD*)(a1 + 88) = a5;
  if (*(unsigned __int8*)(a1 + 112) == *(unsigned __int8*)(a6 + 16)) {
    if (*(_BYTE*)(a1 + 112) != 0) {
      *(_DWORD*)(a1 + 96) = *(_DWORD*)a6;
      *(_DWORD*)(a1 + 100) = *(_DWORD*)(a6 + 4);
      v8 = *(_OWORD*)(a1 + 96);
      *((_QWORD*)&v8 + 1) = *(unsigned int*)(a6 + 8);
      *(_OWORD*)(a1 + 96) = v8;
    }
  }
  else if (*(_BYTE*)(a1 + 112) != 0) {
    *(_BYTE*)(a1 + 112) = 0;
  }
  else {
    *(_QWORD*)(a1 + 104) = *(_QWORD*)(a6 + 8);
    *(_QWORD*)(a1 + 96) = *(_QWORD*)a6;
    *(_BYTE*)(a1 + 112) = 1;
  }
  result = GameRoutine_60a060(a1 + 128, a2, a3);
  v10 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 152) = *a4;
  LODWORD(v11) = a4[1];
  *(_DWORD*)(a1 + 156) = LODWORD(v11);
  if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
    *(_DWORD*)(v10 + 32) = 4;
    *(_BYTE*)(v10 + 36) = 1;
    if ((*(_BYTE*)(v10 + 112) & 1) == 0 && (*(_BYTE*)(v10 + 113) & 1) != 0) {
      return GameRoutine_cfa2a0(v10 + 16, v11);
    }
  }
  return result;
}

__int64 StateAttack_d45e00(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];

  v2 = (_QWORD*)*a2;
  v4 = *(_QWORD*)(*a2 + 8LL);
  if (v4 == 0) {
    return 0;
  }
  v6 = std___1___shared_weak_count_lock(v4);
  if (v6 == 0) {
    return 0;
  }
  if (*v2 == 0 ||
      (v7 = *(__int64**)(a1 + 256), v8 = *(__int64**)(a1 + 264), v7 == v8)) {
  LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  while (1) {
    v9 = *v7;
    v7 += 2;
    if (v9 == *v2) {
      break;
    }
    if (v7 == v8) {
      goto LABEL_7;
    }
  }
  v13 = a2[1];
  v14 = v6;
  v15[0] = *a2;
  v15[1] = v13;
  if (v13 != 0) {
    v10 = 1;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    StateAttack_d45f20(a1, v15);
    v6 = v14;
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_8;
    }
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  else {
    StateAttack_d45f20(a1, v15);
  }
  v10 = 1;
  v6 = v14;

LABEL_8:
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v11);
  }
  return v10;
}

__int64 StateAttack_d45f20(__int64 a1, __int64** a2)
{
  char v2;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 result;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _WORD v22[8];
  __int64 v23;
  __int16 v24;
  __int64 v25;
  int v26;
  char v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[2];
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  *(_DWORD*)(a1 + 344) = 0;
  *(_BYTE*)(a1 + 348) = 1;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 32LL);
  v6 = *(unsigned __int8*)(a1 + 160);
  if ((v6 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 168);
  }
  else {
    v7 = v6 >> 1;
  }
  if ((v6 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 176);
  }
  else {
    v8 = a1 + 161;
  }
  result = GameRoutine_60a060(v5 + 360, v8, v7);
  v10 = *(_DWORD*)(v5 + 352);
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v30 = 0;
  v31 = 0;
  v29 = 1065353216;
  memset(v32, 0, 13);
  v22[0] = 0;
  *(_DWORD*)(v5 + 356) = v10;
  v11 = *a2;
  v12 = (*a2)[1];
  if (v12 == 0) {
    goto LABEL_19;
  }
  v13 = *v11;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v14 = std___1___shared_weak_count_lock(v12);
  if (v14 == 0) {
    goto LABEL_18;
  }
  v15 = v14;
  if (v13 != 0) {
    v2 = GameRoutine_d4e840(v13, v22);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != 0) {
      goto LABEL_13;
    }
  LABEL_18:
    result = std___1___shared_weak_count___release_weak(v12);
    goto LABEL_19;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  std___1___shared_weak_count___release_weak(v15);
  if (v13 == 0) {
    goto LABEL_18;
  }

LABEL_13:
  result = std___1___shared_weak_count___release_weak(v12);
  if ((v2 & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 8);
    v17 = v32[1];
    if (*(float*)(v16 + 820) >= *(float*)&v32[1]) {
      v17 = *(_DWORD*)(v16 + 820);
    }
    *(_DWORD*)(v16 + 820) = v17;
  }

LABEL_19:
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (v18 == 0 ||
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v18 + 16) + 8LL) + 387LL) & 0x40) != 0) {
    result =
        GameRoutine_edea70(*(_QWORD*)(GameData_21f3cb0 + 912), 0.048, 0.08);
  }
  if ((v34 & 1) != 0 && v36 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v36);
  }
  if ((v24 & 1) != 0 && v25 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v25);
  }
  if ((v22[0] & 1) != 0 && v23 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v23);
  }
  return result;
}

__int64 StateAttack_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v1 = result;
  *(_QWORD*)result = game_zview_CharacterController_StateAttack_vtable;
  if ((*(_BYTE*)(result + 384) & 1) != 0) {
    v2 = *(_QWORD*)(result + 400);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD*)(v1 + 336);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(v1 + 320);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(v1 + 304);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(v1 + 288);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(v1 + 256);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v1 + 264);
    if (v8 == v9) {
      goto LABEL_26;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v11 = *(_QWORD*)(v1 + 256);
    *(_QWORD*)(v1 + 264) = v8;
    v8 = v11;
    if (v11 != 0) {
    LABEL_26:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v8);
    }
  }
  if ((*(_BYTE*)(v1 + 184) & 1) != 0) {
    v13 = *(_QWORD*)(v1 + 200);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
  if ((*(_BYTE*)(v1 + 160) & 1) != 0) {
    v15 = *(_QWORD*)(v1 + 176);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
  if ((*(_BYTE*)(v1 + 128) & 1) != 0) {
    v17 = *(_QWORD*)(v1 + 144);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
    }
  }
  v19 = *(_QWORD*)(v1 + 56);
  *(_QWORD*)v1 = game_zview_CharacterController_StateActionBase_vtable;
  if (v19 != 0) {
    *(_QWORD*)(v1 + 64) = v19;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
  }
  v21 = *(_QWORD*)(v1 + 48);
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    return std___1___shared_weak_count___release_weak(v21);
  }
  return result;
}

#pragma GCC visibility pop
