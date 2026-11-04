#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class Message : public TelopSequence {
public:
  ~Message() override;

  int Unknown23() override { return 1048576; }
  void Unknown33() override;
  const char* Unknown53() override;
};

Message::~Message() = default;

}
