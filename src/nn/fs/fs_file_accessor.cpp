#include "nn/fs/detail/fs_file_system_accessor.hpp"

#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_path_based_file_data_cache.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"

namespace nn::fs::detail {

namespace {

constexpr Result ResultNeedFlush() {
  return MakeResult(6454);
}

inline bool IsResultNotEnoughFreeSpace(Result result) {
  const uint32_t module = result.value & 0x1FF;
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return module == 2 && description >= 30 && description < 46;
}

#define NN_FS_FILE_ACCESS_LOG(result, handle, expression, name, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog(handle)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, name, \
        handle, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_READ_FILE_LOG_FORMAT ", offset: %ld, size: %zu, read_size: %zu"

class WriteStateSetter {
public:
  explicit WriteStateSetter(WriteState* state)
    : m_pState(state), m_State(WriteState_Failed) {}

  ~WriteStateSetter() {
    *m_pState = m_State;
  }

  void Set(WriteState state) {
    m_State = state;
  }

private:
  WriteState* m_pState;
  WriteState m_State;
};

}

FileAccessor::FileAccessor(std::unique_ptr<fsa::IFile>&& file,
  FileSystemAccessor* parent, int mode)
  : m_Impl(std::move(file)), m_pParent(parent),
    m_WriteState(WriteState_None), m_LastResult(ResultSuccess()),
    m_OpenMode(mode), m_FilePathHash() {}

FileAccessor::~FileAccessor() {
  if (IsSuccess(m_LastResult) && m_WriteState == WriteState_NeedsFlush) {
    const Result result = ResultNeedFlush();
    LogErrorMessage(result, "Error: nn::fs::CloseFile() failed because the "
      "file was not flushed.\n");
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  if (m_pParent != nullptr) {
    m_pParent->NotifyCloseFile(this);
  }
  m_Impl.reset();
}

Result FileAccessor::Read(size_t* outSize, int64_t offset, void* buffer,
  size_t size, const ReadOption& option) {
  FileHandle handle = { this };
  if (IsFailure(m_LastResult)) {
    return [&]() __attribute__((noinline)) {
      Result result;
      NN_FS_FILE_ACCESS_LOG(result, handle, m_LastResult, "ReadFile",
        NN_FS_READ_FILE_LOG_FORMAT, offset, size,
        IsSuccess(result) && outSize != nullptr ? *outSize : 0);
      return result;
    }();
  }

  const bool usePathCache =
    m_pParent != nullptr && m_FilePathHash != nullptr;
  const bool useDataCache = IsGlobalFileDataCacheEnabled() &&
    m_pParent != nullptr && m_pParent->IsFileDataCacheAttachable();
  if (usePathCache || useDataCache) {
    return ReadWithCacheAccessLog(outSize, offset, buffer, size, option,
      usePathCache, useDataCache);
  }

  Result result;
  NN_FS_FILE_ACCESS_LOG(result, handle,
    m_Impl->Read(outSize, offset, buffer, size, option), "ReadFile",
    NN_FS_READ_FILE_LOG_FORMAT, offset, size,
    IsSuccess(result) && outSize != nullptr ? *outSize : 0);
  return result;
}

Result FileAccessor::ReadWithoutCacheAccessLog(size_t* outSize,
  int64_t offset, void* buffer, size_t size, const ReadOption& option) {
  return m_Impl->Read(outSize, offset, buffer, size, option);
}

Result FileAccessor::Write(int64_t offset, const void* buffer, size_t size,
  const WriteOption& option) {
  NN_FS_RESULT_DO(m_LastResult);

  WriteStateSetter setter(&m_WriteState);
  if (m_FilePathHash != nullptr) {
    NN_FS_RESULT_DO(UpdateLastResult(WriteViaPathBasedFileDataCache(
      m_Impl.get(), m_OpenMode, m_pParent, *m_FilePathHash, m_PathHashIndex,
      offset, buffer, size, option)));
  }
  else {
    NN_FS_RESULT_DO(UpdateLastResult(
      m_Impl->Write(offset, buffer, size, option)));
  }
  setter.Set(option.HasFlushFlag() ? WriteState_None : WriteState_NeedsFlush);
  return ResultSuccess();
}

Result FileAccessor::UpdateLastResult(Result result) {
  if (!IsResultNotEnoughFreeSpace(result)) {
    m_LastResult = result;
  }
  return result;
}

Result FileAccessor::Flush() {
  NN_FS_RESULT_DO(m_LastResult);

  WriteStateSetter setter(&m_WriteState);
  NN_FS_RESULT_DO(UpdateLastResult(m_Impl->Flush()));
  setter.Set(WriteState_None);
  return ResultSuccess();
}

Result FileAccessor::SetSize(int64_t size) {
  NN_FS_RESULT_DO(m_LastResult);

  const WriteState oldWriteState = m_WriteState;
  WriteStateSetter setter(&m_WriteState);
  if (m_FilePathHash != nullptr) {
    auto cacheLock = LockPathBasedFileDataCacheEntries();
    NN_FS_RESULT_DO(UpdateLastResult(m_Impl->SetSize(size)));
    InvalidatePathBasedFileDataCacheEntry(m_pParent, *m_FilePathHash,
      m_PathHashIndex);
  }
  else {
    NN_FS_RESULT_DO(UpdateLastResult(m_Impl->SetSize(size)));
  }
  setter.Set(oldWriteState);
  return ResultSuccess();
}

Result FileAccessor::GetSize(int64_t* outSize) {
  NN_FS_RESULT_DO(m_LastResult);
  return m_Impl->GetSize(outSize);
}

int FileAccessor::GetOpenMode() const {
  return m_OpenMode;
}

WriteState FileAccessor::GetWriteState() {
  return m_WriteState;
}

Result FileAccessor::OperateRange(void* outBuffer, size_t outBufferSize,
  OperationId operationId, int64_t offset, int64_t size,
  const void* inBuffer, size_t inBufferSize) {
  return m_Impl->OperateRange(outBuffer, outBufferSize, operationId, offset,
    size, inBuffer, inBufferSize);
}

void FileAccessor::SetFilePathHash(
  std::unique_ptr<FilePathHash>&& filePathHash, int index) {
  m_FilePathHash = std::move(filePathHash);
  m_PathHashIndex = index;
}

}
