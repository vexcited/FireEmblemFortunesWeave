#include <utility>

#include "nn/bcat/bcat_api.hpp"
#include "nn/bcat/bcat_result.hpp"
#include "nn/bcat/detail/bcat_shim.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/util/string_util.hpp"

namespace nn::bcat {

DeliveryCacheDirectory::DeliveryCacheDirectory() : m_Service(nullptr) {}

DeliveryCacheDirectory::DeliveryCacheDirectory(
  DeliveryCacheDirectory&& other) : m_Service(other.m_Service) {
  other.m_Service = nullptr;
}

DeliveryCacheDirectory::~DeliveryCacheDirectory() {
  if (m_Service != nullptr) {
    Close();
  }
}

DeliveryCacheDirectory& DeliveryCacheDirectory::operator=(
  DeliveryCacheDirectory&& other) {
  DeliveryCacheDirectory temporary(std::move(other));
  std::swap(m_Service, temporary.m_Service);
  return *this;
}

Result DeliveryCacheDirectory::Open(const char* path) {
  DirectoryName directoryName;
  util::Strlcpy(directoryName.value, path,
    static_cast<int>(sizeof(directoryName.value)));
  return Open(directoryName);
}

Result DeliveryCacheDirectory::Open(const DirectoryName& directoryName) {
  auto open = [&]() -> Result {
    if (!directoryName.IsValid()) {
      return ResultInvalidArgument();
    }
    if (m_Service != nullptr) {
      return ResultAlreadyOpened();
    }

    ipc::IDeliveryCacheDirectoryService* service = nullptr;
    NN_RESULT_DO(shim::HandleIpcError(
      shim::ShimLibraryGlobal::GetInstance().CreateDirectoryService(
        &service)));

    const Result result = shim::HandleIpcError(service->Open(directoryName));
    if (result.IsFailure()) {
      service->Release();
      return result;
    }

    m_Service = service;
    shim::ShimLibraryGlobal::GetInstance()
      .IncrementDeliveryCacheDirectoryCount();
    return Result{0};
  };

  Result result;
  NN_BCAT_DETAIL_ACCESS_LOG(result, m_Service,
    open(), ", class_name: DeliveryCacheDirectory, path: \"%s\"",
    directoryName.value);
  return result;
}

void DeliveryCacheDirectory::Close() {
  const void* handle = m_Service;
  NN_BCAT_DETAIL_ACCESS_LOG_VOID(handle,
    if (m_Service != nullptr) {
      m_Service->Release();
      m_Service = nullptr;
      shim::ShimLibraryGlobal::GetInstance()
        .DecrementDeliveryCacheDirectoryCount();
    },
    ", class_name: DeliveryCacheDirectory");
}

Result DeliveryCacheDirectory::Read(int* pOutCount,
  DeliveryCacheDirectoryEntry* pOutEntries, int count) {
  auto read = [&]() -> Result {
    if (m_Service == nullptr) {
      return ResultNotOpened();
    }

    int32_t value = 0;
    NN_RESULT_DO(shim::HandleIpcError(m_Service->Read(sf::Out(&value),
      sf::OutArray<DeliveryCacheDirectoryEntry>(pOutEntries, count))));
    *pOutCount = value;
    return Result{0};
  };

  Result result;
  NN_BCAT_DETAIL_ACCESS_LOG(result, m_Service,
    read(), ", class_name: DeliveryCacheDirectory");
  return result;
}

int DeliveryCacheDirectory::GetCount() {
  NN_ABORT_UNLESS(m_Service != nullptr);

  int32_t count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Service->GetCount(sf::Out(&count)));
  return count;
}

}
