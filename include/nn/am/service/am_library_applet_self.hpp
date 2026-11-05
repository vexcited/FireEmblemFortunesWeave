#pragma once

#include <stdint.h>

#include "nn/am/service/am_storage.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

#define NN_AM_RESERVED(index) virtual void Reserved##index() = 0

class ILibraryAppletSelfAccessor : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3);
  virtual Result PopInData(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage) = 0;
  virtual Result PushOutData(sf::SharedPointer<IStorage> storage) = 0;
  virtual Result PopInteractiveInData(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage) = 0;
  virtual Result PushInteractiveOutData(
    sf::SharedPointer<IStorage> storage) = 0;
  NN_AM_RESERVED(8);
  virtual Result GetPopInteractiveInDataEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  NN_AM_RESERVED(10); NN_AM_RESERVED(11); NN_AM_RESERVED(12);
  NN_AM_RESERVED(13); NN_AM_RESERVED(14); NN_AM_RESERVED(15);
  NN_AM_RESERVED(16); NN_AM_RESERVED(17); NN_AM_RESERVED(18);
  virtual Result GetDesirableKeyboardLayout(sf::Out<uint32_t> pOutLayout) = 0;
  NN_AM_RESERVED(20); NN_AM_RESERVED(21);
  virtual Result UnpopInData(sf::SharedPointer<IStorage> storage) = 0;
  NN_AM_RESERVED(23);
  virtual Result GetIndirectLayerProducerHandle(
    sf::Out<uint64_t> pOutHandle) = 0;
};

class IProcessWindingController : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  virtual Result PushContext(sf::SharedPointer<IStorage> storage) = 0;
  virtual Result PopContext(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage) = 0;
};

#undef NN_AM_RESERVED

}
