#include "nn/os/managers.hpp"

#include <stddef.h>

extern "C" uint32_t svcGetInfo(uint64_t* value, uint32_t type, uint32_t handle,
                               uint64_t subtype);

namespace nn::os::detail {

[[noreturn]] void AbortResult(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static_assert(sizeof(RngManager) == 20);
static_assert(offsetof(RngManager, generator) == 4);
static_assert(sizeof(TlsManager) == 272);
static_assert(offsetof(TlsManager, destructors) == 8);
static_assert(offsetof(TlsManager, lock) == 264);
static_assert(sizeof(VammManager) == 72);
static_assert(offsetof(VammManager, lock) == 16);
static_assert(offsetof(VammManager, implementation) == 64);

RngManager::RngManager() {
  lock.Initialize();
  uint64_t entropy[2];
  uint32_t result = svcGetInfo(&entropy[0], 11, 0, 2);

  if (result) {
    AbortResult(&result);
  }

  result = svcGetInfo(&entropy[1], 11, 0, 3);

  if (result) {
    AbortResult(&result);
  }

  uint32_t seeds[4] = {uint32_t(entropy[0]), uint32_t(entropy[0] >> 32),
                       uint32_t(entropy[1]), uint32_t(entropy[1] >> 32)};
  generator.Initialize(seeds, 4);
}

uint64_t RngManager::GenerateRandomU64() {
  lock.Enter();
  uint32_t low = generator.GenerateRandomU32();
  uint64_t high = generator.GenerateRandomU32();
  uint64_t value = low | (high << 32);
  lock.Leave();
  return value;
}

TlsManager::TlsManager() {
  allocated_slots = 0;
  lock.Initialize();

  for (int index = 31; index >= 0; --index) {
    destructors[index] = nullptr;
  }
}

uint32_t QueryVirtualAddressMemoryRegion(uintptr_t* base, uint64_t* size) {
  uint64_t address = 0;
  uint64_t total = 0;
  uint64_t reserved = 0;
  uint32_t result = svcGetInfo(&address, 2, 0xffff8001, 0);

  if (result) {
    AbortResult(&result);
  }

  result = svcGetInfo(&total, 3, 0xffff8001, 0);

  if (result) {
    AbortResult(&result);
  }

  result = svcGetInfo(&reserved, 28, 0xffff8001, 0);

  if (result) {
    AbortResult(&result);
  }

  *base = address;
  *size = total - reserved;
  return result;
}

VammManager::VammManager() {
  InitializeReaderWriterLock(&lock);
  implementation = 0;
  QueryVirtualAddressMemoryRegion(&base, &size);
}

bool VammManager::IsVirtualAddressMemoryEnabled() const {
  uint64_t enabled = 0;
  uint32_t result = svcGetInfo(&enabled, 16, 0xffff8001, 0);
  return result == 0 && enabled != 0;
}

}
