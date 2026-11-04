#include "nn/fs/fs_path.hpp"

#include <stdarg.h>
#include <string.h>

#include <utility>

#include "nn/util/string_builder.hpp"
#include "nn/util/string_util.hpp"

namespace nn::fs {

namespace {

const char EmptyPath[] = "";

size_t AlignUpPathLength(size_t length, size_t alignment) {
  return (length + alignment - 1) & ~(alignment - 1);
}

}

Path::Path()
  : m_Str(EmptyPath), m_WriteBuffer(), m_WriteBufferLength(0),
    m_IsNormalized(false) {}

Path::WriteBuffer Path::ReleaseBuffer() {
  m_WriteBufferLength = 0;
  m_Str = EmptyPath;
  return std::move(m_WriteBuffer);
}

void Path::ClearBuffer() {
  m_WriteBuffer.reset();
  m_WriteBufferLength = 0;
  m_Str = EmptyPath;
}

void Path::SetModifiableBuffer(WriteBuffer&& buffer, size_t length) {
  m_WriteBuffer = std::move(buffer);
  m_Str = m_WriteBuffer.get();
  m_WriteBufferLength = length;
}

void Path::SetReadOnlyBuffer(const char* buffer) {
  m_Str = buffer;
  m_WriteBuffer.reset();
  m_WriteBufferLength = 0;
}

Result Path::Preallocate(size_t length) {
  if (length <= m_WriteBufferLength) {
    return ResultSuccess();
  }

  const size_t size = AlignUpPathLength(length, WriteBufferAlignmentLength);
  WriteBuffer buffer = detail::MakeUnique<char[]>(size);
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr,
    ResultAllocationMemoryFailedMakeUnique());

  SetModifiableBuffer(std::move(buffer), size);
  return ResultSuccess();
}

Result Path::SetShallowBuffer(const char* buffer) {
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  SetReadOnlyBuffer(buffer);
  m_IsNormalized = true;
  return ResultSuccess();
}

const char* Path::GetString() const {
  return m_Str;
}

Result Path::Initialize(const Path& path) {
  NN_FS_RESULT_THROW_UNLESS(path.m_IsNormalized, ResultNotNormalized());

  const size_t length = strlen(path.m_Str);
  NN_FS_RESULT_DO(Preallocate(length + 1));

  const int copied = util::Strlcpy(m_WriteBuffer.get(), path.m_Str,
    static_cast<int>(length + 1));
  NN_FS_RESULT_THROW_UNLESS(static_cast<size_t>(copied) == length,
    ResultUnexpectedInPathA());

  m_IsNormalized = path.m_IsNormalized;
  return ResultSuccess();
}

Result Path::InitializeImpl(const char* path, size_t length) {
  if (length > 0 && path[0] != '\0') {
    NN_FS_RESULT_DO(Preallocate(length + 1));

    const int copied = util::Strlcpy(m_WriteBuffer.get(), path,
      static_cast<int>(length + 1));
    NN_FS_RESULT_THROW_UNLESS(static_cast<size_t>(copied) >= length,
      ResultUnexpectedInPathA());
  }
  else {
    ClearBuffer();
  }
  return ResultSuccess();
}

Result Path::Initialize(const char* path) {
  NN_FS_RESULT_THROW_UNLESS(path != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_DO(InitializeImpl(path, strlen(path)));
  m_IsNormalized = false;
  return ResultSuccess();
}

Result Path::Initialize(const char* path, size_t length) {
  NN_FS_RESULT_THROW_UNLESS(path != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_DO(InitializeImpl(path, length));
  m_IsNormalized = false;
  return ResultSuccess();
}

Result Path::InitializeWithNormalization(const char* path) {
  NN_FS_RESULT_DO(Initialize(path));

  if (IsPathRelative(m_Str)) {
    PathFlags flags;
    flags.AllowRelativePath();
    NN_FS_RESULT_DO(Normalize(flags));
  }
  else if (IsWindowsPath(m_Str, true)) {
    PathFlags flags;
    flags.AllowWindowsPath();
    NN_FS_RESULT_DO(Normalize(flags));
  }
  else {
    size_t length = 0;
    NN_FS_RESULT_DO(PathNormalizer::IsNormalized(&m_IsNormalized, &length,
      m_Str));
  }

  m_IsNormalized = true;
  return ResultSuccess();
}

Result Path::InitializeWithNormalization(const char* path, size_t length) {
  NN_FS_RESULT_DO(Initialize(path, length));

  if (IsPathRelative(m_Str)) {
    PathFlags flags;
    flags.AllowRelativePath();
    NN_FS_RESULT_DO(Normalize(flags));
  }
  else if (IsWindowsPath(m_Str, true)) {
    PathFlags flags;
    flags.AllowWindowsPath();
    NN_FS_RESULT_DO(Normalize(flags));
  }
  else {
    size_t normalizedLength = 0;
    NN_FS_RESULT_DO(PathNormalizer::IsNormalized(&m_IsNormalized,
      &normalizedLength, m_Str));
  }

  m_IsNormalized = true;
  return ResultSuccess();
}

Result Path::Normalize(const PathFlags& flags) {
  if (m_IsNormalized) {
    return ResultSuccess();
  }

  bool isNormalized = false;
  size_t length = 0;
  NN_FS_RESULT_DO(PathFormatter::IsNormalized(&isNormalized, &length, m_Str,
    flags));
  if (isNormalized) {
    m_IsNormalized = true;
    return ResultSuccess();
  }

  size_t bufferLength = m_WriteBufferLength;
  if (flags.IsRelativePathAllowed() && IsPathRelative(m_Str)) {
    bufferLength += 2;
  }
  if (flags.IsWindowsPathAllowed() && IsWindowsPath(m_Str, true)) {
    bufferLength += 1;
  }

  const size_t size = AlignUpPathLength(bufferLength,
    WriteBufferAlignmentLength);
  WriteBuffer buffer = detail::MakeUnique<char[]>(size);
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr,
    ResultAllocationMemoryFailedMakeUnique());

  NN_FS_RESULT_DO(PathFormatter::Normalize(buffer.get(), size,
    m_WriteBuffer.get(), m_WriteBufferLength, flags));

  SetModifiableBuffer(std::move(buffer), size);
  m_IsNormalized = true;
  return ResultSuccess();
}

Result Path::InitializeAsEmpty() {
  ClearBuffer();
  m_IsNormalized = true;
  return ResultSuccess();
}

Result Path::InitializeWithFormat(const char* format, ...) {
  NN_FS_RESULT_THROW_UNLESS(format != nullptr, ResultNullptrArgument());

  va_list args;
  va_start(args, format);

  char dummy = '\0';
  const int length = util::VSNPrintf(&dummy, 0, format, args);
  NN_FS_RESULT_DO(Preallocate(static_cast<size_t>(length) + 1));
  util::VSNPrintf(m_WriteBuffer.get(), m_WriteBufferLength, format, args);

  va_end(args);

  m_IsNormalized = false;
  return ResultSuccess();
}

Result Path::InitializeWithReplaceBackslash(const char* path) {
  NN_FS_RESULT_DO(Initialize(path));

  if (m_WriteBufferLength > 1) {
    Replace(m_WriteBuffer.get(), m_WriteBufferLength - 1, '\\', '/');
  }

  m_IsNormalized = false;
  return ResultSuccess();
}

Result Path::InitializeWithReplaceForwardSlashes(const char* path) {
  NN_FS_RESULT_DO(Initialize(path));

  if (m_WriteBufferLength > 1) {
    char* buffer = m_WriteBuffer.get();
    if (buffer[0] == '/' && buffer[1] == '/') {
      buffer[0] = '\\';
      buffer[1] = '\\';
    }
  }

  m_IsNormalized = false;
  return ResultSuccess();
}

Result Path::InitializeWithReplaceUnc(const char* path) {
  NN_FS_RESULT_DO(Initialize(path));

  m_IsNormalized = false;
  if (m_Str[0] == '\0') {
    return ResultSuccess();
  }

  char* buffer = m_WriteBuffer.get();

  char* scheme = strstr(buffer, ":///");
  if (scheme != nullptr) {
    scheme[2] = '\\';
    scheme[3] = '\\';
  }

  if (util::Strncmp(buffer, "@Host:", 6) == 0 && buffer[6] == '/' &&
    buffer[7] == '/') {
    buffer[6] = '\\';
    buffer[7] = '\\';
  }

  if (buffer[0] == '/' && buffer[1] == '/') {
    buffer[0] = '\\';
    buffer[1] = '\\';
  }

  return ResultSuccess();
}

Result Path::InsertParent(const char* parent) {
  NN_FS_RESULT_THROW_UNLESS(parent != nullptr, ResultNullptrArgument());
  if (parent[0] == '\0') {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(!IsWindowsPath(m_Str, false),
    ResultNotImplemented());

  size_t parentLength = strlen(parent);
  bool hasTrailingSeparator = false;
  if (parent[parentLength - 1] == '\\' || parent[parentLength - 1] == '/') {
    --parentLength;
    hasTrailingSeparator = true;
  }

  const bool hasLeadingSeparator = m_Str[0] == '/';
  const char* source = hasLeadingSeparator ? m_Str + 1 : m_Str;
  const size_t length = strlen(source);

  WriteBuffer buffer;
  if (m_WriteBuffer != nullptr) {
    buffer = ReleaseBuffer();
  }

  NN_FS_RESULT_DO(Preallocate(parentLength + 1 + length + 1));

  char* destination = m_WriteBuffer.get();
  if (length > 0) {
    if (buffer != nullptr) {
      util::Strlcpy(destination + parentLength + 1,
        buffer.get() + hasLeadingSeparator, static_cast<int>(length + 1));
    }
    else {
      for (size_t i = length; i > 0; --i) {
        destination[hasLeadingSeparator + parentLength + i - 1] =
          destination[hasLeadingSeparator + i - 1];
      }
      destination[hasLeadingSeparator + parentLength + length] = '\0';
    }
  }

  const int copied = util::Strlcpy(destination, parent,
    static_cast<int>(parentLength + 1));
  if (hasTrailingSeparator) {
    NN_FS_RESULT_THROW_UNLESS(static_cast<size_t>(copied) == parentLength + 1,
      ResultUnexpectedInPathA());
  }
  else {
    NN_FS_RESULT_THROW_UNLESS(static_cast<size_t>(copied) == parentLength,
      ResultUnexpectedInPathA());
  }

  if (length > 0) {
    destination[parentLength] = '/';
  }
  return ResultSuccess();
}

Result Path::InsertParent(const Path& parent) {
  return InsertParent(parent.m_Str);
}

Result Path::AppendChild(const char* child) {
  NN_FS_RESULT_THROW_UNLESS(child != nullptr, ResultNullptrArgument());

  const char* source = child;
  if (m_Str[0] != '\0') {
    if (source[0] == '/') {
      ++source;
    }
    if (source[0] == '\0') {
      return ResultSuccess();
    }
  }

  size_t length = strlen(m_Str);
  if (length == 0) {
    return Initialize(child);
  }
  if (m_Str[length - 1] == '\\' || m_Str[length - 1] == '/') {
    --length;
  }

  const size_t childLength = strlen(source);

  WriteBuffer buffer;
  if (m_WriteBuffer != nullptr) {
    buffer = ReleaseBuffer();
  }

  NN_FS_RESULT_DO(Preallocate(length + 1 + childLength + 1));

  char* destination = m_WriteBuffer.get();
  if (length > 0 && buffer != nullptr) {
    util::Strlcpy(destination, buffer.get(), static_cast<int>(length + 1));
  }

  destination[length] = '/';

  const int copied = util::Strlcpy(destination + length + 1, source,
    static_cast<int>(childLength + 1));
  NN_FS_RESULT_THROW_UNLESS(static_cast<size_t>(copied) == childLength,
    ResultUnexpectedInPathA());
  return ResultSuccess();
}

Result Path::AppendChild(const Path& child) {
  return AppendChild(child.m_Str);
}

Result Path::Combine(const Path& parent, const Path& child) {
  const size_t parentLength = strlen(parent.m_Str);
  const size_t childLength = strlen(child.m_Str);
  NN_FS_RESULT_DO(Preallocate(parentLength + 1 + childLength + 1));

  NN_FS_RESULT_DO(Initialize(parent));
  if (!IsEmpty()) {
    return AppendChild(child);
  }
  return Initialize(child);
}

Result Path::RemoveChild() {
  if (m_WriteBuffer == nullptr) {
    const size_t length = strlen(m_Str);
    if (length > 0) {
      NN_FS_RESULT_DO(Preallocate(length));
      util::Strlcpy(m_WriteBuffer.get(), m_Str, static_cast<int>(length + 1));
    }
  }

  char* buffer = m_WriteBuffer.get();
  int length = static_cast<int>(strlen(buffer));
  NN_FS_RESULT_THROW_UNLESS(length != 1 ||
    (buffer[0] != '/' && buffer[0] != '.'), ResultNotImplemented());

  if (length > 0 &&
    (buffer[length - 1] == '\\' || buffer[length - 1] == '/')) {
    --length;
  }

  while (--length >= 0 && buffer[length] != '\0') {
    if (buffer[length] == '/' || buffer[length] == '\\') {
      if (length > 0) {
        buffer[length] = '\0';
      }
      else {
        buffer[1] = '\0';
        length = 1;
      }
      break;
    }
  }

  NN_FS_RESULT_THROW_UNLESS(length > 0, ResultNotImplemented());
  return ResultSuccess();
}

Result SetUpFixedPath(Path* out, const char* path) {
  bool isNormalized = false;
  size_t length = 0;
  NN_FS_RESULT_DO(PathNormalizer::IsNormalized(&isNormalized, &length, path));
  NN_FS_RESULT_THROW_UNLESS(isNormalized, ResultInvalidPathFormat());
  NN_FS_RESULT_DO(out->SetShallowBuffer(path));
  return ResultSuccess();
}

Result SetUpFixedPath(Path* out, char* buffer, size_t size,
  const char* format, ...) {
  va_list args;
  va_start(args, format);
  const int length = util::VSNPrintf(buffer, size, format, args);
  va_end(args);
  NN_FS_RESULT_THROW_UNLESS(static_cast<size_t>(length) < size,
    ResultInvalidArgument());

  bool isNormalized = false;
  size_t normalizedLength = 0;
  NN_FS_RESULT_DO(PathNormalizer::IsNormalized(&isNormalized,
    &normalizedLength, buffer));
  NN_FS_RESULT_THROW_UNLESS(isNormalized, ResultInvalidPathFormat());
  NN_FS_RESULT_DO(out->SetShallowBuffer(buffer));
  return ResultSuccess();
}

}
