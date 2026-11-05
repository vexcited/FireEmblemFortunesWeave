#pragma once

#include "nn/am/interfaces.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

class IWindowController : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result GetAppletResourceUserIdOfCallerApplet(
    sf::Out<applet::AppletResourceUserId> pOutAruid) = 0;
};

inline IWindowController* GetWindowControllerObject() {
  return reinterpret_cast<IWindowController*>(GetWindowController());
}

}
