#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15960f0(_QWORD);
__int64 GameRoutine_1596140(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15969c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 strlen(void);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* msg_MessageManager_empty_text_;
char* HelpQuestInfo_1256780(__int64 a1);
char* HelpQuestInfo_12568a0(__int64* a1);
char* HelpQuestInfo_12b3a80(__int64 a1);
__int64 HelpQuestInfo_15d4830(__int64 a1, __int64 a2);
__int64 HelpQuestInfo_15d4a40(__int64 result, __int64 a2);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");

char* HelpQuestInfo_1256780(__int64 a1)
{
  _QWORD* v1;
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD**)a1;
  if (*(_BYTE*)(a1 + 9) == 4) {
    v2 = (_BYTE*)v1[6];
    if (v2 != nullptr && *v2 != 0) {
      v3 = *(_QWORD*)(v1[3] + 192LL);
      if (v3 != 0) {
        v4 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        }
        v2 = *(_BYTE**)(v3 + 8 * v4 + 80);
      }
      return GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v2,
                                     0);
    }
  }
  v2 = (_BYTE*)v1[5];
  if (v2 != nullptr && *v2 != 0) {
    v5 = *(_QWORD*)(v1[3] + 192LL);
    if (v5 != 0) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      v2 = *(_BYTE**)(v5 + 8 * v6);
    }
    return GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v2, 0);
  }
  return msg_MessageManager_empty_text_;
}

char* HelpQuestInfo_12568a0(__int64* a1)
{
  __int64 v1;
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *a1;
  v2 = *(_BYTE**)(*a1 + 48);
  if (v2 != nullptr && *v2 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 192LL);
    if (v3 != 0) {
      v4 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      v2 = *(_BYTE**)(v3 + 8 * v4 + 80);
    }
    return GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v2, 0);
  }
  v2 = *(_BYTE**)(v1 + 40);
  if (v2 != nullptr && *v2 != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 192LL);
    if (v5 != 0) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      v2 = *(_BYTE**)(v5 + 8 * v6);
    }
    return GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v2, 0);
  }
  return msg_MessageManager_empty_text_;
}

char* HelpQuestInfo_12b3a80(__int64 a1)
{
  _QWORD* v1;
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD**)a1;
  if (*(_BYTE*)(a1 + 8) == 4) {
    v2 = (_BYTE*)v1[10];
    if (v2 != nullptr && *v2 != 0) {
      v3 = *(_QWORD*)(v1[3] + 88LL);
      if (v3 != 0) {
        v4 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        }
        v2 = *(_BYTE**)(v3 + 8 * v4 + 80);
      }
      return GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v2,
                                     0);
    }
  }
  v2 = (_BYTE*)v1[9];
  if (v2 != nullptr && *v2 != 0) {
    v5 = *(_QWORD*)(v1[3] + 88LL);
    if (v5 != 0) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      v2 = *(_BYTE**)(v5 + 8 * v6);
    }
    return GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v2, 0);
  }
  return msg_MessageManager_empty_text_;
}

__int64 HelpQuestInfo_15d4830(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  int v18;
  char v19;
  int v20;
  char v21;

  v4 = LayoutAccessor_155fbe0(a1, "L_IconQuest");
  v17 = v4;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 2;
  if (a2 != 0) {
    v5 = v4;
    if ((*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2) != 0) {
      if ((*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2) != 9) {
        v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
        v13 = strlen();
        GameRoutine_1596140(&v17, v12, v13);
        v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
        v15 = strlen();
        GameRoutine_15969c0(a1, v14, v15);
        goto LABEL_13;
      }
      v20 = 1;
      v6 = ui_LayoutAccessor_FindPane(v5, "IconQuest");
      if (v6 == 0) {
        goto LABEL_11;
      }
      v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
      if (v7 == 0) {
        goto LABEL_11;
      }
      v8 = v7;
      v9 = game_util_Format("IconQuest_%s", "SideStory");
    }
    else {
      v20 = 1;
      v10 = ui_LayoutAccessor_FindPane(v5, "IconQuest");
      if (v10 == 0) {
        goto LABEL_11;
      }
      v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
      if (v11 == 0) {
        goto LABEL_11;
      }
      v8 = v11;
      v9 = game_util_Format("IconQuest_%s", "Main");
    }
    GameRoutine_136a920(ui_Manager_instance_ + 1264, v8, 0, 7, v9);
  LABEL_11:
    HelpQuestInfo_15d4a40(&v17, a2);
    ui_LayoutAccessor_SetPaneVisible(a1, "IconQuestKind", 0);
  }

LABEL_13:
  result = HelpQuestInfo_15d4a40(&v17, a2);
  if ((v19 & 1) == 0) {
    result = LayoutAccessor_155ea30(v17);
    if ((result & 1) != 0 && (v21 & 1) == 0) {
      LayoutAccessor_1562cf0(v17, "Status_Default");
      return LayoutAccessor_1562cf0(v17, "Enable");
    }
  }
  return result;
}

__int64 HelpQuestInfo_15d4a40(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  const char* v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  const char* v9;

  v3 = result;
  if (a2 == 0) {
  LABEL_13:
    if ((*(_BYTE*)(v3 + 12) & 1) != 0) {
      return result;
    }
    return LayoutAccessor_155e830(*(_QWORD*)v3, a2 != 0);
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 96LL))(a2) & 1) != 0) {
    v4 = *(_QWORD*)v3;
    v5 = "Status_Check";
  LABEL_4:
    *(_DWORD*)(v3 + 16) = 1;
    LayoutAccessor_1562cf0(v4, v5);
    v6 = *(_QWORD*)v3;
    v7 = "Enable";
  LABEL_12:
    result = LayoutAccessor_1562cf0(v6, v7);
    *(_BYTE*)(v3 + 20) = 1;
    goto LABEL_13;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 112LL))(a2) & 1) != 0) {
    v8 = *(_QWORD*)v3;
    v9 = "Status_Disable";
    goto LABEL_9;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 104LL))(a2) & 1) != 0) {
    v8 = *(_QWORD*)v3;
    v9 = "Status_Complete";
  LABEL_9:
    *(_DWORD*)(v3 + 16) = 1;
    LayoutAccessor_1562cf0(v8, v9);
    v6 = *(_QWORD*)v3;
    if (*(_DWORD*)(v3 + 8) == 3) {
      v7 = "Disable";
    }
    else {
      v7 = "Enable";
    }
    goto LABEL_12;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 88LL))(a2) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 144LL))(a2) & 1) != 0) {
    v4 = *(_QWORD*)v3;
    v5 = "Status_Accept";
    goto LABEL_4;
  }
  result = GameRoutine_15960f0(v3);
  if ((*(_BYTE*)(v3 + 12) & 1) == 0) {
    return LayoutAccessor_155e830(*(_QWORD*)v3, a2 != 0);
  }
  return result;
}

#pragma GCC visibility pop
