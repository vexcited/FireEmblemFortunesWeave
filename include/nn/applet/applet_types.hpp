#pragma once

#include <stdint.h>

namespace nn::applet {

struct AppletResourceUserId {
  uint64_t lower;
};

struct ApplicationSpec {
  uint32_t value;
};

enum AppletId : int32_t {};
enum LibraryAppletMode : int32_t {};

struct LibraryAppletHandle {
  void* _p;
};

struct StorageHandle {
  void* _p;
};

struct LibraryAppletSelfHandle {
  void* _p;
};

AppletResourceUserId GetAppletResourceUserId();

}
