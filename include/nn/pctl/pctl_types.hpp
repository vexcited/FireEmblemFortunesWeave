#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::pctl {

enum SafetyLevel : int32_t {};
enum RestrictedScene : int32_t {};
enum PairingState : int32_t {};
enum PairingAccountState : int32_t {};

struct InquiryCode;
struct ExemptApplicationInfo;
struct FreeCommunicationApplicationInfo;
struct PlayTimerSettingsVer3;
struct PlayTimerRemainingTimeDisplayInfo;

struct RestrictionSettings {
  uint8_t ratingAge;
  bool isSnsPostRestricted;
  bool isFreeCommunicationRestricted;
};

namespace detail {

struct AsyncData {
  uint32_t id;
  uint32_t reserved;
};

struct PairingInfoBase {
  uint64_t id;
  int32_t state;
  uint32_t reserved;
};

struct PairingAccountInfoBase {
  uint64_t id;
};

namespace service::watcher {

struct EventData;

}
}

class PairingAccountInfo {
 public:
  PairingAccountInfo();
  ~PairingAccountInfo();

  bool GetAccountState(PairingAccountState* pOutState) const;
  size_t GetNickname(char* pOutNickname, size_t size) const;
  Result GetMiiImage(size_t* pOutSize, void* pOutImage, size_t size) const;
  Result GetMiiImageContentType(size_t* pOutSize, char* pOutContentType,
    size_t size) const;
  bool IsInstanceValid() const;

 private:
  friend class PairingInfo;

  detail::PairingAccountInfoBase m_Info;
};

class PairingInfo {
 public:
  PairingInfo();
  ~PairingInfo();

  bool GetAccountInfo(PairingAccountInfo* pOutInfo) const;
  PairingState GetState() const;
  bool IsInstanceValid() const;

 private:
  friend Result RetrievePairingInfo(PairingInfo* pOutInfo);

  detail::PairingInfoBase m_Info;
};

}
