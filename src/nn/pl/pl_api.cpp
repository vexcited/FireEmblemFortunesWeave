#include <mutex>

#include "nn/am/service/am_controllers.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/os/process_id.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/pctl/pctl_api.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::htc {

void Initialize();
void Finalize();
Result SetUsbDetachedForDebug(bool isDetached);

}

namespace nn::pl {

enum ApplicationFunctionAuthorizationId : int32_t {};
enum SharedFontType : int32_t {};
enum BuiltInFontTypeOunce : int32_t {};
enum SharedFontLoadState : int32_t {
  SharedFontLoadState_Loading,
  SharedFontLoadState_Loaded,
};

struct FunctionBlackListSystemVersion;

struct VrLaboGoggleViewport {
  uint64_t value[2];
};

struct PanelPhysicalSize {
  uint64_t value;
};

struct PanelResolution {
  uint64_t value;
};

struct BuiltInFontDataOunce {
  uint64_t reserved;
  const void* pAddress;
  size_t size;
};

class IPlatformServiceManager : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RequestApplicationFunctionAuthorization(
    uint64_t processIdPlaceholder, ApplicationFunctionAuthorizationId id) = 0;
  virtual Result RequestApplicationFunctionAuthorizationByProcessId(
    os::ProcessId processId, ApplicationFunctionAuthorizationId id) = 0;
  virtual Result RequestApplicationFunctionAuthorizationByApplicationId(
    ncm::ApplicationId applicationId, uint32_t version,
    ApplicationFunctionAuthorizationId id) = 0;
  virtual Result RefreshApplicationFunctionBlackListDebugRecord() = 0;
  virtual Result RequestApplicationFunctionAuthorizationByProgramId(
    ncm::ProgramId programId, ApplicationFunctionAuthorizationId id) = 0;
  virtual Result GetFunctionBlackListSystemVersionToAuthorize(
    FunctionBlackListSystemVersion* pOutVersion,
    ncm::ApplicationId applicationId,
    ApplicationFunctionAuthorizationId id) = 0;
  virtual Result GetFunctionBlackListVersion(
    sf::Out<uint32_t> pOutVersion) = 0;
  virtual Result RequestApplicationFunctionAuthorizationByProgram(
    ncm::ApplicationId applicationId, ncm::ProgramId programId,
    uint32_t version, ApplicationFunctionAuthorizationId id) = 0;
  virtual Result GetApplicationRequiredVersion(uint32_t* pOutVersion,
    ncm::ApplicationId applicationId,
    ApplicationFunctionAuthorizationId id) = 0;
};

sf::SharedPointer<IPlatformServiceManager>
  GetPlatformServiceManagerForSystem();
bool GetBuiltInFontData(BuiltInFontDataOunce* pOutData,
  BuiltInFontTypeOunce type, bool isForSystem);

namespace detail {

// The panel queries cache their first answer, including failures.
extern os::SdkMutex g_PanelInfoMutex;
extern bool g_IsVrLaboGoggleViewportCached;
extern bool g_IsPanelPhysicalSizeCached;
extern bool g_IsPanelResolutionCached;
extern Result g_VrLaboGoggleViewportResult;
extern Result g_PanelPhysicalSizeResult;
extern Result g_PanelResolutionResult;
extern VrLaboGoggleViewport g_VrLaboGoggleViewport;
extern PanelPhysicalSize g_PanelPhysicalSize;
extern PanelResolution g_PanelResolution;

}

namespace {

using am::service::GetCommonStateGetterObject;
using am::service::GetSelfControllerObject;

constexpr Result ResultStereoVisionRestricted = {0xd08e};
constexpr uint32_t ResultAppletNotSupported = 0x2aa;
constexpr uint32_t ResultUsbNotConnected = 0x7d203;
constexpr Result ResultUsbDetachNotSupported = {0x2aa};

// Failures in the applet manager range 500 to 599 are fatal.
bool IsFatalAppletManagerResult(Result result) {
  const uint32_t module = result.value & 0x1ff;
  const uint32_t description = (result.value >> 9) & 0x1fff;
  return module == 128 && description >= 500 && description < 600;
}

template <typename T, typename Getter>
Result GetCachedPanelInfo(T* pOut, bool* pIsCached, Result* pCachedResult,
  T* pCachedValue, Getter getter) {
  std::lock_guard<os::SdkMutex> lock(detail::g_PanelInfoMutex);
  if (*pIsCached) {
    const Result result = *pCachedResult;
    if (result.IsSuccess()) {
      *pOut = *pCachedValue;
    }

    return result;
  }

  T value = {};
  const Result result = getter(&value);
  NN_ABORT_UNLESS(!IsFatalAppletManagerResult(result));
  if (result.IsSuccess()) {
    *pOut = value;
    *pCachedValue = value;
  }

  *pIsCached = true;
  *pCachedResult = result;
  return result;
}

}

Result RequestApplicationFunctionAuthorizationForSystem(
  ApplicationFunctionAuthorizationId id) {
  return GetPlatformServiceManagerForSystem()
    ->RequestApplicationFunctionAuthorization(0, id);
}

Result RequestApplicationFunctionAuthorizationForSystem(
  os::ProcessId processId, ApplicationFunctionAuthorizationId id) {
  return GetPlatformServiceManagerForSystem()
    ->RequestApplicationFunctionAuthorizationByProcessId(processId, id);
}

Result RequestApplicationFunctionAuthorizationForSystem(
  ncm::ApplicationId applicationId, uint32_t version,
  ApplicationFunctionAuthorizationId id) {
  return GetPlatformServiceManagerForSystem()
    ->RequestApplicationFunctionAuthorizationByApplicationId(applicationId,
      version, id);
}

Result RequestApplicationFunctionAuthorizationForSystem(
  ncm::ApplicationId applicationId, ncm::ProgramId programId,
  uint32_t version, ApplicationFunctionAuthorizationId id) {
  return GetPlatformServiceManagerForSystem()
    ->RequestApplicationFunctionAuthorizationByProgram(
      applicationId, programId, version, id);
}

Result RequestApplicationFunctionAuthorizationForSystem(
  ncm::ProgramId programId, ApplicationFunctionAuthorizationId id) {
  return GetPlatformServiceManagerForSystem()
    ->RequestApplicationFunctionAuthorizationByProgramId(programId, id);
}

Result GetFunctionBlackListSystemVersionToAuthorize(
  FunctionBlackListSystemVersion* pOutVersion,
  ncm::ApplicationId applicationId, ApplicationFunctionAuthorizationId id) {
  return GetPlatformServiceManagerForSystem()
    ->GetFunctionBlackListSystemVersionToAuthorize(pOutVersion,
      applicationId, id);
}

void RefreshApplicationFunctionBlackListDebugRecord() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetPlatformServiceManagerForSystem()
    ->RefreshApplicationFunctionBlackListDebugRecord());
}

uint32_t GetFunctionBlackListVersion() {
  uint32_t version = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetPlatformServiceManagerForSystem()
    ->GetFunctionBlackListVersion(sf::Out<uint32_t>(&version)));
  return version;
}

Result GetApplicationRequiredVersion(uint32_t* pOutVersion,
  ncm::ApplicationId applicationId, ApplicationFunctionAuthorizationId id) {
  return GetPlatformServiceManagerForSystem()
    ->GetApplicationRequiredVersion(pOutVersion, applicationId, id);
}

Result SetUsbDetachedForDebug(bool isDetached) {
  htc::Initialize();
  const Result result = htc::SetUsbDetachedForDebug(isDetached);
  htc::Finalize();
  if (result.GetInnerValueForDebug() == ResultUsbNotConnected) {
    return ResultUsbDetachNotSupported;
  }

  return result;
}

float GetCurrentIlluminance(bool* pOutIsOverLimit) {
  float illuminance = 0.0f;
  bool isOverLimit = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->GetCurrentIlluminanceEx(
      sf::Out<float>(&illuminance), sf::Out<bool>(&isOverLimit)));
  if (pOutIsOverLimit != nullptr) {
    *pOutIsOverLimit = isOverLimit;
  }

  return illuminance;
}

float GetCurrentIlluminance() {
  float illuminance = 0.0f;
  bool isOverLimit = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->GetCurrentIlluminanceEx(
      sf::Out<float>(&illuminance), sf::Out<bool>(&isOverLimit)));
  return illuminance;
}

bool IsIlluminanceAvailable() {
  bool isAvailable = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->IsIlluminanceAvailable(
      sf::Out<bool>(&isAvailable)));
  return isAvailable;
}

Result BeginVrMode() {
  if (!pctl::CheckStereoVisionPermission(false)) {
    return ResultStereoVisionRestricted;
  }

  const Result result = GetCommonStateGetterObject()->BeginVrModeEx();
  if (result.IsFailure() &&
    result.GetInnerValueForDebug() != ResultAppletNotSupported) {
    diag::detail::AbortImpl(&result);
  }

  return result;
}

void EndVrMode() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetCommonStateGetterObject()->EndVrModeEx());
}

bool IsVrMode() {
  bool isEnabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetCommonStateGetterObject()->IsVrModeEnabled(
    sf::Out<bool>(&isEnabled)));
  return isEnabled;
}

Result BeginVrModeForLadybird() {
  if (!pctl::CheckStereoVisionPermission(false)) {
    return ResultStereoVisionRestricted;
  }

  const Result result =
    GetCommonStateGetterObject()->BeginVrModeForLadybird();
  if (result.IsFailure() &&
    result.GetInnerValueForDebug() != ResultAppletNotSupported) {
    diag::detail::AbortImpl(&result);
  }

  return result;
}

void EndVrModeForLadybird() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->EndVrModeForLadybird());
}

bool IsVrModeForLadybird() {
  bool isEnabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->IsVrModeForLadybird(
      sf::Out<bool>(&isEnabled)));
  return isEnabled;
}

Result GetVrLaboGoggleViewport(VrLaboGoggleViewport* pOutViewport) {
  return GetCachedPanelInfo(pOutViewport,
    &detail::g_IsVrLaboGoggleViewportCached,
    &detail::g_VrLaboGoggleViewportResult, &detail::g_VrLaboGoggleViewport,
    [](VrLaboGoggleViewport* pOut) {
      return GetCommonStateGetterObject()->GetVrLaboGoggleViewport(
        sf::Out<VrLaboGoggleViewport>(pOut));
    });
}

Result GetPanelPhysicalSizeForSpecificTitle(PanelPhysicalSize* pOutSize) {
  return GetCachedPanelInfo(pOutSize, &detail::g_IsPanelPhysicalSizeCached,
    &detail::g_PanelPhysicalSizeResult, &detail::g_PanelPhysicalSize,
    [](PanelPhysicalSize* pOut) {
      return GetCommonStateGetterObject()
        ->GetPanelPhysicalSizeForSpecificTitle(
          sf::Out<PanelPhysicalSize>(pOut));
    });
}

Result GetPanelResolutionForSpecificTitle(PanelResolution* pOutResolution) {
  return GetCachedPanelInfo(pOutResolution,
    &detail::g_IsPanelResolutionCached, &detail::g_PanelResolutionResult,
    &detail::g_PanelResolution,
    [](PanelResolution* pOut) {
      return GetCommonStateGetterObject()
        ->GetPanelResolutionForSpecificTitle(sf::Out<PanelResolution>(pOut));
    });
}

void RequestSharedFontLoad(SharedFontType) {}

SharedFontLoadState GetSharedFontLoadState(SharedFontType type) {
  BuiltInFontDataOunce data = {};
  return GetBuiltInFontData(&data, static_cast<BuiltInFontTypeOunce>(type),
    false) ? SharedFontLoadState_Loaded : SharedFontLoadState_Loading;
}

const void* GetSharedFontAddress(SharedFontType type) {
  BuiltInFontDataOunce data = {};
  if (!GetBuiltInFontData(&data, static_cast<BuiltInFontTypeOunce>(type),
    false)) {
    return nullptr;
  }

  return data.pAddress;
}

size_t GetSharedFontSize(SharedFontType type) {
  BuiltInFontDataOunce data = {};
  if (!GetBuiltInFontData(&data, static_cast<BuiltInFontTypeOunce>(type),
    false)) {
    return 0;
  }

  return data.size;
}

}
