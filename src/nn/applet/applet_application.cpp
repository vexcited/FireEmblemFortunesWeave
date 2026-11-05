#include <mutex>

#include "nn/am/service/am_application_functions.hpp"
#include "nn/am/service/am_window_controller.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::am {

applet::AppletResourceUserId GetAppletResourceUserId();

}

namespace nn::ncm {

struct ApplicationId {
  uint64_t value;
};

}

namespace nn::os {

struct ProcessId {
  uint64_t value;
};

}

namespace nn::applet {

enum LaunchParameterKind : int32_t {};
enum ApplicationExitReason : int32_t {};

struct ApplicationAttributeForQuest {
  uint32_t playableTime;
  uint32_t idleDetectionTime;
  float volume;
};

Result GetAppletResourceUserIdOfCallerApplet(AppletResourceUserId* pOut);
os::ProcessId GetProcessId(AppletResourceUserId aruid);
bool TryPopFromApplicationParameterChannel(StorageHandle* pOutStorage,
  LaunchParameterKind kind);
void RequestToRelaunchApplication(StorageHandle storage);
void RequestToLaunchApplication(ncm::ApplicationId applicationId,
  StorageHandle storage);
void RequestToLaunchApplicationForQuest(ncm::ApplicationId applicationId,
  StorageHandle storage, const ApplicationAttributeForQuest* pAttribute);
ApplicationExitReason GetLastApplicationExitReason();
int GetPreviousProgramIndex();

namespace {

using am::service::GetApplicationFunctionsObject;
using am::service::IStorage;

// Applet results are module 131.
const Result ResultCallerAppletNotFound = {(60 << 9) | 131};
const Result ResultCallerAppletTerminated = {(61 << 9) | 131};

bool IsResultCallerAppletNotFound(Result result) {
  return result.GetInnerValueForDebug() == ((81 << 9) | 128);
}

bool IsResultCallerAppletTerminated(Result result) {
  return result.GetInnerValueForDebug() == ((82 << 9) | 128);
}

bool IsResultNoData(Result result) {
  return result.GetInnerValueForDebug() == ((2 << 9) | 128);
}

os::SdkMutex g_ApplicationLaunchMutex;
bool g_IsApplicationLaunchRequested;

void MarkApplicationLaunchRequested() {
  std::lock_guard<os::SdkMutex> lock(g_ApplicationLaunchMutex);
  NN_ABORT_UNLESS(!g_IsApplicationLaunchRequested);
  g_IsApplicationLaunchRequested = true;
}

}

AppletResourceUserId GetAppletResourceUserId() {
  return am::GetAppletResourceUserId();
}

Result GetAppletResourceUserIdOfCallerApplet(AppletResourceUserId* pOut) {
  AppletResourceUserId aruid = {};
  Result result =
    am::service::GetWindowControllerObject()
      ->GetAppletResourceUserIdOfCallerApplet(
        sf::Out<AppletResourceUserId>(&aruid));
  if (IsResultCallerAppletNotFound(result)) {
    result = ResultCallerAppletNotFound;
  }
  else if (IsResultCallerAppletTerminated(result)) {
    result = ResultCallerAppletTerminated;
  }
  else {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  *pOut = aruid;
  return result;
}

os::ProcessId GetProcessId(AppletResourceUserId aruid) {
  return os::ProcessId{aruid.lower};
}

bool TryPopFromApplicationParameterChannel(StorageHandle* pOutStorage,
  LaunchParameterKind kind) {
  sf::SharedPointer<IStorage> storage;
  const Result result = GetApplicationFunctionsObject()->PopLaunchParameter(
    sf::Out<sf::SharedPointer<IStorage>>(&storage), kind);
  if (result.IsSuccess()) {
    pOutStorage->_p = storage.Detach();
    return true;
  }
  const Result unexpected = IsResultNoData(result) ? Result{0} : result;
  storage.Reset();
  NN_ABORT_UNLESS_RESULT_SUCCESS(unexpected);
  return false;
}

void RequestToRelaunchApplication(StorageHandle storage) {
  RequestToLaunchApplication(ncm::ApplicationId{0}, storage);
}

void RequestToLaunchApplication(ncm::ApplicationId applicationId,
  StorageHandle storage) {
  MarkApplicationLaunchRequested();
  am::service::IApplicationFunctions* pFunctions =
    GetApplicationFunctionsObject();
  Result result;
  if (storage._p != nullptr) {
    result = pFunctions->RequestToLaunchApplication(applicationId.value,
      sf::SharedPointer<IStorage>(static_cast<IStorage*>(storage._p), false));
  }
  else {
    result = pFunctions->RequestToLaunchApplicationWithoutParameter(
      applicationId.value);
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void RequestToLaunchApplicationForQuest(ncm::ApplicationId applicationId,
  StorageHandle storage, const ApplicationAttributeForQuest* pAttribute) {
  am::service::ApplicationAttributeForQuest attribute = {};
  attribute.playableTime = pAttribute->playableTime;
  attribute.idleDetectionTime = pAttribute->idleDetectionTime;
  attribute.volume = pAttribute->volume;
  if (storage._p != nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetApplicationFunctionsObject()->RequestToLaunchApplicationForQuest(
        applicationId.value,
        sf::SharedPointer<IStorage>(static_cast<IStorage*>(storage._p),
          false),
        attribute));
  }
  else {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetApplicationFunctionsObject()
        ->RequestToLaunchApplicationForQuestWithoutParameter(
          applicationId.value, attribute));
  }
}

ApplicationExitReason GetLastApplicationExitReason() {
  int32_t reason = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->GetLastApplicationExitReason(
      sf::Out<int32_t>(&reason)));
  return static_cast<ApplicationExitReason>(reason);
}

int GetPreviousProgramIndex() {
  int32_t index = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->GetPreviousProgramIndex(
      sf::Out<int32_t>(&index)));
  return index;
}

}
