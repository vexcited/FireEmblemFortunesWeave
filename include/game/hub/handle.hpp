#pragma once

#include <cstdint>

namespace game::hub {

#pragma GCC visibility push(hidden)

// The base of the hub objects handles name, by their pool and slot.
class HandlePtr {
public:
  virtual ~HandlePtr();

  uint32_t GetPool() const {
    return pool_;
  }

  uint32_t GetId() const {
    return id_;
  }

private:
  uint32_t pool_;
  uint32_t id_;
};

#pragma GCC visibility pop

}

namespace util {

struct HandleSlot {
  const void* key;
  game::hub::HandlePtr* object;
};

// The slots of the handled objects, one table per pool, read through the
// global offset table.
[[gnu::visibility("default")]] extern HandleSlot* g_handle_slots[];

#pragma GCC visibility push(hidden)

class HandleBase {
public:
  virtual ~HandleBase() = default;
};

template<typename T>
class Handle : public HandleBase {
public:
  static constexpr uint32_t kInvalidId = 0x4000;

  Handle() = default;

  explicit Handle(T* object) {
    if (object == nullptr) {
      return;
    }
    const uint32_t id = object->GetId();
    if (id == kInvalidId) {
      return;
    }
    const uint32_t pool = object->GetPool();
    const HandleSlot& slot = g_handle_slots[pool][id];
    if (slot.object != object) {
      return;
    }
    id_ = id;
    pool_ = pool;
    object_ = object;
    key_ = slot.key;
  }

  ~Handle() override;

  Handle& operator=(const Handle& other) {
    key_ = other.key_;
    id_ = other.id_;
    pool_ = other.pool_;
    object_ = other.object_;
    return *this;
  }

  bool operator==(const Handle& other) const {
    return Get() == other.Get();
  }

  // The object while the slot still holds it, null otherwise.
  T* Get() const {
    if (id_ == kInvalidId) {
      return nullptr;
    }
    const HandleSlot& slot = g_handle_slots[pool_][id_];
    if (slot.object == nullptr || slot.key != key_) {
      return nullptr;
    }
    return static_cast<T*>(slot.object);
  }

private:
  const void* key_ = nullptr;
  uint32_t id_ = kInvalidId;
  uint32_t pool_ = 1;
  T* object_ = nullptr;
};

#pragma GCC visibility pop

}

namespace game::hub {

#pragma GCC visibility push(hidden)

template<typename T>
class Handle : public util::Handle<T> {
public:
  Handle() = default;

  explicit Handle(T* object) : util::Handle<T>(object) {}
};

#pragma GCC visibility pop

}
