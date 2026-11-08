#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::jit {

struct CodeRange {
  uint64_t offset;
  uint64_t size;
};

struct JitEnvironmentInfo {
  uintptr_t codeAddress;
  size_t codeSize;
  uintptr_t dataAddress;
  size_t dataSize;
};

struct JitUserData {
  uint8_t data[32];
};

namespace detail {

struct JitEnvironmentImpl;

}

struct JitHandle {
  detail::JitEnvironmentImpl* pImpl;
};

}

namespace nn::jitsrv {

class IJitEnvironment : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result GenerateCode(sf::Out<int32_t> pOutResult,
    sf::Out<jit::CodeRange> pOutCode, sf::Out<jit::CodeRange> pOutData,
    const sf::InBuffer& input, uint64_t command,
    const jit::CodeRange& codeRange, const jit::CodeRange& dataRange,
    const jit::JitUserData& userData, uint32_t userDataSize,
    const sf::OutBuffer& output) = 0;
  virtual Result Control(sf::Out<int32_t> pOutResult, uint64_t command,
    const sf::InBuffer& input, const sf::OutBuffer& output) = 0;
};

class IJitService : public sf::IServiceObject {};

}

namespace nn::jit {

namespace detail {

struct JitEnvironmentImpl {
  jitsrv::IJitEnvironment* pService;
  JitEnvironmentInfo info;
};

}

Result Initialize();
sf::SharedPointer<jitsrv::IJitService> GetJitService();
void Finalize();
JitHandle NewJitEnvironment();
void CloseJitEnvironment(JitHandle handle);
detail::JitEnvironmentImpl* GetImpl(JitHandle handle);

void DestroyJitEnvironment(JitHandle handle);
JitEnvironmentInfo GetJitEnvironmentInfo(JitHandle handle);
int Control(JitHandle handle, uint64_t command, const void* input,
  size_t inputSize, void* output, size_t outputSize);
int GenerateCode(CodeRange* pOutCode, CodeRange* pOutData, JitHandle handle,
  uint64_t command, const void* input, size_t inputSize,
  const CodeRange& codeRange, const CodeRange& dataRange,
  const void* userData, size_t userDataSize, void* output,
  size_t outputSize);

}
