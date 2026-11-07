#include "nn/diag/diag_abort.hpp"
#include "nn/ngc/ngc_profanity_filter.hpp"
#include "nn/lmem/unit_heap.hpp"
#include "nn/oe/oe_api.hpp"
#include "nn/os/synchronization.hpp"
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

inline bool IsSameLanguageCode(const settings::LanguageCode& lhs,
  const settings::LanguageCode& rhs) {
  for (size_t i = 0; i < sizeof(lhs.string); i++) {
    if (lhs.string[i] != rhs.string[i]) {
      return false;
    }
    if (lhs.string[i] == '\0') {
      return true;
    }
  }
  return true;
}

// Codes are checked in settings::Language order, each one maps to a filter
// language bit.
uint32_t ConvertLanguageCodeToMask(settings::LanguageCode code) {
  if (IsSameLanguageCode(code, settings::LanguageCode{"ja"})) {
    return 1 << 0;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"en-US"})) {
    return 1 << 1;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"fr"})) {
    return 1 << 5;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"de"})) {
    return 1 << 6;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"it"})) {
    return 1 << 7;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"es"})) {
    return 1 << 8;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"zh-CN"})) {
    return 1 << 11;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"ko"})) {
    return 1 << 10;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"nl"})) {
    return 1 << 9;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"pt"})) {
    return 1 << 12;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"ru"})) {
    return 1 << 13;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"zh-TW"})) {
    return 1 << 15;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"en-GB"})) {
    return 1 << 4;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"fr-CA"})) {
    return 1 << 2;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"es-419"})) {
    return 1 << 3;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"zh-Hans"})) {
    return 1 << 11;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"zh-Hant"})) {
    return 1 << 15;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"pt-BR"})) {
    return 1 << 14;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"pl"})) {
    return 1 << 16;
  }
  if (IsSameLanguageCode(code, settings::LanguageCode{"th"})) {
    return 1 << 17;
  }
  return 0;
}

}

// Proxies come from a unit heap set up when the module loads.
struct ResourcePool {
  lmem::detail::HeapHead* heap;
  os::SdkMutexType mutex;
  uint32_t references;
  alignas(8) uint8_t heapHeader[144];
  sf::UnitHeapMemoryResource allocator;
  alignas(16) uint8_t buffer[512];
};

ResourcePool g_ResourcePool;

extern uintptr_t UnitHeapVtable[] asm("_ZTVN2nn2sf22UnitHeapMemoryResourceE");

namespace {

struct ResourcePoolInitializer {
  ResourcePoolInitializer() {
    ResourcePool& pool = g_ResourcePool;
    pool.mutex.Lock();
    if (pool.references != 0) {
      ++pool.references;
    }
    else {
      auto* header = reinterpret_cast<lmem::detail::HeapHead*>(
        pool.heapHeader);
      lmem::detail::HeapHead* heap = lmem::CreateUnitHeap(pool.buffer,
        sizeof(pool.buffer), 64, 4, 16, header);
      pool.heap = header;
      pool.allocator.vtable = UnitHeapVtable + 2;
      pool.allocator.heap = heap;
      pool.references = 1;
    }
    pool.mutex.Unlock();
  }
};

ResourcePoolInitializer g_ResourcePoolInitializer;

}

extern uintptr_t ProxyVtable[] asm(
  "_ZTVN2nn2sf6detail38ObjectImplFactoryWithStatefulAllocatorINS0_4cmif6client"
  "6detail9CmifProxyINS_3ngc6detail8IServiceENS0_4hipc6client18Hipc2ProxyKind"
  "BaseILNSA_6detail11MessageTypeE6EEENS0_30MemoryResourceAllocationPolicyENS5_"
  "19ProcessModifierImplINS4_21DefaultProxyFilterTagEEEvEESG_E6ObjectE");

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
