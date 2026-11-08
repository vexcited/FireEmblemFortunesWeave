#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_media_extractor_impl.hpp"

namespace nn::movie::detail {

MediaExtractorImpl::MediaExtractorImpl(bool) : m_IsFinalized(false),
  m_pExtractor(nullptr), m_pExtractorStorage(nullptr),
  m_pNetworkConnection(nullptr), m_NetworkConnectionCount(0), m_State(),
  m_IsStarted(false), m_CacheSize(0), m_TrackCount(0), m_PreferredPixels(0),
  m_MinBandwidthSamples(2), m_pWorkerStack(nullptr), m_pWorkerThread(nullptr),
  m_pThreadInstance(nullptr), m_IsWorkerStopped(true) {
  os::detail::ClearMutexMembers(&m_MessageMutex);
  os::InitializeMutex(&m_MessageMutex, false, 0);
  // The allocator and both event managers end the object and are cleared
  // together.
  auto* tail = reinterpret_cast<uint8_t*>(&m_pAllocatorInfo);
  memset(tail, 0, reinterpret_cast<uint8_t*>(this + 1) - tail);
}

MediaExtractorImpl::~MediaExtractorImpl() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Finalize());
  os::FinalizeMutex(&m_MessageMutex);
}

}
