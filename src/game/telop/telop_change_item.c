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
void TelopChangeItem_Unknown57(__int64 a1);

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
  v6 = 0u;
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
  GameRoutine_1562cf0(a1 + 168, (char*)&v6 + 1);
  return GameRoutine_1562cf0(a1 + 168, "Type_TitleOff");
}

void TelopChangeItem_Unknown57(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  const char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  _QWORD v44[2];
  __int64 v45;
  __int64 v46;
  _BYTE v47[4];

  v2 = (_QWORD*)GameRoutine_1760e40(a1, 19);
  LayoutAccessor_1562cf0(v2, "ItemSkill");
  v3 = GameRoutine_6ed030(*(_QWORD*)(a1 + 1168));
  if (v3 != 0) {
    v4 = v3;
    v5 = ui_LayoutAccessor_FindTextBox(v2, "T_Item");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  v6 = ui_LayoutAccessor_FindPane(v2, "ItemIcon");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
    if (v7 != 0 && *(_QWORD*)(a1 + 1168) != 0) {
      Manager_136a920(ui_Manager_instance_ + 1264, v7, 0, 2);
    }
  }
  v8 = LayoutAccessor_155fbe0(v2, "L_InfoDetail");
  v45 = 0;
  v9 = *(_QWORD*)(a1 + 1176);
  v10 = GameData_212c878[0];
  if (v9 != 0) {
    v11 = *(unsigned __int16*)(v9 + 16);
    HIDWORD(v45) = 1;
    v12 = *GameData_212c878[0];
    LOWORD(v45) = v11;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) + 8 * v11) + 73LL) == 17) {
      v13 = v8;
      nn_os_LockMutex(&game_g_random_mutex);
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
      nn_os_UnlockMutex(&game_g_random_mutex);
      v8 = v13;
      HIDWORD(v45) =
          (16 * ((_WORD)v18 -
                 1000 * (unsigned __int16)((v18 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v19 = *(_QWORD*)(a1 + 1168);
  v44[0] = 0;
  if (v19 != 0) {
    v20 = *(unsigned __int16*)(v19 + 16);
    HIDWORD(v44[0]) = 1;
    v21 = *v10;
    LOWORD(v44[0]) = v20;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) + 8 * v20) + 73LL) == 17) {
      v22 = v8;
      nn_os_LockMutex(&game_g_random_mutex);
      v23 = game_map_MapRandom_instance__ptr[0];
      v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v25 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v26 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v23 + 1) = v24;
      v27 = (v26 >> 8) ^ (v25 >> 19) ^ v26 ^ v25;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v25;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v27;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v8 = v22;
      HIDWORD(v44[0]) =
          (16 * ((_WORD)v27 -
                 1000 * (unsigned __int16)((v27 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  game_gameui_anonymous_15d2280(v8, &v45, v44, 0);
  v44[0] = "L_Txt";
  v44[1] = 5;
  GameRoutine_9b8fe0((void*)(&v45), v2, v44);
  if (v46 != 0) {
    v28 = std___1___shared_weak_count_lock(v46);
    v30 = v45;
    if (v46 != 0) {
      *(__n128*)&v29 = std___1___shared_weak_count___release_weak();
    }
    if (v28 != 0 && v30 != 0) {
      if (*(_BYTE*)(a1 + 1184) != 0) {
        v31 = "MID_RefineMenu_Result";
      }
      else {
        v31 = "MID_Sys_Result_Msg_Blacksmith_Change";
      }
      TextBoxEx_188ab20(v30, v31, v29);
    }
    else if (v28 == 0) {
      goto LABEL_25;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak();
      if ((*(_BYTE*)(a1 + 1184) & 1) != 0) {
        goto LABEL_38;
      }
      goto LABEL_26;
    }
  }
LABEL_25:
  if ((*(_BYTE*)(a1 + 1184) & 1) != 0) {
    goto LABEL_38;
  }
LABEL_26:
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 1176) + 337LL) & 4) != 0) {
    LayoutAccessor_1560070((void*)(&v45), v2, "L_Bg");
    if (v46 != 0) {
      v32 = std___1___shared_weak_count_lock(v46);
      v33 = v45;
      if (v46 != 0) {
        std___1___shared_weak_count___release_weak();
      }
      if (v32 != 0 && v33 != 0) {
        LayoutAccessor_1562cf0(v33, "Color0");
      }
      else if (v32 == 0) {
        goto LABEL_38;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
LABEL_38:
  v34 = ui_LayoutAccessor_FindTextBox(v2, "T_Txt");
  if (v34 != 0) {
    v35 = v34;
    v36 = ui_LayoutAccessor_FindTextBox(v2, "T_Txt");
    if (v36 != 0) {
      GameRoutine_190a0c0(&v45, v44, v47, v36, *(_QWORD*)(v36 + 216));
      v37 = v44[0];
    }
    else {
      v37 = 0;
    }
    v38 = *(_BYTE*)(v35 + 88);
    *(_QWORD*)(v35 + 80) = v37;
    *(_BYTE*)(v35 + 88) = v38 | 0x10;
  }
  v39 = ui_LayoutAccessor_FindTextBox(
      v2, "L_InfoDetail/L_InfoTitle/L_InfoTxt/T_Txt");
  if (v39 != 0) {
    v40 = v39;
    v41 = ui_LayoutAccessor_FindTextBox(
        v2, "L_InfoDetail/L_InfoTitle/L_InfoTxt/T_Txt");
    if (v41 != 0) {
      GameRoutine_190a0c0(&v45, v44, v47, v41, *(_QWORD*)(v41 + 216));
      v42 = v44[0];
    }
    else {
      v42 = 0;
    }
    v43 = *(_BYTE*)(v40 + 88);
    *(_QWORD*)(v40 + 80) = v42;
    *(_BYTE*)(v40 + 88) = v43 | 0x10;
  }
  GameRoutine_17356e0(v2, (__int64)"A_Contents");
}

#pragma GCC visibility pop
