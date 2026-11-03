#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::os {

struct MemoryUsagePair {
  uint64_t first;
  uint64_t second;
};

uintptr_t GetMemoryHeapAddress();
size_t GetMemoryHeapSize();
MemoryUsagePair GetVirtualAddressMemoryResourceUsage();
bool IsVirtualAddressMemoryEnabled();
MemoryUsagePair GetRemoteMemoryUsage();

namespace detail {

struct VammManager;

MemoryUsagePair
QueryVirtualAddressMemoryResourceUsage(VammManager* manager) asm(
  "_ZN2nn2os6detail11VammManager36GetVirtualAddressMemoryResourceUsageEv");

}
}
