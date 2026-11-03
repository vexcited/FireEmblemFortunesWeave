/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_frame_encoder_internal.hpp"

namespace fw::compression {

size_t WriteCompressionFrameHeader(
  void* destination, size_t capacity,
  const BlockCompressionParameters* parameters, uint64_t pledged_size,
  unsigned dictionary_id
) {
  using namespace frame_detail;
  unsigned dictionary_code = (dictionary_id > 0) +
    (dictionary_id >= 256) + (dictionary_id >= 65536);
  if (Read<unsigned>(parameters->frame_parameters + 8)) {
    dictionary_code = 0;
  }
  unsigned content = ContentSizeFlag(parameters) != 0;
  unsigned single = content &&
    pledged_size <= (uint64_t(1) << parameters->match.window_log);
  unsigned size_code = content ? (pledged_size >= 256) +
    (pledged_size >= 65792) + (pledged_size >= 0xffffffff) : 0;
  uint8_t description = uint8_t(dictionary_code +
    ((ChecksumFlag(parameters) > 0) << 2) + (single << 5) +
    (size_code << 6));
  if (capacity < 18) {
    return size_t(-70);
  }
  auto* output = static_cast<uint8_t*>(destination);
  size_t position = 0;
  if (parameters->format == 0) {
    Write<uint32_t>(output, 0xfd2fb528);
    position = 4;
  }
  output[position++] = description;
  if (!single) {
    output[position++] = uint8_t((parameters->match.window_log - 10) << 3);
  }
  switch (dictionary_code) {
    case 1:
      output[position++] = uint8_t(dictionary_id);
      break;
    case 2:
      Write<uint16_t>(output + position, uint16_t(dictionary_id));
      position += 2;
      break;
    case 3:
      Write<uint32_t>(output + position, dictionary_id);
      position += 4;
      break;
  }
  switch (size_code) {
    case 0:
      if (single) {
        output[position++] = uint8_t(pledged_size);
      }
      break;
    case 1:
      Write<uint16_t>(output + position, uint16_t(pledged_size - 256));
      position += 2;
      break;
    case 2:
      Write<uint32_t>(output + position, uint32_t(pledged_size));
      position += 4;
      break;
    case 3:
      Write<uint64_t>(output + position, pledged_size);
      position += 8;
      break;
  }
  return position;
}

}
