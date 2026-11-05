#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_file.hpp"
#include "nn/htc/htc_service_holder.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::htc {

namespace {

os::MutexType g_Mutex = {true, false};
int g_InitializeCount;
ServiceHolder g_ServiceHolder;

Result ConvertEnvironmentVariableResult(Result result) {
  switch (result.GetInnerValueForDebug()) {
    case 0x212:
    case 0x1403:
      return {0x212};
    case 0x412:
    case 0xe03:
      return {0x412};
    case 0x612:
    case 0x1003:
      return {0x612};
    default:
      return {0x7fe12};
  }
}

void BindEvent(os::SystemEvent* pEvent,
  Result (ServiceHolder::*getEvent)(sf::Out<sf::NativeHandle>)) {
  os::LockMutex(&g_Mutex);
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS((g_ServiceHolder.*getEvent)(
    sf::Out<sf::NativeHandle>(&handle)));
  pEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  handle.Detach();
  os::UnlockMutex(&g_Mutex);
}

}

namespace detail {

void Initialize(htclow::HtclowManager* pManager) {
  os::LockMutex(&g_Mutex);
  if (g_InitializeCount++ <= 0) {
    g_ServiceHolder.Initialize(pManager);
  }
  os::UnlockMutex(&g_Mutex);
}

}

void Initialize() {
  os::LockMutex(&g_Mutex);
  if (g_InitializeCount++ <= 0) {
    g_ServiceHolder.Initialize(nullptr);
  }
  os::UnlockMutex(&g_Mutex);
}

void Finalize() {
  os::LockMutex(&g_Mutex);
  if (--g_InitializeCount <= 0) {
    g_ServiceHolder.Finalize();
  }
  os::UnlockMutex(&g_Mutex);
}

Result GetEnvironmentVariableLength(size_t* pOutLength, const char* name) {
  os::LockMutex(&g_Mutex);
  int length = 0;
  Result result = g_ServiceHolder.GetEnvironmentVariableLength(
    sf::Out<int>(&length), sf::InBuffer(name, strlen(name) + 1));
  if (result.IsSuccess()) {
    *pOutLength = length;
  }
  else {
    result = ConvertEnvironmentVariableResult(result);
  }
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetEnvironmentVariable(size_t* pOutSize, char* buffer, size_t size,
  const char* name) {
  os::LockMutex(&g_Mutex);
  int outSize = 0;
  Result result = g_ServiceHolder.GetEnvironmentVariable(
    sf::Out<int>(&outSize), sf::OutBuffer(buffer, size),
    sf::InBuffer(name, strlen(name) + 1));
  if (result.IsSuccess()) {
    *pOutSize = outSize;
  }
  else {
    result = ConvertEnvironmentVariableResult(result);
  }
  os::UnlockMutex(&g_Mutex);
  return result;
}

void BindHostConnectionEvent(os::SystemEvent* pEvent) {
  BindEvent(pEvent, &ServiceHolder::GetHostConnectionEvent);
}

void BindHostDisconnectionEvent(os::SystemEvent* pEvent) {
  BindEvent(pEvent, &ServiceHolder::GetHostDisconnectionEvent);
}

void BindHostConnectionEventForSystem(os::SystemEvent* pEvent) {
  BindEvent(pEvent, &ServiceHolder::GetHostConnectionEventForSystem);
}

void BindHostDisconnectionEventForSystem(os::SystemEvent* pEvent) {
  BindEvent(pEvent, &ServiceHolder::GetHostDisconnectionEventForSystem);
}

Result GetBridgeIpAddress(char* buffer, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.GetBridgeIpAddress(sf::OutBuffer(buffer, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeSubnetMask(char* buffer, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.GetBridgeSubnetMask(sf::OutBuffer(buffer, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeMacAddress(char* buffer, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.GetBridgeMacAddress(sf::OutBuffer(buffer, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgePort(char* buffer, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.GetBridgePort(sf::OutBuffer(buffer, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeSerialNumber(char* buffer, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.GetBridgeSerialNumber(sf::OutBuffer(buffer, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeFwVersion(int64_t* pOutVersion) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.GetBridgeFwVersion(sf::Out<int64_t>(pOutVersion));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result SetBridgeIpAddress(char* address, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.SetBridgeIpAddress(sf::InBuffer(address, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result SetBridgeSubnetMask(char* mask, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.SetBridgeSubnetMask(sf::InBuffer(mask, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result SetBridgePort(char* port, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.SetBridgePort(sf::InBuffer(port, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result SetUsbDetachedForDebug(bool isDetached) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.SetCradleAttached(!isDetached);
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetWorkingDirectoryPathSize(size_t* pOutSize) {
  os::LockMutex(&g_Mutex);
  int size = 0;
  Result result =
    g_ServiceHolder.GetWorkingDirectoryPathSize(sf::Out<int>(&size));
  if (result.IsSuccess()) {
    *pOutSize = size;
  }
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetWorkingDirectoryPath(char* buffer, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.GetWorkingDirectoryPath(
    sf::OutBuffer(buffer, size), static_cast<int>(size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result RunOnHost(int* pOutExitCode, const char* command) {
  int exitCode = 0;
  size_t length = strlen(command) + 1;
  Result result = {};
  if (length >= 2) {
    uint32_t id = 0;
    sf::NativeHandle handle;
    result = g_ServiceHolder.RunOnHostStart(sf::Out<uint32_t>(&id),
      sf::Out<sf::NativeHandle>(&handle), sf::InBuffer(command, length));
    if (result.IsSuccess()) {
      os::SystemEventType event;
      os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
        handle.IsManaged(), os::EventClearMode_ManualClear);
      handle.Detach();
      os::WaitSystemEvent(&event);
      result = g_ServiceHolder.RunOnHostResults(sf::Out<int>(&exitCode), id);
      os::DestroySystemEvent(&event);
    }
  }
  if (pOutExitCode != nullptr) {
    *pOutExitCode = exitCode;
  }
  return result;
}

Result ResetBridgeSettings(int* pOutResult) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.ResetBridgeSettings(sf::Out<int>(pOutResult));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeType(int* pOutResult, uint32_t* pOutType) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.GetBridgeType(sf::Out<int>(pOutResult),
    sf::Out<uint32_t>(pOutType));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeDefaultGateway(int* pOutResult, char* buffer, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.GetBridgeDefaultGateway(
    sf::Out<int>(pOutResult), sf::OutBuffer(buffer, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result SetBridgeDefaultGateway(char* gateway, size_t size) {
  os::LockMutex(&g_Mutex);
  Result result =
    g_ServiceHolder.SetBridgeDefaultGateway(sf::InBuffer(gateway, size));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeDhcp(int* pOutResult, bool* pOutIsEnabled) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.GetBridgeDhcp(sf::Out<int>(pOutResult),
    sf::Out<bool>(pOutIsEnabled));
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result SetBridgeDhcp(bool isEnabled) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.SetBridgeDhcp(isEnabled);
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result GetBridgeProgramVersion(int* pOutResult, uint32_t* pOutVersion,
  size_t index) {
  os::LockMutex(&g_Mutex);
  Result result = g_ServiceHolder.GetBridgeProgramVersion(
    sf::Out<int>(pOutResult), sf::Out<uint32_t>(pOutVersion), index);
  os::UnlockMutex(&g_Mutex);
  return result;
}

Result UpdateBridge(int* pOutResult, fs::FileHandle file, void* buffer,
  uint32_t bufferSize) {
  os::LockMutex(&g_Mutex);
  int64_t fileSize = 0;
  Result result = fs::GetFileSize(&fileSize, file);
  if (result.IsSuccess()) {
    uint32_t chunkSize = 0;
    result = g_ServiceHolder.BeginUpdateBridge(sf::Out<int>(pOutResult),
      sf::Out<uint32_t>(&chunkSize), fileSize, bufferSize);
    if (result.IsSuccess()) {
      size_t readSize = chunkSize < bufferSize ? chunkSize : bufferSize;
      int64_t offset = 0;
      do {
        size_t readBytes = 0;
        result = fs::ReadFile(&readBytes, file, offset, buffer, readSize);
        if (result.IsFailure()) {
          break;
        }
        result = g_ServiceHolder.ContinueUpdateBridge(
          sf::Out<int>(pOutResult), sf::InBuffer(buffer, readBytes));
        if (result.IsFailure()) {
          break;
        }
        offset += readBytes;
      } while (offset < fileSize);
      if (result.IsSuccess()) {
        result = g_ServiceHolder.EndUpdateBridge(sf::Out<int>(pOutResult));
      }
    }
  }
  os::UnlockMutex(&g_Mutex);
  return result;
}

}
