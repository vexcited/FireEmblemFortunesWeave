#pragma once

#include <cstdint>

namespace snd {

class HandlePtr;

}

namespace snd::fnd {

class WeakHandle {
public:
  WeakHandle() = default;

  WeakHandle(const WeakHandle& other) {
    *this = other;
  }

  void operator=(const WeakHandle& other);

  void reset();
  bool isValid() const;
  void set(HandlePtr* object);
  HandlePtr* get() const;

  template <typename T>
  T* get() const {
    return static_cast<T*>(get());
  }

private:
  uint64_t serial_ = 0;
  // A stale handle forgets its index on lookup.
  mutable uint32_t index_ = 0x2000;
};

}
