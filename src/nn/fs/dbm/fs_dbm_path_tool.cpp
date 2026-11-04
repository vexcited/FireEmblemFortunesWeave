#include "nn/fs/dbm/fs_dbm_path_tool.hpp"

#include <string.h>

namespace nn::fs::dbm {

namespace {

template<size_t Size>
void CopyName(char (&destination)[Size], const char* source, size_t length) {
  size_t i = 0;
  for (const char* p = source; p < source + length && i < Size; ++p) {
    destination[i++] = *p;
  }
  if (i < Size) {
    memset(destination + i, 0, Size - i);
  }
}

template<size_t Size>
size_t GetNameLength(const char (&name)[Size]) {
  size_t length = 0;
  while (length < Size && name[length] != '\0') {
    ++length;
  }
  return length;
}

bool IsCurrentOrParentDirectory(const char* name) {
  return name[0] == '.' &&
    (name[1] == '\0' || (name[1] == '.' && name[2] == '\0'));
}

}

size_t PathTool::GetDirectoryNameLength(const DirectoryName* name) {
  return GetNameLength(name->name);
}

bool PathTool::GetDirectoryName(DirectoryName* outName, const char* name,
  size_t length) {
  if (length > MaxDirectoryNameLength) {
    return false;
  }
  CopyName(outName->name, name, length);
  return true;
}

size_t PathTool::GetFileNameLength(const FileName* name) {
  return GetNameLength(name->name);
}

bool PathTool::GetFileName(FileName* outName, const char* name,
  size_t length) {
  if (length > MaxFileNameLength) {
    return false;
  }
  CopyName(outName->name, name, length);
  return true;
}

__attribute__((no_builtin("memcpy")))
bool PathTool::ConvertDirectoryNameToFileName(FileName* outName,
  const DirectoryName* name) {
  for (size_t i = 0; i < MaxFileNameLength; ++i) {
    outName->name[i] = name->name[i];
  }
  return true;
}

__attribute__((no_builtin("memcpy")))
bool PathTool::ConvertFileNameToDirectoryName(DirectoryName* outName,
  const FileName* name) {
  for (size_t i = 0; i < MaxDirectoryNameLength; ++i) {
    outName->name[i] = name->name[i];
  }
  return true;
}

PathTool::PathParser::PathParser()
  : m_PreviousStart(nullptr), m_PreviousEnd(nullptr), m_Next(nullptr),
    m_IsFinished(false) {}

Result PathTool::PathParser::Initialize(const char* path) {
  NN_FS_RESULT_THROW_UNLESS(path[0] == '/', ResultInvalidPathFormat());

  while (path[1] == '/') {
    ++path;
  }

  m_PreviousStart = path;
  m_PreviousEnd = path;
  m_Next = path + 1;
  while (m_Next[0] == '/') {
    ++m_Next;
  }
  return ResultSuccess();
}

void PathTool::PathParser::Finalize() {
  m_PreviousStart = nullptr;
  m_PreviousEnd = nullptr;
  m_Next = nullptr;
  m_IsFinished = false;
}

bool PathTool::PathParser::IsParseFinished() const {
  return m_IsFinished;
}

bool PathTool::PathParser::IsDirectoryPath() const {
  if (m_Next[0] == '\0' && m_Next[-1] == '/') {
    return true;
  }
  if (m_Next[0] == '.' && m_Next[1] == '\0') {
    return true;
  }
  return m_Next[0] == '.' && m_Next[1] == '.' && m_Next[2] == '\0';
}

Result PathTool::PathParser::GetNextDirectoryName(DirectoryName* outName,
  size_t* outLength) {
  const size_t length = m_PreviousEnd - m_PreviousStart;
  *outLength = length;
  CopyName(outName->name, m_PreviousStart, length);

  const char* cursor = m_Next;
  m_PreviousStart = cursor;

  size_t nameLength = 0;
  for (const char* p = cursor;; ++p, ++nameLength) {
    if (*p == '/') {
      NN_FS_RESULT_THROW_UNLESS(nameLength <= MaxDirectoryNameLength,
        ResultTooLongPath());
      m_PreviousEnd = p;
      m_Next = p + 1;
      while (m_Next[0] == '/') {
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
      m_IsFinished = true;
      break;
    }
  }
  return ResultSuccess();
}

Result PathTool::PathParser::GetAsDirectoryName(DirectoryName* outName,
  size_t* outLength) const {
  const size_t length = m_PreviousEnd - m_PreviousStart;
  NN_FS_RESULT_THROW_UNLESS(length <= MaxDirectoryNameLength,
    ResultTooLongPath());

  *outLength = length;
  CopyName(outName->name, m_PreviousStart, length);
  return ResultSuccess();
}

Result PathTool::PathParser::GetAsFileName(FileName* outName,
  size_t* outLength) const {
  const size_t length = m_PreviousEnd - m_PreviousStart;
  NN_FS_RESULT_THROW_UNLESS(length <= MaxFileNameLength,
    ResultTooLongPath());
  NN_FS_RESULT_THROW_UNLESS(!IsCurrentOrParentDirectory(m_PreviousStart),
    ResultInvalidPathFormat());

  *outLength = length;
  CopyName(outName->name, m_PreviousStart, length);
  return ResultSuccess();
}

}
