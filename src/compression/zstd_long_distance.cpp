/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_long_distance.hpp"
#include "compression/zstd_block_encoder.hpp"
#include "compression/zstd_block_internal.hpp"
#include "compression/zstd_checksum.hpp"
#include "compression/zstd_external.hpp"

namespace fw::compression {
namespace {
using namespace block_detail;

const uint64_t GearTable[256] = {
  0xf5b8f72c5f77775cULL, 0x84935f266b7ac412ULL, 0xb647ada9ca730cccULL,
  0xb065bb4b114fb1deULL, 0x34584e7e8c3a9fd0ULL, 0x4e97e17c6ae26b05ULL,
  0x3a03d743bc99a604ULL, 0xcecd042422c4044fULL, 0x76de76c58524259eULL,
  0x9c8528f65badeacaULL, 0x86563706e2097529ULL, 0x2902475fa375d889ULL,
  0xafb32a9739a5ebe6ULL, 0xce2714da3883e639ULL, 0x021eaf821722e69eULL,
  0x00037b628620b628ULL, 0x049a8d455d88caf5ULL, 0x8556d711e6958140ULL,
  0x04f7ae74fc605c1fULL, 0x829f0c3468bd3a20ULL, 0x4ffdc885c625179eULL,
  0x8473de048a3daf1bULL, 0x51008822b05646b2ULL, 0x69d75d12b2d1cc5fULL,
  0x8c9d4a19159154bcULL, 0xc3cc10f4abbd4003ULL, 0xd06ddc1cecb97391ULL,
  0xbe48e6e7ed80302eULL, 0x3481db31cee03547ULL, 0xacc3f67cdaa1d210ULL,
  0x65cb771d8c7f96ccULL, 0x8eb27177055723ddULL, 0xc789950d44cd94beULL,
  0x934feadc3700b12bULL, 0x5e485f11edbdf182ULL, 0x1e2e2a46fd64767aULL,
  0x2969ca71d82efa7cULL, 0x9d46e9935ebbba2eULL, 0xe056b67e05e6822bULL,
  0x94d73f55739d03a0ULL, 0xcd7010bdb69b5a03ULL, 0x455ef9fcd79b82f4ULL,
  0x869cb54a8749c161ULL, 0x38d1a4fa6185d225ULL, 0xb475166f94bbe9bbULL,
  0xa4143548720959f1ULL, 0x7aed4780ba6b26baULL, 0xd0ce264439e02312ULL,
  0x84366d746078d508ULL, 0xa8ce973c72ed17beULL, 0x21c323a29a430b01ULL,
  0x9962d617e3af80eeULL, 0xab0ce91d9c8cf75bULL, 0x530e8ee6d19a4dbcULL,
  0x2ef68c0cf53f5d72ULL, 0xc03a681640a85506ULL, 0x496e4e9f9c310967ULL,
  0x78580472b59b14a0ULL, 0x273824c23b388577ULL, 0x66bf923ad45cb553ULL,
  0x47ae1a5a2492ba86ULL, 0x35e304569e229659ULL, 0x4765182a46870b6fULL,
  0x6cbab625e9099412ULL, 0xddac9a2e598522c1ULL, 0x7172086e666624f2ULL,
  0xdf5003ca503b7837ULL, 0x88c0c1db78563d09ULL, 0x58d51865acfc289dULL,
  0x177671aec65224f1ULL, 0xfb79d8a241e967d7ULL, 0x2be1e101cad9a49aULL,
  0x6625682f6e29186bULL, 0x399553457ac06e50ULL, 0x035dffb4c23abb74ULL,
  0x429db2591f54aadeULL, 0xc52802a8037d1009ULL, 0x6acb27381f0b25f3ULL,
  0xf45e2551ee4f823bULL, 0x8b0ea2d99580c2f7ULL, 0x3bed519cbcb4e1e1ULL,
  0x0ff452823dbb010aULL, 0x9d42ed614f3dd267ULL, 0x5b9313c06257c57bULL,
  0xa114b8008b5e1442ULL, 0xc1fe311c11c13d4bULL, 0x66e8763ea34c5568ULL,
  0x8b982af1c262f05dULL, 0xee8876faaa75fbb7ULL, 0x8a62a4d0d172bb2aULL,
  0xc13d94a3b7449a97ULL, 0x6dbbba9dc15d037cULL, 0xc786101f1d92e0f1ULL,
  0xd78681a907a0b79bULL, 0xf61aaf2962c9abb9ULL, 0x2cfd16fcd3cb7ad9ULL,
  0x868c5b6744624d21ULL, 0x25e650899c74ddd7ULL, 0xba042af4a7c37463ULL,
  0x4eb1a539465a3ecaULL, 0xbe09dbf03b05d5caULL, 0x774e5a362b5472baULL,
  0x47a1221229d183cdULL, 0x504b0ca18ef5a2dfULL, 0xdffbdfbde2456eb9ULL,
  0x46cd2b2fbee34634ULL, 0xf2aef8fe819d98c3ULL, 0x357f5276d4599d61ULL,
  0x24a5483879c453e3ULL, 0x088026889192b4b9ULL, 0x28da96671782dbecULL,
  0x4ef37c40588e9aaaULL, 0x8837b90651bc9fb3ULL, 0xc164f741d3f0e5d6ULL,
  0xbc135a0a704b70baULL, 0x069cd868f7622adaULL, 0xbc37ba89e0b9c0abULL,
  0x47c14a01323552f6ULL, 0x4f00794bacee98bbULL, 0x7107de7d637a69d5ULL,
  0x88af793bb6f2255eULL, 0xf3c6466b8799b598ULL, 0xc288c616aa7f3b59ULL,
  0x81ca63cf42fca3fdULL, 0x88d85ace36a2674bULL, 0x0d056bd3792389e7ULL,
  0xe55c396c4e9dd32dULL, 0xbefb504571e6c0a6ULL, 0x96ab32115e91e8ccULL,
  0xbf8acb18de8f38d1ULL, 0x66dae58801672606ULL, 0x833b6017872317fbULL,
  0xb87c16f2d1c92864ULL, 0xdb766a74e58b669cULL, 0x89659f85c61417beULL,
  0xc8daad856011ea0cULL, 0x76a4b565b6fe7eaeULL, 0xa469d085f6237312ULL,
  0xaaf0365683a3e96cULL, 0x4dbb746f8424f7b8ULL, 0x0638755af4e4acc1ULL,
  0x3d7807f5bde64486ULL, 0x17be6d8f5bbb7639ULL, 0x0903f0cd44dc35dcULL,
  0x67b672eafdf1196cULL, 0xa676ff93ed4c82f1ULL, 0x521d1004c5053d9dULL,
  0x37ba9ad09ccc9202ULL, 0x84e54d297aacfb51ULL, 0x0a0b4b776a143445ULL,
  0x0820d471e20b348eULL, 0x1874383cb83d46dcULL, 0x97edeec7a1efe11cULL,
  0xb330e50b1bdc42aaULL, 0x1dd91955ce70e032ULL, 0xa514cdb88f2939d5ULL,
  0x2791233fd90db9d3ULL, 0x7b670a4cc50f7a9bULL, 0x77c07d2a05c6dfa5ULL,
  0xe3778b6646d0a6faULL, 0xb39c8eda47b56749ULL, 0x933ed448addbef28ULL,
  0xaf846af6ab7d0bf4ULL, 0x0e5af208eb666e49ULL, 0x5e6622f73534cd6aULL,
  0x297daeca42ef5b6eULL, 0x862daef3d35539a6ULL, 0xe68722498f8e1ea9ULL,
  0x981c53093dc0d572ULL, 0xfa09b0bfbf86fbf5ULL, 0x30b1e96166219f15ULL,
  0x70e7d466bdc4fb83ULL, 0x5a66736e35f2a8e9ULL, 0xcddb59d2b7c1baefULL,
  0xd6c7d247d26d8996ULL, 0xea4e39eac8de1ba3ULL, 0x539c8bb19fa3aff2ULL,
  0x09f90e4c5fd508d8ULL, 0xa34e5956fbaf3385ULL, 0x2e2f8e151d3ef375ULL,
  0x173691e9b83faec1ULL, 0xb85a8d56bf016379ULL, 0x8382381267408ae3ULL,
  0xb90f901bbdc0096dULL, 0x7c6ad32933bcec65ULL, 0x76bb5e2f2c8ad595ULL,
  0x390f851a6cf46d28ULL, 0xc3e6064da1c2da72ULL, 0xc52a0c101cfa5389ULL,
  0xd78eaf84a3fbc530ULL, 0x3781b9e2288b997eULL, 0x73c2f6dea83d05c4ULL,
  0x04228e364c5b5ed7ULL, 0x9d7a3edf0da43911ULL, 0x8edcfeda24686756ULL,
  0x5e7667a7b7a9b3a1ULL, 0x4c4f389fa143791dULL, 0xb08bc1023da7cddcULL,
  0x7ab4be3ae529b1ccULL, 0x754e6132dbe74ff9ULL, 0x71635442a839df45ULL,
  0x2f6fb1643fbe52deULL, 0x961e0a42cf7a8177ULL, 0xf3b45d83d89ef2eaULL,
  0xee3de4cf4a6e3e9bULL, 0xcd6848542c3295e7ULL, 0xe4cee1664c78662fULL,
  0x9947548b474c68c4ULL, 0x25d73777a5ed8b0bULL, 0x00c915b1d636b7fcULL,
  0x21c2ba75d9b0d2daULL, 0x5f6b5dcf608a64a1ULL, 0xdcf333255ff9570cULL,
  0x633b922418ced4eeULL, 0xc136dde0b004b34aULL, 0x58cc83b05d4b2f5aULL,
  0x5eb424dda28e42d2ULL, 0x62df47369739cd98ULL, 0xb4e0b42485e4ce17ULL,
  0x16e1f0c1f9a8d1e7ULL, 0x8ec3916707560ebfULL, 0x62ba6e2df2cc9db3ULL,
  0xcbf9f4ff77d83a16ULL, 0x78d9d7d07d2bbcc4ULL, 0xef554ce1e02c41f4ULL,
  0x8d7581127eccf94dULL, 0xa9b53336cb3c8a05ULL, 0x38c42c0bf45c4f91ULL,
  0x640893cdf4488863ULL, 0x80ec34bc575ea568ULL, 0x39f324f5b48eaa40ULL,
  0xe9d9ed1f8eff527fULL, 0x9224fc058cc5a214ULL, 0xbaba00b04cfe7741ULL,
  0x309a9f120fcf52afULL, 0xa558f3ec65626212ULL, 0x424bec8b7adabe2fULL,
  0x41622513a6aea433ULL, 0xb88da2d5324ca798ULL, 0xd287733b245528a4ULL,
  0x9a44697e6d68aec3ULL, 0x7b1093be2f49bb28ULL, 0x50bbec632e3d8aadULL,
  0x6cd90723e1ea8283ULL, 0x897b9e7431b02bf3ULL, 0x219efdcb338a7047ULL,
  0x3b0311f0a27c0656ULL, 0xdb17bf91c0db96e7ULL, 0x8cd4fd6b4e85a5b2ULL,
  0xfab071054ba6409dULL, 0x40d6fe831fa9dfd9ULL, 0xaf358debad7d791eULL,
  0xeb8d0e25a65e3e58ULL, 0xbbcbd3df14e08580ULL, 0x0cf751f27ecdab2bULL,
  0x2b4da14f2613d8f4ULL,
};

size_t CountForward(
  const uint8_t* input, const uint8_t* match, const uint8_t* end
) {
  const uint8_t* start = input;

  while (input < end && *input == *match) {
    ++input;
    ++match;
  }

  return input - start;
}

size_t CountBackward(
  const uint8_t* input, const uint8_t* anchor, const uint8_t* match,
  const uint8_t* lower
) {
  const uint8_t* start = input;

  while (input > anchor && match > lower && input[-1] == match[-1]) {
    --input;
    --match;
  }

  return start - input;
}

void InsertEntry(
  LongDistanceState* state, unsigned hash, LongDistanceEntry entry,
  unsigned bucket_log
) {
  uint8_t& position = state->bucket_offsets[hash];
  state->hash_table[(hash << bucket_log) + position] = entry;
  position = (position + 1) & ((1u << bucket_log) - 1);
}

size_t GenerateChunk(
  LongDistanceState* state, RawSequenceStore* sequences,
  const LongDistanceParameters* parameters, const uint8_t* source,
  size_t size
) {
  const size_t minimum = parameters->minimum_match;

  if (size < minimum) {
    return size;
  }

  const bool external = state->window.low_limit <
    state->window.dictionary_limit;
  const unsigned dictionary_limit = state->window.dictionary_limit;
  const unsigned lowest = external ? state->window.low_limit :
    dictionary_limit;
  const uint8_t* base = state->window.base;
  const uint8_t* dictionary = external ? state->window.dictionary_base :
    nullptr;
  const uint8_t* dictionary_start = external ? dictionary + lowest : nullptr;
  const uint8_t* dictionary_end = external ? dictionary + dictionary_limit :
    nullptr;
  const uint8_t* prefix = base + dictionary_limit;
  const uint8_t* end = source + size;
  const uint8_t* anchor = source;
  const uint8_t* input = source + minimum;
  const unsigned mask_bits = minimum < 64 ? minimum : 64;
  const unsigned rate = parameters->hash_rate_log;
  uint64_t mask = (uint64_t{1} << rate) - 1;

  if (rate && rate <= mask_bits) {
    mask <<= mask_bits - rate;
  }

  // The upstream reset computes a local hash without storing it back.
  RollingHash rolling = {0xffffffff, mask};
  const unsigned entries = 1u << parameters->bucket_log;
  const unsigned hash_bits = parameters->hash_log - parameters->bucket_log;

  while (input < end - 8) {
    unsigned count = 0;
    const size_t hashed = FeedLongDistanceHash(&rolling, input,
      end - 8 - input, state->split_indices, &count);

    for (unsigned i = 0; i < count; ++i) {
      const uint8_t* split = input + state->split_indices[i] - minimum;
      const uint64_t hash = Hash64(split, minimum, 0);
      auto& candidate = state->candidates[i];
      candidate.split = split;
      candidate.hash = hash & ((1u << hash_bits) - 1);
      candidate.checksum = hash >> 32;
      candidate.bucket = state->hash_table + (candidate.hash <<
        parameters->bucket_log);
    }

    for (unsigned i = 0; i < count; ++i) {
      const auto& candidate = state->candidates[i];
      const uint8_t* split = candidate.split;
      const LongDistanceEntry entry = {
        static_cast<uint32_t>(split - base), candidate.checksum
      };

      if (split < anchor) {
        InsertEntry(state, candidate.hash, entry, parameters->bucket_log);
        continue;
      }

      size_t best_length = 0;
      size_t forward = 0;
      size_t backward = 0;
      const LongDistanceEntry* best = nullptr;

      for (unsigned j = 0; j < entries; ++j) {
        const auto* current = candidate.bucket + j;

        if (current->checksum != candidate.checksum ||
            current->offset <= lowest) {
          continue;
        }

        size_t next_forward;
        size_t next_backward;

        if (external) {
          const bool in_dictionary = current->offset < dictionary_limit;
          const uint8_t* match = (in_dictionary ? dictionary : base) +
            current->offset;
          const uint8_t* match_end = in_dictionary ? dictionary_end : end;
          const uint8_t* lower = in_dictionary ? dictionary_start : prefix;
          const size_t available = match_end - match;
          const uint8_t* first_end = size_t(end - split) < available ? end :
            split + available;
          next_forward = CountForward(split, match, first_end);

          if (match + next_forward == match_end) {
            next_forward += CountForward(split + next_forward, prefix, end);
          }

          if (next_forward < minimum) {
            continue;
          }

          next_backward = CountBackward(split, anchor, match, lower);

          if (match - next_backward == lower && lower != dictionary_start) {
            next_backward += CountBackward(split - next_backward, anchor,
              dictionary_end, dictionary_start);
          }
        }
        else {
          const uint8_t* match = base + current->offset;
          next_forward = CountForward(split, match, end);

          if (next_forward < minimum) {
            continue;
          }

          next_backward = CountBackward(split, anchor, match, prefix);
        }

        if (next_forward + next_backward > best_length) {
          best_length = next_forward + next_backward;
          forward = next_forward;
          backward = next_backward;
          best = current;
        }
      }

      if (!best) {
        InsertEntry(state, candidate.hash, entry, parameters->bucket_log);
        continue;
      }

      if (sequences->size == sequences->capacity) {
        return size_t(-70);
      }

      sequences->sequences[sequences->size++] = {
        entry.offset - best->offset,
        static_cast<uint32_t>(split - backward - anchor),
        static_cast<uint32_t>(best_length)
      };
      InsertEntry(state, candidate.hash, entry, parameters->bucket_log);
      anchor = split + forward;

      if (anchor > input + hashed) {
        input = anchor - hashed;
        break;
      }
    }

    input += hashed;
  }

  return end - anchor;
}

void PrepareParser(MatchState* state, const uint8_t* input) {
  const uint32_t current = input - state->window.base;
  uint32_t& next = NextToUpdate(state);

  if (current > next + 1024) {
    const uint32_t gap = current - next - 1024;
    next = current - (gap < 512 ? gap : 512);
  }

  if (state->parameters.strategy == 1) {
    FillFastHashTable(state, input, HashTableLoad::Fast,
      HashTablePurpose::Context);
  }
  else if (state->parameters.strategy == 2) {
    FillDoubleFastHashTable(state, input, HashTableLoad::Fast,
      HashTablePurpose::Context);
  }
}

}

size_t FeedLongDistanceHash(
  RollingHash* state, const uint8_t* input, size_t size, size_t* splits,
  unsigned* split_count
) {
  uint64_t hash = state->value;
  size_t consumed = 0;

  while (consumed < size) {
    hash = (hash << 1) + GearTable[input[consumed++]];

    if (!(hash & state->stop_mask)) {
      splits[(*split_count)++] = consumed;

      if (*split_count == 64) {
        break;
      }
    }
  }

  state->value = hash;
  return consumed;
}

size_t GenerateLongDistanceSequences(
  LongDistanceState* state, RawSequenceStore* sequences,
  const LongDistanceParameters* parameters, const void* source,
  size_t source_size
) {
  const auto* input = static_cast<const uint8_t*>(source);
  const uint32_t distance = 1u << parameters->window_log;
  size_t leftovers = 0;

  for (size_t offset = 0; offset < source_size &&
       sequences->size < sequences->capacity; offset += 1u << 20) {
    const size_t remaining = source_size - offset;
    const size_t size = remaining < (1u << 20) ? remaining : 1u << 20;
    const uint8_t* chunk = input + offset;
    const uint8_t* end = chunk + size;
    auto& window = state->window;
    uint32_t end_index = end - window.base;

    if (end_index > 0xe0000000u) {
      const uint32_t correction =
        static_cast<uint32_t>(chunk - window.base) - distance - 2;
      window.base += correction;
      window.dictionary_base += correction;
      window.low_limit = window.low_limit < correction + 2 ? 2 :
        window.low_limit - correction;
      window.dictionary_limit = window.dictionary_limit < correction + 2
        ? 2 : window.dictionary_limit - correction;
      ++window.overflow_corrections;

      for (size_t i = 0; i < (size_t{1} << parameters->hash_log); ++i) {
        auto& index = state->hash_table[i].offset;
        index = index < correction ? 0 : index - correction;
      }

      state->loaded_dictionary_end = 0;
      end_index = end - window.base;
    }

    if (state->loaded_dictionary_end + distance < end_index) {
      const uint32_t lower = end_index - distance;

      if (window.low_limit < lower) {
        window.low_limit = lower;
      }

      if (window.dictionary_limit < window.low_limit) {
        window.dictionary_limit = window.low_limit;
      }

      state->loaded_dictionary_end = 0;
    }

    const size_t previous = sequences->size;
    const size_t next = GenerateChunk(state, sequences, parameters, chunk,
      size);

    if (IsError(next)) {
      return next;
    }

    if (previous < sequences->size) {
      sequences->sequences[previous].literal_length += leftovers;
      leftovers = next;
    }
    else {
      leftovers += size;
    }
  }

  return 0;
}

void SkipRawSequences(
  RawSequenceStore* store, size_t size, uint32_t minimum_match
) {
  while (size && store->position < store->size) {
    auto* sequence = store->sequences + store->position;

    if (size <= sequence->literal_length) {
      sequence->literal_length -= size;
      return;
    }

    size -= sequence->literal_length;
    sequence->literal_length = 0;

    if (size < sequence->match_length) {
      sequence->match_length -= size;

      if (sequence->match_length < minimum_match) {
        if (store->position + 1 < store->size) {
          sequence[1].literal_length += sequence->match_length;
        }

        ++store->position;
      }

      return;
    }

    size -= sequence->match_length;
    sequence->match_length = 0;
    ++store->position;
  }
}

void AdvanceRawSequencePosition(RawSequenceStore* store, size_t size) {
  uint32_t position = store->position_in_sequence + size;

  while (position && store->position < store->size) {
    const auto& sequence = store->sequences[store->position];
    const uint32_t length = sequence.literal_length + sequence.match_length;

    if (position < length) {
      store->position_in_sequence = position;
      break;
    }

    position -= length;
    ++store->position;
  }

  if (!position || store->position == store->size) {
    store->position_in_sequence = 0;
  }
}

size_t MergeLongDistanceSequences(
  RawSequenceStore* raw, MatchState* state, SequenceStore* store,
  uint32_t repeated_offsets[3], unsigned row_match_finder,
  const void* source, size_t source_size
) {
  const BlockParser parser = SelectBlockParser(state->parameters.strategy,
    row_match_finder, DictionaryMode(state));

  if (state->parameters.strategy >= 7) {
    state->long_distance_sequences = raw;
    const size_t result = parser(state, store, repeated_offsets, source,
      source_size);
    AdvanceRawSequencePosition(raw, source_size);
    return result;
  }

  const auto* input = static_cast<const uint8_t*>(source);
  const uint8_t* end = input + source_size;
  const unsigned minimum = state->parameters.minimum_match;

  while (raw->position < raw->size && input < end) {
    RawSequence sequence = raw->sequences[raw->position];
    const uint32_t remaining = end - input;

    if (remaining >= sequence.literal_length + sequence.match_length) {
      ++raw->position;
    }
    else {
      if (remaining <= sequence.literal_length) {
        sequence.offset = 0;
      }
      else {
        sequence.match_length = remaining - sequence.literal_length;

        if (sequence.match_length < minimum) {
          sequence.offset = 0;
        }
      }

      SkipRawSequences(raw, remaining, minimum);
    }

    if (!sequence.offset) {
      break;
    }

    PrepareParser(state, input);
    const size_t literals = parser(state, store, repeated_offsets, input,
      sequence.literal_length);
    input += sequence.literal_length;
    repeated_offsets[2] = repeated_offsets[1];
    repeated_offsets[1] = repeated_offsets[0];
    repeated_offsets[0] = sequence.offset;
    StoreSequence(store, literals, input - literals, end, sequence.offset + 3,
      sequence.match_length);
    input += sequence.match_length;
  }

  PrepareParser(state, input);
  return parser(state, store, repeated_offsets, input, end - input);
}

}
