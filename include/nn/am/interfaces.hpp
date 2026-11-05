#pragma once

#include <stdint.h>

namespace nn::am {

struct Interface {
  uintptr_t* vtable;
};

Interface* GetApplicationFunctions();
Interface* GetCommonStateGetter();
Interface* GetSelfController();
Interface* GetWindowController();
Interface* GetAppletCommonFunctions();
Interface* GetDebugFunctions();
Interface* GetDisplayController();
Interface* GetLibraryAppletCreator();
bool InitializeApplicationInterfaces();

namespace detail {

extern Interface* ApplicationFunctions;
extern Interface* CommonStateGetter;
extern Interface* SelfController;
extern Interface* WindowController;

}
}
