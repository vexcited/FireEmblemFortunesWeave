#include "game/unit.hpp"
#include "game/unit_item.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace {

// Kinds 5 and 6 sort by row, the types in 0x7dc after the others.
int GetPriority(const UnitItem& item) {
  if (item.GetIndex() == 0) {
    return -30000;
  }

  const ItemData* data = item.GetSharedData();
  int priority = item.IsEquipped() && ItemRow::GetKind(data) < 8 ? 30000 : 0;
  if (ItemRow::GetKind(data) - 5u <= 1) {
    priority -= data->index;
    if ((1ull << ItemRow::GetType(data) & 0x7dc) != 0) {
      priority -= 15000;
    }
  }
  return priority;
}

}

int UnitItemList::Find(const ItemData* data) const {
  if (data == nullptr) {
    return -1;
  }

  for (int i = 0; i < kCount; i++) {
    if (items[i].GetIndex() == data->index) {
      return i;
    }
  }
  return -1;
}

int UnitItemList::Find(const char* iid) const {
  const ItemData* data = ItemFile::GetInstance()->Find(iid);
  return data != nullptr ? Find(data) : -1;
}

int UnitItemList::FindEquipped() const {
  return FindEquippedWeapon();
}

bool UnitItemList::Equip(int index) {
  if (index < 0) {
    return false;
  }

  UnitItem& item = items[index];
  if (item.IsEquipped()) {
    return false;
  }

  if (item.IsWeapon()) {
    const int equipped = FindEquippedWeapon();
    if (equipped >= 0) {
      items[equipped].Unequip();
    }
  }

  const ItemData* data = item.GetSharedData();
  if (ItemRow::GetKind(data) == 13) {
    const int other = FindEquipped(ItemRow::GetType(data));
    if (other >= 0) {
      items[other].Unequip();
    }
  }

  item.Equip();
  return true;
}

// Kind 13 items are equipped once per type.
int UnitItemList::FindEquipped(uint8_t type) const {
  for (int i = 0; i < kCarried; i++) {
    const UnitItem& item = items[i];
    if (item.GetIndex() != 0 && item.IsEquipped()) {
      const ItemData* data = item.GetData();
      if (ItemRow::GetKind(data) == 13 && ItemRow::GetType(data) == type) {
        return i;
      }
    }
  }
  return -1;
}

void UnitItemList::EachItem(
  const std::function<void(const UnitItem&)>& function
) const {
  for (int i = 0; i < kCarried; i++) {
    if (items[i].GetIndex() != 0) {
      function(items[i]);
    }
  }
}

void UnitItemList::ClearStockUses() {
  for (int i = kCarried; i < kCount; i++) {
    items[i].ClearUses();
  }
}

bool UnitItemList::HasStockUses() const {
  for (int i = kCarried; i < kCount; i++) {
    if (items[i].GetUses() != 0) {
      return true;
    }
  }
  return false;
}

// Rows with flag 0x200 are discarded too.
bool UnitItemList::RemoveDiscarded() {
  bool removed = false;
  for (int i = 0; i < kCarried; i++) {
    UnitItem& item = items[i];
    if (item.IsDiscarded() ||
      (ItemRow::GetFlags(item.GetSharedData()) & 0x200) != 0) {
      item = UnitItem();
      removed = true;
    }
  }

  if (!removed) {
    return false;
  }

  SortAll();
  return true;
}

int UnitItemList::Count(const ItemData* data) const {
  if (data == nullptr) {
    return 0;
  }

  int count = 0;
  for (int i = 0; i < kCount; i++) {
    if (items[i].GetIndex() == data->index) {
      count++;
    }
  }
  return count;
}

bool UnitItemList::Add(int& slot, const UnitItem& item, bool stock) {
  slot = -1;
  if (item.GetIndex() == 0) {
    return false;
  }

  int found = -1;
  if (stock || ItemRow::GetKind(item.GetData()) - 5u < 2) {
    for (int i = kCarried; i < kCount; i++) {
      if (items[i].GetIndex() == 0) {
        found = i;
        break;
      }
    }
  }
  else {
    for (int i = 0; i < kCarried; i++) {
      if (items[i].GetIndex() == 0) {
        found = i;
        break;
      }
    }
  }

  if (found < 0) {
    return false;
  }

  slot = found;
  items[found] = item;
  return true;
}

bool UnitItemList::Sort(int start, int count) {
  UnitItem* range = &items[start];
  bool changed = false;
  bool swapped = false;
  for (int i = 0;;) {
    if (GetPriority(range[i]) < GetPriority(range[i + 1])) {
      std::swap(range[i], range[i + 1]);
      swapped = true;
      changed = true;
    }

    if (++i == count - 1) {
      if (!swapped) {
        break;
      }
      i = 0;
      swapped = false;
    }
  }
  return changed;
}

#pragma GCC visibility pop

}
