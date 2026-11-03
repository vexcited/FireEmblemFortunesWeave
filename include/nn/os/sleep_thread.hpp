#pragma once

#include "nn/os/time.hpp"

namespace nn::os {

void SleepThread(TimeSpan time);

namespace detail {

struct TimeoutHelperImplByHorizon {
  static void Sleep(TimeSpan time);
};

}
}
