#pragma once

#include <stdint.h>

#include "nn/result.hpp"

namespace nn::fs {

namespace detail {

constexpr Result MakeResult(uint32_t description) {
  return Result{2u | description << 9};
}

}

inline bool IsSuccess(Result result) {
  return result.value == 0;
}

inline bool IsFailure(Result result) {
  return result.value != 0;
}

inline bool IsResultIncluded(Result result, Result expected) {
  return (result.value & 0x3FFFFF) == expected.value;
}

inline bool IsResultDataCorrupted(Result result) {
  const uint32_t module = result.value & 0x1FF;
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return module == 2 && description >= 4000 && description < 5000;
}

constexpr Result ResultSuccess() {
  return Result{0};
}

constexpr Result ResultGameCardNotInsertedOnGetHandle() {
  return detail::MakeResult(2951);
}

constexpr Result ResultInvalidGameCardHandle() {
  return detail::MakeResult(2954);
}

constexpr Result ResultAllocationMemoryFailedInApplicationA() {
  return detail::MakeResult(3213);
}

constexpr Result ResultAllocationMemoryFailedInBcatSaveDataA() {
  return detail::MakeResult(3214);
}

constexpr Result ResultAllocationMemoryFailedInContentA() {
  return detail::MakeResult(3219);
}

constexpr Result ResultAllocationMemoryFailedInImageDirectoryA() {
  return detail::MakeResult(3232);
}

constexpr Result ResultAllocationMemoryFailedInLogoA() {
  return detail::MakeResult(3233);
}

constexpr Result ResultAllocationMemoryFailedNew() {
  return detail::MakeResult(3420);
}

constexpr Result ResultUsableSpaceNotEnough() {
  return detail::MakeResult(31);
}

constexpr Result ResultAllocationMemoryFailed() {
  return detail::MakeResult(3200);
}

constexpr Result ResultInvalidSaveDataTransferInitialData() {
  return detail::MakeResult(7034);
}

constexpr Result ResultUnsupportedSaveDataTransferInitialDataVersion() {
  return detail::MakeResult(7037);
}

constexpr Result ResultMountNameAlreadyExists() {
  return detail::MakeResult(60);
}

constexpr Result ResultStorageDeviceNotReady() {
  return detail::MakeResult(3101);
}

constexpr Result ResultNotImplemented() {
  return detail::MakeResult(3001);
}

constexpr Result ResultAllocationMemoryFailedMakeUnique() {
  return detail::MakeResult(3422);
}

constexpr Result ResultUnexpectedInPathA() {
  return detail::MakeResult(5328);
}

constexpr Result ResultUnexpectedInMountUtilityA() {
  return detail::MakeResult(5319);
}

constexpr Result ResultInvalidArgument() {
  return detail::MakeResult(6001);
}

constexpr Result ResultTooLongPath() {
  return detail::MakeResult(6003);
}

constexpr Result ResultInvalidCharacter() {
  return detail::MakeResult(6004);
}

constexpr Result ResultInvalidPathFormat() {
  return detail::MakeResult(6005);
}

constexpr Result ResultDirectoryUnobtainable() {
  return detail::MakeResult(6006);
}

constexpr Result ResultNotNormalized() {
  return detail::MakeResult(6007);
}

constexpr Result ResultNullptrArgument() {
  return detail::MakeResult(6063);
}

constexpr Result ResultAllocatorAlreadyRegistered() {
  return detail::MakeResult(6458);
}

constexpr Result ResultDefaultAllocatorUsed() {
  return detail::MakeResult(6459);
}

constexpr Result ResultAllocatorAlignmentViolation() {
  return detail::MakeResult(6461);
}

constexpr Result ResultInvalidMountName() {
  return detail::MakeResult(6065);
}

constexpr Result ResultNotMounted() {
  return detail::MakeResult(6905);
}

constexpr Result ResultPathAlreadyExists() {
  return detail::MakeResult(2);
}

constexpr Result ResultInvalidSize() {
  return detail::MakeResult(6062);
}

constexpr Result ResultAllocationMemoryFailedInSaveDataManagementA() {
  return detail::MakeResult(3242);
}

constexpr Result ResultAllocationMemoryFailedInSaveDataManagementB() {
  return detail::MakeResult(3243);
}

constexpr Result ResultThumbnailHashVerificationFailed() {
  return detail::MakeResult(4352);
}

constexpr Result ResultOutOfRange() {
  return detail::MakeResult(3005);
}

constexpr Result ResultInvalidOffset() {
  return detail::MakeResult(6061);
}

constexpr Result ResultAllocationMemoryFailedInSystemSaveDataA() {
  return detail::MakeResult(3246);
}

constexpr Result ResultAllocationMemoryFailedInDeviceSaveDataA() {
  return detail::MakeResult(3224);
}

constexpr Result ResultUsableSpaceNotEnoughForSaveData() {
  return detail::MakeResult(32);
}

constexpr Result ResultUsableSpaceNotEnoughForCacheStorage() {
  return detail::MakeResult(33);
}

constexpr Result ResultSaveDataExtensionLocked() {
  return detail::MakeResult(3004);
}

constexpr Result ResultInvalidAlignment() {
  return detail::MakeResult(6064);
}

constexpr Result ResultUnexpected() {
  return detail::MakeResult(5000);
}

constexpr Result ResultTargetLocked() {
  return detail::MakeResult(7);
}

constexpr Result ResultTargetNotFound() {
  return detail::MakeResult(1002);
}

constexpr Result ResultUserNotExist() {
  return detail::MakeResult(6465);
}

constexpr Result ResultAllocationMemoryFailedInDataA() {
  return detail::MakeResult(3222);
}

constexpr Result ResultAllocationMemoryFailedInDataB() {
  return detail::MakeResult(3223);
}

constexpr Result ResultSystemPartitionNotReady() {
  return detail::MakeResult(3100);
}

constexpr Result ResultAllocationMemoryFailedInContentStorageA() {
  return detail::MakeResult(3220);
}

constexpr Result ResultAllocationMemoryFailedInContentStorageB() {
  return detail::MakeResult(3221);
}

constexpr Result ResultAllocationMemoryFailedInCodeA() {
  return detail::MakeResult(3218);
}

constexpr Result ResultAllocationMemoryFailedInHostA() {
  return detail::MakeResult(3229);
}

constexpr Result ResultAllocationMemoryFailedInHostB() {
  return detail::MakeResult(3230);
}

constexpr Result ResultAllocationMemoryFailedInHostC() {
  return detail::MakeResult(3231);
}

constexpr Result ResultSaveDataExtending() {
  return detail::MakeResult(6906);
}

}

#define NN_FS_RESULT_DO(expression) \
  do { \
    const ::nn::Result fsResult_ = (expression); \
    if (::nn::fs::IsFailure(fsResult_)) { \
      return fsResult_; \
    } \
  } while (0)

#define NN_FS_RESULT_THROW_UNLESS(condition, result) \
  do { \
    if (!(condition)) { \
      return (result); \
    } \
  } while (0)
