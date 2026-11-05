#include <algorithm>

#include "game/map/situation.hpp"
#include "game/map/stream.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// Only the first hundred entries are saved.
void BonusExpList::Serialize(Stream& stream) const {
  int hash = 0;
  if (stream.Unknown00(&hash)) {
    stream.WriteU8(kVersion);
    const int count = std::min<int>(list_.size(), kMaxCount);
    stream.WriteU8(count);
    for (int i = 0; i < count; ++i) {
      stream.WriteU32(list_[i].unknown_00);
      stream.WriteU32(list_[i].unknown_04);
      stream.WriteU32(list_[i].unknown_08);
    }
  }
  stream.Unknown01(0);
}

void BonusExpList::Deserialize(Stream& stream) {
  list_.clear();

  int hash = 0;
  if (stream.Unknown02(&hash) && stream.ReadU8() >= kVersion) {
    for (int count = stream.ReadU8(); count != 0; --count) {
      BonusExp exp;
      exp.unknown_00 = stream.ReadU32();
      exp.unknown_04 = stream.ReadU32();
      exp.unknown_08 = stream.ReadU32();
      Add(exp);
    }
  }
  stream.Unknown03(0);
}

[[gnu::noinline]] void BonusExpList::Add(const BonusExp& exp) {
  [[clang::always_inline]] list_.push_back(exp);
}

#pragma GCC visibility pop

}
