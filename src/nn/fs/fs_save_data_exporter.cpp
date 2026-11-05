#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"

namespace nn::fs {

SaveDataExporter::SaveDataExporter(
  nn::sf::SharedPointer<fssrv::sf::ISaveDataExporter>&& exporter) {
  m_Interface.Swap(exporter);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(m_Interface->GetSaveDataInfo(
    nn::sf::Out<SaveDataInfo>(&m_SaveDataInfo)));
}

const SaveDataInfo& SaveDataExporter::GetSaveDataInfo() {
  return m_SaveDataInfo;
}

Result SaveDataExporter::PullInitialData(void* buffer, size_t size) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->PullInitialData(
    nn::sf::OutBuffer(buffer, size)));
  return ResultSuccess();
}

Result SaveDataExporter::Pull(size_t* outPulledSize, void* buffer,
  size_t size) {
  uint64_t pulledSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->Pull(
    nn::sf::Out<uint64_t>(&pulledSize), nn::sf::OutBuffer(buffer, size)));
  *outPulledSize = pulledSize;
  return ResultSuccess();
}

int64_t SaveDataExporter::GetRestSize() {
  uint64_t restSize = 0;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(m_Interface->GetRestSize(
    nn::sf::Out<uint64_t>(&restSize)));
  return restSize;
}

SaveDataImporter::SaveDataImporter(
  nn::sf::SharedPointer<fssrv::sf::ISaveDataImporter>&& importer) {
  m_Interface.Swap(importer);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(m_Interface->GetSaveDataInfo(
    nn::sf::Out<SaveDataInfo>(&m_SaveDataInfo)));
}

Result SaveDataImporter::Finalize() {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->Finalize());
  return ResultSuccess();
}

const SaveDataInfo& SaveDataImporter::GetSaveDataInfo() {
  return m_SaveDataInfo;
}

Result SaveDataImporter::Push(const void* buffer, size_t size) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->Push(
    nn::sf::InBuffer(buffer, size)));
  return ResultSuccess();
}

int64_t SaveDataImporter::GetRestSize() {
  uint64_t restSize = 0;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(m_Interface->GetRestSize(
    nn::sf::Out<uint64_t>(&restSize)));
  return restSize;
}

}
