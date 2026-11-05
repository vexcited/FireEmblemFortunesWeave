#pragma once

#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/am/interfaces.hpp"
#include "nn/am/service/am_storage.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

struct ApplicationAttributeForQuest {
  uint32_t playableTime;
  uint32_t idleDetectionTime;
  float volume;
  uint8_t reserved[20];
};

class IApplicationFunctions : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result PopLaunchParameter(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& outStorage,
    int32_t kind) = 0;
  virtual Result RequestToLaunchApplication(uint64_t applicationId,
    nn::sf::SharedPointer<IStorage> storage) = 0;
  virtual void Reserved6() = 0;
  virtual Result RequestToLaunchApplicationWithoutParameter(
    uint64_t applicationId) = 0;
  virtual void Reserved8() = 0;
  virtual Result RequestToLaunchApplicationForQuest(uint64_t applicationId,
    nn::sf::SharedPointer<IStorage> storage,
    const ApplicationAttributeForQuest& attribute) = 0;
  virtual Result RequestToLaunchApplicationForQuestWithoutParameter(
    uint64_t applicationId, const ApplicationAttributeForQuest& attribute) = 0;
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
  virtual void Reserved26() = 0;
  virtual void Reserved27() = 0;
  virtual void Reserved28() = 0;
  virtual void Reserved29() = 0;
  virtual void Reserved30() = 0;
  virtual void Reserved31() = 0;
  virtual void Reserved32() = 0;
  virtual void Reserved33() = 0;
  virtual void Reserved34() = 0;
  virtual void Reserved35() = 0;
  virtual void Reserved36() = 0;
  virtual void Reserved37() = 0;
  virtual void Reserved38() = 0;
  virtual void Reserved39() = 0;
  virtual void Reserved40() = 0;
  virtual void Reserved41() = 0;
  virtual void Reserved42() = 0;
  virtual void Reserved43() = 0;
  virtual void Reserved44() = 0;
  virtual void Reserved45() = 0;
  virtual void Reserved46() = 0;
  virtual void Reserved47() = 0;
  virtual void Reserved48() = 0;
  virtual void Reserved49() = 0;
  virtual Result GetPreviousProgramIndex(nn::sf::Out<int32_t> outIndex) = 0;
  virtual void Reserved51() = 0;
  virtual void Reserved52() = 0;
  virtual void Reserved53() = 0;
  virtual Result GetFriendInvitationStorageChannelEvent(
    nn::sf::Out<nn::sf::NativeHandle> outHandle) = 0;
  virtual Result TryPopFromFriendInvitationStorageChannel(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& outStorage) = 0;
  virtual void Reserved56() = 0;
  virtual void Reserved57() = 0;
  virtual void Reserved58() = 0;
  virtual void Reserved59() = 0;
  virtual void Reserved60() = 0;
  virtual void Reserved61() = 0;
  virtual void Reserved62() = 0;
  virtual Result GetLastApplicationExitReason(
    nn::sf::Out<int32_t> outReason) = 0;
};

// The session objects are kept as opaque am::Interface pointers.
inline IApplicationFunctions* GetApplicationFunctionsObject() {
  return reinterpret_cast<IApplicationFunctions*>(GetApplicationFunctions());
}

}
