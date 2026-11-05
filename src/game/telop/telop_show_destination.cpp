#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopShowDestination : public TelopSequence {
public:
  ~TelopShowDestination() override;

  void Unknown33() override;
  void Unknown35() override;
  bool Unknown37() override;
  void Unknown39() override;
  const char* Unknown54() override { return "L_Title"; }
};

TelopShowDestination::~TelopShowDestination() = default;

void TelopShowDestination::Unknown39() {
  accessor_.FindPart("L_Tlp").PlayAnimation("Out", 1.0f);
}

}
