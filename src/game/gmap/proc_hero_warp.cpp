#include <cstdint>
#include <memory>

#include "game/proc/proc_singleton.hpp"

namespace game::gmap {

namespace {

class ProcHeroWarp : public ProcSingleton<ProcHeroWarp> {
public:
  ProcHeroWarp();

private:
  uint8_t unknown_98_[0x10];
  std::shared_ptr<void> unknown_a8_;
};

[[gnu::used]] ProcHeroWarp::ProcHeroWarp() = default;

}

}
