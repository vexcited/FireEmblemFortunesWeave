#include "nn/fs/fs_rom_path_tool.hpp"

namespace nn::fs {

namespace {

const size_t RomEntryNameLengthMax = 768;

constexpr Result ResultDbmInvalidPathFormat() {
  return detail::MakeResult(7915);
}

constexpr Result ResultDbmDirectoryNameTooLong() {
  return detail::MakeResult(7916);
}

constexpr Result ResultDbmFileNameTooLong() {
  return detail::MakeResult(7917);
}

bool IsSeparator(char c) {
  return c == '/';
}

bool IsCurrentDirectory(const char* path, size_t length) {
  return length == 1 && path[0] == '.';
}

bool IsParentDirectory(const char* path, size_t length) {
  return length == 2 && path[0] == '.' && path[1] == '.';
}

}

namespace RomPathTool {

PathParser::PathParser()
  : m_PreviousStart(nullptr), m_PreviousEnd(nullptr), m_Next(nullptr),
    m_IsFinished(false) {}

Result PathParser::Initialize(const char* path) {
  NN_FS_RESULT_THROW_UNLESS(IsSeparator(path[0]),
    ResultDbmInvalidPathFormat());

  while (IsSeparator(path[1])) {
    ++path;
  }

  m_PreviousStart = path;
  m_PreviousEnd = path;
  m_Next = path + 1;
  return ResultSuccess();
}

void PathParser::Finalize() {
  m_PreviousStart = nullptr;
  m_PreviousEnd = nullptr;
  m_Next = nullptr;
  m_IsFinished = false;
}

bool PathParser::IsParseFinished() const {
  return m_IsFinished;
}

bool PathParser::IsDirectoryPath() const {
  if (m_Next[0] == '\0' && IsSeparator(m_Next[-1])) {
    return true;
  }
  if (m_Next[0] == '.' && m_Next[1] == '\0') {
    return true;
  }
  return m_Next[0] == '.' && m_Next[1] == '.' && m_Next[2] == '\0';
}

Result PathParser::GetNextDirectoryName(RomEntryName* outName) {
  const size_t length = m_PreviousEnd - m_PreviousStart;
  NN_FS_RESULT_THROW_UNLESS(length <= RomEntryNameLengthMax,
    ResultDbmDirectoryNameTooLong());

  outName->path = m_PreviousStart;
  outName->length = length;

  const char* cursor = m_Next;
  for (const char* p = cursor;; ++p) {
    if (IsSeparator(*p)) {
      m_PreviousStart = cursor;
      m_PreviousEnd = p;
      m_Next = p + 1;
      while (IsSeparator(m_Next[0])) {
        ++m_Next;
      }
      if (m_Next[0] == '\0') {
        m_IsFinished = true;
      }
      break;
    }
    if (*p == '\0') {
      m_PreviousEnd = p;
      m_Next = p;
      m_PreviousStart = cursor;
      m_IsFinished = true;
      break;
    }
  }
  return ResultSuccess();
}

Result PathParser::GetAsDirectoryName(RomEntryName* outName) const {
  const size_t length = m_PreviousEnd - m_PreviousStart;
  NN_FS_RESULT_THROW_UNLESS(length <= RomEntryNameLengthMax,
    ResultDbmDirectoryNameTooLong());

  outName->path = m_PreviousStart;
  outName->length = length;
  return ResultSuccess();
}

Result PathParser::GetAsFileName(RomEntryName* outName) const {
  const size_t length = m_PreviousEnd - m_PreviousStart;
  NN_FS_RESULT_THROW_UNLESS(length <= RomEntryNameLengthMax,
    ResultDbmFileNameTooLong());

  outName->path = m_PreviousStart;
  outName->length = length;
  return ResultSuccess();
}

Result GetParentDirectoryName(RomEntryName* outName,
  const RomEntryName& name, const char* path) {
  const char* start = name.path;
  const char* end = name.path + name.length - 1;

  int depth = 1;
  if (IsParentDirectory(name.path, name.length)) {
    ++depth;
  }

  if (name.path > path) {
    size_t length = 0;
    const char* head = name.path - 1;
    while (head >= path) {
      if (IsSeparator(*head)) {
        if (IsCurrentDirectory(head + 1, length)) {
          ++depth;
        }
        if (IsParentDirectory(head + 1, length)) {
          depth += 2;
        }
        if (depth == 0) {
          start = head + 1;
          break;
        }

        end = head - 1;
        while (end > path && IsSeparator(*end)) {
          --end;
        }
        head = end;
        length = 0;
        --depth;
      }
      ++length;
      --head;
    }

    NN_FS_RESULT_THROW_UNLESS(depth == 0, ResultDirectoryUnobtainable());
  }

  if (end <= path) {
    outName->path = path;
    outName->length = 0;
  }
  else {
    outName->path = start;
    outName->length = end - start + 1;
  }
  return ResultSuccess();
}

}

}
