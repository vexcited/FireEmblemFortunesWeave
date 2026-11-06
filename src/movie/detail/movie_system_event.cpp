#include <cstring>

#include "movie/detail/movie_system_event.hpp"

namespace movie::detail {

namespace {

constexpr MovieResult StatusNotCreated = static_cast<MovieResult>(22);
constexpr MovieResult StatusDestroyed = static_cast<MovieResult>(19);

}

SystemEvent::SystemEvent(IAllocator* allocator,
  nn::os::EventClearMode clearMode)
  : MovieRefBase(allocator) {
  // Only the event fields are cleared, not its trailing reserved bytes.
  std::memset(m_Event.storage, 0, sizeof(m_Event.storage));
  m_Event.state = 0;
  m_Status = StatusNotCreated;
  if (nn::os::CreateSystemEvent(&m_Event, clearMode, false).IsSuccess()) {
    m_Status = MovieResult_Success;
  }
}

SystemEvent::~SystemEvent() {
  Finalize();
}

void SystemEvent::Finalize() {
  if (m_Status == MovieResult_Success) {
    nn::os::DestroySystemEvent(&m_Event);
    m_Status = StatusDestroyed;
  }
}

MovieResult SystemEvent::Initialize() {
  return m_Status;
}

void SystemEvent::Signal() {
  if (m_Status != StatusDestroyed) {
    nn::os::SignalSystemEvent(&m_Event);
  }
}

void SystemEvent::Wait() {
  if (m_Status != StatusDestroyed) {
    nn::os::WaitSystemEvent(&m_Event);
  }
}

bool SystemEvent::TryWait() {
  if (m_Status != MovieResult_Success) {
    return false;
  }

  return nn::os::TryWaitSystemEvent(&m_Event);
}

bool SystemEvent::TimedWait(nn::TimeSpan timeout) {
  if (m_Status != MovieResult_Success) {
    return false;
  }

  return nn::os::TimedWaitSystemEvent(&m_Event, timeout);
}

void SystemEvent::Clear() {
  if (m_Status != StatusDestroyed) {
    nn::os::ClearSystemEvent(&m_Event);
  }
}

}
