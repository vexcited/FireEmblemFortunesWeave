#include "nn/fs/fs_path_utility.hpp"

#include "nn/fs/fs_path.hpp"
#include "nn/util/utf.hpp"

namespace nn::fs {

namespace {

const size_t DosDevicePathPrefixLength = 4;
const int WindowsDriveLength = 2;

bool IsAsciiAlphabet(char c) {
  return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

int GetUtf16Length(char c) {
  if ((c & 0x80) == 0) {
    return 1;
  }
  if ((c & 0xE0) == 0xC0 || (c & 0xF0) == 0xE0) {
    return 1;
  }
  return (c & 0xF8) == 0xF0 ? 2 : 1;
}

}

bool IsWindowsDrive(const char* path) {
  return IsAsciiAlphabet(path[0]) && path[1] == ':';
}

bool IsWindowsDriveRootPath(const Path& path) {
  const char* string = path.GetString();
  return IsWindowsDrive(string) &&
    (string[2] == '\\' || string[2] == '/') && string[3] == '\0';
}

bool IsUncPath(const char* path) {
  return IsUncPath(path, true, true);
}

bool IsUncPath(const char* path, bool allowSlash, bool allowBackslash) {
  if (allowSlash && path[0] == '/' && path[1] == '/') {
    return true;
  }
  return allowBackslash && path[0] == '\\' && path[1] == '\\';
}

int GetUncPathPrefixLength(const char* path) {
  int separatorCount = 0;
  int length = 0;
  for (length = 0; path[length] != '\0'; ++length) {
    if (path[length] == '\\' || path[length] == '/') {
      ++separatorCount;
    }
    if (separatorCount == 4) {
      break;
    }
  }
  return length;
}

bool IsDosDevicePath(const char* path) {
  return path[0] == '\\' && path[1] == '\\' &&
    (path[2] == '?' || path[2] == '.') &&
    (path[3] == '/' || path[3] == '\\');
}

size_t GetDosDevicePathPrefixLength() {
  return DosDevicePathPrefixLength;
}

bool IsWindowsPath(const char* path, bool allowSlashUncPath) {
  return IsWindowsDrive(path) || IsDosDevicePath(path) ||
    IsUncPath(path, allowSlashUncPath, true);
}

int GetWindowsSkipLength(const char* path) {
  if (IsDosDevicePath(path)) {
    return GetDosDevicePathPrefixLength();
  }
  if (IsWindowsDrive(path)) {
    return WindowsDriveLength;
  }
  if (IsUncPath(path)) {
    return GetUncPathPrefixLength(path);
  }
  return 0;
}

Result CheckCharacterCountForWindows(const char* path, int maxNameLength,
  int maxPathLength) {
  const char* cursor = path;
  int nameLength = 0;
  int pathLength = 0;
  while (*cursor != '\0') {
    const int length = GetUtf16Length(*cursor);

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

    if (maxNameLength > 0) {
      if (codePoint == '\\' || codePoint == '/') {
        nameLength = 0;
      }
      else {
        nameLength += length;
      }
      if (nameLength > maxNameLength) {
        return ResultTooLongPath();
      }
    }
    if (maxPathLength > 0) {
      pathLength += length;
      if (pathLength > maxPathLength) {
        return ResultTooLongPath();
      }
    }
  }
  return ResultSuccess();
}

}
