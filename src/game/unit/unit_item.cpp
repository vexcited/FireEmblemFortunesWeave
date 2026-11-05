#include "game/unit_item.hpp"

#include "game/map/stream.hpp"

namespace game {

#pragma GCC visibility push(hidden)

int CheckItemCondition(const UnitItem& item);

template<typename T>
const T* Stream::ReadData() {
  const uint64_t hash = ReadU64();

  if (hash == 0) {
    return nullptr;
  }

  return DataFileOf<T>::type::GetInstance()->FindByHash(hash);
}

template<typename T>
const T* Stream::ReadShortData() {
  const uint32_t hash = ReadU32();

  if (hash == 0) {
    return nullptr;
  }

  return DataFileOf<T>::type::GetInstance()->FindByShortHash(hash);
}

template const JobData* Stream::ReadData<JobData>();
template const JobData* Stream::ReadShortData<JobData>();
template const PersonData* Stream::ReadData<PersonData>();
template const PersonData* Stream::ReadShortData<PersonData>();
template const ItemData* Stream::ReadData<ItemData>();
template const ItemData* Stream::ReadShortData<ItemData>();

// Only usable kinds track the full flag, the kinds 5 and 6 never do.
static bool TracksFull(const ItemData* data) {
  const uint8_t kind = ItemRow::GetKind(data);
  return ItemRow::GetUses(data) != 0 && kind < 8 && kind != 5 && kind != 6;
}

bool UnitItem::Restore(int amount) {
  if (amount < 1) {
    return false;
  }

  const unsigned max = GetSharedMaxUses();

  if (max == 0) {
    return ItemRow::GetKind(GetSharedData()) == 14;
  }

  if (max <= uses_) {
    return false;
  }

  const unsigned uses = amount + uses_;
  uses_ = max < uses ? max : uses;

  if (TracksFull(GetSharedData())) {
    flags_ = (flags_ & ~kFlagFull) |
      (static_cast<unsigned>(GetSharedMaxUses()) <= uses_ ? kFlagFull : 0);
  }
  else {
    flags_ &= ~kFlagFull;
  }

  return max == uses_;
}

bool UnitItem::IsUsable() const {
  if (index_ == 0 || (flags_ & kFlagLocked)) {
    return false;
  }

  const ItemData* data = GetData();
  const uint8_t kind = ItemRow::GetKind(data);

  if (kind == 5 || kind == 6) {
    return false;
  }

  const uint32_t flags = ItemRow::GetFlags(data);

  if (flags & 1) {
    return false;
  }

  if (flags & 2) {
    const UnitItem copy = *this;
    if (CheckItemCondition(copy) == 1) {
      return false;
    }
    data = GetData();
  }

  if (ItemRow::GetUses(data) != 0) {
    const uint8_t current = ItemRow::GetKind(data);
    if (current <= 7 && current != 5 && current != 6) {
      return false;
    }
  }

  return static_cast<unsigned>(GetMaxUses()) - 1 < uses_;
}

void UnitItem::Deserialize(Stream& stream) {
  const uint8_t tag = stream.ReadU8();

  if (tag != 0) {
    const int version = tag >> 5 & 3;
    *this = UnitItem();

    if (version == 2) {
      if (const ItemData* data = stream.ReadShortData<ItemData>()) {
        index_ = data->index;
        count_ = 1;
        level_ = 0;
      }
    }
    else if (version == 3) {
      const ItemData* data = stream.ReadShortData<ItemData>();
      const uint64_t raw = stream.ReadU64();
      if (data != nullptr) {
        memcpy(this, &raw, sizeof(raw));
        index_ = data->index;
      }
    }

    return;
  }

  if (stream.ReadU8() == 0) {
    *this = UnitItem();
    return;
  }

  const uint64_t raw = stream.ReadU64();
  memcpy(this, &raw, sizeof(raw));

  if (const ItemData* data = stream.ReadData<ItemData>()) {
    index_ = data->index;
    if (count_ < 2) {
      count_ = 1;
    }
  }
  else {
    *this = UnitItem();
  }
}

#pragma GCC visibility pop

}
