#include "nn/diag/detail/diag_memory_block_parser.hpp"

namespace nn::diag::detail {

MemoryBlockParser::MemoryBlockParser()
  : m_Address(0), m_HasEnd(false), m_End(0), m_IsFinished(false) {}

void MemoryBlockParser::SetRange(uintptr_t begin, uintptr_t end) {
  m_Address = begin;

  // The end is an optional value, engaging it only writes the flag once.
  if (!m_HasEnd) {
    m_HasEnd = true;
  }

  m_End = end;
}

bool MemoryBlockParser::MoveNext() {
  if (m_HasEnd) {
    if (m_Address >= m_End) {
      return false;
    }
  }
  else if (m_IsFinished) {
    return false;
  }

  uint32_t pageInfo = 0;

  if (svc::QueryMemory(&m_Info, &pageInfo, m_Address).IsFailure()) {
    return false;
  }

  uintptr_t next = m_Info.baseAddress + m_Info.size;

  // The last block wraps the address space, the walk ends after it.
  if (next > m_Address) {
    m_Address = next;
  }
  else {
    m_IsFinished = true;
  }

  return true;
}

const svc::MemoryInfo* MemoryBlockParser::GetInfo() const {
  return &m_Info;
}

}
