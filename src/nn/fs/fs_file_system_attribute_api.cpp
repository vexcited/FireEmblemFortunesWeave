#include <algorithm>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fsa/fs_file_system_attribute.hpp"

namespace nn::fs {

namespace {

const int PathLengthMax = 0x300;

class LengthMaxCalculator {
public:
  LengthMaxCalculator() : m_IsDefined(false), m_LengthMax(0) {}

  void Update(bool isDefined, int lengthMax) {
    if (isDefined) {
      m_LengthMax = m_IsDefined ? std::min(m_LengthMax, lengthMax) :
        lengthMax;
      m_IsDefined = true;
    }
  }

  bool IsDefined() const {
    return m_IsDefined;
  }

  int GetLengthMax() const {
    return m_LengthMax;
  }

private:
  bool m_IsDefined;
  int m_LengthMax;
};

}

Result GetPathLengthMax(size_t* outLength, const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::FindFileSystem(&fileSystem, &subPath, path));

  fsa::FileSystemAttribute attribute = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystem->GetFileSystemAttribute(&attribute));

  LengthMaxCalculator calculator;
  calculator.Update(attribute.directoryPathNameLengthMaxDefined,
    attribute.directoryPathNameLengthMax);
  calculator.Update(attribute.filePathNameLengthMaxDefined,
    attribute.filePathNameLengthMax);
  *outLength = calculator.IsDefined() ?
    std::min(calculator.GetLengthMax(), PathLengthMax) : PathLengthMax;
  return ResultSuccess();
}

Result GetEntryNameLengthMax(size_t* outLength, const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::FindFileSystem(&fileSystem, &subPath, path));

  fsa::FileSystemAttribute attribute = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystem->GetFileSystemAttribute(&attribute));

  LengthMaxCalculator calculator;
  calculator.Update(attribute.directoryEntryNameLengthMaxDefined,
    attribute.directoryEntryNameLengthMax);
  calculator.Update(attribute.fileEntryNameLengthMaxDefined,
    attribute.fileEntryNameLengthMax);
  *outLength = calculator.IsDefined() ?
    std::min(calculator.GetLengthMax(), PathLengthMax) : PathLengthMax;
  return ResultSuccess();
}

Result GetUtf16PathLengthMax(bool* outIsDefined, size_t* outLength,
  const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::FindFileSystem(&fileSystem, &subPath, path));

  fsa::FileSystemAttribute attribute = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystem->GetFileSystemAttribute(&attribute));

  LengthMaxCalculator calculator;
  calculator.Update(attribute.utf16CreatePathNameLengthMaxDefined,
    attribute.utf16CreatePathNameLengthMax);
  calculator.Update(attribute.utf16DeletePathNameLengthMaxDefined,
    attribute.utf16DeletePathNameLengthMax);
  calculator.Update(attribute.utf16RenameSourcePathNameLengthMaxDefined,
    attribute.utf16RenameSourcePathNameLengthMax);
  calculator.Update(attribute.utf16RenameDestinationPathNameLengthMaxDefined,
    attribute.utf16RenameDestinationPathNameLengthMax);
  calculator.Update(attribute.utf16OpenPathNameLengthMaxDefined,
    attribute.utf16OpenPathNameLengthMax);
  calculator.Update(attribute.utf16FilePathNameLengthMaxDefined,
    attribute.utf16FilePathNameLengthMax);
  calculator.Update(attribute.utf16DirectoryPathNameLengthMaxDefined,
    attribute.utf16DirectoryPathNameLengthMax);
  *outIsDefined = calculator.IsDefined();
  *outLength = calculator.GetLengthMax();
  return ResultSuccess();
}

Result GetUtf16EntryNameLengthMax(bool* outIsDefined, size_t* outLength,
  const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::FindFileSystem(&fileSystem, &subPath, path));

  fsa::FileSystemAttribute attribute = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystem->GetFileSystemAttribute(&attribute));

  LengthMaxCalculator calculator;
  calculator.Update(attribute.utf16FileEntryNameLengthMaxDefined,
    attribute.utf16FileEntryNameLengthMax);
  calculator.Update(attribute.utf16DirectoryEntryNameLengthMaxDefined,
    attribute.utf16DirectoryEntryNameLengthMax);
  *outIsDefined = calculator.IsDefined();
  *outLength = calculator.GetLengthMax();
  return ResultSuccess();
}

Result GetBlockSize(int* outBlockSize, const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::FindFileSystem(&fileSystem, &subPath, path));

  fsa::FileSystemAttribute attribute = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystem->GetFileSystemAttribute(&attribute));

  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(attribute.blockSizeDefined,
    ResultNotImplemented());
  *outBlockSize = attribute.blockSize;
  return ResultSuccess();
}

}
