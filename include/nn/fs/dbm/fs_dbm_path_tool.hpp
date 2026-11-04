#pragma once

#include <stddef.h>

#include "nn/fs/fs_result.hpp"

namespace nn::fs::dbm {

const size_t MaxDirectoryNameLength = 64;
const size_t MaxFileNameLength = 64;

struct DirectoryName {
  char name[MaxDirectoryNameLength];
};

struct FileName {
  char name[MaxFileNameLength];
};

class PathTool {
public:
  class PathParser {
  public:
    PathParser();

    Result Initialize(const char* path);
    void Finalize();

    bool IsParseFinished() const;
    bool IsDirectoryPath() const;

    Result GetNextDirectoryName(DirectoryName* outName, size_t* outLength);
    Result GetAsDirectoryName(DirectoryName* outName,
      size_t* outLength) const;
    Result GetAsFileName(FileName* outName, size_t* outLength) const;

  private:
    const char* m_PreviousStart;
    const char* m_PreviousEnd;
    const char* m_Next;
    bool m_IsFinished;
  };

  static size_t GetDirectoryNameLength(const DirectoryName* name);
  static bool GetDirectoryName(DirectoryName* outName, const char* name,
    size_t length);
  static size_t GetFileNameLength(const FileName* name);
  static bool GetFileName(FileName* outName, const char* name, size_t length);
  static bool ConvertDirectoryNameToFileName(FileName* outName,
    const DirectoryName* name);
  static bool ConvertFileNameToDirectoryName(DirectoryName* outName,
    const FileName* name);
};

}
