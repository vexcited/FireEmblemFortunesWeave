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

constexpr Result ResultSuccess() {
  return Result{0};
}

constexpr Result ResultMountNameAlreadyExists() {
  return detail::MakeResult(60);
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

constexpr Result ResultInvalidMountName() {
  return detail::MakeResult(6065);
}

constexpr Result ResultNotMounted() {
  return detail::MakeResult(6905);
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
