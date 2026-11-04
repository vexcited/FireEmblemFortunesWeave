#include "nn/crypto/detail/sha3_impl.hpp"

#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

namespace {

constexpr uint64_t RoundConstants[24] = {
  0x0000000000000001, 0x0000000000008082, 0x800000000000808a,
  0x8000000080008000, 0x000000000000808b, 0x0000000080000001,
  0x8000000080008081, 0x8000000000008009, 0x000000000000008a,
  0x0000000000000088, 0x0000000080008009, 0x000000008000000a,
  0x000000008000808b, 0x800000000000008b, 0x8000000000008089,
  0x8000000000008003, 0x8000000000008002, 0x8000000000000080,
  0x000000000000800a, 0x800000008000000a, 0x8000000080008081,
  0x8000000000008080, 0x0000000080000001, 0x8000000080008008,
};

constexpr int RotationOffsets[25] = {
  0, 1, 62, 28, 27, 36, 44, 6, 55, 20, 3, 10, 43,
  25, 39, 41, 45, 15, 21, 8, 18, 2, 61, 56, 14,
};

uint64_t RotateLeft(uint64_t value, int shift) {
  return shift == 0 ? value : (value << shift) | (value >> (64 - shift));
}


}

template <size_t HashSizeValue>
Sha3Impl<HashSizeValue>::Sha3Impl() : m_State(State_None) {}

template <size_t HashSizeValue> Sha3Impl<HashSizeValue>::~Sha3Impl() {
  ClearMemoryImpl(this, sizeof(*this));
}

template <size_t HashSizeValue> void Sha3Impl<HashSizeValue>::Initialize() {
  memset(m_InternalState, 0, sizeof(m_InternalState));
  m_BufferedBytes = 0;
  m_State = State_Initialized;
}

template <size_t HashSizeValue>
void Sha3Impl<HashSizeValue>::Update(const void* data, size_t size) {
  const uint8_t* current = static_cast<const uint8_t*>(data);
  uint8_t* state = reinterpret_cast<uint8_t*>(m_InternalState);

  if (m_BufferedBytes > 0) {
    size_t copySize = BlockSize - m_BufferedBytes;
    if (size < copySize) {
      copySize = size;
    }
    for (int i = 0; i < static_cast<int>(copySize); ++i) {
      state[m_BufferedBytes + i] ^= current[i];
    }
    current += copySize;
    size -= copySize;
    m_BufferedBytes += copySize;

    if (m_BufferedBytes == BlockSize) {
      ProcessBlock();
      m_BufferedBytes = 0;
    }
  }

  if (size >= BlockSize) {
    int blockCount = static_cast<int>(size / BlockSize);
    ProcessBlocks(current, blockCount);
    current += blockCount * BlockSize;
    size -= blockCount * BlockSize;
  }

  if (size > 0) {
    for (int i = 0; i < static_cast<int>(size); ++i) {
      state[i] ^= current[i];
    }
    m_BufferedBytes = size;
  }
}

template <size_t HashSizeValue>
void Sha3Impl<HashSizeValue>::GetHash(void* hash, size_t hashSize) {
  (void)hashSize;
  if (m_State == State_Initialized) {
    ProcessLastBlock();
    m_State = State_Done;
  }
  memcpy(hash, m_InternalState, HashSize);
}

// The context copies are library calls in the original.
template <size_t HashSizeValue>
__attribute__((no_builtin("memcpy")))
void Sha3Impl<HashSizeValue>::InitializeWithContext(
  const Sha3Context* context) {
  m_BufferedBytes = context->bufferedBytes;
  m_State = State_Initialized;
  memcpy(m_InternalState, context->state, sizeof(m_InternalState));
}

template <size_t HashSizeValue>
__attribute__((no_builtin("memcpy")))
void Sha3Impl<HashSizeValue>::GetContext(Sha3Context* context) const {
  context->hashSize = HashSize;
  context->bufferedBytes = static_cast<uint32_t>(m_BufferedBytes);
  memcpy(context->state, m_InternalState, sizeof(context->state));
}

template <size_t HashSizeValue> void Sha3Impl<HashSizeValue>::ProcessBlock() {
  ProcessBlocks(nullptr, 1);
}

template <size_t HashSizeValue>
void Sha3Impl<HashSizeValue>::ProcessBlocks(const uint8_t* data,
  int blockCount) {
  do {
    if (data != nullptr) {
      for (size_t i = 0; i < BlockSize / sizeof(uint64_t); ++i) {
        uint64_t word;
        memcpy(&word, data + i * sizeof(uint64_t), sizeof(word));
        m_InternalState[i] ^= word;
      }
      data += BlockSize;
    }
    for (int round = 0; round < 24; ++round) {
      uint64_t parity[5];
      for (int x = 0; x < 5; ++x) {
        parity[x] = m_InternalState[x] ^ m_InternalState[x + 5]
          ^ m_InternalState[x + 10] ^ m_InternalState[x + 15]
          ^ m_InternalState[x + 20];
      }
      for (int x = 0; x < 5; ++x) {
        uint64_t mix =
          parity[(x + 4) % 5] ^ RotateLeft(parity[(x + 1) % 5], 1);
        for (int y = 0; y < 25; y += 5) {
          m_InternalState[x + y] ^= mix;
        }
      }

      uint64_t moved[25];
      for (int x = 0; x < 5; ++x) {
        for (int y = 0; y < 5; ++y) {
          moved[y + 5 * ((2 * x + 3 * y) % 5)] = RotateLeft(
            m_InternalState[x + 5 * y], RotationOffsets[x + 5 * y]);
        }
      }

      for (int y = 0; y < 25; y += 5) {
        for (int x = 0; x < 5; ++x) {
          m_InternalState[x + y] = moved[x + y]
            ^ (~moved[(x + 1) % 5 + y] & moved[(x + 2) % 5 + y]);
        }
      }

      m_InternalState[0] ^= RoundConstants[round];
    }
  } while (--blockCount > 0);
}

template <size_t HashSizeValue>
void Sha3Impl<HashSizeValue>::ProcessLastBlock() {
  uint8_t* state = reinterpret_cast<uint8_t*>(m_InternalState);
  state[m_BufferedBytes] ^= 0x06;
  state[BlockSize - 1] ^= 0x80;
  ProcessBlock();
}

template class Sha3Impl<28>;
template class Sha3Impl<32>;
template class Sha3Impl<48>;
template class Sha3Impl<64>;

}
