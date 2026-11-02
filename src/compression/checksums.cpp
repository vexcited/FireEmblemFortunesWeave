#include "compression/checksums.hpp"

namespace {

constexpr uint64_t AdlerModulus = 65521;
constexpr uint32_t CrcPolynomial = 0xedb88320;

constexpr uint32_t MultiplyCrc(uint32_t factor, uint32_t value) {
  uint32_t result = 0;
  uint32_t mask = 0x80000000;

  for (;;) {
    if ((factor & mask) != 0) {
      result ^= value;

      if ((factor & (mask - 1)) == 0) {
        return result;
      }
    }

    mask >>= 1;
    value = (value >> 1) ^ ((value & 1) != 0 ? CrcPolynomial : 0);
  }
}

struct CrcTables {
  uint32_t bytes[256] = {};
  uint32_t powers[32] = {};

  constexpr CrcTables() {
    for (uint32_t index = 0; index < 256; ++index) {
      uint32_t value = index;

      for (unsigned bit = 0; bit < 8; ++bit) {
        value = (value >> 1) ^ ((value & 1) != 0 ? CrcPolynomial : 0);
      }

      bytes[index] = value;
    }

    powers[0] = 0x40000000;

    for (unsigned index = 1; index < 32; ++index) {
      powers[index] = MultiplyCrc(powers[index - 1], powers[index - 1]);
    }
  }
};

constexpr CrcTables Tables;

uint64_t CombineAdler(
  uint64_t first, uint64_t second, int64_t second_size
) {
  if (second_size < 0) {
    return 0xffffffff;
  }

  uint64_t remainder = static_cast<uint64_t>(second_size) % AdlerModulus;
  uint64_t low = first & 0xffff;
  uint64_t high = remainder * low % AdlerModulus;
  low += (second & 0xffff) + AdlerModulus - 1;
  high += ((first >> 16) & 0xffff) + ((second >> 16) & 0xffff)
    + AdlerModulus - remainder;

  if (low >= AdlerModulus) {
    low -= AdlerModulus;
  }

  if (low >= AdlerModulus) {
    low -= AdlerModulus;
  }

  if (high >= 2 * AdlerModulus) {
    high -= 2 * AdlerModulus;
  }

  if (high >= AdlerModulus) {
    high -= AdlerModulus;
  }

  return low | (high << 16);
}

uint32_t GenerateCrcOperation(int64_t size) {
  uint32_t operation = 0x80000000;
  unsigned power = 3;

  while (size != 0) {
    if ((size & 1) != 0) {
      operation = MultiplyCrc(Tables.powers[power & 31], operation);
    }

    ++power;
    size >>= 1;
  }

  return operation;
}

}

uint64_t nnutilZlib_adler32_z(
  uint64_t checksum, const uint8_t* data, size_t size
) {
  uint64_t low = checksum & 0xffff;
  uint64_t high = (checksum >> 16) & 0xffff;

  // The one-byte path precedes the null-pointer check in the SDK.
  if (size == 1) {
    low += *data;

    if (low >= AdlerModulus) {
      low -= AdlerModulus;
    }

    high += low;

    if (high >= AdlerModulus) {
      high -= AdlerModulus;
    }

    return low | (high << 16);
  }

  if (data == nullptr) {
    return 1;
  }

  do {
    size_t count = size < 5552 ? size : 5552;
    size -= count;

    while (count != 0) {
      low += *data++;
      high += low;
      --count;
    }

    low %= AdlerModulus;
    high %= AdlerModulus;
  } while (size != 0);

  return low | (high << 16);
}

uint64_t nnutilZlib_adler32(
  uint64_t checksum, const uint8_t* data, uint32_t size
) {
  return nnutilZlib_adler32_z(checksum, data, size);
}

uint64_t nnutilZlib_adler32_combine(
  uint64_t first, uint64_t second, int64_t second_size
) {
  return CombineAdler(first, second, second_size);
}

uint64_t nnutilZlib_adler32_combine64(
  uint64_t first, uint64_t second, int64_t second_size
) {
  return CombineAdler(first, second, second_size);
}

uint64_t nnutilZlib_crc32_z(
  uint64_t checksum, const uint8_t* data, size_t size
) {
  if (data == nullptr) {
    return 0;
  }

  uint32_t value = ~static_cast<uint32_t>(checksum);

  while (size != 0) {
    value = (value >> 8) ^ Tables.bytes[(value ^ *data++) & 0xff];
    --size;
  }

  return ~value;
}

uint64_t nnutilZlib_crc32(
  uint64_t checksum, const uint8_t* data, uint32_t size
) {
  return nnutilZlib_crc32_z(checksum, data, size);
}

uint64_t nnutilZlib_crc32_combine_gen(int64_t size) {
  return GenerateCrcOperation(size);
}

uint64_t nnutilZlib_crc32_combine_gen64(int64_t size) {
  return GenerateCrcOperation(size);
}

uint64_t nnutilZlib_crc32_combine_op(
  uint64_t first, uint64_t second, uint64_t operation
) {
  return MultiplyCrc(static_cast<uint32_t>(operation),
                     static_cast<uint32_t>(first))
    ^ static_cast<uint32_t>(second);
}

uint64_t nnutilZlib_crc32_combine(
  uint64_t first, uint64_t second, int64_t second_size
) {
  return nnutilZlib_crc32_combine_op(
    first, second, GenerateCrcOperation(second_size)
  );
}

uint64_t nnutilZlib_crc32_combine64(
  uint64_t first, uint64_t second, int64_t second_size
) {
  return nnutilZlib_crc32_combine_op(
    first, second, GenerateCrcOperation(second_size)
  );
}

const uint32_t* nnutilZlib_get_crc_table() {
  return Tables.bytes;
}
