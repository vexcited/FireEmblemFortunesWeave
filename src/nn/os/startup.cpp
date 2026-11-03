#include "nn/os/startup.hpp"

#include "nn/os/address_space.hpp"
#include "nn/os/managers.hpp"
#include "nn/os/thread_manager.hpp"

extern "C" void* memset(void*, int, size_t);
extern "C" void* memcpy(void*, const void*, size_t);
extern "C" int isspace(int);
extern "C" uint32_t svcQueryMemory(void*, uint32_t*, uintptr_t);

namespace nn::os::detail {

uint64_t g_OsBootParamter;
alignas(8) unsigned char g_OsResourceManagerStorage[1288];

extern const uintptr_t AllocatorVtable[]
  asm("_ZTVN2nn2os6detail21AddressSpaceAllocatorE");

void ConstructRng(RngManager*) asm("_ZN2nn2os6detail10RngManagerC1Ev");
void ConstructThreadManager(ThreadManager*)
  asm("_ZN2nn2os6detail13ThreadManagerC1Ev");
void ConstructTls(TlsManager*) asm("_ZN2nn2os6detail10TlsManagerC1Ev");
void ConstructVamm(VammManager*) asm("_ZN2nn2os6detail11VammManagerC1Ev");
void ConstructAllocator(AddressAllocator*, uintptr_t, uintptr_t, size_t,
  const AddressSpaceAllocatorForbiddenRegion*, size_t)
  asm("_ZN2nn2os6detail25AddressSpaceAllocatorBaseImmEC2Emmm"
      "PKNS1_36AddressSpaceAllocatorForbiddenRegionEm");
void InitializeCriticalSection(uint32_t*)
  asm("_ZN2nn2os6detail23InternalCriticalSection10InitializeEv");
void QueryMemoryInfo(void*) asm("_ZN2nn2os15QueryMemoryInfoEPNS0_10MemoryInfoE");
void SetHostArgc(int) asm("_ZN2nn2os11SetHostArgcEi");
void SetHostArgv(char**) asm("_ZN2nn2os11SetHostArgvEPPc");
void SetUserExceptionHandler(void (*)(void*), void*, size_t, void*)
  asm("_ZN2nn2os23SetUserExceptionHandlerEPFvPNS0_17UserExceptionInfoEEPvmS2_");

struct ResourceList {
  uintptr_t fields[3];
  ThreadListNode head;
  uint32_t lock;
  uint32_t reserved;
};

struct Resources {
  RngManager random;
  uint32_t reserved_14;
  AddressSpaceAllocatorForbiddenRegion regions[4];
  AddressAllocator address_allocator;
  RegionAllocator stack_allocator;
  ThreadManager threads;
  TlsManager tls;
  ResourceList list;
  VammManager virtual_memory;
  uint64_t reserved_498;
  RegionAllocator remote_allocator;
};

static_assert(sizeof(Resources) == 1288);
static_assert(offsetof(Resources, regions) == 24);
static_assert(offsetof(Resources, address_allocator) == 88);
static_assert(offsetof(Resources, stack_allocator) == 184);
static_assert(offsetof(Resources, threads) == 288);
static_assert(offsetof(Resources, tls) == 784);
static_assert(offsetof(Resources, list) == 1056);
static_assert(offsetof(Resources, virtual_memory) == 1104);
static_assert(offsetof(Resources, remote_allocator) == 1184);

static void InitializeArguments(uintptr_t region) {
  uintptr_t header = (region + 7) & ~uintptr_t(7);
  uint32_t extent = *reinterpret_cast<const uint32_t*>(header);
  int32_t length = *reinterpret_cast<const int32_t*>(header + 4);
  auto* cursor = reinterpret_cast<unsigned char*>(header + 32);
  auto* end = cursor + length;
  auto* output = end;
  uintptr_t table_address = (uintptr_t(end) + length + 9) & ~uintptr_t(7);
  auto** table = reinterpret_cast<char**>(table_address);
  int64_t capacity = int32_t(extent + uint32_t(region - table_address)) >> 3;
  int64_t count = 0;

  for (;;) {
    while (cursor < end && isspace(*cursor)) {
      ++cursor;
    }

    if (cursor >= end || count >= capacity) {
      break;
    }

    unsigned char* stop;
    unsigned char* next;

    if (*cursor == '"') {
      ++cursor;
      stop = cursor;

      while (stop < end && *stop != '"') {
        ++stop;
      }

      next = stop + 1;
    }
    else {
      stop = cursor;

      while (!isspace(*stop)) {
        if (++stop == end) {
          break;
        }
      }

      next = stop;
    }

    size_t size = uintptr_t(stop) - uintptr_t(cursor);
    table[count++] = reinterpret_cast<char*>(output);
    memcpy(output, cursor, size);
    output += size;
    *output++ = 0;
    cursor = next;
  }

  *output = 0;
  table[uint32_t(count)] = nullptr;
  SetHostArgc(uint32_t(count));
  SetHostArgv(table);
}

}

extern "C" void nnosInitialize(uintptr_t thread_handle,
  uintptr_t argument_region) {
  using namespace nn::os::detail;
  g_OsBootParamter = thread_handle;
  memset(g_OsResourceManagerStorage, 0, sizeof(g_OsResourceManagerStorage));
  auto* resources = reinterpret_cast<Resources*>(g_OsResourceManagerStorage);
  ConstructRng(&resources->random);
  QueryAddressSpaceRegions(resources->regions, 0xffff8001);
  ConstructAllocator(&resources->address_allocator,
    resources->regions[3].address,
    resources->regions[3].address + resources->regions[3].size,
    0x4000, resources->regions, 3);
  resources->address_allocator.vtable = uintptr_t(AllocatorVtable + 2);
  InitializeStackRegionAllocator(&resources->stack_allocator);
  ConstructThreadManager(&resources->threads);
  ConstructTls(&resources->tls);
  resources->list.fields[2] = 0;
  resources->list.fields[1] = 0;
  resources->list.fields[0] = 0;
  resources->list.head.next = &resources->list.head;
  resources->list.head.previous = &resources->list.head;
  InitializeCriticalSection(&resources->list.lock);
  ConstructVamm(&resources->virtual_memory);
  InitializeRemoteRegionAllocator(&resources->remote_allocator);
  uint64_t memory_info[7];
  QueryMemoryInfo(memory_info);

  struct Mapping {
    uintptr_t address;
    size_t size;
    uint32_t state;
    uint32_t attributes;
    uint32_t permission;
    uint32_t ipc_references;
    uint32_t device_references;
    uint32_t reserved;
  } mapping;
  uint32_t page = 0;

  if (svcQueryMemory(&mapping, &page, argument_region) == 0 &&
      mapping.permission == 3) {
    InitializeArguments(argument_region);
  }

  SetUserExceptionHandler(nullptr, nullptr, 0, nullptr);
}
