#include "nn/init/module.hpp"

extern "C" void nndiagStartup();
extern "C" void nntimeStartup();

namespace nn::init::detail {

void InitializeVirtualAddressMemory()
  asm("_ZN2nn2os30InitializeVirtualAddressMemoryEv");
void InitializeOperatingEnvironment() asm("_ZN2nn2oe10InitializeEv");
void InitializeAddOnContent() asm("_ZN2nn3aoc10InitializeEv");
void InitializeErrorContext() asm("_ZN2nn3err26InitializeContextWriterApiEv");
void InitializeAbortObserver()
  asm("_ZN2nn4diag34InitializeApplicationAbortObserverEv");
void InitializeParentalControl() asm("_ZN2nn4pctl10InitializeEv");
void InitializeFileSystem() asm("_ZN2nn2fs24InitializeForApplicationEv");
void SetLocalApplicationAccessLog(bool enabled)
  asm("_ZN2nn2fs28SetLocalApplicationAccessLogEb");
void SetResultHandledByApplication(bool enabled)
  asm("_ZN2nn2fs29SetResultHandledByApplicationEb");
uint64_t GetThreadAvailableCoreMask()
  asm("_ZN2nn2os26GetThreadAvailableCoreMaskEv");
void LockDefaults(uint32_t*) asm("_ZN2nn2os12SdkMutexType4LockEv");
void UnlockDefaults(uint32_t*) asm("_ZN2nn2os12SdkMutexType6UnlockEv");
[[noreturn]] void AbortDefaults() asm("_ZN2nn4diag6detail9AbortImplEv");

struct PthreadDefaultState {
  uint32_t version;
  uint32_t reserved;
  uint64_t attributes[2][7];
};

static_assert(sizeof(PthreadDefaultState) == 120);

PthreadDefaultState PthreadDefaults = {
  0, 0, {{81920, 0, 0, 0, uint64_t(20) << 32, 0, 0}, {}}
};
alignas(8) uint32_t PthreadDefaultsMutex;
uint64_t PthreadDefaultCoreMask;

void SetPthreadDefaultCoreMask(uint64_t mask) {
  if (mask & ~GetThreadAvailableCoreMask()) {
    AbortDefaults();
  }

  PthreadDefaultCoreMask = mask;
  LockDefaults(&PthreadDefaultsMutex);
  uint32_t version;
  uint64_t fields[7];

  do {
    version = __atomic_load_n(&PthreadDefaults.version, __ATOMIC_RELAXED);
    const auto* current = PthreadDefaults.attributes[version & 1];
    fields[2] = current[2];
    fields[3] = current[3];
    fields[4] = current[4];
    fields[0] = current[0];
    fields[1] = current[1];
    fields[6] = current[6];
    asm volatile("dmb ishld" : : : "memory");
  } while (version !=
    __atomic_load_n(&PthreadDefaults.version, __ATOMIC_RELAXED));

  uint32_t next =
    __atomic_load_n(&PthreadDefaults.version, __ATOMIC_RELAXED) + 1;
  auto* destination = PthreadDefaults.attributes[next & 1];
  destination[6] = fields[6];
  destination[2] = fields[2];
  destination[3] = fields[3];
  destination[0] = fields[0];
  destination[1] = fields[1];
  destination[4] = fields[4];
  destination[5] = mask;
  asm volatile("dmb ishst" : : : "memory");
  __atomic_store_n(&PthreadDefaults.version, next, __ATOMIC_RELAXED);
  UnlockDefaults(&PthreadDefaultsMutex);
}

void InitializePthreadDefaults() {
  SetPthreadDefaultCoreMask(GetThreadAvailableCoreMask());
}

}

extern "C" void nninitInitializeSdkModule() {
  using namespace nn::init::detail;
  nndiagStartup();
  InitializePthreadDefaults();
  InitializeVirtualAddressMemory();
  InitializeOperatingEnvironment();
  InitializeAddOnContent();
  InitializeErrorContext();
  InitializeAbortObserver();
  InitializeParentalControl();
  InitializeFileSystem();
  SetLocalApplicationAccessLog(true);
  SetResultHandledByApplication(true);
  nntimeStartup();
}

extern "C" void nninitFinalizeSdkModule() {
}
