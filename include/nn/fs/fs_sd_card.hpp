#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/fs_event_notifier.hpp"

#include "nn/result.hpp"

namespace nn::nvme {

enum class LinkSpeed : uint8_t {};

struct DeviceProperty {
  char data[0x80];
};

}

namespace nn::sdcard {

struct NvmeErrorInfo {
  char data[0x28];
};

struct NvmeLatestActivationLog {
  char data[0x3C];
};

struct NvmeLatestDeviceLog {
  char data[0x228];
};

struct HostControllerStatus {
  char data[0xC];
};

struct MalfunctionSimulationParameters {
  char data[0x50];
};

}

namespace nn::sdmmcsrv {

struct SdCardInfo {
  char data[0x100];
};

}

namespace nn::fs {

enum class SdCardSpeedMode : int32_t {
  Identification = 0,
  DefaultSpeed = 1,
  HighSpeed = 2,
  Sdr12 = 3,
  Sdr25 = 4,
  Sdr50 = 5,
  Sdr104 = 6,
  Ddr50 = 7,
  Unknown = 8,
  Pcie = 16,
};

enum class SdCardActivationMode : uint8_t {};

enum class SpeedEmulationMode : int32_t {};

enum class ApplicationStorageSpeed : int32_t {};

enum class ApplicationGameCardClockRate : uint8_t {};

struct StorageErrorInfo {
  uint32_t numActivationFailures;
  uint32_t numActivationErrorCorrections;
  uint32_t numReadWriteFailures;
  uint32_t numReadWriteErrorCorrections;
};

Result MountSdCard(const char* name);
Result MountSdCardForDebug(const char* name);
Result OpenSdCardDetectionEventNotifier(
  std::unique_ptr<IEventNotifier>* outNotifier);
bool IsSdCardInserted();
Result FormatSdCard();
Result GetSdCardSpeedMode(SdCardSpeedMode* outValue);
Result GetSdCardCid(void* buffer, size_t size);
Result GetSdCardUserAreaSize(int64_t* outValue);
Result GetSdCardProtectedAreaSize(int64_t* outValue);
Result TryGetSdCardInfo(sdmmcsrv::SdCardInfo* outValue);
Result GetAndClearSdCardErrorInfo(StorageErrorInfo* outErrorInfo,
  size_t* outLogSize, char* logBuffer, size_t logBufferSize);
Result GetSdCardNvmeConnectionStatus(nvme::LinkSpeed* outLinkSpeed,
  uint8_t* outLinkWidth);
Result GetSdCardNvmeSmart(void* buffer, size_t size);
Result GetSdCardNvmeDeviceProperty(nvme::DeviceProperty* outValue);
Result GetSdCardNvmeHctm(uint16_t* outThermal1, uint16_t* outThermal2);
Result GetSdCardNvmeLba(uint32_t* outLbaA, uint32_t* outLbaB);
Result GetSdCardNvmeApst(uint32_t* outThreshold, uint8_t* outState);
Result SetSdCardNvmeHctm(uint16_t thermal1, uint16_t thermal2);
Result PresetSdCardFormatParameter(uint32_t parameter);
Result SetSdCardNvmeApst(uint32_t threshold, uint8_t state);
Result SwitchSdCardModeFromPcieToSd();
Result IsSdCardPcieNvmeMode(bool* outValue);
Result GetAndClearSdCardNvmeErrorInfo(sdcard::NvmeErrorInfo* outValue);
Result GetAndClearSdCardNvmeActivationLog(
  sdcard::NvmeLatestActivationLog* outValue);
Result GetSdCardNvmeNoopme(bool* outValue);
Result SetSdCardNvmeNoopme(bool isEnabled);
Result GetSdCardNvmeDeviceLog(sdcard::NvmeLatestDeviceLog* outValue);
Result GetSdCardHostControllerStatus(sdcard::HostControllerStatus* outValue);
Result SetSdCardActivationMode(SdCardActivationMode mode);
Result EnableSdCardMalfunctionSimulation(
  const sdcard::MalfunctionSimulationParameters* parameters);
Result DisableSdCardMalfunctionSimulation();
Result GetSdCardMalfunctionSimulationParameters(
  sdcard::MalfunctionSimulationParameters* outParameters);
bool IsValidSignedSystemPartitionOnSdCard(const char* path);
Result SetSpeedEmulationMode(SpeedEmulationMode mode);
Result GetSpeedEmulationMode(SpeedEmulationMode* outMode);
Result SetApplicationStorageSpeed(ApplicationStorageSpeed speed);
Result SetGameCardClockRateForSpeedEmulation(
  ApplicationGameCardClockRate clockRate);
Result ClearGameCardClockRateForSpeedEmulation();
void ShutdownStorage();

}
