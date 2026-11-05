#include "nn/fs/fs_ufs.hpp"
#include "nn/fs/fs_bis.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

using StorageDeviceManager =
  nn::sf::SharedPointer<fssrv::sf::IStorageDeviceManager>;
using StorageDevice = nn::sf::SharedPointer<fssrv::sf::IStorageDevice>;
using StorageDeviceOperator =
  nn::sf::SharedPointer<fssrv::sf::IStorageDeviceOperator>;

const int32_t StorageDevicePortUfs = 4;

enum UfsManagerOperationId : int32_t {
  UfsManagerOperationId_GetPatrolCount = 3,
  UfsManagerOperationId_SuspendPatrol = 4,
  UfsManagerOperationId_ResumePatrol = 5,
  UfsManagerOperationId_GetAndClearErrorInfo = 6,
};

enum UfsOperationId : int32_t {
  UfsOperationId_GetDescriptor = 2,
  UfsOperationId_GetConnectionInfo = 3,
  UfsOperationId_GetBootLun = 4,
  UfsOperationId_UpdateBootLun = 5,
  UfsOperationId_EraseSystemUserLu = 6,
  UfsOperationId_ReadRpmbWriteCounter = 7,
  UfsOperationId_WriteDataToRpmb = 8,
  UfsOperationId_ReadDataFromRpmb = 9,
  UfsOperationId_MarkBeforeEraseSystemUserLu = 10,
  UfsOperationId_CheckAfterEraseSystemUserLu = 11,
  UfsOperationId_GetAndClearWorstBackgroundOpStatus = 12,
};

const size_t UfsRpmbMessageDataFrameSize = sizeof(ufs::RpmbMessageDataFrame);
const uint8_t UfsSystemUserLu = 3;

Result GetUfsOperator(StorageDeviceOperator* outValue) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(deviceOperator->OpenStorageDeviceManager(
    nn::sf::Out<StorageDeviceManager>(&manager), StorageDevicePortUfs));
  StorageDevice device;
  NN_FS_RESULT_DO(
    manager->OpenDevice(nn::sf::Out<StorageDevice>(&device), 0));
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO(device->OpenOperator(
    nn::sf::Out<StorageDeviceOperator>(&ufsOperator)));
  *outValue = ufsOperator;
  return ResultSuccess();
}

Result GetUfsManagerOperator(StorageDeviceOperator* outValue) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(deviceOperator->OpenStorageDeviceManager(
    nn::sf::Out<StorageDeviceManager>(&manager), StorageDevicePortUfs));
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO(manager->OpenOperator(
    nn::sf::Out<StorageDeviceOperator>(&managerOperator)));
  *outValue = managerOperator;
  return ResultSuccess();
}

}

Result GetUfsDescriptor(void* buffer, size_t size, ufs::DescriptorIdn idn,
  uint8_t index) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(buffer != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn2Out(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(buffer, size),
    nn::sf::InBuffer(&idn, sizeof(idn)),
    nn::sf::InBuffer(&index, sizeof(index)), 0, 0,
    UfsOperationId_GetDescriptor));
  return ResultSuccess();
}

Result GetAndClearUfsWorstBackgroundOpStatus(uint32_t* outStatus) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outStatus != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outStatus, sizeof(uint32_t)),
    UfsOperationId_GetAndClearWorstBackgroundOpStatus));
  return ResultSuccess();
}

Result GetAndClearUfsErrorInfo(ufs::ErrorInfo* outErrorInfo,
  size_t* outLogSize, char* logBuffer, size_t logBufferSize) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outErrorInfo != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outLogSize != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(logBuffer != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsManagerOperator(&managerOperator));
  int64_t errorInfoSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut2(
    nn::sf::Out<int64_t>(&errorInfoSize),
    nn::sf::OutBuffer(outErrorInfo, sizeof(ufs::ErrorInfo)),
    nn::sf::Out<int64_t>(reinterpret_cast<int64_t*>(outLogSize)),
    nn::sf::OutBuffer(logBuffer, logBufferSize),
    UfsManagerOperationId_GetAndClearErrorInfo));
  return ResultSuccess();
}

Result GetUfsConnectionInfo(ufs::ConnectionInfo* outInfo) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outInfo != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outInfo, sizeof(ufs::ConnectionInfo)),
    UfsOperationId_GetConnectionInfo));
  return ResultSuccess();
}

Result GetUfsBootLun(uint8_t* outBootLun) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outBootLun != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  uint8_t bootLun = 0;
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(&bootLun, sizeof(bootLun)),
    UfsOperationId_GetBootLun));
  switch (bootLun) {
    case 1:
      *outBootLun = 0;
      break;
    case 2:
      *outBootLun = 1;
      break;
    default:
      NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(false,
        ResultTargetNotFound());
  }
  return ResultSuccess();
}

Result UpdateUfsBootLun(uint8_t bootLun) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(bootLun < 2,
    ResultInvalidArgument());
  StorageDeviceOperator ufsOperator;
  uint8_t deviceBootLun = bootLun != 0 ? 2 : 1;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn(
    nn::sf::InBuffer(&deviceBootLun, sizeof(deviceBootLun)), 0,
    sizeof(deviceBootLun), UfsOperationId_UpdateBootLun));
  return ResultSuccess();
}

Result OpenUfsBootLu(std::unique_ptr<IStorage>* outStorage, uint8_t bootLun) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(bootLun < 2,
    ResultInvalidArgument());
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::OpenBisPartition(outStorage,
    bootLun != 0 ? BisPartitionId::BootPartition2Root
      : BisPartitionId::BootPartition1Root));
  return ResultSuccess();
}

Result EraseUfsSytemUserLu() {
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  uint8_t lu = UfsSystemUserLu;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn(
    nn::sf::InBuffer(&lu, sizeof(lu)), 0, sizeof(lu),
    UfsOperationId_EraseSystemUserLu));
  return ResultSuccess();
}

Result MarkBeforeEraseUfsSytemUserLu() {
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  uint8_t lu = UfsSystemUserLu;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn(
    nn::sf::InBuffer(&lu, sizeof(lu)), 0, sizeof(lu),
    UfsOperationId_MarkBeforeEraseSystemUserLu));
  return ResultSuccess();
}

Result CheckAfterEraseUfsSytemUserLu() {
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  uint8_t lu = UfsSystemUserLu;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn(
    nn::sf::InBuffer(&lu, sizeof(lu)), 0, sizeof(lu),
    UfsOperationId_CheckAfterEraseSystemUserLu));
  return ResultSuccess();
}

Result GetUfsPatrolCount(uint32_t* outCount) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outCount != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outCount, sizeof(uint32_t)),
    UfsManagerOperationId_GetPatrolCount));
  return ResultSuccess();
}

Result SuspendUfsPatrol() {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->Operate(
    UfsManagerOperationId_SuspendPatrol));
  return ResultSuccess();
}

Result ResumeUfsPatrol() {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->Operate(
    UfsManagerOperationId_ResumePatrol));
  return ResultSuccess();
}

Result ReadUfsRpmbWriteCounter(ufs::RpmbMessageDataFrame* outFrame,
  uint8_t region, const ufs::RpmbMessageDataFrame* frame) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outFrame != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(frame != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn2Out(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outFrame, UfsRpmbMessageDataFrameSize),
    nn::sf::InBuffer(&region, sizeof(region)),
    nn::sf::InBuffer(frame, UfsRpmbMessageDataFrameSize), 0, 0,
    UfsOperationId_ReadRpmbWriteCounter));
  return ResultSuccess();
}

Result WriteDataToUfsRpmb(ufs::RpmbMessageDataFrame* outFrame,
  uint8_t region, const ufs::RpmbMessageDataFrame* frame) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outFrame != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(frame != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn2Out(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outFrame, UfsRpmbMessageDataFrameSize),
    nn::sf::InBuffer(&region, sizeof(region)),
    nn::sf::InBuffer(frame, UfsRpmbMessageDataFrameSize), 0, 0,
    UfsOperationId_WriteDataToRpmb));
  return ResultSuccess();
}

Result ReadDataFromUfsRpmb(ufs::RpmbMessageDataFrame* outFrame,
  uint8_t region, const ufs::RpmbMessageDataFrame* frame) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outFrame != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(frame != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator ufsOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetUfsOperator(&ufsOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ufsOperator->OperateIn2Out(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outFrame, UfsRpmbMessageDataFrameSize),
    nn::sf::InBuffer(&region, sizeof(region)),
    nn::sf::InBuffer(frame, UfsRpmbMessageDataFrameSize), 0, 0,
    UfsOperationId_ReadDataFromRpmb));
  return ResultSuccess();
}

}
