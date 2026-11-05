#pragma once

#include <cstdint>

namespace snd {

class HandlePtr;

}

namespace snd::fnd {

// The base of the registry chain of classes without a registered base.
inline void** rootRegistry() {
  return nullptr;
}

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

  // Only returns the object when its class registry chain reaches the one
  // of T.
  template <typename T>
  [[gnu::noinline]] T* cast() const {
    if (get() == nullptr) {
      return nullptr;
    }
    void** registry = static_cast<T*>(get())->getRegistry();
    void** target = T::registry();
    while (registry != target) {
      registry = static_cast<void**>(*registry);
      if (registry == nullptr) {
        return nullptr;
      }
    }
    return static_cast<T*>(get());
  }

private:
  uint64_t serial_ = 0;
  // A stale handle forgets its index on lookup.
  mutable uint32_t index_ = 0x2000;
};

}
