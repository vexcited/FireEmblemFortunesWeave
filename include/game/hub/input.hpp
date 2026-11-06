#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class Input : public Singleton<Input> {
public:
  ~Input() override;

  void StopPlayer();
  void RestartPlayer();
  void StopInput();
  void RestartInput();
};

#pragma GCC visibility pop

}
