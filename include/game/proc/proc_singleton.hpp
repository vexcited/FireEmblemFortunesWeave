#pragma once

#include <functional>

#include "game/proc/proc_inst.hpp"

namespace game {

// Link time optimization internalized these so they are addressed directly.
#pragma GCC visibility push(hidden)

class IProcSingleton : public ProcInst {
public:
  void Unknown12() override {}
};

template<typename T>
class ProcSingleton : public IProcSingleton {
public:
  ProcSingleton() {
    instance_ = static_cast<T*>(this);
  }

  ~ProcSingleton() override {
    instance_ = nullptr;
  }

  static T* GetInstance() {
    return instance_;
  }

private:
  static T* instance_;
};

template<typename T>
T* ProcSingleton<T>::instance_ = nullptr;

template<typename T, typename L>
class ProcJumpableSingleton : public ProcSingleton<T> {
public:
  void SetLabel(L label) {
    label_ = label;
  }

private:
  L label_{};
  L next_label_{};
  std::function<void()> jump_;
};

#pragma GCC visibility pop

}
