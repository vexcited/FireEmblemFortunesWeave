#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopFacilityOpen : public TelopSequence {
public:
  ~TelopFacilityOpen() override;

  int Unknown22() override { return 1048576; }
  int Unknown23() override { return 1048576; }
  int Unknown24() override { return 64; }
  void Unknown33() override;
  void Unknown35() override;
  bool Unknown37() override;
  void Unknown39() override;
  bool Unknown43() override;
  const char* Unknown54() override { return "L_TlpTitle"; }
};

TelopFacilityOpen::~TelopFacilityOpen() = default;

void TelopFacilityOpen::Unknown35() {
  accessor_.FindPart("L_Tlp").PlayAnimation("In", 1.0f);
}

void TelopFacilityOpen::Unknown39() {
  accessor_.FindPart("L_Tlp").PlayAnimation("Out", 1.0f);
}

}
