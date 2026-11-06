#include "nn/vi2/vi2_frontend_impl.hpp"

namespace nn::vi2::detail {

Result TimestampRecorderFlusher::operator()(FrontendImpl* pFrontend) const {
  TimestampRecorderType* recorder = pRecorder;
  recorder->mutex.Lock();

  if (recorder->hasPendingTimestamps == 1) {
    UpdateTimestamps(recorder, pFrontend->GetFunctions());
    const uint8_t isPending = recorder->hasPendingTimestamps;
    recorder->mutex.Unlock();
    NN_ABORT_UNLESS(isPending != 1);
    return {0};
  }

  recorder->mutex.Unlock();
  return {0};
}

}
