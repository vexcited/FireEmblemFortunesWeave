#include "nn/applet/applet_types.hpp"
#include "nn/chat/chat_service.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::chat {

class IDebugService : public sf::IServiceObject {};

enum VirtualCameraUserType : int32_t {};

namespace detail {

namespace {

using VirtualCameraObject = sf::SharedPointer<IVirtualCameraShimScopedObject>;

int g_VirtualCameraServiceInitializeCount;

}

// The debug service has no declared methods here, the camera factory is the
// command behind slot 46 of its table.
void InitializeVirtualCameraService(sf::SharedPointer<IDebugService> service,
  applet::AppletResourceUserId aruid, VirtualCameraUserType type) {
  using Create = Result (*)(IDebugService*, sf::Out<VirtualCameraObject>,
    applet::AppletResourceUserId, VirtualCameraUserType);
  IDebugService* pService = service.Get();
  const auto create = reinterpret_cast<Create>(
    (*reinterpret_cast<uintptr_t* const*>(pService))[46]);
  VirtualCameraObject object;
  NN_ABORT_UNLESS_RESULT_SUCCESS(create(pService,
    sf::Out<VirtualCameraObject>(&object), aruid, type));
  VirtualCameraObject(object.Detach(), false)
    .Swap(g_VirtualCameraShimScopedObject);
  ++g_VirtualCameraServiceInitializeCount;
}

void InitializeVirtualCameraService(sf::SharedPointer<IUserService> service) {
  if (g_VirtualCameraServiceInitializeCount == 0) {
    VirtualCameraObject object;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      service->CreateVirtualCameraShimScopedObject(
        sf::Out<VirtualCameraObject>(&object),
        applet::GetAppletResourceUserId()));
    VirtualCameraObject(object.Detach(), false)
      .Swap(g_VirtualCameraShimScopedObject);
  }
  ++g_VirtualCameraServiceInitializeCount;
}

void FinalizeVirtualCameraService() {
  if (g_VirtualCameraServiceInitializeCount == 0) {
    return;
  }
  if (--g_VirtualCameraServiceInitializeCount == 0) {
    g_VirtualCameraShimScopedObject.Reset();
  }
}

}

}
