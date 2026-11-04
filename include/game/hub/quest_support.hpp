#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class QuestSupport : public Singleton<QuestSupport> {
public:
  ~QuestSupport() override;
};

#pragma GCC visibility pop

}
