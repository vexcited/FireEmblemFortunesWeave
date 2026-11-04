#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopPerchPerfect : public TelopSequence {
public:
  ~TelopPerchPerfect() override;

  void Unknown21() override;
  const char* GetInAnimation() override { return "In_Perfect"; }
  void Unknown33() override;
  bool Unknown37() override;
  void Unknown39() override;
  bool Unknown41() override;
  void Unknown42() override;
  bool Unknown43() override;
  void Unknown45() override;
  const char* Unknown53() override;
};

TelopPerchPerfect::~TelopPerchPerfect() = default;

}
