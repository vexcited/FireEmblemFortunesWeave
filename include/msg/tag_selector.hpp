#pragma once

#include <cstdint>

namespace msg {

class TagSelector {
public:
  static constexpr uint32_t kCapacity = 32;
  static constexpr uint16_t kAny = 0xffff;

  TagSelector() { TagSelector::SetDefault(); }
  virtual ~TagSelector() { Clear(); }

  virtual void SetDefault() {
    Add(0);
    Add(1);
    Add(2);
    Add(4);
    Add(5);
    Add(6);
    Add(7);
    Add(8);
  }

  virtual bool IsSelected(uint16_t group, uint16_t tag) const;

  void Add(uint16_t group, uint16_t tag = kAny) {
    if (count_ < kCapacity) {
      entries_[count_++] = {group, tag};
    }
  }

  void Clear() {
    for (Entry& entry : entries_) {
      entry = {kAny, kAny};
    }
    count_ = 0;
  }

private:
  struct Entry {
    uint16_t group;
    uint16_t tag;
  };

  Entry entries_[kCapacity] = {
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
    {kAny, kAny}, {kAny, kAny}, {kAny, kAny}, {kAny, kAny},
  };
  uint32_t count_ = 0;
  uint32_t mode_ = 0;
};

}
