// The public decoders construct and destroy their allocator.
#define NN_MEM_STANDARD_ALLOCATOR_LIFETIME

#include <new>

#include "movie/detail/movie_video_decoder_impl.hpp"
#include "movie/movie_video_decoder.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"
#include "nn/movie/movie_media_property.hpp"

namespace nn::movie {

Result IsInitialized();

}

namespace movie {

namespace {

using nn::movie::detail::ThreadInfo;
using nn::movie::detail::ThreadManager;

constexpr auto ComponentType_VideoDecoder =
  static_cast<ThreadInfo::ComponentType>(6);
// The implementation keeps the first page, the decoder gets the rest.
constexpr size_t ImplementationSize = 0x1000;

}

VideoDecoder::VideoDecoder() {
  m_pImpl = nullptr;
}

VideoDecoder::~VideoDecoder() {
  Finalize();
  m_pImpl = nullptr;
}

void VideoDecoder::Finalize() {
  if (m_pImpl != nullptr) {
    m_pImpl->Finalize();
    m_pImpl = nullptr;
  }
}

MovieResult VideoDecoder::Initialize(void* memory, size_t memorySize,
  nn::movie::MediaMimeType mimeType, VideoDecoderOutputFormat outputFormat,
  VideoCodecMode codecMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::movie::IsInitialized());
  detail::VideoDecoderImpl* impl = new (memory) detail::VideoDecoderImpl();
  NN_ABORT_UNLESS_NOT_NULL(impl);
  MovieResult result = impl->Initialize(
    static_cast<uint8_t*>(memory) + ImplementationSize,
    memorySize - ImplementationSize,
    static_cast<detail::VideoDecoderType>(mimeType), outputFormat,
    codecMode);
  if (IsSucceeded(result)) {
    result = MovieResult_Success;
    m_pImpl = impl;
  }

  return result;
}

MovieResult VideoDecoder::Configure(const nn::movie::MediaProperty* property,
  const void* configuration, size_t size) {
  return m_pImpl->Configure(property, configuration, size);
}

MovieResult VideoDecoder::GetVideoFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  return m_pImpl->GetVideoFrameRequirements(pOut);
}

MovieResult VideoDecoder::GetInputReadyEvent(
  nn::os::SystemEventType** pOutEvent) {
  detail::VideoDecoderImpl* impl = m_pImpl;
  impl->m_Mutex.Lock();
  NN_ABORT_UNLESS(impl->m_State == detail::VideoDecoderImpl::State_Configured
    || impl->m_State == detail::VideoDecoderImpl::State_Started);
  *pOutEvent = impl->m_pInputReadyEvent;
  impl->m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoder::GetOutputReadyEvent(
  nn::os::SystemEventType** pOutEvent) {
  detail::VideoDecoderImpl* impl = m_pImpl;
  impl->m_Mutex.Lock();
  NN_ABORT_UNLESS(impl->m_State >= detail::VideoDecoderImpl::State_Initialized
    && impl->m_State <= detail::VideoDecoderImpl::State_Started);
  *pOutEvent = &impl->m_OutputReadyEvent;
  impl->m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoder::GetFormatChangedEvent(
  nn::os::SystemEventType** pOutEvent) {
  detail::VideoDecoderImpl* impl = m_pImpl;
  impl->m_Mutex.Lock();
  NN_ABORT_UNLESS(impl->m_State >= detail::VideoDecoderImpl::State_Initialized
    && impl->m_State <= detail::VideoDecoderImpl::State_Started);
  *pOutEvent = &impl->m_FormatChangedEvent;
  impl->m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoder::Start() {
  detail::VideoDecoderImpl* impl = m_pImpl;
  impl->m_Mutex.Lock();
  detail::StartDecoder(&impl->m_Decoder);
  impl->m_State = detail::VideoDecoderImpl::State_Started;
  impl->m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoder::Stop() {
  detail::VideoDecoderImpl* impl = m_pImpl;
  impl->m_Mutex.Lock();
  detail::StopDecoder(&impl->m_Decoder);
  impl->m_State = detail::VideoDecoderImpl::State_Configured;
  impl->m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoder::Flush() {
  return m_pImpl->Flush();
}

MovieResult VideoDecoder::DecodeAsync(const nn::movie::Buffer* buffer) {
  return m_pImpl->DecodeAsync(buffer);
}

MovieResult VideoDecoder::GetOutputFrameProperties(
  nn::movie::MediaProperty* pOut) {
  detail::VideoDecoderImpl* impl = m_pImpl;
  impl->m_Mutex.Lock();
  NN_ABORT_UNLESS(impl->m_State == detail::VideoDecoderImpl::State_Started);
  pOut->Clear();
  pOut->SetInt32("width", impl->m_Width);
  pOut->SetInt32("height", impl->m_Height);
  impl->m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoder::RegisterVideoFrame(VideoFrame** frames,
  int count) {
  return m_pImpl->RegisterVideoFrame(frames, count);
}

MovieResult VideoDecoder::AcquireVideoFrame(VideoFrame** pOutFrame,
  int* pOutCount) {
  return m_pImpl->AcquireVideoFrame(pOutFrame, pOutCount);
}

MovieResult VideoDecoder::AcquireVideoFrame(VideoFrame** pOutFrame) {
  int count = 0;
  return m_pImpl->AcquireVideoFrame(pOutFrame, &count);
}

MovieResult VideoDecoder::ReleaseVideoFrame(VideoFrame* frame) {
  return m_pImpl->ReleaseVideoFrame(frame);
}

void VideoDecoder::SetThreadCoreMask(uint64_t coreMask) {
  ThreadManager::GetInstance()->_SetThreadCoreMaskByComponentType(
    ComponentType_VideoDecoder, coreMask);
}

uint64_t VideoDecoder::GetThreadCoreMask() {
  return ThreadManager::GetInstance()->_GetThreadCoreMaskByComponentType(
    ComponentType_VideoDecoder);
}

MovieResult VideoDecoder::SetThreadPriority(int priority) {
  NN_ABORT_UNLESS(static_cast<uint32_t>(priority) < 32);
  ThreadManager::GetInstance()->_SetThreadPriorityByComponentType(
    ComponentType_VideoDecoder, priority);
  return MovieResult_Success;
}

int VideoDecoder::GetThreadPriority() {
  return ThreadManager::GetInstance()->_GetThreadPriorityByComponentType(
    ComponentType_VideoDecoder);
}

void SetVideoDecoderLowLatencyModeRequested(VideoDecoder*, bool) {
}

void SetVideoDecoderInitializeByRemoteMemoryEnabled(VideoDecoder* decoder,
  bool isEnabled) {
  detail::VideoDecoderImpl* impl = decoder->m_pImpl;
  impl->m_Mutex.Lock();
  impl->m_IsRemoteMemoryEnabled = isEnabled;
  impl->m_Mutex.Unlock();
}

size_t CalculateVideoDecoderBufferRequirements(const VideoDecoder* decoder,
  const nn::movie::MediaProperty* property) {
  return decoder->m_pImpl->CalculateBufferRequirements(property);
}

void SetVideoDecoderDonatedMemory(VideoDecoder* decoder, void* memory,
  size_t size) {
  detail::VideoDecoderImpl* impl = decoder->m_pImpl;
  impl->m_Mutex.Lock();
  impl->m_pMemory = memory;
  impl->m_MemorySize = size;
  impl->m_Mutex.Unlock();
}

void SetVideoDecoderAdditionalRemoteMemory(VideoDecoder* decoder,
  size_t size) {
  detail::VideoDecoderImpl* impl = decoder->m_pImpl;
  impl->m_Mutex.Lock();
  impl->m_AdditionalRemoteMemorySize = size;
  impl->m_Mutex.Unlock();
}

}
