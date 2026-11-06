#include <cstring>
#include <new>

#include "movie/detail/movie_sample.hpp"

namespace movie::detail {

Sample::Sample(IAllocator* allocator)
  : MovieRefBase(allocator), m_PresentationTime(InvalidTime),
    m_DecodeTime(InvalidTime), m_Duration(InvalidTime),
    m_IsSyncSample(false), m_IsEncrypted(false),
    m_pEncryptionProperties(nullptr) {
}

int Sample::GetTrackIndex() const {
  return m_TrackIndex;
}

void Sample::SetTrackIndex(int index) {
  m_TrackIndex = index;
}

int64_t Sample::GetPresentationTime() const {
  return m_PresentationTime;
}

void Sample::SetPresentationTime(int64_t time) {
  m_PresentationTime = time;
}

int64_t Sample::GetDecodeTime() const {
  return m_DecodeTime;
}

void Sample::SetDecodeTime(int64_t time) {
  m_DecodeTime = time;
}

int64_t Sample::GetDuration() const {
  return m_Duration;
}

void Sample::SetDuration(int64_t duration) {
  m_Duration = duration;
}

bool Sample::IsSyncSample() const {
  return m_IsSyncSample;
}

void Sample::SetSyncSample(bool isSyncSample) {
  m_IsSyncSample = isSyncSample;
}

bool Sample::IsEncrypted() const {
  return m_IsEncrypted;
}

void Sample::SetEncrypted(bool isEncrypted) {
  m_IsEncrypted = isEncrypted;
}

bool Sample::IsEOSSample() const {
  return m_PresentationTime == InvalidTime || m_DecodeTime == InvalidTime ||
    m_Duration == InvalidTime;
}

MovieResult Sample::GetBuffer(IBuffer** ppOutBuffer) {
  *ppOutBuffer = m_pBuffer.Get();
  if (m_pBuffer.Get() == nullptr) {
    return MovieResult_MessageNotProcessed;
  }

  m_pBuffer->AddRef();
  return MovieResult_Success;
}

MovieResult Sample::SetBuffer(IBuffer* buffer) {
  m_pBuffer = buffer;
  return MovieResult_Success;
}

MovieResult Sample::GetProperties(nn::movie::MediaProperty** ppOutProperties) {
  *ppOutProperties = &m_Properties;
  return MovieResult_Success;
}

MovieResult Sample::GetEncryptionProperties(
  EncryptionProperty** ppOutProperties) {
  if (m_pEncryptionProperties == nullptr) {
    m_pEncryptionProperties = static_cast<EncryptionProperty*>(
      m_pAllocator->Allocate(sizeof(EncryptionProperty)));
    if (m_pEncryptionProperties == nullptr) {
      return MovieResult_OutOfMemory;
    }

    std::memset(m_pEncryptionProperties, 0, sizeof(EncryptionProperty));
  }

  *ppOutProperties = m_pEncryptionProperties;
  return MovieResult_Success;
}

}

namespace movie {

MovieResult CreateSample(ISample** ppOutSample, IAllocator* allocator) {
  *ppOutSample = nullptr;
  void* storage = allocator->Allocate(sizeof(detail::Sample));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  auto* sample = new (storage) detail::Sample(allocator);
  sample->AddRef();
  *ppOutSample = sample;
  return MovieResult_Success;
}

}
