#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/fs/detail/fs_access_log.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_context.hpp"
#include "nn/util/util_format_string.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::fs {

namespace {

bool g_IsResultHandledByApplication = false;
bool g_IsAbortByHostAccessFailedDisabled = false;

inline bool IsResultHandledByAllProcess(Result result) {
  return (result.value & 0x1FF) == 2 && ((result.value >> 9) & 0x1FFF) < 1000;
}

inline bool IsResultHandledBySystemProcess(Result result) {
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return (result.value & 0x1FF) == 2 && description >= 1000 &&
    description < 3000;
}

inline bool IsHtcAccessFailedResult(Result result) {
  const uint32_t module = result.value & 0x1FF;
  return module < 32 && ((1u << module) & 0xA0040000) != 0;
}

inline Result DisableAbortByHostAccessFailedImpl() {
  g_IsAbortByHostAccessFailedDisabled = true;
  return ResultSuccess();
}

}

void SetResultHandledByApplication(bool isHandled) {
  g_IsResultHandledByApplication = isHandled;
}

void DisableAbortByHostAccessFailed() {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, DisableAbortByHostAccessFailedImpl(),
    "");
}

namespace detail {

bool IsAbortNeeded(Result result) {
  if (result.IsSuccess()) {
    return false;
  }

  switch (GetCurrentThreadFsContext()->GetHandler()(result)) {
    case AbortSpecifier::Default:
      break;
    case AbortSpecifier::Abort:
      return true;
    case AbortSpecifier::Return:
      return false;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  if (g_IsAbortByHostAccessFailedDisabled &&
    IsHtcAccessFailedResult(result)) {
    return false;
  }

  if (g_IsResultHandledByApplication) {
    return !IsResultHandledByAllProcess(result);
  }
  if (IsResultHandledByAllProcess(result)) {
    return false;
  }
  return !IsResultHandledBySystemProcess(result);
}

bool IsResultHtcAccessFailed(Result result) {
  return IsHtcAccessFailedResult(result);
}

namespace {

inline bool IsResultInRange(Result result, uint32_t module, uint32_t begin,
  uint32_t end) {
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return (result.value & 0x1FF) == module && description >= begin &&
    description < end;
}

inline bool IsFsResultInRange(Result result, uint32_t begin, uint32_t end) {
  return IsResultInRange(result, 2, begin, end);
}

inline bool IsFsResult(Result result, uint32_t description) {
  return IsResultIncluded(result, MakeResult(description));
}

constexpr const char* ErrorMessageFormat = "Error: nn::fs::%s() %s.\n";

#define NN_FS_DETAIL_LOG_ERROR_MESSAGE(message) \
  [functionName]() __attribute__((noinline)) { \
    if (IsEnabledAccessLog()) { \
      OutputAccessLogToOnlySdCard(ErrorMessageFormat, functionName, \
        message); \
    } \
  }()

#define NN_FS_DETAIL_LOG_ERROR_MESSAGE_INLINE(message) \
  do { \
    if (IsEnabledAccessLog()) { \
      OutputAccessLogToOnlySdCard(ErrorMessageFormat, functionName, \
        message); \
    } \
  } while (0)

#define NN_FS_DETAIL_LOG_LITERAL(literal) \
  do { \
    const char fsLiteral_[] = literal; \
    if (IsEnabledAccessLog()) { \
      OutputAccessLogToOnlySdCardWithLength(fsLiteral_, \
        sizeof(fsLiteral_) - 1); \
    } \
  } while (0)

bool LogResultMessage(Result result, const char* functionName) {
  if (IsResultInRange(result, 10, 10, 20)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE_INLINE("failed to allocate memory");
  }
  else if (IsResultIncluded(result, Result{1u | 106u << 9})) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE_INLINE(
      "failed because Passed buffer is not usable for fs library.\n"
      "Refer to 'Troubleshooting (NX Add-On)' in NintendoSDK Documents");
  }
  else if (IsHtcAccessFailedResult(result)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE_INLINE("failed to access the HOST PC");
  }
  else if (IsFsResult(result, 1002)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE_INLINE("did not find the target");
  }
  else if (IsFsResult(result, 1001)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE_INLINE("did not find the partition");
  }
  else if (IsFsResultInRange(result, 2000, 2500)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed to access the SD Card");
  }
  else if (IsFsResultInRange(result, 2500, 3000)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed to access the Game Card");
  }
  else if (IsFsResult(result, 3001)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation is not implemented");
  }
  else if (IsFsResult(result, 3003)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the target already exists");
  }
  else if (IsFsResult(result, 3005)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operating range was out of scope");
  }
  else if (IsFsResultInRange(result, 3200, 3500)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed to allocate memory");
  }
  else if (IsFsResultInRange(result, 3500, 4000)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed to access the System Memory (the Internal Storage)");
  }
  else if (IsFsResultInRange(result, 4241, 4260)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the HOST PC was unexpected status");
  }
  else if (IsFsResultInRange(result, 4001, 4300)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the ROM or the AddOnContent was corrupted");
  }
  else if (IsFsResultInRange(result, 4441, 4450)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the HOST PC was unexpected status");
  }
  else if (IsFsResultInRange(result, 4301, 4500)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the SaveData, the CacheStorage, or the "
      "TemporaryStorage was corrupted");
  }
  else if (IsFsResultInRange(result, 4501, 4600)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the NCA was corrupted");
  }
  else if (IsFsResultInRange(result, 4681, 4700)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the file system was corrupted");
  }
  else if (IsFsResultInRange(result, 4701, 4720)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the HOST PC was unexpected status");
  }
  else if (IsFsResult(result, 4781)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the logo data of the Game Card was corrupted");
  }
  else if (IsFsResultInRange(result, 4000, 5000)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the data was corrupted");
  }
  else if (IsFsResultInRange(result, 5000, 6000)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because an unexpected error occurred");
  }
  else if (IsFsResult(result, 6003)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the path was too long");
  }
  else if (IsFsResult(result, 6004)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because of invalid character in the path");
  }
  else if (IsFsResult(result, 6005)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the path was invalid format");
  }
  else if (IsFsResult(result, 6006)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the directory was unobtainable");
  }
  else if (IsFsResult(result, 6007)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the path could not be normalized");
  }
  else if (IsFsResultInRange(result, 6002, 6030)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the path was invalid");
  }
  else if (IsFsResultInRange(result, 6030, 6060)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation was invalid on the path");
  }
  else if (IsFsResult(result, 6061)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the offset was invalid");
  }
  else if (IsFsResult(result, 6062)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the size was invalid");
  }
  else if (IsFsResult(result, 6063)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because of Null pointer argument");
  }
  else if (IsFsResult(result, 6064)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because of invalid alignment");
  }
  else if (IsFsResult(result, 6065)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the mount name was invalid");
  }
  else if (IsFsResult(result, 6066)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the extension size exceeded the max value set in "
      "nmeta file");
  }
  else if (IsFsResult(result, 6067)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the extension size was not a multiple of "
      "nn::fs::SaveDataExtensionUnitSize");
  }
  else if (IsFsResult(result, 6068)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the handle was invalid");
  }
  else if (IsFsResult(result, 6069)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the CacheStorage size was too large");
  }
  else if (IsFsResult(result, 6070)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the CacheStorage index was too large");
  }
  else if (IsFsResult(result, 6071)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the number of mount names was invalid");
  }
  else if (IsFsResult(result, 6072)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the file open mode was invalid");
  }
  else if (IsFsResult(result, 6073)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the file size was too large");
  }
  else if (IsFsResult(result, 6074)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the directory open mode was invalid");
  }
  else if (IsFsResult(result, 6075)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the commit option was invalid");
  }
  else if (IsFsResultInRange(result, 6080, 6100)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because of invalid enum value");
  }
  else if (IsFsResult(result, 6101)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the logo data of the Game Card was too large");
  }
  else if (IsFsResult(result, 6102)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the memory size of File Data Cache was too small");
  }
  else if (IsFsResultInRange(result, 6001, 6200)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because of invalid argument");
  }
  else if (IsFsResult(result, 6201)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation tried to extend the file that was "
      "opened without nn::fs::OpenMode_AllowAppend");
  }
  else if (IsFsResult(result, 6202)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the read operation was unpermitted");
  }
  else if (IsFsResult(result, 6203)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the write operation was unpermitted");
  }
  else if (IsFsResultInRange(result, 6200, 6300)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation was illegal for the open mode");
  }
  else if (IsFsResultInRange(result, 6300, 6400)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation is unsupported");
  }
  else if (IsFsResultInRange(result, 6400, 6450)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because of permission denied");
  }
  else if (IsFsResult(result, 6454)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the file was not flushed");
  }
  else if (IsFsResult(result, 6455)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because not all files were closed");
  }
  else if (IsFsResult(result, 6456)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because not all directories were closed");
  }
  else if (IsFsResult(result, 6457)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because there was a file opened with write mode");
  }
  else if (IsFsResult(result, 6458)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because an allocator was already registered");
  }
  else if (IsFsResult(result, 6459)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because an allocator was already used.\n"
      "It's strongly recommended to invoke nn::fs::SetAllocator() in "
      "nninitStartup()");
  }
  else if (IsFsResult(result, 6460)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the logo data of the Game Card was invalid");
  }
  else if (IsFsResult(result, 6461)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the memory allocated by the allocator was invalid "
      "alignment");
  }
  else if (IsFsResult(result, 6462)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because Global File Data Cache was already enabled");
  }
  else if (IsFsResult(result, 6463)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because there were overlapping targets in the argument of "
      "nn::fs::Commit()");
  }
  else if (IsFsResult(result, 6464)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the multi-commit operation ran while a multi-commit "
      "operation ran");
  }
  else if (IsFsResult(result, 6465)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because the user did not exist");
  }
  else if (IsFsResult(result, 6466)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because Default Global File Data Cache was enabled. You "
      "cannot manually enable or disable Global File Data Cache now");
  }
  else if (IsFsResult(result, 6467)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the path specified by nn::fs::SetSaveDataRootPath() "
      "was unavailable");
  }
  else if (IsFsResult(result, 6468)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the path specified by nn::fs::SetBisRootForHost() "
      "was unavailable");
  }
  else if (IsFsResult(result, 6469)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the path specified as system root path was "
      "unavailable");
  }
  else if (IsFsResult(result, 6470)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the size of simultaneously mount ROM targets reached "
      "the limitation");
  }
  else if (IsFsResult(result, 6471)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the number of simultaneously mount ROM targets "
      "reached the limitation");
  }
  else if (IsFsResult(result, 6472)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the size of simultaneously mount AddOnContent "
      "targets reached the limitation");
  }
  else if (IsFsResultInRange(result, 6000, 6500)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because of precondition violation");
  }
  else if (IsFsResult(result, 6602)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("did not find the file");
  }
  else if (IsFsResult(result, 6603)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("did not find the directory");
  }
  else if (IsFsResult(result, 6606)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("did not find the program index");
  }
  else if (IsFsResultInRange(result, 6600, 6700)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("did not find the target");
  }
  else if (IsFsResult(result, 6706)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because there was not enough space left on the journaling "
      "area");
  }
  else if (IsFsResult(result, 6709)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the number of simultaneously open files and "
      "directories reached the limitation");
  }
  else if (IsFsResult(result, 6710)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the number of targets in the argument of "
      "nn::fs::Commit() reached the limitation");
  }
  else if (IsFsResultInRange(result, 6700, 6800)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation was out of resource");
  }
  else if (IsFsResult(result, 6811)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the number of the Save Data extension times reached "
      "the limitation");
  }
  else if (IsFsResult(result, 6905)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the mount name was not mounted");
  }
  else if (IsFsResult(result, 6906)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation ran while extending the Save Data");
  }
  else if (IsFsResult(result, 6907)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the operation ran while a multi-commit operation ran");
  }
  else if (IsFsResultInRange(result, 6900, 7000)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE("failed because of bad state");
  }
  else if (IsFsResultInRange(result, 7100, 7140)) {
    NN_FS_DETAIL_LOG_ERROR_MESSAGE(
      "failed because the RamDisk was corrupted");
  }
  else {
    return false;
  }
  return true;
}

void LogResultErrorMessage(Result result, const char* functionName,
  const char* message, size_t messageLength) {
  if (result.IsSuccess()) {
    return;
  }

  bool isLogged = true;
  if (message != nullptr) {
    if (IsEnabledAccessLog()) {
      OutputAccessLogToOnlySdCardWithLength(message, messageLength);
    }
  }
  else {
    isLogged = LogResultMessage(result, functionName);
  }

  if (isLogged && (IsResultHandledBySystemProcess(result) ||
    IsFsResultInRange(result, 3000, 8000))) {
    if (IsEnabledAccessLog()) {
      OutputAccessLogToOnlySdCard(
        "Search '2002-%04d' on the following Error Code List for more "
        "information.\n", (result.value >> 9) & 0x1FFF);
    }
    NN_FS_DETAIL_LOG_LITERAL(
      "https://developer.nintendo.com/html/online-docs/g1kr9vj6-ja/"
      "Packages/Docs/Lists/ErrorCodeList/NintendoSwitch-ErrorCodeList-ja/"
      "2002.html\n");
    NN_FS_DETAIL_LOG_LITERAL(
      "https://developer.nintendo.com/html/online-docs/g1kr9vj6-en/"
      "Packages/Docs/lists/NintendoSwitch-ErrorCodeList/2002.html\n\n");
  }

  // The original calls this for its side effect and drops the result.
  if (!g_IsResultHandledByApplication) {
    static_cast<void>(IsEnabledAccessLog(2u));
  }

  if (isLogged && IsEnabledAccessLog()) {
    FlushAccessLogOnSdCard();
  }
}

}

void LogResultErrorMessage(Result result, const char* functionName) {
  LogResultErrorMessage(result, functionName, nullptr, 0);
}

void LogErrorMessage(Result result, const char* format, ...) {
  const int BufferSize = 1024;
  char* buffer = static_cast<char*>(Allocate(BufferSize));
  if (buffer == nullptr) {
    NN_FS_DETAIL_LOG_LITERAL("Error: Log output failed to allocate memory.\n");
    if (IsEnabledAccessLog()) {
      FlushAccessLogOnSdCard();
    }
    return;
  }

  va_list args;
  va_start(args, format);
  int length = util::VSNPrintf(buffer, BufferSize, format, args);
  va_end(args);
  if (length >= BufferSize) {
    length = BufferSize - 1;
    buffer[BufferSize - 2] = '\n';
  }

  LogResultErrorMessage(result, nullptr, buffer, length);
  Deallocate(buffer, BufferSize);
}

}

}
