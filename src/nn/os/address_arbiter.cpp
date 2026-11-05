#include "nn/diag/diag_abort.hpp"

extern "C" uint32_t svcWaitForAddress(const volatile void* address,
  uint32_t arbitrationType, int64_t value, int64_t timeout);
extern "C" uint32_t svcSignalToAddress(const volatile void* address,
  uint32_t signalType, int32_t value, int32_t count);

namespace nn::os {

namespace {

constexpr uint32_t ArbitrationType_WaitIfEqual64 = 3;
constexpr uint32_t SignalType_Signal = 0;

}

void WaitForAddress(const int64_t* address, int64_t value) {
  const Result result = {svcWaitForAddress(address,
    ArbitrationType_WaitIfEqual64, value, -1)};

  if (result.GetInnerValueForDebug() != 0xfa01) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
}

void SignalToAddress(const int64_t* address) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{svcSignalToAddress(address, SignalType_Signal, 0, 1)});
}

void BroadcastToAddress(const int64_t* address) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{svcSignalToAddress(address, SignalType_Signal, 0, -1)});
}

}
