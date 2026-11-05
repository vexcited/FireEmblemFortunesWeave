#pragma once

namespace nn::fs::fsa {

class IUnmountHookInvoker {
public:
  virtual void Invoke() = 0;
  virtual ~IUnmountHookInvoker() {}
};

}
