#include "nn/util/util_file_stream.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::util::detail {

namespace {

constexpr int ErrorIo = 5;
constexpr Result ResultInputStreamError = {0x80221};
constexpr Result ResultOutputStreamError = {0x80421};

constexpr int OpenMode_Read = 1;
constexpr int OpenMode_WriteAppend = 6;

}

void FileInputStreamImpl::SetBuffer(void* buffer, size_t size) {
  m_Buffer = static_cast<uint8_t*>(buffer);
  m_BufferSize = size;
  m_HasBuffer = true;
}

Result FileInputStreamImpl::Open(const char* path) {
  const Result result = fs::OpenFile(&m_File, path, OpenMode_Read);
  if (result.IsSuccess()) {
    m_IsOpened = true;
    m_Position = 0;
  }
  return result;
}

// Failed file reads keep their result, other stream errors map to one
// result.
Result FileInputStreamImpl::Read(size_t* pOutSize, void* buffer,
  size_t size) {
  const size_t read = Read(buffer, size);
  if (read != 0 || (m_ErrorValue == 0 && IsEndOfStream())) {
    *pOutSize = read;
    return Result();
  }
  return m_ErrorValue == ErrorIo ? m_Result : ResultInputStreamError;
}

void FileInputStreamImpl::Close() {
  if (m_IsOpened) {
    fs::CloseFile(m_File);
    m_IsOpened = false;
  }
}

size_t FileInputStreamImpl::FillBuffer_(void* buffer, size_t size) {
  NN_ABORT_UNLESS(buffer != nullptr || size != 0 || m_HasBuffer);
  size_t read = 0;
  m_Result = fs::ReadFile(&read, m_File, m_Position, buffer, size);
  if (m_Result.IsFailure()) {
    SetError(ErrorIo);
    return 0;
  }
  m_Position += read;
  return read;
}

bool FileInputStreamImpl::Close_() {
  if (m_IsOpened) {
    fs::CloseFile(m_File);
    m_IsOpened = false;
  }
  return true;
}

size_t FileInputStreamImpl::Skip_(size_t size) {
  m_Position += size;
  return size;
}

void FileOutputStreamImpl::SetBuffer(void* buffer, size_t size) {
  m_Buffer = static_cast<uint8_t*>(buffer);
  m_BufferSize = size;
  m_HasBuffer = true;
}

Result FileOutputStreamImpl::Open(const char* path) {
  const Result result = fs::OpenFile(&m_File, path, OpenMode_WriteAppend);
  if (result.IsSuccess()) {
    m_Position = 0;
    m_IsOpened = true;
  }
  return result;
}

Result FileOutputStreamImpl::Write(const void* buffer, size_t size) {
  if (OutputStream::Write(buffer, size)) {
    return Result();
  }
  return m_ErrorValue == ErrorIo ? m_Result : ResultOutputStreamError;
}

Result FileOutputStreamImpl::Flush() {
  if (Flush_(true)) {
    return fs::FlushFile(m_File);
  }
  return m_ErrorValue == ErrorIo ? m_Result : ResultOutputStreamError;
}

void FileOutputStreamImpl::Close() {
  if (m_IsOpened) {
    fs::CloseFile(m_File);
    m_IsOpened = false;
  }
}

bool FileOutputStreamImpl::PushBuffer_(const void* buffer, size_t size,
  bool doFlush) {
  const fs::WriteOption option = {doFlush ? 1 : 0};
  m_Result = fs::WriteFile(m_File, m_Position, buffer, size, option);
  if (m_Result.IsFailure()) {
    SetError(ErrorIo);
  }
  else {
    m_Position += size;
  }
  return m_Result.IsSuccess();
}

bool FileOutputStreamImpl::Close_() {
  if (m_IsOpened) {
    fs::CloseFile(m_File);
    m_IsOpened = false;
  }
  return true;
}

}
