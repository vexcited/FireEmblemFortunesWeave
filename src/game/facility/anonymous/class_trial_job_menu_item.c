#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8, __int64 result, __int64);
bool ClassTrialJobMenuItem_IsActive(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    const char**);
__int64 ClassChangeJobMenuItem_DrawText(_QWORD*);
__int64 GameRoutine_95e0e0(__int64, __int64);
__int64 JobIcon_19a9be0(__int64, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 ClassTrialJobMenuItem_DrawText(_QWORD* a1);

__int64 ClassTrialJobMenuItem_DrawText(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  char* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  const char* v26[2];
  struct {
    __int64* v27;
    __int64 v28;
    unsigned __int64 v29;
    unsigned __int64 v30;
    int v31;
    int v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
  } v27_;

  ClassChangeJobMenuItem_DrawText(a1);
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = (__int64*)a1[6];
      v4 = result;
      if (v3 != nullptr) {
        game_95e2c0((void*)((__int16*)&v27_.v27), a1[11], a1[12]);
        if (((unsigned __int16)v27_.v27 & 0xBC1) != 0x100) {
          if (((*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1) & 1) != 0) {
            result =
                LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)"Check_On");
          }
          else {
            v18 = GameRoutine_95e0e0(a1[11], a1[12]);
            LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)"Percent_On");
            v19 = ui_LayoutAccessor_FindPane(v3, "T_Num");
            if (v19 != 0) {
              v20 =
                  __dynamic_cast(v19, GameData_212d670[0], GameData_212d690, 0);
              if (v20 != 0) {
                GameRoutine_156c910(v20, "%d", 1, (unsigned int)v18);
              }
            }
            if (*(_BYTE*)(a1[12] + 505LL) != 0) {
              v21 = 100;
            }
            else {
              v21 = 1;
            }
            if (v18 >= v21) {
              v22 = (char*)GameData_212da30 + 44;
            }
            else {
              v22 = (char*)GameData_212da30 + 64;
            }
            v23 = *(_DWORD*)v22;
            v24 = ui_LayoutAccessor_FindTextBox(v3, "T_Num");
            if (v24 != 0) {
              v25 = Pane_58f8a0(v24);
              if (v25 != 0) {
                *(_DWORD*)(v25 + 12) = v23;
              }
            }
            result = ui_LayoutAccessor_FindTextBox(v3, "T_Percent");
            if (result != 0) {
              result = Pane_58f8a0(result);
              if (result != 0) {
                *(_DWORD*)(result + 12) = v23;
              }
            }
          }
          goto LABEL_43;
        }
        v27_.v33 = -1;
        v27_.v34 = -1;
        v27_.v35 = -1;
        v27_.v36 = -1;
        v5 = *msg_MessageManager_instance__ptr[0];
        v27_.v37 = -1;
        v27_.v38 = -1;
        v27_.v39 = -1;
        v27_.v40 = -1;
        v27_.v41 = -1;
        v27_.v42 = -1;
        v27_.v43 = -1;
        v27_.v44 = -1;
        v27_.v27 = GameData_212e348 + 2;
        v27_.v28 = 0xFFFF0001FFFF0000LL;
        v27_.v29 = 0xFFFF0004FFFF0002LL;
        v27_.v30 = 0xFFFF0006FFFF0005LL;
        v27_.v45 = 8;
        v27_.v31 = -65529;
        v27_.v32 = -65528;
        v6 = GameRoutine_a4dbe0(v5, "MID_Sys_Unknown", 0);
        if (v6 != nullptr) {
          v7 = (__int64)v6;
          v8 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v8 != 0) {
            GameRoutine_156c5d0(v8, v7, 0);
          }
        }
        LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)"All_Off");
        v9 = ui_LayoutAccessor_FindPane(v3, "T_Num");
        if (v9 != 0) {
          v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d690, 0);
          if (v10 != 0) {
            GameRoutine_156c910(v10, "%d", 1, 0);
          }
        }
        v11 = *(_DWORD*)((char*)((char*)0x40LL) + (_QWORD)GameData_212da30);
        v12 = ui_LayoutAccessor_FindTextBox(v3, "T_Num");
        if (v12 != 0) {
          v13 = Pane_58f8a0(v12);
          if (v13 != 0) {
            *(_DWORD*)(v13 + 12) = v11;
          }
        }
        v14 = ui_LayoutAccessor_FindTextBox(v3, "T_Percent");
        if (v14 != 0) {
          v15 = Pane_58f8a0(v14);
          if (v15 != 0) {
            *(_DWORD*)(v15 + 12) = v11;
          }
        }
        v26[0] = "L_JobIcon";
        v26[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
        GameRoutine_1587740((void*)(&v27_.v27), v3, v26);
        result = v27_.v28;
        if (v27_.v28 != 0) {
          v16 = std___1___shared_weak_count_lock(v27_.v28);
          v17 = (__int64)v27_.v27;
          result = v27_.v28;
          if (v27_.v28 != 0) {
            result = std___1___shared_weak_count___release_weak(v27_.v28);
          }
          if (v16 != 0 && v17 != 0) {
            *(_BYTE*)(v17 + 1109) = 2;
            result = JobIcon_19a9be0(v17, a1[11], a1[12]);
            goto LABEL_41;
          }
          if (v16 != 0) {
          LABEL_41:
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              result = std___1___shared_weak_count___release_weak(v16);
            }
          }
        }
      }
    LABEL_43:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

bool ClassTrialJobMenuItem_IsActive(__int64 a1)
{
  __int16 v2;

  game_95e2c0((void*)(&v2), *(_QWORD*)(a1 + 88), *(_QWORD*)(a1 + 96));
  return (v2 & 0x801) == 2048;
}

#pragma GCC visibility pop
