#pragma once

#include <string_view>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class ReadWrite : public Singleton<ReadWrite> {
public:
  ~ReadWrite() override;

  // Records that the event of the label was erased or restored.
  void SetEraseFlag(std::string_view label, bool erased);
};

#pragma GCC visibility pop

}
