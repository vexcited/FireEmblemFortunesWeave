#include "nn/fs/dbm/fs_dbm_file_system_control_area.hpp"

namespace nn::fs::dbm {

FileSystemControlArea::FileSystemControlArea() : m_Storage() {}

void FileSystemControlArea::Initialize(SubStorage storage) {
  m_Storage = storage;
}

void FileSystemControlArea::Finalize() {}

Result FileSystemControlArea::ExpandAllocationTableInfo(uint32_t blockCount) {
  int64_t blockSize = 0;
  NN_FS_RESULT_DO(m_Storage.Read(BlockSizePosition, &blockSize,
    sizeof(blockSize)));

  StorageInfo allocationTableInfo;
  NN_FS_RESULT_DO(m_Storage.Read(AllocationTableInfoPosition,
    &allocationTableInfo, sizeof(allocationTableInfo)));
  const int64_t allocationTableOffset = allocationTableInfo.offset;

  StorageInfo dataInfo;
  NN_FS_RESULT_DO(m_Storage.Read(DataInfoPosition, &dataInfo,
    sizeof(dataInfo)));
  const int64_t dataOffset = dataInfo.offset;

  StorageInfo info = {allocationTableOffset, blockCount, 0};
  NN_FS_RESULT_DO(m_Storage.Write(AllocationTableInfoPosition, &info,
    sizeof(info)));

  info = {dataOffset, blockCount, 0};
  return m_Storage.Write(DataInfoPosition, &info, sizeof(info));
}

Result FileSystemControlArea::WriteStorageInfo(int64_t offset, uint32_t size,
  uint32_t position) {
  const StorageInfo info = {offset, size, 0};
  return m_Storage.Write(position, &info, sizeof(info));
}

Result FileSystemControlArea::ReadStorageInfo(int64_t* outOffset,
  uint32_t* outSize, uint32_t position) {
  StorageInfo info;
  NN_FS_RESULT_DO(m_Storage.Read(position, &info, sizeof(info)));
  *outOffset = info.offset;
  *outSize = info.size;
  return ResultSuccess();
}

Result FileSystemControlArea::WriteAllocationInfo(uint32_t index,
  uint32_t position) {
  return m_Storage.Write(position, &index, sizeof(index));
}

Result FileSystemControlArea::ReadAllocationInfo(uint32_t* outIndex,
  uint32_t position) {
  uint32_t index;
  NN_FS_RESULT_DO(m_Storage.Read(position, &index, sizeof(index)));
  *outIndex = index;
  return ResultSuccess();
}

}
