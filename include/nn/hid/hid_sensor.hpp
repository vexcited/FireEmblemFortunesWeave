#pragma once

#include <arm_neon.h>

#include "nn/hid/hid_types.hpp"

namespace nn::util {

struct Float3 {
  float x;
  float y;
  float z;
};

struct Float3x3 {
  float m[3][3];
};

}

namespace nn::hid {

struct AccelerationType {
  float x;
  float y;
  float z;

  util::Float3 GetG() const;
  util::Float3 GetMetersPerSecondSquared() const;
};

struct AngularVelocityType {
  float x;
  float y;
  float z;

  util::Float3 GetDps() const;
  util::Float3 GetRadiansPerSecond() const;
};

struct SensorFusionAttribute;

struct SensorFusionOrientation {
  int64_t samplingNumber;
  int64_t resetCount;
  int64_t deltaTime;
  AccelerationType acceleration;
  AngularVelocityType angularVelocity;
  float32x4_t quaternion;
  util::BitFlagSet<32, SensorFusionAttribute> attributes;

  float32x4_t GetQuaternion() const;
  util::Float3x3 GetRotationMatrix() const;
};

}
