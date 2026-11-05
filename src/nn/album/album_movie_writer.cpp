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

constexpr size_t MovieWriterRequiredWorkMemorySize = 0x1000000;
constexpr size_t MovieWriterRequiredWorkMemoryAlignment = 0x1000;
constexpr size_t MovieWriterHeaderSize = 0x40000;
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

struct MovieWriterState {
  bool isInitialized;
  alignas(4) bool isRunning;
  sf::SharedPointer<grcsrv::IMovieWriterService> service;
  RecursiveMutex mutex;
};

uint8_t g_MovieWriterHeader[MovieWriterHeaderSize];
MovieWriterState g_MovieWriter;
bool g_IsMovieWriterErrorConversionEnabled = true;

[[gnu::always_inline]] inline Result ConvertMovieWriterResult(
  Result result) {
  if (g_IsMovieWriterErrorConversionEnabled) {
    return ConvertCapsrvResult(result);
  }
  return result;
}

[[gnu::always_inline]] inline void ResetMovieWriter() {
  g_MovieWriter.isInitialized = false;
  g_MovieWriter.service.Reset();
}

}

size_t GetMovieWriterRequiredWorkMemorySize() {
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(static_cast<void>(0), "");
  return MovieWriterRequiredWorkMemorySize;
}

size_t GetMovieWriterRequiredWorkMemoryAlignment() {
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(static_cast<void>(0), "");
  return MovieWriterRequiredWorkMemoryAlignment;
}

bool IsMovieWriterInitialized() {
  bool isInitialized;
  const auto impl = [&]() {
    LockGuard lock(g_MovieWriter.mutex);
    isInitialized = g_MovieWriter.isInitialized;
  };
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(impl(), "");
  return isInitialized;
}

bool IsMovieWriterRunning() {
  bool isRunning;
  const auto impl = [&]() {
    LockGuard lock(g_MovieWriter.mutex);
    isRunning = g_MovieWriter.isInitialized && g_MovieWriter.isRunning;
  };
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(impl(), "");
  return isRunning;
}

inline auto MakeInitializeMovieWriterImpl(void* pWorkMemory,
  size_t workMemorySize) {
  return [=]() -> Result {
    for (;;) {
      LockGuard lock(g_MovieWriter.mutex);
      ScopedTransferMemory transferMemory;
      NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(
        transferMemory.Get(), pWorkMemory, workMemorySize,
        os::MemoryPermission_None));
      sf::SharedPointer<grcsrv::IMovieWriterService> service;
      const Result createResult =
        am::service::GetApplicationFunctionsObject()->CreateMovieWriter(
          sf::Out<sf::SharedPointer<grcsrv::IMovieWriterService>>(&service),
          sf::NativeHandle(os::DetachTransferMemory(transferMemory.Get()),
            true), workMemorySize);
      if (createResult.IsFailure()) {
        if (createResult.GetInnerValueForDebug() ==
          (ResultModuleGrc | 4 << 9)) {
          os::SleepThread(TimeSpan{100000000});
          continue;
        }
        return ConvertMovieWriterResult(createResult);
      }
      sf::SharedPointer<grcsrv::IMovieWriter> movieWriter;
      NN_RESULT_DO(ConvertMovieWriterResult(service->CreateMovieWriter(
        sf::Out<sf::SharedPointer<grcsrv::IMovieWriter>>(&movieWriter))));
      NN_RESULT_DO(ConvertMovieWriterResult(
        movieWriter->SetShimLibraryVersion(capsrv::GetShimLibraryVersion())));
      NN_ABORT_UNLESS_RESULT_SUCCESS(grc::InitializeForMovieWriter(
        static_cast<sf::SharedPointer<grcsrv::IMovieWriter>&&>(movieWriter)));
      g_MovieWriter.isInitialized = true;
      g_MovieWriter.isRunning = false;
      NN_RESULT_DO(ConvertMovieWriterResult(Result{0}));
      g_MovieWriter.service = service;
      return Result{0};
    }
  };
}

Result InitializeMovieWriter(void* pWorkMemory, size_t workMemorySize) {
  Result result;
  const auto impl = MakeInitializeMovieWriterImpl(pWorkMemory,
    workMemorySize);
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), "");
  return result;
}

void FinalizeMovieWriter() {
  const auto impl = []() {
    LockGuard lock(g_MovieWriter.mutex);
    bool isInitialized;
    {
      LockGuard innerLock(g_MovieWriter.mutex);
      isInitialized = g_MovieWriter.isInitialized;
    }
    if (isInitialized) {
      g_MovieWriter.isInitialized = false;
      grc::FinalizeForMovieWriter();
      g_MovieWriter.service.Reset();
    }
  };
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(impl(), "");
}

Result PrecheckToStartMovieWriter(size_t size) {
  Result result;
  const auto impl = [&]() -> Result {
    LockGuard lock(g_MovieWriter.mutex);
    g_LibraryState.EnsureAlbumAvailable();
    return ConvertCapsrvResult(
      capsrv::PrecheckToCreateContentsForApplication(ContentsMovie, size));
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), ", size: %lu", size);
  return result;
}

Result StartMovieWriter(const MovieWriterMovieParameter& parameter) {
  Result result;
  const auto impl = [=]() -> Result {
    LockGuard lock(g_MovieWriter.mutex);
    grc::MovieWriterParameter grcParameter;
    memcpy(&grcParameter, &parameter, sizeof(grcParameter));
    const Result startResult = ConvertMovieWriterResult(
      grc::StartMovieWriter(grcParameter));
    if (startResult.IsSuccess()) {
      g_MovieWriter.isRunning = true;
      memset(g_MovieWriterHeader, 0, sizeof(g_MovieWriterHeader));
    }
    return startResult;
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), "");
  return result;
}

Result WriteMp4DataToMovieWriter(size_t offset, const void* pData,
  size_t size) {
  Result result;
  const auto impl = [&]() -> Result {
    LockGuard lock(g_MovieWriter.mutex);
    size_t currentOffset = offset;
    const char* pCurrent = static_cast<const char*>(pData);
    size_t remaining = size;
    if (currentOffset < MovieWriterHeaderSize) {
      const size_t headerSize =
        remaining < MovieWriterHeaderSize - currentOffset ? remaining :
          MovieWriterHeaderSize - currentOffset;
      memcpy(g_MovieWriterHeader + currentOffset, pCurrent, headerSize);
      currentOffset += headerSize;
      pCurrent += headerSize;
      remaining -= headerSize;
    }
    if (remaining == 0) {
      return Result{0};
    }
    return ConvertMovieWriterResult(grc::WriteMp4Data(currentOffset,
      pCurrent, remaining));
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), ", offset: %zu, size: %zu",
    offset, size);
  return result;
}

Result FinishMovieWriter(AlbumFileEntry* pOutEntry, const void* pUserData,
  size_t userDataSize, const void* pImageData, size_t imageDataSize,
  ImageSize imageSize) {
  Result result;
  const auto impl = [=]() -> Result {
    LockGuard lock(g_MovieWriter.mutex);
    Result finishResult = ConvertMovieWriterResult(grc::WriteMp4Data(0,
      g_MovieWriterHeader, sizeof(g_MovieWriterHeader)));
    if (finishResult.IsFailure()) {
      return finishResult;
    }
    finishResult = grc::RequestFinishMovieWriter();
    if (finishResult.IsSuccess()) {
      capsrv::ApplicationAlbumEntry entry;
      finishResult = grc::CompleteFinishMovieWriter(&entry,
        sf::InBuffer(pUserData, userDataSize),
        sf::InBuffer(pImageData, imageDataSize), imageSize);
      if (finishResult.IsSuccess()) {
        g_MovieWriter.isRunning = false;
        if (pOutEntry != nullptr) {
          *pOutEntry = ConvertAlbumEntry::ConvertToAlbum(entry);
        }
        return Result{0};
      }
    }
    NN_ABORT_UNLESS_RESULT_SUCCESS(grc::AbortMovieWriter());
    ResetMovieWriter();
    return ConvertMovieWriterResult(finishResult);
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(),
    ", user_data_buffer_size: %zu, image_data_size: %zu, width: %d, "
    "height: %d", userDataSize, imageDataSize, GetImageWidth(imageSize),
    GetImageHeight(imageSize));
  return result;
}

void AbortMovieWriter() {
  const auto impl = []() {
    LockGuard lock(g_MovieWriter.mutex);
    NN_ABORT_UNLESS_RESULT_SUCCESS(grc::AbortMovieWriter());
    ResetMovieWriter();
  };
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(impl(), "");
}

Result CheckMovieWriterError() {
  Result result;
  const auto impl = []() -> Result {
    LockGuard lock(g_MovieWriter.mutex);
    return ConvertMovieWriterResult(grc::CheckMovieWriterError());
  };
  NN_ALBUM_DETAIL_ACCESS_LOG(result, impl(), "");
  return result;
}

void SetMovieWriterErrorConversionEnabled(bool isEnabled) {
  g_IsMovieWriterErrorConversionEnabled = isEnabled;
}

}
