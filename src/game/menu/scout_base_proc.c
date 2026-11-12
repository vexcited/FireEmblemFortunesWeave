#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f6c320(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 HubTalkNatives_e14270(_QWORD, _QWORD);
__int64 ScoutBaseProc_f6c060_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD) __asm__("ScoutBaseProc_f6c060");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1ff6f10[])();
extern __int64 (*GameData_1ff6f90[])();
extern __int64 (*GameData_1ff7090[])();
extern __int64 (*GameData_1ff7110[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_2262bf8;
extern char** msg_MessageManager_empty_text__ptr;
__int64 game_menu_ScoutBaseProc_ShowYesNoDialog(__int64 a1, __int64 a2,
                                                char* a3, char* a4);
__int64 ScoutBaseProc_f6c060_alt2(__int64 a1, __int64* a2, __int64 a3,
                                  __int64 a4, __int64 a5,
                                  __int64 a6) __asm__("ScoutBaseProc_f6c060");
__int64 game_menu_ScoutBaseProc_ShowItemDialog_alt1(
    __int64* a1, __int64 a2,
    char a3) __asm__("game_menu_ScoutBaseProc_ShowItemDialog");
__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda0_Invoke(__int64 a1);
__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda1_Invoke(__int64 a1);
__int64 game_menu_ScoutBaseProc_ShowItemDialog_lambda1_Invoke(__int64 a1);
__attribute__((swiftcall)) void GameSituation_906320(PSEUDO_X8, __int64,
                                                     __int64*);
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD*,
                                                        _QWORD*, int);
__int64 GameRoutine_171ef60(__int64, __int64);
__int64 UnitUtil_1212be0(__int64, __int64);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2019958[])();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_menu_ScoutBaseProc_ShowItemDialog_lambda0_Invoke(__int64 a1);
_QWORD* GameHr_f6c320(__int64, _BYTE**, const char*, __int64, __int64, __int64);
_QWORD* ScoutBaseProc_f6c060_alt3(__int64, const char**, const char*, __int64,
                                  __int64,
                                  __int64) __asm__("ScoutBaseProc_f6c060");
__int64 GameRoutine_16477d0_alt1(__int64, const char*, __int64,
                                 __int64) __asm__("GameRoutine_16477d0");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 HubTalkNatives_e14270_alt1(__int64,
                                   __int64) __asm__("HubTalkNatives_e14270");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
_QWORD* ScoutBaseProc_f6c060(__int64 a1, _BYTE** a2, const char* a3, __int64 a4,
                             __int64 a5, __int64 a6);
_QWORD* game_menu_ScoutBaseProc_ShowItemDialog(_QWORD** a1, __int64 a2,
                                               char a3);

__int64 game_menu_ScoutBaseProc_ShowYesNoDialog(__int64 a1, __int64 a2,
                                                char* a3, char* a4)
{
  char v4;
  const char* v5;
  char v6;
  bool v7;
  const char* v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  const char* v21;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a1 + 8) = 0;
  v4 = *a3;
  v5 = *((const char**)a3 + 2);
  v6 = *a4;
  v19_.v20 = v19_.v19;
  v15_.v16 = v15_.v15;
  v7 = (v4 & 1) == 0;
  v19_.v19[0] = GameData_1ff6f10;
  v19_.v19[1] = a1;
  v8 = *((const char**)a4 + 2);
  if (v7) {
    v5 = a3 + 1;
  }
  v21 = v5;
  v17_.v17[0] = GameData_1ff6f90;
  v17_.v17[1] = a1;
  v15_.v15[0] = GameData_1ff6f90;
  v15_.v15[1] = a1;
  if ((v6 & 1) != 0) {
    v9 = v8;
  }
  else {
    v9 = a4 + 1;
  }
  v17_.v18 = v17_.v17;
  ScoutBaseProc_f6c060_alt3(a2, &v21, v9, (__int64)v19_.v19, (__int64)v17_.v17,
                            (__int64)v15_.v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v15_.v16 == v15_.v15) {
    v11 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_12;
    }
    v11 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v15_.v16 + v11))(v15_.v16, v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_12:
  if (v17_.v18 == v17_.v17) {
    v12 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_17;
    }
    v12 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v17_.v18 + v12))(v17_.v18, v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_17:
  result = (__int64)v19_.v20;
  if (v19_.v20 == v19_.v19) {
    v14 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      return result;
    }
    v14 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64))(*v19_.v20 + v14))(v19_.v20, v10);
}

_QWORD* ScoutBaseProc_f6c060(__int64 a1, _BYTE** a2, const char* a3, __int64 a4,
                             __int64 a5, __int64 a6)
{
  _BYTE* v6;
  __int64 v10;
  __int64* v11;
  const char* v12;
  __int64 v13;
  char* v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    int v21;
    int v22;
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
  } v20_;

  v6 = *a2;
  if (*a2 != nullptr) {
    v10 = a1;
    v11 = msg_MessageManager_instance__ptr[0];
    if (a3 != nullptr) {
      v12 = a3;
    }
    else {
      v12 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v12);
    v13 = *v11;
    v20_.v23 = -1;
    v20_.v24 = -1;
    v20_.v25 = -1;
    v20_.v26 = -1;
    v20_.v27 = -1;
    v20_.v28 = -1;
    v20_.v29 = -1;
    v20_.v30 = -1;
    v20_.v31 = -1;
    v20_.v32 = -1;
    v20_.v33 = -1;
    v20_.v34 = -1;
    v20_.v20[0] = GameData_212e348 + 2;
    v20_.v20[1] = 0xFFFF0001FFFF0000LL;
    v20_.v20[2] = 0xFFFF0004FFFF0002LL;
    v20_.v20[3] = 0xFFFF0006FFFF0005LL;
    v20_.v35 = 8;
    v20_.v21 = -65529;
    v20_.v22 = -65528;
    v14 = GameRoutine_a4dbe0_alt1(v13, v6, 0);
    a1 = v10;
  }
  else {
    v14 = nullptr;
  }
  v20_.v20[0] = v14;
  v15 = (_QWORD*)HubTalkNatives_e14270_alt1(a1, (__int64)v20_.v20);
  if (v15 != nullptr) {
    v16 = (__int64*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
    GameRoutine_16477d0_alt1(v17, "MID_Sys_Yes", a4, a6);
    BasicMenuCursor_16e0c00_alt1(v15, v17);
    v18 = fw_memory_HeapManager_Allocate_alt1(*v16, 192, 16, 0);
    GameRoutine_16477d0_alt1(v18, "MID_Sys_No", a5, a6);
    BasicMenuCursor_16e0c00_alt1(v15, v18);
  }
  return v15;
}

_QWORD* game_menu_ScoutBaseProc_ShowItemDialog(_QWORD** a1, __int64 a2, char a3)
{
  _QWORD* v4;
  char* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    _QWORD v17[3];
    char v18;
    char gap121_[7];
    _QWORD* v19;
  } v17_;
  const char* v20;

  v4 = *a1;
  v20 = "MID_LGV_Scout_Terms_Confirm_m01_001";
  v7 = GameHr_67ed20(v4);
  v17_.v17[1] = a1;
  v17_.v17[2] = a2;
  v17_.v18 = a3;
  v17_.v17[0] = GameData_1ff7090;
  v15_.v16 = v15_.v15;
  v17_.v19 = v17_.v17;
  v15_.v15[0] = GameData_1ff7110;
  v15_.v15[1] = a1;
  v13_.v13[0] = GameData_1ff7110;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  v8 = GameHr_f6c320(a2, (_BYTE**)&v20, v7, (__int64)v17_.v17,
                     (__int64)v15_.v15, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v9 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_6;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v9))((__int64)v13_.v14);
LABEL_6:
  if (v15_.v16 == v15_.v15) {
    v10 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_11;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v10))((__int64)v15_.v16);
LABEL_11:
  if (v17_.v19 == v17_.v17) {
    v11 = 32;
    goto LABEL_15;
  }
  if (v17_.v19 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v17_.v19 + v11))((__int64)v17_.v19);
  }
  return v8;
}

__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 8) = 1;
  return 2;
}

__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 8) = 0;
  return 3;
}

__int64 game_menu_ScoutBaseProc_ShowItemDialog_lambda0_Invoke(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  struct {
    __int64 v45;
    __int64 v46;
  } v45_;
  struct {
    _QWORD v47[4];
    _QWORD* v48;
    char gap56_[8];
    __int64 v49;
  } v47_;
  int v50;

  v1 = *(__int64**)(a1 + 8);
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v2 = *v1;
    v3 = *(_QWORD*)(a1 + 16);
    v45_.v45 = 0;
    v45_.v46 = v2;
    GameSituation_906320((void*)(v47_.v47), game_GameModeData_instance_ + 136,
                         &v45_.v45);
    GameRoutine_171ef60(v3, v47_.v49);
    return 2;
  }
  v4 = *v1;
  v45_.v45 = 0;
  v45_.v46 = v4;
  GameSituation_906320((void*)(v47_.v47), game_GameModeData_instance_ + 136,
                       &v45_.v45);
  v6 = *(unsigned __int8*)(v47_.v49 + 72);
  if (v6 == 1) {
    v11 = *(_QWORD*)(v47_.v49 + 88);
    v12 = *(unsigned __int16*)(v47_.v49 + 96);
    v47_.v47[0] = 0;
    if (v11 != 0) {
      v13 = *(unsigned __int16*)(v11 + 16);
      HIDWORD(v47_.v47[0]) = 1;
      LOWORD(v47_.v47[0]) = v13;
      v14 = GameData_212c878[0];
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v13) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v15 = game_map_MapRandom_instance__ptr[0];
        v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v17 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v18 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v15 + 1) = v16;
        v19 = (v18 >> 8) ^ (v17 >> 19) ^ v18 ^ v17;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15) = v17;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 4) = v19;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v47_.v47[0]) =
            (16 * ((_WORD)v19 -
                   1000 * (unsigned __int16)((v19 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
      if ((int)UnitUtil_1212be0((__int64)v47_.v47, 0) < v12) {
        goto LABEL_20;
      }
      v20 = *v14;
      v45_.v45 = 0x100000000LL;
      v21 = *(_QWORD*)(v20 + 64);
      LOWORD(v45_.v45) = *(_WORD*)(v11 + 16);
      if (*(_BYTE*)(*(_QWORD*)(v21 + 8LL * (unsigned __int16)v45_.v45) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
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
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v45_.v45) =
            (16 * ((_WORD)v26 -
                   1000 * (unsigned __int16)((v26 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    else {
      if ((int)UnitUtil_1212be0((__int64)v47_.v47, 0) < v12) {
        goto LABEL_20;
      }
      v45_.v45 = 0;
    }
    v28 = v47_.v47;
    v50 = 0;
    v47_.v47[0] = GameData_2019958;
    v47_.v47[1] = &v45_.v45;
    v47_.v48 = v47_.v47;
    v47_.v47[2] = &v50;
    v29 = game_TransporterConst_List_instance__ptr[0];
    v30 =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v31 = *(unsigned int*)(v30 + 80);
    if ((int)v31 < 1) {
      goto LABEL_33;
    }
    v32 = 0;
    v33 = 12 * v31;
    do {
      if (*(_WORD*)(*(_QWORD*)(v30 + 8) + v32 + 2) != 0) {
        if (v47_.v48 == nullptr) {
          GameRoutine_60a310();
        }
        (*(void (**)(_QWORD*))(*v47_.v48 + 48LL))(v47_.v48);
      }
      v32 += 12;
    } while (v33 != v32);
    v28 = v47_.v48;
    if (v47_.v48 == v47_.v47) {
    LABEL_33:
      v34 = 32;
    }
    else {
      if (v47_.v48 == nullptr) {
        goto LABEL_35;
      }
      v34 = 40;
    }
    (*(void (**)(__int64))(*v28 + v34))((__int64)v28);
  LABEL_35:
    v27 = 0;
    if (v12 == 0 || v50 < v12) {
      goto LABEL_21;
    }
    v35 = GameData_212c878[0];
    v36 = game_map_MapRandom_instance__ptr[0];
    do {
      v47_.v47[0] = 0;
      if (v11 != 0) {
        v37 = *v35;
        v38 = *(unsigned __int16*)(v11 + 16);
        HIDWORD(v47_.v47[0]) = 1;
        v39 = *(_QWORD*)(v37 + 64);
        LOWORD(v47_.v47[0]) = v38;
        if (*(_BYTE*)(*(_QWORD*)(v39 + 8 * v38) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v40 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v36);
          v41 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v36 + 4);
          v42 = *(_DWORD*)v36 ^ (*(_DWORD*)v36 << 11);
          *(_DWORD*)v36 = *((_DWORD*)v36 + 1);
          *((_DWORD*)v36 + 1) = v40;
          v43 = (v42 >> 8) ^ (v41 >> 19) ^ v42 ^ v41;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v36) = v41;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v36 + 4) = v43;
          nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v47_.v47[0]) =
              HIDWORD(v47_.v47[0]) & 0xFFFFC00F |
              (16 *
               (((16 * (v43 - 1000 * ((v43 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      TransporterConst_89b3d0((void*)((__int64)&v45_.v45),
                              *(_QWORD**)(*(_QWORD*)v29 + 8LL), v47_.v47, 1);
      --v12;
    } while (v12 != 0);
  LABEL_42:
    *((_DWORD*)v1 + 3) = 0;
    return 2;
  }
  if (v6 != 2) {
    goto LABEL_42;
  }
  v7 = *(unsigned __int16*)(v47_.v49 + 96);
  if (game_GameModeData_instance_ == 0) {
    if (*(_WORD*)(v47_.v49 + 96) != 0) {
      v27 = 2;
    }
    else {
      v27 = 0;
    }
    goto LABEL_21;
  }
  v8 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  v9 = __OFSUB__(v8, v7);
  v10 = v8 - v7;
  if (v10 < 0 != v9) {
  LABEL_20:
    v27 = 2;
  LABEL_21:
    *((_DWORD*)v1 + 3) = v27;
    return 2;
  }
  if ((unsigned int)v10 >= 0x98967F) {
    v10 = 9999999;
  }
  *(_DWORD*)(game_GameModeData_instance_ + 72) = v10;
  *((_DWORD*)v1 + 3) = 0;
  return 2;
}

__int64 game_menu_ScoutBaseProc_ShowItemDialog_lambda1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 12) = 1;
  GameData_2262bf8 = 0;
  return 3;
}

#pragma GCC visibility pop
