#include "nn/diag/diag_abort.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid {

namespace utility {

Result GetVibrationDeviceHandles(VibrationDeviceHandle* pOutHandles,
  int* pOutCount, int count, uint32_t id,
  util::BitFlagSet<32, NpadStyleTag> style);

}

// Exactly one style is asked for at a time.
int GetVibrationDeviceHandles(VibrationDeviceHandle* pOutHandles, int count,
  const uint32_t& id, util::BitFlagSet<32, NpadStyleTag> style) {
  NN_ABORT_UNLESS_NOT_NULL(pOutHandles);
  NN_ABORT_UNLESS(count > 0);
  const uint32_t bits = style._storage[0];
  NN_ABORT_UNLESS(bits != 0);
  NN_ABORT_UNLESS((bits & (bits - 1)) == 0);
  int outCount = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(utility::GetVibrationDeviceHandles(
    pOutHandles, &outCount, count, id, style));
  return outCount;
}

}
