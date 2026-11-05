#pragma once

#include "nn/result.hpp"

namespace nn::ssl {

constexpr uint32_t ResultModule = 123;

constexpr Result MakeResult(uint32_t description) {
  return Result{ResultModule | (description << 9)};
}

constexpr Result ResultServiceUnavailable() {
  return MakeResult(11);
}

constexpr Result ResultInternalError() {
  return MakeResult(13);
}

constexpr Result ResultLibraryNotInitialized() {
  return MakeResult(101);
}

constexpr Result ResultInsufficientMemory() {
  return MakeResult(102);
}

constexpr Result ResultServerCertBufferAlreadyRegistered() {
  return MakeResult(106);
}

constexpr Result ResultConnectionRemaining() {
  return MakeResult(107);
}

constexpr Result ResultInvalidReference() {
  return MakeResult(109);
}

constexpr Result ResultInvalidContext() {
  return MakeResult(110);
}

constexpr Result ResultBufferTooShort() {
  return MakeResult(112);
}

constexpr Result ResultInvalidPointer() {
  return MakeResult(113);
}

constexpr Result ResultNoServiceAccess() {
  return MakeResult(115);
}

constexpr Result ResultInvalidPassword() {
  return MakeResult(118);
}

constexpr Result ResultInvalidConcurrencyLimit() {
  return MakeResult(123);
}

constexpr Result ResultPolicyOidTooLong() {
  return MakeResult(124);
}

constexpr Result ResultInvalidFlushOption() {
  return MakeResult(126);
}

constexpr Result ResultNoCertificateId() {
  return MakeResult(127);
}

constexpr Result ResultInvalidCertIndex() {
  return MakeResult(128);
}

constexpr Result ResultInvalidArgument() {
  return MakeResult(132);
}

constexpr Result ResultNoSystemPrivilege() {
  return MakeResult(133);
}

constexpr Result ResultCommonNameTooLong() {
  return MakeResult(134);
}

constexpr Result ResultLibraryAlreadyInitialized() {
  return MakeResult(201);
}

constexpr Result ResultPkiNotFound() {
  return MakeResult(214);
}

constexpr Result ResultInvalidServerCertBuffer() {
  return MakeResult(221);
}

constexpr Result ResultNotImplemented() {
  return MakeResult(5001);
}

constexpr Result ResultLibraryStillReferenced() {
  return MakeResult(5010);
}

}
