#pragma once

#include "nn/os/event.hpp"

namespace nn::os {

class Event {
public:
  explicit Event(EventClearMode clearMode) {
    InitializeEvent(&m_Storage.event, false, clearMode);
  }

  ~Event() {
    FinalizeEvent(&m_Storage.event);
  }

  void Wait() {
    WaitEvent(&m_Storage.event);
  }

  void Signal() {
    SignalEvent(&m_Storage.event);
  }

  void Clear() {
    ClearEvent(&m_Storage.event);
  }

  EventType* GetBase() {
    return &m_Storage.event;
  }

private:
  // The SDK keeps the event in raw storage, so no member constructor runs.
  union Storage {
    Storage() {
    }

    EventType event;
  };

  Storage m_Storage;
};

static_assert(sizeof(Event) == 40);

}
