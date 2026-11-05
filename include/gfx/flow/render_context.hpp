#pragma once

#include <cstdint>

#include "gxc/command_list.hpp"

namespace gxc {

class RenderContext {
public:
  CommandList* GetCommandList() const {
    return commandList_;
  }

private:
  CommandList* commandList_;
  void* unknown_[2];
};

}
