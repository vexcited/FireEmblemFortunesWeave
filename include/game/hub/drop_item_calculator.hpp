#pragma once

#include <stdint.h>

#include <string>
#include <vector>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

struct DropItemCandidate {
  std::string iid;
  int weight;
};

class DropItemCalculatorDng : public Singleton<DropItemCalculatorDng> {
public:
  ~DropItemCalculatorDng() override;

private:
  std::vector<DropItemCandidate> items_;
  std::vector<DropItemCandidate> rare_items_;
};

#pragma GCC visibility pop

}
