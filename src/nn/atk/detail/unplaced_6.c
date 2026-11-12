#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_29e630(__int64 result);
__int64 SoundArchivePlayer_29f420(__int64*);
__int64 SoundThread_2a1f40(__int64, __int64);
__int64 StreamSoundPlayer_29b900(_QWORD*);
__int64 nn_os_SleepThread(_QWORD);
void* BaseNx_2a1b90();
__int64 nn_atk_detail_29f320(__int64* a1);

__int64 nn_atk_detail_29f320(__int64* a1)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64* i;
  __int64* v5;
  __int64 v6;
  void* v7;

  GameRoutine_29e630((__int64)(a1 + 17));
  SoundArchivePlayer_29f420(a1);
  while ((__int64*)a1[16] != a1 + 15) {
    nn_os_SleepThread(5000000);
  }
  v2 = a1[12] / 0x3680uLL;
  if ((int)v2 >= 1) {
    v3 = (_QWORD*)a1[11];
    do {
      StreamSoundPlayer_29b900(v3);
      v3 += 1744;
      LODWORD(v2) = v2 - 1;
    } while ((_DWORD)v2 != 0);
  }
  for (i = (__int64*)a1[14]; i != a1 + 13; i = (__int64*)a1[14]) {
    v5 = (__int64*)i[1];
    v6 = *v5;
    *(_QWORD*)(*i + 8) = v5;
    *v5 = *i;
    *(_QWORD*)(v6 + 8) = i;
    *i = v6;
  }
  v7 = BaseNx_2a1b90();
  return SoundThread_2a1f40((__int64)v7, (__int64)(a1 + 8));
}

#pragma GCC visibility pop
