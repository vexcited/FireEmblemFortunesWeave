#pragma once

#include <stdint.h>

#include "movie/movie_result.hpp"
#include "nn/os/light_event.hpp"

namespace movie::detail {

class Message {
public:
  virtual ~Message();
  virtual void Execute() = 0;

  void Reset();
  nn::os::LightEventType* GetWaiter();
  void SetWaiter(nn::os::LightEventType* waiter);
  MovieResult GetResult();
  void SetResult(MovieResult result);
  void SignalWaiter();
  int64_t GetWaitTimeMs();
  bool IsTimedOut();
  bool TimedWait(int64_t waitTimeMs);

private:
  MovieResult m_Result;
  nn::os::LightEventType* m_Waiter;
  int64_t m_WaitTimeMs;
  bool m_IsTimedOut;
};

}
