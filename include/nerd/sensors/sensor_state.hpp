#pragma once

#include <stdint.h>

#include "nerd/gyro_pointing/gyro_pointing.hpp"

namespace nerd::gyro_pointing {

enum class AxisConfig : uint8_t {};

}

namespace nerd::sensors {

using gyro_pointing::Vector3f;

Vector3f ConvertAccelerationToAnotherLocation(
  const Vector3f& angularVelocity, const Vector3f& angularAcceleration,
  const Vector3f& acceleration, const Vector3f& offset
);

class SensorState {
public:
  void SetStillnessAxisConfig(gyro_pointing::AxisConfig config);

private:
  unsigned char m_unknown0[0x6f08];
  gyro_pointing::AxisConfig m_stillnessAxisConfig;
};

}
