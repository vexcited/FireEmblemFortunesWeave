#include "nn/audio/audio_system.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/sf/exp_heap_proxy.hpp"
#include "nn/sf/hipc.hpp"

namespace nn::audio {

namespace detail {

class IAudioInManager : public sf::IServiceObject {};

class IAudioOutManager : public sf::IServiceObject {};

class IAudioSnoopManager : public sf::IServiceObject {};

extern sf::ExpHeapAllocator g_AudioInManagerProxyHeap;
extern sf::ExpHeapAllocator g_AudioOutManagerProxyHeap;
extern sf::ExpHeapAllocator g_AudioSnoopManagerProxyHeap;
extern sf::ExpHeapAllocator g_AudioSystemManagerForAppletProxyHeap;
extern sf::ExpHeapAllocator g_AudioSystemManagerForDebuggerProxyHeap;

extern uintptr_t AudioInManagerProxyVtable[];
extern uintptr_t AudioOutManagerProxyVtable[];
extern uintptr_t AudioSnoopManagerProxyVtable[];
extern uintptr_t AudioSystemManagerForAppletProxyVtable[];
extern uintptr_t AudioSystemManagerForDebuggerProxyVtable[];

namespace {

template <typename Interface>
[[gnu::always_inline]] sf::SharedPointer<Interface> CreateProxyByHipc(
  const char* pServiceName, sf::ExpHeapAllocator& allocator,
  uintptr_t* pVtable, size_t referenceVtableOffset) {
  sf::SharedPointer<Interface> proxy;
  uint32_t handle = 0;
  sf::hipc::InitializeHipcServiceResolution();
  const Result result{sf::hipc::ConnectToHipcService(&handle, pServiceName)};
  sf::hipc::FinalizeHipcServiceResolution();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  sf::SharedPointer<Interface>(sf::detail::CreateExpHeapProxy<Interface>(
    allocator, handle, pVtable, referenceVtableOffset), false).Swap(proxy);
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
