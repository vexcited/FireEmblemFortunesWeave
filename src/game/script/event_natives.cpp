#include <stdint.h>

#include "game/game_mode_data.hpp"
#include "game/script/script_string.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// The id of a tutorial, built from its label.
class TutorialId {
public:
  explicit TutorialId(const char* label);

private:
  uint64_t value_;
};

namespace telop {

void ShowTutorialNotice(const TutorialId& id);

}

#pragma GCC visibility pop

}

// The natives of the event script namespace.
namespace game::script::event {

#pragma GCC visibility push(hidden)

void TutorialNoticeTelop(const as::string& tutid) {
  game::telop::ShowTutorialNotice(game::TutorialId(tutid.c_str()));
}

// The index of the last choice, kept in the variable 選択結果.
int GetLatestChoiceMenuIndex() {
  game::GameModeData* data = game::GameModeData::GetInstance();
  const game::HashedString key("選択結果");
  const game::GameVariable* variable = data->GetVariables()->Find(key);
  return variable != nullptr ? variable->value : 0;
}

#pragma GCC visibility pop

}
