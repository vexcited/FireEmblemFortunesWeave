#pragma once

#include "nn/result.hpp"

namespace nn::settings {

constexpr Result ResultSuccess = {0};
constexpr Result ResultNullLanguageCodeBuffer = {0x4da69};
constexpr Result ResultNullLanguageCodeCountBuffer = {0x4dc69};
constexpr Result ResultNullPtmCycleCountReliabilityBuffer = {0x8b469};
constexpr Result ResultNullServiceDiscoveryControlSettingsBuffer = {0x96269};
constexpr Result ResultNullKeyboardLayoutBuffer = {0x9b269};
constexpr Result ResultNullChineseTraditionalInputMethodBuffer = {0xaf269};

}
