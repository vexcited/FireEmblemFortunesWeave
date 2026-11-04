#include "nn/fs/fs_path.hpp"

#include "nn/fs/detail/fs_memory.hpp"

namespace nn::fs {

namespace {

const size_t EntryNameLengthMax = 768;

enum PathState {
  PathState_Start,
  PathState_Normal,
  PathState_FirstSeparator,
  PathState_Separator,
  PathState_CurrentDirectory,
  PathState_ParentDirectory,
};

bool IsSeparatorCharacter(char c) {
  return c == '/' || c == '\\';
}

void ReplaceParentDirectoryPath(char* destination, const char* source) {
  destination[0] = '/';

  int i = 1;
  while (source[i] != '\0') {
    if (IsSeparatorCharacter(source[i - 1]) && source[i] == '.' &&
      source[i + 1] == '.' && IsSeparatorCharacter(source[i + 2])) {
      destination[i - 1] = '/';
      destination[i] = '.';
      destination[i + 1] = '.';
      destination[i + 2] = '/';
      i += 3;
    }
    else {
      if (source[i - 1] == '\\' && source[i] == '.' &&
        source[i + 1] == '.' && source[i + 2] == '\0') {
        destination[i - 1] = '/';
        destination[i] = '.';
        destination[i + 1] = '.';
        i += 2;
        break;
      }
      destination[i] = source[i];
      ++i;
    }
  }
  destination[i] = '\0';
}

}

bool PathNormalizer::IsParentDirectoryPathReplacementNeeded(const char* path) {
  if (!IsSeparatorCharacter(path[0])) {
    return false;
  }

  for (int i = 0; path[i] != '\0'; ++i) {
    const char c = path[i];
    if (c == '\\' && path[i + 1] == '.' && path[i + 2] == '.') {
      const char next = path[i + 3];
      if (next == '\0' || IsSeparatorCharacter(next)) {
        return true;
      }
    }
    if (IsSeparatorCharacter(c) && path[i + 1] == '.' &&
      path[i + 2] == '.' && path[i + 3] == '\\') {
      return true;
    }
  }
  return false;
}

Result PathNormalizer::Normalize(char* buffer, size_t* outLength,
  const char* path, size_t bufferSize, bool isWindowsPath,
  bool isDriveRelativePath, bool allowAllCharacters) {
  const char* current = path;
  size_t length = 0;

  if (current[0] != '/') {
    NN_FS_RESULT_THROW_UNLESS(isDriveRelativePath,
      ResultInvalidPathFormat());
    buffer[length++] = '/';
  }

  std::unique_ptr<char[], detail::Deleter> replacement;
  if (IsParentDirectoryPathReplacementNeeded(current)) {
    replacement = detail::MakeUnique<char[]>(EntryNameLengthMax + 1);
    NN_FS_RESULT_THROW_UNLESS(replacement != nullptr,
      ResultAllocationMemoryFailedMakeUnique());
    ReplaceParentDirectoryPath(replacement.get(), current);
    current = replacement.get();
  }

  bool skipNextSeparator = false;
  size_t i = 0;
  while (current[i] != '\0') {
    if (current[i] == '/') {
      do {
        ++i;
      } while (current[i] == '/');

      if (current[i] == '\0') {
        break;
      }

      if (!skipNextSeparator) {
        if (length + 1 == bufferSize) {
          buffer[length] = '\0';
          *outLength = length;
          return ResultTooLongPath();
        }
        buffer[length++] = '/';
      }
      skipNextSeparator = false;
    }

    size_t entryLength = 0;
    while (current[i + entryLength] != '/' &&
      current[i + entryLength] != '\0') {
      if (!allowAllCharacters) {
        NN_FS_RESULT_DO(CheckInvalidCharacter(current[i + entryLength]));
      }
      ++entryLength;
    }

    if (IsRelativePathStartingWithCurrentDirectory(current + i,
      PathSeparatorOption_Slash)) {
      skipNextSeparator = true;
    }
    else if (IsRelativePathStartingWithParentDirectory(current + i,
      PathSeparatorOption_Slash)) {
      if (length == 1) {
        NN_FS_RESULT_THROW_UNLESS(isWindowsPath,
          ResultDirectoryUnobtainable());
        --length;
      }
      else {
        length -= 2;
        do {
          if (buffer[length] == '/') {
            break;
          }
        } while (--length != 0);
      }
    }
    else {
      if (length + entryLength + 1 > bufferSize) {
        const size_t copyLength = bufferSize - (length + 1);
        for (size_t j = 0; j < copyLength; ++j) {
          buffer[length++] = current[i + j];
        }
        buffer[length] = '\0';
        *outLength = length;
        return ResultTooLongPath();
      }

      for (size_t j = 0; j < entryLength; ++j) {
        buffer[length++] = current[i + j];
      }
    }

    i += entryLength;
  }

  if (skipNextSeparator) {
    --length;
  }

  if (length == 0 && bufferSize != 0) {
    length = 1;
    buffer[0] = '/';
  }

  NN_FS_RESULT_THROW_UNLESS(bufferSize >= length - 1, ResultTooLongPath());

  buffer[length] = '\0';

  bool isNormalized = false;
  size_t normalizedLength = 0;
  NN_FS_RESULT_DO(IsNormalized(&isNormalized, &normalizedLength, buffer,
    allowAllCharacters));

  *outLength = length;
  return ResultSuccess();
}

Result PathNormalizer::Normalize(char* buffer, size_t* outLength,
  const char* path, size_t bufferSize, bool isWindowsPath,
  bool isDriveRelativePath) {
  return Normalize(buffer, outLength, path, bufferSize, isWindowsPath,
    isDriveRelativePath, false);
}

Result PathNormalizer::IsNormalized(bool* outNormalized, size_t* outLength,
  const char* path, bool allowAllCharacters) {
  PathState state = PathState_Start;
  size_t length = 0;
  while (path[length] != '\0') {
    const char c = path[length++];

    if (!allowAllCharacters && state != PathState_Start) {
      NN_FS_RESULT_DO(CheckInvalidCharacter(c));
    }

    switch (state) {
      case PathState_Start:
        NN_FS_RESULT_THROW_UNLESS(c == '/', ResultInvalidPathFormat());
        state = PathState_FirstSeparator;
        break;
      case PathState_Normal:
        if (c == '/') {
          state = PathState_Separator;
        }
        break;
      case PathState_FirstSeparator:
      case PathState_Separator:
        if (c == '/') {
          *outNormalized = false;
          return ResultSuccess();
        }
        state = c == '.' ? PathState_CurrentDirectory : PathState_Normal;
        break;
      case PathState_CurrentDirectory:
        if (c == '/') {
          *outNormalized = false;
          return ResultSuccess();
        }
        state = c == '.' ? PathState_ParentDirectory : PathState_Normal;
        break;
      case PathState_ParentDirectory:
        if (c == '/') {
          *outNormalized = false;
          return ResultSuccess();
        }
        state = PathState_Normal;
        break;
    }
  }

  switch (state) {
    case PathState_Start:
      return ResultInvalidPathFormat();
    case PathState_Normal:
    case PathState_FirstSeparator:
      *outNormalized = true;
      break;
    case PathState_Separator:
    case PathState_CurrentDirectory:
    case PathState_ParentDirectory:
      *outNormalized = false;
      break;
  }
  *outLength = length;
  return ResultSuccess();
}

Result PathNormalizer::IsNormalized(bool* outNormalized, size_t* outLength,
  const char* path) {
  return IsNormalized(outNormalized, outLength, path, false);
}

}
