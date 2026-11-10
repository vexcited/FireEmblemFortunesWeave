#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_1a31e0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1b0740(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_cb2f70(__int64*, __int64, unsigned __int64);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*CStdStringFactory_GetStringConstant_ptr[])();
void GameRoutine_1b0a00(__int64, _QWORD*);
void GameRoutine_651250(void*);
__int64 StringAddGeneric(__int64 a1);
void CStdStringFactory_Destroy_CStdStringFactory(__int64 a1);

__int64 StringAddGeneric(__int64 a1)
{
  __int64* v2;
  unsigned __int8* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  struct {
    __int64 v12[2];
    __int64 v13;
  } v12_;

  v2 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v3 = (unsigned __int8*)(*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 +
                                                           104LL))(a1, 0);
  if ((*(_BYTE*)v2 & 1) != 0) {
    GameRoutine_cb2f70(v12_.v12, v2[2], v2[1]);
  }
  else {
    v4 = *v2;
    v5 = v2[2];
    v12_.v12[1] = v2[1];
    v12_.v13 = v5;
    v12_.v12[0] = v4;
  }
  v6 = *v3;
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = (__int64)(v3 + 1);
  }
  else {
    v9 = *((_QWORD*)v3 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)v3 + 1);
  }
  GameRoutine_1a31e0(v12_.v12, v9, v10);
  result =
      (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)a1 + 192LL))(a1, v12_.v12);
  if ((v12_.v12[0] & 1) != 0) {
    return GameRoutine_25ec90(v12_.v13, v12_.v12[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

void CStdStringFactory_Destroy_CStdStringFactory(__int64 a1)
{
  __int64 v1;
  void* v2;
  __int64 v3;

  *(_QWORD*)a1 = CStdStringFactory_GetStringConstant_ptr;
  if (*(_QWORD*)(a1 + 24) != 0) {
    v1 = __assert_fail("stringCache.size() == 0",
                       "/Program/Externals/angelscript2_35_0/add_on/"
                       "scriptstdstring/scriptstdstring.cpp",
                       46, "~CStdStringFactory");
    *(_QWORD*)v1 = CStdStringFactory_GetStringConstant_ptr;
    if (*(_QWORD*)(v1 + 24) != 0) {
      v3 = __assert_fail("stringCache.size() == 0",
                         "/Program/Externals/angelscript2_35_0/add_on/"
                         "scriptstdstring/scriptstdstring.cpp",
                         46, "~CStdStringFactory");
      GameRoutine_1b0740(v3);
    }
    else {
      v2 = (void*)v1;
      GameRoutine_1b0a00(v1 + 8, *(_QWORD**)(v1 + 16));
      GameRoutine_651250(v2);
    }
  }
  else {
    GameRoutine_1b0a00(a1 + 8, *(_QWORD**)(a1 + 16));
  }
}

#pragma GCC visibility pop
