/*
 * SPDX-License-Identifier: MIT
 * Origin: musl src/string/memset.c and src/string/strlen.c.
 * Revision: 57b97b42bdecafd81c4967a10aef6eaf43d3fcb8.
 * License: https://git.musl-libc.org/cgit/musl/tree/COPYRIGHT
 *
 * Copyright (c) 2005-2014 Rich Felker, et al.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "rtld/string.hpp"

#include <stdint.h>

using Word32 = uint32_t __attribute__((__may_alias__));
using Word64 = uint64_t __attribute__((__may_alias__));

extern "C" void* memset(void* destination, int value, size_t count) {
  auto* output = static_cast<unsigned char*>(destination);

  if (!count) {
    return destination;
  }

  output[0] = value;
  output[count - 1] = value;

  if (count <= 2) {
    return destination;
  }

  output[1] = value;
  output[2] = value;
  output[count - 2] = value;
  output[count - 3] = value;

  if (count <= 6) {
    return destination;
  }

  output[3] = value;
  output[count - 4] = value;

  if (count <= 8) {
    return destination;
  }

  size_t align = -uintptr_t(output) & 3;
  output += align;
  count = (count - align) & ~size_t(3);
  uint32_t fill = uint32_t(-1) / 255 * uint8_t(value);
  *reinterpret_cast<Word32*>(output) = fill;
  *reinterpret_cast<Word32*>(output + count - 4) = fill;

  if (count <= 8) {
    return destination;
  }

  *reinterpret_cast<Word32*>(output + 4) = fill;
  *reinterpret_cast<Word32*>(output + 8) = fill;
  *reinterpret_cast<Word32*>(output + count - 12) = fill;
  *reinterpret_cast<Word32*>(output + count - 8) = fill;

  if (count <= 24) {
    return destination;
  }

  *reinterpret_cast<Word32*>(output + 12) = fill;
  *reinterpret_cast<Word32*>(output + 16) = fill;
  *reinterpret_cast<Word32*>(output + 20) = fill;
  *reinterpret_cast<Word32*>(output + 24) = fill;
  *reinterpret_cast<Word32*>(output + count - 28) = fill;
  *reinterpret_cast<Word32*>(output + count - 24) = fill;
  *reinterpret_cast<Word32*>(output + count - 20) = fill;
  *reinterpret_cast<Word32*>(output + count - 16) = fill;

  align = 24 + (uintptr_t(output) & 4);
  output += align;
  count -= align;
  uint64_t wide = fill | (uint64_t(fill) << 32);

  // The head and tail stores already cover the final partial block.
  for (; count >= 32; count -= 32, output += 32) {
    *reinterpret_cast<Word64*>(output) = wide;
    *reinterpret_cast<Word64*>(output + 8) = wide;
    *reinterpret_cast<Word64*>(output + 16) = wide;
    *reinterpret_cast<Word64*>(output + 24) = wide;
  }

  return destination;
}

extern "C" size_t strlen(const char* string) {
  const char* cursor = string;

  for (; uintptr_t(cursor) & 7; ++cursor) {
    if (!*cursor) {
      return cursor - string;
    }
  }

  auto* words = reinterpret_cast<const Word64*>(cursor);

  while (!((*words - 0x0101010101010101) & ~*words & 0x8080808080808080)) {
    ++words;
  }

  cursor = reinterpret_cast<const char*>(words);

  while (*cursor) {
    ++cursor;
  }

  return cursor - string;
}
