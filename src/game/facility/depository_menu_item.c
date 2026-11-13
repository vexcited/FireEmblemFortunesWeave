#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_9c0b20(__int64*);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_1581060(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_164cdb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16eb610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_1872d40(void);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_89bb10(_QWORD, _QWORD);
__int64 GameRoutine_89c360(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d1500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_1fb62f0[])();
extern __int64 (*GameData_20f73c0[])();
extern __int64 (*GameData_20f7440[])();
extern __int64 GameData_1fb5cb0;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cd68[26];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212dff8[11];
extern __int64* GameData_212e000[10];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* game_map_history_g_transporter_ptr[8];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 DepositoryMenuItem_Unknown21(__int64 a1);
__int64 DepositoryMenuItem_Unknown55(_QWORD* a1);
bool DepositoryMenuItem_9c12a0(__int64 a1);
__int64 DepositoryMenuItem_Unknown74(__int64 a1, __int64 a2, __int64 a3);
__int64 DepositoryMenuItem_Unknown77(_QWORD* a1);
__int64 DepositoryMenuItem_Unknown72(__int64 a1);
__int64 DepositoryMenuItem_9c2690(__int64 a1);
bool DepositoryMenuItem_Unknown73(_QWORD* a1);
bool DepositoryMenuItem_9c28c0(__int64 a1);
__int64 DepositoryMenuItem_Unknown80(__int64 a1);
__int64 DepositoryMenuItem_9c29c0(__int64 a1);
__int64 DepositoryMenuItem_Unknown26(__int64 a1);
__int64 DepositoryMenuItem_Unknown25(__int64 a1);
__int64 GameHr_a0a7b0(__int64 result, _BYTE* a2);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06060(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21caa2c;
extern __int64 GameData_21f1790;
extern __int64 GameData_21f1798;
extern __int64 GameData_21f17a8;
extern __int64 GameData_21f17b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance_;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e038[3];
extern __int64* game_g_empty_item_ptr;
__int64 game_facility_DepositoryMenuItem_CreateDialog_lambda0_Invoke_alt1(
    __int64 a1, __int64 a2, int* a3) __asm__("game_facility_DepositoryMenuItem_"
                                             "CreateDialog_lambda0_Invoke");
__int64 game_facility_DepositoryMenuItem_OnOpenDialog_lambda0_Invoke_alt1(
    __int64 a1, __int64* a2,
    int* a3) __asm__("game_facility_DepositoryMenuItem_OnOpenDialog_lambda0_"
                     "Invoke");
__int64 game_facility_DepositoryMenuItem_OnDialogYes_lambda1_Invoke(__int64 a1);
_QWORD* ObeliskDestinyMenuItem_1a06060_alt1(_QWORD* result, int*, char) __asm__(
    "ObeliskDestinyMenuItem_1a06060");
_QWORD* game_facility_DepositoryController_Clear(__int64*);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, int);
__int64 GameRoutine_6e3b50_alt1(__int64 result,
                                _QWORD*) __asm__("GameRoutine_6e3b50");
__int64 GameRoutine_71fb20(__int64*);
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 GameRoutine_9c2e20(__int64 result, __int64*, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_facility_9c0c20(_DWORD*);
__int64 game_menu_DeleteTransportMenu_CreateBind(__int64, __int64, __int64,
                                                 char, char);
bool GameRoutine_89bb10_alt1(__int64,
                             unsigned __int16*) __asm__("GameRoutine_89bb10");
extern __int64 (*GameData_1fb6380[])();
extern __int64 (*GameData_1fb6400[])();
extern __int64 (*GameData_1fb6490[])();
extern __int64 GameData_212cf90[3];
extern __int64 game_TransporterConst_List_instance__ptr[6];
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_facility_DepositoryMenuItem_OnOpenDialog_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_facility_DepositoryMenuItem_OnOpenDialog");
__int64 game_facility_DepositoryMenuItem_OnDialogYes(__int64 a1);
__int64 game_facility_DepositoryMenuItem_OnDialogYes_lambda0_Invoke(__int64 a1);
extern char GameData_1a9f09e;
const char* DepositoryMenuItem_Unknown69(_BYTE* a1);
void GameRoutine_6e3b50_alt2(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_DepositoryMenuItem_OnOpenDialog(__int64 a1, __int64 a2);
void game_facility_DepositoryMenuItem_CreateDialog_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2,
                                                                  int* a3);
__int64 BlacksmithMenuItem_Info_Unknown55(_QWORD*);
__int64 GameHr_16eb610(_QWORD*, unsigned int, _BYTE*, __int64, __int64,
                       unsigned int, int);
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, __int64, __int64, int);
__int64 Util_1581060(__int64*, __int64, unsigned __int16*, char,
                     unsigned __int8);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void game_facility_DepositoryMenuItem_OnOpenDialog_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2,
                                                                  int* a3);

__int64 DepositoryMenuItem_Unknown21(__int64 a1)
{
  __int64 v1;

  v1 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v1 = 520;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + v1))((__int64)a1);
}

__int64 DepositoryMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int16* v5;
  char v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  atomic_ullong* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  unsigned __int16* v38;
  char v39;
  __int64 v41;
  __int64* v42;
  __int64 v43;

  BlacksmithMenuItem_Info_Unknown55(a1);
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v41 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v41);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v6 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  Util_15792c0(v4, v5, 0, 1u, 0, (__int64)"L_Icon", (__int64)"T_Txt", v6 & 1);
  v7 = GameData_212c878[0];
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(a1[13] + 4LL));
  if ((((0x10000000000LL << *(_BYTE*)(v8 + 72)) | (1LL << *(_BYTE*)(v8 + 73))) &
       0xFFBFFFFFFFA39FFFLL) == 0) {
    v11 = a1[7];
    if (v11 == 0) {
      goto LABEL_14;
    }
    v12 = std___1___shared_weak_count_lock_alt1(v11);
    if (v12 == 0) {
      goto LABEL_14;
    }
    v13 = (__int64*)a1[6];
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v14 = v12;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v14);
    }
    if (v13 == nullptr) {
    LABEL_14:
      v13 = ui_LayoutAccessor_empty__ptr[0];
    }
    v15 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                                  "MID_Sys_unlimited", 0);
    if (v15 != nullptr) {
      v16 = (__int64)v15;
      v17 = ui_LayoutAccessor_FindTextBox_alt1(v13, (__int64)"T_StockNum");
      if (v17 != 0) {
        GameRoutine_156c5d0_alt1(v17, v16, 0);
      }
    }
    v18 = a1[7];
    if (v18 == 0) {
      goto LABEL_23;
    }
    v19 = std___1___shared_weak_count_lock_alt1(v18);
    if (v19 == 0) {
      goto LABEL_23;
    }
    v20 = (__int64*)a1[6];
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v21 = v19;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
    if (v20 == nullptr) {
    LABEL_23:
      v20 = ui_LayoutAccessor_empty__ptr[0];
    }
    v22 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0;
    v23 = 64;
    if (!v22) {
      v23 = 60;
    }
    v24 = 72;
    if (!v22) {
      v24 = 36;
    }
    if (*(_WORD*)(a1[13] + 2LL) != 0) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    v26 = *(_DWORD*)((char*)GameData_212da30 + v25);
    v27 = ui_LayoutAccessor_FindTextBox_alt1(v20, (__int64)"T_StockNum");
    if (v27 != 0) {
      v28 = Pane_58f8a0_alt1(v27);
      if (v28 != 0) {
        *(_DWORD*)(v28 + 12) = v26;
      }
    }
  }
  v9 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v7 + 64) +
                                                  8LL * *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                _QWORD*))(
                                                            *a1 + 560LL))(a1)) +
                                       84LL));
  if (v9 != 0) {
    v10 = *(unsigned __int16*)(v9 + 32);
  }
  else {
    v10 = 0;
  }
  v29 = DepositoryMenuItem_9c12a0((__int64)a1);
  GameHr_16eb610(a1, 3u, "L_CostGold", (__int64)"Icon", (__int64)"T_Num", v10,
                 v29);
  v30 = a1[7];
  if (v30 == 0) {
    goto LABEL_39;
  }
  v31 = std___1___shared_weak_count_lock_alt1(v30);
  if (v31 == 0) {
    goto LABEL_39;
  }
  v32 = v31;
  v33 = (atomic_ullong*)(v31 + 8);
  v34 = (__int64*)a1[6];
  if (atomic_fetch_add(v33, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v34 != nullptr) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v42 = v34;
  (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
  std___1___shared_weak_count___release_weak_alt1(v32);
  v34 = v42;
  if (v42 == nullptr) {
  LABEL_39:
    v34 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_40:
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v34, (__int64)"IconNew", 0);
  v35 = a1[7];
  if (v35 == 0) {
    goto LABEL_44;
  }
  v36 = std___1___shared_weak_count_lock_alt1(v35);
  if (v36 == 0) {
    goto LABEL_44;
  }
  v37 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v43 = v36;
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    std___1___shared_weak_count___release_weak_alt1(v43);
    if (v37 != nullptr) {
      goto LABEL_45;
    }
    goto LABEL_44;
  }
  if (v37 == nullptr) {
  LABEL_44:
    v37 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_45:
  v38 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v39 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  (*(void (**)(_QWORD*))(*a1 + 568LL))(a1);
  return Util_1581060(v37, 0, v38, v39 & 1, 0);
}

bool DepositoryMenuItem_9c12a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v5;
  int v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64* v16;
  __int64* v17;
  int v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0 &&
      (v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_212dff8[0], -2)) !=
          0 &&
      (v5 = *(char**)(v3 + 8),
       (int)((unsigned __int64)((v4 = *(char**)(v3 + 16)) - v5) >> 3) >= 1)) {
    if (*(_BYTE*)(a1 + 88) == 1) {
      if (v5 == v4) {
        v6 = 0;
      }
      else {
        v6 = 0;
        v7 = GameData_212e008[0];
        v8 = GameData_212c878[0];
        v9 = GameData_212cd68[0];
        do {
          if (*(_QWORD*)v5 != 0) {
            v10 = __dynamic_cast(*(_QWORD*)v5, v7, &GameData_1fb5cb0, 0);
            if (v10 != 0) {
              v11 = v10;
              v12 = *(
                  _QWORD*)(*(_QWORD*)(*v9 + 64) +
                           8LL *
                               *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 +
                                                                         64) +
                                                              8LL *
                                                                  *(unsigned __int16*)(*(
                                                                      __int64 (**)(
                                                                          __int64))(
                                                                      *(_QWORD*)
                                                                          v10 +
                                                                      560LL))(
                                                                      v10)) +
                                                   84LL));
              if (v12 != 0) {
                LODWORD(v12) = *(unsigned __int16*)(v12 + 32);
              }
              v6 += *(_DWORD*)(v11 + 84) * v12;
            }
          }
          v5 += 8;
        } while (v5 != v4);
      }
      v23 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v23 = *(_DWORD*)(game_GameModeData_instance_ + 80);
      }
      return v6 > v23;
    }
    else {
      v16 = GameData_212c878[0];
      v17 = GameData_212cd68[0];
      if (v5 == v4) {
        v18 = 0;
      }
      else {
        v18 = 0;
        v19 = GameData_212e008[0];
        do {
          if (*(_QWORD*)v5 != 0) {
            v20 = __dynamic_cast(*(_QWORD*)v5, v19, &GameData_1fb5cb0, 0);
            if (v20 != 0) {
              v21 = v20;
              v22 = *(
                  _QWORD*)(*(_QWORD*)(*v17 + 64) +
                           8LL *
                               *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v16 +
                                                                         64) +
                                                              8LL *
                                                                  *(unsigned __int16*)(*(
                                                                      __int64 (**)(
                                                                          __int64))(
                                                                      *(_QWORD*)
                                                                          v20 +
                                                                      560LL))(
                                                                      v20)) +
                                                   84LL));
              if (v22 != 0) {
                LODWORD(v22) = *(unsigned __int16*)(v22 + 32);
              }
              v18 += *(_DWORD*)(v21 + 84) * v22;
            }
          }
          v5 += 8;
        } while (v5 != v4);
      }
      v24 = *(
          _QWORD*)(*(_QWORD*)(*v17 + 64) +
                   8LL *
                       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v16 + 64) +
                                                      8LL *
                                                          *(unsigned __int16*)(*(
                                                              __int64 (**)(
                                                                  __int64))(
                                                              *(_QWORD*)a1 +
                                                              560LL))(a1)) +
                                           84LL));
      if (v24 != 0) {
        LODWORD(v24) = *(unsigned __int16*)(v24 + 32);
      }
      v25 = v24 + v18;
      v26 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v26 = *(_DWORD*)(game_GameModeData_instance_ + 80);
      }
      return v25 > v26;
    }
  }
  else {
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_DWORD*)(game_GameModeData_instance_ + 80);
    }
    else {
      v13 = 0;
    }
    v14 = *(
        _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                 8LL *
                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                   [0] +
                                                               64) +
                                                    8LL *
                                                        *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                __int64))(
                                                            *(_QWORD*)a1 +
                                                            560LL))(a1)) +
                                         84LL));
    if (v14 != 0) {
      LODWORD(v14) = *(unsigned __int16*)(v14 + 32);
    }
    return v13 < (int)v14;
  }
}

__int64 DepositoryMenuItem_Unknown74(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int16* v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  _WORD* v23;
  __int64 v24;
  int v25;
  unsigned __int16* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[4];
  _QWORD* v42;
  int v43;

  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0) {
    v7 = __dynamic_cast(v4, GameData_212e030[0], GameData_212dff8[0], -2);
    if (v7 != 0 &&
        (int)((*(_QWORD*)(v7 + 16) - *(_QWORD*)(v7 + 8)) >> 3) >= 1) {
      v9 = *(_QWORD*)(a1 + 96);
      v8 = a1 + 96;
      v10 = (*(__int64 (**)(__int64))(v9 + 80))(v8);
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
      v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
      return GameRoutine_9d1500(v10, v11, v12, a2, a3, a3);
    }
  }
  v14 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v15 = GameData_212c878[0];
  v16 = *(_QWORD*)(*GameData_212c878[0] + 64);
  v17 = GameData_212cd68[0];
  v18 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL * *(unsigned __int8*)(*(_QWORD*)(v16 + 8LL * *v14) + 84LL));
  if (v18 == 0 || *(_WORD*)(v18 + 32) == 0) {
    return 0;
  }
  v19 = *game_map_history_g_transporter_ptr[0];
  if (*game_map_history_g_transporter_ptr[0] == 0) {
    goto LABEL_24;
  }
  v20 =
      *(_QWORD*)(v16 + 8LL * *(unsigned __int16*)(*(_QWORD*)(a1 + 104) + 4LL));
  if ((((0x10000000000LL << *(_BYTE*)(v20 + 72)) |
        (1LL << *(_BYTE*)(v20 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v21 = *(_DWORD*)(*(_QWORD*)(v19 + 16) + 72LL) -
          *(_DWORD*)(*(_QWORD*)(v19 + 16) + 84LL);
    if (v21 <= 998) {
      goto LABEL_10;
    }
    goto LABEL_24;
  }
  v23 = (_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  if (*v23 != 0) {
    v24 = *(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8LL * (unsigned __int16)*v23);
    if ((((0x10000000000LL << *(_BYTE*)(v24 + 72)) |
          (1LL << *(_BYTE*)(v24 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v25 = 1;
    }
    else {
      v25 = 999;
    }
  }
  else {
    v25 = 0;
  }
  v26 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v27 = *v15;
  v28 = *v26;
  v43 = 0;
  v29 = *(_QWORD*)(v19 + 16);
  v30 = *(_QWORD*)(*(_QWORD*)(v27 + 64) + 8 * v28);
  v42 = v41;
  v41[0] = GameData_212d7f0[0] + 2;
  v41[1] = &v43;
  GameRoutine_89c360(v29, v30, v41);
  if (v42 == v41) {
    v31 = 32;
  }
  else {
    if (v42 == nullptr) {
      goto LABEL_23;
    }
    v31 = 40;
  }
  (*(void (**)(__int64))(*v42 + v31))((__int64)v42);

LABEL_23:
  v21 = v25 - v43;
  if (v25 - v43 < 999) {
  LABEL_10:
    if (v21 <= 1) {
      v22 = 1;
    }
    else {
      v22 = v21;
    }
    goto LABEL_25;
  }

LABEL_24:
  v22 = 999;

LABEL_25:
  if (game_GameModeData_instance_ != 0) {
    v32 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  else {
    v32 = 0;
  }
  v33 =
      v32 /
      *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v17 + 64) +
                                      8LL *
                                          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v15 +
                                                                                    64) +
                                                                         8LL *
                                                                             *(unsigned __int16*)(*(
                                                                                 __int64 (**)(
                                                                                     __int64))(
                                                                                 *(_QWORD*)
                                                                                     a1 +
                                                                                 560LL))(
                                                                                 a1)) +
                                                              84LL)) +
                           32LL);
  if (v33 < 1) {
    return 0;
  }
  if (v33 >= v22) {
    v34 = v22;
  }
  else {
    v34 = v33;
  }
  *(_DWORD*)(a1 + 84) = 1;
  v35 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 640LL))(a1);
  v36 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 624LL))(a1);
  v37 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 632LL))(a1);
  v41[0] = GameData_1fb62f0;
  v41[1] = a1;
  v42 = v41;
  v38 = ((__int64 (*)(__int64, __int64, __int64, _QWORD, __int64, __int64,
                      _QWORD*, __int64, __int64, __int64))GameRoutine_164cdb0)(
      v35, 1, 1, v34, v36, v37, v41, a2, a3, a3);
  if (v42 == v41) {
    v40 = v38;
    v39 = 32;
    goto LABEL_38;
  }
  if (v42 != nullptr) {
    v39 = 40;
    v40 = v38;
  LABEL_38:
    (*(void (**)(__int64))(*v42 + v39))((__int64)v42);
    return v40;
  }
  return v38;
}

void game_facility_DepositoryMenuItem_OnOpenDialog(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v5;
  __int64* v6;
  _QWORD* v7;
  char* v8;
  char* v9;
  __int64* v10;
  _QWORD* v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  _DWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  __int64 v44;
  int v45;
  __int64* v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  _BYTE v56[20];
  struct {
    __int64 v57;
    _BYTE* v58;
  } v57_;
  _QWORD** v59;
  struct {
    _QWORD* v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    _BYTE* v64;
    int v65;
    int v66;
    int v67;
  } v60_;
  struct {
    _QWORD v68[4];
    _QWORD* v69;
  } v68_;
  __int64 v70;
  struct {
    __int64 v71;
    __int64* v72;
    __int64 v73;
  } v71_;
  int v74[3];

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(a1 + 8);
  v70 = a2;
  if (v3 != 0) {
    v5 = (_QWORD*)__dynamic_cast(v3, GameData_212e030[0], GameData_212dff8[0],
                                 -2),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v5 != nullptr) {
      v7 = v5;
      if ((int)((v5[2] - v5[1]) >> 3) >= 1) {
        v68_.v69 = v68_.v68;
        v68_.v68[0] = GameData_1fb6380;
        v68_.v68[1] = &v70;
        *(_QWORD*)v56 = GameData_1fb6380;
        *(_QWORD*)&v56[8] = &v70;
        v57_.v58 = v56;
        v9 = (char*)v5[1];
        v8 = (char*)v5[2];
        if ((int)((unsigned __int64)(v8 - v9) >> 3) < 1) {
          v36 = *(_QWORD*)(*v5 + 336LL);
          if (v36 != 0) {
            v37 =
                __dynamic_cast(v36, GameData_212e008[0], &GameData_1fb5cb0, 0),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v37 != 0) {
              v38 = v37;
              v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 560LL))(v37),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              LODWORD(v71_.v71) = *(_DWORD*)(v38 + 84);
              if (v57_.v58 == nullptr) {
                goto LABEL_86;
              }
              (*(void (**)(_BYTE*, __int64, __int64*))(
                  *(_QWORD*)v57_.v58 + 48LL))(v57_.v58, v39, &v71_.v71),
                  v6 = COERCE_AS(
                      __typeof__(v6),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        else {
          v71_.v73 = 0;
          v71_.v71 = (__int64)&v71_.v71;
          v71_.v72 = &v71_.v71;
          if (v9 != v8) {
            v10 = GameData_212e008[0];
            do {
              if (*(_QWORD*)v9 != 0) {
                v20 = __dynamic_cast(*(_QWORD*)v9, v10, &GameData_1fb5cb0, 0),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v20 != 0) {
                  v21 = v71_.v72;
                  v22 = (_DWORD*)v20;
                  if (v71_.v72 != &v71_.v71) {
                    while (1) {
                      v23 = (_QWORD*)v21[2];
                      if (*v23 == *(_QWORD*)(*(__int64 (**)(_DWORD*))(
                                      *(_QWORD*)v22 + 560LL))(v22)) {
                        break;
                      }
                      v21 = (__int64*)v21[1];
                      if (v21 == &v71_.v71) {
                        goto LABEL_9;
                      }
                    }
                  }
                  if (v21 == &v71_.v71) {
                  LABEL_9:
                    v15 =
                        (*(__int64 (**)(_DWORD*))(*(_QWORD*)v22 + 560LL))(v22),
                    v6 = COERCE_AS(
                        __typeof__(v6),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v16 = v22[21];
                    v17 = v15;
                    v18 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
                    v6 = COERCE_AS(
                        __typeof__(v6),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v19 = v71_.v71;
                    *(_QWORD*)(v18 + 8) = &v71_.v71;
                    *(_QWORD*)(v18 + 16) = v17;
                    *(_DWORD*)(v18 + 24) = v16;
                    v71_.v71 = v18;
                    *(_QWORD*)v18 = v19;
                    *(_QWORD*)(v19 + 8) = v18;
                    ++v71_.v73;
                  }
                  else {
                    *((_DWORD*)v21 + 6) += v22[21];
                  }
                }
              }
              v9 += 8;
            } while (v9 != v8);
            v30 = v71_.v72;
            v31 = fw_memory_g_heap_manager_ptr;
            if (v71_.v72 != &v71_.v71) {
              while (1) {
                v32 = v30[2];
                v74[0] = *((_DWORD*)v30 + 6);
                if (v57_.v58 == nullptr) {
                  break;
                }
                (*(void (**)(_BYTE*, __int64, int*))(*(_QWORD*)v57_.v58 +
                                                     48LL))(v57_.v58, v32, v74),
                    v6 = COERCE_AS(
                        __typeof__(v6),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v30 = (__int64*)v30[1];
                if (v30 == &v71_.v71) {
                  goto LABEL_38;
                }
              }
            LABEL_86:
              GameRoutine_60a310(),
                  v6 = COERCE_AS(
                      __typeof__(v6),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          LABEL_38:
            if (v71_.v73 != 0) {
              v6 = v71_.v72;
              v33 = *(__int64**)(v71_.v71 + 8);
              *(_QWORD*)(*v71_.v72 + 8) = v33;
              *v33 = *v6;
              v71_.v73 = 0;
              if (v6 != &v71_.v71) {
                do {
                  v34 = (__int64*)v6[1];
                  if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
                    v35 = 128;
                  }
                  else {
                    v35 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v31 + v35,
                                                     (__int64)v6),
                      v6 = COERCE_AS(
                          __typeof__(v6),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v6 = v34;
                } while (v34 != &v71_.v71);
              }
            }
          }
        }
        if (v57_.v58 == v56) {
          v40 = 32;
        }
        else {
          if (v57_.v58 == nullptr) {
            goto LABEL_54;
          }
          v40 = 40;
        }
        (*(void (**)(_BYTE*, __int64*))(*(_QWORD*)v57_.v58 + v40))(v57_.v58,
                                                                   v6),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_54:
        if (v68_.v69 == v68_.v68) {
          v41 = 32;
        }
        else {
          if (v68_.v69 == nullptr) {
          LABEL_59:
            v43 = (char*)v7[1];
            v42 = (char*)v7[2];
            v44 = v70;
            if ((int)((unsigned __int64)(v42 - v43) >> 3) < 1) {
              v52 = *(
                  _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                           8LL *
                               *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                             [0] +
                                                                         64) +
                                                              8LL *
                                                                  *(unsigned __int16*)(*(
                                                                      __int64 (**)(
                                                                          __int64))(
                                                                      *(_QWORD*)
                                                                          a1 +
                                                                      560LL))(
                                                                      a1)) +
                                                   84LL)),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v52 != 0) {
                LODWORD(v52) = *(unsigned __int16*)(v52 + 32);
              }
              v45 = *(_DWORD*)(a1 + 84) * v52;
            }
            else if (v43 == v42) {
              v45 = 0;
            }
            else {
              v45 = 0;
              v46 = GameData_212e008[0];
              v47 = GameData_212c878[0];
              v48 = GameData_212cd68[0];
              do {
                if (*(_QWORD*)v43 != 0) {
                  v49 =
                      __dynamic_cast(*(_QWORD*)v43, v46, &GameData_1fb5cb0, 0),
                  v6 = COERCE_AS(
                      __typeof__(v6),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v49 != 0) {
                    v50 = v49;
                    v51 = *(
                        _QWORD*)(*(_QWORD*)(*v48 + 64) +
                                 8LL *
                                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v47 +
                                                                               64) +
                                                                    8LL *
                                                                        *(unsigned __int16*)(*(
                                                                            __int64 (**)(
                                                                                __int64))(
                                                                            *(_QWORD*)
                                                                                v49 +
                                                                            560LL))(
                                                                            v49)) +
                                                         84LL)),
                    v6 = COERCE_AS(
                        __typeof__(v6),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (v51 != 0) {
                      LODWORD(v51) = *(unsigned __int16*)(v51 + 32);
                    }
                    v45 += *(_DWORD*)(v50 + 84) * v51;
                  }
                }
                v43 += 8;
              } while (v43 != v42);
            }
            *(_DWORD*)v56 = 3;
            *(_QWORD*)&v56[4] = *game_g_empty_item_ptr;
            if (*(_BYTE*)GameData_212ceb0 != 0) {
              v53 = *GameData_212ceb0;
            }
            else {
              v53 = 0;
            }
            *(_QWORD*)&v56[12] = v53;
            WORD1(v57_.v57) = 0;
            HIDWORD(v57_.v57) = 0;
            v60_.v61 = 0;
            v60_.v62 = 0;
            v60_.v63 = 0;
            v60_.v64 = nullptr;
            v59 = &v60_.v60;
            v60_.v60 = nullptr;
            GameRoutine_930b90_alt1((__int64)&v57_.v57,
                                    (__int64)GameData_212c8b0[0]),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v29 = (_QWORD*)(v44 + 1544);
            v60_.v65 = 0;
            v60_.v66 = v45;
            goto LABEL_76;
          }
          v41 = 40;
        }
        (*(void (**)(_QWORD*, __int64*))(*v68_.v69 + v41))(v68_.v69, v6),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_59;
      }
    }
  }
  v11 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = *(_DWORD*)(a1 + 84);
  *(_DWORD*)v56 = 8;
  *(_QWORD*)&v56[4] = *v11;
  v13 = GameData_212ceb0;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v14 = *GameData_212ceb0;
  }
  else {
    v14 = 0;
  }
  *(_QWORD*)&v56[12] = v14;
  WORD1(v57_.v57) = 0;
  HIDWORD(v57_.v57) = 0;
  v60_.v61 = 0;
  v60_.v62 = 0;
  v60_.v63 = 0;
  v60_.v64 = nullptr;
  v59 = &v60_.v60;
  v60_.v60 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v57_.v57, (__int64)GameData_212c8b0[0]),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60_.v65 = 0;
  v60_.v66 = v12;
  v60_.v67 = -1;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(a2 + 1520), (int*)v56, 0),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v57_.v58) = 0;
  v57_.v57 = 0;
  if ((v60_.v62 & 1) != 0) {
    *v60_.v64 = 0;
    v60_.v63 = 0;
  }
  else {
    LOWORD(v60_.v62) = 0;
  }
  GameRoutine_6e3b50_alt2((__int64)&v59, v60_.v60),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60_.v60 = nullptr;
  v60_.v61 = 0;
  v59 = &v60_.v60;
  if ((v60_.v62 & 1) != 0) {
    v24 = v60_.v64;
    if (v60_.v64 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v60_.v64),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v24 = v60_.v60;
    }
  }
  else {
    v24 = nullptr;
  }
  GameRoutine_6e3b50_alt2((__int64)&v59, v24),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                 [0] +
                                                             64) +
                                                  8LL * *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                __int64))(
                                                            *(_QWORD*)a1 +
                                                            560LL))(a1)) +
                                       84LL)),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v26 != 0) {
    LODWORD(v26) = *(unsigned __int16*)(v26 + 32);
  }
  v27 = *(_DWORD*)(a1 + 84) * v26;
  *(_DWORD*)v56 = 3;
  *(_QWORD*)&v56[4] = *game_g_empty_item_ptr;
  if (*(_BYTE*)v13 != 0) {
    v28 = *v13;
  }
  else {
    v28 = 0;
  }
  *(_QWORD*)&v56[12] = v28;
  WORD1(v57_.v57) = 0;
  HIDWORD(v57_.v57) = 0;
  v60_.v61 = 0;
  v60_.v62 = 0;
  v60_.v63 = 0;
  v60_.v64 = nullptr;
  v59 = &v60_.v60;
  v60_.v60 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v57_.v57, (__int64)GameData_212c8b0[0]),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = (_QWORD*)(a2 + 1544);
  v60_.v65 = 0;
  v60_.v66 = v27;
LABEL_76:
  v60_.v67 = 0;
  ObeliskDestinyMenuItem_1a06060_alt1(v29, (int*)v56, 0),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v57_.v58) = 0;
  v57_.v57 = 0;
  if ((v60_.v62 & 1) != 0) {
    *v60_.v64 = 0;
    v60_.v63 = 0;
  }
  else {
    LOWORD(v60_.v62) = 0;
  }
  GameRoutine_6e3b50_alt2((__int64)&v59, v60_.v60),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60_.v60 = nullptr;
  v60_.v61 = 0;
  v59 = &v60_.v60;
  if ((v60_.v62 & 1) != 0) {
    v54 = v60_.v64;
    if (v60_.v64 != nullptr) {
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, (__int64)v60_.v64),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v54 = v60_.v60;
    }
  }
  else {
    v54 = nullptr;
  }
  GameRoutine_6e3b50_alt2((__int64)&v59, v54),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 game_facility_DepositoryMenuItem_OnDialogYes(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  _DWORD* v8;
  __int64 v9;
  int v10;
  unsigned __int16* v11;
  __int64* v12;
  __int64 v13;
  unsigned __int16* v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;
  struct {
    _BYTE v39[4];
    int v40;
    char gap56_[24];
    _BYTE* v41;
  } v39_;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0 ||
      (v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_212dff8[0], -2)) ==
          0 ||
      (v5 = *(__int64**)(v3 + 8), v4 = *(__int64**)(v3 + 16), v6 = (__int64*)v3,
       (int)((unsigned __int64)((char*)v4 - (char*)v5) >> 3) < 1)) {
    v9 = *(
        _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                 8LL *
                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                   [0] +
                                                               64) +
                                                    8LL *
                                                        *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                __int64))(
                                                            *(_QWORD*)a1 +
                                                            560LL))(a1)) +
                                         84LL));
    if (v9 != 0) {
      v10 = *(unsigned __int16*)(v9 + 32);
    }
    else {
      v10 = 0;
    }
    v11 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v12 = game_map_history_g_transporter_ptr[0];
    v13 = *game_map_history_g_transporter_ptr[0];
    v14 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    if (GameRoutine_89bb10_alt1(v13 + 8, v14)) {
      if (*(int*)(a1 + 84) >= 1) {
        v15 = 0;
        v16 = game_GameModeData_instance_;
        do {
          if (v16 != 0) {
            LODWORD(v16) = *(_DWORD*)(v16 + 80);
          }
          if ((int)v16 < v10) {
            break;
          }
          game_UnitUtil_UniqueMap_Commit_89abc0((void*)((__int64)v39_.v39),
                                                *(_QWORD*)(*v12 + 16), v11, 1);
          if (v39_.v40 < 0) {
            break;
          }
          v16 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v17 = (*(_DWORD*)(game_GameModeData_instance_ + 80) - v10) &
                  ~((*(_DWORD*)(game_GameModeData_instance_ + 80) - v10) >> 31);
            if (v17 >= 99999) {
              v17 = 99999;
            }
            *(_DWORD*)(game_GameModeData_instance_ + 80) = v17;
          }
          ++v15;
        } while (v15 < *(_DWORD*)(a1 + 84));
      }
      goto LABEL_42;
    }
    v18 = GameData_212cf90[0];
    v19 = *(_QWORD*)v11;
    v20 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
    v21 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
    v22 = v21 - v20;
    v23 = v21 == v20;
    v24 = *v12;
    v25 = (__int64*)game_TransporterConst_List_instance__ptr[0];
    v26 = (v22 << 6) - 1;
    if (v23) {
      v26 = 0;
    }
    if (v24 != 0) {
      v27 = v24 + 8;
    }
    else {
      v27 = 0;
    }
    v28 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
    v29 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
    if (v26 == v29) {
      GameRoutine_71fb20((__int64*)GameData_212cf90[0]);
      v20 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v18);
      v29 = *(_QWORD*)((char*)((char*)0x20LL) + v18 + 8) +
            *(_QWORD*)((char*)((char*)0x20LL) + v18);
    }
    *(_QWORD*)(*(_QWORD*)(v20 + 8 * (v29 >> 9)) + 8 * (v29 & 0x1FF)) = v28;
    *v25 = v27;
    ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v18);
    v30 = 32;
    v31 = *(_QWORD*)(a1 + 8);
    v32 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32, 16, 0);
    *(_DWORD*)(v32 + 16) = v10;
    *(_QWORD*)(v32 + 20) = v19;
    v39_.v41 = (_BYTE*)v32;
    *(_QWORD*)v32 = GameData_1fb6400;
    *(_QWORD*)(v32 + 8) = a1;
    v37_.v37[0] = GameData_1fb6490;
    v37_.v37[1] = a1;
    v37_.v38 = v37_.v37;
    game_menu_DeleteTransportMenu_CreateBind(v31, (__int64)v39_.v39,
                                             (__int64)v37_.v37, 0, 1);
    if (v37_.v38 != v37_.v37) {
      if (v37_.v38 == nullptr) {
        goto LABEL_38;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*v37_.v38 + v30))((__int64)v37_.v38);
  LABEL_38:
    if (v39_.v41 == v39_.v39) {
      v33 = 32;
    }
    else {
      if (v39_.v41 == nullptr) {
        return 2;
      }
      v33 = 40;
    }
    (*(void (**)(_BYTE*))(*(_QWORD*)v39_.v41 + v33))(v39_.v41);
    return 2;
  }
  if (v5 != v4) {
    GameRoutine_9c2e20(*(_QWORD*)(v3 + 8), v4, (2 * __clz(v4 - v5)) ^ 0x7E, 1);
    v5 = (__int64*)v6[1];
    v4 = (__int64*)v6[2];
  }
  if (v5 != v4) {
    v7 = GameData_212e008[0];
    do {
      if (*v5 != 0) {
        v8 = (_DWORD*)__dynamic_cast(*v5, v7, &GameData_1fb5cb0, 0);
        if (v8 != nullptr) {
          game_facility_9c0c20(v8);
        }
      }
      ++v5;
    } while (v5 != v4);
  }
  game_facility_DepositoryController_Clear(v6);
LABEL_42:
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v34 != 0) {
    v35 = v34;
    (*(void (**)(__int64))(*(_QWORD*)v34 + 1128LL))(v34);
    (*(void (**)(__int64))(*(_QWORD*)v35 + 1136LL))(v35);
    (*(void (**)(__int64))(*(_QWORD*)v35 + 1120LL))(v35);
  }
  return 2;
}

__int64 DepositoryMenuItem_Unknown77(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  _BYTE v9[32];
  _BYTE* v10;

  if (DepositoryMenuItem_9c12a0((__int64)a1)) {
    return 1;
  }
  v2 = *game_map_history_g_transporter_ptr[0];
  v3 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  if ((GameRoutine_89bb10(v2 + 8, v3) & 1) != 0) {
    return 1;
  }
  v5 = a1[1];
  v8 = "MID_Shop_FullItem_Material_Message";
  v6 = GameRoutine_667ea0(v5, &v8);
  if (v6 != 0) {
    v10 = nullptr;
    GameRoutine_6680e0(v9, v6 + 1248);
    if (v10 == v9) {
      v7 = 32;
      goto LABEL_9;
    }
    if (v10 != nullptr) {
      v7 = 40;
    LABEL_9:
      (*(void (**)(void*))(*(_QWORD*)v10 + v7))((void*)v10);
    }
  }
  return 12;
}

__int64 DepositoryMenuItem_Unknown72(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  _QWORD v14[4];
  _QWORD* v15;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = false;
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_212dff8[0], -2);
    if (v3 != 0 && (int)((*(_QWORD*)(v3 + 16) - *(_QWORD*)(v3 + 8)) >> 3) > 0) {
      v4 = true;
    }
  }
  v6 = *(_QWORD*)(a1 + 96);
  v5 = a1 + 96;
  v7 = (*(__int64 (**)(__int64))(v6 + 24))(v5);
  if (!v4 && (v7 & 1) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5);
  }
  v14[0] = GameData_20f73c0;
  v14[1] = v5;
  v13 = v12;
  v15 = v14;
  v12[0] = GameData_20f7440;
  v9 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(*(_QWORD*)v5 + 40LL))(
      v5, v14, v12);
  if (v13 == v12) {
    v10 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v13 + v10))((__int64)v13);

LABEL_14:
  if (v15 == v14) {
    v11 = 32;
    goto LABEL_18;
  }
  if (v15 != nullptr) {
    v11 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v15 + v11))((__int64)v15);
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 48LL))(v5, v9);
  return 12;
}

__int64 DepositoryMenuItem_9c2690(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  char v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  _QWORD v12[4];
  _QWORD* v13;

  v2 = *(_QWORD*)(a1 - 88);
  v4 = false;
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_212dff8[0], -2);
    if (v3 != 0 && (int)((*(_QWORD*)(v3 + 16) - *(_QWORD*)(v3 + 8)) >> 3) > 0) {
      v4 = true;
    }
  }
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  if (!v4 && (v5 & 1) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  }
  v12[0] = GameData_20f73c0;
  v12[1] = a1;
  v11 = v10;
  v13 = v12;
  v10[0] = GameData_20f7440;
  v7 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(*(_QWORD*)a1 + 40LL))(
      a1, v12, v10);
  if (v11 == v10) {
    v8 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_14;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v11 + v8))((__int64)v11);

LABEL_14:
  if (v13 == v12) {
    v9 = 32;
    goto LABEL_18;
  }
  if (v13 != nullptr) {
    v9 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v13 + v9))((__int64)v13);
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 48LL))(a1, v7);
  return 12;
}

bool DepositoryMenuItem_Unknown73(_QWORD* a1)
{
  _BOOL8 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = false;
  if (*(_WORD*)(a1[13] + 2LL) != 0 && !DepositoryMenuItem_9c12a0((__int64)a1)) {
    v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * *(unsigned __int16*)(*(__int64 (**)(_QWORD*))(
                              *a1 + 560LL))(a1));
    if ((((0x10000000000LL << *(_BYTE*)(v3 + 72)) |
          (1LL << *(_BYTE*)(v3 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      return true;
    }
    v4 = *game_map_history_g_transporter_ptr[0];
    v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    if ((GameRoutine_89bb10(v4 + 8, v5) & 1) != 0) {
      return true;
    }
  }
  return result;
}

bool DepositoryMenuItem_9c28c0(__int64 a1)
{
  __int64 v1;
  _BOOL8 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = false;
  if (*(_WORD*)(*(_QWORD*)(a1 + 8) + 2LL) != 0) {
    v1 = a1 - 96;
    if (!DepositoryMenuItem_9c12a0(a1 - 96)) {
      v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                      8LL * *(unsigned __int16*)(*(__int64 (**)(__int64))(
                                *(_QWORD*)v1 + 560LL))(v1));
      if ((((0x10000000000LL << *(_BYTE*)(v3 + 72)) |
            (1LL << *(_BYTE*)(v3 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        return true;
      }
      v4 = *game_map_history_g_transporter_ptr[0];
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(v1);
      if ((GameRoutine_89bb10(v4 + 8, v5) & 1) != 0) {
        return true;
      }
    }
  }
  return result;
}

__int64 DepositoryMenuItem_Unknown80(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    return __dynamic_cast(result, GameData_212e030[0], GameData_212e000[0], 0);
  }
  return result;
}

__int64 DepositoryMenuItem_9c29c0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 - 88);
  if (result != 0) {
    return __dynamic_cast(result, GameData_212e030[0], GameData_212e000[0], 0);
  }
  return result;
}

const char* DepositoryMenuItem_Unknown69(_BYTE* a1)
{
  char v3;
  __int64 v4;
  char v5;
  __int64 v6;
  char v7;
  const char* v8;
  char* v9;

  if ((a1[88] & 1) != 0) {
    return "Multiple";
  }
  v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 496LL))(a1);
  v4 = *(_QWORD*)a1;
  if ((v3 & 1) != 0) {
    if (((*(__int64 (**)(_BYTE*))(v4 + 480))(a1) & 1) != 0) {
      return "EquipEmpty";
    }
    v7 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 464LL))(a1);
    v8 = "EquipDisable";
    v9 = "Equip";
  }
  else {
    v5 = (*(__int64 (**)(_BYTE*))(v4 + 488))(a1);
    v6 = *(_QWORD*)a1;
    if ((v5 & 1) != 0) {
      v7 = (*(__int64 (**)(_BYTE*))(v6 + 464))(a1);
      v8 = "FixedDisable";
      v9 = "Fixed";
    }
    else {
      if (((*(__int64 (**)(_BYTE*))(v6 + 480))(a1) & 1) != 0) {
        return "Empty";
      }
      v7 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 464LL))(a1);
      v8 = "Disable";
      v9 = &GameData_1a9f09e;
    }
  }
  if ((v7 & 1) != 0) {
    return v9;
  }
  else {
    return v8;
  }
}

__int64 DepositoryMenuItem_Unknown26(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v7;
  _BYTE v8[200];

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 3;
  }
  v3 = a1;
  v4 = (__int64*)__dynamic_cast(v2, GameData_212e030[0], GameData_212dff8[0],
                                -2);
  if (v4 == nullptr || (int)((unsigned __int64)(v4[2] - v4[1]) >> 3) < 1) {
    return 3;
  }
  GameRoutine_9c0b20(v4);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 640LL))(v3);
  (*(void (**)(__int64))(*(_QWORD*)v5 + 1128LL))(v5);
  (*(void (**)(__int64))(*(_QWORD*)v5 + 1136LL))(v5);
  (*(void (**)(__int64))(*(_QWORD*)v5 + 1120LL))(v5);
  snd_Fade_Fade_10c830(v8, 0.0f);
  snd_play_ff2d0((void*)(&v7), "SE_SYS_Multiple_CancelAll",
                 "SE_SYS_Multiple_CancelAll", v8, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v8);
  return 13;
}

__int64 DepositoryMenuItem_Unknown25(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 576LL))(a1, 0);
}

__int64 DepositoryMenuItem_Unknown70(__int64 a1)
{
  return *(_QWORD*)(a1 + 104) + 4LL;
}

void game_facility_DepositoryMenuItem_CreateDialog_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2,
                                                                  int* a3)
{
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
      v10 = *(
          _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                   8LL *
                       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                     [0] +
                                                                 64) +
                                                      8LL *
                                                          *(unsigned __int16*)(*(
                                                              __int64 (**)(
                                                                  __int64*))(
                                                              v8 + 560))(v6)) +
                                           84LL));
      if (v10 != 0) {
        LODWORD(v10) = *(unsigned __int16*)(v10 + 32);
      }
      if (game_GameModeData_instance_ != 0) {
        v11 = *(_DWORD*)(game_GameModeData_instance_ + 80);
      }
      else {
        v11 = 0;
      }
      v12 = *((_DWORD*)v6 + 21) * v10;
      v16 = 3;
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
      GameRoutine_6e3b50_alt2((__int64)&v21, v22_.v22);
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
      GameRoutine_6e3b50_alt2((__int64)&v21, v14);
    }
  }
}

void game_facility_DepositoryMenuItem_OnOpenDialog_lambda0_Invoke(__int64 a1,
                                                                  __int64* a2,
                                                                  int* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    int v12;
  } v11_;
  _QWORD** v13;
  struct {
    _QWORD* v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    _BYTE* v18;
    int v19;
    int v20;
    int v21;
  } v14_;

  v3 = *a3;
  v4 = **(_QWORD**)(a1 + 8);
  v8 = 8;
  v9 = *a2;
  if ((_BYTE)GameData_21caa2c != 0) {
    v5 = GameData_21caa2c;
  }
  else {
    v5 = 0;
  }
  v10 = v5;
  WORD1(v11_.v11) = 0;
  HIDWORD(v11_.v11) = 0;
  v14_.v15 = 0;
  v14_.v16 = 0;
  v14_.v17 = 0;
  v14_.v18 = nullptr;
  v13 = &v14_.v14;
  v14_.v14 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v11_.v11, (__int64)GameData_212c8b0[0]);
  v14_.v19 = 0;
  v14_.v20 = v3;
  v14_.v21 = -1;
  ObeliskDestinyMenuItem_1a06060_alt1((_QWORD*)(v4 + 1520), &v8, 0);
  v11_.v12 = 0;
  v11_.v11 = 0;
  if ((v14_.v16 & 1) != 0) {
    *v14_.v18 = 0;
    v14_.v17 = 0;
  }
  else {
    LOWORD(v14_.v16) = 0;
  }
  GameRoutine_6e3b50_alt2((__int64)&v13, v14_.v14);
  v14_.v14 = nullptr;
  v14_.v15 = 0;
  v13 = &v14_.v14;
  if ((v14_.v16 & 1) != 0) {
    v6 = v14_.v18;
    if (v14_.v18 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (__int64)v14_.v18);
      v6 = v14_.v14;
    }
  }
  else {
    v6 = nullptr;
  }
  GameRoutine_6e3b50_alt2((__int64)&v13, v6);
}

__int64 game_facility_DepositoryMenuItem_OnDialogYes_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int16* v15;
  __int64 v16;
  _BYTE v18[8];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_21f17b0;
  v3 = GameData_21f1798;
  v4 = GameData_21f17b0 - 1 + GameData_21f17a8;
  v5 = v4 >> 9;
  v6 = v4 & 0x1FF;
  v7 = ((GameData_21f1798 - GameData_21f1790) << 6) - 1;
  if (GameData_21f1798 == GameData_21f1790) {
    v7 = 0;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(GameData_21f1790 + 8 * v5) + 8 * v6);
  --GameData_21f17b0;
  game_TransporterConst_List_instance_ = v8;
  if ((unsigned __int64)(v7 - (v2 + GameData_21f17a8) + 1) >= 0x400) {
    v9 = *(_QWORD*)(GameData_21f1798 - 8);
    if (v9 != 0) {
      v10 = a1;
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v9);
      v3 = GameData_21f1798;
      a1 = v10;
    }
    GameData_21f1798 = v3 - 8;
  }
  if (game_GameModeData_instance_ != 0) {
    v12 = *(_DWORD*)(game_GameModeData_instance_ + 80) - *(_DWORD*)(a1 + 16);
    v13 = v12 & ~(v12 >> 31);
    if (v13 >= 99999) {
      v13 = 99999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 80) = v13;
  }
  v14 = *game_map_history_g_transporter_ptr[0];
  v15 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(v1);
  game_UnitUtil_UniqueMap_Commit_89abc0((void*)((__int64)v18),
                                        *(_QWORD*)(v14 + 16), v15, 1);
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 640LL))(v1);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 1128LL))(v16);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 1136LL))(v16);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 1120LL))(v16);
  return 7;
}

__int64 game_facility_DepositoryMenuItem_OnDialogYes_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_21f17b0;
  v3 = GameData_21f1798;
  v4 = GameData_21f17b0 - 1 + GameData_21f17a8;
  v5 = v4 >> 9;
  v6 = v4 & 0x1FF;
  v7 = ((GameData_21f1798 - GameData_21f1790) << 6) - 1;
  if (GameData_21f1798 == GameData_21f1790) {
    v7 = 0;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(GameData_21f1790 + 8 * v5) + 8 * v6);
  --GameData_21f17b0;
  game_TransporterConst_List_instance_ = v8;
  if ((unsigned __int64)(v7 - (v2 + GameData_21f17a8) + 1) >= 0x400) {
    v9 = *(_QWORD*)(GameData_21f1798 - 8);
    if (v9 != 0) {
      v10 = v1;
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v9);
      v3 = GameData_21f1798;
      v1 = v10;
    }
    GameData_21f1798 = v3 - 8;
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 640LL))(v1);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1128LL))(v12);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1136LL))(v12);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1120LL))(v12);
  return 3;
}

#pragma GCC visibility pop
