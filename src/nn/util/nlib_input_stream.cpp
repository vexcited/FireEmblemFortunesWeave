#include "nn/util/nlib_stream.hpp"

#include <string.h>

namespace nn::util::nlib {

namespace {

constexpr int ErrorIo = 5;
constexpr int ErrorBadDescriptor = 9;
constexpr int ErrorInvalidArgument = 22;
constexpr int ErrorRange = 34;
constexpr int ErrorNotSupported = 95;
constexpr size_t MarkSizeMax = 1024;

}

bool InputStream::Close() {
  const bool isClosed = Close_();
  const int error = m_ErrorValue;
  m_ErrorValue = 0;
  m_Position = 0;
  m_Index = 0;
  m_Size = 0;
  m_Buffer = nullptr;
  m_BufferSize = 0;
  return isClosed & (error == 0);
}

size_t InputStream::Skip(size_t size) {
  if (static_cast<int64_t>(size) < 0) {
    SetError(ErrorInvalidArgument);
    return 0;
  }
  if (m_Index + size <= m_Size) {
    m_Index += size;
    return size;
  }

  const size_t buffered = m_Size - m_Index;
  m_Position += m_Size;
  m_Index = 0;
  m_Size = 0;
  const size_t skipped = Skip_(size - buffered);
  m_Position += skipped;
  return skipped + buffered;
}

void InputStream::CheckBuffer_() {
  if (m_ErrorValue != 0) {
    return;
  }
  const size_t size = FillBuffer_(m_Buffer, m_BufferSize);
  if (size != 0) {
    m_Position += m_Size;
    m_Index = 0;
    m_Size = size;
    m_Mark = static_cast<size_t>(-1);
  }
}

// Requests at least as large as the buffer are filled straight into the
// destination, smaller ones refill the buffer.
size_t InputStream::Read_(void* buffer, size_t size) {
  if (m_Index == m_Size) {
    CheckBuffer_();
  }
  if (m_ErrorValue != 0) {
    return 0;
  }

  const size_t available = m_Size - m_Index;
  const size_t remaining = size - available;
  if (size <= available) {
    memcpy(buffer, m_Buffer + m_Index, size);
    m_Index += size;
    return size;
  }

  memcpy(buffer, m_Buffer + m_Index, available);
  uint8_t* output = static_cast<uint8_t*>(buffer) + available;
  if (remaining >= m_BufferSize) {
    size_t read = FillBuffer_(output, remaining);
    if (read != 0) {
      size_t left = remaining - read;
      size_t total = read + available;
      m_Position += read;
      output += read;
      while (left != 0) {
        read = FillBuffer_(output, left);
        if (read == 0) {
          break;
        }
        left -= read;
        output += read;
        total += read;
        m_Position += read;
      }
      m_Position += m_Size;
      m_Index = 0;
      m_Size = 0;
      m_Mark = static_cast<size_t>(-1);
      return total;
    }
  }
  else {
    size_t filled = FillBuffer_(m_Buffer, m_BufferSize);
    if (filled != 0) {
      while (filled <= remaining) {
        const size_t read = FillBuffer_(m_Buffer + filled,
          m_BufferSize - filled);
        if (read == 0) {
          memcpy(output, m_Buffer, filled);
          m_Position += m_Size + filled;
          m_Index = 0;
          m_Size = 0;
          m_Mark = static_cast<size_t>(-1);
          return filled + available;
        }
        filled += read;
      }
      memcpy(output, m_Buffer, remaining);
      m_Position += m_Size;
      m_Size = filled;
      m_Index = remaining;
      return size;
    }
  }

  m_Index = m_Size;
  return available;
}

size_t InputStream::Skip_(size_t size) {
  size_t skipped = 0;
  while (true) {
    CheckBuffer_();
    if (m_Index == m_Size) {
      return skipped;
    }
    if (skipped + m_Size >= size) {
      const size_t rest = size - skipped;
      m_Index = 0;
      m_Size -= rest;
      if (m_BufferSize >= m_Size) {
        memmove(m_Buffer, m_Buffer + rest, m_Size);
      }
      return size;
    }
    skipped += m_Size;
    m_Size = 0;
  }
}

// Marks need the next size bytes to stay buffered, so the buffered data is
// moved to the front and topped up when needed.
bool InputStream::Mark(size_t size) {
  if (size > MarkSizeMax) {
    SetError(ErrorInvalidArgument);
    return false;
  }
  if (!m_IsMarkSupported) {
    SetError(ErrorNotSupported);
    return false;
  }

  if (m_Buffer == nullptr && m_Index == m_Size) {
    [[clang::noinline]] CheckBuffer_();
    if (m_Index == m_Size) {
      SetError(ErrorBadDescriptor);
      return false;
    }
  }

  if (m_IsMarkInPlace) {
    m_Mark = m_Index;
    return true;
  }

  const size_t available = m_Size - m_Index;
  if (size <= available) {
    m_Mark = m_Index;
    return true;
  }

  memmove(m_Buffer, m_Buffer + m_Index, available);
  m_Position += m_Index;
  m_Index = 0;
  m_Size = available;
  if (size > m_BufferSize) {
    SetError(ErrorIo);
    return false;
  }

  m_Size += FillBuffer_(m_Buffer + available, m_BufferSize - available);
  m_Mark = m_Index;
  return m_ErrorValue == 0;
}

bool InputStream::GoBackToMark() {
  if (!m_IsMarkSupported) {
    SetError(ErrorNotSupported);
    return false;
  }
  if (m_Mark == static_cast<size_t>(-1)) {
    SetError(ErrorRange);
    return false;
  }
  m_Index = m_Mark;
  return true;
}

NullInputStream::NullInputStream() : m_Storage() {
  m_Buffer = m_Storage;
  m_BufferSize = sizeof(m_Storage);
}

size_t NullInputStream::FillBuffer_(void*, size_t size) {
  return size;
}

bool NullInputStream::Close_() {
  return true;
}

size_t NullInputStream::Skip_(size_t size) {
  return size;
}

}
