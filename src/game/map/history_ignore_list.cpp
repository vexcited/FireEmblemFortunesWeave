#include <stdint.h>

#include <unordered_set>

#include "game/singleton.hpp"

namespace game::map::history {

#pragma GCC visibility push(hidden)

namespace {

// The records the rewind skips.
class IgnoreList : public Singleton<IgnoreList> {
public:
  ~IgnoreList() override;

private:
  std::unordered_set<uint64_t> keys_;
};

IgnoreList::~IgnoreList() = default;

[[gnu::used]] IgnoreList* Create() {
  return new IgnoreList();
}

}

#pragma GCC visibility pop

}

namespace game {

#pragma GCC visibility push(hidden)

// Nothing reads the registered word, so link time optimization dropped its
// store.
template<>
Singleton<map::history::IgnoreList>::~Singleton() {
  if (instance_ == this) {
    instance_ = nullptr;
  }
}

template class Singleton<map::history::IgnoreList>;

#pragma GCC visibility pop

}
