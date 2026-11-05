#pragma once

#include <atomic>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/imf/imf_types.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::imf {

class ISession : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result ReadMessage(sf::Out<bool> pOutIsRead,
    sf::Out<Message> pOutMessage) = 0;
  virtual Result SetSelection(int start, int end) = 0;
  virtual Result ReadText(sf::Out<int> pOutSize,
    const sf::OutBuffer& outText) = 0;
  virtual Result WriteText(sf::Out<int> pOutSize,
    const sf::InBuffer& text) = 0;
  virtual Result ReadTextFrom(sf::Out<int> pOutSize,
    const sf::OutBuffer& outText, int start) = 0;
  virtual Result TerminateComposition() = 0;
  virtual Result EnableUserWords(int count) = 0;
  virtual Result DisableUserWords() = 0;
  virtual Result SetUserWords(const sf::InArray<UserWord>& words) = 0;
  virtual Result EnableAdditionalDictionaries(uint64_t mask) = 0;
  virtual Result DisableAdditionalDictionaries() = 0;
  virtual void Reserved15() = 0;
  virtual Result SetAdditionalDictionaries(
    const sf::InArray<AdditionalDictionary>& dictionaries, uint32_t size,
    sf::NativeHandle&& transferMemoryHandle, bool isOwned) = 0;
  virtual void Reserved17() = 0;
  virtual Result PassHidStateSet(const sf::OutBuffer& outUnit,
    const sf::InBuffer& unit) = 0;
};

class IClientService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateSession(
    const sf::Out<sf::SharedPointer<ISession>>& pOutSession,
    applet::AppletResourceUserId aruid, ServiceId id,
    sf::NativeHandle&& transferMemoryHandle, uint64_t transferMemorySize) = 0;
};

}

namespace nn::imf::detail {

// The caller buffer starts with this storage and lends the rest to the
// service as transfer memory.
struct SessionStorage {
  sf::SharedPointer<ISession> session;
  std::atomic<uint64_t> isInUse{1};
};

Result CreateClientServiceProxyForIpc(
  sf::SharedPointer<IClientService>* pOutService);
applet::AppletResourceUserId GetAppletResourceUserId();

}
