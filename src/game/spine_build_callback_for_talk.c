#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpineBuildCallbackForTalk_Unknown3(__int64 result);
__int64 GameHr_1916dd0(__int64, int, const char*, float, __int64, char);
__int64 GameRoutine_190b6a0(__int64, __int64, unsigned __int64);
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
unsigned __int64 strlen(const char*);
void SpineBuildCallback_Unknown2(__int64, int, __int64, char);
void SpineBuildCallbackForTalk_Unknown2(__int64 a1, int a2, __int64 a3,
                                        char a4);

void SpineBuildCallbackForTalk_Unknown2(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  __int16 v16;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a3 != 0 && (a4 & 1) != 0) {
    SpineBuildCallback_Unknown2(a1, a2, a3, 1),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (a2 == 1) {
      if (*(_BYTE*)(a3 + 1040) == 1) {
        v7 = *(_QWORD*)(a1 + 88);
        if (v7 == 0 || (v8 = *(const char**)(v7 + 8), v9 = strlen(v8),
                        GameRoutine_190b6a0(a3, (__int64)v8, v9),
                        *(_BYTE*)(a3 + 1040) == 1)) {
          GameHr_1916dd0(a3, 0, "Motion_Idle", 0x1.99999a0000000p-4f, 11, 1),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if (*(_QWORD*)(a1 + 96) != 0) {
        v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 808) + 40LL))(
            *(_QWORD*)(a3 + 808)),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v10 != 0 && v11 != 0xFFFFFFFFLL) {
          *(_QWORD*)(*(_QWORD*)(a1 + 96) + 8LL) = v11;
          v13 = *(_QWORD*)(a1 + 96);
          v14 = v10;
          v15 = (*(__int64 (**)(void))GameData_212e778[0])(),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v16 = ((__int64 (*)(__int64))*GameData_212e780)(v14),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_WORD*)(v13 + 16) = v15;
          *(_WORD*)(v13 + 18) = v16;
        }
      }
    }
  }
}

__int64 SpineBuildCallbackForTalk_Unknown3(__int64 result)
{
  char v1;

  v1 = *(_BYTE*)(result + 56);
  *(_DWORD*)(result + 47) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 24) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(result + 72) = 0;
    *(_QWORD*)(result + 64) = 0;
  }
  else {
    *(_WORD*)(result + 56) = 0;
  }
  *(_QWORD*)(result + 96) = 0;
  return result;
}

#pragma GCC visibility pop
