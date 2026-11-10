#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a06650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_e92660(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1566d90(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
extern __int64 (*GameData_1fe9888[])();
extern __int64 (*GameData_1fe9908[])();
extern __int64 (*game_gmap_GmapTalkMenu_vtable[])();
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern __int64* GameData_212c878[6];
extern __int64* game_g_empty_item_ptr;
extern int GameData_2167728;
__int64 game_menu_anonymous_TalkSelectGiftMenuItem_ACall(__int64 a1);
__int64
game_menu_anonymous_TalkSelectGiftMenuItem_ACall_closure_Invoke(__int64 a1);

__int64 game_menu_anonymous_TalkSelectGiftMenuItem_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  _QWORD v17[4];
  _QWORD* v18;
  _QWORD v19[4];
  _QWORD* v20;
  _QWORD v21[4];
  _QWORD* v22;
  const char* v23;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v3 = *(_QWORD*)(v1 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  v23 = "MID_Menu_ItemSend_Confirm";
  v4 = *(_DWORD*)(a1 + 40);
  v5 = game_g_empty_item_ptr;
  v6 = game_TransporterConst_List_instance__ptr[0];
  if ((v4 & 0x80000000) != 0 ||
      (v7 = *(
           unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * v4 + 4)) == 0) {
    v7 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v8 = GameData_212c878[0];
  v9 = GameRoutine_6ed030(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v7));
  v21[0] = GameData_1fe9888;
  v21[1] = a1;
  v20 = v19;
  v18 = v17;
  v22 = v21;
  v19[0] = GameData_1fe9908;
  v17[0] = GameData_1fe9908;
  v10 = GameRoutine_e92660(v3, &v23, v9, v21, v19, v17);
  if (v18 == v17) {
    v11 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_12;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v18 + v11))((__int64)v18);
LABEL_12:
  if (v20 == v19) {
    v12 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_17;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v20 + v12))((__int64)v20);
LABEL_17:
  if (v22 == v21) {
    v13 = 32;
    goto LABEL_21;
  }
  if (v22 != nullptr) {
    v13 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v22 + v13))((__int64)v22);
  }
  v14 = *(_DWORD*)(a1 + 40);
  if ((v14 & 0x80000000) != 0 ||
      (v15 = *(
           unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 8LL) + 8LL) +
                              12LL * v14 + 4)) == 0) {
    v15 = *(unsigned __int16*)v5;
  }
  GameRoutine_1a06650(v10 + 1496, *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * v15),
                      1);
  return 12;
}

__int64

game_menu_anonymous_TalkSelectGiftMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 8);
  GameData_2167728 = *(_DWORD*)(v1 + 40);
  do {
    v2 = *(_QWORD*)(v2 + 32);
    if (v2 == 0) {
      return 4;
    }
  } while (*(__int64 (***)())v2 != game_gmap_GmapTalkMenu_vtable);
  if (game_gameui_Header_instance_ != 0) {
    LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return 5;
}

#pragma GCC visibility pop
