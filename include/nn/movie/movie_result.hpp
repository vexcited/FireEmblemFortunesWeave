#pragma once

#include "nn/result.hpp"

namespace nn::movie {

constexpr Result ResultNotInitialized = {0x3eb00};
constexpr Result ResultInvalidArgument = {0x3ed00};

}
