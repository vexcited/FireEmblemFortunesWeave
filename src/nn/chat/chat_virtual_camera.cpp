#include <mutex>

#include "nn/chat/chat_service.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::vi2 {

struct LayerType;
struct EndpointType;
struct DisplayType;

void DestroyLayer(LayerType* pLayer);
void DestroyEndpoint(EndpointType* pEndpoint);
void DestroyDisplay(DisplayType* pDisplay);

}

namespace nn::chat {

namespace detail {

struct VirtualCameraState {
  bool isCreated;
  os::SdkMutex mutex;
};

[[gnu::visibility("hidden")]] extern VirtualCameraState g_VirtualCameraState;

}

// The camera is torn down in the reverse order of its creation.
void FinalizeVirtualCamera(VirtualCameraType* pCamera) {
  std::lock_guard<os::SdkMutex> lock(detail::g_VirtualCameraState.mutex);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_VirtualCameraShimScopedObject->FinalizeVirtualCamera());
  pCamera->nativeWindowHandle = nullptr;
  vi2::DestroyLayer(reinterpret_cast<vi2::LayerType*>(pCamera->layerStorage));
  vi2::DestroyEndpoint(
    reinterpret_cast<vi2::EndpointType*>(pCamera->endpointStorage));
  vi2::DestroyDisplay(
    reinterpret_cast<vi2::DisplayType*>(pCamera->displayStorage));
  pCamera->isInitialized = false;
  detail::g_VirtualCameraState.isCreated = false;
}

}
