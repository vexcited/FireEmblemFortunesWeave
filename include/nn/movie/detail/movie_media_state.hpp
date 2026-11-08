#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

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

  static constexpr int FunctionCountMax = 31;
  static constexpr int ValidStateCountMax = 10;

protected:
  // Every row is written whole so that unlisted slots hold State_None.
  template <size_t N>
  void SetValidStates(int function, const int (&states)[N]) {
    for (size_t i = 0; i < ValidStateCountMax; ++i) {
      m_ValidStates[function][i] = static_cast<State>(i < N ? states[i] : 0);
    }
  }

  template <size_t N>
  void AddValidStates(int function, const int (&states)[N]) {
    for (size_t i = 0; i < N; ++i) {
      m_ValidStates[function][i] = static_cast<State>(states[i]);
    }
  }

  // Clears the rows from the given function on, along with the state.
  void ClearValidStatesFrom(int function) {
    auto* start = reinterpret_cast<uint8_t*>(m_ValidStates[function]);
    memset(start, 0, reinterpret_cast<uint8_t*>(&m_State + 1) - start);
  }


  State m_ValidStates[FunctionCountMax][ValidStateCountMax];

private:
  std::atomic<State> m_State;
};

}
