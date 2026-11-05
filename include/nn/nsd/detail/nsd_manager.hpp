#pragma once

#include <stdint.h>

#include "nn/nsd/nsd_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::nsd::detail {

struct TestParameter {
  bool isForcedGlobalServerAccessEnabled;
  bool isForcedGlobalServerAccessAvailable;
  uint8_t reserved[126];
};

enum ServiceType : int32_t {
  ServiceType_User,
  ServiceType_Admin,
};

class IManager : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSettingUrl(sf::Out<Url> pOutUrl) = 0;
  virtual Result GetSettingName(sf::Out<SettingName> pOutName) = 0;
  virtual Result GetEnvironmentIdentifier(
    sf::Out<EnvironmentIdentifier> pOutIdentifier) = 0;
  virtual Result GetDeviceId(sf::Out<DeviceId> pOutId) = 0;
  virtual Result DeleteSettings(DeleteMode mode) = 0;
  virtual Result ImportSettings(const sf::InBuffer& data,
    const sf::OutBuffer& work, ImportMode mode) = 0;
  virtual Result SetChangeEnvironmentIdentifierDisabled(bool isDisabled) = 0;
  virtual Result Resolve(sf::Out<Fqdn> pOutFqdn, const Fqdn& fqdn) = 0;
  virtual Result ResolveEx(sf::Out<Result> pOutResult, sf::Out<Fqdn> pOutFqdn,
    const Fqdn& fqdn) = 0;
  virtual Result GetNasServiceSetting(
    sf::Out<NasServiceSetting> pOutSetting, const NasServiceName& name) = 0;
  virtual Result GetNasServiceSettingEx(sf::Out<Result> pOutResult,
    sf::Out<NasServiceSetting> pOutSetting, const NasServiceName& name) = 0;
  virtual Result GetNasRequestFqdn(sf::Out<Fqdn> pOutFqdn) = 0;
  virtual Result GetNasRequestFqdnEx(sf::Out<Result> pOutResult,
    sf::Out<Fqdn> pOutFqdn) = 0;
  virtual Result GetNasApiFqdn(sf::Out<Fqdn> pOutFqdn) = 0;
  virtual Result GetNasApiFqdnEx(sf::Out<Result> pOutResult,
    sf::Out<Fqdn> pOutFqdn) = 0;
  virtual Result GetCurrentSetting(const sf::OutBuffer& outSaveData) = 0;
  virtual Result WriteTestParameter(const sf::InBuffer& parameter) = 0;
  virtual Result ReadTestParameter(const sf::OutBuffer& outParameter) = 0;
  virtual Result ReadSaveDataFromFsForTest(
    const sf::OutBuffer& outSaveData) = 0;
  virtual Result WriteSaveDataToFsForTest(const sf::InBuffer& saveData) = 0;
  virtual Result DeleteSaveDataOfFsForTest() = 0;
  virtual Result IsChangeEnvironmentIdentifierDisabled(
    sf::Out<bool> pOutIsDisabled) = 0;
  virtual Result SetWithoutDomainExchangeFqdns(
    const sf::InArray<Fqdn>& fqdns) = 0;
  virtual Result GetApplicationServerEnvironmentType(
    sf::Out<uint8_t> pOutType) = 0;
  virtual Result SetApplicationServerEnvironmentType(uint8_t type) = 0;
  virtual Result DeleteApplicationServerEnvironmentType() = 0;
};

Result GetServiceObjectByHipc(sf::SharedPointer<IManager>* pOutManager,
  ServiceType type);

}
