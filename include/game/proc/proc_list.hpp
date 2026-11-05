#pragma once

#include <functional>
#include <vector>

#include "game/proc/proc_inst.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// A process running a list of steps one after the other.
class ProcList : public ProcInst {
public:
  enum class Result {
    kRepeat,
    kNext,
  };

  using Step = std::function<Result(ProcInst*)>;

  ProcList& Call(const std::function<void()>& function);
  ProcList& Call(const std::function<void(ProcInst*)>& function);
  ProcList& Tick(const std::function<bool()>& function);
  ProcList& Tick(const std::function<Result()>& function);

private:
  // Copies the step, the builders pass temporaries.
  void Add(const Step& step) {
    steps_->push_back(step);
  }

  std::vector<Step>* steps_;
};

#pragma GCC visibility pop

}
