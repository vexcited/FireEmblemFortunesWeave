#include "nn/fs/fs_hierarchical_rom_file_table.hpp"

#include <string.h>

namespace nn::fs {

namespace {

const uint32_t InvalidPosition = 0xFFFFFFFF;

constexpr Result ResultDbmKeyNotFound() {
  return detail::MakeResult(7902);
}

constexpr Result ResultDbmFileNotFound() {
  return detail::MakeResult(7903);
}

constexpr Result ResultDbmDirectoryNotFound() {
  return detail::MakeResult(7904);
}

constexpr Result ResultDbmFindFinished() {
  return detail::MakeResult(7910);
}

constexpr Result ResultDbmInvalidOperation() {
  return detail::MakeResult(7914);
}

}

template<typename Key, typename Value>
Result KeyValueRomStorage<Key, Value>::ReadKeyValue(Element* outElement,
  char* outName, size_t* outNameLength, Position position) {
  NN_FS_RESULT_DO(m_KeyValueStorage.Read(position, outElement,
    sizeof(Element)));

  *outNameLength = outElement->size;
  return m_KeyValueStorage.Read(position + sizeof(Element), outName,
    outElement->size);
}

HierarchicalRomFileTable::HierarchicalRomFileTable()
  : m_DirectoryTable(), m_FileTable() {}

Result HierarchicalRomFileTable::GetDirectoryEntry(
  DirectoryRomEntry* outEntry, RomDirectoryId id) {
  DirectoryEntryMapTable::Element element = {};
  const Result result = m_DirectoryTable.ReadElement(&element, id);
  if (IsSuccess(result)) {
    *outEntry = element.value;
    return result;
  }
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  FileEntryMapTable::Element fileElement = {};
  const Result fileResult = m_FileTable.ReadElement(&fileElement, id);
  NN_FS_RESULT_THROW_UNLESS(IsFailure(fileResult),
    ResultDbmInvalidOperation());
  NN_FS_RESULT_THROW_UNLESS(
    !IsResultIncluded(fileResult, ResultDbmKeyNotFound()),
    ResultDbmDirectoryNotFound());
  return fileResult;
}

Result HierarchicalRomFileTable::GetFileEntry(FileRomEntry* outEntry,
  RomFileId id) {
  FileEntryMapTable::Element element = {};
  const Result result = m_FileTable.ReadElement(&element, id);
  if (IsSuccess(result)) {
    *outEntry = element.value;
    return result;
  }
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  DirectoryEntryMapTable::Element directoryElement = {};
  const Result directoryResult = m_DirectoryTable.ReadElement(
    &directoryElement, id);
  NN_FS_RESULT_THROW_UNLESS(IsFailure(directoryResult),
    ResultDbmInvalidOperation());
  NN_FS_RESULT_THROW_UNLESS(
    !IsResultIncluded(directoryResult, ResultDbmKeyNotFound()),
    ResultDbmFileNotFound());
  return directoryResult;
}

Result HierarchicalRomFileTable::OpenFile(RomFileInfo* outInfo,
  RomFileId id) {
  FileRomEntry entry = {};
  NN_FS_RESULT_DO(GetFileEntry(&entry, id));
  *outInfo = entry.info;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindOpen(FindPosition* outPosition,
  RomDirectoryId id) {
  outPosition->nextDirectory = InvalidPosition;
  outPosition->nextFile = InvalidPosition;

  DirectoryRomEntry entry = {};
  NN_FS_RESULT_DO(GetDirectoryEntry(&entry, id));

  outPosition->nextDirectory = entry.directory;
  outPosition->nextFile = entry.file;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindNextDirectory(char* outName,
  FindPosition* position, size_t length) {
  (void)length;
  NN_FS_RESULT_THROW_UNLESS(position->nextDirectory != InvalidPosition,
    ResultDbmFindFinished());

  DirectoryEntryMapTable::Element element = {};
  size_t nameLength = 0;
  NN_FS_RESULT_DO(m_DirectoryTable.ReadKeyValue(&element, outName,
    &nameLength, position->nextDirectory));

  outName[nameLength] = '\0';
  position->nextDirectory = element.value.next;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindNextFile(char* outName,
  FindPosition* position, size_t length) {
  (void)length;
  NN_FS_RESULT_THROW_UNLESS(position->nextFile != InvalidPosition,
    ResultDbmFindFinished());

  FileEntryMapTable::Element element = {};
  size_t nameLength = 0;
  NN_FS_RESULT_DO(m_FileTable.ReadKeyValue(&element, outName, &nameLength,
    position->nextFile));

  outName[nameLength] = '\0';
  position->nextFile = element.value.next;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::QueryRomFileSystemSize(
  int64_t* outDirectoryEntrySize, int64_t* outFileEntrySize) {
  *outDirectoryEntrySize = m_DirectoryTable.GetTotalEntrySize();
  *outFileEntrySize = m_FileTable.GetTotalEntrySize();
  return ResultSuccess();
}

Result HierarchicalRomFileTable::DumpTree() {
  return DumpDirectory(0, 0);
}

}
