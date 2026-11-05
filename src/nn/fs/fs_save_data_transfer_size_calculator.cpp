#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data_management.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"

namespace nn::fs {

namespace {

const int64_t ExportHeaderSize = 0x10;
const int64_t ImportHeaderSize = 0x4000;
const int64_t ThumbnailFileSize = 0x40060;
const int64_t ImportWorkingSizeNx = 0x1C000;
const int64_t ImportWorkingSize = 0x40000;
const int64_t BlockSizeNx = 0x4000;
const int64_t BlockSize = 0x10000;

constexpr int64_t AlignUp(int64_t value, int64_t alignment) {
  return (value + alignment - 1) & ~(alignment - 1);
}

bool HasThumbnail(const SaveDataInfo& info) {
  return info.type == SaveDataType::Account ||
    info.type == SaveDataType::Device;
}

Result QuerySaveDataExportSizeImpl(int64_t* outSize,
  const SaveDataInfo& info) {
  int64_t size = 0;
  NN_FS_RESULT_DO(detail::QuerySaveDataInternalStorageTotalSize(&size,
    info.spaceId, info.saveDataId));
  *outSize = size + (HasThumbnail(info) ? ThumbnailFileSize : 0) +
    ExportHeaderSize;
  return ResultSuccess();
}

}

Result SaveDataTransferSizeCalculator::QuerySaveDataExportSize(
  int64_t* outSize, const SaveDataInfo& info) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(QuerySaveDataExportSizeImpl(outSize, info));
  return ResultSuccess();
}

int64_t SaveDataTransferSizeCalculator::QuerySaveDataRequiredSizeForImport(
  const SaveDataInfo& info) {
  return AlignUp(info.size + ImportHeaderSize, BlockSize) +
    (HasThumbnail(info) ? AlignUp(ThumbnailFileSize, BlockSize) : 0) +
    ImportWorkingSize;
}

int64_t SaveDataTransferSizeCalculator::QuerySaveDataRequiredSizeForImport(
  const SaveDataInfo& info, PlatformIdForSaveDataSizeCalculation platformId) {
  const bool isNx = platformId == PlatformIdForSaveDataSizeCalculation::Nx;
  const int64_t blockSize = isNx ? BlockSizeNx : BlockSize;
  const int64_t workingSize = isNx ? ImportWorkingSizeNx : ImportWorkingSize;
  const int64_t thumbnailSize = HasThumbnail(info) ? ThumbnailFileSize : 0;
  return AlignUp(info.size + ImportHeaderSize, blockSize) + workingSize +
    AlignUp(thumbnailSize, blockSize);
}

Result SaveDataTransferSizeCalculator::QuerySaveDataExportSize(
  int64_t* outSize, const SaveDataInfo* infos, uint32_t count) {
  int64_t totalSize = 0;
  for (uint32_t i = 0; i < count; ++i) {
    int64_t size;
    NN_FS_RESULT_DO(QuerySaveDataExportSize(&size, infos[i]));
    totalSize += size;
  }
  *outSize = totalSize;
  return ResultSuccess();
}

int64_t SaveDataTransferSizeCalculator::QuerySaveDataRequiredSizeForImport(
  const SaveDataInfo* infos, uint32_t count) {
  int64_t totalSize = 0;
  for (uint32_t i = 0; i < count; ++i) {
    totalSize += QuerySaveDataRequiredSizeForImport(infos[i]);
  }
  return totalSize;
}

}
