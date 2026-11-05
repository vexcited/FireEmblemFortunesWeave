#pragma once

#include <stdint.h>

#include <unordered_map>

namespace game::map {

#pragma GCC visibility push(hidden)

class BattleTarget {
public:
  virtual ~BattleTarget();

  virtual int Unknown02() const;
  virtual void Unknown03();

private:
  uint8_t unknown08_[0x3040];
  std::unordered_map<int, int> unknown3048_;
};

#pragma GCC visibility pop

}
