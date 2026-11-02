#include "compression/inflate.hpp"

using fw::compression::InflateCode;
using fw::compression::InflateStream;

void nnutilZlib_inflate_fast(InflateStream* stream, uint32_t start) {
  auto* state = stream->state;
  const uint8_t* input = stream->next_input;
  const uint8_t* input_limit = input + stream->input_available - 5;
  uint8_t* output = stream->next_output;
  uint8_t* output_start = output - (start - stream->output_available);
  uint8_t* output_limit = output + stream->output_available - 257;
  uint64_t hold = state->hold;
  uint32_t bits = state->bits;
  uint32_t length_mask = (1u << state->length_bits) - 1;
  uint32_t distance_mask = (1u << state->distance_bits) - 1;

  do {
    if (bits < 15) {
      hold += static_cast<uint64_t>(*input++) << bits;
      bits += 8;
      hold += static_cast<uint64_t>(*input++) << bits;
      bits += 8;
    }

    InflateCode entry = state->length_codes[hold & length_mask];

    for (;;) {
      hold >>= entry.bits;
      bits -= entry.bits;

      if (entry.operation == 0 || (entry.operation & 0x50) != 0) {
        break;
      }

      entry = state->length_codes[
        entry.value + (hold & ((1u << entry.operation) - 1))
      ];
    }

    if (entry.operation == 0) {
      *output++ = static_cast<uint8_t>(entry.value);
    }
    else if ((entry.operation & 16) != 0) {
      uint32_t length = entry.value;
      uint32_t extra = entry.operation & 15;

      if (extra != 0) {
        if (bits < extra) {
          hold += static_cast<uint64_t>(*input++) << bits;
          bits += 8;
        }

        length += static_cast<uint32_t>(hold) & ((1u << extra) - 1);
        hold >>= extra;
        bits -= extra;
      }

      if (bits < 15) {
        hold += static_cast<uint64_t>(*input++) << bits;
        bits += 8;
        hold += static_cast<uint64_t>(*input++) << bits;
        bits += 8;
      }

      entry = state->distance_codes[hold & distance_mask];

      for (;;) {
        hold >>= entry.bits;
        bits -= entry.bits;

        if ((entry.operation & 0x50) != 0) {
          break;
        }

        entry = state->distance_codes[
          entry.value + (hold & ((1u << entry.operation) - 1))
        ];
      }

      if ((entry.operation & 16) == 0) {
        stream->message = "invalid distance code";
        state->mode = 16209;
        break;
      }

      extra = entry.operation & 15;

      if (bits < extra) {
        hold += static_cast<uint64_t>(*input++) << bits;
        bits += 8;

        if (bits < extra) {
          hold += static_cast<uint64_t>(*input++) << bits;
          bits += 8;
        }
      }

      uint32_t distance = entry.value
        + (static_cast<uint32_t>(hold) & ((1u << extra) - 1));
      hold >>= extra;
      bits -= extra;
      uint32_t produced = static_cast<uint32_t>(output - output_start);

      if (distance > produced
          && distance - produced > state->window_available && state->sane) {
        stream->message = "invalid distance too far back";
        state->mode = 16209;
        break;
      }

      while (length != 0) {
        produced = static_cast<uint32_t>(output - output_start);

        if (distance > produced) {
          uint32_t back = distance - produced;
          uint32_t index = state->window_next + state->window_size - back;

          if (index >= state->window_size) {
            index -= state->window_size;
          }

          *output++ = state->window[index];
        }
        else {
          *output = *(output - distance);
          ++output;
        }

        --length;
      }
    }
    else if ((entry.operation & 32) != 0) {
      state->mode = 16191;
      break;
    }
    else {
      stream->message = "invalid literal/length code";
      state->mode = 16209;
      break;
    }
  } while (input < input_limit && output < output_limit);

  input -= bits >> 3;
  bits &= 7;
  hold &= (1u << bits) - 1;
  stream->next_input = input;
  stream->next_output = output;
  stream->input_available = static_cast<uint32_t>(input_limit - input + 5);
  stream->output_available = static_cast<uint32_t>(output_limit - output + 257);
  state->hold = hold;
  state->bits = bits;
}

/*
  Adapted from zlib 1.3.1 inffast.c by Mark Adler.
  This altered reconstruction uses bytewise match copying and C++ ABI views.
  https://github.com/madler/zlib/blob/v1.3.1/inffast.c

  Copyright (C) 1995-2017 Mark Adler
  Copyright (C) 1995-2024 Jean-loup Gailly and Mark Adler

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.
  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:
  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
  Jean-loup Gailly        Mark Adler
  jloup@gzip.org          madler@alumni.caltech.edu
*/
