#include "nn/os/barrier.hpp"

#include <stddef.h>

namespace nn::os {

static_assert(sizeof(BarrierType) == 20);
static_assert(offsetof(BarrierType, generation_low) == 4);
static_assert(offsetof(BarrierType, lock) == 12);
static_assert(offsetof(BarrierType, condition) == 16);

static uint64_t Generation(const BarrierType* barrier) {
  return uint64_t(barrier->generation_low) | uint64_t(barrier->generation_high)
                                               << 32;
}

void InitializeBarrier(BarrierType* barrier, int participants) {
  barrier->lock.Initialize();
  barrier->condition.Initialize();
  barrier->participants = uint16_t(participants);
  barrier->arrived = 0;
  barrier->generation_low = 0;
  barrier->generation_high = 0;
}

void FinalizeBarrier(BarrierType* barrier) {
  barrier->participants = 0;
  barrier->lock.Finalize();
}

void AwaitBarrier(BarrierType* barrier) {
  barrier->lock.Enter();
  uint64_t generation = Generation(barrier);
  uint64_t target = generation + barrier->participants;
  uint16_t arrived = uint16_t(barrier->arrived + 1);

  if (barrier->participants <= arrived) {
    barrier->arrived = 0;
    barrier->generation_low = uint32_t(target);
    barrier->generation_high = uint32_t(target >> 32);
    barrier->condition.Broadcast();
  }
  else {
    barrier->arrived = arrived;

    while (generation < target) {
      barrier->condition.Wait(&barrier->lock.state);
      generation = Generation(barrier);
    }
  }

  barrier->lock.Leave();
}

}
