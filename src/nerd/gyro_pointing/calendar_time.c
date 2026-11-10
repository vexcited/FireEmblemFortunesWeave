#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_time_GetDayOfWeek_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_time_ToCalendarTimeInUtc_plt(_QWORD);
__int64 nn_time_ToCalendarTime_plt(_QWORD, _QWORD, _QWORD);
extern void (*SdkData_e891c8[27])();
__int64 nerd_CalendarTime_CalendarTime(__int64 a1, __int64 a2, char a3);

__int64 nerd_CalendarTime_CalendarTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  char v10;
  unsigned __int64 v11;
  __int64 v12;

  v5 = nn_os_ConvertToTimeSpan_plt(a2) / 1000000000 +
       *(_QWORD*)SdkData_e891c8[0];
  v11 = 0;
  v12 = v5;
  if ((a3 & 1) != 0) {
    nn_time_ToCalendarTime_plt(&v11, 0, &v12);
    LOWORD(v6) = v11;
    LOBYTE(v7) = BYTE2(v11);
    LOBYTE(v8) = BYTE3(v11);
  }
  else {
    v6 = nn_time_ToCalendarTimeInUtc_plt(&v12);
    v7 = v6 >> 16;
    v8 = v6 >> 24;
    v11 = v6;
  }
  *(_WORD*)a1 = v6;
  *(_BYTE*)(a1 + 2) = v7 - 1;
  *(_BYTE*)(a1 + 3) = v8 - 1;
  result =
      nn_time_GetDayOfWeek_plt((unsigned int)(__int16)v6,
                               (unsigned int)(char)v7, (unsigned int)(char)v8);
  v10 = BYTE4(v11);
  *(_BYTE*)(a1 + 4) = result;
  *(_DWORD*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 5) = v10;
  *(_WORD*)(a1 + 6) = *(_WORD*)((char*)&v11 + 5);
  return result;
}

#pragma GCC visibility pop
