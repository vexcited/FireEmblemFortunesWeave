#include <stdint.h>

#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/fs/detail/fs_file_data_cache.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_romfs_file_data_cache.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/util/string_util.hpp"

namespace nn::fs::detail {

void RegisterStartAccessLogPrinterCallback(int (*callback)(char*, size_t));

}

#define NN_FS_ACCESS_LOG_GLOBAL(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog()) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, static_cast<const void*>(nullptr), __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

namespace nn::fs {

namespace {

const size_t GlobalFileDataCacheSizeMin = 1024 * 1024;

class GlobalFileDataCacheAccessorHolder {
public:
  GlobalFileDataCacheAccessorHolder() : m_pAccessor(nullptr) {
    os::InitializeReaderWriterLock(&m_Lock);
    m_DefaultCacheSize = 0;
  }

  ~GlobalFileDataCacheAccessorHolder() {
    os::FinalizeReaderWriterLock(&m_Lock);
  }

  detail::FileDataCacheAccessor* m_pAccessor;
  os::ReaderWriterLockType m_Lock;
  size_t m_DefaultCacheSize;
  bool m_IsDefault;
};

GlobalFileDataCacheAccessorHolder& GetGlobalFileDataCacheAccessorHolder() {
  static GlobalFileDataCacheAccessorHolder s_Holder;
  return s_Holder;
}

uintptr_t AlignUp8(uintptr_t address) {
  return (address + 7) & ~static_cast<uintptr_t>(7);
}

Result EnableGlobalFileDataCacheImpl(void* buffer, size_t bufferSize,
  bool isDefault, ReplacementAlgorithm replacementAlgorithm,
  PrefetchAlgorithm prefetchAlgorithm) {
  auto& holder = GetGlobalFileDataCacheAccessorHolder();
  os::AcquireWriteLock(&holder.m_Lock);
  Result result;
  if (buffer == nullptr) {
    result = ResultNullptrArgument();
  }
  else if (bufferSize < GlobalFileDataCacheSizeMin) {
    result = ResultInvalidArgument();
  }
  else if (holder.m_pAccessor != nullptr) {
    result = holder.m_IsDefault ? ResultDefaultGlobalFileDataCacheEnabled()
      : ResultGlobalFileDataCacheAlreadyEnabled();
  }
  else {
    uintptr_t bufferEnd = 0;
    NN_ABORT_UNLESS(!__builtin_add_overflow(
      reinterpret_cast<uintptr_t>(buffer), bufferSize, &bufferEnd));
    const uintptr_t cacheAddress =
      AlignUp8(reinterpret_cast<uintptr_t>(buffer));
    result = ResultFileDataCacheMemorySizeTooSmall();
    if (cacheAddress + sizeof(RomFsFileDataCache) <= bufferEnd) {
      auto cache = new (reinterpret_cast<void*>(cacheAddress))
        RomFsFileDataCache();
      const uintptr_t accessorAddress =
        AlignUp8(cacheAddress + sizeof(RomFsFileDataCache));
      const uintptr_t accessorEnd =
        accessorAddress + sizeof(detail::FileDataCacheAccessor);
      if (accessorEnd <= bufferEnd) {
        auto accessor = new (reinterpret_cast<void*>(accessorAddress))
          detail::FileDataCacheAccessor(cache);
        result = cache->Initialize(reinterpret_cast<void*>(accessorEnd),
          bufferEnd - accessorEnd, replacementAlgorithm, prefetchAlgorithm);
        if (IsSuccess(result)) {
          holder.m_pAccessor = accessor;
          holder.m_DefaultCacheSize = bufferSize;
          holder.m_IsDefault = isDefault;
        }
      }
    }
  }
  os::ReleaseWriteLock(&holder.m_Lock);
  return result;
}

Result DisableGlobalFileDataCacheImpl() {
  auto& holder = GetGlobalFileDataCacheAccessorHolder();
  os::AcquireWriteLock(&holder.m_Lock);
  Result result = ResultSuccess();
  if (holder.m_pAccessor != nullptr) {
    if (holder.m_IsDefault) {
      result = ResultDefaultGlobalFileDataCacheEnabled();
    }
    else {
      holder.m_pAccessor = nullptr;
    }
  }
  os::ReleaseWriteLock(&holder.m_Lock);
  return result;
}

int PrintDefaultGlobalFileDataCacheAccessLog(char* buffer, size_t size) {
  auto& holder = GetGlobalFileDataCacheAccessorHolder();
  os::AcquireReadLock(&holder.m_Lock);
  const size_t cacheSize = holder.m_DefaultCacheSize;
  os::ReleaseReadLock(&holder.m_Lock);
  return util::SNPrintf(buffer, size,
    "FS_ACCESS: { default_global_file_data_cache_size: %zd }\n", cacheSize);
}

}

namespace detail {

bool IsGlobalFileDataCacheEnabled() {
  auto& holder = GetGlobalFileDataCacheAccessorHolder();
  os::AcquireReadLock(&holder.m_Lock);
  const bool isEnabled = holder.m_pAccessor != nullptr;
  os::ReleaseReadLock(&holder.m_Lock);
  return isEnabled;
}

bool TryGetGlobalFileDataCacheAccessor(
  GlobalFileDataCacheAccessorReadableScopedPointer* out) {
  auto& holder = GetGlobalFileDataCacheAccessorHolder();
  os::AcquireReadLock(&holder.m_Lock);
  FileDataCacheAccessor* accessor = holder.m_pAccessor;
  if (accessor != nullptr) {
    out->Set(accessor, &holder.m_Lock);
  }
  else {
    os::ReleaseReadLock(&holder.m_Lock);
  }
  return accessor != nullptr;
}

void SetGlobalFileDataCacheAccessorForDebug(FileDataCacheAccessor* accessor) {
  auto& holder = GetGlobalFileDataCacheAccessorHolder();
  os::AcquireWriteLock(&holder.m_Lock);
  holder.m_pAccessor = accessor;
  holder.m_DefaultCacheSize = 0;
  holder.m_IsDefault = false;
  os::ReleaseWriteLock(&holder.m_Lock);
}

}

void EnableGlobalFileDataCache(void* buffer, size_t bufferSize) {
  Result result;
  NN_FS_ACCESS_LOG_GLOBAL(result,
    EnableGlobalFileDataCacheImpl(buffer, bufferSize, false,
      ReplacementAlgorithm_Default, PrefetchAlgorithm_Default),
    ", size: %zu", bufferSize);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

void DisableGlobalFileDataCache() {
  Result result;
  NN_FS_ACCESS_LOG_GLOBAL(result, DisableGlobalFileDataCacheImpl(), "");
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

void EnableDefaultGlobalFileDataCache(void* buffer, size_t bufferSize) {
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(EnableGlobalFileDataCacheImpl(
    buffer, bufferSize, true, ReplacementAlgorithm_Default,
    PrefetchAlgorithm_Default));
  detail::RegisterStartAccessLogPrinterCallback(
    PrintDefaultGlobalFileDataCacheAccessLog);
}

bool IsDefaultGlobalFileDataCacheEnabled() {
  auto& holder = GetGlobalFileDataCacheAccessorHolder();
  os::AcquireReadLock(&holder.m_Lock);
  const bool isDefault = holder.m_IsDefault;
  const bool isEnabled = holder.m_pAccessor != nullptr;
  os::ReleaseReadLock(&holder.m_Lock);
  return isEnabled && isDefault;
}

void EnableGlobalFileDataCache(void* buffer, size_t bufferSize,
  ReplacementAlgorithm replacementAlgorithm,
  PrefetchAlgorithm prefetchAlgorithm) {
  Result result;
  NN_FS_ACCESS_LOG_GLOBAL(result,
    EnableGlobalFileDataCacheImpl(buffer, bufferSize, false,
      replacementAlgorithm, prefetchAlgorithm), "");
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

}
