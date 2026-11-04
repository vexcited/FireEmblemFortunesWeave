#include <stdint.h>

namespace game::map {

#pragma GCC visibility push(hidden)

class BattleSide {
public:
  virtual ~BattleSide();

private:
  uint8_t unknown_08_[0x2f0];
};

class BattleSides {
public:
  BattleSides();
  virtual ~BattleSides() = default;

private:
  BattleSide sides_[4];
};

[[gnu::used]] BattleSides::BattleSides() = default;

#pragma GCC visibility pop

}
