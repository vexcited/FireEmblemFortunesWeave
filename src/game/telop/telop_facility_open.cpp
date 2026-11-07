#include <memory>

#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

// The owned members of the telop, their types are not recovered.
class FacilityOpenEffect {
public:
  virtual ~FacilityOpenEffect();
};

class FacilityOpenList {
public:
  ~FacilityOpenList();
};

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

private:
  std::unique_ptr<FacilityOpenEffect> effect_;
  FacilityOpenList list_;
};

TelopFacilityOpen::~TelopFacilityOpen() = default;

void TelopFacilityOpen::Unknown35() {
  accessor_.FindPart("L_Tlp").PlayAnimation("In", 1.0f);
}

void TelopFacilityOpen::Unknown39() {
  accessor_.FindPart("L_Tlp").PlayAnimation("Out", 1.0f);
}

}

#pragma GCC visibility pop
