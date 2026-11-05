#include "nn/htc/htc_service_holder.hpp"

namespace nn::htc {

void ServiceHolder::Finalize() {
  m_Manager.Reset();
}

Result ServiceHolder::GetEnvironmentVariable(sf::Out<int> pOutSize,
  const sf::OutBuffer& outValue, const sf::InBuffer& name) {
  return m_Manager->GetEnvironmentVariable(pOutSize, outValue, name);
}

Result ServiceHolder::GetEnvironmentVariableLength(sf::Out<int> pOutLength,
  const sf::InBuffer& name) {
  return m_Manager->GetEnvironmentVariableLength(pOutLength, name);
}

Result ServiceHolder::GetHostConnectionEvent(
  sf::Out<sf::NativeHandle> pOutHandle) {
  return m_Manager->GetHostConnectionEvent(pOutHandle);
}

Result ServiceHolder::GetHostDisconnectionEvent(
  sf::Out<sf::NativeHandle> pOutHandle) {
  return m_Manager->GetHostDisconnectionEvent(pOutHandle);
}

Result ServiceHolder::GetHostConnectionEventForSystem(
  sf::Out<sf::NativeHandle> pOutHandle) {
  return m_Manager->GetHostConnectionEventForSystem(pOutHandle);
}

Result ServiceHolder::GetHostDisconnectionEventForSystem(
  sf::Out<sf::NativeHandle> pOutHandle) {
  return m_Manager->GetHostDisconnectionEventForSystem(pOutHandle);
}

Result ServiceHolder::GetBridgeIpAddress(const sf::OutBuffer& outAddress) {
  return m_Manager->GetBridgeIpAddress(outAddress);
}

Result ServiceHolder::GetBridgePort(const sf::OutBuffer& outPort) {
  return m_Manager->GetBridgePort(outPort);
}

Result ServiceHolder::SetCradleAttached(bool isAttached) {
  return m_Manager->SetCradleAttached(isAttached);
}

Result ServiceHolder::GetBridgeSubnetMask(const sf::OutBuffer& outMask) {
  return m_Manager->GetBridgeSubnetMask(outMask);
}

Result ServiceHolder::GetBridgeMacAddress(const sf::OutBuffer& outAddress) {
  return m_Manager->GetBridgeMacAddress(outAddress);
}

Result ServiceHolder::GetWorkingDirectoryPath(const sf::OutBuffer& outPath,
  int size) {
  return m_Manager->GetWorkingDirectoryPath(outPath, size);
}

Result ServiceHolder::GetWorkingDirectoryPathSize(sf::Out<int> pOutSize) {
  return m_Manager->GetWorkingDirectoryPathSize(pOutSize);
}

Result ServiceHolder::RunOnHostStart(sf::Out<uint32_t> pOutId,
  sf::Out<sf::NativeHandle> pOutHandle, const sf::InBuffer& command) {
  return m_Manager->RunOnHostStart(pOutId, pOutHandle, command);
}

Result ServiceHolder::RunOnHostResults(sf::Out<int> pOutExitCode, uint32_t id) {
  return m_Manager->RunOnHostResults(pOutExitCode, id);
}

Result ServiceHolder::SetBridgeIpAddress(const sf::InBuffer& address) {
  return m_Manager->SetBridgeIpAddress(address);
}

Result ServiceHolder::SetBridgeSubnetMask(const sf::InBuffer& mask) {
  return m_Manager->SetBridgeSubnetMask(mask);
}

Result ServiceHolder::SetBridgePort(const sf::InBuffer& port) {
  return m_Manager->SetBridgePort(port);
}

Result ServiceHolder::GetBridgeSerialNumber(const sf::OutBuffer& outNumber) {
  return m_Manager->GetBridgeSerialNumber(outNumber);
}

Result ServiceHolder::GetBridgeFwVersion(sf::Out<int64_t> pOutVersion) {
  return m_Manager->GetBridgeFwVersion(pOutVersion);
}

Result ServiceHolder::ResetBridgeSettings(sf::Out<int> pOutResult) {
  return m_Manager->ResetBridgeSettings(pOutResult);
}

Result ServiceHolder::BeginUpdateBridge(sf::Out<int> pOutResult,
  sf::Out<uint32_t> pOutChunkSize, int64_t imageSize, uint32_t bufferSize) {
  return m_Manager->BeginUpdateBridge(pOutResult, pOutChunkSize, imageSize,
    bufferSize);
}

Result ServiceHolder::ContinueUpdateBridge(sf::Out<int> pOutResult,
  const sf::InBuffer& data) {
  return m_Manager->ContinueUpdateBridge(pOutResult, data);
}

Result ServiceHolder::EndUpdateBridge(sf::Out<int> pOutResult) {
  return m_Manager->EndUpdateBridge(pOutResult);
}

Result ServiceHolder::GetBridgeType(sf::Out<int> pOutResult,
  sf::Out<uint32_t> pOutType) {
  return m_Manager->GetBridgeType(pOutResult, pOutType);
}

Result ServiceHolder::GetBridgeDefaultGateway(sf::Out<int> pOutResult,
  const sf::OutBuffer& outGateway) {
  return m_Manager->GetBridgeDefaultGateway(pOutResult, outGateway);
}

Result ServiceHolder::SetBridgeDefaultGateway(const sf::InBuffer& gateway) {
  return m_Manager->SetBridgeDefaultGateway(gateway);
}

Result ServiceHolder::GetBridgeDhcp(sf::Out<int> pOutResult,
  sf::Out<bool> pOutIsEnabled) {
  return m_Manager->GetBridgeDhcp(pOutResult, pOutIsEnabled);
}

Result ServiceHolder::SetBridgeDhcp(bool isEnabled) {
  return m_Manager->SetBridgeDhcp(isEnabled);
}

Result ServiceHolder::GetBridgeProgramVersion(sf::Out<int> pOutResult,
  sf::Out<uint32_t> pOutVersion, uint64_t index) {
  return m_Manager->GetBridgeProgramVersion(pOutResult, pOutVersion, index);
}

}
