#include <stdint.h>

#include <string>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 GameSlot_212dd20;
[[gnu::visibility("hidden")]] U64 GameRoutine_92aca0(U64, const std::string&);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131208;
[[gnu::visibility("hidden")]] U64 GameRoutine_13e0100(U64, const std::string&);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_21313a8;
[[gnu::visibility("hidden")]] U64 GameRoutine_141bf80(U64, const std::string&);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131578;
[[gnu::visibility("hidden")]] U64 GameRoutine_147a7c0(U64, const std::string&);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131410;
[[gnu::visibility("hidden")]] U64 GameRoutine_15f0540(U64, const std::string&);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131480;
[[gnu::visibility("hidden")]] U64 GameRoutine_194e490(U64, const std::string&);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2132470;
[[gnu::visibility("hidden")]] U64 GameRoutine_19551d0(U64, const std::string&);

[[gnu::visibility("hidden")]] void GameStub_92a7e0() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_212dd20);
  const std::string name("ロード");
  GameRoutine_92aca0(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_13e28f0() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131208);
  const std::string name("ロード");
  GameRoutine_13e0100(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_13e2a80() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131208);
  const std::string name("ロード");
  GameRoutine_13e0100(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_13e34c0() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131208);
  const std::string name("ロード");
  GameRoutine_13e0100(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_141c7b0() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_21313a8);
  const std::string name("ロード");
  GameRoutine_141bf80(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_141c9d0() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_21313a8);
  const std::string name("ロード");
  GameRoutine_141bf80(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_147b300() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131578);
  const std::string name("ロード");
  GameRoutine_147a7c0(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_15f1280() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131410);
  const std::string name("ロード");
  GameRoutine_15f0540(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_15f13f0() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131410);
  const std::string name("ロード");
  GameRoutine_15f0540(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_194df50() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131480);
  const std::string name("開始前");
  GameRoutine_194e490(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_194ee50() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131480);
  const std::string name("ロード");
  GameRoutine_194e490(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_194f140() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2131480);
  const std::string name("ロード");
  GameRoutine_194e490(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_1955b40() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2132470);
  const std::string name("ロード");
  GameRoutine_19551d0(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_1955f70() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_2132470);
  const std::string name("ロード");
  GameRoutine_19551d0(owner, name);
}

[[gnu::visibility("hidden")]] void GameStub_197c650() {
  const U64 owner = *reinterpret_cast<const U64*>(GameSlot_21313a8);
  const std::string name("開始前");
  GameRoutine_141bf80(owner, name);
}
