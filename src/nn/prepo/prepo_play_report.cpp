#include "nn/prepo/prepo_play_report.hpp"

namespace nn::prepo {

PlayReport::PlayReport() : m_Impl() {}

PlayReport::PlayReport(const char* eventId) : m_Impl(eventId) {}

PlayReport::~PlayReport() {}

void PlayReport::SetBuffer(void* buffer, size_t size) {
  m_Impl.SetBuffer(buffer, size);
}

Result PlayReport::SetEventId(const char* eventId) {
  return m_Impl.SetEventId(eventId);
}

void PlayReport::SetOptInCheckEnabled(bool isEnabled) {
  m_Impl.SetOptInCheckEnabled(isEnabled);
}

void PlayReport::Clear() {
  m_Impl.Clear();
}

Result PlayReport::Add(const char* key, long value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Add(const char* key, const Any64BitId& value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Add(const char* key, float value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Add(const char* key, double value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Add(const char* key, const char* value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Add(const char* key, bool value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Add(const char* key, const void* value, size_t size) {
  return m_Impl.Add(key, value, size);
}

Result PlayReport::Add(const char* key, const Array& value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Add(const char* key, const Struct& value) {
  return m_Impl.Add(key, value);
}

Result PlayReport::Save() {
  return m_Impl.Save();
}

Result PlayReport::Save(const account::Uid& uid) {
  return m_Impl.Save(uid);
}

AsyncContext PlayReport::Send(const account::Uid& uid) {
  return m_Impl.Send(uid);
}

int PlayReport::GetCount() const {
  return m_Impl.GetCount();
}

size_t PlayReport::GetSize() const {
  return m_Impl.GetSize();
}

}
