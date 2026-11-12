#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64,
                                                 __int64);
__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__int64 GameRoutine_15d20e0(__int64, unsigned __int16*, __int64);
__int64 InfoTitle_18b9330(__int64, unsigned __int16*);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 Pane_58f8a0(__int64);
__int64 UnitUtil_1212520(unsigned __int16*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_158dbc0(__int64 result, _WORD*, __int64, char);
__int64 game_gameui_158df80(__int64, unsigned __int16*, unsigned __int16*,
                            __int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, __int64, int, ...);
__int64 game_gameui_anonymous_15d2000_alt1(
    __int64* a1, unsigned __int16* a2,
    __int64 a3) __asm__("game_gameui_anonymous_15d2000");
__int64 game_gameui_anonymous_15d2280_alt1(
    __int64* a1, unsigned __int16* a2, _QWORD* a3,
    __int64 a4) __asm__("game_gameui_anonymous_15d2280");
__int64 game_gameui_anonymous_15d23a0(__int64* a1, unsigned __int16* a2);
__int64 game_gameui_anonymous_15d2480(__int64* a1, unsigned __int16* a2);
__int64 game_gameui_anonymous_15d2540(__int64* a1, unsigned __int16* a2,
                                      __int64 a3);
__int64 game_gameui_anonymous_15d2830_alt1(
    __int64* a1, unsigned __int16* a2,
    __int64 a3) __asm__("game_gameui_anonymous_15d2830");
__int64 game_gameui_anonymous_15da580(__int64 result, _DWORD* a2);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_15d20e0_alt1(__int64*, unsigned __int16*,
                              __int64) __asm__("GameRoutine_15d20e0");
void game_gameui_158dbc0_alt1(__int64*, _WORD*, __int64,
                              char) __asm__("game_gameui_158dbc0");
void game_gameui_158df80_alt1(__int64*, unsigned __int16*, unsigned __int16*,
                              __int64) __asm__("game_gameui_158df80");
void game_gameui_anonymous_15d2000(__int64* a1, unsigned __int16* a2,
                                   __int64 a3);
void game_gameui_anonymous_15d2280(__int64* a1, unsigned __int16* a2,
                                   _QWORD* a3, __int64 a4);
void game_gameui_anonymous_15d2830(__int64* a1, unsigned __int16* a2,
                                   __int64 a3);

void game_gameui_anonymous_15d2000(__int64* a1, unsigned __int16* a2,
                                   __int64 a3)
{
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  LayoutAccessor_1562cf0_alt1((__int64)a1, (unsigned int*)"Status08");
  v8[0] = "L_InfoTitle";
  v8[1] = 11;
  GameRoutine_13fa520((void*)(&v9_.v9), a1, v8);
  if (v9_.v10 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v9_.v10);
    v7 = v9_.v9;
    if (v9_.v10 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v9_.v10);
    }
    if (v6 != 0 && v7 != 0) {
      InfoTitle_18b9330(v7, a2);
    }
    else if (v6 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
LABEL_10:
  GameRoutine_15d20e0_alt1(a1, a2, a3);
}

void game_gameui_anonymous_15d2280(__int64* a1, unsigned __int16* a2,
                                   _QWORD* a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  LayoutAccessor_1562cf0_alt1((__int64)a1, (unsigned int*)"Status08");
  v10[0] = "L_InfoTitle";
  v10[1] = 11;
  GameRoutine_13fa520((void*)(&v11_.v11), a1, v10);
  if (v11_.v12 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v11_.v12);
    v9 = v11_.v11;
    if (v11_.v12 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v11_.v12);
    }
    if (v8 != 0 && v9 != 0) {
      InfoTitle_18b9330(v9, a2);
    }
    else if (v8 == 0) {
      goto LABEL_9;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v8);
      if (a4 != 0) {
        goto LABEL_10;
      }
      goto LABEL_12;
    }
  }
LABEL_9:
  if (a4 != 0) {
  LABEL_10:
    v11_.v11 = *(_QWORD*)a2;
    v10[0] = *a3;
    game_gameui_158df80_alt1(a1, (unsigned __int16*)&v11_.v11,
                             (unsigned __int16*)v10, a4);
    return;
  }
LABEL_12:
  game_gameui_158dbc0_alt1(a1, a2, (__int64)a3, 0);
}

__int64 game_gameui_anonymous_15d23a0(__int64* a1, unsigned __int16* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1562cf0_alt1((__int64)a1, (unsigned int*)"Status08");
  game_gameui_158dbc0_alt1(a1, a2, 0, 0);
  v7[0] = "L_InfoTitle";
  v7[1] = 11;
  GameRoutine_13fa520((void*)(&v8_.v8), a1, v7);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v8_.v9);
    v6 = v8_.v8;
    result = v8_.v9;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v8_.v9);
    }
    if (v5 != 0 && v6 != 0) {
      result = InfoTitle_18b9330(v6, a2);
    }
    else if (v5 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  return result;
}

__int64 game_gameui_anonymous_15d2480(__int64* a1, unsigned __int16* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1562cf0_alt1((__int64)a1, (unsigned int*)"Default");
  v7[0] = "L_InfoTitle";
  v7[1] = 11;
  GameRoutine_13fa520((void*)(&v8_.v8), a1, v7);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v8_.v9);
    v6 = v8_.v8;
    result = v8_.v9;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v8_.v9);
    }
    if (v5 != 0 && v6 != 0) {
      result = InfoTitle_18b9330(v6, a2);
    }
    else if (v5 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  return result;
}

__int64 game_gameui_anonymous_15d2540(__int64* a1, unsigned __int16* a2,
                                      __int64 a3)
{
  __int64 v5;
  __int64 result;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
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
    __int64 v36;
    __int64 v37;
  } v23_;
  int v38;

  game_gameui_anonymous_15d2000_alt1(a1, a2, a3);
  v5 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0 && *(_BYTE*)(v5 + 9) == 1 &&
      *(_DWORD*)(v5 + 136) == 1) {
    return LayoutAccessor_1562cf0((__int64)a1, (__int64)"Status08");
  }
  LayoutAccessor_1562cf0((__int64)a1, (__int64)"Status08_Stock");
  v8 = GameData_212c878[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                72LL) == 15) {
    v23_.v25 = -1;
    v23_.v26 = -1;
    v23_.v27 = -1;
    v23_.v28 = -1;
    v9 = *msg_MessageManager_instance__ptr[0];
    v23_.v29 = -1;
    v23_.v30 = -1;
    v23_.v31 = -1;
    v23_.v32 = -1;
    v23_.v33 = -1;
    v23_.v34 = -1;
    v23_.v35 = -1;
    v23_.v36 = -1;
    v23_.v23[0] = GameData_212e348 + 2;
    v23_.v23[1] = 0xFFFF0001FFFF0000LL;
    v23_.v23[2] = 0xFFFF0004FFFF0002LL;
    v23_.v23[3] = 0xFFFF0006FFFF0005LL;
    v23_.v37 = 8;
    v23_.v24 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v10 = GameRoutine_a4dbe0(v9, "MID_Sys_ValueEmpty", 0);
    if (v10 != nullptr) {
      v11 = (__int64)v10;
      v12 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_StockNum");
      if (v12 != 0) {
        GameRoutine_156c5d0(v12, v11, 0);
      }
    }
  }
  else {
    v13 = UnitUtil_1212520(a2);
    v14 = ui_LayoutAccessor_FindPane(a1, (__int64)"T_StockNum");
    if (v14 != 0) {
      v15 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d690, 0);
      if (v15 != 0) {
        GameRoutine_156c910(v15, (__int64)"%d", 1, v13);
      }
    }
  }
  v16 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * *a2);
  if ((((0x10000000000LL << *(_BYTE*)(v16 + 72)) |
        (1LL << *(_BYTE*)(v16 + 73))) &
       0xFFBFFFFFFFA39FFFLL) == 0) {
    v38 = 0;
    v18 = *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                      8LL);
    v23_.v24 = v23_.v23;
    v23_.v23[0] = GameData_212d7f0[0] + 2;
    v23_.v23[1] = &v38;
    game_TransporterConst_List_Impl_EachData(v18, v16, (__int64)v23_.v23);
    if (v23_.v24 == v23_.v23) {
      v19 = 32;
    }
    else {
      if (v23_.v24 == nullptr) {
      LABEL_19:
        v20 = *a2;
        if (*a2 != 0) {
          v21 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v20);
          if ((((0x10000000000LL << *(_BYTE*)(v21 + 72)) |
                (1LL << *(_BYTE*)(v21 + 73))) &
               0xFFBFFFFFFFA39FFFLL) != 0) {
            LODWORD(v20) = 1;
          }
          else {
            LODWORD(v20) = 999;
          }
        }
        if (v38 >= (int)v20) {
          v22 = (char*)GameData_212da30 + 60;
        }
        else {
          v22 = (char*)GameData_212da30 + 36;
        }
        v17 = *(_DWORD*)v22;
        goto LABEL_27;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v23_.v24 + v19))((__int64)v23_.v24);
    goto LABEL_19;
  }
  v17 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
LABEL_27:
  result = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_StockNum");
  if (result != 0) {
    result = Pane_58f8a0(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v17;
    }
  }
  return result;
}

void game_gameui_anonymous_15d2830(__int64* a1, unsigned __int16* a2,
                                   __int64 a3)
{
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  LayoutAccessor_1562cf0_alt1((__int64)a1, (unsigned int*)"Status07");
  v8[0] = "L_InfoTitle";
  v8[1] = 11;
  GameRoutine_13fa520((void*)(&v9_.v9), a1, v8);
  if (v9_.v10 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v9_.v10);
    v7 = v9_.v9;
    if (v9_.v10 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v9_.v10);
    }
    if (v6 != 0 && v7 != 0) {
      InfoTitle_18b9330(v7, a2);
    }
    else if (v6 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
LABEL_10:
  GameRoutine_15d20e0_alt1(a1, a2, a3);
}

__int64 game_gameui_anonymous_15da580(__int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  __int64 v10;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                               8LL * (*a2 & 0xFFF)) +
                    576LL);
    if (v2 != 0) {
      v3 = *(unsigned __int16*)(v2 + 16);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v3) +
                    73LL) == 17) {
        v4 = result;
        nn_os_LockMutex(&game_g_random_mutex);
        v5 = game_map_MapRandom_instance__ptr[0];
        v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL));
        v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v8 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
             (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v5 + 1) = v6;
        v9 = (v8 >> 8) ^ (v7 >> 19) ^ v8 ^ v7;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v7;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v9;
        nn_os_UnlockMutex(&game_g_random_mutex);
        result = v4;
        LODWORD(v2) =
            (16 * ((_WORD)v9 -
                   1000 * (unsigned __int16)((v9 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
      else {
        LODWORD(v2) = 1;
      }
    }
    else {
      LOWORD(v3) = 0;
    }
    v10 = *(_QWORD*)(result + 8);
    *(_WORD*)v10 = v3;
    *(_WORD*)(v10 + 2) = 0;
    *(_DWORD*)(v10 + 4) = v2;
  }
  return result;
}

#pragma GCC visibility pop
