#include "nn/fs/fs_path_utility.hpp"

#include <string.h>

#include "nn/fs/fs_path.hpp"
#include "nn/util/string_util.hpp"
#include "nn/util/utf.hpp"

namespace nn::fs {

bool IsSeparator(char c, PathSeparatorOption option) {
  const bool isSlash = c == '/' &&
    (option == PathSeparatorOption_Slash ||
      option == PathSeparatorOption_SlashAndBackslash);
  const bool isBackslash = c == '\\' &&
    (option == PathSeparatorOption_Backslash ||
      option == PathSeparatorOption_SlashAndBackslash);
  return isSlash || isBackslash;
}

bool IsRelativePathStartingWithCurrentDirectory(const char* path,
  PathSeparatorOption option) {
  return path[0] == '.' &&
    (path[1] == '\0' || IsSeparator(path[1], option));
}

bool IsRelativePathStartingWithParentDirectory(const char* path,
  PathSeparatorOption option) {
  return path[0] == '.' && path[1] == '.' &&
    (path[2] == '\0' || IsSeparator(path[2], option));
}

bool IsPathRelative(const char* path) {
  return path[0] != '\0' && path[0] != '/' && !IsWindowsPath(path, true);
}

Result ConvertToFspPath(fssrv::sf::FspPath* out, const char* path) {
  const int length = util::Strlcpy(out->str, path,
    static_cast<int>(sizeof(out->str)));
  NN_FS_RESULT_THROW_UNLESS(length < static_cast<int>(sizeof(out->str)),
    ResultTooLongPath());

  const char* skipped = nullptr;
  size_t mountNameLength = 0;
  NN_FS_RESULT_DO(PathFormatter::SkipMountName(&skipped, &mountNameLength,
    path));

  if (IsWindowsPath(skipped, true)) {
    if (mountNameLength != 0 && util::Strncmp(path, "@Host:", 6) != 0) {
      return ResultSuccess();
    }
    char* unc = out->str + mountNameLength;
    if (IsUncPath(unc, true, false)) {
      unc[0] = '\\';
      unc[1] = '\\';
    }
    return ResultSuccess();
  }

  Replace(out->str, sizeof(out->str) - 1, '\\', '/');
  return ResultSuccess();
}

bool IsDirectoryPath(const char* path, size_t size) {
  if (path[0] == '\0') {
    return false;
  }
  const int length = util::Strnlen(path, static_cast<int>(size));
  const char last = path[length - 1];
  return last == '/' || last == '\\';
}

bool IsDirectoryPath(const fssrv::sf::FspPath& path) {
  return IsDirectoryPath(path.str, sizeof(path.str));
}

Result CheckUtf8(const char* string) {
  const char* cursor = string;
  while (*cursor != '\0') {
    char character[4] = {};
    if (util::PickOutCharacterFromUtf8String(character, &cursor) !=
      util::CharacterEncodingResult_Success) {
      return ResultInvalidPathFormat();
    }
    uint32_t codePoint = 0;
    if (util::ConvertCharacterUtf8ToUtf32(&codePoint, character) !=
      util::CharacterEncodingResult_Success) {
      return ResultInvalidPathFormat();
    }
  }
  return ResultSuccess();
}

Result CheckInvalidCharacter(char c) {
  switch (c) {
    case ':':
    case '*':
    case '?':
    case '<':
    case '>':
    case '|':
      return ResultInvalidCharacter();
    default:
      return ResultSuccess();
  }
}

Result CheckInvalidBackslash(bool* outContainsBackslash, const char* path,
  bool allowBackslash) {
  *outContainsBackslash = false;
  for (const char* p = path; *p != '\0'; ++p) {
    if (*p == '\\') {
      *outContainsBackslash = true;
      if (!allowBackslash) {
        return ResultInvalidCharacter();
      }
    }
  }
  return ResultSuccess();
}

Result CheckEntryNameBytes(const char* path, int maxEntryNameBytes) {
  int count = 0;
  while (*path != '\0') {
    if (*path == '/' || *path == '\\') {
      count = 0;
    }
    else {
      ++count;
    }
    ++path;
    if (count >= maxEntryNameBytes) {
      return ResultTooLongPath();
    }
  }
  return ResultSuccess();
}

bool IsSubPath(const char* lhs, const char* rhs) {
  if ((IsUncPath(lhs) && !IsUncPath(rhs)) ||
    (!IsUncPath(lhs) && IsUncPath(rhs))) {
    return false;
  }

  if (lhs[0] == '/' && lhs[1] == '\0' && rhs[0] == '/' && rhs[1] != '\0') {
    return true;
  }
  if (rhs[0] == '/' && rhs[1] == '\0' && lhs[0] == '/' && lhs[1] != '\0') {
    return true;
  }

  for (size_t i = 0;; ++i) {
    if (lhs[i] == '\0') {
      return rhs[i] == '/';
    }
    else if (rhs[i] == '\0') {
      return lhs[i] == '/';
    }
    else if (lhs[i] != rhs[i]) {
      return false;
    }
  }
}

}
