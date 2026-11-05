#pragma once

#include <stdint.h>

#include "nn/am/service/am_storage.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

#define NN_AM_RESERVED(index) virtual void Reserved##index() = 0

class IAppletAccessor : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4);
  virtual Result GetAppletStateChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  NN_AM_RESERVED(6); NN_AM_RESERVED(7);
  virtual Result RequestExit() = 0;
  NN_AM_RESERVED(9); NN_AM_RESERVED(10);
};

class ILibraryAppletAccessor : public IAppletAccessor {
 public:
  virtual Result SetOutOfFocusApplicationSuspendingEnabled(
    bool isEnabled) = 0;
  virtual Result PresetLibraryAppletGpuTimeSliceZero() = 0;
  NN_AM_RESERVED(13);
  virtual Result RequestForAppletToGetForeground() = 0;
  virtual Result GetChildAppletAccessor(
    const sf::Out<sf::SharedPointer<IAppletAccessor>>& pOutAccessor) = 0;
  NN_AM_RESERVED(16);
  virtual Result PushInData(sf::SharedPointer<IStorage> storage) = 0;
  virtual Result PopOutData(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage) = 0;
  NN_AM_RESERVED(19);
  virtual Result PushInteractiveInData(
    sf::SharedPointer<IStorage> storage) = 0;
  virtual Result PopInteractiveOutData(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage) = 0;
  NN_AM_RESERVED(22);
  virtual Result GetPopInteractiveOutDataEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
};

#undef NN_AM_RESERVED

}
