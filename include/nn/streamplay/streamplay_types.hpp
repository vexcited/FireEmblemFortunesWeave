#pragma once

#include <stdint.h>

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

struct GuestPadId {
  uint32_t guestId;
  uint8_t padIndex;

  bool operator<(const GuestPadId& other) const;
  bool operator==(const GuestPadId& other) const;
};

}
