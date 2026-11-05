#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class Message : public TelopSequence {
public:
  ~Message() override;

  int Unknown23() override { return 1048576; }
  void Unknown33() override;
  nn::ui2d::Pane* Unknown53() override;
};

Message::~Message() = default;

nn::ui2d::Pane* Message::Unknown53() {
  return accessor_.FindPane("L_Bg/Bg");
}

}
