#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fa80c0[])();
extern __int64 (*GameData_1fe9a18[])();
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_menu_TalkSelectGiftMenu_HasListItem(__int64 a1, __int64 a2,
                                                 __int64 a3);
__int64 game_menu_TalkSelectGiftMenu_HasListItem_lambda0_Invoke(__int64 result,
                                                                int* a2);

__int64 game_menu_TalkSelectGiftMenu_HasListItem(__int64 a1, __int64 a2,
                                                 __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned __int8 v15;

  v15 = 0;
  v11[0] = GameData_1fe9a18;
  v11[1] = a1;
  v12 = v11;
  v3 = v13;
  v11[2] = &v15;
  v4 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v13[2] = v11;
  v14 = v13;
  v13[0] = GameData_1fa80c0;
  v13[1] = 19;
  v5 = *(unsigned int*)(v4 + 80);
  if ((int)v5 < 1) {
    goto LABEL_10;
  }
  v6 = 0;
  v7 = 12 * v5;
  do {
    a2 = *(_QWORD*)(v4 + 8) + v6;
    if (*(_WORD*)(a2 + 2) != 0) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*))(*v14 + 48LL))(v14);
    }
    v6 += 12;
  } while (v7 != v6);
  v3 = v14;
  if (v14 == v13) {
  LABEL_10:
    v8 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v3 + v8))(v3, a2, a3);
LABEL_12:
  if (v12 == v11) {
    v9 = 32;
    goto LABEL_16;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_16:
    (*(void (**)(_QWORD*, __int64, __int64))(*v12 + v9))(v12, a2, a3);
  }
  return v15;
}

__int64 game_menu_TalkSelectGiftMenu_HasListItem_lambda0_Invoke(__int64 result,
                                                                int* a2)
{
  __int64 v2;
  __int64 v3;
  char** v4;
  char* v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                 game_TransporterConst_List_instance__ptr[0] +
                             8LL) +
                  8LL) +
       12LL * *a2;
  v3 = *(unsigned __int16*)(v2 + 4);
  if (*(_WORD*)(v2 + 4) != 0) {
    v4 = *(char***)(result + 8);
    v6 = *v4;
    v5 = v4[1];
    if (v6 != v5) {
      v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v3);
      v8 = v5 - v6 - 8;
      if ((~(_BYTE)v8 & 0x18) != 0) {
        v9 = ((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 3;
        while (*(_QWORD*)v6 != v7) {
          v6 += 8;
          if (--v9 == 0) {
            goto LABEL_7;
          }
        }
      }
      else {
      LABEL_7:
        if (v8 < 0x18) {
          return result;
        }
        for (v6 += 16;; v6 += 32) {
          if (*((_QWORD*)v6 - 2) == v7) {
            v6 -= 16;
            goto LABEL_18;
          }
          if (*((_QWORD*)v6 - 1) == v7) {
            v6 -= 8;
            goto LABEL_18;
          }
          if (*(_QWORD*)v6 == v7) {
            goto LABEL_18;
          }
          if (*((_QWORD*)v6 + 1) == v7) {
            break;
          }
          v10 = v6 + 16;
          if (v10 == v5) {
            return result;
          }
        }
        v6 += 8;
      }
    }
  LABEL_18:
    if (v6 != v5) {
      **(_BYTE**)(result + 16) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
