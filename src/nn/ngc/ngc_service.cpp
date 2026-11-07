#include "nn/diag/diag_abort.hpp"
#include "nn/ngc/ngc_profanity_filter.hpp"
#include "nn/oe/oe_api.hpp"
#include "nn/settings/settings_api.hpp"
#include "nn/sf/hipc.hpp"
#include "nn/sf/service_object.hpp"
#include "nn/sf/unit_heap_memory_resource.hpp"

namespace nn::ngc::detail {

namespace {

struct Proxy {
  uintptr_t* vtable;
  uint32_t handleKind;
  uint32_t handle;
  uintptr_t* referenceVtable;
  sf::impl::detail::ServiceObjectImplBase2 reference;
  uint32_t reserved;
  sf::UnitHeapMemoryResource* allocator;
};

const size_t AllocatorOffset = 144;

}

// Only the heap pointer of the shared proxy pool is read here.
struct ResourcePool {
  lmem::detail::HeapHead* heap;
};

ResourcePool g_ResourcePool;

extern uintptr_t ProxyVtable[] asm(
  "_ZTVN2nn2sf6detail38ObjectImplFactoryWithStatefulAllocatorINS0_4cmif6client"
  "6detail9CmifProxyINS_3ngc6detail8IServiceENS0_4hipc6client18Hipc2ProxyKind"
  "BaseILNSA_6detail11MessageTypeE6EEENS0_30MemoryResourceAllocationPolicyENS5_"
  "19ProcessModifierImplINS4_21DefaultProxyFilterTagEEEvEESG_E6ObjectE");

uint32_t ConvertLanguageCodeToMask(settings::LanguageCode code);

sf::SharedPointer<IService> CreateServiceByHipc() {
  lmem::detail::HeapHead* heap = g_ResourcePool.heap;
  uint32_t handle = 0;
  sf::hipc::InitializeHipcServiceResolution();
  Result result{sf::hipc::ConnectToHipcService(&handle, "ngc:u")};
  sf::hipc::FinalizeHipcServiceResolution();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);

  auto* allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
    reinterpret_cast<uintptr_t>(heap) + AllocatorOffset);
  using Allocate = void* (*)(sf::UnitHeapMemoryResource*, size_t, size_t);
  auto allocate = reinterpret_cast<Allocate>(allocator->vtable[2]);
  auto* proxy = static_cast<Proxy*>(allocate(allocator, sizeof(Proxy), 8));
  if (proxy != nullptr) {
    proxy->reference.references = 1;
    proxy->handleKind = 1;
    proxy->handle = handle;
    proxy->allocator = allocator;
    proxy->vtable = ProxyVtable + 2;
    proxy->referenceVtable = ProxyVtable + 15;
  }
  return sf::SharedPointer<IService>(reinterpret_cast<IService*>(proxy),
    false);
}

uint32_t GetLanguageSetting(bool checkDesiredLanguage) {
  settings::LanguageCode code = {};
  settings::GetLanguageCode(&code);
  uint32_t mask = ConvertLanguageCodeToMask(code);
  if (checkDesiredLanguage) {
    code = oe::GetDesiredLanguage();
    mask |= ConvertLanguageCodeToMask(code);
  }
  return mask;
}

}
