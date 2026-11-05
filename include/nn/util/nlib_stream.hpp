#pragma once

#include <stddef.h>
#include <stdint.h>
#include <sys/uio.h>

namespace nn::util::nlib {

class InputStream {
public:
  InputStream()
    : m_Position(0), m_Index(0), m_Size(0), m_Mark(-1), m_Buffer(nullptr),
      m_BufferSize(0), m_IsMarkInPlace(true), m_IsMarkSupported(false),
      m_ErrorValue(0) {}

  virtual ~InputStream() {}

  bool Close();
  size_t Skip(size_t size);
  bool Mark(size_t size);
  bool GoBackToMark();

protected:
  virtual size_t FillBuffer_(void* buffer, size_t size) = 0;
  virtual bool Close_() = 0;
  virtual size_t Skip_(size_t size);

  void CheckBuffer_();
  size_t Read_(void* buffer, size_t size);

  void SetError(int value) {
    if (m_ErrorValue == 0) {
      m_ErrorValue = value;
    }
  }

  size_t m_Position;
  size_t m_Index;
  size_t m_Size;
  size_t m_Mark;
  uint8_t* m_Buffer;
  size_t m_BufferSize;
  bool m_IsMarkInPlace;
  bool m_IsMarkSupported;
  int m_ErrorValue;
};

static_assert(sizeof(InputStream) == 64);

class OutputStream {
public:
  OutputStream()
    : m_Position(0), m_Index(0), m_Buffer(nullptr), m_BufferSize(0),
      m_ErrorValue(0), m_Reserved(0) {}

  virtual ~OutputStream() {}

  bool Close();

protected:
  virtual bool PushBuffer_(const void* buffer, size_t size,
    bool doFlush) = 0;
  virtual bool Close_() = 0;
  virtual void* GetWorkBuffer_(size_t* pOutSize);
  virtual bool WriteGather_(const iovec* vectors, int count);

  bool GetWorkBuffer_();
  bool Write_(const void* buffer, size_t size);
  bool Flush_(bool doFlush);

  bool Write(const void* buffer, size_t size) {
    if (static_cast<int64_t>(size) < 0) {
      SetError(22);
      return false;
    }
    if (m_Index + size <= m_BufferSize) {
      __builtin_memcpy(m_Buffer + m_Index, buffer, size);
      m_Index += size;
      return true;
    }
    return Write_(buffer, size);
  }

  void SetError(int value) {
    if (m_ErrorValue == 0) {
      m_ErrorValue = value;
    }
  }

  size_t m_Position;
  size_t m_Index;
  uint8_t* m_Buffer;
  size_t m_BufferSize;
  int m_ErrorValue;
  uint32_t m_Reserved;
};

static_assert(sizeof(OutputStream) == 48);

class NullInputStream : public InputStream {
public:
  NullInputStream();

protected:
  size_t FillBuffer_(void* buffer, size_t size) override;
  bool Close_() override;
  size_t Skip_(size_t size) override;

private:
  alignas(8) uint8_t m_Storage[256];
};

class NullOutputStream : public OutputStream {
public:
  NullOutputStream();

protected:
  bool PushBuffer_(const void* buffer, size_t size, bool doFlush) override;
  bool Close_() override;

private:
  alignas(8) uint8_t m_Storage[256];
};

}
