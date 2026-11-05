#pragma once

#include "gxc/nvn/nvn.hpp"
#include "gxc/queue.hpp"

namespace gxc {

class NvnQueue;

enum class QueueType : int {
  kGraphics,
  kSecondary,
};

struct QueueDesc {
  QueueType type;
  NvnQueue* primary;
};

class NvnQueue final : public Queue {
public:
  explicit NvnQueue(const QueueDesc& desc);
  ~NvnQueue() override;

  Backend GetBackend() const override;
  void Submit(CommandList* commands,
    const std::optional<QueueSignal>& signal) override;
  void Wait(Semaphore* semaphore) override;

  NVNqueue* GetNative() {
    return &queue_;
  }

private:
  NVNqueue queue_;
  void* memory_ = nullptr;
};

}
