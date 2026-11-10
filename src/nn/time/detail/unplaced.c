#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64
    nn_time_ClockSnapshot_GetStandardUserSystemClockCalendarTime_plt(_QWORD);
__int64 nn_time_GetElapsedSecondsBetween_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_time_detail_GetSfClockSnapshotPtr_plt_874e00(_QWORD);
struct PseudoSret nn_time_GetStandardSteadyClockTimePoint_plt(_QWORD);
__int64 nn_time_detail_5d84c0(__int64 a1, __int64 a2, __int64* a3);

__int64 nn_time_detail_5d84c0(__int64 a1, __int64 a2, __int64* a3)
{
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[3];
  __int64 v14;

  if (*(_BYTE*)(nn_time_detail_GetSfClockSnapshotPtr_plt_874e00(a1) + 205) !=
          0 &&
      *(_OWORD*)(a1 + 424) != 0) {
    v14 = 0;
    *(struct PseudoSret*)(v13) =
        nn_time_GetStandardSteadyClockTimePoint_plt(a2);
    if ((unsigned int)nn_time_GetElapsedSecondsBetween_plt(&v14, v13,
                                                           a1 + 416) == 0 &&
        v14 > 0) {
      memcpy_plt(a1, a2, 208);
      return 2;
    }
    *(_QWORD*)(a1 + 424) = 0;
    *(_QWORD*)(a1 + 432) = 0;
    *(_QWORD*)(a1 + 416) = 0;
  }
  v7 = *(unsigned __int8*)(nn_time_detail_GetSfClockSnapshotPtr_plt_874e00(a1) +
                           205);
  v8 = nn_time_ClockSnapshot_GetStandardUserSystemClockCalendarTime_plt(a2);
  v9 = *a3;
  v13[0] = v8;
  v10 = (*(__int64 (**)(__int64*, _QWORD*))(v9 + 24))(a3, v13);
  if (v7 == 0 || (*(_BYTE*)(a1 + 440) & 1) != 0) {
    if ((v10 & 1) == 0) {
      return 1;
    }
  }
  else {
    v13[0] = nn_time_ClockSnapshot_GetStandardUserSystemClockCalendarTime_plt(
        a1 + 208);
    v11 = nn_time_ClockSnapshot_GetStandardUserSystemClockCalendarTime_plt(a2);
    v12 = *a3;
    v14 = v11;
    if ((v10 &
         ~(*(unsigned int (**)(__int64*, _QWORD*, __int64*))(v12 + 16))(a3, v13,
                                                                        &v14) &
         1) == 0) {
      return 1;
    }
  }
  memcpy_plt(a1, a2, 208);
  memcpy_plt(a1 + 208, a2, 208);
  *(_BYTE*)(a1 + 440) = 0;
  return 0;
}

#pragma GCC visibility pop
