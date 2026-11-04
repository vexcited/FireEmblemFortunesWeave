#include "nn/crypto/detail/ghash_impl.hpp"

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

GhashImpl::~GhashImpl() {
  ClearMemoryImpl(this, sizeof(*this));
}

void GhashImpl::Reset() {
  m_Ghash = Block();
  m_MessageSize[0] = 0;
  m_MessageSize[1] = 0;
  m_BufferedBytes = 0;
  m_State = State_ProcessingData;
}

void GhashImpl::ProcessPadding() {
  if (m_BufferedBytes != 0) {
    GfMultH(&m_Ghash);
    m_BufferedBytes = 0;
  }
}

// The size of the authenticated data moves to the first digit once the
// message itself starts.
void GhashImpl::SwitchMessageSizeDigit() {
  m_MessageSize[0] = m_MessageSize[1];
  m_MessageSize[1] = 0;
}

}
