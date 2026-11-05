#pragma once

#include <stddef.h>

#include "nn/fs/fs_result.hpp"

namespace nn::fs::RomPathTool {

const size_t MaxPathLength = 768;

struct RomEntryName {
  const char* path;
  size_t length;
};

class PathParser {
public:
  PathParser();

  Result Initialize(const char* path);
  void Finalize();

  bool IsParseFinished() const;
  bool IsDirectoryPath() const;

  Result GetNextDirectoryName(RomEntryName* outName);
  Result GetAsDirectoryName(RomEntryName* outName) const;
  Result GetAsFileName(RomEntryName* outName) const;

private:
  const char* m_PreviousStart;
  const char* m_PreviousEnd;
  const char* m_Next;
  bool m_IsFinished;
};

Result GetParentDirectoryName(RomEntryName* outName,
  const RomEntryName& name, const char* path);

}
