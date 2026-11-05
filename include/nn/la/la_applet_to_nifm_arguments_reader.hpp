#pragma once

#include "nn/applet/applet_types.hpp"
#include "nn/result.hpp"

namespace nn::la {

class AppletToNifmArgumentsReader {
 public:
  AppletToNifmArgumentsReader();
  ~AppletToNifmArgumentsReader();

  bool TryPopFromOutChannel(applet::LibraryAppletHandle handle);
  bool ReadFromStorage(applet::StorageHandle storage);
  Result GetResult();

 private:
  void* m_Storage;
};

}
