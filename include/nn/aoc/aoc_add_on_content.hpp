#pragma once

#include <stdint.h>

#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"

namespace nn::aoc {

int CountAddOnContent();
int ListAddOnContent(int* pOutIndices, int offset, int count);
uint64_t GetAddOnContentBaseId();
Result PrepareAddOnContent(int index);
void SetupHostAddOnContent();
Result NotifyMountAddOnContent(ncm::DataId dataId);
Result NotifyUnmountAddOnContent(ncm::DataId dataId);
bool IsAddOnContentMountedForDebug(ncm::DataId dataId);
Result CheckAddOnContentMountStatus();
Result SetRequiredAddOnContentsOnContentsAvailabilityTransition(
  Span<const int> indices);
Result GetRegisteredAddOnContentPath(Span<char> path, int index);

}
