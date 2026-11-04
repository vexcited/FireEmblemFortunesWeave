#include <algorithm>
#include <arm_neon.h>

#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_utility.hpp"
#include "nn/hid/hid_sensor.hpp"
#include "nn/os/time.hpp"

namespace nn::imu {

struct AxisConfig {
  uint8_t value;
};

enum CalibrationState {
  CalibrationState_Ready = 1,
};

class FullSensorState {
 public:
  ~FullSensorState();

  bool IsGyroBiasCalibrationReady(const AxisConfig& axisConfig,
    CalibrationState state) const;
  hid::SixAxisSensorCalibrationParameter GetCalibrationData() const;
  void ResetHeading();
};

}

namespace nn::hid {

struct SensorFusionHandle {
  uint32_t _storage;
};

Result StoreSixAxisSensorCalibrationParameter(
  const SixAxisSensorHandle& handle,
  const SixAxisSensorCalibrationParameter& parameter);

namespace {

constexpr int SensorFusionStateCountMax = 16;
constexpr int SensorFusionPlayerCountMax = 16;
constexpr int SensorFusionSensorCountMax = 3;
constexpr int SensorFusionHandheldPlayerNumber = 32;

constexpr uint32_t SensorFusionAttributeIsStill = 1u << 0;
constexpr uint32_t SensorFusionAttributeIsCalibrated = 1u << 1;

struct SensorFusionState {
  int64_t samplingNumber;
  int64_t resetCount;
  int64_t deltaTime;
  AccelerationType acceleration;
  AngularVelocityType angularVelocity;
  float32x4_t quaternion;
  bool isCalibrated;
  bool isStill;
};

struct SensorFusionContext {
  void* pWorkBuffer;
  size_t workBufferSize;
  imu::FullSensorState* pFullSensorState;
  int64_t reserved;
  SensorFusionState states[SensorFusionStateCountMax];
  int stateCount;
  os::Tick lastUpdateTick;
  int64_t timestamp;
  bool isGyroBiasCalibrated;
  int64_t lastSampleTime;
  int64_t samplingNumber;
  int64_t resetCount;
  float32x4_t lastOrientation;
  int64_t lastOrientationTimestamp;
  bool isOrientationSnapped;
};

// Invalid handles resolve to a dummy slot that always stays empty.
struct SensorFusionContextTable {
  SensorFusionContext* pInvalidContext;
  SensorFusionContext* pHandheldContext;
  SensorFusionContext* pContexts[SensorFusionPlayerCountMax]
    [SensorFusionSensorCountMax];
};

SensorFusionContextTable g_ContextTable;

SixAxisSensorHandle ToSixAxisSensorHandle(SensorFusionHandle handle) {
  return {handle._storage};
}

SensorFusionContext*& GetSensorFusionContext(SensorFusionHandle handle) {
  if (utility::VerifyValidSixAxisSensorHandle(ToSixAxisSensorHandle(handle))
    .IsSuccess()) {
    const unsigned playerNumber = utility::GetSixAxisSensorHandlePlayerNumber(
      ToSixAxisSensorHandle(handle));
    if (playerNumber == SensorFusionHandheldPlayerNumber) {
      return g_ContextTable.pHandheldContext;
    }
    const unsigned sensorIndex =
      utility::GetSixAxisSensorHandleSixAxisSensorIdx(
        ToSixAxisSensorHandle(handle));
    if (playerNumber < SensorFusionPlayerCountMax &&
      sensorIndex < SensorFusionSensorCountMax) {
      return g_ContextTable.pContexts[playerNumber][sensorIndex];
    }
  }
  return g_ContextTable.pInvalidContext;
}

void DestroyFullSensorState(SensorFusionContext* pContext) {
  if (pContext->pFullSensorState != nullptr) {
    pContext->pFullSensorState->~FullSensorState();
    pContext->pFullSensorState = nullptr;
  }
}

bool IsGyroBiasCalibrationReady(const imu::FullSensorState* pState) {
  if (pState == nullptr) {
    return false;
  }
  return pState->IsGyroBiasCalibrationReady(imu::AxisConfig{5},
    imu::CalibrationState_Ready);
}

}

void DisableSensorFusion(SensorFusionHandle handle) {
  SensorFusionContext*& pContext = GetSensorFusionContext(handle);
  if (pContext == nullptr) {
    return;
  }
  if (IsGyroBiasCalibrationReady(pContext->pFullSensorState)) {
    SixAxisSensorCalibrationParameter parameter = {};
    parameter = pContext->pFullSensorState->GetCalibrationData();
    StoreSixAxisSensorCalibrationParameter(ToSixAxisSensorHandle(handle),
      parameter);
  }
  if (pContext != nullptr) {
    pContext = nullptr;
  }
}

bool IsSensorFusionEnabled(SensorFusionHandle handle) {
  return GetSensorFusionContext(handle) != nullptr;
}

int GetSensorFusionOrientations(SensorFusionOrientation* pOutOrientations,
  int count, SensorFusionHandle handle) {
  const SensorFusionContext* pContext = GetSensorFusionContext(handle);
  if (pContext == nullptr) {
    return 0;
  }
  const int outCount = std::min(pContext->stateCount, count);
  for (int i = 0; i < outCount; ++i) {
    SensorFusionOrientation& orientation = pOutOrientations[i];
    const SensorFusionState& state = pContext->states[i];
    orientation.samplingNumber = state.samplingNumber;
    orientation.resetCount = state.resetCount;
    orientation.deltaTime = state.deltaTime;
    orientation.attributes._storage[0] =
      (state.isStill ? SensorFusionAttributeIsStill : 0) |
      (state.isCalibrated ? SensorFusionAttributeIsCalibrated : 0);
    orientation.acceleration = state.acceleration;
    orientation.angularVelocity = state.angularVelocity;
    orientation.quaternion = state.quaternion;
  }
  return outCount;
}

void ResetSensorFusionYaw(SensorFusionHandle handle) {
  SensorFusionContext* pContext = GetSensorFusionContext(handle);
  if (pContext != nullptr && pContext->pFullSensorState != nullptr) {
    pContext->pFullSensorState->ResetHeading();
  }
}

bool IsSensorFusionStill(SensorFusionHandle handle) {
  const SensorFusionContext* pContext = GetSensorFusionContext(handle);
  if (pContext == nullptr || pContext->stateCount == 0) {
    return false;
  }
  return pContext->states[0].isStill;
}

bool IsSensorFusionCalibrated(SensorFusionHandle handle) {
  const SensorFusionContext* pContext = GetSensorFusionContext(handle);
  if (pContext == nullptr || pContext->stateCount == 0) {
    return false;
  }
  return pContext->states[0].isCalibrated;
}

void EnableSensorFusion(SensorFusionHandle handle, void* buffer,
  size_t size) {
  if (utility::VerifyValidSixAxisSensorHandle(ToSixAxisSensorHandle(handle))
    .IsFailure()) {
    return;
  }
  SensorFusionContext** ppContext;
  const unsigned playerNumber = utility::GetSixAxisSensorHandlePlayerNumber(
    ToSixAxisSensorHandle(handle));
  if (playerNumber == SensorFusionHandheldPlayerNumber) {
    ppContext = &g_ContextTable.pHandheldContext;
  }
  else {
    const unsigned sensorIndex =
      utility::GetSixAxisSensorHandleSixAxisSensorIdx(
        ToSixAxisSensorHandle(handle));
    if (playerNumber >= SensorFusionPlayerCountMax ||
      sensorIndex >= SensorFusionSensorCountMax) {
      return;
    }
    ppContext = &g_ContextTable.pContexts[playerNumber][sensorIndex];
  }
  if (!IsNpadImuEnabled()) {
    return;
  }
  SensorFusionContext* pContext = static_cast<SensorFusionContext*>(buffer);
  *ppContext = pContext;
  pContext->pWorkBuffer = pContext + 1;
  pContext->workBufferSize = size - sizeof(SensorFusionContext);
  pContext->pFullSensorState = nullptr;
  for (SensorFusionState& state : pContext->states) {
    state.samplingNumber = 0;
    state.resetCount = 0;
    state.deltaTime = 0;
    state.acceleration = {};
    state.angularVelocity = {};
    state.quaternion = vdupq_n_f32(0.0f);
    state.isCalibrated = false;
    state.isStill = false;
  }
  pContext->lastUpdateTick = {};
  pContext->lastUpdateTick = os::GetSystemTick();
  pContext->stateCount = 0;
  pContext->timestamp = 0;
  pContext->lastOrientationTimestamp = 0;
  pContext->lastSampleTime = 0;
  pContext->samplingNumber = 0;
  pContext->resetCount = 0;
  DestroyFullSensorState(pContext);
  pContext->isGyroBiasCalibrated = false;
}

}
