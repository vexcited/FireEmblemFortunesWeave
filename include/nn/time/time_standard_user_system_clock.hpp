#pragma once

#include "nn/time/time_types.hpp"
#include "nn/result.hpp"

namespace nn::time {

class StandardUserSystemClock {
public:
  static Result GetCurrentTime(PosixTime* outValue);
};

}
