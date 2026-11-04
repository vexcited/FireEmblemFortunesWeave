#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class ReadWrite : public Singleton<ReadWrite> {
public:
  ~ReadWrite() override;
};

#pragma GCC visibility pop

}
