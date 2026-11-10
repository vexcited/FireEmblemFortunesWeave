#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_imu_FullSensorState_GetCalibrationData_plt(PSEUDO_X8, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_hid_StoreSixAxisSensorCalibrationParameter_plt(_QWORD, _QWORD);
__int64 nn_hid_utility_GetSixAxisSensorHandlePlayerNumber_plt(_QWORD);
__int64 nn_hid_utility_GetSixAxisSensorHandleSixAxisSensorIdx_plt(_QWORD);
__int64 nn_hid_utility_VerifyValidSixAxisSensorHandle_plt(_QWORD);
__int64 nn_imu_FullSensorState_IsGyroBiasCalibrationReady_plt(_QWORD, _QWORD,
                                                              _QWORD);
extern _UNKNOWN SdkData_1046d58;
extern _UNKNOWN SdkData_1046d60;
__int64 nn_hid_DisableSensorFusion(int a1);

__int64 nn_hid_DisableSensorFusion(int a1)
{
  __int64 result;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  int v7;
  _QWORD v8[232];

  LODWORD(v8[0]) = a1;
  result = nn_hid_utility_VerifyValidSixAxisSensorHandle_plt(v8);
  if ((_DWORD)result != 0) {
    v3 = (__int64*)&SdkData_1046d58;
  }
  else {
    LODWORD(v8[0]) = a1;
    result = nn_hid_utility_GetSixAxisSensorHandlePlayerNumber_plt(v8);
    if ((_DWORD)result == 32) {
      v3 = (__int64*)&SdkData_1046d60;
    }
    else {
      v4 = result;
      LODWORD(v8[0]) = a1;
      result = nn_hid_utility_GetSixAxisSensorHandleSixAxisSensorIdx_plt(v8);
      v3 = (__int64*)&SdkData_1046d58;
      if (v4 <= 0xF && (unsigned int)result <= 2) {
        v3 = (__int64*)((char*)&SdkData_1046d58 + 24 * v4 +
                        8 * (unsigned int)result + 16);
      }
    }
  }
  v5 = *v3;
  if (*v3 != 0) {
    result = *(_QWORD*)(v5 + 16);
    if (result != 0) {
      LOBYTE(v8[0]) = 5;
      result =
          nn_imu_FullSensorState_IsGyroBiasCalibrationReady_plt(result, v8, 1);
      if ((result & 1) != 0) {
        memset_plt((void*)v8, nullptr, 1860);
        nn_imu_FullSensorState_GetCalibrationData_plt((void*)(v8),
                                                      *(_QWORD*)(v5 + 16));
        v7 = a1;
        result = nn_hid_StoreSixAxisSensorCalibrationParameter_plt(&v7, v8);
      }
    }
    if (*v3 != 0) {
      *v3 = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
