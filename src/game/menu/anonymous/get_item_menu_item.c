#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 GetItemMenuItem_Unknown55(__int64 a1);

__int64 GetItemMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];
  int v22;
  int v23;
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
  __int64 v36;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1562cf0(*(_QWORD*)(a1 + 48), "Action");
        v5 = GameRoutine_6ed030(*(_QWORD*)(a1 + 88));
        v6 = *(_DWORD*)(a1 + 96);
        v7 = msg_MessageManager_instance__ptr[0];
        if (v5 != 0) {
          v8 = v5;
        }
        else {
          v8 = (__int64)*msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v8);
        GameRoutine_a51e10(*v7 + 14704, 1, v6, 0);
        v9 = *v7;
        v24 = -1;
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v21[0] = GameData_212e348 + 2;
        v21[1] = 0xFFFF0001FFFF0000LL;
        v21[2] = 0xFFFF0004FFFF0002LL;
        v21[3] = 0xFFFF0006FFFF0005LL;
        v36 = 8;
        v22 = -65529;
        v23 = -65528;
        v10 = GameRoutine_a4dbe0(v9, "MID_HonorLvMenu_GetItem", 0, v21);
        if (v10 != 0) {
          v11 = v10;
          v12 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v12 != 0) {
            GameRoutine_156c5d0(v12, v11, 0);
          }
        }
        result = ui_LayoutAccessor_FindPane(v3, "Icon");
        if (result != 0) {
          result = __dynamic_cast(result, GameData_212d670[0],
                                  GameData_212d678[0], 0);
          if (result != 0) {
            v13 = *(_QWORD*)(a1 + 88);
            if (v13 != 0) {
              v14 = *(_QWORD*)(v13 + 24);
              v15 = *(unsigned __int8*)(v14 + 560);
              v16 = (v15 & 1) == 0;
              if ((v15 & 1) != 0) {
                v17 = *(_QWORD*)(v14 + 568);
              }
              else {
                v17 = v15 >> 1;
              }
              v18 = *(_QWORD*)(v14 + 576);
              v19 = v14 + 561;
              if (!v16) {
                v19 = v18;
              }
              if (v17 != 0) {
                v20 = v19;
              }
              else {
                v20 = 0;
              }
              result = GameRoutine_136a920(ui_Manager_instance_ + 1264, result,
                                           0, 2, v20);
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
