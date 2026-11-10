#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LegionPool_9374e0(_QWORD, _QWORD);
__int64 RidePool_93cc20(_QWORD, _QWORD);
extern __int64 (*GameData_1fac0a0[])();
extern __int64 (*GameData_1fac120[])();
extern __int64 (*GameData_1fac1a0[])();
extern __int64* GameData_212dd88[5];
extern __int64* GameData_212dda8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_anonymous_DepositoryData_Commit(_BYTE* a1, _QWORD* a2);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64 result, unsigned __int8*, __int64, char);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, __int64);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 game_anonymous_DepositoryData_Commit_closure_Invoke_8f2ee0(__int64 a1,
                                                                   __int64 a2);
__int64
game_anonymous_DepositoryData_Commit_closure_Invoke_8f3020(__int64 a1,
                                                           unsigned __int8* a2);
__int64
game_anonymous_DepositoryData_Commit_closure_Invoke_8f3160(__int64 a1,
                                                           unsigned __int8* a2);

__int64 game_anonymous_DepositoryData_Commit(_BYTE* a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v5;
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
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[2];
  _QWORD* v21;
  _QWORD* v22;

  v2 = a2[1];
  *a1 = 0;
  v20[0] = GameData_1fac0a0;
  v20[1] = a1;
  v5 = v20;
  v22 = v20;
  v6 = *(unsigned int*)(v2 + 80);
  if ((int)v6 < 1) {
    goto LABEL_10;
  }
  v7 = 0;
  v8 = 12 * v6;
  do {
    v9 = *(_QWORD*)(v2 + 8) + v7;
    if (*(_WORD*)(v9 + 2) != 0) {
      if (v22 == nullptr) {
        GameRoutine_60a310(0, v9);
      }
      (*(void (**)(_QWORD*))(*v22 + 48LL))(v22);
    }
    v7 += 12;
  } while (v8 != v7);
  v5 = v22;
  if (v22 == v20) {
  LABEL_10:
    v10 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_12;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v5 + v10))((__int64)v5);
LABEL_12:
  v11 = a2[3];
  v18[0] = GameData_1fac120;
  v18[1] = a1;
  v19 = v18;
  v21 = v18;
  v22 = v20;
  v20[0] = GameData_212dda8 + 2;
  v20[1] = v11;
  RidePool_93cc20(v11, v20);
  if (v22 == v20) {
    v12 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_17;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v22 + v12))((__int64)v22);
LABEL_17:
  if (v19 == v18) {
    v13 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_22;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v19 + v13))((__int64)v19);
LABEL_22:
  v14 = a2[5];
  v18[0] = GameData_1fac1a0;
  v18[1] = a1;
  v19 = v18;
  v21 = v18;
  v22 = v20;
  v20[0] = GameData_212dd88[0] + 2;
  v20[1] = v14;
  LegionPool_9374e0(v14, v20);
  if (v22 == v20) {
    v15 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_27;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v22 + v15))((__int64)v22);
LABEL_27:
  result = (__int64)v19;
  if (v19 == v18) {
    v17 = 32;
  }
  else {
    if (v19 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*v19 + v17))((__int64)v19);
}

__int64 game_anonymous_DepositoryData_Commit_closure_Invoke_8f2ee0(__int64 a1,
                                                                   __int64 a2)
{
  _BYTE* v2;
  __int64 result;
  char v4;

  v2 = *(_BYTE**)(a1 + 8);
  result = X8CALL_X0(
      __int64,
      game_UnitUtil_UniqueMap_Commit_89abc0(
          (void*)((__int64)&v4),
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          (unsigned __int16*)(a2 + 4), *(unsigned __int16*)(a2 + 2)));
  *v2 |= v4;
  return result;
}

__int64

game_anonymous_DepositoryData_Commit_closure_Invoke_8f3020(__int64 a1,
                                                           unsigned __int8* a2)
{
  _BYTE* v2;
  __int64 result;
  char v4;

  v2 = *(_BYTE**)(a1 + 8);
  result = X8CALL_X0(
      __int64, RidePool_93c6a0((void*)((__int64)&v4),
                               *(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL),
                               a2, 0, 1));
  *v2 |= v4;
  return result;
}

__int64

game_anonymous_DepositoryData_Commit_closure_Invoke_8f3160(__int64 a1,
                                                           unsigned __int8* a2)
{
  _BYTE* v2;
  __int64 result;
  char v4;

  v2 = *(_BYTE**)(a1 + 8);
  result = X8CALL_X0(
      __int64, LegionPool_936f60(
                   (void*)((__int64)&v4),
                   *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL), a2, 0));
  *v2 |= v4;
  return result;
}

#pragma GCC visibility pop
