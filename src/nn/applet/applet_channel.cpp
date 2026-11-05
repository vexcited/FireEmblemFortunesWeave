#include <mutex>

#include "nn/am/service/am_storage.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::am::service {

class INamedChannel : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Push(sf::SharedPointer<IStorage> storage) = 0;
  virtual void Reserved5() = 0;
  virtual Result TryPop(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage) = 0;
};

}

namespace nn::applet {

struct ChannelHandle {
  void* _p;
};

void CloseChannel(ChannelHandle handle);
void PushToChannel(ChannelHandle handle, StorageHandle storage);
bool TryPopFromChannel(StorageHandle* pOutStorage, ChannelHandle handle);
os::SystemEventType* GetChannelEvent(ChannelHandle handle);

namespace {

using am::service::INamedChannel;
using am::service::IStorage;

struct Channel {
  INamedChannel* channel;
  os::SystemEventType event;
  bool isUsed;
};

os::SdkMutex g_ChannelMutex;

Channel* Get(ChannelHandle handle) {
  return static_cast<Channel*>(handle._p);
}

bool IsResultNoData(Result result) {
  return result.GetInnerValueForDebug() == ((2 << 9) | 128);
}

}

void CloseChannel(ChannelHandle handle) {
  Channel* pChannel = Get(handle);
  os::DestroySystemEvent(&pChannel->event);
  pChannel->channel->Release();
  pChannel->channel = nullptr;
  std::lock_guard<os::SdkMutex> lock(g_ChannelMutex);
  pChannel->isUsed = false;
}

void PushToChannel(ChannelHandle handle, StorageHandle storage) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Get(handle)->channel->Push(
    sf::SharedPointer<IStorage>(static_cast<IStorage*>(storage._p), true)));
  ReleaseStorage(storage);
}

bool TryPopFromChannel(StorageHandle* pOutStorage, ChannelHandle handle) {
  sf::SharedPointer<IStorage> storage;
  const Result result = Get(handle)->channel->TryPop(
    sf::Out<sf::SharedPointer<IStorage>>(&storage));
  if (result.IsSuccess()) {
    pOutStorage->_p = storage.Detach();
    return true;
  }
  const Result unexpected = IsResultNoData(result) ? Result{0} : result;
  storage.Reset();
  NN_ABORT_UNLESS_RESULT_SUCCESS(unexpected);
  return false;
}

os::SystemEventType* GetChannelEvent(ChannelHandle handle) {
  return &Get(handle)->event;
}

}
