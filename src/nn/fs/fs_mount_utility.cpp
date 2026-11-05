#include <string.h>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/util/string_util.hpp"

namespace nn::util {

bool IsValidUtf8String(const char* string, size_t length);

}

namespace nn::fs {

namespace detail {

namespace {

#define NN_FS_HOST_ROOT_FILE_SYSTEM_MOUNT_NAME "@Host"

const char ReservedMountNamePrefix = '@';

struct MountName {
  char str[MountNameLengthMax + 1];
};

bool IsAsciiAlphabet(char c) {
  return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

Result GetMountNameAndSubPath(MountName* outMountName,
  const char** outSubPath, const char* path) {
  if (IsWindowsDrive(path) || IsUncPath(path)) {
    strcpy(outMountName->str, NN_FS_HOST_ROOT_FILE_SYSTEM_MOUNT_NAME);
    *outSubPath = path;
    return ResultSuccess();
  }

  NN_FS_RESULT_THROW_UNLESS(path[0] != '\0' && path[0] != ':' &&
    path[1] != '\0', ResultInvalidMountName());

  size_t length = 0;
  for (size_t i = 1; i <= MountNameLengthMax; ++i) {
    if (path[i] == ':') {
      length = i;
      break;
    }
    if (path[i] == '\0') {
      break;
    }
  }
  NN_FS_RESULT_THROW_UNLESS(length != 0, ResultInvalidMountName());

  const char* subPath = path + length + 1;
  NN_FS_RESULT_THROW_UNLESS(subPath[0] == '/' || subPath[0] == '\\',
    ResultInvalidPathFormat());

  memcpy(outMountName->str, path, length);
  outMountName->str[length] = '\0';
  *outSubPath = subPath;
  return ResultSuccess();
}

}

bool IsValidMountName(const char* name) {
  if (name[0] == '\0') {
    return false;
  }
  if (IsAsciiAlphabet(name[0]) && name[1] == '\0') {
    return false;
  }

  size_t length = 0;
  for (const char* p = name; *p != '\0'; ++p) {
    if (*p == ':' || *p == '/') {
      return false;
    }
    if (++length > MountNameLengthMax) {
      return false;
    }
  }
  return util::IsValidUtf8String(name, length);
}

bool IsUsedReservedMountName(const char* name) {
  return name[0] == ReservedMountNamePrefix;
}

Result FindFileSystem(FileSystemAccessor** out, const char** outSubPath,
  const char* path) {
  NN_FS_RESULT_THROW_UNLESS(out != nullptr && outSubPath != nullptr,
    ResultUnexpectedInMountUtilityA());
  NN_FS_RESULT_THROW_UNLESS(path != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(strncmp(path,
    NN_FS_HOST_ROOT_FILE_SYSTEM_MOUNT_NAME,
    sizeof(NN_FS_HOST_ROOT_FILE_SYSTEM_MOUNT_NAME) - 1) != 0,
    ResultNotMounted());

  MountName mountName = {};
  NN_FS_RESULT_DO(GetMountNameAndSubPath(&mountName, outSubPath, path));
  return Find(out, mountName.str);
}

fsa::IFileSystem* GetFileSystemImpl(const char* path) {
  FileSystemAccessor* accessor = nullptr;
  const char* subPath;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(FindFileSystem(&accessor, &subPath,
    path));
  return accessor->GetRawFileSystemUnsafe();
}

Result CheckMountName(const char* name) {
  NN_FS_RESULT_THROW_UNLESS(name != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(!IsUsedReservedMountName(name),
    ResultInvalidMountName());
  NN_FS_RESULT_THROW_UNLESS(IsValidMountName(name), ResultInvalidMountName());
  return ResultSuccess();
}

Result CheckMountNameAcceptingReservedMountName(const char* name) {
  NN_FS_RESULT_THROW_UNLESS(name != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(IsValidMountName(name), ResultInvalidMountName());
  return ResultSuccess();
}

Result Unmount(const char* name) {
  FileSystemAccessor* accessor = nullptr;
  NN_FS_RESULT_DO(Find(&accessor, name));

  if (accessor->IsFileDataCacheAttachable()) {
    GlobalFileDataCacheAccessorReadableScopedPointer pointer;
    if (TryGetGlobalFileDataCacheAccessor(&pointer)) {
      accessor->PurgeFileDataCache(pointer.Get());
    }
  }

  Unregister(name);
  return ResultSuccess();
}

Result IsMounted(bool* out, const char* name) {
  FileSystemAccessor* accessor = nullptr;
  const Result result = Find(&accessor, name);
  if (IsFailure(result)) {
    if (!IsResultIncluded(result, ResultNotMounted())) {
      return result;
    }
    *out = false;
  }
  else {
    *out = true;
  }
  return ResultSuccess();
}

}

void Unmount(const char* name) {
  Result result;
  NN_FS_ACCESS_LOG_FILE_SYSTEM_ACCESSOR(result, detail::Unmount(name), name,
    ", name: \"%s\"", name);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

bool IsMounted(const char* name) {
  bool isMounted = false;
  Result result;
  NN_FS_ACCESS_LOG_FILE_SYSTEM_ACCESSOR(result,
    detail::IsMounted(&isMounted, name), name,
    ", name: \"%s\", is_mounted: \"%s\"", name, !isMounted ? "false" : "true");
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
  return isMounted;
}

bool IsPathMounted(const char* path) {
  detail::FileSystemAccessor* accessor = nullptr;
  const char* subPath = nullptr;
  return IsSuccess(detail::FindFileSystem(&accessor, &subPath, path));
}

Result ConvertToFsCommonPath(char* commonPathBuffer,
  size_t commonPathBufferSize, const char* path) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(commonPathBuffer != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(path != nullptr,
    ResultNullptrArgument());

  detail::MountName mountName = {};
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::GetMountNameAndSubPath(&mountName,
    &subPath, path));

  detail::FileSystemAccessor* accessor = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::Find(&accessor, mountName.str));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(accessor->GetCommonMountName(
    commonPathBuffer, commonPathBufferSize));

  const size_t mountNameLength = strnlen(commonPathBuffer,
    commonPathBufferSize);
  const int length = util::SNPrintf(commonPathBuffer + mountNameLength,
    commonPathBufferSize - mountNameLength, "%s", subPath);
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(
    static_cast<size_t>(length) < commonPathBufferSize - mountNameLength,
    ResultTooLongPath());
  return ResultSuccess();
}

}
