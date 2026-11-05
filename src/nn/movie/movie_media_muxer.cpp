#include "nn/movie/movie_media_extractor.hpp"
#include "nn/movie/movie_result.hpp"

namespace nn::movie {

Result MediaMuxer::Configure(const MediaProperty* property) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  detail::MediaMuxerImpl* impl = m_pHolder->pImpl;
  m_pHolder->mutex.Lock();
  Result result = detail::ToPublicResult(impl->Configure(property));
  m_pHolder->mutex.Unlock();
  return result;
}

Result MediaMuxer::AddTrack(int* pOutIndex, const MediaProperty* property,
  const void* configuration, size_t configurationSize) {
  if (configurationSize == 0) {
    return ResultInvalidArgument;
  }

  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  detail::MediaMuxerImpl* impl = m_pHolder->pImpl;
  m_pHolder->mutex.Lock();
  Result result = detail::ToPublicResult(impl->AddTrack(pOutIndex, property,
    configuration, configurationSize));
  m_pHolder->mutex.Unlock();
  return result;
}

Result MediaMuxer::Start() {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  detail::MediaMuxerImpl* impl = m_pHolder->pImpl;
  m_pHolder->mutex.Lock();
  Result result = detail::ToPublicResult(impl->Start());
  m_pHolder->mutex.Unlock();
  return result;
}

Result MediaMuxer::GetTrackCount(int* pOutCount) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  detail::MediaMuxerImpl* impl = m_pHolder->pImpl;
  m_pHolder->mutex.Lock();
  Result result = detail::ToPublicResult(impl->GetTrackCount(pOutCount));
  m_pHolder->mutex.Unlock();
  return result;
}

Result MediaMuxer::Stop() {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  detail::MediaMuxerImpl* impl = m_pHolder->pImpl;
  m_pHolder->mutex.Lock();
  Result result = detail::ToPublicResult(impl->Stop());
  m_pHolder->mutex.Unlock();
  return result;
}

Result MediaMuxer::WriteAsync(const Buffer* buffer, int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  detail::MediaMuxerImpl* impl = m_pHolder->pImpl;
  m_pHolder->mutex.Lock();
  Result result = detail::ToPublicResult(impl->WriteAsync(buffer, index));
  m_pHolder->mutex.Unlock();
  return result;
}

Result MediaMuxer::SetThreadCoreMask(uint64_t coreMask) {
  return detail::ThreadManager::GetInstance()->_SetThreadCoreMaskByInstance(
    this, coreMask);
}

uint64_t MediaMuxer::GetThreadCoreMask() {
  return detail::ThreadManager::GetInstance()->_GetThreadCoreMaskByInstance(
    this);
}

Result MediaMuxer::SetThreadPriority(int priority) {
  detail::ThreadManager::GetInstance()->_SetThreadPriorityByInstance(this,
    priority);
  return {};
}

int MediaMuxer::GetThreadPriority() {
  return detail::ThreadManager::GetInstance()->_GetThreadPriorityByInstance(
    this);
}

}
