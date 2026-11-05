#pragma once

#include <stdint.h>

#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"

namespace nn::aoc {

Result PrepareAddOnContent(int index);
uint64_t GetAddOnContentBaseId();
Result NotifyMountAddOnContent(ncm::DataId dataId);
Result NotifyUnmountAddOnContent(ncm::DataId dataId);

}
