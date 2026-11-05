#include "nn/ssl/detail/ssl_builtin_list.hpp"
#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"

namespace nn::ssl::detail {

namespace {

constexpr uint32_t MinimumBufferSize = 0x800;

}

bool BuiltInList::Iterator::operator==(const Iterator& other) const {
  return m_pList == other.m_pList && m_Index == other.m_Index;
}

bool BuiltInList::Iterator::operator!=(const Iterator& other) const {
  return m_pList != other.m_pList || m_Index != other.m_Index;
}

BuiltInList::Iterator::operator bool() const {
  uint32_t count = m_pList->m_Count;
  return count != 0 && m_Index < count;
}

BuiltInList::CertificateAccessor BuiltInList::Iterator::operator*() {
  return CertificateAccessor(*m_pList, m_Index);
}

BuiltInList::Iterator& BuiltInList::Iterator::operator++() {
  ++m_Index;
  if (m_Index > m_pList->m_Count) {
    m_Index = 0;
  }

  return *this;
}

BuiltInList::Iterator BuiltInList::Iterator::operator++(int) {
  Iterator previous = *this;
  ++m_Index;
  if (m_Index > m_pList->m_Count) {
    m_Index = 0;
  }

  return previous;
}

BuiltInList::BuiltInList() : m_pBuffer(nullptr), m_BufferSize(0), m_Count(0) {}

Result BuiltInList::Initialize(uint8_t* buffer, uint32_t bufferSize) {
  if (buffer == nullptr) {
    return ResultInvalidPointer();
  }

  if (bufferSize < MinimumBufferSize) {
    return ResultBufferTooShort();
  }

  auto pService = ServiceSession::GetServiceSession();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultLibraryNotInitialized();
  }

  Result result =
    (*pService)->GetCertificateCount(nn::sf::Out<uint32_t>(&m_Count));
  if (result.IsSuccess()) {
    m_pBuffer = buffer;
    m_BufferSize = bufferSize;
  }

  return result;
}

BuiltInList::Iterator BuiltInList::begin() {
  return Iterator(*this, 0);
}

BuiltInList::Iterator BuiltInList::end() {
  return Iterator(*this, m_Count);
}

}
