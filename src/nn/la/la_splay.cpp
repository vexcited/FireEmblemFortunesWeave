#include "nn/la/la_common_arguments.hpp"

namespace nn::la::splay {

namespace {

constexpr applet::AppletId AppletId_SplayGuest = applet::AppletId{0x01010024};

}

Result ShowSplayGuest() {
  const CommonArgumentsWriter writer(0);
  return StartLibraryAppletEasy(AppletId_SplayGuest, writer, nullptr, 0,
    nullptr, 0, nullptr, false);
}

}
