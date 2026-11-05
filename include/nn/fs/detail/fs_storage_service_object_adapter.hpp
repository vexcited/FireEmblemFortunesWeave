#pragma once

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fs_result.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system_proxy.hpp"

namespace nn::fs::detail {

constexpr Result ResultUnsupportedOperateRangeForStorageServiceObjectAdapter() {
  return MakeResult(6309);
}

template<typename StorageInterface>
class StorageServiceObjectAdapter : public IStorage, public Newable {
public:
  explicit StorageServiceObjectAdapter(
    nn::sf::SharedPointer<StorageInterface>&& storage)
    : m_pStorage(storage.Detach()) {}

  ~StorageServiceObjectAdapter() override {
    if (m_pStorage != nullptr) {
      m_pStorage->Release();
    }
  }

  Result Read(int64_t offset, void* buffer, size_t size) override {
    return m_pStorage->Read(offset, nn::sf::OutBuffer(buffer, size));
  }

  Result Write(int64_t offset, const void* buffer, size_t size) override {
    return m_pStorage->Write(offset, nn::sf::InBuffer(buffer, size));
  }

  Result Flush() override {
    return m_pStorage->Flush();
  }

  Result SetSize(int64_t size) override {
    return m_pStorage->SetSize(size);
  }

  Result GetSize(int64_t* outSize) override {
    return m_pStorage->GetSize(nn::sf::Out<int64_t>(outSize));
  }

  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override {
    static_cast<void>(inBuffer);
    static_cast<void>(inBufferSize);
    switch (operationId) {
      case OperationId_Invalidate: {
        QueryRangeInfo dummy = {};
        return m_pStorage->OperateRange(nn::sf::Out<QueryRangeInfo>(&dummy),
          operationId, offset, size);
      }
      case OperationId_QueryRange:
        NN_FS_RESULT_THROW_UNLESS(outBuffer != nullptr,
          ResultNullptrArgument());
        NN_FS_RESULT_THROW_UNLESS(outBufferSize == sizeof(QueryRangeInfo),
          ResultInvalidSize());
        return m_pStorage->OperateRange(nn::sf::Out<QueryRangeInfo>(
          static_cast<QueryRangeInfo*>(outBuffer)), operationId, offset,
          size);
      default:
        return ResultUnsupportedOperateRangeForStorageServiceObjectAdapter();
    }
  }

private:
  StorageInterface* m_pStorage;
};

}
