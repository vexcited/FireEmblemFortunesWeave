#pragma GCC visibility push(hidden)
#include "game/game_mode_data.hpp"
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

class TelopReminder : public TelopSequence {
public:
  ~TelopReminder() override;

  int Unknown18() override { return 4; }
  const char* GetInAnimation() override;
  void Unknown33() override;
  void Unknown35() override;

private:
  std::string unknown_338_;
  std::string unknown_350_;
};

TelopReminder::~TelopReminder() = default;

const char* TelopReminder::GetInAnimation() {
  const char* name = "In";
  const GameModeData* mode = GameModeData::GetInstance();
  if (mode != nullptr && mode->GetMode() == GameModeData::kModeFree) {
    name = "In_Part2";
  }
  return name;
}

void TelopReminder::Unknown35() {
  accessor_.PlayAnimation("OverlayWait", 1.0f);
}

}

#pragma GCC visibility pop
