#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e038[3];
extern __int64* game_g_empty_item_ptr;
__int64 game_facility_ItemShopMenuItem_CreateDialog_lambda0_Invoke_alt1(
    __int64 a1, __int64 a2, int* a3) __asm__("game_facility_ItemShopMenuItem_"
                                             "CreateDialog_lambda0_Invoke");
__int64 GameRoutine_164cdb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_TransporterConst_List_Impl_EachData(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1b4d210;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20f36c8[])();
extern __int64 (*GameData_20f3748[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212e000[10];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 game_facility_ItemShopMenuItem_CreateDialog(__int64* a1, __int64 a2,
                                                    __int64 a3);
__int64 game_facility_ItemShopMenuItem_CreateDialog_lambda1_Invoke_alt1(
    __int64 a1, __int64 a2, int* a3) __asm__("game_facility_ItemShopMenuItem_"
                                             "CreateDialog_lambda1_Invoke");
_QWORD* game_TransporterConst_List_Impl_EachData_alt1(
    _QWORD* result, __int64,
    __int64) __asm__("game_TransporterConst_List_Impl_EachData");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_ItemShopMenuItem_CreateDialog_lambda0_Invoke(__int64 a1,
                                                                __int64 a2,
                                                                int* a3);
void game_facility_ItemShopMenuItem_CreateDialog_lambda1_Invoke(__int64 a1,
                                                                __int64 a2,
                                                                int* a3);

__int64 game_facility_ItemShopMenuItem_CreateDialog(__int64* a1, __int64 a2,
                                                    __int64 a3)
{
  __int64 v4;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _WORD* v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned __int16* v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  int v20;
  _WORD* v21;
  __int64 v22;
  int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 (**v30)();
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int16* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  __int64** v46;
  __int64* v47;
  __int64* v48;
  _QWORD* v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 (*v56)(_QWORD);
  __int64 v57;
  _QWORD* v58;
  int v59;
  __int64 result;
  _DWORD* v61;
  _DWORD* v62;
  __int64* v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  _QWORD v86[4];
  _QWORD* v87;
  int v88;

  v4 = a1[13];
  v7 = GameRoutine_8a1dc0(a1[15]);
  if (v7 >= 0) {
    v8 = v7;
  }
  else {
    v8 = 999;
  }
  v9 = *a1;
  if (v4 != 0) {
    if ((*(int (**)(__int64*))(v9 + 608))(a1) >= 1) {
      v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *(unsigned __int16*)(*(__int64 (**)(__int64*))(
                                 *a1 + 560))(a1));
      if ((((0x10000000000LL << *(_BYTE*)(v10 + 72)) |
            (1LL << *(_BYTE*)(v10 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v11 = (_WORD*)a1[13];
        if (v11[418] != 0) {
          v12 = -1;
        }
        else {
          v12 = 0;
        }
        v13 = v12 - (v11[414] != 0) - (v11[422] != 0) - (v11[426] != 0) -
              (v11[430] != 0) - (v11[434] != 0) + 6;
        if (v13 >= v8) {
          v13 = v8;
        }
        v14 = v13 <= 1 ? 1 : v13;
        v15 = game_GameModeData_instance_ != 0
                  ? *(_DWORD*)(game_GameModeData_instance_ + 72)
                  : 0;
        v24 = v15 / (*(int (**)(__int64*))(*a1 + 608))(a1);
        v25 = v24 >= v14 ? v14 : v24;
        if (v24 >= 1) {
          v26 = a1[1];
          *((_DWORD*)a1 + 21) = 1;
          if (v26 != 0) {
            v27 = __dynamic_cast(v26, GameData_212e030[0], GameData_212e000[0],
                                 0);
          }
          else {
            v27 = 0;
          }
          v28 = (*(__int64 (**)(__int64*))(*a1 + 640))(a1);
          v29 = (*(__int64 (**)(__int64*))(*a1 + 648))(a1);
          v30 = GameData_20f36c8;
          v31 = v29;
          v82 = a3;
          v83 = a3;
          v32 = v27;
          v33 = v25;
          v34 = v28;
          v35 = a2;
          goto LABEL_88;
        }
      }
    }
    return 0;
  }
  v16 = (unsigned __int16*)(*(__int64 (**)(__int64*))(v9 + 560))(a1);
  v17 = GameData_212c878[0];
  v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v16);
  v19 = (__int64*)game_TransporterConst_List_instance__ptr[0];
  if ((((0x10000000000LL << *(_BYTE*)(v18 + 72)) |
        (1LL << *(_BYTE*)(v18 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v20 =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   72LL) -
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   84LL);
    goto LABEL_39;
  }
  v21 = (_WORD*)(*(__int64 (**)(__int64*))(*a1 + 560))(a1);
  if (*v21 != 0) {
    v22 = *(_QWORD*)(*(_QWORD*)(*v17 + 64) + 8LL * (unsigned __int16)*v21);
    if ((((0x10000000000LL << *(_BYTE*)(v22 + 72)) |
          (1LL << *(_BYTE*)(v22 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v23 = 1;
    }
    else {
      v23 = 999;
    }
  }
  else {
    v23 = 0;
  }
  v36 = (unsigned __int16*)(*(__int64 (**)(__int64*))(*a1 + 560))(a1);
  v37 = *v17;
  v38 = *v36;
  v39 = *v19;
  v88 = 0;
  v40 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8 * v38);
  v41 = *(_QWORD*)(v39 + 8);
  v87 = v86;
  v86[0] = GameData_212d7f0[0] + 2;
  v86[1] = &v88;
  game_TransporterConst_List_Impl_EachData(v41, v40, v86);
  if (v87 == v86) {
    v42 = 32;
    goto LABEL_37;
  }
  if (v87 != nullptr) {
    v42 = 40;
  LABEL_37:
    (*(void (**)(__int64))(*v87 + v42))((__int64)v87);
  }
  v20 = v23 - v88;
LABEL_39:
  if (v20 >= v8) {
    v20 = v8;
  }
  if (v20 <= 1) {
    v43 = 1;
  }
  else {
    v43 = v20;
  }
  v44 = (*(__int64 (**)(__int64*))(*a1 + 608))(a1);
  v85 = a3;
  if (v44 < 1) {
    v46 = (__int64**)a1[15];
    v84 = v43;
    v48 = *v46;
    v47 = v46[1];
    if (*v46 == v47) {
      v49 = &GameData_1b4d210;
    }
    else {
      v49 = &GameData_1b4d210;
      while (2) {
        v50 = *v48;
        v51 = *(_QWORD**)(*v48 + 24);
        v52 = v51[6];
        v53 = v51[7];
        if (v53 == v52) {
        LABEL_67:
          v49 = v51 + 15;
        }
        else {
          while (1) {
            if (*(_QWORD*)v52 != 0) {
              v54 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v55 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v52);
                if (v55 != 0) {
                  v56 = *(__int64 (**)(_QWORD))(v55 + 72);
                  v57 = *(_QWORD*)(v55 + 80);
                  v58 = (_QWORD*)(v55 + (v57 >> 1));
                  if ((v57 & 1) != 0) {
                    v56 = *(__int64 (**)(_QWORD))((char*)v56 + *v58);
                  }
                  LOBYTE(v44) = v56(v58);
                }
                else {
                  LOBYTE(v44) = 1;
                }
              }
              if (*(_BYTE*)(v52 + 16) != ((v54 == 0) | v44 & 1)) {
                break;
              }
            }
            v52 += 24;
            if (v52 == v53) {
              v51 = *(_QWORD**)(v50 + 24);
              goto LABEL_67;
            }
          }
          if (++v48 != v47) {
            continue;
          }
        }
        break;
      }
    }
    v61 = (_DWORD*)*v49;
    v62 = (_DWORD*)v49[1];
    if ((_DWORD*)*v49 == v62) {
      v43 = v84;
      goto LABEL_84;
    }
    v63 = GameData_212c878[0];
    v64 = game_map_MapRandom_instance__ptr[0];
    v59 = v84;
    v65 = GameData_212d7f0[0] + 2;
    while (1) {
      v68 = *v63;
      if (*(_QWORD*)v61 != 0) {
        v69 = *(unsigned __int16*)(*(_QWORD*)v61 + 16LL);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v68 + 64) + 8 * v69) + 73LL) ==
            17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v70 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v64);
          v71 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v64 + 4);
          v72 = *(_DWORD*)v64 ^ (*(_DWORD*)v64 << 11);
          *(_DWORD*)v64 = *((_DWORD*)v64 + 1);
          *((_DWORD*)v64 + 1) = v70;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v64) = v71;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v64 + 4) =
              (v72 >> 8) ^ (v71 >> 19) ^ v72 ^ v71;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v68 = *v63;
        }
      }
      else {
        v69 = 0;
      }
      v73 = *(_QWORD*)(v68 + 64);
      v88 = 0;
      v74 = *(_QWORD*)(v73 + 8 * v69);
      v75 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                       8LL);
      v86[0] = v65;
      v86[1] = &v88;
      v87 = v86;
      game_TransporterConst_List_Impl_EachData(v75, v74, v86);
      if (v87 == v86) {
        v66 = 32;
      }
      else {
        if (v87 == nullptr) {
          goto LABEL_73;
        }
        v66 = 40;
      }
      (*(void (**)(__int64))(*v87 + v66))((__int64)v87);
    LABEL_73:
      v67 = v61[2];
      v61 += 4;
      if (v88 / v67 < v59) {
        v59 = v88 / v67;
      }
      if (v61 == v62) {
        goto LABEL_64;
      }
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v45 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  else {
    v45 = 0;
  }
  v59 = v45 / (*(int (**)(__int64*))(*a1 + 608))(a1);
  if (v59 < v43) {
  LABEL_64:
    v43 = v59;
    if (v59 < 1) {
      return 0;
    }
  }
LABEL_84:
  v76 = a1[1];
  *((_DWORD*)a1 + 21) = 1;
  if (v76 != 0) {
    v77 = __dynamic_cast(v76, GameData_212e030[0], GameData_212e000[0], 0);
  }
  else {
    v77 = 0;
  }
  v78 = (*(__int64 (**)(__int64*))(*a1 + 640))(a1);
  v79 = (*(__int64 (**)(__int64*))(*a1 + 648))(a1);
  v30 = GameData_20f3748;
  v31 = v79;
  v82 = v85;
  v83 = v85;
  v32 = v77;
  v33 = (unsigned int)v43;
  v34 = v78;
  v35 = a2;
LABEL_88:
  v86[0] = v30;
  v86[1] = a1;
  v87 = v86;
  result = GameRoutine_164cdb0(v32, 1, 1, v33, v34, v31, v86, v35, v82, v83);
  if (v87 == v86) {
    v81 = result;
    v80 = 32;
  }
  else {
    if (v87 == nullptr) {
      return result;
    }
    v80 = 40;
    v81 = result;
  }
  (*(void (**)(_QWORD*))(*v87 + v80))(v87);
  return v81;
}

void game_facility_ItemShopMenuItem_CreateDialog_lambda0_Invoke(__int64 a1,
                                                                __int64 a2,
                                                                int* a3)
{
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    int v20;
  } v19_;
  _QWORD** v21;
  struct {
    _QWORD* v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    _BYTE* v26;
    int v27;
    int v28;
    int v29;
  } v22_;

  v4 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v4 != 0) {
    v5 = *a3;
    v6 = *(__int64**)(a1 + 8);
    v7 = __dynamic_cast(v4, GameData_212e030[0], GameData_212e038[0], 0);
    if (v7 != 0) {
      v8 = *v6;
      *((_DWORD*)v6 + 21) = v5;
      v9 = v7;
      v10 = (*(__int64 (**)(__int64*))(v8 + 608))(v6);
      if (game_GameModeData_instance_ != 0) {
        v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      else {
        v11 = 0;
      }
      v12 = *((_DWORD*)v6 + 21) * v10;
      v16 = 0;
      v17 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v13 = *GameData_212ceb0;
      }
      else {
        v13 = 0;
      }
      v18 = v13;
      WORD1(v19_.v19) = 0;
      HIDWORD(v19_.v19) = 0;
      v22_.v23 = 0;
      v22_.v24 = 0;
      v22_.v25 = 0;
      v22_.v26 = nullptr;
      v21 = &v22_.v22;
      v22_.v22 = nullptr;
      GameRoutine_930b90_alt1((__int64)&v19_.v19, (__int64)GameData_212c8b0[0]);
      v22_.v27 = 0;
      v22_.v28 = v12;
      v22_.v29 = v11;
      (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v9 + 1088LL))(v9, 0, &v16);
      v19_.v20 = 0;
      v19_.v19 = 0;
      if ((v22_.v24 & 1) != 0) {
        *v22_.v26 = 0;
        v22_.v25 = 0;
      }
      else {
        LOWORD(v22_.v24) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v21, v22_.v22);
      v22_.v22 = nullptr;
      v22_.v23 = 0;
      v21 = &v22_.v22;
      if ((v22_.v24 & 1) != 0) {
        v14 = v22_.v26;
        if (v22_.v26 != nullptr) {
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v22_.v26);
          v14 = v22_.v22;
        }
      }
      else {
        v14 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v21, v14);
    }
  }
}

void game_facility_ItemShopMenuItem_CreateDialog_lambda1_Invoke(__int64 a1,
                                                                __int64 a2,
                                                                int* a3)
{
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64** v10;
  __int64* v11;
  __int64* v12;
  __int64** v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (*v20)(_QWORD);
  __int64 v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64* v27;
  unsigned int v28;
  __int64* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64* v54;
  int v55;
  __int64 v56;
  __int64 v57;
  struct {
    __int64 v58;
    int v59;
  } v58_;
  _QWORD** v60;
  struct {
    _QWORD* v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    _BYTE* v65;
    int v66;
    int v67;
    int v68;
  } v61_;
  struct {
    _QWORD v69[4];
    _QWORD* v70;
  } v69_;
  int v71;

  v4 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v4 == 0) {
    return;
  }
  v5 = *a3;
  v54 = *(__int64**)(a1 + 8);
  v53 = __dynamic_cast(v4, GameData_212e030[0], GameData_212e038[0], 0);
  if (v53 == 0) {
    return;
  }
  v6 = *v54;
  *((_DWORD*)v54 + 21) = v5;
  v7 = (*(__int64 (**)(__int64*))(v6 + 608))(v54);
  if (v7 >= 1) {
    v8 = (*(__int64 (**)(__int64*))(*v54 + 608))(v54);
    if (game_GameModeData_instance_ != 0) {
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    else {
      v9 = 0;
    }
    v23 = *((_DWORD*)v54 + 21) * v8;
    v55 = 0;
    v56 = *game_g_empty_item_ptr;
    if (*(_BYTE*)GameData_212ceb0 != 0) {
      v24 = *GameData_212ceb0;
    }
    else {
      v24 = 0;
    }
    v57 = v24;
    WORD1(v58_.v58) = 0;
    HIDWORD(v58_.v58) = 0;
    v61_.v62 = 0;
    v61_.v63 = 0;
    v61_.v64 = 0;
    v61_.v65 = nullptr;
    v60 = &v61_.v61;
    v61_.v61 = nullptr;
    GameRoutine_930b90_alt1((__int64)&v58_.v58, (__int64)GameData_212c8b0[0]);
    v61_.v66 = 0;
    v61_.v67 = v23;
    v61_.v68 = v9;
    (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v53 + 1088LL))(v53, 0, &v55);
    v58_.v59 = 0;
    v58_.v58 = 0;
    if ((v61_.v63 & 1) != 0) {
      *v61_.v65 = 0;
      v61_.v64 = 0;
    }
    else {
      LOWORD(v61_.v63) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v60, v61_.v61);
    v61_.v61 = nullptr;
    v61_.v62 = 0;
    v60 = &v61_.v61;
    if ((v61_.v63 & 1) != 0) {
      v25 = v61_.v65;
      if (v61_.v65 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v61_.v65);
        v25 = v61_.v61;
      }
    }
    else {
      v25 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v60, v25);
    return;
  }
  v10 = (__int64**)v54[15];
  v11 = *v10;
  v12 = v10[1];
  if (*v10 == v12) {
    v13 = (__int64**)&GameData_1b4d210;
  }
  else {
    v13 = (__int64**)&GameData_1b4d210;
    while (2) {
      v14 = *v11;
      v15 = *(_QWORD**)(*v11 + 24);
      v16 = v15[6];
      v17 = v15[7];
      if (v17 == v16) {
      LABEL_37:
        v13 = (__int64**)(v15 + 15);
      }
      else {
        while (1) {
          if (*(_QWORD*)v16 != 0) {
            v18 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v19 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v16);
              if (v19 != 0) {
                v20 = *(__int64 (**)(_QWORD))(v19 + 72);
                v21 = *(_QWORD*)(v19 + 80);
                v22 = (_QWORD*)(v19 + (v21 >> 1));
                if ((v21 & 1) != 0) {
                  v20 = *(__int64 (**)(_QWORD))((char*)v20 + *v22);
                }
                LOBYTE(v7) = v20(v22);
              }
              else {
                LOBYTE(v7) = 1;
              }
            }
            if (*(_BYTE*)(v16 + 16) != ((v18 == 0) | v7 & 1)) {
              break;
            }
          }
          v16 += 24;
          if (v16 == v17) {
            v15 = *(_QWORD**)(v14 + 24);
            goto LABEL_37;
          }
        }
        if (++v11 != v12) {
          continue;
        }
      }
      break;
    }
  }
  v27 = *v13;
  v52 = v13[1];
  if (*v13 != v52) {
    v28 = 0;
    v29 = GameData_212ceb0;
    v51 = GameData_212d7f0[0] + 2;
    do {
      v31 = *v27;
      if (*v27 != 0) {
        v32 = *(unsigned __int16*)(v31 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v32) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v33 = game_map_MapRandom_instance__ptr[0];
          v34 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v35 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v36 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v33 + 1) = v34;
          v37 = (v36 >> 8) ^ (v35 >> 19) ^ v36 ^ v35;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33) = v35;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33 + 4) = v37;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v38 = *((_DWORD*)v54 + 21) * *((_DWORD*)v27 + 2);
          v39 = (16 * ((_WORD)v37 -
                       1000 * (unsigned __int16)((v37 & 0x7FFFFFFFu) / 0x3E8)) +
                 16) &
                    0x3FF0 |
                1u;
          v31 = *v27;
          if (*v27 == 0) {
            v40 = 0;
            goto LABEL_51;
          }
        }
        else {
          v39 = 1;
          v38 = *((_DWORD*)v54 + 21) * *((_DWORD*)v27 + 2);
        }
        v40 = *(unsigned __int16*)(v31 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v40) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v41 = game_map_MapRandom_instance__ptr[0];
          v42 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v43 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v44 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v41 + 1) = v42;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v41) = v43;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v41 + 4) =
              (v44 >> 8) ^ (v43 >> 19) ^ v44 ^ v43;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        }
      }
      else {
        v32 = 0;
        v39 = 0;
        v40 = 0;
        v38 = *((_DWORD*)v54 + 21) * *((_DWORD*)v27 + 2);
      }
    LABEL_51:
      v71 = 0;
      v45 = *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                        8LL);
      v46 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v40);
      v69_.v69[0] = v51;
      v69_.v69[1] = &v71;
      v69_.v70 = v69_.v69;
      game_TransporterConst_List_Impl_EachData_alt1(v45, v46,
                                                    (__int64)v69_.v69);
      if (v69_.v70 == v69_.v69) {
        v47 = 32;
        goto LABEL_55;
      }
      if (v69_.v70 != nullptr) {
        v47 = 40;
      LABEL_55:
        (*(void (**)(__int64))(*v69_.v70 + v47))((__int64)v69_.v70);
      }
      v48 = v71;
      v55 = 8;
      v56 = v32 | (v39 << 32);
      if (*(_BYTE*)v29 != 0) {
        v49 = *v29;
      }
      else {
        v49 = 0;
      }
      v57 = v49;
      WORD1(v58_.v58) = 0;
      HIDWORD(v58_.v58) = 0;
      v61_.v61 = nullptr;
      v61_.v62 = 0;
      v60 = &v61_.v61;
      v61_.v63 = 0;
      v61_.v64 = 0;
      v61_.v65 = nullptr;
      GameRoutine_930b90_alt1((__int64)&v58_.v58, (__int64)GameData_212c8b0[0]);
      v61_.v66 = 0;
      v61_.v67 = v38;
      v61_.v68 = v48;
      (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v53 + 1088LL))(v53, v28,
                                                                    &v55);
      v58_.v59 = 0;
      v58_.v58 = 0;
      if ((v61_.v63 & 1) != 0) {
        *v61_.v65 = 0;
        v61_.v64 = 0;
      }
      else {
        LOWORD(v61_.v63) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v60, v61_.v61);
      v61_.v61 = nullptr;
      v61_.v62 = 0;
      v60 = &v61_.v61;
      if ((v61_.v63 & 1) != 0) {
        v30 = v61_.v65;
        if (v61_.v65 != nullptr) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, (__int64)v61_.v65);
          v30 = v61_.v61;
        }
      }
      else {
        v30 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v60, v30);
      ++v28;
      v27 += 2;
    } while (v27 != v52);
  }
}

#pragma GCC visibility pop
