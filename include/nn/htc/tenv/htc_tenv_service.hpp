#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::htc::tenv {

struct VariableName {
  char value[64];
};

class IService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetVariable(sf::Out<int64_t> pOutSize,
    const sf::OutBuffer& outValue, const VariableName& name) = 0;
  virtual Result GetVariableLength(sf::Out<int64_t> pOutLength,
    const VariableName& name) = 0;
  virtual Result WaitUntilVariableAvailable(int64_t timeoutMilliseconds) = 0;
};

}
