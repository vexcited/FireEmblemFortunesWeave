#include "nn/fs/fs_path.hpp"

#include <string.h>

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/util/string_util.hpp"

namespace nn::fs {

namespace {

const size_t MountNameLengthMax = 15;
const size_t UncPathPrefixLength = 2;
const size_t WindowsDriveLength = 2;

bool IsInvalidCharacter(char c) {
  return c == ':' || c == '*' || c == '?' || c == '<' || c == '>' ||
    c == '|';
}

bool IsInvalidCharacterForHostName(char c) {
  return c == ':' || c == '*' || c == '<' || c == '>' || c == '|' ||
    c == '$';
}

bool IsInvalidCharacterForMountName(char c) {
  return c == '*' || c == '?' || c == '<' || c == '>' || c == '|';
}

Result CheckSharedName(const char* name, int length) {
  if (length == 1 && name[0] == '.') {
    return ResultInvalidPathFormat();
  }
  if (length == 2 && name[0] == '.' && name[1] == '.') {
    return ResultInvalidPathFormat();
  }
  for (int i = 0; i < length; ++i) {
    NN_FS_RESULT_THROW_UNLESS(!IsInvalidCharacter(name[i]),
      ResultInvalidCharacter());
  }
  return ResultSuccess();
}

Result CheckHostName(const char* name, size_t length) {
  if (length == 2 && name[0] == '.' && name[1] == '.') {
    return ResultInvalidPathFormat();
  }
  for (size_t i = 0; i < length; ++i) {
    NN_FS_RESULT_THROW_UNLESS(!IsInvalidCharacterForHostName(name[i]),
      ResultInvalidCharacter());
  }
  return ResultSuccess();
}

}

Result PathFormatter::ParseMountName(const char** outPath, size_t* outLength,
  char* outMountName, size_t mountNameSize, const char* path) {
  int maxLength = static_cast<int>(MountNameLengthMax + 1);
  if (mountNameSize != 0) {
    maxLength = static_cast<int>(mountNameSize) < maxLength ?
      static_cast<int>(mountNameSize) : maxLength;
  }

  const char* cursor = path;
  for (; cursor < path + maxLength && *cursor != '\0'; ++cursor) {
    const char c = *cursor;
    if (c == ':') {
      ++cursor;
      break;
    }
    if (c == '/' || c == '\\') {
      *outPath = path;
      *outLength = 0;
      return ResultSuccess();
    }
  }

  const size_t length = cursor - path;
  if (length <= 2 || cursor[-1] != ':') {
    *outPath = path;
    *outLength = 0;
    return ResultSuccess();
  }

  for (size_t i = 0; i < length; ++i) {
    NN_FS_RESULT_THROW_UNLESS(!IsInvalidCharacterForMountName(path[i]),
      ResultInvalidCharacter());
  }

  if (mountNameSize != 0) {
    NN_FS_RESULT_THROW_UNLESS(length < mountNameSize, ResultTooLongPath());
    memcpy(outMountName, path, length);
    outMountName[length] = '\0';
  }

  *outPath = cursor;
  *outLength = length;
  return ResultSuccess();
}

Result PathFormatter::SkipMountName(const char** outPath, size_t* outLength,
  const char* path) {
  return ParseMountName(outPath, outLength, nullptr, 0, path);
}

Result PathFormatter::ParseWindowsPathImpl(const char** outPath,
  size_t* outLength, char* outWindowsPath, size_t windowsPathSize,
  const char* path, bool hasMountName) {
  if (outWindowsPath != nullptr) {
    outWindowsPath[0] = '\0';
  }

  const char* current = path;
  if (hasMountName && path[0] == '/') {
    if ((path[1] == '\\' && path[2] == '\\') || IsWindowsDrive(path + 1)) {
      ++current;
      NN_FS_RESULT_THROW_UNLESS(windowsPathSize != 0, ResultNotNormalized());
    }
  }

  if (IsWindowsDrive(current)) {
    size_t length = WindowsDriveLength;
    for (; current[length] != '\0'; ++length) {
      const char c = current[length];
      NN_FS_RESULT_THROW_UNLESS(!IsInvalidCharacter(c),
        ResultInvalidCharacter());
      if (c == '/' || c == '\\') {
        break;
      }
    }

    if (windowsPathSize != 0) {
      NN_FS_RESULT_THROW_UNLESS(length < windowsPathSize,
        ResultTooLongPath());
      memcpy(outWindowsPath, current, length);
      outWindowsPath[length] = '\0';
      Replace(outWindowsPath, length, '\\', '/');
    }
    else {
      for (size_t i = 0; i < length; ++i) {
        NN_FS_RESULT_THROW_UNLESS(current[i] != '\\', ResultNotNormalized());
      }
    }

    *outPath = current + length;
    *outLength = length;
    return ResultSuccess();
  }

  if (IsDosDevicePath(current)) {
    size_t length = GetDosDevicePathPrefixLength();
    if (IsWindowsDrive(current + length)) {
      length += WindowsDriveLength;
    }
    else {
      --length;
    }

    if (windowsPathSize != 0) {
      NN_FS_RESULT_THROW_UNLESS(length < windowsPathSize,
        ResultTooLongPath());
      memcpy(outWindowsPath, current, length);
      outWindowsPath[length] = '\0';
      Replace(outWindowsPath, length, '/', '\\');
    }

    *outPath = current + length;
    *outLength = length;
    return ResultSuccess();
  }

  if (IsUncPath(current, false, true)) {
    const char* end = current;

    NN_FS_RESULT_THROW_UNLESS(current[UncPathPrefixLength] != '/' &&
      current[UncPathPrefixLength] != '\\', ResultInvalidPathFormat());

    size_t componentOffset = 0;
    size_t position = UncPathPrefixLength;
    for (; current[position] != '\0'; ++position) {
      if (current[position] == '/' || current[position] == '\\') {
        if (componentOffset != 0) {
          NN_FS_RESULT_DO(CheckSharedName(current + componentOffset,
            static_cast<int>(position - componentOffset)));
          end = current + position;
          break;
        }

        NN_FS_RESULT_THROW_UNLESS(current[position + 1] != '/' &&
          current[position + 1] != '\\', ResultInvalidPathFormat());
        NN_FS_RESULT_DO(CheckHostName(current + UncPathPrefixLength,
          position - UncPathPrefixLength));
        componentOffset = position + 1;
      }
    }

    NN_FS_RESULT_THROW_UNLESS(componentOffset != position,
      ResultInvalidPathFormat());

    if (componentOffset != 0 && end == current) {
      NN_FS_RESULT_DO(CheckSharedName(current + componentOffset,
        static_cast<int>(position - componentOffset)));
      end = current + position;
    }

    const size_t length = end - current;
    if (windowsPathSize != 0) {
      NN_FS_RESULT_THROW_UNLESS(length < windowsPathSize,
        ResultTooLongPath());
      memcpy(outWindowsPath, current, length);
      outWindowsPath[length] = '\0';
      Replace(outWindowsPath, length, '/', '\\');
    }
    else {
      for (size_t i = 0; i < length; ++i) {
        NN_FS_RESULT_THROW_UNLESS(current[i] != '/', ResultNotNormalized());
      }
    }

    *outPath = end;
    *outLength = length;
    return ResultSuccess();
  }

  *outPath = path;
  *outLength = 0;
  return ResultSuccess();
}

Result PathFormatter::ParseWindowsPath(const char** outPath,
  size_t* outLength, char* outWindowsPath, size_t windowsPathSize,
  const char* path, bool hasMountName) {
  return ParseWindowsPathImpl(outPath, outLength, outWindowsPath,
    windowsPathSize, path, hasMountName);
}

Result PathFormatter::SkipWindowsPath(const char** outPath, size_t* outLength,
  bool* outNormalized, const char* path, bool hasMountName) {
  *outNormalized = true;
  const Result result = ParseWindowsPathImpl(outPath, outLength, nullptr, 0,
    path, hasMountName);
  if (result.value == ResultNotNormalized().value) {
    *outNormalized = false;
    return ResultSuccess();
  }
  return result;
}

Result PathFormatter::ParseRelativeDotPathImpl(const char** outPath,
  size_t* outLength, char* outRelativePath, size_t relativePathSize,
  const char* path) {
  (void)relativePathSize;

  if (outRelativePath != nullptr) {
    outRelativePath[0] = '\0';
  }

  if (IsRelativePathStartingWithCurrentDirectory(path,
    PathSeparatorOption_SlashAndBackslash)) {
    if (outRelativePath != nullptr) {
      outRelativePath[0] = '.';
      outRelativePath[1] = '\0';
    }
    *outPath = path + 1;
    *outLength = 1;
    return ResultSuccess();
  }

  NN_FS_RESULT_THROW_UNLESS(!IsRelativePathStartingWithParentDirectory(path,
    PathSeparatorOption_SlashAndBackslash), ResultDirectoryUnobtainable());

  *outPath = path;
  *outLength = 0;
  return ResultSuccess();
}

Result PathFormatter::ParseRelativeDotPath(const char** outPath,
  size_t* outLength, char* outRelativePath, size_t relativePathSize,
  const char* path) {
  return ParseRelativeDotPathImpl(outPath, outLength, outRelativePath,
    relativePathSize, path);
}

Result PathFormatter::SkipRelativeDotPath(const char** outPath,
  size_t* outLength, const char* path) {
  return ParseRelativeDotPathImpl(outPath, outLength, nullptr, 0, path);
}

Result PathFormatter::IsNormalized(bool* outNormalized, size_t* outLength,
  const char* path, const PathFlags& flags) {
  NN_FS_RESULT_THROW_UNLESS(outNormalized != nullptr && outLength != nullptr &&
    path != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_DO(CheckUtf8(path));

  const char* current = path;
  if (current[0] == '\0') {
    NN_FS_RESULT_THROW_UNLESS(flags.IsEmptyPathAllowed(),
      ResultInvalidPathFormat());
    *outNormalized = true;
    *outLength = 0;
    return ResultSuccess();
  }

  NN_FS_RESULT_THROW_UNLESS(!IsWindowsPath(path, false) ||
    flags.IsWindowsPathAllowed(), ResultInvalidPathFormat());

  size_t mountNameLength = 0;
  NN_FS_RESULT_DO(SkipMountName(&current, &mountNameLength, current));
  NN_FS_RESULT_THROW_UNLESS(mountNameLength == 0 ||
    flags.IsMountNameAllowed(), ResultInvalidPathFormat());

  if (!IsSeparator(current[0], PathSeparatorOption_Slash) &&
    !IsRelativePathStartingWithCurrentDirectory(current,
      PathSeparatorOption_SlashAndBackslash) &&
    !IsRelativePathStartingWithParentDirectory(current,
      PathSeparatorOption_SlashAndBackslash) &&
    !IsWindowsPath(current, false)) {
    NN_FS_RESULT_THROW_UNLESS(flags.IsRelativePathAllowed(),
      ResultInvalidPathFormat());
    NN_FS_RESULT_THROW_UNLESS(
      !IsSeparator(current[0], PathSeparatorOption_Backslash),
      ResultInvalidPathFormat());
    NN_FS_RESULT_DO(CheckInvalidCharacter(current[0]));
    *outNormalized = false;
    return ResultSuccess();
  }

  size_t length = mountNameLength;
  const bool isRelativePath = IsRelativePathStartingWithCurrentDirectory(
    current, PathSeparatorOption_SlashAndBackslash);
  if (isRelativePath) {
    ++current;
    NN_FS_RESULT_THROW_UNLESS(flags.IsRelativePathAllowed(),
      ResultInvalidPathFormat());
    ++length;
    if (current[0] == '\0') {
      *outNormalized = true;
      *outLength = length;
      return ResultSuccess();
    }
  }
  else {
    NN_FS_RESULT_THROW_UNLESS(!IsRelativePathStartingWithParentDirectory(
      current, PathSeparatorOption_SlashAndBackslash),
      ResultDirectoryUnobtainable());
  }

  size_t windowsPathLength = 0;
  bool isWindowsPathNormalized = false;
  NN_FS_RESULT_DO(SkipWindowsPath(&current, &windowsPathLength,
    &isWindowsPathNormalized, current, mountNameLength != 0));
  if (!isWindowsPathNormalized) {
    NN_FS_RESULT_THROW_UNLESS(flags.IsWindowsPathAllowed(),
      ResultInvalidPathFormat());
    *outNormalized = false;
    return ResultSuccess();
  }

  if (windowsPathLength != 0) {
    NN_FS_RESULT_THROW_UNLESS(flags.IsWindowsPathAllowed() &&
      !isRelativePath, ResultInvalidPathFormat());
    if (current[0] == '\0' || strchr(current, '\\') != nullptr) {
      *outNormalized = false;
      return ResultSuccess();
    }
    length += windowsPathLength;
  }

  NN_FS_RESULT_THROW_UNLESS(IsSeparator(current[0],
    isRelativePath || windowsPathLength != 0 ?
      PathSeparatorOption_SlashAndBackslash : PathSeparatorOption_Slash),
    ResultInvalidPathFormat());

  if (flags.IsBackslashAllowed() &&
    PathNormalizer::IsParentDirectoryPathReplacementNeeded(current)) {
    *outNormalized = false;
    return ResultSuccess();
  }

  bool containsBackslash = false;
  NN_FS_RESULT_DO(CheckInvalidBackslash(&containsBackslash, current,
    flags.IsWindowsPathAllowed() || flags.IsRelativePathAllowed() ||
      flags.IsBackslashAllowed()));
  if (containsBackslash && !flags.IsBackslashAllowed()) {
    *outNormalized = false;
    return ResultSuccess();
  }

  size_t normalizedLength = 0;
  NN_FS_RESULT_DO(PathNormalizer::IsNormalized(outNormalized,
    &normalizedLength, current, flags.IsAllCharactersAllowed()));
  *outLength = length + normalizedLength;
  return ResultSuccess();
}

Result PathFormatter::Normalize(char* buffer, size_t bufferSize,
  const char* path, size_t pathSize, const PathFlags& flags) {
  const char* current = path;
  size_t length = 0;
  bool isWindowsPath = false;

  if (current[0] == '\0') {
    NN_FS_RESULT_THROW_UNLESS(flags.IsEmptyPathAllowed(),
      ResultInvalidPathFormat());
    buffer[0] = '\0';
    return ResultSuccess();
  }

  size_t mountNameLength = 0;
  if (flags.IsMountNameAllowed()) {
    NN_FS_RESULT_DO(ParseMountName(&current, &mountNameLength, buffer,
      bufferSize, current));
    length += mountNameLength;
  }

  bool isDriveRelativePath = false;
  if (!IsSeparator(current[0], PathSeparatorOption_Slash) &&
    !IsRelativePathStartingWithCurrentDirectory(current,
      PathSeparatorOption_SlashAndBackslash) &&
    !IsRelativePathStartingWithParentDirectory(current,
      PathSeparatorOption_SlashAndBackslash) &&
    !IsWindowsPath(current, false)) {
    NN_FS_RESULT_THROW_UNLESS(flags.IsRelativePathAllowed(),
      ResultInvalidPathFormat());
    NN_FS_RESULT_THROW_UNLESS(
      !IsSeparator(current[0], PathSeparatorOption_Backslash),
      ResultInvalidPathFormat());
    NN_FS_RESULT_DO(CheckInvalidCharacter(current[0]));
    buffer[length++] = '.';
    isDriveRelativePath = true;
  }

  if (flags.IsRelativePathAllowed()) {
    size_t relativeLength = 0;
    NN_FS_RESULT_DO(ParseRelativeDotPathImpl(&current, &relativeLength,
      buffer + length, bufferSize - length, current));
    length += relativeLength;
    if (current[0] == '\0') {
      buffer[length] = '\0';
      return ResultSuccess();
    }
  }

  if (flags.IsWindowsPathAllowed()) {
    const char* const origin = current;
    size_t windowsPathLength = 0;
    NN_FS_RESULT_DO(ParseWindowsPathImpl(&current, &windowsPathLength,
      buffer + length, bufferSize - length, current, mountNameLength != 0));
    length += windowsPathLength;
    if (current[0] == '\0') {
      NN_FS_RESULT_THROW_UNLESS(length + 2 <= bufferSize,
        ResultTooLongPath());
      buffer[length] = '/';
      buffer[length + 1] = '\0';
      return ResultSuccess();
    }
    if (current - origin > 0) {
      isWindowsPath = true;
    }
  }

  bool containsBackslash = false;
  NN_FS_RESULT_DO(CheckInvalidBackslash(&containsBackslash, current,
    flags.IsWindowsPathAllowed() || flags.IsRelativePathAllowed() ||
      flags.IsBackslashAllowed()));

  detail::Deleter deleter;
  std::unique_ptr<char[], detail::Deleter> temporary;
  if (containsBackslash &&
    (flags.IsWindowsPathAllowed() || flags.IsRelativePathAllowed())) {
    temporary = detail::MakeUnique<char[]>(pathSize);
    NN_FS_RESULT_THROW_UNLESS(temporary != nullptr,
      ResultAllocationMemoryFailedMakeUnique());
    util::Strlcpy(temporary.get(), path, static_cast<int>(pathSize));
    Replace(temporary.get(), pathSize, '\\', '/');
    current = temporary.get() + static_cast<int>(current - path);
  }

  size_t normalizedLength = 0;
  return PathNormalizer::Normalize(buffer + length, &normalizedLength,
    current, bufferSize - length, isWindowsPath, isDriveRelativePath,
    flags.IsAllCharactersAllowed());
}

Result PathFormatter::CheckPathFormat(const char* path,
  const PathFlags& flags) {
  (void)path;
  (void)flags;
  return ResultSuccess();
}

}
