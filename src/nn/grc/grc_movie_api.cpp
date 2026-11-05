#include <mutex>
#include <utility>

#include "nn/diag/diag_abort.hpp"
#include "nn/grc/grc_movie_api.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::vi {

struct Layer;

void Initialize();
void Finalize();
Result GetNativeWindow(void** pOutWindow, Layer* pLayer);

}

namespace nn::grc {

class MovieLayer {
 public:
  uint64_t GetLayerId() const {
    return m_LayerId;
  }

  vi::Layer* GetViLayer() const {
    return m_pViLayer;
  }

 private:
  uint64_t m_LayerId;
  uint64_t m_Reserved;
  vi::Layer* m_pViLayer;
};

namespace dev {

void UnregisterOffscreenLayer(uint64_t layerId);

}

namespace detail {

extern sf::SharedPointer<grcsrv::IMovieMaker> g_MovieMaker;
extern bool g_IsMovieLayerOpened;
extern MovieLayer g_MovieLayer;
struct MovieWriterContext {
  os::SdkMutex mutex;
  sf::SharedPointer<grcsrv::IMovieWriter> movieWriter;
};

extern MovieWriterContext g_MovieWriterContext;

}

namespace {

using WriterLock = std::lock_guard<os::SdkMutex>;

constexpr Result ResultInvalidMovieLayer = {0x3ead4};

bool IsValidMovieLayer(const MovieLayer* pLayer) {
  return detail::g_IsMovieLayerOpened && pLayer == &detail::g_MovieLayer;
}

Result AttachReadableEvent(os::SystemEventType* pEvent,
  sf::NativeHandle& handle, Result result) {
  if (result.IsSuccess()) {
    os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
      handle.IsManaged(), os::EventClearMode_ManualClear);
    handle.Detach();
  }

  return result;
}

}

namespace dev {

Result InitializeMovieMakerProxy(
  sf::SharedPointer<grcsrv::IMovieMaker>&& movieMaker) {
  sf::SharedPointer<grcsrv::IMovieMaker> pointer(movieMaker.Detach(), false);
  detail::g_MovieMaker.Swap(pointer);
  return Result();
}

void FinalizeMovieMakerProxy() {
  detail::g_MovieMaker.Reset();
}

Result InitializeMovieVideoProxy() {
  return Result();
}

void FinalizeMovieVideoProxy() {}

void CloseAllMovieLayers() {
  if (detail::g_IsMovieLayerOpened) {
    UnregisterOffscreenLayer(detail::g_MovieLayer.GetLayerId());
  }
}

Result OpenOffscreenLayer(int* pOutHandle, uint64_t) {
  *pOutHandle = 0;
  return Result();
}

void CloseOffscreenLayer(uint64_t) {}

}

Result InitializeForApplication(
  sf::SharedPointer<grcsrv::IMovieMaker>&& movieMaker) {
  vi::Initialize();
  sf::SharedPointer<grcsrv::IMovieMaker> pointer(movieMaker.Detach(), false);
  detail::g_MovieMaker.Swap(pointer);
  return Result();
}

void FinalizeForApplication() {
  if (detail::g_IsMovieLayerOpened) {
    dev::UnregisterOffscreenLayer(detail::g_MovieLayer.GetLayerId());
  }

  detail::g_MovieMaker.Reset();
  vi::Finalize();
}

Result GetVideoNativeWindow(void** pOutWindow, MovieLayer* pLayer) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  void* pWindow = nullptr;
  NN_RESULT_DO(vi::GetNativeWindow(&pWindow,
    detail::g_MovieLayer.GetViLayer()));
  *pOutWindow = pWindow;
  return Result();
}

Result StartMovieFile(MovieLayer* pLayer,
  const OffscreenRecordingParameter& parameter) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  return detail::g_MovieMaker->StartOffscreenRecording(
    detail::g_MovieLayer.GetLayerId(), parameter);
}

Result RequestFinishMovieFile(MovieLayer* pLayer) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  return detail::g_MovieMaker->RequestOffscreenRecordingFinishReady(
    detail::g_MovieLayer.GetLayerId());
}

Result CompleteFinishMovieFile(capsrv::ApplicationAlbumEntry* pOutEntry,
  MovieLayer* pLayer, const sf::InBuffer& userData,
  const sf::InBuffer& thumbnail, album::ImageSize thumbnailSize) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  grcsrv::IMovieMaker* pMovieMaker = detail::g_MovieMaker.Get();
  const uint64_t layerId = detail::g_MovieLayer.GetLayerId();
  const int width = album::GetImageWidth(thumbnailSize);
  const int height = album::GetImageHeight(thumbnailSize);
  return pMovieMaker->CompleteOffscreenRecordingFinish(pOutEntry, layerId,
    userData, thumbnail, width, height);
}

Result AbortMovieFile(MovieLayer* pLayer) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  return detail::g_MovieMaker->AbortOffscreenRecording(
    detail::g_MovieLayer.GetLayerId());
}

Result CheckMovieFileError(MovieLayer* pLayer) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  return detail::g_MovieMaker->GetOffscreenLayerError(
    detail::g_MovieLayer.GetLayerId());
}

Result EncodeMovieAudioSample(size_t* pOutSize, MovieLayer* pLayer,
  const void* pBuffer, size_t size) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  uint64_t encodedSize = 0;
  NN_RESULT_DO(detail::g_MovieMaker->EncodeOffscreenLayerAudioSample(
    sf::Out<uint64_t>(&encodedSize), detail::g_MovieLayer.GetLayerId(),
    sf::InBuffer(pBuffer, size)));
  *pOutSize = encodedSize;
  return Result();
}

Result InitializeFinishMovieFileReadyEvent(os::SystemEventType* pEvent,
  MovieLayer* pLayer) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    detail::g_MovieMaker->GetOffscreenLayerRecordingFinishReadyEvent(
      sf::Out<sf::NativeHandle>(&handle), detail::g_MovieLayer.GetLayerId()));
}

void FinalizeFinishMovieFileReadyEvent(os::SystemEventType* pEvent,
  MovieLayer*) {
  os::DestroySystemEvent(pEvent);
}

Result InitializeMovieAudioEncodeReadyEvent(os::SystemEventType* pEvent,
  MovieLayer* pLayer) {
  if (!IsValidMovieLayer(pLayer)) {
    return ResultInvalidMovieLayer;
  }

  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    detail::g_MovieMaker->GetOffscreenLayerAudioEncodeReadyEvent(
      sf::Out<sf::NativeHandle>(&handle), detail::g_MovieLayer.GetLayerId()));
}

void FinalizeMovieAudioEncodeReadyEvent(os::SystemEventType* pEvent,
  MovieLayer*) {
  os::DestroySystemEvent(pEvent);
}

Result InitializeForMovieWriter(
  sf::SharedPointer<grcsrv::IMovieWriter>&& movieWriter) {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  sf::SharedPointer<grcsrv::IMovieWriter> pointer(movieWriter.Detach(),
    false);
  detail::g_MovieWriterContext.movieWriter.Swap(pointer);
  return Result();
}

void FinalizeForMovieWriter() {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  detail::g_MovieWriterContext.movieWriter.Reset();
}

Result StartMovieWriter(const MovieWriterParameter& parameter) {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  return detail::g_MovieWriterContext.movieWriter->Start(parameter);
}

Result WriteMp4Data(size_t offset, const void* pData, size_t size) {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  return detail::g_MovieWriterContext.movieWriter->WriteMp4Data(offset,
    sf::InBuffer(pData, size));
}

Result RequestFinishMovieWriter() {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  return detail::g_MovieWriterContext.movieWriter->RequestFinishReady();
}

Result CompleteFinishMovieWriter(capsrv::ApplicationAlbumEntry* pOutEntry,
  const sf::InBuffer& userData, const sf::InBuffer& thumbnail,
  album::ImageSize thumbnailSize) {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  grcsrv::IMovieWriter* pMovieWriter =
    detail::g_MovieWriterContext.movieWriter.Get();
  const int width = album::GetImageWidth(thumbnailSize);
  const int height = album::GetImageHeight(thumbnailSize);
  return pMovieWriter->CompleteFinish(pOutEntry, userData, thumbnail, width,
    height);
}

Result AbortMovieWriter() {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  const Result result = detail::g_MovieWriterContext.movieWriter->Abort();
  detail::g_MovieWriterContext.movieWriter.Reset();
  return result;
}

Result CheckMovieWriterError() {
  WriterLock lock(detail::g_MovieWriterContext.mutex);
  return detail::g_MovieWriterContext.movieWriter->GetError();
}

}
