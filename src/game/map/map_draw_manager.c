#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a867a0(_QWORD);
__int64 ProcManager_659d40(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1ff08b8[])();
extern __int64 (*GameData_1ff09f8[])();
extern __int64 (*GameData_1ff1158[])();
extern __int64 (*GameData_1ff11d8[])();
extern __int64 (*GameData_1ff12e8[])();
extern __int64 (*GameData_1ff1548[])();
extern __int64 (*GameData_1ff16c8[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_21cd120;
extern __int64 GameData_226b928;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_f0c890(void);
__int64 MapDrawManager_Destructor(_QWORD* a1);
__int64 game_map_MapDrawManager_UpdateMesh(__int64 a1);
__int64
game_map_MapDrawManager_UpdateTrickDangerMapPos_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
_DWORD* game_map_MapDrawManager_UpdateMesh_lambda0_Invoke(_DWORD* result,
                                                          __int64 a2,
                                                          atomic_uint* a3);
__int64 MapDrawManager_f0cc00(__int64 result);
__int64 game_map_MapDrawManager_GetHash_lambda0_Invoke(__int64 result,
                                                       __int64 a2);
__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0cf50(__int64 a1,
                                                              __int64* a2);
__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0d0c0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda2_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d360(__int64 a1,
                                                              __int64* a2);
__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d4d0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda4_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda5_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda6_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3,
                                                       unsigned int* a4);

__int64 MapDrawManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 result;
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
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD v56[4];
  _QWORD* v57;
  _QWORD v58[4];
  _QWORD* v59;
  _BYTE v60[32];
  _QWORD* v61;

  v2 = a1[25];
  v1 = a1[26];
  *a1 = GameData_1ff08b8;
  v4 = fw_memory_g_heap_manager_ptr;
  while (v1 != v2) {
    v5 = v1;
    v6 = *(_QWORD*)(v1 - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
    v1 = v5 - 40;
    if ((*(_BYTE*)(v5 - 40) & 1) != 0 && *(_QWORD*)(v5 - 24) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v7 = 128;
      }
      else {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
    }
  }
  a1[26] = v2;
  GameRoutine_a867a0(a1 + 28);
  GameRoutine_a867a0(a1 + 29);
  GameRoutine_a867a0(a1 + 30);
  v8 = *(_QWORD*)v4;
  v56[0] = GameData_1ff11d8;
  v57 = v56;
  v59 = v58;
  v58[0] = GameData_1ff11d8;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(v8, 64, 16, 0);
  v61 = v9;
  *v9 = GameData_1ff1158;
  v9[2] = GameData_1ff11d8;
  v9[6] = v9 + 2;
  ProcManager_659d40(v60);
  (*(void (**)(_QWORD*))(*v9 + 40LL))(v9);
  if (v59 == v58) {
    v10 = 32;
  }
  else {
    if (v59 == nullptr) {
      goto LABEL_18;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v59 + v10))((__int64)v59);
LABEL_18:
  result = (__int64)v57;
  if (v57 == v56) {
    v12 = 32;
    goto LABEL_22;
  }
  if (v57 != nullptr) {
    v12 = 40;
  LABEL_22:
    result = (*(__int64 (**)(__int64))(*v57 + v12))((__int64)v57);
  }
  v13 = a1[604];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v14 = a1[602];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = a1[600];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = a1[598];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  v17 = a1[596];
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak(v17);
  }
  v18 = a1[594];
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = std___1___shared_weak_count___release_weak(v18);
  }
  v19 = a1[592];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = std___1___shared_weak_count___release_weak(v19);
  }
  v20 = a1[590];
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    result = std___1___shared_weak_count___release_weak(v20);
  }
  v21 = a1[588];
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    result = std___1___shared_weak_count___release_weak(v21);
  }
  v22 = a1[586];
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  v23 = a1[584];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    result = std___1___shared_weak_count___release_weak(v23);
  }
  v24 = a1[582];
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = std___1___shared_weak_count___release_weak(v24);
  }
  v25 = a1[580];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  v26 = a1[578];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    result = std___1___shared_weak_count___release_weak(v26);
  }
  v27 = a1[576];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = std___1___shared_weak_count___release_weak(v27);
  }
  v28 = a1[574];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    result = std___1___shared_weak_count___release_weak(v28);
  }
  v29 = a1[572];
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = std___1___shared_weak_count___release_weak(v29);
  }
  v30 = a1[570];
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = std___1___shared_weak_count___release_weak(v30);
  }
  v31 = a1[568];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    result = std___1___shared_weak_count___release_weak(v31);
  }
  v32 = a1[547];
  if (v32 != 0) {
    v33 = *(_QWORD*)v4;
    a1[548] = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v33 + v34);
  }
  v35 = a1[31];
  if (v35 != 0) {
    v36 = *(_QWORD*)v4;
    a1[32] = v35;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v36 + v37);
  }
  v38 = a1[25];
  if (v38 != 0) {
    v39 = a1[26];
    if (v38 == v39) {
      goto LABEL_102;
    }
    do {
      v40 = v39;
      v41 = *(_QWORD*)(v39 - 8);
      if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
        result = std___1___shared_weak_count___release_weak(v41);
      }
      v39 = v40 - 40;
      if ((*(_BYTE*)(v40 - 40) & 1) != 0 && *(_QWORD*)(v40 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v42 = 128;
        }
        else {
          v42 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v42);
      }
    } while (v39 != v38);
    v43 = a1[25];
    a1[26] = v38;
    if (v43 != 0) {
    LABEL_102:
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v44 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v44);
    }
  }
  v45 = a1[17];
  if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    result = std___1___shared_weak_count___release_weak(v45);
  }
  v46 = a1[15];
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    result = std___1___shared_weak_count___release_weak(v46);
  }
  v47 = a1[13];
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    result = std___1___shared_weak_count___release_weak(v47);
  }
  v48 = a1[11];
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    result = std___1___shared_weak_count___release_weak(v48);
  }
  v49 = a1[7];
  if (v49 != 0) {
    v50 = a1[8];
    if (v49 == v50) {
      goto LABEL_124;
    }
    do {
      result = *(_QWORD*)(v50 - 8);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v50 -= 16;
    } while (v50 != v49);
    v51 = a1[7];
    a1[8] = v49;
    if (v51 != 0) {
    LABEL_124:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v52 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v52);
    }
  }
  v53 = a1[6];
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    result = std___1___shared_weak_count___release_weak(v53);
  }
  v54 = a1[4];
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    result = std___1___shared_weak_count___release_weak(v54);
  }
  v55 = a1[2];
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    result = std___1___shared_weak_count___release_weak(v55);
  }
  *a1 = GameData_1ff09f8;
  if ((_QWORD*)GameData_21cd120 == a1) {
    GameData_21cd120 = 0;
  }
  return result;
}

__int64 game_map_MapDrawManager_UpdateMesh(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 result;
  __int64* v22;
  __int64* i;
  __int64 v24;
  _QWORD v25[4];
  _QWORD* v26;

  v1 = *(_QWORD**)(a1 + 56);
  v2 = *(_QWORD**)(a1 + 64);
  if (v1 == v2) {
    v7 = *(_QWORD*)(a1 + 56);
  }
  else {
    do {
      v4 = v1[1];
      if (v4 != 0) {
        v5 = std___1___shared_weak_count_lock(v4);
        if (v5 != 0) {
          v6 = v5;
          if (*v1 != 0) {
            (*(void (**)(_QWORD))(*(_QWORD*)*v1 + 16LL))(*v1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            std___1___shared_weak_count___release_weak(v6);
          }
        }
      }
      v1 += 2;
    } while (v1 != v2);
    v7 = *(_QWORD*)(a1 + 56);
    v1 = *(_QWORD**)(a1 + 64);
  }
  fw_world_JobContext_Drain(GameData_226b928);
  v8 = GameData_226b928;
  v9 = GameData_226b928 + 32;
  do {
    v10 = *(_DWORD*)(v8 + 8);
    v11 = (v10 + 1) & 0xFFFFFF;
    if (v10 + 1 <= 0) {
      v11 = -(-(v10 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v8 + 8) = v11;
    v12 = atomic_load((unsigned __int64*)(v9 + 32LL * (v10 & 0x3F)));
    if (v12 != 0) {
      v10 = -1;
    }
  } while (v10 < 0);
  v13 = v10 | 0xC0000000;
  v14 = (unsigned __int64*)(v9 + 32LL * (v10 & 0x3F));
  v15 = ((__int64)v1 - v7) >> 4;
  nn_os_ClearLightEvent(v14 + 1);
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v16[2] = 0;
  v17 = v16;
  v18 = GameData_212e368[0];
  v16[8] = 0;
  *v16 = v18 + 16;
  v16[1] = 0;
  v19 = v14[3];
  v14[3] = (unsigned __int64)v17;
  if (v19 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  atomic_store(v13, v14);
  v17[1] = v8;
  *((_DWORD*)v17 + 4) = v13;
  v25[2] = v15;
  v25[0] = GameData_1ff12e8;
  v25[1] = v7;
  v26 = v25;
  fw_world_SwapCallables(v25, v17 + 4);
  if (v26 == v25) {
    v20 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_25;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v26 + v20))((__int64)v26);
LABEL_25:
  fw_world_JobQueue_Submit(*(_QWORD*)(v8 + 16), v13);
  result = fw_world_JobContext_Wait(GameData_226b928, v13);
  v22 = *(__int64**)(a1 + 56);
  for (i = *(__int64**)(a1 + 64); v22 != i; v22 += 2) {
    result = v22[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v24 = result;
        result = *v22;
        if (*v22 != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          result = std___1___shared_weak_count___release_weak(v24);
        }
      }
    }
  }
  return result;
}

__int64

game_map_MapDrawManager_UpdateTrickDangerMapPos_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  _QWORD* v5;
  char* v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;

  v2 = *a2;
  if ((**(_BYTE**)(a1 + 8) & 1) == 0) {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v2 + 528LL))(*a2);
    if ((result & 1) == 0) {
      return result;
    }
  }
  v5 = **(_QWORD***)(a1 + 16);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 520LL))(v2);
  if ((result & 1) == 0) {
    return result;
  }
  v6 = (char*)v5[547];
  v7 = (char*)v5[548];
  v8 = v6;
  if (v6 == v7) {
    goto LABEL_20;
  }
  v9 = v7 - v6 - 8;
  v8 = (char*)v5[547];
  if ((~(_BYTE)v9 & 0x18) != 0) {
    v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
    v8 = (char*)v5[547];
    while (*(_QWORD*)v8 != v2) {
      v8 += 8;
      if (--v10 == 0) {
        goto LABEL_9;
      }
    }
  LABEL_20:
    if (v8 != v7) {
      return result;
    }
    goto LABEL_21;
  }
LABEL_9:
  if (v9 >= 0x18) {
    v8 += 16;
    while (1) {
      if (*((_QWORD*)v8 - 2) == v2) {
        v8 -= 16;
        goto LABEL_20;
      }
      if (*((_QWORD*)v8 - 1) == v2) {
        v8 -= 8;
        goto LABEL_20;
      }
      if (*(_QWORD*)v8 == v2) {
        goto LABEL_20;
      }
      if (*((_QWORD*)v8 + 1) == v2) {
        break;
      }
      v11 = v8 + 16;
      v8 += 32;
      if (v11 == v7) {
        goto LABEL_21;
      }
    }
    v8 += 8;
    goto LABEL_20;
  }
LABEL_21:
  v12 = v5[549];
  if ((unsigned __int64)v7 >= v12) {
    v14 = (char*)(v7 - v6);
    v15 = (v7 - v6) >> 3;
    v16 = v15 + 1;
    if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
      GameRoutine_f0c890();
    }
    v17 = v12 - (_QWORD)v6;
    v18 = fw_memory_g_heap_manager_ptr;
    if (v17 >> 2 > v16) {
      v16 = v17 >> 2;
    }
    if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v16;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = (char*)(v7 - v6);
    v23 = (__int64)&v14[v20 + -8 * v15];
    *(_QWORD*)&v14[v20] = v2;
    v13 = (__int64)&v14[v20 + 8];
    result = memcpy(v23, v6, v22);
    v5[547] = v23;
    v5[548] = v13;
    v5[549] = v21;
    if (v6 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v24, v6);
    }
  }
  else {
    *(_QWORD*)v7 = v2;
    v13 = (__int64)(v7 + 8);
  }
  v5[548] = v13;
  return result;
}

_DWORD* game_map_MapDrawManager_UpdateMesh_lambda0_Invoke(_DWORD* result,
                                                          __int64 a2,
                                                          atomic_uint* a3)
{
  int v3;
  _DWORD* v5;
  unsigned int v6;
  signed int add;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;

  v3 = result[4];
  if (v3 >= 1) {
    v5 = result;
    if (v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                      *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                     2) &
                    0xFFFFFFFE) +
                   2) <=
        1) {
      v6 = 1;
    }
    else {
      v6 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                        2) &
                       0xFFFFFFFE) +
                      2);
    }
    do {
      add = atomic_fetch_add(a3, v6);
      if (add < v3) {
        v8 = add + v6;
        v9 = add;
        v10 = 16LL * add;
        if ((int)(add + v6) >= v3) {
          v8 = v3;
        }
        v11 = v8;
        do {
          v12 = *((_QWORD*)v5 + 1) + v10;
          result = *(_DWORD**)(v12 + 8);
          if (result != nullptr) {
            result = (_DWORD*)std___1___shared_weak_count_lock(result);
            if (result != nullptr) {
              v13 = result;
              result = *(_DWORD**)v12;
              if (*(_QWORD*)v12 != 0) {
                result = (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result +
                                                            24LL))(result);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 2),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_DWORD*))(*(_QWORD*)v13 + 16LL))(v13);
                result =
                    (_DWORD*)std___1___shared_weak_count___release_weak(v13);
              }
            }
          }
          ++v9;
          v10 += 16;
        } while (v9 < v11);
        add = v9;
      }
      if (v6 >> 1 <= 1) {
        v6 = 1;
      }
      else {
        v6 >>= 1;
      }
    } while (add < v3);
  }
  return result;
}

__int64 MapDrawManager_f0cc00(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if ((*(_BYTE*)(result + 80) & 1) != 0) {
    v1 = *(_QWORD*)(result + 96);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda0_Invoke(__int64 result,
                                                       __int64 a2)
{
  **(_QWORD**)(result + 16) ^=
      **(_QWORD**)(result + 8) + (**(_QWORD**)(result + 16) << 12) +
      (**(_QWORD**)(result + 16) >> 4) - 0x61C8864680B583EBLL;
  **(_QWORD**)(result + 16) ^=
      (**(_QWORD**)(result + 16) << 12) + (unsigned int)*(char*)(a2 + 1) +
      (**(_QWORD**)(result + 16) >> 4) - 0x61C8864680B583EBLL;
  **(_QWORD**)(result + 16) ^=
      (**(_QWORD**)(result + 16) << 12) + (unsigned int)*(char*)(a2 + 2) +
      (**(_QWORD**)(result + 16) >> 4) - 0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0cf50(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v7 = v6;
  v6[0] = GameData_1ff1548;
  v6[1] = v2;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 744LL))(v3, v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0d0c0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda2_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d360(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v7 = v6;
  v6[0] = GameData_1ff16c8;
  v6[1] = v2;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 744LL))(v3, v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d4d0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda4_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda5_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda6_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3,
                                                       unsigned int* a4)
{
  __int64 v4;
  __int64 v5;

  v4 = *a3;
  v5 = *a4;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v4 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v5 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

#pragma GCC visibility pop
