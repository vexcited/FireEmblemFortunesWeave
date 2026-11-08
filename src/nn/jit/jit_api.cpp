#include "nn/jit/jit_api.hpp"

#include <string.h>

namespace nn::result::detail {

void ConvertInvalidImpl(Result result);

}

namespace nn::os::detail {

[[gnu::visibility("hidden")]] void InvalidateInstructionCache(
  uintptr_t address, size_t size);

}

namespace nn::jit {

void DestroyJitEnvironment(JitHandle handle) {
  GetImpl(handle)->pService->Release();
  CloseJitEnvironment(handle);
}

JitEnvironmentInfo GetJitEnvironmentInfo(JitHandle handle) {
  return GetImpl(handle)->info;
}

int Control(JitHandle handle, uint64_t command, const void* input,
  size_t inputSize, void* output, size_t outputSize) {
  int32_t value = 0;
  const Result result = GetImpl(handle)->pService->Control(
    sf::Out<int32_t>(&value), command, sf::InBuffer(input, inputSize),
    sf::OutBuffer(output, outputSize));
  if (result.IsFailure()) {
    result::detail::ConvertInvalidImpl(result);
  }
  return result.IsSuccess() ? value : 0;
}

// The generated code is made visible to the instruction fetch even when the
// service fails.
int GenerateCode(CodeRange* pOutCode, CodeRange* pOutData, JitHandle handle,
  uint64_t command, const void* input, size_t inputSize,
  const CodeRange& codeRange, const CodeRange& dataRange,
  const void* userData, size_t userDataSize, void* output,
  size_t outputSize) {
  detail::JitEnvironmentImpl* pImpl = GetImpl(handle);
  JitUserData data = {};
  memcpy(&data, userData, userDataSize);
  int32_t value = 0;
  const Result result = pImpl->pService->GenerateCode(
    sf::Out<int32_t>(&value), sf::Out<CodeRange>(pOutCode),
    sf::Out<CodeRange>(pOutData), sf::InBuffer(input, inputSize), command,
    codeRange, dataRange, data, static_cast<uint32_t>(userDataSize),
    sf::OutBuffer(output, outputSize));
  if (result.IsFailure()) {
    result::detail::ConvertInvalidImpl(result);
  }
  const int generated = result.IsSuccess() ? value : 0;
  os::detail::InvalidateInstructionCache(
    pImpl->info.codeAddress + pOutCode->offset, pOutCode->size);
  return generated;
}

}
