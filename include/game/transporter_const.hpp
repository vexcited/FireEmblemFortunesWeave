#pragma once

#include <stdint.h>

#include <functional>

#include "game/non_copyable.hpp"
#include "game/unit_item.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class ResourceConst {
public:
  virtual ~ResourceConst();
};

class TransporterConst : public ResourceConst {
public:
  // A stock of the transporter, keyed by the item row index.
  struct Data {
    uint16_t id;
    uint16_t count;
    UnitItem item;
  };

  class List;

  const Data& GetData(int index) const {
    return data_[index];
  }

protected:
  Data* data_;
  uint8_t unknown_10_[0x40];
  int count_;
};

class TransporterConst::List : private NonCopyable {
public:
  class Impl;

  // Other units reach the list through the global offset table.
  [[gnu::visibility("default")]] static List* instance_;

  virtual ~List();

  Impl* GetImpl() const {
    return impl_;
  }

private:
  Impl* impl_;
};

class TransporterConst::List::Impl : public TransporterConst {
public:
  // Skips the empty stocks.
  void Each(const std::function<void(const Data&)>& function) const {
    int count = count_;
    for (int i = 0; i < count; ++i) {
      if (data_[i].count != 0) {
        function(data_[i]);
      }
    }
  }
};

#pragma GCC visibility pop

}
