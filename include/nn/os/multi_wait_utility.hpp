#pragma once

#include <utility>

#include "nn/os/event.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/system_event.hpp"

namespace nn::os {

namespace detail {

class AutoMultiWaitHolder {
public:
  template <typename T>
  AutoMultiWaitHolder(MultiWaitType* multiWait, T&& object) {
    InitializeMultiWaitHolder(&m_Holder, std::forward<T>(object));
    LinkMultiWaitHolder(multiWait, &m_Holder);
  }

  ~AutoMultiWaitHolder() {
    UnlinkMultiWaitHolder(&m_Holder);
    FinalizeMultiWaitHolder(&m_Holder);
  }

  std::pair<MultiWaitHolderType*, int> ConvertResult(
    const std::pair<MultiWaitHolderType*, int> result, int index) {
    if (result.first == &m_Holder) {
      return std::pair<MultiWaitHolderType*, int>(nullptr, index);
    }

    return result;
  }

private:
  MultiWaitHolderType m_Holder;
};

template <typename F>
std::pair<MultiWaitHolderType*, int> WaitAnyImpl(F&& function,
  MultiWaitType* multiWait, int) {
  return std::pair<MultiWaitHolderType*, int>(function(multiWait), -1);
}

template <typename F, typename T, typename... Args>
std::pair<MultiWaitHolderType*, int> WaitAnyImpl(F&& function,
  MultiWaitType* multiWait, int index, T&& object, Args&&... arguments) {
  AutoMultiWaitHolder holder(multiWait, std::forward<T>(object));
  return holder.ConvertResult(WaitAnyImpl(std::forward<F>(function),
    multiWait, index + 1, std::forward<Args>(arguments)...), index);
}

template <typename F, typename... Args>
inline int WaitAnyImpl(F&& function, Args&&... arguments) {
  MultiWaitType multiWait;
  InitializeMultiWait(&multiWait);
  int index = WaitAnyImpl(std::forward<F>(function), &multiWait, 0,
    std::forward<Args>(arguments)...).second;
  FinalizeMultiWait(&multiWait);
  return index;
}

}

// Returns the position of the first signaled object in the arguments.
template <typename... Args>
inline int WaitAny(Args&&... arguments) {
  return detail::WaitAnyImpl(
    static_cast<MultiWaitHolderType* (*)(MultiWaitType*)>(&WaitAny),
    std::forward<Args>(arguments)...);
}

}
