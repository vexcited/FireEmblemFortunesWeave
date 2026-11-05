#pragma once

#include <stdint.h>

#include "nn/am/interfaces.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/oe/oe_types.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/time_types.hpp"
#include "nn/util/uuid.hpp"

namespace nn::grcsrv {

class IMovieMakerService;
class IMovieWriterService;

}

namespace nn::am {

Interface* GetAudioController();
Interface* GetGraphicsScalingParametersFunctions();
Interface* GetPerformanceFunctions();
Result SetCopyrightImageInfo(int x, int y, int width, int height,
  int originMode);

}

namespace nn::am::service {

#define NN_AM_RESERVED(index) virtual void Reserved##index() = 0

class IApplicationFunctions : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6); NN_AM_RESERVED(7); NN_AM_RESERVED(8); NN_AM_RESERVED(9);
  NN_AM_RESERVED(10); NN_AM_RESERVED(11);
  virtual Result GetDesiredLanguage(
    sf::Out<settings::LanguageCode> pOutLanguage) = 0;
  NN_AM_RESERVED(13);
  virtual Result GetDisplayVersion(sf::Out<oe::DisplayVersion> pOutVersion) = 0;
  virtual Result GetLaunchStorageInfoForDebug(
    sf::Out<uint8_t> pOutLaunchStorage, sf::Out<uint8_t> pOutPatchStorage) = 0;
  NN_AM_RESERVED(16); NN_AM_RESERVED(17); NN_AM_RESERVED(18);
  NN_AM_RESERVED(19); NN_AM_RESERVED(20);
  virtual Result BeginBlockingHomeButton(TimeSpan duration) = 0;
  virtual Result EndBlockingHomeButton() = 0;
  virtual Result BeginBlockingHomeButtonShortAndLongPressed(
    TimeSpan duration) = 0;
  virtual Result EndBlockingHomeButtonShortAndLongPressed() = 0;
  NN_AM_RESERVED(25); NN_AM_RESERVED(26); NN_AM_RESERVED(27);
  virtual Result NotifyRunning(sf::Out<bool> pOutIsRunning) = 0;
  virtual Result GetPseudoDeviceId(sf::Out<util::Uuid> pOutId) = 0;
  virtual Result SetMediaPlaybackStateForApplication(bool isPlaying) = 0;
  virtual Result IsGamePlayRecordingSupported(
    sf::Out<bool> pOutIsSupported) = 0;
  virtual Result InitializeGamePlayRecording(sf::NativeHandle&& transferMemory,
    uint64_t size) = 0;
  virtual Result SetGamePlayRecordingState(int32_t state) = 0;
  virtual Result RequestFlushGamePlayingMovieForDebug() = 0;
  virtual Result RequestToShutdown() = 0;
  virtual Result RequestToReboot() = 0;
  virtual Result RequestToSleep() = 0;
  virtual Result ExitAndGoBackToInStoreDemoMenu() = 0;
  virtual Result SetCrashReportEnabled(bool isEnabled) = 0;
  NN_AM_RESERVED(40);
  virtual Result SetApplicationCopyrightImage(const sf::InBuffer& image,
    int32_t x, int32_t y, int32_t width, int32_t height,
    int32_t originMode) = 0;
  NN_AM_RESERVED(42);
  NN_AM_RESERVED(43); NN_AM_RESERVED(44); NN_AM_RESERVED(45);
  NN_AM_RESERVED(46); NN_AM_RESERVED(47); NN_AM_RESERVED(48);
  NN_AM_RESERVED(49); NN_AM_RESERVED(50);
  virtual Result EnableApplicationAllThreadDumpOnCrash(bool isEnabled) = 0;
  NN_AM_RESERVED(52);
  virtual Result SetDelayTimeToAbortOnGpuError(TimeSpan delay) = 0;
  NN_AM_RESERVED(54); NN_AM_RESERVED(55); NN_AM_RESERVED(56);
  NN_AM_RESERVED(57); NN_AM_RESERVED(58);
  virtual Result SetHdcpAuthenticationActivated(bool isActivated) = 0;
  virtual Result GetLaunchRequiredVersion(
    sf::Out<oe::LaunchRequiredVersion> pOutVersion,
    ApplicationId applicationId, bool isSystem) = 0;
  virtual Result UpgradeLaunchRequiredVersion(ApplicationId applicationId,
    const oe::LaunchRequiredVersion& version, bool isSystem) = 0;
  virtual Result SendServerMaintenanceOverlayNotification(
    time::PosixTime startTime, time::PosixTime endTime) = 0;
  NN_AM_RESERVED(63); NN_AM_RESERVED(64);
  virtual Result SetAudioOutputPolicy(int32_t policy) = 0;
  virtual Result IsTensorRtSupported(sf::Out<bool> pOutIsSupported) = 0;
  virtual Result CreateMovieWriter(
    const sf::Out<sf::SharedPointer<grcsrv::IMovieWriterService>>& pOutService,
    sf::NativeHandle&& transferMemory, uint64_t size) = 0;
  NN_AM_RESERVED(68); NN_AM_RESERVED(69);
  NN_AM_RESERVED(70);
  virtual Result IsLanguageSelectionLimited(sf::Out<bool> pOutIsLimited) = 0;
  virtual Result SaveGamePlayRecordingForDebug(
    sf::Out<sf::NativeHandle> pOutHandle, TimeSpan timeout) = 0;
  virtual Result CreateMovieMaker(
    const sf::Out<sf::SharedPointer<grcsrv::IMovieMakerService>>& pOutService,
    sf::NativeHandle&& transferMemory, uint64_t size) = 0;
  NN_AM_RESERVED(74);
  virtual Result SetMovieMakerLayerEnabled(bool isEnabled) = 0;
};

class IAudioController : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3);
  virtual Result SetExpectedMasterVolume(float mainAppletVolume,
    float libraryAppletVolume) = 0;
  virtual Result GetMainAppletExpectedMasterVolume(
    sf::Out<float> pOutVolume) = 0;
  virtual Result GetLibraryAppletExpectedMasterVolume(
    sf::Out<float> pOutVolume) = 0;
};

class IGraphicsScalingParametersFunctions : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3);
  virtual Result GetGraphicsScalingParameters(
    sf::Out<oe::GraphicsScalingParameters> pOutParameters) = 0;
  virtual Result SetSupportingGraphicsScalingParametersForDebug(
    const sf::InArray<oe::GraphicsScalingParameters>& parameters) = 0;
  virtual Result SetGpuQuotaForDebug(sf::Out<bool> pOutIsSet,
    uint32_t quota) = 0;
  virtual Result ClearGpuQuotaForDebug() = 0;
  virtual Result SetScreenRatioForDebug(sf::Out<bool> pOutIsSet,
    uint32_t width, uint32_t height) = 0;
  virtual Result ClearScreenRatioForDebug() = 0;
  virtual Result SetGraphicsScaleChangedNotificationEnabled(
    bool isEnabled) = 0;
};

class IPerformanceFunctions : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3);
  virtual Result IsCpuOverclockEnabled(sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result SetCpuOverclockEnabled(bool isEnabled) = 0;
};

#undef NN_AM_RESERVED

inline IApplicationFunctions* GetApplicationFunctionsObject() {
  return reinterpret_cast<IApplicationFunctions*>(GetApplicationFunctions());
}

inline IAudioController* GetAudioControllerObject() {
  return reinterpret_cast<IAudioController*>(GetAudioController());
}

inline IGraphicsScalingParametersFunctions*
GetGraphicsScalingParametersFunctionsObject() {
  return reinterpret_cast<IGraphicsScalingParametersFunctions*>(
    GetGraphicsScalingParametersFunctions());
}

inline IPerformanceFunctions* GetPerformanceFunctionsObject() {
  return reinterpret_cast<IPerformanceFunctions*>(GetPerformanceFunctions());
}

}
