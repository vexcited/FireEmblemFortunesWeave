#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_62bec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ccbf80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_212c350;
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*game_hub_Locator_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb98[10];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
__int64 Locator_Destructor_alt1(__int64 a1) __asm__("Locator_Destructor");
__attribute__((swiftcall)) void GameRoutine_d9b810(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d9af70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d9bc80(_QWORD, _QWORD, _QWORD);
__int64 HandlePtr_cb3600(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_cb3e60(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fe1aa8[14])();
extern __int64 (*HandlePtr_Unknown21_cb39c0_ptr[7])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_22127a8;
__int64 Locator_df7860_alt1(__int64 result, unsigned __int8* a2,
                            __int64 a3) __asm__("Locator_df7860");
__int64 Locator_df7d00(__int64 result);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8, char*);
__int64 EventManager_cbc720(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ff5c20(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int128 GameData_1a83850;
extern __int64 (*GameData_1fe1b28[])();
extern __int64* GameData_212ebe0;
extern __int64 GameData_212dc68;
__int64 game_hub_Locator_GetRegisterPos(__int64 a1, _QWORD* a2, _DWORD* a3);
float32x4_t game_hub_Locator_GetRegisterPos_lambda0_Invoke(__int64 a1,
                                                           __int64* a2,
                                                           float32x4_t result);
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__int64* HandlePtr_cb3600_alt1(__int64* result, __int64, __int64,
                               unsigned __int64) __asm__("HandlePtr_cb3600");
__int64
HubCharacterNatives_cb3e60_alt1(__int64*,
                                __int64) __asm__("HubCharacterNatives_cb3e60");
bool Manager_d9af70(__int64, __int64, __int64, __int64, unsigned int);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_d9bc80_alt1(__int64, __int64,
                             __int64*) __asm__("GameRoutine_d9bc80");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Locator_df7860(_QWORD* a1, unsigned __int8* a2, __int64* a3);
__int64 GameHr_cb3e60(__int64*, __int64);
__int64 GameRoutine_62bec0_alt1(__int64 result, __int64,
                                unsigned __int8) __asm__("GameRoutine_62bec0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void HubNatives_ccbf80(__int64);
void Locator_Destructor(__int64 a1);

void Locator_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char* v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char v9;
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
  __int64 v22;
  __int64 v23;
  _QWORD* v24;

  v1 = *(_QWORD*)(a1 + 640);
  v2 = *(_QWORD*)(a1 + 648);
  *(_QWORD*)a1 = game_hub_Locator_vtable;
  if (v1 != v2) {
    v4 = (char*)as_g_context_slots_ptr;
    v5 = as_g_script_manager_ptr;
    do {
      v6 = *(unsigned int*)(v1 + 8);
      if ((_DWORD)v6 != 0x2000) {
        v7 = &v4[16 * v6];
        v8 = *((_QWORD*)v7 + 1);
        if (v8 != 0 && *(_QWORD*)v7 == *(_QWORD*)v1 &&
            *(_DWORD*)(v8 + 52) == 1) {
          GameRoutine_62bec0_alt1(*v5, v1, 1u);
        }
      }
      v1 += 24;
    } while (v1 != v2);
    v1 = *(_QWORD*)(a1 + 640);
  }
  v9 = *(_BYTE*)(a1 + 704);
  *(_QWORD*)(a1 + 648) = v1;
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 720);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  v12 = *(_QWORD*)(a1 + 696);
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v12);
  }
  v13 = *(_QWORD*)(a1 + 664);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 672);
    if (v13 == v14) {
      goto LABEL_25;
    }
    do {
      v15 = *(_QWORD*)(v14 - 8);
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt2(v15);
      }
      v14 -= 16;
    } while (v14 != v13);
    v16 = *(_QWORD*)(a1 + 664);
    *(_QWORD*)(a1 + 672) = v13;
    v13 = v16;
    if (v16 != 0) {
    LABEL_25:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v13);
    }
  }
  v18 = *(_QWORD*)(a1 + 640);
  if (v18 != 0) {
    *(_QWORD*)(a1 + 648) = v18;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
  }
  if ((*(_BYTE*)(a1 + 616) & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 632);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
    }
  }
  HubNatives_ccbf80(a1 + 24);
  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  v22 = *(unsigned int*)(a1 + 8);
  v23 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v23 != 0x4000) {
    v24 = (_QWORD*)(util_g_handle_slots_ptr[0][v22] + 16 * v23);
    if (*v24 != 0 && v24[1] == a1) {
      *v24 = 0;
      v24[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --*(_DWORD*)(GameData_212c350 + 4 * v22);
}

void Locator_df7860(_QWORD* a1, unsigned __int8* a2, __int64* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (*v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  const char* v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  char* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  struct {
    __int64 v52;
    unsigned int v53;
  } v52_;
  struct {
    __int64 v54;
    unsigned int v55;
    char gap36_[4];
    __int64 v56;
    int v57;
  } v54_;
  struct {
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v58_;

  v3 = *a2;
  if ((v3 & 1) != 0) {
    v4 = *((_QWORD*)a2 + 1);
  }
  else {
    v4 = v3 >> 1;
  }
  if (v4 == 0) {
    return;
  }
  v5 = a1[10];
  v58_.v59 = 0;
  v58_.v60 = 0;
  v58_.v58 = 0;
  v54_.v54 = v5;
  v54_.v57 = 1;
  HandlePtr_cb3600_alt1(&v58_.v58, (__int64)&v54_.v54, (__int64)&v58_.v58, 1u);
  if (v54_.v57 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fe1aa8[v54_.v57])(&v52_.v52,
                                                               &v54_.v54);
  }
  v9 = (__int64*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v10 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v10 = 0;
  }
  if (GameData_22127a8 != 0) {
    v11 = GameData_22127a8;
  }
  else {
    v11 = v10;
  }
  GameRoutine_d9bc80_alt1(v11, (__int64)&v58_.v58, a3);
  v12 = *v9;
  v54_.v54 = 0;
  if (v12 != 0) {
    v13 = v12 + 248;
  }
  else {
    v13 = 0;
  }
  if (GameData_22127a8 != 0) {
    v14 = GameData_22127a8;
  }
  else {
    v14 = v13;
  }
  if ((*a2 & 1) != 0) {
    v15 = *((const char**)a2 + 2);
  }
  else {
    v15 = (const char*)(a2 + 1);
  }
  v16 = strlen_alt1(v15);
  if (Manager_d9af70(v14, (__int64)v15, v16, (__int64)&v58_.v58, 4u)) {
    if (*v9 != 0) {
      v17 = *v9 + 248;
    }
    else {
      v17 = 0;
    }
    if (GameData_22127a8 != 0) {
      v18 = GameData_22127a8;
    }
    else {
      v18 = v17;
    }
    if ((*a2 & 1) != 0) {
      v19 = *((const char**)a2 + 2);
    }
    else {
      v19 = (const char*)(a2 + 1);
    }
    v20 = strlen_alt1(v19);
    Manager_d9b810((void*)((__int64)&v52_.v52), v18, (__int64)v19, v20,
                   (__int64)&v58_.v58, 4u);
    v21 = v52_.v52;
    v22 = v52_.v53;
    v54_.v54 = v52_.v52;
    v54_.v55 = v52_.v53;
    if (v52_.v53 == 0x2000) {
      v54_.v56 = 0;
    }
    else {
      v37 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v52_.v53);
      v38 = v37[1];
      if (v38 != 0 && *v37 != v52_.v52) {
        v38 = 0;
      }
      v54_.v56 = v38;
    }
    goto LABEL_67;
  }
  v24 = v58_.v58;
  v23 = v58_.v59;
  v25 = v58_.v58 + 32;
  if (v58_.v58 + 32 == v58_.v59) {
    goto LABEL_43;
  }
  do {
    v27 = *(unsigned int*)(v25 - 8);
    v28 = *(unsigned int*)(v25 + 24);
    if ((_DWORD)v27 == -1) {
      if ((_DWORD)v28 == -1) {
        goto LABEL_38;
      }
    LABEL_37:
      v26 = HandlePtr_Unknown21_cb39c0_ptr[v28];
      v52_.v52 = v25 - 32;
      ((void (*)(__int64*))v26)(&v52_.v52);
      goto LABEL_38;
    }
    if ((_DWORD)v28 != -1) {
      goto LABEL_37;
    }
    ((void (*)(__int64*, __int64))GameData_1fe1aa8[v27])(&v52_.v52, v25 - 32);
    *(_DWORD*)(v25 - 8) = -1;
  LABEL_38:
    v25 += 32;
  } while (v25 != v23);
  v23 = v58_.v59;
  v24 = v25 - 32;
LABEL_43:
  if (v24 != v23) {
    do {
      v29 = *(unsigned int*)(v23 - 8);
      v30 = v23 - 32;
      if ((_DWORD)v29 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fe1aa8[v29])(&v52_.v52,
                                                             v23 - 32);
      }
      *(_DWORD*)(v23 - 8) = -1;
      v23 -= 32;
    } while (v30 != v24);
  }
  v31 = *v9;
  v58_.v59 = v24;
  if (v31 != 0) {
    v32 = v31 + 248;
  }
  else {
    v32 = 0;
  }
  if (GameData_22127a8 != 0) {
    v33 = GameData_22127a8;
  }
  else {
    v33 = v32;
  }
  if ((*a2 & 1) != 0) {
    v34 = *((const char**)a2 + 2);
  }
  else {
    v34 = (const char*)(a2 + 1);
  }
  v35 = strlen_alt1(v34);
  Manager_d9b810((void*)((__int64)&v52_.v52), v33, (__int64)v34, v35,
                 (__int64)&v58_.v58, 4u);
  v21 = v52_.v52;
  v22 = v52_.v53;
  v54_.v54 = v52_.v52;
  v54_.v55 = v52_.v53;
  if (v52_.v53 == 0x2000) {
    v36 = 0;
  }
  else {
    v39 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v52_.v53);
    v36 = v39[1];
    if (v36 != 0 && *v39 != v52_.v52) {
      v36 = 0;
    }
  }
  v54_.v56 = v36;
LABEL_67:
  v40 = a1[81];
  if (v40 >= a1[82]) {
    v46 = GameHr_cb3e60(a1 + 80, (__int64)&v54_.v54);
  }
  else if (v22 != 0x2000 &&
           (v41 = (char*)as_g_context_slots_ptr,
            v42 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v22),
            (v43 = v42[1]) != 0) &&
           *v42 == v21) {
    *(_QWORD*)v40 = 0;
    *(_QWORD*)(v40 + 16) = 0;
    *(_DWORD*)(v40 + 8) = 0x2000;
    v44 = *(unsigned int*)(v43 + 8);
    if ((_DWORD)v44 != 0x2000) {
      v45 = &v41[16 * v44];
      if (*((_QWORD*)v45 + 1) == v43) {
        *(_DWORD*)(v40 + 8) = v44;
        *(_QWORD*)v40 = *(_QWORD*)v45;
      }
    }
    *(_QWORD*)(v40 + 16) = v43;
    v46 = v40 + 24;
  }
  else {
    *(_QWORD*)v40 = 0;
    *(_QWORD*)(v40 + 16) = 0;
    v46 = v40 + 24;
    *(_DWORD*)(v40 + 8) = 0x2000;
  }
  a1[81] = v46;
  v47 = v58_.v58;
  if (v58_.v58 != 0) {
    v48 = v58_.v59;
    if (v58_.v58 == v58_.v59) {
      goto LABEL_84;
    }
    do {
      v49 = *(unsigned int*)(v48 - 8);
      v50 = v48 - 32;
      if ((_DWORD)v49 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fe1aa8[v49])(&v54_.v54,
                                                             v48 - 32);
      }
      *(_DWORD*)(v48 - 8) = -1;
      v48 -= 32;
    } while (v50 != v47);
    v58_.v59 = v47;
    v47 = v58_.v58;
    if (v58_.v58 != 0) {
    LABEL_84:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v47);
    }
  }
}

__int64 Locator_df7d00(__int64 result)
{
  __int64* v1;
  __int64* v2;

  v1 = *(__int64**)(result + 664);
  v2 = *(__int64**)(result + 672);
  *(_BYTE*)(result + 16) = 1;
  while (v1 != v2) {
    result = *v1;
    if (*v1 != 0) {
      result = Locator_df7d00(result);
    }
    v1 += 2;
  }
  return result;
}

__int64 game_hub_Locator_GetRegisterPos(__int64 a1, _QWORD* a2, _DWORD* a3)
{
  __int64** v6;
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 result;
  unsigned __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  __int128 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  _BYTE v26[32];
  _BYTE* v27;
  _QWORD v28[2];
  __int64 v29;
  char v30;

  LocatorDispos_db1f30((void*)(v28), (char*)(a1 + 376));
  v6 = (__int64**)game_ff5c20(*(_QWORD*)(*GameData_212ebe0 + 8) + 24LL, v28);
  v7 = *v6;
  v8 = v6[1];
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (*v6 == v8) {
  LABEL_17:
    v30 = 0;
    v22 = *(_QWORD*)GameData_212dc68;
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate(*v9, 40, 16, 0);
    v23[2] = a1;
    v23[3] = a2;
    v23[4] = a3;
    v27 = v23;
    *v23 = GameData_1fe1b28;
    v23[1] = &v30;
    EventManager_cbc720(v22, v28, v26);
    result = (__int64)v27;
    if (v27 == v26) {
      v24 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_22;
      }
      v24 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + v24))((__int64)v27);
    goto LABEL_22;
  }
  v10 = *(unsigned __int8*)(a1 + 704);
  if ((v10 & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 712);
  }
  else {
    v11 = v10 >> 1;
  }
  if ((v10 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 720);
  }
  else {
    v12 = a1 + 705;
  }
  while (1) {
    v13 = *v7;
    v14 = *(unsigned __int8*)(*v7 + 112);
    v15 = *(_QWORD*)(*v7 + 120);
    if ((v14 & 1) == 0) {
      v15 = v14 >> 1;
    }
    if (v15 == v11) {
      v16 = (v14 & 1) != 0 ? *(_QWORD*)(v13 + 128) : v13 + 113;
      result = memcmp(v16, v12, v11);
      if ((_DWORD)result == 0) {
        break;
      }
    }
    v7 += 6;
    if (v7 == v8) {
      goto LABEL_17;
    }
  }
  LANES128(v19).n128_u64[0] = *(_QWORD*)(v13 + 184);
  LODWORD(v18) = *(_DWORD*)(v13 + 192);
  LANES128(v19).n128_u64[1] = v18;
  v20 = vaddq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83850));
  *a2 = LANES128(v20).n128_u64[0];
  v21 = *(_OWORD*)a2;
  *((_QWORD*)&v21 + 1) = LANES128(v20).n128_u32[2];
  *(_OWORD*)a2 = v21;
  *a3 = *(_DWORD*)(*v7 + 196);
LABEL_22:
  if ((v28[0] & 1) != 0 && v29 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*v9 + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*v9 + v25, v29);
  }
  return result;
}

float32x4_t game_hub_Locator_GetRegisterPos_lambda0_Invoke(__int64 a1,
                                                           __int64* a2,
                                                           float32x4_t result)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  float32x4_t v16;
  _QWORD* v17;
  __int128 v18;

  v4 = *a2;
  v3 = a2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((**(_BYTE**)(a1 + 8) & 1) == 0) {
    v5 = *(unsigned __int8*)(v4 + 208);
    v6 = *(_QWORD*)(a1 + 16);
    if ((v5 & 1) != 0) {
      v7 = *(_QWORD*)(v4 + 216);
    }
    else {
      v7 = v5 >> 1;
    }
    v8 = *(unsigned __int8*)(v6 + 704);
    v9 = *(_QWORD*)(v6 + 712);
    if ((v8 & 1) == 0) {
      v9 = v8 >> 1;
    }
    if (v7 == v9) {
      v11 = (v5 & 1) != 0 ? *(_QWORD*)(v4 + 224) : v4 + 209;
      v12 = *(_QWORD*)(v6 + 720);
      v13 = v6 + 705;
      v14 = (v8 & 1) != 0 ? v12 : v13;
      if (({
            int r_ = memcmp(v11, v14, v7);
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            r_;
          }) == 0) {
        if (*(_BYTE*)(v4 + 80) == 1) {
          result = *(float32x4_t*)(v4 + 64);
        }
        else {
          LODWORD(v15) = *(_DWORD*)(v4 + 268);
          LANES128(v16).n128_u64[0] = *(_QWORD*)(v4 + 260);
          LANES128(v16).n128_u64[1] = v15;
          result = vaddq_f32(*(float32x4_t*)(v4 + 16), v16);
        }
        v17 = *(_QWORD**)(a1 + 24);
        *v17 = LANES128(result).n128_u64[0];
        v18 = *(_OWORD*)v17;
        *((_QWORD*)&v18 + 1) = LANES128(result).n128_u32[2];
        *(_OWORD*)v17 = v18;
        PSEUDO_LOW_LANE128(result, n128_u32, *(_DWORD*)(v4 + 272));
        **(_DWORD**)(a1 + 32) = LANES128(result).n128_u32[0];
        **(_BYTE**)(a1 + 8) = 1;
        if (v3 != 0) {
        LABEL_18:
          if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
            return std___1___shared_weak_count___release_weak_alt1(v3);
          }
        }
        return result;
      }
    }
  }
  if (v3 == 0) {
    return result;
  }
  goto LABEL_18;
}

#pragma GCC visibility pop
