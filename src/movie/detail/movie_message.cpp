#include "movie/detail/movie_message.hpp"

namespace movie::detail {

void Message::Reset() {
  m_Waiter = nullptr;
  m_WaitTimeMs = 0;
  m_IsTimedOut = false;
  m_Result = MovieResult_MessageNotProcessed;
}

nn::os::LightEventType* Message::GetWaiter() {
  return m_Waiter;
}

void Message::SetWaiter(nn::os::LightEventType* waiter) {
  m_Waiter = waiter;
}

MovieResult Message::GetResult() {
  return m_Result;
}

void Message::SetResult(MovieResult result) {
  m_Result = result;
}

void Message::SignalWaiter() {
  if (m_Waiter != nullptr && !m_IsTimedOut) {
    nn::os::SignalLightEvent(m_Waiter);
  }
}

int64_t Message::GetWaitTimeMs() {
  return m_WaitTimeMs;
}

bool Message::IsTimedOut() {
  return m_IsTimedOut;
}

bool Message::TimedWait(int64_t waitTimeMs) {
  m_WaitTimeMs = waitTimeMs;
  m_IsTimedOut = false;

  if (m_Waiter == nullptr) {
    m_Result = MovieResult_Success;
    return true;
  }

  bool isSignaled = nn::os::TimedWaitLightEvent(m_Waiter,
    {waitTimeMs * 1000 * 1000});
  m_IsTimedOut = !isSignaled;
  return isSignaled;
}

}
