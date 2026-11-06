#include <algorithm>

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/err/err_types.hpp"
#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_data.hpp"
#include "nn/fs/fs_file.hpp"
#include "nn/fs/fs_filesystem.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/util/util_format_string.hpp"

namespace nn::fs {

void Unmount(const char* name);
Result OpenDirectory(DirectoryHandle* outHandle, const char* path, int mode);
void CloseDirectory(DirectoryHandle handle);

}

namespace nn::err {

struct ErrorMessageDatabaseVersion {
  uint32_t value;
};

}

namespace nn::err::detail {

enum MessageKind : uint8_t {
  MessageKind_DialogMessage,
  MessageKind_DialogButton,
  MessageKind_FullScreenMessage,
  MessageKind_FullScreenButton,
};

enum ButtonKind : uint8_t {
  ButtonKind_Ok,
  ButtonKind_Close,
  ButtonKind_Detail,
};

template <typename T>
void ReadErrorCodeMessageFile(int* pOutLength, T* buffer, size_t count,
  ErrorCode errorCode, settings::LanguageCode languageCode, MessageKind kind);
template <typename T>
void ReadButtonMessageFile(T* buffer, size_t count,
  const settings::LanguageCode& languageCode, ButtonKind kind);
void MakeErrorInfoCommonFilePath(char* buffer, size_t size,
  ErrorCode errorCode);
bool MountErrorMessageSystemData(ErrorMessageDatabaseType type);
void UnmountErrorMessageSystemData();
bool ErrorMessageDataExists(ErrorCode errorCode);
bool DefaultErrorMessageDataExists(uint32_t category);

[[gnu::visibility("hidden")]]
extern const char* const MessageKindNames[] = {
  "DlgMsg",
  "DlgBtn",
  "FlvMsg",
  "FlvBtn",
};

[[gnu::visibility("hidden")]]
extern const char* const ButtonKindNames[] = {
  "Ok",
  "Close",
  "Detail",
};

namespace {

const char MountName[] = "err";
const size_t PathLengthMax = 32;

// Messages missing in the requested language fall back to English.
const settings::LanguageCode DefaultLanguageCode = {"en-US"};

constexpr Result ResultPathNotFound = {0x202};

inline bool IsPathNotFound(Result result) {
  return result.GetInnerValueForDebug() == ResultPathNotFound.value;
}

inline ncm::SystemDataId GetSystemDataId(ErrorMessageDatabaseType type) {
  return ncm::SystemDataId{type != 0 ? 0x0400000000000835ull :
    0x0400000000000801ull};
}

inline Result MountSystemData(ErrorMessageDatabaseType type) {
  return fs::MountSystemData(MountName, GetSystemDataId(type));
}

inline const char* GetMessageKindName(MessageKind kind) {
  if (kind > MessageKind_FullScreenButton) {
    nn::detail::UnexpectedDefaultImpl();
  }
  return MessageKindNames[kind];
}

inline const char* GetButtonKindName(ButtonKind kind) {
  if (kind > ButtonKind_Detail) {
    nn::detail::UnexpectedDefaultImpl();
  }
  return ButtonKindNames[kind];
}

inline bool FileExists(const char* path) {
  fs::DirectoryEntryType type = fs::DirectoryEntryType_Directory;
  return fs::GetEntryType(&type, path).IsSuccess() &&
    type == fs::DirectoryEntryType_File;
}

[[gnu::noinline]] void MakeErrorCodeMessageFilePath(
  char (&path)[PathLengthMax], ErrorCode errorCode,
  settings::LanguageCode languageCode, MessageKind kind) {
  const char* kindName = GetMessageKindName(kind);
  util::TSNPrintf(path, sizeof(path), "%s:/%04u/%04u/%s_%s", MountName,
    errorCode.category, errorCode.number, languageCode.string, kindName);
  if (!FileExists(path)) {
    languageCode = DefaultLanguageCode;
    util::TSNPrintf(path, sizeof(path), "%s:/%04u/%04u/%s_%s", MountName,
      errorCode.category, errorCode.number, languageCode.string, kindName);
  }
}

[[gnu::noinline]] void MakeButtonMessageFilePath(
  char (&path)[PathLengthMax], settings::LanguageCode languageCode,
  ButtonKind kind) {
  const char* kindName = GetButtonKindName(kind);
  util::TSNPrintf(path, sizeof(path), "%s:/Messages/%s_%s", MountName,
    languageCode.string, kindName);
  if (!FileExists(path)) {
    languageCode = DefaultLanguageCode;
    util::TSNPrintf(path, sizeof(path), "%s:/Messages/%s_%s", MountName,
      languageCode.string, kindName);
  }
}

template <typename T>
size_t ReadMessageFile(fs::FileHandle file, T* buffer, size_t count) {
  size_t readSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    fs::ReadFile(&readSize, file, 0, buffer, count * sizeof(T)));
  const size_t length = std::min(readSize / sizeof(T), count - 1);
  buffer[length] = 0;
  return length;
}

inline bool DirectoryExists(const char* path) {
  fs::DirectoryHandle directory = {};
  const Result result = fs::OpenDirectory(&directory, path, 1);
  if (IsPathNotFound(result)) {
    return false;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  fs::CloseDirectory(directory);
  return true;
}

}

template <typename T>
void ReadErrorCodeMessageFile(int* pOutLength, T* buffer, size_t count,
  ErrorCode errorCode, settings::LanguageCode languageCode,
  MessageKind kind) {
  char path[PathLengthMax] = {};
  MakeErrorCodeMessageFilePath(path, errorCode, languageCode, kind);
  fs::FileHandle file = {};
  const Result result = fs::OpenFile(&file, path, fs::OpenMode_Read);
  if (IsPathNotFound(result)) {
    *pOutLength = 0;
    buffer[0] = 0;
    return;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  *pOutLength = static_cast<int>(ReadMessageFile(file, buffer, count));
  fs::CloseFile(file);
}

template void ReadErrorCodeMessageFile<char16_t>(int* pOutLength,
  char16_t* buffer, size_t count, ErrorCode errorCode,
  settings::LanguageCode languageCode, MessageKind kind);
template void ReadErrorCodeMessageFile<char>(int* pOutLength, char* buffer,
  size_t count, ErrorCode errorCode, settings::LanguageCode languageCode,
  MessageKind kind);

template <typename T>
void ReadButtonMessageFile(T* buffer, size_t count,
  const settings::LanguageCode& languageCode, ButtonKind kind) {
  char path[PathLengthMax] = {};
  MakeButtonMessageFilePath(path, languageCode, kind);
  fs::FileHandle file = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    fs::OpenFile(&file, path, fs::OpenMode_Read));
  ReadMessageFile(file, buffer, count);
  fs::CloseFile(file);
}

template void ReadButtonMessageFile<char16_t>(char16_t* buffer, size_t count,
  const settings::LanguageCode& languageCode, ButtonKind kind);
template void ReadButtonMessageFile<char>(char* buffer, size_t count,
  const settings::LanguageCode& languageCode, ButtonKind kind);

void MakeErrorInfoCommonFilePath(char* buffer, size_t size,
  ErrorCode errorCode) {
  util::TSNPrintf(buffer, size, "%s:/%04u/%04u/common", MountName,
    errorCode.category, errorCode.number);
}

bool MountErrorMessageSystemData(ErrorMessageDatabaseType type) {
  return MountSystemData(type).IsSuccess();
}

void UnmountErrorMessageSystemData() {
  fs::Unmount(MountName);
}

bool ErrorMessageDataExists(ErrorCode errorCode) {
  char path[PathLengthMax] = {};
  util::TSNPrintf(path, sizeof(path), "%s:/%04u/%04u", MountName,
    errorCode.category, errorCode.number);
  return DirectoryExists(path);
}

bool DefaultErrorMessageDataExists(uint32_t category) {
  char path[PathLengthMax] = {};
  util::TSNPrintf(path, sizeof(path), "%s:/%04u/%04u", MountName, category,
    9999);
  return DirectoryExists(path);
}

void ReadVersion(ErrorMessageDatabaseVersion* pOutVersion,
  ErrorMessageDatabaseType type) {
  if (MountSystemData(type).IsFailure()) {
    return;
  }
  char path[PathLengthMax] = {};
  util::TSNPrintf(path, sizeof(path), "%s:/DatabaseInfo", MountName);
  fs::FileHandle file = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    fs::OpenFile(&file, path, fs::OpenMode_Read));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    fs::ReadFile(file, 0, pOutVersion, sizeof(*pOutVersion)));
  fs::CloseFile(file);
  fs::Unmount(MountName);
}

}
