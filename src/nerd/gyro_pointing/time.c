#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ConvertToTick_plt(_QWORD);
__int64 nn_time_ToPosixTimeFromUtc_plt(_QWORD);
__int64 nn_time_ToPosixTime_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nerd_Time_Time(__int64* a1, unsigned __int16* a2, char a3);

__int64 nerd_Time_Time(__int64* a1, unsigned __int16* a2, char a3)
{
  unsigned __int16 v3;
  __int64 v6;
  __int64 result;
  int v8;
  __int64 v9;
  __int64 v10;

  v3 = *a2;
  v9 = 0;
  v10 = v3;
  BYTE2(v10) = *((_BYTE*)a2 + 2) + 1;
  BYTE3(v10) = *((_BYTE*)a2 + 3) + 1;
  BYTE4(v10) = *((_BYTE*)a2 + 5);
  *(_WORD*)((char*)&v10 + 5) = a2[3];
  if ((a3 & 1) != 0) {
    v8 = 1;
    nn_time_ToPosixTime_plt(&v8, &v9, 1, &v10);
    v6 = v9;
  }
  else {
    v6 = nn_time_ToPosixTimeFromUtc_plt(&v10);
    v9 = v6;
  }
  result = nn_os_ConvertToTick_plt(1000 * (a2[5] + 1000 * (a2[4] + 1000 * v6)));
  *a1 = result;
  return result;
}

#pragma GCC visibility pop
