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
extern __int64 (*GameData_1fb7780[])();
extern __int64 (*GameData_1fb7b68[])();
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
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
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

__int64 DepositoryMenuItem_Unknown70(__int64 a1)
{
  return *(_QWORD*)(a1 + 104) + 4LL;
}

void GameHr_9d0890(__int64 a1, _QWORD* a2) { *a2 = GameData_1fb7780; }

void GameHr_9d17a0(__int64 a1, _QWORD* a2) { *a2 = GameData_1fb7b68; }

__int64 GameHr_a0a7b0(__int64 result, _BYTE* a2);

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
  __int64* v3;
  __int64 v4;
  char v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  atomic_ullong* v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  char v34;
  char v35;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  _QWORD v40[4];
  int v41;
  int v42;
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

  GameRoutine_1872d40();
  if (a1[7] == 0) {
    goto LABEL_5;
  }
  v2 = std___1___shared_weak_count_lock();
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v37 = v2;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v37);
    if (v3 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v3 == nullptr) {
  LABEL_5:
    v3 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v4 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v5 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  GameRoutine_15792c0(v3, v4, 0, 1, 0, "L_Icon", "T_Txt", v5 & 1);
  v6 = GameData_212c878[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(a1[13] + 4LL));
  if ((((0x10000000000LL << *(_BYTE*)(v7 + 72)) | (1LL << *(_BYTE*)(v7 + 73))) &
       0xFFBFFFFFFFA39FFFLL) == 0) {
    if (a1[7] == 0) {
      goto LABEL_14;
    }
    v10 = std___1___shared_weak_count_lock();
    if (v10 == 0) {
      goto LABEL_14;
    }
    v11 = (__int64*)a1[6];
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v12 = v10;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v12);
    }
    if (v11 == nullptr) {
    LABEL_14:
      v11 = ui_LayoutAccessor_empty__ptr[0];
    }
    v43 = -1;
    v44 = -1;
    v45 = -1;
    v46 = -1;
    v13 = *msg_MessageManager_instance__ptr[0];
    v47 = -1;
    v48 = -1;
    v49 = -1;
    v50 = -1;
    v51 = -1;
    v52 = -1;
    v53 = -1;
    v54 = -1;
    v40[0] = GameData_212e348 + 2;
    v40[1] = 0xFFFF0001FFFF0000LL;
    v40[2] = 0xFFFF0004FFFF0002LL;
    v40[3] = 0xFFFF0006FFFF0005LL;
    v55 = 8;
    v41 = -65529;
    v42 = -65528;
    v14 = GameRoutine_a4dbe0(v13, "MID_Sys_unlimited", 0, v40);
    if (v14 != 0) {
      v15 = v14;
      v16 = ui_LayoutAccessor_FindTextBox(v11, "T_StockNum");
      if (v16 != 0) {
        GameRoutine_156c5d0(v16, v15, 0);
      }
    }
    if (a1[7] == 0) {
      goto LABEL_23;
    }
    v17 = std___1___shared_weak_count_lock();
    if (v17 == 0) {
      goto LABEL_23;
    }
    v18 = (__int64*)a1[6];
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v19 = v17;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v19);
    }
    if (v18 == nullptr) {
    LABEL_23:
      v18 = ui_LayoutAccessor_empty__ptr[0];
    }
    v20 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0;
    v21 = 64;
    if (!v20) {
      v21 = 60;
    }
    v22 = 72;
    if (!v20) {
      v22 = 36;
    }
    if (*(_WORD*)(a1[13] + 2LL) != 0) {
      v23 = v22;
    }
    else {
      v23 = v21;
    }
    v24 = *(_DWORD*)((char*)GameData_212da30 + v23);
    if (ui_LayoutAccessor_FindTextBox(v18, "T_StockNum") != 0) {
      v25 = Pane_58f8a0();
      if (v25 != 0) {
        *(_DWORD*)(v25 + 12) = v24;
      }
    }
  }
  v8 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                                  8LL * *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                _QWORD*))(
                                                            *a1 + 560LL))(a1)) +
                                       84LL));
  if (v8 != 0) {
    v9 = *(unsigned __int16*)(v8 + 32);
  }
  else {
    v9 = 0;
  }
  v26 = DepositoryMenuItem_9c12a0(a1);
  GameRoutine_16eb610(a1, 3, "L_CostGold", "Icon", "T_Num", v9, v26 & 1);
  if (a1[7] == 0) {
    goto LABEL_39;
  }
  v27 = std___1___shared_weak_count_lock();
  if (v27 == 0) {
    goto LABEL_39;
  }
  v28 = v27;
  v29 = (atomic_ullong*)(v27 + 8);
  v30 = (__int64*)a1[6];
  if (atomic_fetch_add(v29, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v30 != nullptr) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v38 = v30;
  (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
  std___1___shared_weak_count___release_weak(v28);
  v30 = v38;
  if (v38 == nullptr) {
  LABEL_39:
    v30 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_40:
  ui_LayoutAccessor_SetPaneVisible(v30, "IconNew", 0);
  if (a1[7] == 0) {
    goto LABEL_44;
  }
  v31 = std___1___shared_weak_count_lock();
  if (v31 == 0) {
    goto LABEL_44;
  }
  v32 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v39 = v31;
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v39);
    if (v32 != nullptr) {
      goto LABEL_45;
    }
    goto LABEL_44;
  }
  if (v32 == nullptr) {
  LABEL_44:
    v32 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_45:
  v33 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v34 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  v35 = (*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1);
  return GameRoutine_1581060(v32, 0, v33, v34 & 1, 0, v35 & 1);
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
      (*(void (**)(void))(*(_QWORD*)v10 + v7))();
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
  *(struct PseudoSret*)(&v7) =
      snd_play_ff2d0("SE_SYS_Multiple_CancelAll", "SE_SYS_Multiple_CancelAll",
                     v8, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v8);
  return 13;
}

__int64 DepositoryMenuItem_Unknown25(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 576LL))(a1, 0);
}

#pragma GCC visibility pop
