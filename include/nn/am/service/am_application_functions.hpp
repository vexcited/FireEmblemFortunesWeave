#pragma once

#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/am/interfaces.hpp"
#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

class IApplicationFunctions : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual void Reserved8() = 0;
  virtual void Reserved9() = 0;
  virtual void Reserved10() = 0;
  virtual Result EnsureSaveData(nn::sf::Out<int64_t> outRequiredSize,
    const account::Uid& user) = 0;
  virtual void Reserved12() = 0;
  virtual void Reserved13() = 0;
  virtual void Reserved14() = 0;
  virtual void Reserved15() = 0;
  virtual Result ExtendSaveData(nn::sf::Out<int64_t> outRequiredSize,
    uint8_t type, const account::Uid& user, int64_t size,
    int64_t journalSize) = 0;
  virtual Result GetSaveDataSize(nn::sf::Out<int64_t> outSize,
    nn::sf::Out<int64_t> outJournalSize, uint8_t type,
    const account::Uid& user) = 0;
  virtual Result CreateCacheStorage(nn::sf::Out<int64_t> outRequiredSize,
    nn::sf::Out<int32_t> outTargetMedia, uint16_t index, int64_t size,
    int64_t journalSize) = 0;
  virtual Result GetSaveDataSizeMax(nn::sf::Out<int64_t> outSizeMax,
    nn::sf::Out<int64_t> outJournalSizeMax) = 0;
  virtual Result GetCacheStorageMax(nn::sf::Out<int32_t> outIndexMax,
    nn::sf::Out<int64_t> outSizeMax) = 0;
  virtual void Reserved21() = 0;
  virtual void Reserved22() = 0;
  virtual void Reserved23() = 0;
  virtual void Reserved24() = 0;
  virtual Result GetDeviceSaveDataSizeMax(nn::sf::Out<int64_t> outSizeMax,
    nn::sf::Out<int64_t> outJournalSizeMax) = 0;
};

// The session objects are kept as opaque am::Interface pointers.
inline IApplicationFunctions* GetApplicationFunctionsObject() {
  return reinterpret_cast<IApplicationFunctions*>(GetApplicationFunctions());
}

}
