#include "nn/util/nlib_stream.hpp"

#include <string.h>

namespace nn::util::nlib {

namespace {

constexpr int ErrorOutOfMemory = 12;
constexpr int ErrorInvalidArgument = 22;

}

void* OutputStream::GetWorkBuffer_(size_t* pOutSize) {
  *pOutSize = static_cast<size_t>(-1);
  return nullptr;
}

// Streams without a work buffer still get a chance to push their state with
// an empty buffer.
bool OutputStream::GetWorkBuffer_() {
  size_t size = 0;
  void* buffer = GetWorkBuffer_(&size);
  if (buffer == nullptr || size == 0) {
    if (size != 0) {
      return PushBuffer_(nullptr, 0, false);
    }
    SetError(ErrorOutOfMemory);
    return false;
  }

  m_Buffer = static_cast<uint8_t*>(buffer);
  m_BufferSize = size;
  return true;
}

bool OutputStream::Flush_(bool doFlush) {
  if (m_ErrorValue != 0) {
    return false;
  }
  if (m_Buffer == nullptr) {
    return GetWorkBuffer_();
  }
  if (m_Index != 0) {
    if (!PushBuffer_(m_Buffer, m_Index, doFlush)) {
      return false;
    }
    m_Position += m_Index;
    m_Index = 0;
  }
  return true;
}

bool OutputStream::Write_(const void* buffer, size_t size) {
  if (m_Buffer == nullptr) {
    if (!Flush_(false)) {
      return false;
    }
    if (m_Index + size <= m_BufferSize) {
      memcpy(m_Buffer + m_Index, buffer, size);
      m_Index += size;
      return true;
    }
  }

  if (!Flush_(false) || !PushBuffer_(buffer, size, false)) {
    return false;
  }
  m_Position += size;
  m_Index = 0;
  return true;
}

bool OutputStream::Close() {
  bool isFlushed = true;
  if (m_Buffer != nullptr && m_Index != 0) {
    isFlushed = Flush_(false);
  }
  const bool isClosed = Close_();
  const bool result = isFlushed && isClosed && m_ErrorValue == 0;
  m_ErrorValue = 0;
  m_Buffer = nullptr;
  m_BufferSize = 0;
  m_Position = 0;
  m_Index = 0;
  return result;
}

bool OutputStream::WriteGather_(const iovec* vectors, int count) {
  for (int i = 0; i < count; ++i) {
    if (!Write(vectors[i].iov_base, vectors[i].iov_len)) {
      return false;
    }
  }
  return true;
}

NullOutputStream::NullOutputStream() {
  m_Buffer = m_Storage;
  m_BufferSize = sizeof(m_Storage);
}

bool NullOutputStream::PushBuffer_(const void*, size_t, bool) {
  return true;
}

bool NullOutputStream::Close_() {
  return true;
}

}
