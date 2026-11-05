#pragma once

#include <stdint.h>

#include "nn/hid/hid_types.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::streamplay {

struct StreamId {
  enum Type : uint8_t {
    Type_Number,
    Type_Name,
  };

  static constexpr int NameLengthMax = 65;

  union {
    uint32_t number;
    char name[NameLengthMax];
  };
  Type type;

  bool operator<(const StreamId& other) const;
  bool operator==(const StreamId& other) const;
};

enum GuestId : uint8_t {};

struct GuestNmouseType;
struct HidFeatureTag;

using GuestNmouseTypeSet = util::BitFlagSet<32, GuestNmouseType>;
using HidFeatureSet = util::BitFlagSet<32, HidFeatureTag>;

struct GuestPadId {
  hid::NpadIdType npadId;
  GuestId guestId;

  bool operator<(const GuestPadId& other) const;
  bool operator==(const GuestPadId& other) const;
};

struct GuestSixAxisSensorHandle {
  hid::NpadIdType npadId;
  GuestId guestId;
  uint8_t npadStyleIndex;
  uint8_t deviceIndex;
};

struct GuestVibrationDeviceHandle {
  hid::NpadIdType npadId;
  GuestId guestId;
  uint8_t npadStyleIndex;
  uint8_t deviceIndex;
};

struct GuestJcmsHandle {
  hid::NpadIdType npadId;
  GuestId guestId;
  hid::JcmsType jcmsType;
};

}
