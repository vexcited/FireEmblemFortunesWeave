#include "nn/audio/audio_system.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/lmem/exp_heap.hpp"
#include "nn/os/mutex.hpp"
#include "nn/sf/hipc.hpp"

namespace nn::audio {

namespace detail {

class IAudioInManager : public sf::IServiceObject {};

class IAudioOutManager : public sf::IServiceObject {};

class IAudioSnoopManager : public sf::IServiceObject {};

// Each service tag owns an expanded heap that is set up when the module
// loads.
struct ProxyHeap {
  lmem::detail::HeapHead* heap;
  os::MutexType mutex;
};

extern ProxyHeap g_AudioInManagerProxyHeap;
extern ProxyHeap g_AudioOutManagerProxyHeap;
extern ProxyHeap g_AudioSnoopManagerProxyHeap;
extern ProxyHeap g_AudioSystemManagerForAppletProxyHeap;
extern ProxyHeap g_AudioSystemManagerForDebuggerProxyHeap;

extern uintptr_t AudioInManagerProxyVtable[];
extern uintptr_t AudioOutManagerProxyVtable[];
extern uintptr_t AudioSnoopManagerProxyVtable[];
extern uintptr_t AudioSystemManagerForAppletProxyVtable[];
extern uintptr_t AudioSystemManagerForDebuggerProxyVtable[];

namespace {

struct Proxy {
  uintptr_t* vtable;
  uint32_t handleKind;
  uint32_t handle;
  uintptr_t* referenceVtable;
  uint32_t references;
};

// The reference counter sits behind the methods of the interface, so its
// vtable starts further in for larger interfaces.
template <typename Interface>
[[gnu::always_inline]] sf::SharedPointer<Interface> CreateProxyByHipc(
  const char* pServiceName, ProxyHeap& heap, uintptr_t* pVtable,
  size_t referenceVtableOffset) {
  sf::SharedPointer<Interface> proxy;
  uint32_t handle = 0;
  sf::hipc::InitializeHipcServiceResolution();
  const Result result{sf::hipc::ConnectToHipcService(&handle, pServiceName)};
  sf::hipc::FinalizeHipcServiceResolution();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);

  os::LockMutex(&heap.mutex);
  auto* pProxy =
    static_cast<Proxy*>(lmem::AllocateFromExpHeap(heap.heap, sizeof(Proxy)));
  os::UnlockMutex(&heap.mutex);
  if (pProxy != nullptr) {
    pProxy->references = 1;
    pProxy->handleKind = 1;
    pProxy->handle = handle;
    pProxy->vtable = pVtable;
    pProxy->referenceVtable = pVtable + referenceVtableOffset;
  }
  sf::SharedPointer<Interface>(reinterpret_cast<Interface*>(pProxy), false)
    .Swap(proxy);
  return proxy;
}

}

}

sf::SharedPointer<detail::IAudioInManager> CreateAudioInManagerByHipc() {
  return detail::CreateProxyByHipc<detail::IAudioInManager>("audin:u",
    detail::g_AudioInManagerProxyHeap, detail::AudioInManagerProxyVtable,
    13);
}

sf::SharedPointer<detail::IAudioOutManager> CreateAudioOutManagerByHipc() {
  return detail::CreateProxyByHipc<detail::IAudioOutManager>("audout:u",
    detail::g_AudioOutManagerProxyHeap, detail::AudioOutManagerProxyVtable,
    11);
}

sf::SharedPointer<detail::IAudioSnoopManager>
CreateAudioSnoopManagerByHipc() {
  return detail::CreateProxyByHipc<detail::IAudioSnoopManager>("auddev",
    detail::g_AudioSnoopManagerProxyHeap,
    detail::AudioSnoopManagerProxyVtable, 11);
}

sf::SharedPointer<detail::IAudioSystemManagerForApplet>
CreateAudioSystemManagerForAppletByHipc() {
  return detail::CreateProxyByHipc<detail::IAudioSystemManagerForApplet>(
    "aud:a", detail::g_AudioSystemManagerForAppletProxyHeap,
    detail::AudioSystemManagerForAppletProxyVtable, 24);
}

sf::SharedPointer<detail::IAudioSystemManagerForDebugger>
CreateAudioSystemManagerForDebuggerByHipc() {
  return detail::CreateProxyByHipc<detail::IAudioSystemManagerForDebugger>(
    "aud:d", detail::g_AudioSystemManagerForDebuggerProxyHeap,
    detail::AudioSystemManagerForDebuggerProxyVtable, 9);
}

}
