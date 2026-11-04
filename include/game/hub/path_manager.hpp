#pragma once

#include <memory>
#include <vector>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class CharacterPath;

class PathManager : public Singleton<PathManager> {
public:
  ~PathManager() override;

private:
  std::vector<std::shared_ptr<CharacterPath>> paths_;
  std::shared_ptr<CharacterPath> current_;
};

#pragma GCC visibility pop

}
