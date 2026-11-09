#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6fb810(_QWORD);
__int64 GameRoutine_94d380(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_212d690;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
__int64 EducateSkillMenuItem_Unknown55(_DWORD* a1);

__int64 EducateSkillMenuItem_Unknown55(_DWORD* a1)
{
  int v2;
  int v3;
  void (**v4)(_DWORD*);
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  char* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;

  v2 = GameRoutine_94d380(*((_QWORD*)a1 + 11), a1 + 24);
  v3 = *((unsigned __int8*)a1 + 79);
  a1[25] = v2;
  if (v3 == 1) {
    v4 = (void (**)(_DWORD*))(*(_QWORD*)a1 + 520LL);
  }
  else {
    v4 = (void (**)(_DWORD*))(*(_QWORD*)a1 + 504LL);
    if (*(_DWORD**)(*((_QWORD*)a1 + 1) + 336LL) == a1) {
      v4 = (void (**)(_DWORD*))(*(_QWORD*)a1 + 512LL);
    }
  }
  (*v4)(a1);
  result = *((_QWORD*)a1 + 7);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = *((_QWORD*)a1 + 6);
      v7 = result;
      if (v6 == 0) {
        goto LABEL_51;
      }
      v8 = ui_LayoutAccessor_FindPane(*((_QWORD*)a1 + 6), "Icon");
      if (v8 != 0) {
        v8 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d678[0], 0);
      }
      v9 = GameData_212c880[0];
      GameRoutine_1841930(v8,
                          *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                     8LL * (a1[24] & 0xFFF)),
                          0);
      if ((a1[24] & 0xFFF) != 0) {
        v10 = (char*)GameRoutine_6fb810(
            *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (a1[24] & 0xFFF)));
        if (v10 == nullptr) {
        LABEL_16:
          if ((a1[25] & 0x100000) != 0) {
            v12 = "ReinforceAfter";
          }
          else {
            v12 = "ReinforceBefore";
          }
          GameRoutine_1562cf0(v6, v12);
          result = GameRoutine_1562cf0(v6, "EquipOff");
          if ((*((_BYTE*)a1 + 102) & 0x10) != 0) {
            goto LABEL_51;
          }
          GameRoutine_1560070(&v29, v6, "L_Cost");
          result = v30;
          if (v30 == 0) {
            goto LABEL_51;
          }
          v13 = std___1___shared_weak_count_lock(v30);
          v14 = v29;
          result = v30;
          if (v30 != 0) {
            result = std___1___shared_weak_count___release_weak(v30);
          }
          if (v13 != 0 && v14 != 0) {
            v15 = ui_LayoutAccessor_FindPane(v14, "Icon");
            if (v15 != 0) {
              v16 = __dynamic_cast(v15, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            else {
              v16 = 0;
            }
            v17 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 464LL))(a1);
            v18 = 72;
            v19 = (char*)GameData_212da30;
            if ((v17 & 1) != 0) {
              v18 = 36;
            }
            if (v16 != 0) {
              v20 = *(_DWORD*)((char*)GameData_212da30 + v18);
              v21 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v16 + 88LL))(
                  v16, 0);
              if (v21 != 0) {
                *(_DWORD*)(v21 + 12) = v20;
              }
              GameRoutine_136a920(ui_Manager_instance_ + 1264, v16, 0, 7,
                                  "IconStock_Reinforce");
            }
            v22 = ui_LayoutAccessor_FindPane(v14, "T_Num");
            if (v22 != 0) {
              v23 =
                  __dynamic_cast(v22, GameData_212d670[0], GameData_212d690, 0);
              if (v23 != 0) {
                GameRoutine_156c910(v23, "%d", 1);
              }
            }
            v24 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 464LL))(a1);
            v25 = 64;
            if ((v24 & 1) != 0) {
              v25 = 60;
            }
            v26 = 72;
            if ((v24 & 1) != 0) {
              v26 = 36;
            }
            if ((a1[25] & 0x100) != 0) {
              v27 = v25;
            }
            else {
              v27 = v26;
            }
            v28 = *(_DWORD*)&v19[v27];
            result = ui_LayoutAccessor_FindTextBox(v14, "T_Num");
            if (result != 0) {
              result = Pane_58f8a0(result);
              if (result != 0) {
                *(_DWORD*)(result + 12) = v28;
              }
            }
          }
          else if (v13 == 0) {
          LABEL_51:
            if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              return std___1___shared_weak_count___release_weak(v7);
            }
            return result;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = std___1___shared_weak_count___release_weak(v13);
          }
          goto LABEL_51;
        }
      }
      else {
        v10 = &GameData_1a9f09e;
      }
      v11 = ui_LayoutAccessor_FindTextBox(v6, "T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0(v11, v10, 0);
      }
      goto LABEL_16;
    }
  }
  return result;
}

#pragma GCC visibility pop
