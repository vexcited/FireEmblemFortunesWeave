#pragma once

#include <stdint.h>

#include <string>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class BgmManager : public Singleton<BgmManager> {
public:
  ~BgmManager() override;

  void Stop();
  void Play();

private:
  uint32_t unknown_08_;
  bool stopped_;
  bool playing_;
  std::string name_;
  std::string next_name_;
};

#pragma GCC visibility pop

}
