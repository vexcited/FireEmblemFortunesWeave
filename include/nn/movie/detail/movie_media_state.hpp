#pragma once

#include <atomic>
#include <stdint.h>

namespace nn::movie::detail {

class MediaState {
public:
  enum State : int32_t {
    State_None,
    State_Initialized,
    State_MediaSet = 3,
    State_Started,
    State_Stopped,
    State_MediaSourceMode = 8,
  };

  virtual ~MediaState();

  void SetState(State state);
  State GetState() const;

protected:
  static constexpr int FunctionCountMax = 31;
  static constexpr int ValidStateCountMax = 10;

  State m_ValidStates[FunctionCountMax][ValidStateCountMax];

private:
  std::atomic<State> m_State;
};

}
