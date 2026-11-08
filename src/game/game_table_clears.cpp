#include <stdint.h>

#include <list>
#include <memory>
#include <unordered_map>

using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

using GameTable = std::unordered_map<uint32_t, U64>;

// Objects whose list at 0x410 is cleared through a weak reference.
struct GameListOwner {
  uint8_t unknown_000_[0x410];
  std::list<U64> list;
};

[[gnu::visibility("hidden")]] extern GameTable GameData_21a5458;
[[gnu::visibility("hidden")]] extern GameTable GameData_21fe008;
[[gnu::visibility("hidden")]] extern GameTable GameData_21fe030;
[[gnu::visibility("hidden")]] extern GameTable GameData_224adb0;
[[gnu::visibility("hidden")]] extern GameTable GameData_224e750;

[[gnu::visibility("hidden")]] extern const U64 GameData_2066140[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2101b08[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2101b30[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2101b58[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2101b80[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2102028[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2102050[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2103440[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2106d70[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2106d98[];
[[gnu::visibility("hidden")]] extern const U64 GameData_2106dc0[];

namespace {

[[gnu::always_inline]] inline void ClearOwner(U64 self, const U64* vtable) {
  At<const U64*>(self, 0) = vtable;
  auto& owner = At<std::weak_ptr<GameListOwner>>(self, 8);
  if (std::shared_ptr<GameListOwner> locked = owner.lock()) {
    locked->list.clear();
  }

  owner.~weak_ptr();
}

}

[[gnu::visibility("hidden")]] void GameTableClear_60bba0() {
  GameData_21a5458.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_60bd00() {
  GameData_21a5458.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_ae1200() {
  GameData_21fe008.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_ae1360() {
  GameData_21fe008.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_ae32e0() {
  GameData_21fe030.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_ae3440() {
  GameData_21fe030.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_147e860() {
  GameData_224adb0.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_147e9c0() {
  GameData_224adb0.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_14b9e40() {
  GameData_224e750.clear();
}

[[gnu::visibility("hidden")]] void GameTableClear_14b9fa0() {
  GameData_224e750.clear();
}

[[gnu::visibility("hidden")]] void GameListOwner_1606040(U64 self) {
  ClearOwner(self, GameData_2066140);
}

[[gnu::visibility("hidden")]] void GameListOwner_1892b20(U64 self) {
  ClearOwner(self, GameData_2101b08);
}

[[gnu::visibility("hidden")]] void GameListOwner_1893200(U64 self) {
  ClearOwner(self, GameData_2101b30);
}

[[gnu::visibility("hidden")]] void GameListOwner_1893700(U64 self) {
  ClearOwner(self, GameData_2101b58);
}

[[gnu::visibility("hidden")]] void GameListOwner_1893b20(U64 self) {
  ClearOwner(self, GameData_2101b80);
}

[[gnu::visibility("hidden")]] void GameListOwner_1896b40(U64 self) {
  ClearOwner(self, GameData_2102028);
}

[[gnu::visibility("hidden")]] void GameListOwner_18970e0(U64 self) {
  ClearOwner(self, GameData_2102050);
}

[[gnu::visibility("hidden")]] void GameListOwner_18a0620(U64 self) {
  ClearOwner(self, GameData_2103440);
}

[[gnu::visibility("hidden")]] void GameListOwner_18bb060(U64 self) {
  ClearOwner(self, GameData_2106d70);
}

[[gnu::visibility("hidden")]] void GameListOwner_18bb740(U64 self) {
  ClearOwner(self, GameData_2106d98);
}

[[gnu::visibility("hidden")]] void GameListOwner_18bbbe0(U64 self) {
  ClearOwner(self, GameData_2106dc0);
}
