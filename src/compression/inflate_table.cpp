#include "compression/inflate.hpp"

namespace {

using fw::compression::CodeType;
using fw::compression::InflateCode;

constexpr uint16_t LengthBase[31] = {
  3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31,
  35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0,
};
constexpr uint16_t LengthExtra[31] = {
  16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18,
  19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 16, 203, 77,
};
constexpr uint16_t DistanceBase[32] = {
  1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193,
  257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145,
  8193, 12289, 16385, 24577, 0, 0,
};
constexpr uint16_t DistanceExtra[32] = {
  16, 16, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22,
  23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 64, 64,
};

bool TableTooLarge(CodeType type, uint32_t used) {
  return (type == CodeType::Lengths && used > 852)
    || (type == CodeType::Distances && used > 592);
}

}

int nnutilZlib_inflate_table(
  CodeType type, const uint16_t* lengths, uint32_t symbols,
  InflateCode** table, uint32_t* root_bits, uint16_t* work
) {
  uint16_t counts[16] = {};
  uint16_t offsets[16];

  for (uint32_t symbol = 0; symbol < symbols; ++symbol) {
    ++counts[lengths[symbol]];
  }

  uint32_t maximum = 15;

  while (maximum != 0 && counts[maximum] == 0) {
    --maximum;
  }

  uint32_t root = *root_bits < maximum ? *root_bits : maximum;

  if (maximum == 0) {
    *(*table)++ = {64, 1, 0};
    *(*table)++ = {64, 1, 0};
    *root_bits = 1;
    return 0;
  }

  uint32_t minimum = 1;

  while (minimum < maximum && counts[minimum] == 0) {
    ++minimum;
  }

  if (root < minimum) {
    root = minimum;
  }

  int32_t remaining = 1;

  for (unsigned bits = 1; bits <= 15; ++bits) {
    remaining = remaining * 2 - counts[bits];

    if (remaining < 0) {
      return -1;
    }
  }

  if (remaining > 0 && (type == CodeType::Codes || maximum != 1)) {
    return -1;
  }

  offsets[1] = 0;

  for (unsigned bits = 1; bits < 15; ++bits) {
    offsets[bits + 1] = offsets[bits] + counts[bits];
  }

  for (uint32_t symbol = 0; symbol < symbols; ++symbol) {
    if (lengths[symbol] != 0) {
      work[offsets[lengths[symbol]]++] = static_cast<uint16_t>(symbol);
    }
  }

  const uint16_t* base = DistanceBase;
  const uint16_t* extra = DistanceExtra;
  uint32_t match = 0;

  if (type == CodeType::Codes) {
    base = work;
    extra = work;
    match = 20;
  }
  else if (type == CodeType::Lengths) {
    base = LengthBase;
    extra = LengthExtra;
    match = 257;
  }

  uint32_t code = 0;
  uint32_t symbol = 0;
  uint32_t length = minimum;
  InflateCode* next = *table;
  uint32_t current = root;
  uint32_t drop = 0;
  uint32_t low = 0xffffffff;
  uint32_t used = 1u << root;
  uint32_t mask = used - 1;

  if (TableTooLarge(type, used)) {
    return 1;
  }

  for (;;) {
    InflateCode entry;
    entry.bits = static_cast<uint8_t>(length - drop);
    uint32_t value = work[symbol];

    if (value + 1 < match) {
      entry.operation = 0;
      entry.value = static_cast<uint16_t>(value);
    }
    else if (value >= match) {
      entry.operation = static_cast<uint8_t>(extra[value - match]);
      entry.value = base[value - match];
    }
    else {
      entry.operation = 96;
      entry.value = 0;
    }

    uint32_t increment = 1u << (length - drop);
    uint32_t fill = 1u << current;
    uint32_t table_size = fill;

    do {
      fill -= increment;
      next[(code >> drop) + fill] = entry;
    } while (fill != 0);

    increment = 1u << (length - 1);

    while ((code & increment) != 0) {
      increment >>= 1;
    }

    code = increment != 0 ? (code & (increment - 1)) + increment : 0;
    ++symbol;

    if (--counts[length] == 0) {
      if (length == maximum) {
        break;
      }

      length = lengths[work[symbol]];
    }

    if (length > root && (code & mask) != low) {
      if (drop == 0) {
        drop = root;
      }

      next += table_size;
      current = length - drop;
      remaining = 1 << current;

      while (current + drop < maximum) {
        remaining -= counts[current + drop];

        if (remaining <= 0) {
          break;
        }

        ++current;
        remaining *= 2;
      }

      used += 1u << current;

      if (TableTooLarge(type, used)) {
        return 1;
      }

      low = code & mask;
      (*table)[low] = {
        static_cast<uint8_t>(current), static_cast<uint8_t>(root),
        static_cast<uint16_t>(next - *table),
      };
    }
  }

  if (code != 0) {
    next[code] = {64, static_cast<uint8_t>(length - drop), 0};
  }

  *table += used;
  *root_bits = root;
  return 0;
}

/*
  Adapted from zlib 1.3.1 inftrees.c by Mark Adler.
  This altered reconstruction uses the SDK export name and C++ types.
  https://github.com/madler/zlib/blob/v1.3.1/inftrees.c

  Copyright (C) 1995-2024 Mark Adler
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
