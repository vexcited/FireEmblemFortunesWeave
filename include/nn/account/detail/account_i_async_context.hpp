#pragma once

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account::detail {

class IAsyncContext : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSystemEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result Cancel() = 0;
  virtual Result HasDone(sf::Out<bool> pOutIsDone) = 0;
  virtual Result GetResult() = 0;
};

}
