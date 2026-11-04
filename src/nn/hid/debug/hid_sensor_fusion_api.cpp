#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::debug {

void GetSensorFusionError() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetSensorFusionError(&value));
}

}
