#pragma once

#include "nn/nifm/detail/nifm_sf_types.hpp"

namespace nn::nifm::detail {

void ConvertNetworkProfileBasicInfoToSfFromNifm(
  sf::NetworkProfileBasicInfo* pOut, const NetworkProfileBasicInfo& in);
void ConvertNetworkProfileBasicInfoToNifmFromSf(
  NetworkProfileBasicInfo* pOut, const sf::NetworkProfileBasicInfo& in);
void ConvertNetworkProfileDataToSfFromNifm(sf::NetworkProfileDataV1* pOut,
  const NetworkProfileDataV1& in);
void ConvertNetworkProfileDataToSfFromNifm(sf::NetworkProfileDataV1* pOut,
  const NetworkProfileDataV2& in);
void ConvertNetworkProfileDataToSfFromNifm(sf::NetworkProfileDataV2* pOut,
  const NetworkProfileDataV2& in);
void ConvertNetworkProfileDataToNifmFromSf(NetworkProfileDataV1* pOut,
  const sf::NetworkProfileDataV1& in);
void ConvertNetworkProfileDataToNifmFromSf(NetworkProfileDataV2* pOut,
  const sf::NetworkProfileDataV1& in);
void ConvertNetworkProfileDataToNifmFromSf(NetworkProfileDataV2* pOut,
  const sf::NetworkProfileDataV2& in);
void ConvertAccessPointDataToSfFromNifm(sf::AccessPointDataV1* pOut,
  const AccessPointData& in);
void ConvertAccessPointDataToNifmFromSf(AccessPointData* pOut,
  const sf::AccessPointDataV1& in);
void ConvertNetworkInterfaceInfoToSfFromNifm(sf::NetworkInterfaceInfo* pOut,
  const NetworkInterfaceInfo& in);
void ConvertNetworkInterfaceInfoToNifmFromSf(NetworkInterfaceInfo* pOut,
  const sf::NetworkInterfaceInfo& in);
void ConvertInternetConnectionStatusToSfFromNifm(
  sf::InternetConnectionStatus* pOut, const InternetConnectionStatus& in);
void ConvertInternetConnectionStatusToNifmFromSf(
  InternetConnectionStatus* pOut, const sf::InternetConnectionStatus& in);
void ConvertAccessPointDataToSfFromNifm(sf::AccessPointDataV0* pOut,
  const AccessPointData& in);

}
