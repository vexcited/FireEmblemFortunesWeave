#include "snd/handle_ptr.hpp"

#include <cstring>

#include "snd/fnd/weak_handle.hpp"

namespace snd {

void clearHandles() {
  nn::os::LockMutex(&s_handleMutex);
  std::memset(g_handleTable, 0, sizeof(g_handleTable));
  g_handleSerial = 0;
  nn::os::UnlockMutex(&s_handleMutex);
}

void HandlePtr::registerHandle() {
  nn::os::LockMutex(&s_handleMutex);
  for (uint32_t i = 0; i < kHandleCount; i++) {
    HandleEntry& entry = g_handleTable[i];
    if (entry.serial == 0) {
      entry.serial = ++s_handleSerial;
      entry.object = this;
      index_ = i;
      break;
    }
  }
  nn::os::UnlockMutex(&s_handleMutex);
}

void HandlePtr::unregisterHandle() {
  uint32_t index = index_;
  if (index >= kHandleCount) {
    return;
  }
  nn::os::LockMutex(&s_handleMutex);
  HandleEntry& entry = s_handleTable[index];
  if (entry.serial != 0 && entry.object == this) {
    entry.serial = 0;
    entry.object = nullptr;
  }
  nn::os::UnlockMutex(&s_handleMutex);
}

HandlePtr::~HandlePtr() {
  unregisterHandle();
}

}

namespace snd::fnd {

void WeakHandle::reset() {
  nn::os::LockMutex(&g_handleMutex);
  serial_ = 0;
  index_ = kHandleCount;
  nn::os::UnlockMutex(&g_handleMutex);
}

bool WeakHandle::isValid() const {
  if (index_ >= kHandleCount) {
    return false;
  }
  nn::os::LockMutex(&s_handleMutex);
  HandleEntry& entry = g_handleTable[index_];
  if (entry.object != nullptr) {
    uint64_t serial = entry.serial;
    uint64_t expected = serial_;
    nn::os::UnlockMutex(&g_handleMutex);
    if (serial == expected) {
      return true;
    }
  }
  else {
    nn::os::UnlockMutex(&s_handleMutex);
  }
  index_ = kHandleCount;
  return false;
}

void WeakHandle::operator=(const WeakHandle& other) {
  nn::os::LockMutex(&g_handleMutex);
  serial_ = other.serial_;
  index_ = other.index_;
  nn::os::UnlockMutex(&g_handleMutex);
}

void WeakHandle::set(HandlePtr* object) {
  nn::os::LockMutex(&g_handleMutex);
  reset();
  if (object != nullptr) {
    uint32_t index = object->getIndex();
    if (index < kHandleCount) {
      nn::os::LockMutex(&s_handleMutex);
      HandleEntry& entry = s_handleTable[index];
      if (entry.object == object) {
        index_ = index;
        serial_ = entry.serial;
      }
      nn::os::UnlockMutex(&s_handleMutex);
    }
  }
  nn::os::UnlockMutex(&s_handleMutex);
}

HandlePtr* WeakHandle::get() const {
  if (index_ >= kHandleCount) {
    return nullptr;
  }
  nn::os::LockMutex(&s_handleMutex);
  HandleEntry& entry = g_handleTable[index_];
  HandlePtr* object = entry.object;
  if (object == nullptr || entry.serial != serial_) {
    object = nullptr;
    index_ = kHandleCount;
  }
  nn::os::UnlockMutex(&s_handleMutex);
  return object;
}

}
