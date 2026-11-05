#include "nn/am/service/am_application.hpp"
#include "nn/am/service/am_controllers.hpp"

namespace nn::am {

Result GetGraphicsSupervisor(sf::Out<sf::NativeHandle> pOutHandle) {
  return service::GetSelfControllerObject()->GetGraphicsSupervisor(
    pOutHandle);
}

Result SetCopyrightLayerEnabled(bool isEnabled) {
  return service::GetSelfControllerObject()->SetCopyrightLayerEnabled(
    isEnabled);
}

// The copyright image itself is not sent, only its placement.
Result SetCopyrightImageInfo(int x, int y, int width, int height,
  int originMode) {
  return service::GetApplicationFunctionsObject()
    ->SetApplicationCopyrightImage(sf::InBuffer(nullptr, 0), x, y, width,
      height, originMode);
}

Result SetRecordingLayerEnabled(bool isEnabled) {
  return service::GetSelfControllerObject()->SetRecordingLayerEnabled(
    isEnabled);
}

Result SetSharingLayerEnabled(bool isEnabled) {
  return service::GetSelfControllerObject()->SetSharingLayerEnabled(
    isEnabled);
}

Result SetMovieMakerLayerEnabled(bool isEnabled) {
  return service::GetApplicationFunctionsObject()->SetMovieMakerLayerEnabled(
    isEnabled);
}

}
