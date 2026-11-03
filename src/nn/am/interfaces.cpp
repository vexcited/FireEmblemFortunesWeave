#include "nn/am/interfaces.hpp"

namespace nn::am {

namespace detail {

Interface* ApplicationFunctions;
Interface* CommonStateGetter;
Interface* SelfController;
Interface* WindowController;

}

static Interface* AccessInterface(Interface* object) {
  if (object) {
    using Function = void (*)(Interface*);
    reinterpret_cast<Function>(object->vtable[0])(object);
    reinterpret_cast<Function>(object->vtable[1])(object);
  }

  return object;
}

Interface* GetApplicationFunctions() {
  return AccessInterface(detail::ApplicationFunctions);
}

Interface* GetCommonStateGetter() {
  return AccessInterface(detail::CommonStateGetter);
}

Interface* GetSelfController() {
  return AccessInterface(detail::SelfController);
}

Interface* GetWindowController() {
  return AccessInterface(detail::WindowController);
}

}
