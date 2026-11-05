#include "game/random_seed.hpp"

#include "game/game_mode_data.hpp"
#include "game/game_save_const.hpp"
#include "game/map/stream.hpp"
#include "nn/os/time.hpp"

namespace nn::oe {

TimeSpan GetProgramTotalActiveTime();

}

namespace game {

#pragma GCC visibility push(hidden)

extern int64_t g_start_tick;

int RandomSeed::Get(int max) {
  return static_cast<int>(Next() & 0x7fffffff) % max;
}

int RandomSeed::GetRange(int min, int max) {
  return static_cast<int>(Next() & 0x7fffffff) % (max - min + 1) + min;
}

float RandomSeed::GetFloat(float scale) {
  return scale * (static_cast<uint16_t>(Next()) / 65535.0f);
}

// The percent is compared at a precision of one in a million.
bool RandomSeed::RollPercent(float percent) {
  if (percent <= 0.0f) {
    return false;
  }

  const uint32_t value = (Next() & 0x7fffffff) % 1000000;
  return percent * 10000.0f > value;
}

bool RandomSeed::RollVariable(const HashedString& key) {
  const GameVariable* variable = GameModeData::FindVariable(key);
  if (variable == nullptr || variable->value < 1) {
    return false;
  }

  if (variable->value > 99) {
    return true;
  }

  return RollPercent(variable->value);
}

void RandomSeed::Serialize(Stream& stream) const {
  int hash = 0;
  stream.Unknown00(&hash);
  stream.WriteU8(0);
  for (uint32_t value : state_) {
    stream.WriteU32(value);
  }
  stream.Unknown01(0);
}

void RandomSeed::Deserialize(Stream& stream) {
  int hash = 0;
  stream.Unknown02(&hash);
  stream.ReadU8();
  for (uint32_t& value : state_) {
    value = stream.ReadU32();
  }
  stream.Unknown03(0);
}

namespace {

// Saves the game random seed, a new game seeds it from the play time.
class Impl : public GameSaveConst::GlobalSerializer {
public:
  bool Unknown02() const override {
    return true;
  }

  const char* GetName() const override {
    return "Random";
  }

  int GetVersion() const override {
    return 0;
  }

  void Unknown05() override {
    const nn::os::Tick tick =
      nn::os::ConvertToTick(nn::oe::GetProgramTotalActiveTime());
    g_system_random.Initialize(tick.value - g_start_tick);
    const uint32_t value = g_system_random.Next() & 0x7fffffff;
    g_game_random.Initialize(7 * (value / 13));
  }

  void Unknown06() override {}

  void Serialize(Stream& stream) const override {
    [[clang::always_inline]] g_game_random.Serialize(stream);
  }

  void Deserialize(Stream& stream, int version) override {
    [[clang::always_inline]] g_game_random.Deserialize(stream);
  }
};

}

[[gnu::used]] static Impl* CreateRandomSerializer() {
  return new Impl();
}

#pragma GCC visibility pop

}
