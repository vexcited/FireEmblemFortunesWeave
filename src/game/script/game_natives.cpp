#include "game/data/data_files.hpp"
#include "game/game_mode_data.hpp"
#include "game/script/script_string.hpp"
#include "msg/message_manager.hpp"

namespace game {

#pragma GCC visibility push(hidden)

const char* GetPersonName(const PersonData* person);
const char* GetItemName(const ItemData* item);
const char* GetPidByKey(uint32_t key);

#pragma GCC visibility pop

}

// The natives of the game script namespaces, registered by 0x11c2370.
namespace game::script {

#pragma GCC visibility push(hidden)

namespace {

// The names fall back to the empty message text, read as bytes.
[[gnu::always_inline]] inline const char* GetEmptyText() {
  return reinterpret_cast<const char*>(msg::MessageManager::empty_text_);
}

}

namespace variable {

int Get(as::string& name) {
  if (!GameModeData::HasVariable(HashedString(name.c_str()))) {
    return 0;
  }
  const GameVariable* found =
    GameModeData::FindVariable(HashedString(name.c_str()));
  return found != nullptr ? found->value : 0;
}

}

namespace person {

as::string GetName(const as::string& pid) {
  if (!pid.empty()) {
    if (const PersonData* person =
      PersonFile::GetInstance()->Find(pid.c_str())) {
      return as::string(GetPersonName(person));
    }
  }
  return as::string(GetEmptyText());
}

}

namespace item {

as::string GetIID(int itemIndex) {
  const ItemData* item = ItemFile::GetInstance()->At(itemIndex);
  return as::string(item != nullptr ? item->key.text : "");
}

as::string GetItemName(const as::string& iid) {
  if (const ItemData* item = ItemFile::GetInstance()->Find(iid.c_str())) {
    return as::string(game::GetItemName(item));
  }
  return as::string(GetEmptyText());
}

}

namespace hero {

as::string GetPID() {
  GameModeData* mode = GameModeData::GetInstance();
  const PersonData* leader = mode != nullptr ? mode->GetLeader() : nullptr;
  return as::string(leader != nullptr ? leader->key.text : "");
}

}

namespace data {

as::string GetPidByKey(uint32_t key) {
  return as::string(game::GetPidByKey(key));
}

}

#pragma GCC visibility pop

}
