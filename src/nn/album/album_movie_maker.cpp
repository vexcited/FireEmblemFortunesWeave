#include <string.h>

#include <mutex>

#include "nn/album/album_movie_parameter.hpp"
#include "nn/album/album_types.hpp"
#include "nn/am/service/am_application.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/grc/grc_movie_api.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::capsrv {

Result PrecheckToCreateContentsForApplication(uint8_t contents, size_t size);
uint64_t GetShimLibraryVersion();

}

#define NN_ALBUM_DETAIL_ACCESS_LOG(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        static_cast<const void*>(nullptr))) { \
      const ::nn::os::Tick albumStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick albumEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, albumStart_, albumEnd_, \
        __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_ALBUM_DETAIL_ACCESS_LOG_VOID(statement, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        static_cast<const void*>(nullptr))) { \
      const ::nn::os::Tick albumStart_ = ::nn::os::GetSystemTick(); \
      statement; \
      const ::nn::os::Tick albumEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(::nn::Result{0}, albumStart_, \
        albumEnd_, __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      statement; \
    } \
  } while (0)

namespace nn::album {

namespace {

constexpr size_t MovieMakerRequiredWorkMemorySize = 0x6000000;
constexpr size_t MovieMakerRequiredWorkMemoryAlignment = 0x1000;
constexpr uint8_t ContentsMovie = 3;

constexpr uint32_t ResultModuleGrc = 212;

class RecursiveMutex {
 public:
  void lock() {
    m_Mutex.Lock();
  }

  void unlock() {
    m_Mutex.Unlock();
  }

 private:
  os::SdkRecursiveMutexType m_Mutex;
};

using LockGuard = std::lock_guard<RecursiveMutex>;

class ScopedTransferMemory {
 public:
  ~ScopedTransferMemory() {
    if (m_TransferMemory.state != os::TransferMemoryType::State_NotInitialized) {
      os::DestroyTransferMemory(&m_TransferMemory);
    }
  }

  os::TransferMemoryType* Get() {
    return &m_TransferMemory;
  }

 private:
  os::TransferMemoryType m_TransferMemory;
};

struct MovieMakerContext {
  bool isInitialized;
  size_t workMemorySize;
  grc::MovieLayer* pLayer;
  os::SystemEventType finishMovieFileReadyEvent;
  os::SystemEventType movieAudioEncodeReadyEvent;
  bool isInternal;
  bool isRunning;
};

struct MovieMakerState {
  RecursiveMutex mutex;
  MovieMakerContext context;
};

uint8_t g_FinishImageSize;
sf::SharedPointer<grcsrv::IMovieMakerService> g_GrcService;
MovieMakerState g_MovieMaker;
bool g_IsMovieMakerErrorConversionEnabled = true;

[[gnu::always_inline]] inline Result ConvertMovieMakerResult(
  Result result) {
  if (g_IsMovieMakerErrorConversionEnabled) {
    return ConvertCapsrvResult(result);
  }
  return result;
}

[[gnu::always_inline]] inline bool IsRunning() {
  LockGuard lock(g_MovieMaker.mutex);
  return g_MovieMaker.context.isInitialized &&
    g_MovieMaker.context.isRunning;
}

[[gnu::always_inline]] inline void AbortImpl() {
  LockGuard lock(g_MovieMaker.mutex);
  if (IsRunning()) {
    grc::AbortMovieFile(g_MovieMaker.context.pLayer);
    g_MovieMaker.context.isRunning = false;
  }
}

[[gnu::noinline]] Result InitializeImpl(
  sf::SharedPointer<grcsrv::IMovieMaker>&& movieMaker, size_t workMemorySize,
  bool isInternal) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    grc::InitializeForApplication(static_cast<
      sf::SharedPointer<grcsrv::IMovieMaker>&&>(movieMaker)));
  grc::MovieLayer* pLayer = nullptr;
  NN_ABORT_UNLESS_RESULT_SUCCESS(grc::OpenMovieLayer(&pLayer, workMemorySize,
    1280, 720));
  MovieMakerContext& context = g_MovieMaker.context;
  context = {};
  context.isInitialized = true;
  context.workMemorySize = workMemorySize;
  context.pLayer = pLayer;
  context.isInternal = isInternal;
  NN_ABORT_UNLESS_RESULT_SUCCESS(grc::InitializeFinishMovieFileReadyEvent(
    &context.finishMovieFileReadyEvent, pLayer));
  const Result result = grc::InitializeMovieAudioEncodeReadyEvent(
    &context.movieAudioEncodeReadyEvent, pLayer);
  if (result.IsFailure()) {
    diag::detail::AbortImpl(&result);
  }
  return result;
}

}

size_t GetMovieMakerRequiredWorkMemorySize() {
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(static_cast<void>(0), "");
  return MovieMakerRequiredWorkMemorySize;
}

size_t GetMovieMakerRequiredWorkMemoryAlignment() {
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(static_cast<void>(0), "");
  return MovieMakerRequiredWorkMemoryAlignment;
}

bool IsMovieMakerInitialized() {
  bool isInitialized;
  const auto impl = [&]() {
    LockGuard lock(g_MovieMaker.mutex);
    isInitialized = g_MovieMaker.context.isInitialized;
  };
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(impl(), "");
  return isInitialized;
}

bool IsMovieMakerRunning() {
  bool isRunning;
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(isRunning = IsRunning(), "");
  return isRunning;
}

inline auto MakeInitializeImpl(void* pWorkMemory, size_t workMemorySize) {
  return [=]() -> Result {
    bool isRetryNeeded;
    Result initializeResult;
    do {
      std::unique_lock<RecursiveMutex> lock(g_MovieMaker.mutex);
      ScopedTransferMemory transferMemory;
      NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(
        transferMemory.Get(), pWorkMemory, workMemorySize,
        os::MemoryPermission_None));
      sf::SharedPointer<grcsrv::IMovieMakerService> service;
      const Result createResult =
        am::service::GetApplicationFunctionsObject()->CreateMovieMaker(
          sf::Out<sf::SharedPointer<grcsrv::IMovieMakerService>>(&service),
          sf::NativeHandle(os::DetachTransferMemory(transferMemory.Get()),
            true), workMemorySize);
      isRetryNeeded = false;
      if (createResult.IsFailure()) {
        if (createResult.GetInnerValueForDebug() ==
          (ResultModuleGrc | 4 << 9)) {
          lock.unlock();
          os::SleepThread(TimeSpan{100000000});
          isRetryNeeded = true;
        }
        else {
          initializeResult = ConvertMovieMakerResult(createResult);
        }
        continue;
      }
      sf::SharedPointer<grcsrv::IMovieMaker> movieMaker;
      uint64_t movieMakerWorkMemorySize = 0;
      initializeResult = ConvertMovieMakerResult(service->CreateMovieMaker(
        sf::Out<sf::SharedPointer<grcsrv::IMovieMaker>>(&movieMaker)));
      if (initializeResult.IsFailure()) {
        continue;
      }
      initializeResult = ConvertMovieMakerResult(
        movieMaker->SetShimLibraryVersion(capsrv::GetShimLibraryVersion()));
      if (initializeResult.IsFailure()) {
        continue;
      }
      initializeResult = ConvertMovieMakerResult(
        service->GetMovieMakerWorkMemorySize(
          sf::Out<uint64_t>(&movieMakerWorkMemorySize)));
      if (initializeResult.IsFailure()) {
        continue;
      }
      initializeResult = ConvertMovieMakerResult(InitializeImpl(
        static_cast<sf::SharedPointer<grcsrv::IMovieMaker>&&>(movieMaker),
        movieMakerWorkMemorySize, true));
      if (initializeResult.IsFailure()) {
        continue;
      }
      g_GrcService = service;
      initializeResult = Result{0};
    } while (isRetryNeeded);
    return initializeResult;
  };
}

Result InitializeMovieMaker(void* pWorkMemory, size_t workMemorySize) {
  Result result;
  const auto impl = MakeInitializeImpl(pWorkMemory, workMemorySize);
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), "");
  return result;
}

inline Result FinalizeMovieMakerImpl() {
  LockGuard lock(g_MovieMaker.mutex);
  MovieMakerContext& context = g_MovieMaker.context;
  if (context.isRunning) {
    AbortImpl();
  }
  grc::FinalizeMovieAudioEncodeReadyEvent(
    &context.movieAudioEncodeReadyEvent, context.pLayer);
  grc::FinalizeFinishMovieFileReadyEvent(
    &context.finishMovieFileReadyEvent, context.pLayer);
  grc::CloseMovieLayer(context.pLayer);
  context.isInitialized = false;
  grc::FinalizeForApplication();
  g_GrcService.Reset();
  return Result{0};
}

void FinalizeMovieMaker() {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result, FinalizeMovieMakerImpl(), "");
}

Result InitializeMovieMakerInternal(
  sf::SharedPointer<grcsrv::IMovieMaker>&& movieMaker,
  size_t workMemorySize) {
  LockGuard lock(g_MovieMaker.mutex);
  return InitializeImpl(static_cast<sf::SharedPointer<grcsrv::IMovieMaker>&&>(
    movieMaker), workMemorySize, false);
}

Result GetMovieMakerNativeWindow(void** pOutWindow) {
  const auto impl = [&]() {
    LockGuard lock(g_MovieMaker.mutex);
    void* pWindow = nullptr;
    NN_ABORT_UNLESS_RESULT_SUCCESS(grc::GetVideoNativeWindow(&pWindow,
      g_MovieMaker.context.pLayer));
    *pOutWindow = pWindow;
  };
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(impl(), "");
  return Result{0};
}

Result PrecheckToStartMovieMaker(size_t size) {
  Result result;
  const auto impl = [&]() -> Result {
    LockGuard lock(g_MovieMaker.mutex);
    g_LibraryState.EnsureAlbumAvailable();
    return ConvertCapsrvResult(
      capsrv::PrecheckToCreateContentsForApplication(ContentsMovie, size));
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(),
    ", size: %lu", size);
  return result;
}

Result StartMovieMaker(const MovieMakerMovieParameter& parameter) {
  Result result;
  const auto impl = [=]() -> Result {
    LockGuard lock(g_MovieMaker.mutex);
    grc::OffscreenRecordingParameter grcParameter;
    memcpy(&grcParameter, &parameter, sizeof(grcParameter));
    const bool is720p = grcParameter.videoWidth == 1280 &&
      grcParameter.videoHeight == 720;
    NN_ABORT_UNLESS(is720p || (grcParameter.videoWidth == 1920 &&
      grcParameter.videoHeight == 1080));
    g_FinishImageSize = static_cast<uint8_t>(is720p ? ImageSize_1280x720 :
      ImageSize_1920x1080);
    const Result startResult = ConvertMovieMakerResult(
      grc::StartMovieFile(g_MovieMaker.context.pLayer, grcParameter));
    if (startResult.IsSuccess()) {
      g_MovieMaker.context.isRunning = true;
    }
    return startResult;
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), "");
  return result;
}

Result FinishMovieMaker(AlbumFileEntry* pOutEntry, const void* pUserData,
  size_t userDataSize, const void* pImageData, size_t imageDataSize,
  ImageSize imageSize) {
  Result result;
  const auto impl = [=]() -> Result {
    LockGuard lock(g_MovieMaker.mutex);
    MovieMakerContext& context = g_MovieMaker.context;
    Result finishResult = grc::RequestFinishMovieFile(context.pLayer);
    if (finishResult.IsFailure()) {
      grc::AbortMovieFile(context.pLayer);
      context.isRunning = false;
      return ConvertMovieMakerResult(finishResult);
    }
    os::WaitSystemEvent(&context.finishMovieFileReadyEvent);
    capsrv::ApplicationAlbumEntry entry;
    finishResult = grc::CompleteFinishMovieFile(&entry, context.pLayer,
      sf::InBuffer(pUserData, userDataSize),
      sf::InBuffer(pImageData, imageDataSize), imageSize);
    if (finishResult.IsFailure()) {
      grc::AbortMovieFile(context.pLayer);
      context.isRunning = false;
      return ConvertMovieMakerResult(finishResult);
    }
    context.isRunning = false;
    if (pOutEntry != nullptr) {
      *pOutEntry = ConvertAlbumEntry::ConvertToAlbum(entry);
    }
    return Result{0};
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(),
    ", image_data_size: %zu, width: %d, height: %d", imageDataSize,
    GetImageWidth(imageSize), GetImageHeight(imageSize));
  return result;
}

Result FinishMovieMaker() {
  return FinishMovieMaker(nullptr, nullptr, 0, nullptr, 0,
    static_cast<ImageSize>(g_FinishImageSize));
}

Result FinishMovieMaker(const void* pUserData, size_t userDataSize) {
  return FinishMovieMaker(nullptr, pUserData, userDataSize, nullptr, 0,
    static_cast<ImageSize>(g_FinishImageSize));
}

Result FinishMovieMaker(const void* pUserData, size_t userDataSize,
  const void* pImageData, size_t imageDataSize, ImageSize imageSize) {
  return FinishMovieMaker(nullptr, pUserData, userDataSize, pImageData,
    imageDataSize, imageSize);
}

void AbortMovieMaker() {
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(AbortImpl(), "");
}

Result CheckMovieMakerError() {
  Result result;
  const auto impl = [&]() -> Result {
    LockGuard lock(g_MovieMaker.mutex);
    return ConvertMovieMakerResult(
      grc::CheckMovieFileError(g_MovieMaker.context.pLayer));
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), "");
  return result;
}

Result EncodeMovieMakerAudioSample(const void* pBuffer, size_t size) {
  Result result;
  const auto impl = [&]() -> Result {
    size_t offset = 0;
    size_t remaining = size;
    while (remaining > 0) {
      os::WaitSystemEvent(
        &g_MovieMaker.context.movieAudioEncodeReadyEvent);
      size_t encodedSize = 0;
      Result encodeResult;
      {
        LockGuard lock(g_MovieMaker.mutex);
        encodeResult = ConvertMovieMakerResult(grc::EncodeMovieAudioSample(
          &encodedSize, g_MovieMaker.context.pLayer,
          static_cast<const char*>(pBuffer) + offset, remaining));
      }
      offset += encodedSize;
      remaining -= encodedSize;
      if (encodeResult.IsFailure()) {
        return encodeResult;
      }
    }
    return Result{0};
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(),
    ", buffer_size: %zu", size);
  return result;
}

void SetMovieMakerErrorConversionEnabled(bool isEnabled) {
  g_IsMovieMakerErrorConversionEnabled = isEnabled;
}

}
