#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_file.hpp"
#include "nn/result.hpp"
#include "nn/util/nlib_stream.hpp"

namespace nn::util {

namespace detail {

class FileInputStreamImpl : public nlib::InputStream {
public:
  FileInputStreamImpl()
    : m_File(), m_IsOpened(false), m_HasBuffer(false), m_Position(0),
      m_Result() {}

  void SetBuffer(void* buffer, size_t size);
  Result Open(const char* path);
  Result Read(size_t* pOutSize, void* buffer, size_t size);
  void Close();

protected:
  size_t FillBuffer_(void* buffer, size_t size) override;
  bool Close_() override;
  size_t Skip_(size_t size) override;

private:
  size_t Read(void* buffer, size_t size) {
    if (static_cast<int64_t>(size) < 0) {
      SetError(22);
      return 0;
    }
    if (m_Index + size <= m_Size) {
      __builtin_memcpy(buffer, m_Buffer + m_Index, size);
      m_Index += size;
      return size;
    }
    return Read_(buffer, size);
  }

  bool IsEndOfStream() {
    if (m_Index == m_Size) {
      CheckBuffer_();
    }
    return m_ErrorValue == 0 && m_Index == m_Size;
  }

  fs::FileHandle m_File;
  bool m_IsOpened;
  bool m_HasBuffer;
  int64_t m_Position;
  Result m_Result;
};

class FileOutputStreamImpl : public nlib::OutputStream {
public:
  FileOutputStreamImpl()
    : m_File(), m_IsOpened(false), m_HasBuffer(false), m_Position(0),
      m_Result() {}

  void SetBuffer(void* buffer, size_t size);
  Result Open(const char* path);
  Result Write(const void* buffer, size_t size);
  Result Flush();
  void Close();

protected:
  bool PushBuffer_(const void* buffer, size_t size, bool doFlush) override;
  bool Close_() override;

private:
  fs::FileHandle m_File;
  bool m_IsOpened;
  bool m_HasBuffer;
  int64_t m_Position;
  Result m_Result;
};

}

class FileInputStream {
public:
  FileInputStream();
  ~FileInputStream();

  void SetBuffer(void* buffer, size_t size);
  Result Open(const char* path);
  Result Read(size_t* pOutSize, void* buffer, size_t size);
  void Close();

private:
  detail::FileInputStreamImpl m_Impl;
};

class FileOutputStream {
public:
  FileOutputStream();
  ~FileOutputStream();

  void SetBuffer(void* buffer, size_t size);
  Result Open(const char* path);
  Result Write(const void* buffer, size_t size);
  Result Flush();
  void Close();

private:
  detail::FileOutputStreamImpl m_Impl;
};

}
