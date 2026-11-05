#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::htclow {

class HtclowManager;

}

namespace nn::htc {

class IHtcManager : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetEnvironmentVariable(sf::Out<int> pOutSize,
    const sf::OutBuffer& outValue, const sf::InBuffer& name) = 0;
  virtual Result GetEnvironmentVariableLength(sf::Out<int> pOutLength,
    const sf::InBuffer& name) = 0;
  virtual Result GetHostConnectionEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetHostDisconnectionEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetHostConnectionEventForSystem(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetHostDisconnectionEventForSystem(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetBridgeIpAddress(const sf::OutBuffer& outAddress) = 0;
  virtual Result GetBridgePort(const sf::OutBuffer& outPort) = 0;
  virtual Result SetCradleAttached(bool isAttached) = 0;
  virtual Result GetBridgeSubnetMask(const sf::OutBuffer& outMask) = 0;
  virtual Result GetBridgeMacAddress(const sf::OutBuffer& outAddress) = 0;
  virtual Result GetWorkingDirectoryPath(const sf::OutBuffer& outPath,
    int size) = 0;
  virtual Result GetWorkingDirectoryPathSize(sf::Out<int> pOutSize) = 0;
  virtual Result RunOnHostStart(sf::Out<uint32_t> pOutId,
    sf::Out<sf::NativeHandle> pOutHandle, const sf::InBuffer& command) = 0;
  virtual Result RunOnHostResults(sf::Out<int> pOutExitCode, uint32_t id) = 0;
  virtual Result SetBridgeIpAddress(const sf::InBuffer& address) = 0;
  virtual Result SetBridgeSubnetMask(const sf::InBuffer& mask) = 0;
  virtual Result SetBridgePort(const sf::InBuffer& port) = 0;
  virtual Result GetBridgeSerialNumber(const sf::OutBuffer& outNumber) = 0;
  virtual Result GetBridgeFwVersion(sf::Out<int64_t> pOutVersion) = 0;
  virtual Result ResetBridgeSettings(sf::Out<int> pOutResult) = 0;
  virtual Result BeginUpdateBridge(sf::Out<int> pOutResult,
    sf::Out<uint32_t> pOutChunkSize, int64_t imageSize,
    uint32_t bufferSize) = 0;
  virtual Result ContinueUpdateBridge(sf::Out<int> pOutResult,
    const sf::InBuffer& data) = 0;
  virtual Result EndUpdateBridge(sf::Out<int> pOutResult) = 0;
  virtual Result GetBridgeType(sf::Out<int> pOutResult,
    sf::Out<uint32_t> pOutType) = 0;
  virtual Result GetBridgeDefaultGateway(sf::Out<int> pOutResult,
    const sf::OutBuffer& outGateway) = 0;
  virtual Result SetBridgeDefaultGateway(const sf::InBuffer& gateway) = 0;
  virtual Result GetBridgeDhcp(sf::Out<int> pOutResult,
    sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result SetBridgeDhcp(bool isEnabled) = 0;
  virtual Result GetBridgeProgramVersion(sf::Out<int> pOutResult,
    sf::Out<uint32_t> pOutVersion, uint64_t index) = 0;
};

class ServiceHolder {
 public:
  void Initialize(htclow::HtclowManager* pManager);
  void Finalize();

  Result GetEnvironmentVariable(sf::Out<int> pOutSize,
    const sf::OutBuffer& outValue, const sf::InBuffer& name);
  Result GetEnvironmentVariableLength(sf::Out<int> pOutLength,
    const sf::InBuffer& name);
  Result GetHostConnectionEvent(sf::Out<sf::NativeHandle> pOutHandle);
  Result GetHostDisconnectionEvent(sf::Out<sf::NativeHandle> pOutHandle);
  Result GetHostConnectionEventForSystem(
    sf::Out<sf::NativeHandle> pOutHandle);
  Result GetHostDisconnectionEventForSystem(
    sf::Out<sf::NativeHandle> pOutHandle);
  Result GetBridgeIpAddress(const sf::OutBuffer& outAddress);
  Result GetBridgePort(const sf::OutBuffer& outPort);
  Result SetCradleAttached(bool isAttached);
  Result GetBridgeSubnetMask(const sf::OutBuffer& outMask);
  Result GetBridgeMacAddress(const sf::OutBuffer& outAddress);
  Result GetWorkingDirectoryPath(const sf::OutBuffer& outPath, int size);
  Result GetWorkingDirectoryPathSize(sf::Out<int> pOutSize);
  Result RunOnHostStart(sf::Out<uint32_t> pOutId,
    sf::Out<sf::NativeHandle> pOutHandle, const sf::InBuffer& command);
  Result RunOnHostResults(sf::Out<int> pOutExitCode, uint32_t id);
  Result SetBridgeIpAddress(const sf::InBuffer& address);
  Result SetBridgeSubnetMask(const sf::InBuffer& mask);
  Result SetBridgePort(const sf::InBuffer& port);
  Result GetBridgeSerialNumber(const sf::OutBuffer& outNumber);
  Result GetBridgeFwVersion(sf::Out<int64_t> pOutVersion);
  Result ResetBridgeSettings(sf::Out<int> pOutResult);
  Result BeginUpdateBridge(sf::Out<int> pOutResult,
    sf::Out<uint32_t> pOutChunkSize, int64_t imageSize, uint32_t bufferSize);
  Result ContinueUpdateBridge(sf::Out<int> pOutResult,
    const sf::InBuffer& data);
  Result EndUpdateBridge(sf::Out<int> pOutResult);
  Result GetBridgeType(sf::Out<int> pOutResult, sf::Out<uint32_t> pOutType);
  Result GetBridgeDefaultGateway(sf::Out<int> pOutResult,
    const sf::OutBuffer& outGateway);
  Result SetBridgeDefaultGateway(const sf::InBuffer& gateway);
  Result GetBridgeDhcp(sf::Out<int> pOutResult, sf::Out<bool> pOutIsEnabled);
  Result SetBridgeDhcp(bool isEnabled);
  Result GetBridgeProgramVersion(sf::Out<int> pOutResult,
    sf::Out<uint32_t> pOutVersion, uint64_t index);

 private:
  sf::SharedPointer<IHtcManager> m_Manager;
};

}
