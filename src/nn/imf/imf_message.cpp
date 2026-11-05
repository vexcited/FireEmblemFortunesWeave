#include "nn/imf/imf_types.hpp"

namespace nn::imf {

MessageType Message::GetMessageType() const {
  return m_Type;
}

int Message::GetSelectionStart() const {
  return m_SelectionStart;
}

int Message::GetSelectionEnd() const {
  return m_SelectionEnd;
}

int Message::GetSelectionLength() const {
  return m_SelectionEnd - m_SelectionStart;
}

int Message::GetTextStart() const {
  return m_TextStart;
}

int Message::GetTextEnd() const {
  return m_TextEnd;
}

int Message::GetTextLength() const {
  return m_TextEnd - m_TextStart;
}

int Message::GetCompositionStart() const {
  return m_CompositionStart;
}

int Message::GetCompositionEnd() const {
  return m_CompositionEnd;
}

int Message::GetCompositionLength() const {
  return m_CompositionEnd - m_CompositionStart;
}

MessageType PrivateMessage::GetMessageType() const {
  return m_Type;
}

int PrivateMessage::GetSelectionStart() const {
  return m_SelectionStart;
}

int PrivateMessage::GetSelectionEnd() const {
  return m_SelectionEnd;
}

int PrivateMessage::GetSelectionLength() const {
  return m_SelectionEnd - m_SelectionStart;
}

int PrivateMessage::GetTextStart() const {
  return m_TextStart;
}

int PrivateMessage::GetTextEnd() const {
  return m_TextEnd;
}

int PrivateMessage::GetTextLength() const {
  return m_TextEnd - m_TextStart;
}

int PrivateMessage::GetCompositionStart() const {
  return m_CompositionStart;
}

int PrivateMessage::GetCompositionEnd() const {
  return m_CompositionEnd;
}

int PrivateMessage::GetCompositionLength() const {
  return m_CompositionEnd - m_CompositionStart;
}

SwkbdKey PrivateMessage::GetSwkbdKey() const {
  return m_SwkbdKey;
}

SinkMessageType SinkMessage::GetSinkMessageType() const {
  return m_Type;
}

const ContextHandle& SinkMessage::GetContextHandle() const {
  return m_ContextHandle;
}

int SinkMessage::GetTextStart() const {
  return m_TextStart;
}

int SinkMessage::GetTextEnd() const {
  return m_TextEnd;
}

int SinkMessage::GetTextLength() const {
  return m_TextEnd - m_TextStart;
}

}
