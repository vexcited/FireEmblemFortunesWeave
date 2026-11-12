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
bool LegionPool_9374e0_alt1(_QWORD*, __int64) __asm__("LegionPool_9374e0");
bool RidePool_93cc20_alt1(_QWORD*, __int64) __asm__("RidePool_93cc20");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 game_anonymous_DepositoryData_Commit(_BYTE* a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[2];
    _QWORD* v20;
    char gap72_[8];
    _QWORD* v21;
  } v19_;

  v2 = a2[1];
  *a1 = 0;
  v19_.v19[0] = GameData_1fac0a0;
  v19_.v19[1] = a1;
  v5 = v19_.v19;
  v19_.v21 = v19_.v19;
  v6 = *(unsigned int*)(v2 + 80);
  if ((int)v6 < 1) {
    goto LABEL_10;
  }
  v7 = 0;
  v8 = 12 * v6;
  do {
    if (*(_WORD*)(*(_QWORD*)(v2 + 8) + v7 + 2) != 0) {
      if (v19_.v21 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*))(*v19_.v21 + 48LL))(v19_.v21);
    }
    v7 += 12;
  } while (v8 != v7);
  v5 = v19_.v21;
  if (v19_.v21 == v19_.v19) {
  LABEL_10:
    v9 = 32;
  }
  else {
    if (v19_.v21 == nullptr) {
      goto LABEL_12;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v5 + v9))((__int64)v5);
LABEL_12:
  v10 = (_QWORD*)a2[3];
  v17_.v17[0] = GameData_1fac120;
  v17_.v17[1] = a1;
  v17_.v18 = v17_.v17;
  v19_.v20 = v17_.v17;
  v19_.v21 = v19_.v19;
  v19_.v19[0] = GameData_212dda8 + 2;
  v19_.v19[1] = v10;
  RidePool_93cc20_alt1(v10, (__int64)v19_.v19);
  if (v19_.v21 == v19_.v19) {
    v11 = 32;
  }
  else {
    if (v19_.v21 == nullptr) {
      goto LABEL_17;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v19_.v21 + v11))((__int64)v19_.v21);
LABEL_17:
  if (v17_.v18 == v17_.v17) {
    v12 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_22;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v17_.v18 + v12))((__int64)v17_.v18);
LABEL_22:
  v13 = (_QWORD*)a2[5];
  v17_.v17[0] = GameData_1fac1a0;
  v17_.v17[1] = a1;
  v17_.v18 = v17_.v17;
  v19_.v20 = v17_.v17;
  v19_.v21 = v19_.v19;
  v19_.v19[0] = GameData_212dd88[0] + 2;
  v19_.v19[1] = v13;
  LegionPool_9374e0_alt1(v13, (__int64)v19_.v19);
  if (v19_.v21 == v19_.v19) {
    v14 = 32;
  }
  else {
    if (v19_.v21 == nullptr) {
      goto LABEL_27;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v19_.v21 + v14))((__int64)v19_.v21);
LABEL_27:
  result = (__int64)v17_.v18;
  if (v17_.v18 == v17_.v17) {
    v16 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*v17_.v18 + v16))((__int64)v17_.v18);
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
