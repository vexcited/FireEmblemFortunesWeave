#include "compression/zstd_checksum.hpp"

namespace fw::compression {
namespace {

constexpr uint64_t kPrime1 = 0x9E3779B185EBCA87;
constexpr uint64_t kPrime2 = 0xC2B2AE3D27D4EB4F;
constexpr uint64_t kPrime3 = 0x165667B19E3779F9;
constexpr uint64_t kPrime4 = 0x85EBCA77C2B2AE63;
constexpr uint64_t kPrime5 = 0x27D4EB2F165667C5;

uint64_t Rotate(uint64_t value, unsigned bits) {
  return (value << bits) | (value >> (64 - bits));
}

uint64_t Load64(const void* source) {
  uint64_t value;
  __builtin_memcpy(&value, source, sizeof(value));
  return value;
}

uint64_t Round(uint64_t lane, uint64_t input) {
  return Rotate(lane + input * kPrime2, 31) * kPrime1;
}

uint64_t Merge(const uint64_t* lanes) {
  uint64_t hash = Rotate(lanes[0], 1) + Rotate(lanes[1], 7) +
    Rotate(lanes[2], 12) + Rotate(lanes[3], 18);
  for (unsigned i = 0; i < 4; ++i) {
    hash = (hash ^ Round(0, lanes[i])) * kPrime1 + kPrime4;
  }
  return hash;
}

uint64_t Finish(uint64_t hash, const uint8_t* source, size_t size) {
  size &= 31;
  while (size >= 8) {
    hash = Rotate(hash ^ Round(0, Load64(source)), 27) * kPrime1 + kPrime4;
    source += 8;
    size -= 8;
  }
  if (size >= 4) {
    uint32_t word;
    __builtin_memcpy(&word, source, sizeof(word));
    hash = Rotate(hash ^ uint64_t(word) * kPrime1, 23) * kPrime2 + kPrime3;
    source += 4;
    size -= 4;
  }
  while (size--) {
    hash = Rotate(hash ^ uint64_t(*source++) * kPrime5, 11) * kPrime1;
  }
  hash ^= hash >> 33;
  hash *= kPrime2;
  hash ^= hash >> 29;
  hash *= kPrime3;
  return hash ^ (hash >> 32);
}

}

uint64_t Hash64(const void* source, size_t size, uint64_t seed) {
  const auto* cursor = static_cast<const uint8_t*>(source);
  size_t remaining = size;
  uint64_t hash = seed + kPrime5;
  if (size >= 32) {
    uint64_t lanes[] = {seed + kPrime1 + kPrime2, seed + kPrime2,
                       seed, seed - kPrime1};
    do {
      for (unsigned i = 0; i < 4; ++i) {
        lanes[i] = Round(lanes[i], Load64(cursor + i * 8));
      }
      cursor += 32;
      remaining -= 32;
    } while (remaining >= 32);
    hash = Merge(lanes);
  }
  return Finish(hash + size, cursor, remaining);
}

int ResetChecksum(ChecksumState* state, uint64_t seed) {
  __builtin_memset(state, 0, sizeof(*state));
  state->lanes[0] = seed + kPrime1 + kPrime2;
  state->lanes[1] = seed + kPrime2;
  state->lanes[2] = seed;
  state->lanes[3] = seed - kPrime1;
  return 0;
}

int UpdateChecksum(ChecksumState* state, const void* source, size_t size) {
  if (!source) {
    return 0;
  }
  const auto* cursor = static_cast<const uint8_t*>(source);
  const auto* end = cursor + size;
  auto* buffer = reinterpret_cast<uint8_t*>(state->buffered_words);
  state->total_size += size;
  if (state->buffered_size + size < 32) {
    __builtin_memcpy(buffer + state->buffered_size, source, size);
    state->buffered_size += size;
    return 0;
  }
  if (state->buffered_size) {
    __builtin_memcpy(buffer + state->buffered_size, cursor,
                     32 - state->buffered_size);
    for (unsigned i = 0; i < 4; ++i) {
      state->lanes[i] = Round(state->lanes[i], state->buffered_words[i]);
    }
    cursor += 32 - state->buffered_size;
    state->buffered_size = 0;
  }
  while (cursor + 32 <= end) {
    for (unsigned i = 0; i < 4; ++i) {
      state->lanes[i] = Round(state->lanes[i], Load64(cursor + i * 8));
    }
    cursor += 32;
  }
  if (cursor < end) {
    __builtin_memcpy(buffer, cursor, end - cursor);
    state->buffered_size = end - cursor;
  }
  return 0;
}

uint64_t DigestChecksum(const ChecksumState* state) {
  const uint64_t hash = state->total_size >= 32 ? Merge(state->lanes) :
    state->lanes[2] + kPrime5;
  return Finish(hash + state->total_size,
                 reinterpret_cast<const uint8_t*>(state->buffered_words),
                 state->total_size);
}

}
