#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nerd_sensors_CalibrationState_Reset(__int64 result);

__int64 nerd_sensors_CalibrationState_Reset(__int64 result)
{
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  return result;
}

#pragma GCC visibility pop
