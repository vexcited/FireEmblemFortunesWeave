#pragma once

#include <memory>

#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_istorage.hpp"

namespace nn::fs {

constexpr Result ResultStorageNotFlushed() {
  return detail::MakeResult(6473);
}

class FlushCheckStorage : public IStorage, public detail::Newable {
public:
  explicit FlushCheckStorage(std::unique_ptr<IStorage>&& baseStorage)
    : m_BaseStorage(std::move(baseStorage)), m_LastResult(ResultSuccess()),
      m_NeedsFlush(false) {}
  ~FlushCheckStorage() override {
    if (IsSuccess(m_LastResult) && m_NeedsFlush) {
      const Result result = ResultStorageNotFlushed();
      detail::LogErrorMessage(result, "Error: nn::fs::IStorage::~IStorage "
        "failed because the storage was not flushed.\n");
      NN_FS_ABORT_UNLESS_RESULT_SUCCESS(result);
    }
    m_BaseStorage.reset();
  }

  Result Read(int64_t offset, void* buffer, size_t size) override;
  Result Write(int64_t offset, const void* buffer, size_t size) override;
  Result Flush() override;
  Result SetSize(int64_t size) override;
  Result GetSize(int64_t* outSize) override;
  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

private:
  std::unique_ptr<IStorage> m_BaseStorage;
  Result m_LastResult;
  bool m_NeedsFlush;
};

}
