#pragma once

#include <stdint.h>

namespace nn::fs::fsa {

struct FileSystemAttribute {
  bool directoryEntryNameLengthMaxDefined;
  bool fileEntryNameLengthMaxDefined;
  bool directoryPathNameLengthMaxDefined;
  bool filePathNameLengthMaxDefined;
  bool utf16CreatePathNameLengthMaxDefined;
  bool utf16DeletePathNameLengthMaxDefined;
  bool utf16RenameSourcePathNameLengthMaxDefined;
  bool utf16RenameDestinationPathNameLengthMaxDefined;
  bool utf16OpenPathNameLengthMaxDefined;
  bool utf16DirectoryEntryNameLengthMaxDefined;
  bool utf16FileEntryNameLengthMaxDefined;
  bool utf16DirectoryPathNameLengthMaxDefined;
  bool utf16FilePathNameLengthMaxDefined;
  bool blockSizeDefined;
  char reserved1[26];
  int32_t directoryEntryNameLengthMax;
  int32_t fileEntryNameLengthMax;
  int32_t directoryPathNameLengthMax;
  int32_t filePathNameLengthMax;
  int32_t utf16CreatePathNameLengthMax;
  int32_t utf16DeletePathNameLengthMax;
  int32_t utf16RenameSourcePathNameLengthMax;
  int32_t utf16RenameDestinationPathNameLengthMax;
  int32_t utf16OpenPathNameLengthMax;
  int32_t utf16DirectoryEntryNameLengthMax;
  int32_t utf16FileEntryNameLengthMax;
  int32_t utf16DirectoryPathNameLengthMax;
  int32_t utf16FilePathNameLengthMax;
  int32_t blockSize;
  char reserved2[96];
};

static_assert(sizeof(FileSystemAttribute) == 192);

}
