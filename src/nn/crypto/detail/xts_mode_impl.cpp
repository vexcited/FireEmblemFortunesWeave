#include "nn/crypto/detail/xts_mode_impl.hpp"

#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

namespace {

void MultiplyTweakGeneric(uint64_t* tweak) {
  uint64_t carry = tweak[1] & (uint64_t(1) << 63);
  tweak[1] = (tweak[1] << 1) | (tweak[0] >> 63);
  tweak[0] = tweak[0] << 1;
  if (carry) {
    tweak[0] ^= 0x87;
  }
}

}

XtsModeImpl::~XtsModeImpl() {
  ClearMemoryImpl(this, sizeof(*this));
}

void XtsModeImpl::ProcessBlock(uint8_t* dst, const uint8_t* src) {
  uint8_t block[BlockSize];
  for (size_t i = 0; i < BlockSize; ++i) {
    block[i] = m_Tweak[i] ^ src[i];
  }

  m_CipherFunction(block, block, m_CipherContext);

  for (size_t i = 0; i < BlockSize; ++i) {
    dst[i] = m_Tweak[i] ^ block[i];
  }

  MultiplyTweakGeneric(reinterpret_cast<uint64_t*>(m_Tweak));
}

size_t XtsModeImpl::FinalizeEncryption(void* dst, size_t dstSize) {
  uint8_t* output = static_cast<uint8_t*>(dst);
  size_t processed;

  if (m_BufferedBytes == 0) {
    ProcessBlock(output, m_LastBlock);
    processed = BlockSize;
  }
  else {
    ProcessBlock(m_LastBlock, m_LastBlock);
    memcpy(m_Buffer + m_BufferedBytes, m_LastBlock + m_BufferedBytes,
      BlockSize - m_BufferedBytes);
    ProcessBlock(output, m_Buffer);
    memcpy(output + BlockSize, m_LastBlock, m_BufferedBytes);
    processed = BlockSize + m_BufferedBytes;
  }

  m_State = State_Done;
  return processed;
}

// Ciphertext stealing decrypts the last full block with the next tweak.
size_t XtsModeImpl::FinalizeDecryption(void* dst, size_t dstSize) {
  uint8_t* output = static_cast<uint8_t*>(dst);
  size_t processed;

  if (m_BufferedBytes == 0) {
    ProcessBlock(output, m_LastBlock);
    processed = BlockSize;
  }
  else {
    uint8_t tweak[BlockSize];
    memcpy(tweak, m_Tweak, BlockSize);
    MultiplyTweakGeneric(reinterpret_cast<uint64_t*>(m_Tweak));
    ProcessBlock(m_LastBlock, m_LastBlock);
    memcpy(m_Buffer + m_BufferedBytes, m_LastBlock + m_BufferedBytes,
      BlockSize - m_BufferedBytes);
    memcpy(m_Tweak, tweak, BlockSize);
    ProcessBlock(output, m_Buffer);
    memcpy(output + BlockSize, m_LastBlock, m_BufferedBytes);
    processed = BlockSize + m_BufferedBytes;
  }

  m_State = State_Done;
  return processed;
}

size_t XtsModeImpl::ProcessPartialData(uint8_t* dst, const uint8_t* src,
  size_t size) {
  size_t processed = 0;
  memcpy(m_Buffer + m_BufferedBytes, src, size);
  m_BufferedBytes += size;

  if (m_BufferedBytes == BlockSize) {
    if (m_State == State_Processing) {
      ProcessBlock(dst, m_LastBlock);
      processed += BlockSize;
    }
    memcpy(m_LastBlock, m_Buffer, BlockSize);
    m_BufferedBytes = 0;
    m_State = State_Processing;
  }

  return processed;
}

size_t XtsModeImpl::ProcessRemainingData(uint8_t* dst, const uint8_t* src,
  size_t size) {
  memcpy(m_Buffer, src, size);
  m_BufferedBytes = size;
  return 0;
}

}
