#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_187c960(__int64 result, __int64, unsigned __int16*);
__int64 GameRoutine_2b0(_QWORD);
__int64 GameRoutine_6ed500();
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_21ca350;
extern __int64 (*GameData_20fa4c0[])();
extern __int64 GameData_21ca318;
extern __int64 GameData_21ca320;
extern __int64 GameData_21ca328;
extern __int64 GameData_21ca330;
extern __int64 GameData_21ca340;
extern __int64 GameData_21ca348;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212c878[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 game_facility_BlacksmithMenuUtil_CanRefine(unsigned __int16* a1,
                                                   __int64 a2);
unsigned __int16* BlacksmithMenuUtil_187cca0(unsigned __int16* result,
                                             __int64 a2);
__int64 game_facility_BlacksmithMenuUtil_EachItem_lambda0_Invoke(__int64 a1,
                                                                 int* a2);

__int64 game_facility_BlacksmithMenuUtil_CanRefine(unsigned __int16* a1,
                                                   __int64 a2)
{
  char v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[4];
  _QWORD* v22;
  char v23;
  _QWORD v24[2];

  if ((*((_BYTE*)a1 + 3) & 8) != 0) {
    v2 = 0;
  }
  else {
    v2 = 0;
    if ((*((_BYTE*)a1 + 3) & 0x10) == 0) {
      v4 = GameData_212c878[0];
      v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a1);
      v7 = *(_QWORD*)(v5 + 24);
      v6 = v5 + 24;
      v8 = *(_QWORD*)(v7 + 536) - *(_QWORD*)(v7 + 528);
      if (v8 != 0) {
        v23 = 0;
        v21[0] = GameData_20fa4c0;
        v21[1] = &v23;
        v9 = v21;
        v22 = v21;
        if ((int)(-1227133513 * (v8 >> 3)) < 1) {
          goto LABEL_22;
        }
        v10 = 0;
        v11 = 0;
        do {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca350,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21ca350, a2) != 0) {
            GameData_21ca340 = 0;
            GameData_21ca348 = 0;
            *(_OWORD*)&GameData_21ca330 = 0u;
            GameData_21ca320 = 0;
            GameData_21ca328 = 0;
            GameData_21ca318 = 0;
            GameRoutine_2b0(GameRoutine_6ed500);
            __cxa_guard_release(&GameData_21ca350);
          }
          v14 = *(_QWORD*)(*(_QWORD*)v6 + 528LL);
          v15 = *(_QWORD*)(*(_QWORD*)v6 + 536LL) - v14;
          v16 = (__int64*)(v14 + v10);
          if (v11 >= (int)(-1227133513 * (v15 >> 3))) {
            v16 = &GameData_21ca318;
          }
          v17 = v16[6];
          if (v17 == 0 || (v24[1] = v16[6], v24[0] = game_HashString(v17),
                           game_GameModeData_instance_ != 0) &&
                              (v18 = game_GameVariableTable_Find(
                                   *(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v24)) != 0 &&
                              *(_DWORD*)(v18 + 32) != 0) {
            LODWORD(v24[0]) = v11;
            if (v22 == nullptr) {
              GameRoutine_60a310(0);
            }
            (*(void (**)(_QWORD*, _QWORD*))(*v22 + 48LL))(v22, v24);
          }
          ++v11;
          v10 += 56;
          v12 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * *a1);
          v13 = *(_QWORD*)(v12 + 24);
          v6 = v12 + 24;
        } while (v11 <
                 (int)(-1227133513 *
                       ((*(_QWORD*)(v13 + 536) - *(_QWORD*)(v13 + 528)) >> 3)));
        v9 = v22;
        if (v22 == v21) {
        LABEL_22:
          v19 = 32;
        }
        else {
          if (v22 == nullptr) {
          LABEL_24:
            v2 = v23;
            return v2 & 1;
          }
          v19 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v9 + v19))(v9, a2);
        goto LABEL_24;
      }
    }
  }
  return v2 & 1;
}

unsigned __int16* BlacksmithMenuUtil_187cca0(unsigned __int16* result,
                                             __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  _QWORD v17[2];

  v2 = GameData_212c878[0];
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *result);
  v5 = *(_QWORD*)(v3 + 24);
  v4 = v3 + 24;
  if ((int)(-1227133513 *
            ((*(_QWORD*)(v5 + 536) - *(_QWORD*)(v5 + 528)) >> 3)) >= 1) {
    v7 = result;
    v8 = 0;
    v9 = 0;
    do {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca350,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21ca350, a2) != 0) {
        GameData_21ca340 = 0;
        GameData_21ca348 = 0;
        *(_OWORD*)&GameData_21ca330 = 0u;
        GameData_21ca320 = 0;
        GameData_21ca328 = 0;
        GameData_21ca318 = 0;
        GameRoutine_2b0(GameRoutine_6ed500);
        __cxa_guard_release(&GameData_21ca350);
      }
      v13 = *(_QWORD*)(*(_QWORD*)v4 + 528LL);
      v14 = *(_QWORD*)(*(_QWORD*)v4 + 536LL) - v13;
      v15 = (__int64*)(v13 + v8);
      if (v9 >= (int)(-1227133513 * (v14 >> 3))) {
        v15 = &GameData_21ca318;
      }
      v16 = v15[6];
      if (v16 == 0 ||
          (v17[1] = v15[6], result = (unsigned __int16*)game_HashString(v16),
           v17[0] = result, game_GameModeData_instance_ != 0) &&
              (result = (unsigned __int16*)game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) !=
                  nullptr &&
              *((_DWORD*)result + 8) != 0) {
        v10 = *(_QWORD*)(a2 + 32);
        LODWORD(v17[0]) = v9;
        if (v10 == 0) {
          GameRoutine_60a310(0);
        }
        result = (unsigned __int16*)(*(__int64 (**)(__int64, _QWORD*))(
            *(_QWORD*)v10 + 48LL))(v10, v17);
      }
      ++v9;
      v8 += 56;
      v11 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *v7);
      v12 = *(_QWORD*)(v11 + 24);
      v4 = v11 + 24;
    } while (v9 <
             (int)(-1227133513 *
                   ((*(_QWORD*)(v12 + 536) - *(_QWORD*)(v12 + 528)) >> 3)));
  }
  return result;
}

__int64 game_facility_BlacksmithMenuUtil_EachItem_lambda0_Invoke(__int64 a1,
                                                                 int* a2)
{
  return GameRoutine_187c960(
      *(_QWORD*)(a1 + 8), *a2,
      (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                    game_TransporterConst_List_instance__ptr
                                                        [0] +
                                                8LL) +
                                     8LL) +
                          12LL * *a2 + 4));
}

#pragma GCC visibility pop
