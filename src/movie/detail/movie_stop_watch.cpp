#include "movie/detail/movie_stop_watch.hpp"

namespace movie::detail {

namespace {

inline nn::TimeSpan GetCurrentTime() {
  return nn::os::ConvertToTimeSpan(nn::os::GetSystemTick());
}

}

StopWatch::StopWatch()
  : m_IsRunning(false), m_ElapsedTime{0}, m_StartTime{0} {
}

void StopWatch::Start() {
  if (!m_IsRunning) {
    m_StartTime = GetCurrentTime();
    m_IsRunning = true;
  }
}

void StopWatch::Pause() {
  if (m_IsRunning) {
    nn::TimeSpan now = GetCurrentTime();
    m_IsRunning = false;
    m_ElapsedTime.nanoseconds += now.nanoseconds - m_StartTime.nanoseconds;
  }
}

void StopWatch::Reset() {
  bool isRunning = m_IsRunning;
  Pause();
  m_ElapsedTime.nanoseconds = 0;
  if (isRunning) {
    Start();
  }
}

nn::TimeSpan StopWatch::GetElapsedTime() const {
  if (!m_IsRunning) {
    return m_ElapsedTime;
  }

  nn::TimeSpan now = GetCurrentTime();
  return {now.nanoseconds - m_StartTime.nanoseconds +
    m_ElapsedTime.nanoseconds};
}

}
