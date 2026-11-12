#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212d750;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
__int64 game_gmap_anonymous_ReconstructionMenuItem_ACall_closure_Invoke();
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 Impl_1326560(_QWORD);
__int64 ObeliskDestinyMenuItem_1a06060(_QWORD, _QWORD, _QWORD);
__int64 ProcObeliskDepositoryRideMenu_9d0620(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2027df0[])();
extern __int64 (*GameData_2027e70[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_gmap_anonymous_ReconstructionMenuItem_ACall(_QWORD* a1);
_QWORD* ObeliskDestinyMenuItem_1a06060_alt1(_QWORD* result, int*, char) __asm__(
    "ObeliskDestinyMenuItem_1a06060");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 Impl_1326560_alt1(__int64) __asm__("Impl_1326560");
__int64 ProcObeliskDepositoryRideMenu_9d0620_alt1(
    __int64, __int64, __int64, __int64,
    __int64) __asm__("ProcObeliskDepositoryRideMenu_9d0620");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 game_gmap_anonymous_ReconstructionMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[3];
  struct {
    __int64 v48;
    _QWORD* v49;
  } v48_;
  _QWORD** v50;
  struct {
    _QWORD* v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    _BYTE* v55;
    int v56;
    int v57;
    int v58;
  } v51_;
  struct {
    _QWORD v59[4];
    _QWORD* v60;
  } v59_;
  struct {
    _QWORD v61[4];
    _QWORD* v62;
  } v61_;
  const char* v63;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_9;
      }
    }
  LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  if (v4 == v5) {
    goto LABEL_8;
  }
  while (1) {
    v6 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_8;
    }
  }
LABEL_9:
  v8 = *(_DWORD*)(v6 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v6 + 24);
    v12 = *(_QWORD*)(v6 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = Impl_1326560_alt1(*(_QWORD*)v6);
  if (v14 == 0) {
    return 1;
  }
  v15 = v14;
  v16 = a1[1];
  v63 = "MID_Gmap_Reconstruction_Confirm";
  v48_.v49 = v47;
  v59_.v60 = v59_.v59;
  v47[0] = GameData_2027df0;
  v61_.v62 = v61_.v61;
  v61_.v61[0] = GameData_2027e70;
  v59_.v59[0] = GameData_2027e70;
  v17 = ProcObeliskDepositoryRideMenu_9d0620_alt1(
      v16, (__int64)&v63, (__int64)v47, (__int64)v61_.v61, (__int64)v59_.v59);
  if (v59_.v60 == v59_.v59) {
    v18 = 32;
  }
  else {
    if (v59_.v60 == nullptr) {
      goto LABEL_23;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v59_.v60 + v18))((__int64)v59_.v60);
LABEL_23:
  if (v61_.v62 == v61_.v61) {
    v20 = 32;
  }
  else {
    if (v61_.v62 == nullptr) {
      goto LABEL_28;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v61_.v62 + v20))((__int64)v61_.v62);
LABEL_28:
  if (v48_.v49 == v47) {
    v21 = 32;
    goto LABEL_32;
  }
  if (v48_.v49 != nullptr) {
    v21 = 40;
  LABEL_32:
    (*(void (**)(__int64))(*v48_.v49 + v21))((__int64)v48_.v49);
  }
  if (*(_WORD*)(v15 + 32) == 0) {
    return 12;
  }
  v22 = 0;
  v23 = GameData_212ceb0;
  v24 = GameData_212c8b0[0];
  while (2) {
    v26 = game_HashString_alt1(*(_QWORD*)(*(_QWORD*)(v15 + 40) + 8 * v22));
    if (v26 == 0) {
      goto LABEL_65;
    }
    v27 = *GameData_212c878[0];
    v28 = *(_QWORD*)(*GameData_212c878[0] + 96);
    if (v28 == 0 || *(_QWORD*)(*GameData_212c878[0] + 112) == 0) {
      goto LABEL_65;
    }
    v30 = v28 - 1;
    if ((v28 & (v28 - 1)) != 0) {
      v31 = v26;
      if (v26 >= v28) {
        v31 = v26 % v28;
      }
    }
    else {
      v31 = v30 & v26;
    }
    v32 = *(_QWORD**)(*(_QWORD*)(v27 + 88) + 8 * v31);
    if (v32 == nullptr) {
      goto LABEL_65;
    }
    v33 = (_QWORD*)*v32;
    if (v33 == nullptr) {
      goto LABEL_65;
    }
    if ((v28 & v30) == 0) {
      while (1) {
        v37 = v33[1];
        if (v37 == v26) {
          if (v33[2] == v26) {
            goto LABEL_62;
          }
        }
        else if ((v37 & v30) != v31) {
          goto LABEL_65;
        }
        v33 = (_QWORD*)*v33;
        v35 = 0;
        v36 = 0;
        if (v33 == nullptr) {
          goto LABEL_66;
        }
      }
    }
    while (1) {
      v34 = v33[1];
      if (v34 == v26) {
        break;
      }
      if (v34 >= v28) {
        v34 %= v28;
      }
      if (v34 != v31) {
        goto LABEL_65;
      }
    LABEL_51:
      v33 = (_QWORD*)*v33;
      if (v33 == nullptr) {
        goto LABEL_65;
      }
    }
    if (v33[2] != v26) {
      goto LABEL_51;
    }
  LABEL_62:
    v38 = v33[3];
    if (v38 != 0) {
      v35 = *(unsigned __int16*)(v38 + 16);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v27 + 64) + 8 * v35) + 73LL) == 17) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v39 = game_map_MapRandom_instance__ptr[0];
        v40 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v41 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v42 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v39 + 1) = v40;
        v43 = (v42 >> 8) ^ (v41 >> 19) ^ v42 ^ v41;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39) = v41;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4) = v43;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v36 =
            (unsigned __int64)((16 * ((_WORD)v43 -
                                      1000 * (unsigned __int16)((v43 &
                                                                 0x7FFFFFFFu) /
                                                                0x3E8)) +
                                16) &
                                   0x3FF0 |
                               1u)
            << 32;
      }
      else {
        v36 = 0x100000000LL;
      }
      goto LABEL_66;
    }
  LABEL_65:
    v35 = 0;
    v36 = 0;
  LABEL_66:
    v44 = *(unsigned __int8*)(*(_QWORD*)(v15 + 56) + v22);
    LODWORD(v47[0]) = 8;
    *(_QWORD*)((char*)v47 + 4) = v36 | v35;
    if (*(_BYTE*)v23 != 0) {
      v45 = *v23;
    }
    else {
      v45 = 0;
    }
    *(_QWORD*)((char*)&v47[1] + 4) = v45;
    WORD1(v48_.v48) = 0;
    HIDWORD(v48_.v48) = 0;
    v51_.v51 = nullptr;
    v51_.v52 = 0;
    v50 = &v51_.v51;
    v51_.v53 = 0;
    v51_.v54 = 0;
    v51_.v55 = nullptr;
    GameRoutine_930b90_alt1((__int64)&v48_.v48, (__int64)v24);
    v51_.v56 = 0;
    v51_.v57 = v44;
    v51_.v58 = -1;
    ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v17 + 1496), (int*)v47, 0);
    LODWORD(v48_.v49) = 0;
    v48_.v48 = 0;
    if ((v51_.v53 & 1) != 0) {
      *v51_.v55 = 0;
      v51_.v54 = 0;
    }
    else {
      LOWORD(v51_.v53) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v50, v51_.v51);
    v51_.v51 = nullptr;
    v51_.v52 = 0;
    v50 = &v51_.v51;
    if ((v51_.v53 & 1) != 0) {
      v25 = v51_.v55;
      if (v51_.v55 != nullptr) {
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, (__int64)v51_.v55);
        v25 = v51_.v51;
      }
    }
    else {
      v25 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v50, v25);
    if (++v22 < (unsigned __int64)*(unsigned __int16*)(v15 + 32)) {
      continue;
    }
    return 12;
  }
}

__int64 game_gmap_anonymous_ReconstructionMenuItem_ACall_closure_Invoke()
{
  __int64 v1;
  int v2;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 8;
    return 4;
  }
  else {
    v1 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 8;
      v2 = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 8;
      v2 = 12;
    }
    *(_DWORD*)(v1 + 152) = v2;
    return 4;
  }
}

#pragma GCC visibility pop
