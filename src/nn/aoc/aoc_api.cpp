#include "nn/aoc/aoc_add_on_content.hpp"
#include "nn/aoc/aoc_service.hpp"
#include "nn/aoc/initialization.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/span.hpp"

namespace nn::aoc {

namespace {

detail::IAddOnContentManager* GetManager() {
  return reinterpret_cast<detail::IAddOnContentManager*>(
    detail::GetObjectHolder()->object);
}

}

int CountAddOnContent() {
  int32_t count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetManager()->CountAddOnContent(sf::Out<int32_t>(&count), 0));
  return count;
}

int ListAddOnContent(int* pOutIndices, int offset, int count) {
  int32_t listed = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetManager()->ListAddOnContent(
    sf::Out<int32_t>(&listed), sf::OutArray<int32_t>(pOutIndices, count), 0,
    offset, count));
  return listed;
}

uint64_t GetAddOnContentBaseId() {
  uint64_t id = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetManager()->GetAddOnContentBaseId(sf::Out<uint64_t>(&id), 0));
  return id;
}

Result PrepareAddOnContent(int index) {
  return GetManager()->PrepareAddOnContent(index, 0);
}

void SetupHostAddOnContent() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetManager()->SetupHostAddOnContent(0));
}

Result NotifyMountAddOnContent(ncm::DataId dataId) {
  return GetManager()->NotifyMountAddOnContent(dataId.value, 0);
}

Result NotifyUnmountAddOnContent(ncm::DataId dataId) {
  return GetManager()->NotifyUnmountAddOnContent(dataId.value, 0);
}

bool IsAddOnContentMountedForDebug(ncm::DataId dataId) {
  bool isMounted = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetManager()->IsAddOnContentMountedForDebug(
    sf::Out<bool>(&isMounted), dataId.value, 0));
  return isMounted;
}

Result CheckAddOnContentMountStatus() {
  return GetManager()->CheckAddOnContentMountStatus(0);
}

Result SetRequiredAddOnContentsOnContentsAvailabilityTransition(
  Span<const int> indices) {
  return GetManager()->SetRequiredAddOnContentsOnContentsAvailabilityTransition(
    0, sf::InArray<int32_t>(indices.data, indices.size));
}

Result GetRegisteredAddOnContentPath(Span<char> path, int index) {
  return GetManager()->GetRegisteredAddOnContentPath(
    sf::OutBuffer(path.data, path.size), index, 0);
}

}
