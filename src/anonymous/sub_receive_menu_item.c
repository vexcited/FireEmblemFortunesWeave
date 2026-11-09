#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15df1f0(_QWORD, _QWORD);
__int64 GameRoutine_9377a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_938560(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
__int64 SubReceiveMenuItem_Unknown25_185f5f0(__int64 a1);
bool SubReceiveMenuItem_Unknown58_185f670(__int64 a1);
__int64 SubReceiveMenuItem_Unknown25_1863820(__int64 a1);
bool SubReceiveMenuItem_Unknown58_1863880(__int64 a1);

__int64 SubReceiveMenuItem_Unknown25_185f5f0(__int64 a1)
{
  unsigned int v2;
  __int64 v3;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(_DWORD*)(a1 + 40);
  v3 = *(_QWORD*)(a1 + 152);
  GameRoutine_938560(v2);
  GameRoutine_9377a0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL), v3, v2);
  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 144) + 1112LL))(*(_QWORD*)(a1 + 144));
  return 2;
}

bool SubReceiveMenuItem_Unknown58_185f670(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _BOOL8 result;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    v2 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v1);
  }
  else {
    v2 = GameData_212ceb0;
  }
  v3 = *(unsigned __int8*)v2;
  result = true;
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 152);
    if (*(_BYTE*)(*(_QWORD*)(v4 + 400) + 96LL) != 1 ||
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                       8 * v3) +
                            50LL) >
            (unsigned int)*(unsigned __int8*)(v4 + 552)) {
      return false;
    }
  }
  return result;
}

__int64 SubReceiveMenuItem_Unknown25_1863820(__int64 a1)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  GameRoutine_15df1f0(*(_QWORD*)(a1 + 152), *(unsigned int*)(a1 + 40));
  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 144) + 1112LL))(*(_QWORD*)(a1 + 144));
  return 2;
}

bool SubReceiveMenuItem_Unknown58_1863880(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL);
  v2 = *(unsigned __int8*)(v1 + ((__int64)*(int*)(a1 + 40) << 6));
  if (*(_BYTE*)(v1 + ((__int64)*(int*)(a1 + 40) << 6)) == 0) {
    return true;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 400LL);
  return *(_BYTE*)(v3 + 96) == 2 &&
         *(unsigned __int8*)(*(_QWORD*)(v3 + 112) + 32LL) ==
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                            8 * v2) +
                                 32LL);
}

#pragma GCC visibility pop
