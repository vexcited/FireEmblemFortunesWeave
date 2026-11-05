#include "nn/fs/fs_add_on_content.hpp"

#include <memory>
#include <mutex>

#include "nn/aoc/aoc_add_on_content.hpp"
#include "nn/diag/diag_hashed_trace_context.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_data.hpp"
#include "nn/os/sdk_mutex.hpp"

#define NN_FS_ACCESS_LOG_TARGET_APPLICATION 1u

namespace nn::fs::detail {

Result UpdateResult(Result result, diag::HashedTraceContextImpl context);
void EnableFileSystemAccessorAccessLog(const char* name);

}

namespace nn::fs {

namespace {

constexpr Result ResultAddOnContentUnavailableA() {
  return Result{16u | 2u << 9};
}

constexpr Result ResultAddOnContentUnavailableB() {
  return Result{16u | 151u << 9};
}

constexpr Result ResultAddOnContentUnavailableC() {
  return Result{166u | 100u << 9};
}

const diag::HashedTraceContextImpl AddOnContentNotFoundTraceContext = {
  0x7A5EF54F5ED793BD
};

os::SdkMutex g_AddOnContentMutex;

class AddOnContentUnmountHookInvoker : public fsa::IUnmountHookInvoker,
  public detail::Newable {
public:
  explicit AddOnContentUnmountHookInvoker(ncm::DataId dataId)
    : m_DataId(dataId) {}

  void Invoke() override {
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS(
      aoc::NotifyUnmountAddOnContent(m_DataId));
  }

private:
  ncm::DataId m_DataId;
};

inline Result PrepareAddOnContent(int index) {
  const Result result = aoc::PrepareAddOnContent(index);
  if (IsResultIncluded(result, ResultAddOnContentUnavailableA()) ||
    IsResultIncluded(result, ResultAddOnContentUnavailableB()) ||
    IsResultIncluded(result, ResultAddOnContentUnavailableC())) {
    return detail::UpdateResult(ResultTargetNotFound(),
      AddOnContentNotFoundTraceContext);
  }
  return result;
}

inline ncm::DataId GetAddOnContentDataId(int index) {
  return ncm::DataId{aoc::GetAddOnContentBaseId() + index};
}

}

Result QueryMountAddOnContentCacheSize(size_t* outSize, int index) {
  auto query = [=]() -> Result {
    std::lock_guard<os::SdkMutex> lock(g_AddOnContentMutex);
    NN_FS_RESULT_DO(PrepareAddOnContent(index));
    return detail::QueryMountDataCacheSize(outSize,
      GetAddOnContentDataId(index), ncm::StorageId::None);
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, query(), ", index: %d, size: %zu",
    index, outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result MountAddOnContent(const char* name, int index, void* cacheBuffer,
  size_t cacheBufferSize) {
  auto mount = [=]() -> Result {
    std::lock_guard<os::SdkMutex> lock(g_AddOnContentMutex);
    NN_FS_RESULT_DO(PrepareAddOnContent(index));
    const ncm::DataId dataId = GetAddOnContentDataId(index);
    std::unique_ptr<fsa::IUnmountHookInvoker> unmountHookInvoker(
      new AddOnContentUnmountHookInvoker(dataId));
    NN_FS_RESULT_THROW_UNLESS(unmountHookInvoker != nullptr,
      ResultAllocationMemoryFailedNew());
    NN_FS_RESULT_DO(detail::MountData(name, dataId, ncm::StorageId::None,
      cacheBuffer, cacheBufferSize, true, true,
      std::move(unmountHookInvoker)));
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS(aoc::NotifyMountAddOnContent(dataId));
    return ResultSuccess();
  };
  Result result;
  if (detail::IsEnabledAccessLog(NN_FS_ACCESS_LOG_TARGET_APPLICATION)) {
    const os::Tick start = os::GetSystemTick();
    result = mount();
    const os::Tick end = os::GetSystemTick();
    detail::OutputAccessLog(result, start, end, __FUNCTION__, nullptr,
      ", name: \"%s\", index: %d, size: %zu", name, index, cacheBufferSize);
  }
  else {
    result = mount();
  }
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  if (detail::IsEnabledAccessLog(NN_FS_ACCESS_LOG_TARGET_APPLICATION)) {
    detail::EnableFileSystemAccessorAccessLog(name);
  }
  return ResultSuccess();
}

}
