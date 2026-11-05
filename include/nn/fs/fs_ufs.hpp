#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/fs_istorage.hpp"
#include "nn/result.hpp"

namespace nn::ufs {

enum class DescriptorIdn : uint8_t {};

struct ErrorInfo {
  char data[0x18];
};

struct ConnectionInfo {
  char data[0x4];
};

struct RpmbMessageDataFrame {
  char data[0x200];
};

}

namespace nn::fs {

Result GetUfsDescriptor(void* buffer, size_t size, ufs::DescriptorIdn idn,
  uint8_t index);
Result GetAndClearUfsWorstBackgroundOpStatus(uint32_t* outStatus);
Result GetAndClearUfsErrorInfo(ufs::ErrorInfo* outErrorInfo,
  size_t* outLogSize, char* logBuffer, size_t logBufferSize);
Result GetUfsConnectionInfo(ufs::ConnectionInfo* outInfo);
Result GetUfsBootLun(uint8_t* outBootLun);
Result UpdateUfsBootLun(uint8_t bootLun);
Result OpenUfsBootLu(std::unique_ptr<IStorage>* outStorage, uint8_t bootLun);
Result EraseUfsSytemUserLu();
Result MarkBeforeEraseUfsSytemUserLu();
Result CheckAfterEraseUfsSytemUserLu();
Result GetUfsPatrolCount(uint32_t* outCount);
Result SuspendUfsPatrol();
Result ResumeUfsPatrol();
Result ReadUfsRpmbWriteCounter(ufs::RpmbMessageDataFrame* outFrame,
  uint8_t region, const ufs::RpmbMessageDataFrame* frame);
Result WriteDataToUfsRpmb(ufs::RpmbMessageDataFrame* outFrame,
  uint8_t region, const ufs::RpmbMessageDataFrame* frame);
Result ReadDataFromUfsRpmb(ufs::RpmbMessageDataFrame* outFrame,
  uint8_t region, const ufs::RpmbMessageDataFrame* frame);

}
