#include "nn/diag/diag_abort.hpp"
#include "nn/lm/lm_dev_notification.hpp"

namespace nn::lm {

DevNotificationListReader::DevNotificationListReader(Span<const uint8_t> list)
  : m_Offset(0), m_List(list) {}

bool DevNotificationListReader::HasCurrent() const {
  return m_Offset + sizeof(diag::DevNotificationHeader) <= m_List.size;
}

DevNotificationListReader& DevNotificationListReader::Next() {
  NN_ABORT_UNLESS(HasCurrent());
  const auto* header = reinterpret_cast<const diag::DevNotificationHeader*>(
    m_List.data + m_Offset);
  uint16_t alignedLength = static_cast<uint16_t>(header->textLength + 7) & ~7;
  m_Offset += alignedLength + sizeof(diag::DevNotificationHeader);
  return *this;
}

const diag::DevNotificationHeader*
DevNotificationListReader::GetCurrentHeader() const {
  NN_ABORT_UNLESS(HasCurrent());
  return reinterpret_cast<const diag::DevNotificationHeader*>(
    m_List.data + m_Offset);
}

Span<const char> DevNotificationListReader::GetCurrentText() const {
  size_t textOffset = m_Offset + sizeof(diag::DevNotificationHeader);
  NN_ABORT_UNLESS(textOffset <= m_List.size);
  const auto* header = reinterpret_cast<const diag::DevNotificationHeader*>(
    m_List.data + m_Offset);
  size_t length = header->textLength;
  NN_ABORT_UNLESS(length <= MaxTextLength);
  NN_ABORT_UNLESS(m_List.size - textOffset >= length);
  return Span<const char>{
    reinterpret_cast<const char*>(m_List.data + textOffset), length};
}

}
