#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120d470(_QWORD);
__int64 GameRoutine_120d600(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1581060(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1873410(_QWORD*);
__int64 GameRoutine_1a06060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a06cc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_80e330(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _BYTE* GameData_2132020;
extern __int64 GameData_21caa2c;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
__int64 BlacksmithMenuItem_Repair_Unknown55(__int64 a1);
__int64 BlacksmithMenuItem_Repair_Unknown58(__int64 a1);
__int64 BlacksmithMenuItem_Repair_Unknown81(__int64 a1);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06060(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212ceb0;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c99b8;
__int64 BlacksmithMenuItem_Repair_Unknown82_alt1(
    __int64 a1, __int64 a2) __asm__("BlacksmithMenuItem_Repair_Unknown82");
_QWORD* ObeliskDestinyMenuItem_1a06060_alt1(_QWORD* result, int*, char) __asm__(
    "ObeliskDestinyMenuItem_1a06060");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 GameRoutine_9db9e0_alt1(unsigned int,
                                unsigned int) __asm__("GameRoutine_9db9e0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void BlacksmithMenuItem_Repair_Unknown82(__int64 a1, __int64 a2);

__int64 BlacksmithMenuItem_Repair_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __int64 v15;
  __int64* v16;

  GameRoutine_1873410((_QWORD*)a1);
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v15);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = *(_QWORD*)(a1 + 104);
  v6 = *(int*)(a1 + 40);
  if (v5 != 0) {
    v7 = v5 + 8 * v6 + 828;
  }
  else {
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v6 + 4;
  }
  v8 = GameRoutine_120d470(v7);
  GameRoutine_1581060(v4, v5, v7, v8 & 1, 0, 0);
  v9 = *(_QWORD*)(a1 + 56);
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = std___1___shared_weak_count_lock(v9);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
    v13 = v16;
    if (v16 != nullptr) {
      return GameRoutine_1562cf0(v13, "State_Off");
    }
    goto LABEL_13;
  }
  if (v13 == nullptr) {
  LABEL_13:
    v13 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562cf0(v13, "State_Off");
}

__int64 BlacksmithMenuItem_Repair_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 104);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    return GameRoutine_120d470(v1 + 8 * v2 + 828);
  }
  else {
    return GameRoutine_120d470(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v2 + 4);
  }
}

__int64 BlacksmithMenuItem_Repair_Unknown81(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int16* v10;
  __int64 v11;
  int v12;
  unsigned __int16* v13;
  int v14;
  int v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _QWORD* v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _BYTE* v32;
  int v33;
  int v34;
  int v35;

  v2 = *(_QWORD*)(a1 + 104);
  *GameData_2132020 = 1;
  v3 = *(int*)(a1 + 40);
  if (v2 != 0) {
    if ((GameRoutine_120d600(v2 + 8 * v3 + 828, v2) & 1) != 0) {
      game_Unit_Unknown6c4610(v2);
      *(_WORD*)(v2 + 20) |= 1u;
    }
  }
  else {
    GameRoutine_120d600(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
            12LL * (int)v3 + 4,
        0);
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
  }
  v6 = GameRoutine_1a06cc0(v5, "MID_RepairMenu_Result", 0);
  v7 = v6;
  if (v6 != 0) {
    *(_WORD*)(v6 + 897) = 0;
  }
  v8 = *(_QWORD*)(a1 + 104);
  v9 = *(int*)(a1 + 40);
  if (v8 != 0) {
    v10 = (unsigned __int16*)(v8 + 8 * v9 + 828);
  }
  else {
    v10 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v9 + 4);
  }
  v11 = *(_QWORD*)(*GameData_212c878[0] + 64);
  if (v8 != 0) {
    v13 = (unsigned __int16*)(v8 + 8 * v9 + 828);
  }
  else {
    v13 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v9 + 4);
  }
  v12 = (*((_DWORD*)v10 + 1) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(v11 + 8LL * *v10) + 87LL) -
        *((unsigned __int8*)v10 + 2);
  v14 = v12 & ~(v12 >> 31);
  v15 = (*((_DWORD*)v13 + 1) & 0xF) *
        *(unsigned __int8*)(*(_QWORD*)(v11 + 8LL * *v13) + 87LL);
  v22 = 8;
  v23 = *(_QWORD*)v10;
  if ((_BYTE)GameData_21caa2c != 0) {
    v16 = GameData_21caa2c;
  }
  else {
    v16 = 0;
  }
  v24 = v16;
  WORD1(v25) = 0;
  HIDWORD(v25) = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = nullptr;
  v27 = &v28;
  v28 = nullptr;
  GameRoutine_930b90(&v25, GameData_212c8b0[0]);
  v33 = 0;
  v34 = v14;
  v35 = v15;
  GameRoutine_1a06060(v7 + 824, &v22, 0);
  v26 = 0;
  v25 = 0;
  if ((v30 & 1) != 0) {
    *v32 = 0;
    v31 = 0;
  }
  else {
    LOWORD(v30) = 0;
  }
  GameRoutine_6e3b50(&v27, v28);
  v28 = nullptr;
  v29 = 0;
  v27 = &v28;
  if ((v30 & 1) != 0) {
    v17 = v32;
    if (v32 != nullptr) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v18);
      v17 = v28;
    }
  }
  else {
    v17 = nullptr;
  }
  GameRoutine_6e3b50(&v27, v17);
  GameRoutine_80e330(v7, "FF_Blacksmith_Repair");
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v19 != 0) {
    v20 = v19;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 1128LL))(v19);
    (*(void (**)(__int64))(*(_QWORD*)v20 + 1136LL))(v20);
    (*(void (**)(__int64))(*(_QWORD*)v20 + 1120LL))(v20);
  }
  return 2;
}

void BlacksmithMenuItem_Repair_Unknown82(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  __int64 v30;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  _QWORD** v33;
  struct {
    _QWORD* v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    _BYTE* v38;
    __int64 v39;
    int v40;
  } v34_;

  v2 = *(_QWORD*)(a1 + 104);
  v3 = *(int*)(a1 + 40);
  if (v2 != 0) {
    v6 = (unsigned __int64*)(v2 + 8 * v3 + 828);
  }
  else {
    v6 =
        (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v3 + 4);
  }
  v28 = 8;
  v29 = *v6;
  v7 = GameData_212ceb0;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v8 = *GameData_212ceb0;
  }
  else {
    v8 = 0;
  }
  v30 = v8;
  WORD1(v31_.v31) = 0;
  HIDWORD(v31_.v31) = 0;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v38 = nullptr;
  v33 = &v34_.v34;
  v34_.v34 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v31_.v31, (__int64)GameData_212c8b0[0]);
  v34_.v39 = 0x100000000LL;
  v34_.v40 = -1;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(a2 + 1520), &v28, 0);
  v31_.v32 = 0;
  v31_.v31 = 0;
  if ((v34_.v36 & 1) != 0) {
    *v34_.v38 = 0;
    v34_.v37 = 0;
  }
  else {
    LOWORD(v34_.v36) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v34_.v34);
  v34_.v34 = nullptr;
  v34_.v35 = 0;
  v33 = &v34_.v34;
  if ((v34_.v36 & 1) != 0) {
    v9 = v34_.v38;
    if (v34_.v38 != nullptr) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v34_.v38);
      v9 = v34_.v34;
    }
  }
  else {
    v9 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v9);
  v11 = *(_QWORD*)(a1 + 112);
  v12 = *(_QWORD*)v11;
  if (*(_QWORD*)v11 != 0) {
    v13 = *(unsigned __int16*)(v12 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v13) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v14 = game_map_MapRandom_instance__ptr[0];
      v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v17 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v14 + 1) = v15;
      v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = v16;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4) = v18;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v12 = (unsigned __int64)((16 * ((_WORD)v18 -
                                      1000 * (unsigned __int16)((v18 &
                                                                 0x7FFFFFFFu) /
                                                                0x3E8)) +
                                16) &
                                   0x3FF0 |
                               1u)
            << 32;
      v11 = *(_QWORD*)(a1 + 112);
    }
    else {
      v12 = 0x100000000LL;
    }
  }
  else {
    LODWORD(v13) = 0;
  }
  v19 = *(_DWORD*)(v11 + 8);
  v28 = 8;
  v29 = v12 | (unsigned int)v13;
  if (*(_BYTE*)v7 != 0) {
    v20 = *v7;
  }
  else {
    v20 = 0;
  }
  v30 = v20;
  WORD1(v31_.v31) = 0;
  HIDWORD(v31_.v31) = 0;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v38 = nullptr;
  v33 = &v34_.v34;
  v34_.v34 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v31_.v31, (__int64)GameData_212c8b0[0]);
  LODWORD(v34_.v39) = 0;
  HIDWORD(v34_.v39) = v19;
  v34_.v40 = -1;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(a2 + 1544), &v28, 0);
  v31_.v32 = 0;
  v31_.v31 = 0;
  if ((v34_.v36 & 1) != 0) {
    *v34_.v38 = 0;
    v34_.v37 = 0;
  }
  else {
    LOWORD(v34_.v36) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v34_.v34);
  v34_.v34 = nullptr;
  v34_.v35 = 0;
  v33 = &v34_.v34;
  if ((v34_.v36 & 1) != 0) {
    v21 = v34_.v38;
    if (v34_.v38 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v34_.v38);
      v21 = v34_.v34;
    }
  }
  else {
    v21 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v21);
  v23 = GameRoutine_9db9e0_alt1(0x16u, *(_DWORD*)(*(_QWORD*)(a1 + 112) + 12LL));
  v28 = 0;
  v24 = v23;
  v29 = *game_g_empty_item_ptr;
  if (*(_BYTE*)v7 != 0) {
    v25 = *v7;
  }
  else {
    v25 = 0;
  }
  v30 = v25;
  WORD1(v31_.v31) = 0;
  HIDWORD(v31_.v31) = 0;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v38 = nullptr;
  v33 = &v34_.v34;
  v34_.v34 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v31_.v31, (__int64)GameData_212c8b0[0]);
  LODWORD(v34_.v39) = 0;
  HIDWORD(v34_.v39) = v24;
  v34_.v40 = 0;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(a2 + 1544), &v28, 0);
  v31_.v32 = 0;
  v31_.v31 = 0;
  if ((v34_.v36 & 1) != 0) {
    *v34_.v38 = 0;
    v34_.v37 = 0;
  }
  else {
    LOWORD(v34_.v36) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v34_.v34);
  v34_.v34 = nullptr;
  v34_.v35 = 0;
  v33 = &v34_.v34;
  if ((v34_.v36 & 1) != 0) {
    v26 = v34_.v38;
    if (v34_.v38 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v34_.v38);
      v26 = v34_.v34;
    }
  }
  else {
    v26 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v26);
}

#pragma GCC visibility pop
