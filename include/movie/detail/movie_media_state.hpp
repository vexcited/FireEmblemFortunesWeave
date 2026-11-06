#pragma once

#include <atomic>
#include <stdint.h>

namespace movie::detail {

class MediaState {
public:
  enum State : int32_t {
    State_None,
    State_Created,
    State_Initialized,
    State_Reserved3,
    State_Prepared,
    State_Started,
    State_Stopped,
    State_Error = 9,
  };

  MediaState() : m_ValidStates{}, m_State(State_Created) {}
  virtual ~MediaState();

  void SetState(State state);
  State GetState() const;

protected:
  static constexpr int FunctionCountMax = 32;
  static constexpr int ValidStateCountMax = 9;

  State m_ValidStates[FunctionCountMax][ValidStateCountMax];

private:
  std::atomic<State> m_State;
};

}
