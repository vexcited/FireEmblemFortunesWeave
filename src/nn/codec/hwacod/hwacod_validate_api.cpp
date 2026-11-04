#include "nn/codec/hwacod/hwacod_parameter.hpp"

namespace nn::codec::hwacod {

Result ValidateHardwareAudioCodecInstanceParameter(
  const InstanceParameter& parameter) {
  return detail::ValidateParameter(parameter);
}

}
