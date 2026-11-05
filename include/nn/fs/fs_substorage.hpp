#pragma once

#include <memory>

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_istorage.hpp"

namespace nn::fs {

constexpr Result ResultNotInitialized() {
  return detail::MakeResult(6902);
}

constexpr Result ResultUnsupportedSetSizeForNotResizableSubStorage() {
  return detail::MakeResult(6302);
}

constexpr Result ResultUnsupportedSetSizeForResizableSubStorage() {
  return detail::MakeResult(6303);
}

class SubStorage : public IStorage, public detail::Newable {
public:
  SubStorage()
    : m_pStorage(nullptr), m_Offset(0), m_Size(0), m_IsResizable(false),
      m_SharedStorage() {}

  SubStorage(IStorage* storage, int64_t offset, int64_t size)
    : m_pStorage(storage), m_Offset(offset), m_Size(size),
      m_IsResizable(false), m_SharedStorage() {}

  SubStorage& operator=(const SubStorage& other) {
    if (this != &other) {
      m_pStorage = other.m_pStorage;
      m_Offset = other.m_Offset;
      m_Size = other.m_Size;
      m_IsResizable = other.m_IsResizable;
      m_SharedStorage = other.m_SharedStorage;
    }
    return *this;
  }

  ~SubStorage() override {}

  Result Read(int64_t offset, void* buffer, size_t size) override {
    NN_FS_RESULT_THROW_UNLESS(IsValid(), ResultNotInitialized());
    if (size == 0) {
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
    return m_pStorage->Read(m_Offset + offset, buffer, size);
  }

  Result Write(int64_t offset, const void* buffer, size_t size) override {
    NN_FS_RESULT_THROW_UNLESS(IsValid(), ResultNotInitialized());
    if (size == 0) {
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
    return m_pStorage->Write(m_Offset + offset, buffer, size);
  }

  Result Flush() override {
    NN_FS_RESULT_THROW_UNLESS(IsValid(), ResultNotInitialized());
    return m_pStorage->Flush();
  }

  Result SetSize(int64_t size) override {
    NN_FS_RESULT_THROW_UNLESS(IsValid(), ResultNotInitialized());
    NN_FS_RESULT_THROW_UNLESS(m_IsResizable,
      ResultUnsupportedSetSizeForNotResizableSubStorage());
    NN_FS_RESULT_DO(CheckOffsetAndSize(m_Offset, size));

    int64_t currentSize = 0;
    NN_FS_RESULT_DO(m_pStorage->GetSize(&currentSize));
    NN_FS_RESULT_THROW_UNLESS(currentSize == m_Offset + m_Size,
      ResultUnsupportedSetSizeForResizableSubStorage());

    NN_FS_RESULT_DO(m_pStorage->SetSize(m_Offset + size));
    m_Size = size;
    return ResultSuccess();
  }

  Result GetSize(int64_t* outSize) override {
    NN_FS_RESULT_THROW_UNLESS(IsValid(), ResultNotInitialized());
    *outSize = m_Size;
    return ResultSuccess();
  }

  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override {
    NN_FS_RESULT_THROW_UNLESS(IsValid(), ResultNotInitialized());
    if (operationId != OperationId_Invalidate) {
      NN_FS_RESULT_DO(CheckOffsetAndSize(offset, size));
    }
    return m_pStorage->OperateRange(outBuffer, outBufferSize, operationId,
      m_Offset + offset, size, inBuffer, inBufferSize);
  }

  using IStorage::OperateRange;

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
