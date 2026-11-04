#pragma once

#include <stddef.h>

#include "nn/fs/fs_result.hpp"
#include "nn/fssrv/sf/fssrv_sf_path.hpp"

namespace nn::fs {

class Path;

enum PathSeparatorOption {
  PathSeparatorOption_Slash,
  PathSeparatorOption_Backslash,
  PathSeparatorOption_SlashAndBackslash,
};

class PathFlags {
public:
  PathFlags() : m_Value(0) {}

  void AllowWindowsPath() {
    m_Value |= Flag_WindowsPath;
  }

  void AllowRelativePath() {
    m_Value |= Flag_RelativePath;
  }

  void AllowEmptyPath() {
    m_Value |= Flag_EmptyPath;
  }

  void AllowMountName() {
    m_Value |= Flag_MountName;
  }

  void AllowBackslash() {
    m_Value |= Flag_Backslash;
  }

  void AllowAllCharacters() {
    m_Value |= Flag_AllCharacters;
  }

  bool IsWindowsPathAllowed() const {
    return (m_Value & Flag_WindowsPath) != 0;
  }

  bool IsRelativePathAllowed() const {
    return (m_Value & Flag_RelativePath) != 0;
  }

  bool IsEmptyPathAllowed() const {
    return (m_Value & Flag_EmptyPath) != 0;
  }

  bool IsMountNameAllowed() const {
    return (m_Value & Flag_MountName) != 0;
  }

  bool IsBackslashAllowed() const {
    return (m_Value & Flag_Backslash) != 0;
  }

  bool IsAllCharactersAllowed() const {
    return (m_Value & Flag_AllCharacters) != 0;
  }

private:
  enum Flag {
    Flag_WindowsPath = 1 << 0,
    Flag_RelativePath = 1 << 1,
    Flag_EmptyPath = 1 << 2,
    Flag_MountName = 1 << 3,
    Flag_Backslash = 1 << 4,
    Flag_AllCharacters = 1 << 5,
  };

  int m_Value;
};

bool IsSeparator(char c, PathSeparatorOption option);
bool IsRelativePathStartingWithCurrentDirectory(const char* path,
  PathSeparatorOption option);
bool IsRelativePathStartingWithParentDirectory(const char* path,
  PathSeparatorOption option);
bool IsPathRelative(const char* path);
Result ConvertToFspPath(fssrv::sf::FspPath* out, const char* path);
bool IsDirectoryPath(const char* path, size_t size);
bool IsDirectoryPath(const fssrv::sf::FspPath& path);
Result CheckUtf8(const char* string);
Result CheckInvalidCharacter(char c);
Result CheckInvalidBackslash(bool* outContainsBackslash, const char* path,
  bool allowBackslash);
Result CheckEntryNameBytes(const char* path, int maxEntryNameBytes);
bool IsSubPath(const char* lhs, const char* rhs);

bool IsWindowsDrive(const char* path);
bool IsWindowsDriveRootPath(const Path& path);
bool IsUncPath(const char* path);
bool IsUncPath(const char* path, bool allowSlash, bool allowBackslash);
int GetUncPathPrefixLength(const char* path);
bool IsDosDevicePath(const char* path);
size_t GetDosDevicePathPrefixLength();
bool IsWindowsPath(const char* path, bool allowSlashUncPath);
int GetWindowsSkipLength(const char* path);
Result CheckCharacterCountForWindows(const char* path, int maxNameLength,
  int maxPathLength);

inline void Replace(char* string, size_t length, char from, char to) {
  for (char* p = string; p < string + length && *p != '\0'; ++p) {
    if (*p == from) {
      *p = to;
    }
  }
}

}
