#pragma once

#include <stdint.h>

#include <memory>
#include <vector>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class HubCharacterDisposData;

struct HubCharacterDispos {
  ~HubCharacterDispos();

  uint8_t unknown_00_[0x50];
};

class HubCharacterDisposManager : public Singleton<HubCharacterDisposManager> {
public:
  ~HubCharacterDisposManager() override;

private:
  std::shared_ptr<HubCharacterDisposData> data_;
  uint64_t unknown_18_;
  std::vector<HubCharacterDispos> disposes_;
};

#pragma GCC visibility pop

}
