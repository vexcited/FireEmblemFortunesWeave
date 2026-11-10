#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120d940(_QWORD, _QWORD);
__int64 GameRoutine_15de780(void);
__int64 GameRoutine_16d88b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_177c650(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern _BYTE* GameData_2132020;
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212e000[10];
extern __int64* GameData_212e030[4];
__int64 BlacksmithMenuItem_Refine_Unknown58(__int64 a1);
__int64 BlacksmithMenuItem_Refine_Unknown81(__int64 a1);
__int64 BlacksmithMenuItem_Refine_Unknown82(__int64 a1, __int64 a2, __int64 a3);
__int64 BlacksmithMenuItem_Refine_Unknown5(__int64 a1, __int64 a2, __int64 a3);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06060(_QWORD, _QWORD, _QWORD);
__int64 Util_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     _QWORD);
__int64 Util_1581060(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_facility_1873410(_QWORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21caa2c;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 BlacksmithMenuItem_Refine_Unknown55(__int64 a1);
__int64 BlacksmithMenuItem_Refine_Unknown83(__int64 a1, __int64 a2);

__int64 BlacksmithMenuItem_Refine_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  atomic_ullong* v39;
  __int64* v40;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;

  game_facility_1873410((_QWORD*)a1);
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
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v42 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v42);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = *(_QWORD*)(a1 + 112);
  v45 = 0;
  v6 = *(_QWORD*)(v5 + 24);
  v7 = GameData_212c878[0];
  if (v6 != 0) {
    v8 = *(unsigned __int16*)(v6 + 16);
    HIDWORD(v45) = 1;
    v9 = *GameData_212c878[0];
    LOWORD(v45) = v8;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v8) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v10 = game_map_MapRandom_instance__ptr[0];
      v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v13 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v10 + 1) = v11;
      v14 = (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) = v12;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4) = v14;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v45) =
          (16 * ((_WORD)v14 -
                 1000 * (unsigned __int16)((v14 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v15 = *(_QWORD*)(a1 + 104);
  v16 = *(int*)(a1 + 40);
  if (v15 != 0) {
    v17 = v15 + 8 * v16 + 828;
  }
  else {
    v17 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v16 + 4;
  }
  v18 = GameRoutine_120d940(v17, *(unsigned int*)(a1 + 120));
  Util_15792c0(v4, &v45, 0, 1, 0, "L_Icon", "T_Txt", v18 & 1);
  v19 = *(_QWORD*)(a1 + 56);
  if (v19 == 0) {
    goto LABEL_16;
  }
  v20 = std___1___shared_weak_count_lock(v19);
  if (v20 == 0) {
    goto LABEL_16;
  }
  v21 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v21 != nullptr) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v43 = v20;
  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
  std___1___shared_weak_count___release_weak(v43);
  if (v21 == nullptr) {
  LABEL_16:
    v21 = &ui_LayoutAccessor_empty_;
  }
LABEL_17:
  v23 = *(_QWORD*)(a1 + 104);
  v22 = *(_QWORD*)(a1 + 112);
  v45 = 0;
  v24 = *(_QWORD*)(v22 + 24);
  v25 = v23;
  if (v24 != 0) {
    v26 = *(unsigned __int16*)(v24 + 16);
    HIDWORD(v45) = 1;
    v27 = *v7;
    LOWORD(v45) = v26;
    LODWORD(v27) =
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v27 + 64) + 8 * v26) + 73LL);
    v25 = v23;
    if ((_DWORD)v27 == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v28 = game_map_MapRandom_instance__ptr[0];
      v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v30 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v31 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v28 + 1) = v29;
      v32 = (v31 >> 8) ^ (v30 >> 19) ^ v31 ^ v30;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v28) = v30;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v28 + 4) = v32;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v45) =
          (16 * ((_WORD)v32 -
                 1000 * (unsigned __int16)((v32 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
      v25 = *(_QWORD*)(a1 + 104);
    }
  }
  v33 = *(int*)(a1 + 40);
  if (v25 != 0) {
    v34 = v25 + 8 * v33 + 828;
  }
  else {
    v34 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v33 + 4;
  }
  v35 = GameRoutine_120d940(v34, *(unsigned int*)(a1 + 120));
  Util_1581060(v21, v23, &v45, v35 & 1, 0, 0);
  v36 = *(_QWORD*)(a1 + 56);
  if (v36 == 0) {
    goto LABEL_27;
  }
  v37 = std___1___shared_weak_count_lock(v36);
  if (v37 == 0) {
    goto LABEL_27;
  }
  v38 = v37;
  v39 = (atomic_ullong*)(v37 + 8);
  v40 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v39, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v44 = v40;
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v38);
    v40 = v44;
    if (v44 != nullptr) {
      return LayoutAccessor_1562cf0(v40, "State_Off");
    }
    goto LABEL_27;
  }
  if (v40 == nullptr) {
  LABEL_27:
    v40 = &ui_LayoutAccessor_empty_;
  }
  return LayoutAccessor_1562cf0(v40, "State_Off");
}

__int64 BlacksmithMenuItem_Refine_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 104);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    v3 = v1 + 8 * v2 + 828;
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v2 + 4;
  }
  return GameRoutine_120d940(v3, *(unsigned int*)(a1 + 120));
}

__int64 BlacksmithMenuItem_Refine_Unknown81(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int16* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int16* v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 104);
  *GameData_2132020 = 1;
  v3 = *(int*)(a1 + 40);
  if (v2 != 0) {
    v4 = (unsigned __int16*)(v2 + 8 * v3 + 828);
  }
  else {
    v4 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v3 + 4);
  }
  v5 = *v4;
  GameRoutine_15de780();
  v6 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v6 + 152) != 0) {
    v7 = *(_QWORD*)(v6 + 152);
  }
  else {
    v7 = *(_QWORD*)(a1 + 8);
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
  GameRoutine_177c650(
      v7, *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v5),
      *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *v10), 1);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v11 != 0) {
    v12 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 1128LL))(v11);
    (*(void (**)(__int64))(*(_QWORD*)v12 + 1136LL))(v12);
    (*(void (**)(__int64))(*(_QWORD*)v12 + 1120LL))(v12);
  }
  return 2;
}

__int64 BlacksmithMenuItem_Refine_Unknown82(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v3 = __dynamic_cast(v3, GameData_212e030[0], GameData_212e000[0], 0);
  }
  return GameRoutine_16d88b0(v3, "MID_RefineMenu_Confirm",
                             "MID_Shop_Consumption", a2, a3, a3);
}

__int64 BlacksmithMenuItem_Refine_Unknown83(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64* v6;
  __int64* v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _BYTE* v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  __int16 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  __int64 v46;
  int v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  _QWORD* v52;
  _BYTE* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _BYTE* v57;
  __int64 v58;
  int v59;

  v2 = *(_QWORD*)(a1 + 104);
  v3 = *(int*)(a1 + 40);
  v5 = a1;
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
  v47 = 8;
  v48 = *v6;
  v7 = GameData_212ceb0;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v8 = *GameData_212ceb0;
  }
  else {
    v8 = 0;
  }
  v49 = v8;
  WORD1(v50) = 0;
  HIDWORD(v50) = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = nullptr;
  v52 = &v53;
  v53 = nullptr;
  GameRoutine_930b90(&v50, GameData_212c8b0[0]);
  v58 = 0x100000000LL;
  v59 = -1;
  ObeliskDestinyMenuItem_1a06060(a2 + 1520, &v47, 0);
  v51 = 0;
  v50 = 0;
  if ((v55 & 1) != 0) {
    *v57 = 0;
    v56 = 0;
  }
  else {
    LOWORD(v55) = 0;
  }
  GameRoutine_6e3b50(&v52, v53);
  v53 = nullptr;
  v54 = 0;
  v52 = &v53;
  if ((v55 & 1) != 0) {
    v9 = v57;
    if (v57 != nullptr) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v10);
      v9 = v53;
    }
  }
  else {
    v9 = nullptr;
  }
  GameRoutine_6e3b50(&v52, v9);
  v11 = *(_QWORD*)(*(_QWORD*)(v5 + 112) + 24LL);
  v46 = v5;
  if (v11 != 0) {
    v12 = *(unsigned __int16*)(v11 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v12) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v13 = game_map_MapRandom_instance__ptr[0];
      v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v16 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v13 + 1) = v14;
      v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) = v15;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 4) = v17;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v7 = &GameData_21caa2c;
      v11 = (unsigned __int64)((16 * ((_WORD)v17 -
                                      1000 * (unsigned __int16)((v17 &
                                                                 0x7FFFFFFFu) /
                                                                0x3E8)) +
                                16) &
                                   0x3FF0 |
                               1u)
            << 32;
    }
    else {
      v11 = 0x100000000LL;
    }
  }
  else {
    LODWORD(v12) = 0;
  }
  v47 = 8;
  v48 = v11 | (unsigned int)v12;
  if (*(_BYTE*)v7 != 0) {
    v18 = *v7;
  }
  else {
    v18 = 0;
  }
  v49 = v18;
  WORD1(v50) = 0;
  HIDWORD(v50) = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = nullptr;
  v52 = &v53;
  v53 = nullptr;
  GameRoutine_930b90(&v50, GameData_212c8b0[0]);
  v58 = 0x100000000LL;
  v59 = -1;
  ObeliskDestinyMenuItem_1a06060(a2 + 1520, &v47, 0);
  v51 = 0;
  v50 = 0;
  if ((v55 & 1) != 0) {
    *v57 = 0;
    v56 = 0;
  }
  else {
    LOWORD(v55) = 0;
  }
  GameRoutine_6e3b50(&v52, v53);
  v53 = nullptr;
  v54 = 0;
  v52 = &v53;
  if ((v55 & 1) != 0) {
    v19 = v57;
    if (v57 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v20);
      v19 = v53;
    }
  }
  else {
    v19 = nullptr;
  }
  GameRoutine_6e3b50(&v52, v19);
  v21 = *(__int64**)(v5 + 112);
  v22 = *v21;
  if (v21[1] != *v21) {
    v23 = 0;
    v24 = 0;
    do {
      v26 = v22 + v23;
      v27 = *(_QWORD*)(v22 + v23);
      v28 = *(_DWORD*)(v26 + 8);
      if (v27 != 0) {
        v29 = *(unsigned __int16*)(v27 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v29) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v30 = a2;
          v31 = game_map_MapRandom_instance__ptr[0];
          v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v33 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v34 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v31 + 1) = v32;
          v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31) = v33;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31 + 4) = v35;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v7 = &GameData_21caa2c;
          v36 = v35 - 1000 * ((v35 & 0x7FFFFFFFu) / 0x3E8);
          a2 = v30;
          v5 = v46;
          v27 = (unsigned __int64)((16 * v36 + 16) & 0x3FF0 | 1u) << 32;
        }
        else {
          v27 = 0x100000000LL;
        }
      }
      else {
        v29 = 0;
      }
      v48 = v27 | v29;
      v37 = *(unsigned __int8*)v7;
      v47 = 8;
      if (v37 != 0) {
        v38 = *v7;
      }
      else {
        v38 = 0;
      }
      v49 = v38;
      WORD1(v50) = 0;
      HIDWORD(v50) = 0;
      v53 = nullptr;
      v54 = 0;
      v52 = &v53;
      v55 = 0;
      v56 = 0;
      v57 = nullptr;
      GameRoutine_930b90(&v50, GameData_212c8b0[0]);
      LODWORD(v58) = 0;
      HIDWORD(v58) = v28;
      v59 = -1;
      ObeliskDestinyMenuItem_1a06060(a2 + 1544, &v47, 0);
      v51 = 0;
      v50 = 0;
      if ((v55 & 1) != 0) {
        *v57 = 0;
        v56 = 0;
      }
      else {
        LOWORD(v55) = 0;
      }
      GameRoutine_6e3b50(&v52, v53);
      v53 = nullptr;
      v54 = 0;
      v52 = &v53;
      if ((v55 & 1) != 0) {
        v25 = v57;
        if (v57 != nullptr) {
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v39);
          v25 = v53;
        }
      }
      else {
        v25 = nullptr;
      }
      GameRoutine_6e3b50(&v52, v25);
      v21 = *(__int64**)(v5 + 112);
      ++v24;
      v23 += 16;
      v22 = *v21;
    } while (v24 < (v21[1] - *v21) >> 4);
  }
  v40 = GameRoutine_9db9e0(22, *((unsigned int*)v21 + 11));
  v47 = 0;
  v41 = v40;
  v48 = *game_g_empty_item_ptr;
  if (*(_BYTE*)v7 != 0) {
    v42 = *v7;
  }
  else {
    v42 = 0;
  }
  v49 = v42;
  WORD1(v50) = 0;
  HIDWORD(v50) = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = nullptr;
  v52 = &v53;
  v53 = nullptr;
  GameRoutine_930b90(&v50, GameData_212c8b0[0]);
  LODWORD(v58) = 0;
  HIDWORD(v58) = v41;
  v59 = 0;
  ObeliskDestinyMenuItem_1a06060(a2 + 1544, &v47, 0);
  v51 = 0;
  v50 = 0;
  if ((v55 & 1) != 0) {
    *v57 = 0;
    v56 = 0;
  }
  else {
    LOWORD(v55) = 0;
  }
  GameRoutine_6e3b50(&v52, v53);
  v53 = nullptr;
  v54 = 0;
  v52 = &v53;
  if ((v55 & 1) != 0) {
    v43 = v57;
    if (v57 != nullptr) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v44);
      v43 = v53;
    }
  }
  else {
    v43 = nullptr;
  }
  return GameRoutine_6e3b50(&v52, v43);
}

__int64 BlacksmithMenuItem_Refine_Unknown5(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 - 88);
  if (v3 != 0) {
    v3 = __dynamic_cast(v3, GameData_212e030[0], GameData_212e000[0], 0);
  }
  return GameRoutine_16d88b0(v3, "MID_RefineMenu_Confirm",
                             "MID_Shop_Consumption", a2, a3, a3);
}

#pragma GCC visibility pop
