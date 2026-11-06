#pragma once

#include "nn/os/time.hpp"

namespace movie::detail {

class StopWatch {
public:
  StopWatch();

  void Start();
  void Pause();
  void Reset();
  nn::TimeSpan GetElapsedTime() const;

private:
  bool m_IsRunning;
  nn::TimeSpan m_ElapsedTime;
  nn::TimeSpan m_StartTime;
};

}
