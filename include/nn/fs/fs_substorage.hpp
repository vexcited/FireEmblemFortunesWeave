#pragma once

#include <memory>

#include "nn/fs/fs_istorage.hpp"

namespace nn::fs {

constexpr Result ResultNotInitialized() {
  return detail::MakeResult(6902);
}

class SubStorage : public IStorage {
public:
  SubStorage()
    : m_pStorage(nullptr), m_Offset(0), m_Size(0), m_IsResizable(false),
      m_SharedStorage() {}

  ~SubStorage() override;

  Result Read(int64_t offset, void* buffer, size_t size) override {
    if (size == 0) {
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(IsValid(), ResultNotInitialized());
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
    return m_pStorage->Read(m_Offset + offset, buffer, size);
  }

  Result Write(int64_t offset, const void* buffer, size_t size) override;
  Result Flush() override;
  Result SetSize(int64_t size) override;
  Result GetSize(int64_t* outSize) override;
  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

  bool IsValid() const {
    return m_pStorage != nullptr;
  }

private:
  IStorage* m_pStorage;
  int64_t m_Offset;
  int64_t m_Size;
  bool m_IsResizable;
  std::shared_ptr<IStorage> m_SharedStorage;
};

}
