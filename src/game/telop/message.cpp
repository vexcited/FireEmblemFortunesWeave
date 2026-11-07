#include <functional>

#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

class Message : public TelopSequence {
public:
  [[gnu::always_inline]] ~Message() override;

  int Unknown23() override { return 1048576; }
  void Unknown33() override;
  nn::ui2d::Pane* Unknown53() override;

private:
  uint64_t unknown_338_;
  std::string unknown_340_;
  std::vector<std::string> unknown_358_;
  std::function<void()> unknown_370_;
};

Message::~Message() = default;

nn::ui2d::Pane* Message::Unknown53() {
  return accessor_.FindPane("L_Bg/Bg");
}

}

#pragma GCC visibility pop
