#include "game/game_mode_data.hpp"
#include "game/map/situation.hpp"
#include "game/singleton.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace map::history {

class Impl : public Singleton<Impl> {
public:
  void RecordVariable(const GameVariable* variable);
};

}

// The rewind history records the change unless the table is restoring.
void VariableManager::SetFlag(const HashedString& key, int value) {
  GameModeData* data = GameModeData::GetInstance();
  if (data == nullptr) {
    return;
  }

  GameVariableTable* table = data->GetVariables();
  GameVariable* variable = table->Find(key);
  if (variable == nullptr || variable->value == value) {
    return;
  }

  variable->value = value;
  if ((table->GetFlags() & 0xae) == 0) {
    map::history::Impl* history = map::history::Impl::GetInstance();
    if (history != nullptr) {
      history->RecordVariable(variable);
    }
  }

  for (const auto& listener : variable->listeners) {
    listener(variable);
  }
}

#pragma GCC visibility pop

}
