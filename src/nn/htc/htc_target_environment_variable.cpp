#include <stddef.h>

#include "nn/htc/tenv/htc_tenv_service.hpp"
#include "nn/os/time.hpp"

namespace nn::htc {

namespace tenv::detail {

// Unit local helper that connects to htc:tenv once and opens the service.
[[gnu::visibility("hidden")]] void GetService(
  [[clang::noescape]] sf::SharedPointer<IService>* pOutService);

}

namespace {

void MakeVariableName(tenv::VariableName* pOutName, const char* name) {
  int i = 0;
  for (; i < static_cast<int>(sizeof(pOutName->value)) - 1; ++i) {
    if (name[i] == '\0') {
      break;
    }
    pOutName->value[i] = name[i];
  }
  pOutName->value[i] = '\0';
}

}

Result GetTargetEnvironmentVariableLength(size_t* pOutLength,
  const char* name) {
  int64_t length = 0;
  sf::SharedPointer<tenv::IService> service;
  tenv::detail::GetService(&service);
  tenv::VariableName variableName = {};
  MakeVariableName(&variableName, name);
  const Result result = service->GetVariableLength(
    sf::Out<int64_t>(&length), variableName);
  service.Reset();
  if (result.IsSuccess()) {
    *pOutLength = length;
  }
  return result;
}

Result GetTargetEnvironmentVariable(size_t* pOutSize, char* buffer,
  size_t size, const char* name) {
  int64_t outSize = 0;
  sf::SharedPointer<tenv::IService> service;
  tenv::detail::GetService(&service);
  tenv::VariableName variableName = {};
  MakeVariableName(&variableName, name);
  const Result result = service->GetVariable(sf::Out<int64_t>(&outSize),
    sf::OutBuffer(buffer, size), variableName);
  service.Reset();
  if (result.IsSuccess()) {
    *pOutSize = outSize;
  }
  return result;
}

Result WaitUntilTargetEnvironmentVariableAvailable(TimeSpan timeout) {
  sf::SharedPointer<tenv::IService> service;
  tenv::detail::GetService(&service);
  return service->WaitUntilVariableAvailable(timeout.nanoseconds / 1000000);
}

}
