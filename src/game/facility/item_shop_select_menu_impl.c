#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupImage(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*GameData_20f7640[])();
extern __int64 (*GameData_20f77c0[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_20f7088;
extern __int64* GameData_212e008[9];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20f7830[12];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ItemShopSelectMenu_1873c90(_BYTE* a1);
__int64 ItemShopSelectMenu_1873d80(_QWORD* a1);
__int64 ItemShopSelectMenu_1873eb0(__int64 a1);
__int64 ItemShopSelectMenu_18742d0(__int64 a1, __int64 a2, __int64 a3);

__int64 ItemShopSelectMenu_1873c90(_BYTE* a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  _QWORD v6[4];
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 1200LL))(a1) & 1) == 0) {
    goto LABEL_9;
  }
  GameRoutine_1560070((void*)&v8, a1 + 952, "L_PageTab");
  v6[0] = GameData_20f7640;
  v6[1] = a1;
  v2 = *(_QWORD*)a1;
  v7 = v6;
  v3 = (*(__int64 (**)(_BYTE*))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage(a1 + 656, &v8, v6, v3, 14, 15);
  if (v7 == v6) {
    v4 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_7;
    }
    v4 = 40;
  }
  (*(void (**)(void*))(*v7 + v4))(v7);

LABEL_7:
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }

LABEL_9:
  a1[1080] = ItemShopSelectMenu_1873d80(a1) & 1;
  return (*(__int64 (**)(_BYTE*, _BYTE*))(*(_QWORD*)a1 + 1256LL))(a1,
                                                                  a1 + 1072);
}

__int64 ItemShopSelectMenu_1873d80(_QWORD* a1)
{
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  char v15;
  __int64 v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1264LL))(a1) & 1) != 0) {
    v3 = 0;
    return v3 & 1;
  }
  v5 = a1[29];
  v4 = a1[30];
  v6 = v13;
  v15 = 0;
  v13[0] = GameData_20f77c0;
  v13[1] = &v15;
  v14 = v13;
  if (v4 == v5) {
    goto LABEL_14;
  }
  v7 = 0;
  v8 = GameData_212e008[0];
  do {
    v9 = *(_QWORD*)(v5 + 8 * v7);
    if (v9 != 0) {
      v10 = __dynamic_cast(v9, v8, &GameData_20f7088, 0);
      if (v10 == 0) {
        goto LABEL_5;
      }
      v16 = v10;
      if (v14 == nullptr) {
        GameRoutine_60a310(0);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v16) & 1) !=
          0) {
        break;
      }
      v5 = a1[29];
      v4 = a1[30];
    }
  LABEL_5:
    ++v7;
  } while (v7 < (v4 - v5) >> 3);
  v6 = v14;
  if (v14 != v13) {
    if (v14 != nullptr) {
      v11 = 40;
      goto LABEL_15;
    }
    goto LABEL_16;
  }

LABEL_14:
  v11 = 32;

LABEL_15:
  (*(void (**)(_QWORD*, __int64))(*v6 + v11))(v6, v2);

LABEL_16:
  v3 = v15;
  return v3 & 1;
}

__int64 ItemShopSelectMenu_1873eb0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8 v4;
  const char* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1) & 1) != 0) {
    v2 = *(unsigned int*)(a1 + 660);
    v3 = *(_QWORD*)(a1 + 672);
    if ((int)v2 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v3) >> 2)) {
      v2 = *(unsigned int*)(v3 + 4LL * (int)v2);
    }
    v4 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 1240LL))(a1, v2) - 1;
    if (v4 > 6u) {
      v5 = "MID_Menu_All";
    }
    else {
      v5 = GameData_20f7830[v4];
    }
  }
  else {
    v5 = "MID_Menu_Detail";
  }
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v9[0] = msg_TagSelector_vtable;
  v9[1] = 0xFFFF0001FFFF0000LL;
  v9[2] = 0xFFFF0004FFFF0002LL;
  v9[3] = 0xFFFF0006FFFF0005LL;
  v24 = 8;
  v10 = -65529;
  v11 = -65528;
  result = GameRoutine_a4dbe0(v6, v5, 0, v9);
  if (result != 0) {
    v8 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 952, "Menu_T_Type");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v8, 0);
    }
  }
  return result;
}

__int64 ItemShopSelectMenu_18742d0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD v6[3];
  char v7;
  _QWORD v8[3];
  char v9;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 560LL))(a2);
  v6[0] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 560LL))(a3);
  v6[1] = 0;
  v8[0] = v4;
  v8[1] = 0;
  v8[2] = 0;
  v9 = 0;
  v6[2] = 0;
  v7 = 0;
  return GameRoutine_19ef8e0(v8, v6) & 1;
}

#pragma GCC visibility pop
