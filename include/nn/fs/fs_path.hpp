#pragma once

#include <stddef.h>

#include <memory>

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fs_result.hpp"

namespace nn::fs {

class Path {
public:
  typedef std::unique_ptr<char[], detail::Deleter> WriteBuffer;

  Path();

  Result Initialize(const Path& path);
  Result Initialize(const char* path);
  Result Initialize(const char* path, size_t length);
  Result InitializeWithNormalization(const char* path);
  Result InitializeWithNormalization(const char* path, size_t length);
  Result InitializeWithFormat(const char* format, ...);
  Result InitializeWithReplaceBackslash(const char* path);
  Result InitializeWithReplaceForwardSlashes(const char* path);
  Result InitializeWithReplaceUnc(const char* path);
  Result InitializeAsEmpty();

  Result InsertParent(const char* parent);
  Result InsertParent(const Path& parent);
  Result AppendChild(const char* child);
  Result AppendChild(const Path& child);
  Result Combine(const Path& parent, const Path& child);
  Result RemoveChild();
  Result Normalize(const PathFlags& flags);

  const char* GetString() const;

  bool IsEmpty() const {
    return m_Str[0] == '\0';
  }

  Result SetShallowBuffer(const char* buffer);

private:
  static const size_t WriteBufferAlignmentLength = 8;

  WriteBuffer ReleaseBuffer();
  void ClearBuffer();
  void SetModifiableBuffer(WriteBuffer&& buffer, size_t length);
  void SetReadOnlyBuffer(const char* buffer);
  Result Preallocate(size_t length);
  Result InitializeImpl(const char* path, size_t length);

  const char* m_Str;
  WriteBuffer m_WriteBuffer;
  size_t m_WriteBufferLength;
  bool m_IsNormalized;
};

Result SetUpFixedPath(Path* out, const char* path);
Result SetUpFixedPath(Path* out, char* buffer, size_t size,
  const char* format, ...);

class PathFormatter {
public:
  static Result ParseMountName(const char** outPath, size_t* outLength,
    char* outMountName, size_t mountNameSize, const char* path);
  static Result SkipMountName(const char** outPath, size_t* outLength,
    const char* path);
  static Result ParseWindowsPath(const char** outPath, size_t* outLength,
    char* outWindowsPath, size_t windowsPathSize, const char* path,
    bool hasMountName);
  static Result SkipWindowsPath(const char** outPath, size_t* outLength,
    bool* outNormalized, const char* path, bool hasMountName);
  static Result ParseRelativeDotPath(const char** outPath, size_t* outLength,
    char* outRelativePath, size_t relativePathSize, const char* path);
  static Result SkipRelativeDotPath(const char** outPath, size_t* outLength,
    const char* path);
  static Result IsNormalized(bool* outNormalized, size_t* outLength,
    const char* path, const PathFlags& flags);
  static Result Normalize(char* buffer, size_t bufferSize, const char* path,
    size_t pathSize, const PathFlags& flags);
  static Result CheckPathFormat(const char* path, const PathFlags& flags);

private:
  static Result ParseWindowsPathImpl(const char** outPath, size_t* outLength,
    char* outWindowsPath, size_t windowsPathSize, const char* path,
    bool hasMountName);
  static Result ParseRelativeDotPathImpl(const char** outPath,
    size_t* outLength, char* outRelativePath, size_t relativePathSize,
    const char* path);
};

class PathNormalizer {
public:
  static Result Normalize(char* buffer, size_t* outLength, const char* path,
    size_t bufferSize, bool isWindowsPath, bool isDriveRelativePath);
  static Result Normalize(char* buffer, size_t* outLength, const char* path,
    size_t bufferSize, bool isWindowsPath, bool isDriveRelativePath,
    bool allowAllCharacters);
  static Result IsNormalized(bool* outNormalized, size_t* outLength,
    const char* path);
  static Result IsNormalized(bool* outNormalized, size_t* outLength,
    const char* path, bool allowAllCharacters);
  static bool IsParentDirectoryPathReplacementNeeded(const char* path);
};

}
