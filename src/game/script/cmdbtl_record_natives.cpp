#include <optional>

namespace as {

class ScriptManager;

// The natives read the manager through the global offset table, so it is
// declared with default visibility before the header.
[[gnu::visibility("default")]] extern ScriptManager* g_script_manager;

}

#include "as/script_context.hpp"

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

// The powers the battle shows instead of the computed ones, for the player
// force and the other one.
class SimplePower {
public:
  void SetPower(int force, int main) {
    mains_[force != 0] = main;
  }

  void SetPower(int force, int main, int link) {
    mains_[force != 0] = main;
    links_[force != 0] = link;
  }

private:
  uint8_t unknown_00_[0x8];
  std::optional<int> mains_[2];
  std::optional<int> links_[2];
};

#pragma GCC visibility pop

}

[[gnu::visibility("default")]] extern game::cmdbtl::SimplePower*
  g_cmdbtl_simple_power;

namespace game::script::cmdbtl::record {

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline void EndBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

void SetSimplePower(int force, int powerMain) {
  EndBlock();
  g_cmdbtl_simple_power->SetPower(force, powerMain);
}

void SetSimplePower(int force, int powerMain, int powerLink) {
  EndBlock();
  g_cmdbtl_simple_power->SetPower(force, powerMain, powerLink);
}

#pragma GCC visibility pop

}
