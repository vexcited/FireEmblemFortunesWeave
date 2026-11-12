#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 TelopChangeItem_Unknown56(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TextBoxEx_188ab20(_QWORD, _QWORD, long double);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_anonymous_15d2280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 ui_Manager_instance_;
void GameRoutine_17356e0(_QWORD*, __int64);
void TelopChangeItem_Unknown57_alt1(__int64 a1) __asm__(
    "TelopChangeItem_Unknown57");
__attribute__((swiftcall)) void
GameRoutine_9b8fe0_alt1(PSEUDO_X8, __int64*,
                        __int64*) __asm__("GameRoutine_9b8fe0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64* GameRoutine_1760e40_alt1(__int64,
                                  unsigned int) __asm__("GameRoutine_1760e40");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameRoutine_17356e0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_17356e0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             _BYTE*) __asm__("Manager_136a920");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameHr_6ed030(__int64);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void TextBoxEx_188ab20_alt1(__int64, _BYTE*) __asm__("TextBoxEx_188ab20");
void game_gameui_anonymous_15d2280_alt1(
    __int64*, __int64*, _QWORD*,
    __int64) __asm__("game_gameui_anonymous_15d2280");
__int64 TelopChangeItem_Unknown57(__int64 a1);

__int64 TelopChangeItem_Unknown56(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = (__typeof__(v6)){0};
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  LayoutAccessor_1562cf0_alt1(a1 + 168, (const char*)&v6 + 1);
  return LayoutAccessor_1562cf0_alt1(a1 + 168, "Type_TitleOff");
}

__int64 TelopChangeItem_Unknown57(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  char v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  char v50;
  __int64 v52[2];
  struct {
    __int64 v53;
    __int64 v54;
  } v53_;
  float v55;

  v2 = GameRoutine_1760e40_alt1(a1, 0x13u);
  LayoutAccessor_1562cf0_alt1((__int64)v2, "ItemSkill");
  v3 = GameHr_6ed030(*(_QWORD*)(a1 + 1168));
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox_alt1(v2, (__int64)"T_Item");
    if (v5 != 0) {
      GameRoutine_156c5d0_alt1(v5, v4, 0);
    }
  }
  v6 = ui_LayoutAccessor_FindPane_alt1(v2, (__int64)"ItemIcon");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
    if (v7 != 0) {
      v8 = *(_QWORD*)(a1 + 1168);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v8 + 24);
        v10 = *(unsigned __int8*)(v9 + 560);
        v11 = (v10 & 1) == 0;
        if ((v10 & 1) != 0) {
          v12 = *(_QWORD*)(v9 + 568);
        }
        else {
          v12 = v10 >> 1;
        }
        v13 = *(_BYTE**)(v9 + 576);
        v14 = (_BYTE*)(v9 + 561);
        if (!v11) {
          v14 = v13;
        }
        if (v12 != 0) {
          v15 = v14;
        }
        else {
          v15 = nullptr;
        }
        Manager_136a920_alt1(ui_Manager_instance_ + 1264, v7, 0, 2u, v15);
      }
    }
  }
  v16 = LayoutAccessor_155fbe0_alt1(v2, "L_InfoDetail");
  v53_.v53 = 0;
  v17 = *(_QWORD*)(a1 + 1176);
  v18 = GameData_212c878[0];
  if (v17 != 0) {
    v19 = *(unsigned __int16*)(v17 + 16);
    HIDWORD(v53_.v53) = 1;
    v20 = *GameData_212c878[0];
    LOWORD(v53_.v53) = v19;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v20 + 64) + 8 * v19) + 73LL) == 17) {
      v21 = v16;
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v22 = game_map_MapRandom_instance__ptr[0];
      v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v25 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v22 + 1) = v23;
      v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22) = v24;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4) = v26;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v16 = v21;
      HIDWORD(v53_.v53) =
          (16 * ((_WORD)v26 -
                 1000 * (unsigned __int16)((v26 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v27 = *(_QWORD*)(a1 + 1168);
  v52[0] = 0;
  if (v27 != 0) {
    v28 = *(unsigned __int16*)(v27 + 16);
    HIDWORD(v52[0]) = 1;
    v29 = *v18;
    LOWORD(v52[0]) = v28;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) + 8 * v28) + 73LL) == 17) {
      v30 = v16;
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v16 = v30;
      HIDWORD(v52[0]) =
          (16 * ((_WORD)v35 -
                 1000 * (unsigned __int16)((v35 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  game_gameui_anonymous_15d2280_alt1(v16, &v53_.v53, v52, 0);
  v52[0] = (__int64)"L_Txt";
  v52[1] = 5;
  GameRoutine_9b8fe0_alt1((void*)(&v53_.v53), v2, v52);
  if (v53_.v54 != 0) {
    v36 = std___1___shared_weak_count_lock_alt1(v53_.v54);
    v37 = v53_.v53;
    if (v53_.v54 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v53_.v54);
    }
    if (v36 != 0 && v37 != 0) {
      if (*(_BYTE*)(a1 + 1184) != 0) {
        v38 = "MID_RefineMenu_Result";
      }
      else {
        v38 = "MID_Sys_Result_Msg_Blacksmith_Change";
      }
      TextBoxEx_188ab20_alt1(v37, v38);
    }
    else if (v36 == 0) {
      goto LABEL_33;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak_alt1(v36);
      if ((*(_BYTE*)(a1 + 1184) & 1) != 0) {
        goto LABEL_46;
      }
      goto LABEL_34;
    }
  }
LABEL_33:
  if ((*(_BYTE*)(a1 + 1184) & 1) != 0) {
    goto LABEL_46;
  }
LABEL_34:
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 1176) + 337LL) & 4) != 0) {
    LayoutAccessor_1560070_alt1((void*)(&v53_.v53), v2, "L_Bg");
    if (v53_.v54 != 0) {
      v39 = std___1___shared_weak_count_lock_alt1(v53_.v54);
      v40 = v53_.v53;
      if (v53_.v54 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v53_.v54);
      }
      if (v39 != 0 && v40 != 0) {
        LayoutAccessor_1562cf0_alt1(v40, "Color0");
      }
      else if (v39 == 0) {
        goto LABEL_46;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
        std___1___shared_weak_count___release_weak_alt1(v39);
      }
    }
  }
LABEL_46:
  v41 = ui_LayoutAccessor_FindTextBox_alt1(v2, (__int64)"T_Txt");
  if (v41 != 0) {
    v42 = v41;
    v43 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(v2, (__int64)"T_Txt");
    if (v43 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)&v53_.v53, (__int64)v52, &v55, v43,
                               v43[27]);
      v44 = v52[0];
    }
    else {
      v44 = 0;
    }
    v45 = *(_BYTE*)(v42 + 88);
    *(_QWORD*)(v42 + 80) = v44;
    *(_BYTE*)(v42 + 88) = v45 | 0x10;
  }
  v46 = ui_LayoutAccessor_FindTextBox_alt1(
      v2, (__int64)"L_InfoDetail/L_InfoTitle/L_InfoTxt/T_Txt");
  if (v46 != 0) {
    v47 = v46;
    v48 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(
        v2, (__int64)"L_InfoDetail/L_InfoTitle/L_InfoTxt/T_Txt");
    if (v48 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)&v53_.v53, (__int64)v52, &v55, v48,
                               v48[27]);
      v49 = v52[0];
    }
    else {
      v49 = 0;
    }
    v50 = *(_BYTE*)(v47 + 88);
    *(_QWORD*)(v47 + 80) = v49;
    *(_BYTE*)(v47 + 88) = v50 | 0x10;
  }
  return GameRoutine_17356e0_alt1(v2, (__int64)"A_Contents");
}

#pragma GCC visibility pop
