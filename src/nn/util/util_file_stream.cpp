#include "nn/util/util_file_stream.hpp"

namespace nn::util {

FileInputStream::FileInputStream() {}

FileInputStream::~FileInputStream() {
  m_Impl.Close();
}

void FileInputStream::SetBuffer(void* buffer, size_t size) {
  m_Impl.SetBuffer(buffer, size);
}

Result FileInputStream::Open(const char* path) {
  return m_Impl.Open(path);
}

Result FileInputStream::Read(size_t* pOutSize, void* buffer, size_t size) {
  return m_Impl.Read(pOutSize, buffer, size);
}

void FileInputStream::Close() {
  m_Impl.Close();
}

FileOutputStream::FileOutputStream() {}

FileOutputStream::~FileOutputStream() {
  m_Impl.Close();
}

void FileOutputStream::SetBuffer(void* buffer, size_t size) {
  m_Impl.SetBuffer(buffer, size);
}

Result FileOutputStream::Open(const char* path) {
  return m_Impl.Open(path);
}

Result FileOutputStream::Write(const void* buffer, size_t size) {
  return m_Impl.Write(buffer, size);
}

Result FileOutputStream::Flush() {
  return m_Impl.Flush();
}

void FileOutputStream::Close() {
  m_Impl.Close();
}

}
