#include "game/game_mode_data.hpp"

namespace game {

#pragma GCC visibility push(hidden)

const GameVariable* GameVariableTable::Find(const HashedString& key) const {
  if (key.hash == 0 || variables_.empty()) {
    return nullptr;
  }

  const auto found = variables_.find(key.hash);
  return found != variables_.end() ? found->second : nullptr;
}

#pragma GCC visibility pop

}
