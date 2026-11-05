#pragma once

#include <atomic>
#include <stdint.h>

namespace nn::movie::detail {

class MediaState {
public:
  enum State : int32_t {
    State_None,
  };

  virtual ~MediaState();

  void SetState(State state);
  State GetState() const;

private:
  uint8_t m_Reserved[1240];
  std::atomic<State> m_State;
};

}
