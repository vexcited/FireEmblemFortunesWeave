#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) StableSceneDiff_1956990() { __udf(0x8002u); };
__int64 GameRoutine_1450640(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8a0;
extern char GameData_1ac552d[];
extern char* GameData_2119210;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_facility_StableSceneDiff_SetCamera_lambda0_Invoke(__int64 a1);
__attribute__((swiftcall)) void ProcStableScene_1955550(PSEUDO_X8, __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19513c0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138c520(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN** GameData_2132468;
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 GameData_2131338[2];
extern char GameData_1aa5e95[];
extern char GameData_1ad102c[];
extern char GameData_1aff162[];
__int64 game_facility_StableSceneDiff_Initialize_lambda0_Invoke(__int64 a1);

__int64 game_facility_StableSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  __int128 v32;
  __int64 v33;
  __int64 v34;
  __int128* v35;
  __int64 v36;
  __int64 v37;
  char v38;
  char v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;

  v35 = nullptr;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v32 = (__typeof__(v32)){0};
  v37 = 0;
  v30 = GameData_2131338[0] + 16;
  v31 = 0;
  ProcStableScene_1955550((void*)(&v41), v1);
  if ((v41 & 1) != 0) {
    v2 = v43;
  }
  else {
    v2 = (char*)&v41 + 1;
  }
  if ((v41 & 1) != 0) {
    v3 = v42;
  }
  else {
    v3 = (unsigned __int64)(unsigned __int8)v41 >> 1;
  }
  GameRoutine_1389160(&v30, v2, v3);
  if ((v41 & 1) != 0 && v43 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = (__int64*)GameData_212dce8;
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, &v30);
  v30 = GameData_212e1c0 + 16;
  if (v35 == &v32) {
    v7 = 32;
    goto LABEL_16;
  }
  if (v35 != nullptr) {
    v7 = 40;
  LABEL_16:
    (*(void (**)(__int128*, __int64))(*(_QWORD*)v35 + v7))(v35, v6);
  }
  v30 = 0x8E88E8A98EE50CLL;
  GameRoutine_19513c0(&v30);
  if ((v30 & 1) != 0 && (_QWORD)v32 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v30 = 0;
  v31 = 0;
  LOBYTE(v35) = 0;
  LOBYTE(v32) = 20;
  strcpy((char*)&v32 + 9, "_D");
  v9 = *(_QWORD*)(v1 + 96);
  *(_QWORD*)((char*)&v32 + 1) = 0x335FAC9CE6BA9FE5LL;
  v10 = GameData_212c8a0;
  v11 = game_util_Format(
      GameData_1aff162,
      (&GameData_2119210)[*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                       8LL * *(unsigned __int8*)(v9 + 24)) +
                            32LL)]);
  GameRoutine_60a020(&v32, v11);
  v12 = *v5;
  v13 = game_util_Format(GameData_1aa5e95, 0);
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_51:
    String_60a1d0(v14);
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
    v42 = v15;
    v43 = v16;
    v41 = v17 | 1;
  }
  else {
    LOBYTE(v41) = 2 * v14;
    v16 = (char*)&v41 + 1;
    if (v14 == 0) {
      goto LABEL_31;
    }
  }
  memmove(v16, v13, v15);
LABEL_31:
  v16[v15] = 0;
  SceneManager_138c000(v12, &v41, *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL), &v30);
  if ((v41 & 1) != 0 && v43 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  GameRoutine_a0d9a0(&v30);
  v38 = 0;
  v39 = 0;
  v19 = *v10;
  v40 = 0;
  v20 = *(_QWORD*)(v19 + 64);
  LOBYTE(v32) = 20;
  strcpy((char*)&v32 + 9, "_D");
  v21 = *(_QWORD*)(v1 + 96);
  *(_QWORD*)((char*)&v32 + 1) = 0x335FAC9CE6BA9FE5LL;
  LOBYTE(v35) = 0;
  v30 = 0;
  v31 = 0;
  v22 = game_util_Format(
      GameData_1ad102c,
      (&GameData_2119210)[*(
          unsigned __int8*)(*(_QWORD*)(v20 +
                                       8LL * *(unsigned __int8*)(v21 + 24)) +
                            32LL)]);
  GameRoutine_60a020(&v32, v22);
  v23 = *v5;
  v24 = (__int64)*GameData_2132468;
  v14 = strlen(*GameData_2132468);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_51;
  }
  v25 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v27 = 26;
    }
    else {
      v27 = (v14 | 7) + 1;
    }
    v26 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v27, 16, 0);
    v42 = v25;
    v43 = v26;
    v41 = v27 | 1;
  }
  else {
    LOBYTE(v41) = 2 * v14;
    v26 = (char*)&v41 + 1;
    if (v14 == 0) {
      goto LABEL_45;
    }
  }
  memmove(v26, v24, v25);
LABEL_45:
  v26[v25] = 0;
  SceneManager_138c520(v23, &v41, *(_QWORD*)(v1 + 96) + 24LL, &v30);
  if ((v41 & 1) != 0 && v43 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
  }
  return GameRoutine_a0d9a0(&v30);
}

__int64 game_facility_StableSceneDiff_SetCamera_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[2];
  char* v9;

  v1 = game_util_Format(
      GameData_1ac552d,
      (&GameData_2119210)[*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                       8LL *
                                           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 +
                                                                                     8) +
                                                                          96LL) +
                                                               24LL)) +
                            32LL)]);
  v2 = strlen(v1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v8[1] = v3;
    v9 = v4;
    v8[0] = v5 | 1;
  }
  else {
    LOBYTE(v8[0]) = 2 * v2;
    v4 = (char*)v8 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v4, v1, v3);
LABEL_10:
  v4[v3] = 0;
  result = GameRoutine_1450640(v8);
  if ((v8[0] & 1) != 0 && v9 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

#pragma GCC visibility pop
