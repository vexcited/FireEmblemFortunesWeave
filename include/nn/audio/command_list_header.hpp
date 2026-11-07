#pragma once

#include <stdint.h>

namespace nn::audio {

struct CommandListHeader {
  uint32_t buffer_size;
  int32_t command_count;
  int32_t* mix_buffers;
  int32_t mix_buffer_count;
  int32_t sample_count;
  int32_t sample_rate;
  uint32_t reserved_1c;
};

}
