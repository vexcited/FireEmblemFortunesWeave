#include <string.h>
#include <utility>

#include "nn/bcat/bcat_api.hpp"
#include "nn/bcat/bcat_result.hpp"
#include "nn/bcat/detail/bcat_shim.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/util/string_util.hpp"

namespace nn::bcat {

DeliveryCacheFile::DeliveryCacheFile() : m_Service(nullptr) {}

DeliveryCacheFile::DeliveryCacheFile(DeliveryCacheFile&& other)
  : m_Service(other.m_Service) {
  other.m_Service = nullptr;
}

DeliveryCacheFile::~DeliveryCacheFile() {
  if (m_Service != nullptr) {
    Close();
  }
}

DeliveryCacheFile& DeliveryCacheFile::operator=(DeliveryCacheFile&& other) {
  DeliveryCacheFile temporary(std::move(other));
  std::swap(m_Service, temporary.m_Service);
  return *this;
}

Result DeliveryCacheFile::Open(const char* path) {
  DirectoryName directoryName;
  FileName fileName;

  const char* separator = strchr(path, '/');
  if (separator == nullptr) {
    return ResultInvalidArgument();
  }

  const uint32_t directoryNameSize =
    static_cast<uint32_t>(separator - path + 1);
  if (directoryNameSize > sizeof(directoryName.value)) {
    return ResultInvalidArgument();
  }

  util::Strlcpy(directoryName.value, path,
    static_cast<int>(directoryNameSize));
  util::Strlcpy(fileName.value, separator + 1,
    static_cast<int>(sizeof(fileName.value)));
  return Open(directoryName, fileName);
}

Result DeliveryCacheFile::Open(const DirectoryName& directoryName,
  const FileName& fileName) {
  auto open = [&]() -> Result {
    if (!directoryName.IsValid() || !fileName.IsValid()) {
      return ResultInvalidArgument();
    }
    if (m_Service != nullptr) {
      return ResultAlreadyOpened();
    }

    ipc::IDeliveryCacheFileService* service = nullptr;
    NN_RESULT_DO(shim::HandleIpcError(
      shim::ShimLibraryGlobal::GetInstance().CreateFileService(&service)));

    const Result result =
      shim::HandleIpcError(service->Open(directoryName, fileName));
    if (result.IsFailure()) {
      service->Release();
      return result;
    }

    m_Service = service;
    shim::ShimLibraryGlobal::GetInstance().IncrementDeliveryCacheFileCount();
    return Result{0};
  };

  Result result;
  NN_BCAT_DETAIL_ACCESS_LOG(result, m_Service, open(),
    ", path: \"%s/%s\", class_name: DeliveryCacheFile", directoryName.value,
    fileName.value);
  return result;
}

void DeliveryCacheFile::Close() {
  const void* handle = m_Service;
  NN_BCAT_DETAIL_ACCESS_LOG_VOID(handle,
    if (m_Service != nullptr) {
      m_Service->Release();
      m_Service = nullptr;
      shim::ShimLibraryGlobal::GetInstance()
        .DecrementDeliveryCacheFileCount();
    },
    ", class_name: DeliveryCacheFile");
}

Result DeliveryCacheFile::Read(size_t* pOutSize, int64_t offset,
  void* buffer, size_t size) {
  auto read = [&]() -> Result {
    if (m_Service == nullptr) {
      return ResultNotOpened();
    }

    uint64_t value = 0;
    NN_RESULT_DO(shim::HandleIpcError(m_Service->Read(sf::Out(&value),
      offset, sf::OutBuffer(buffer, size))));
    *pOutSize = value;
    return Result{0};
  };

  Result result;
  NN_BCAT_DETAIL_ACCESS_LOG(result, m_Service, read(),
    ", offset: %ld, size: %zu, class_name: DeliveryCacheFile", offset, size);
  return result;
}

int64_t DeliveryCacheFile::GetSize() {
  NN_ABORT_UNLESS(m_Service != nullptr);

  int64_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Service->GetSize(sf::Out(&size)));
  return size;
}

Digest DeliveryCacheFile::GetDigest() {
  NN_ABORT_UNLESS(m_Service != nullptr);

  Digest digest = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Service->GetDigest(sf::Out(&digest)));
  return digest;
}

}
