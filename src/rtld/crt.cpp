#include "rtld/crt.hpp"

#include "rtld/memory_protection.hpp"
#include "rtld/module_lifecycle.hpp"

struct CrtDestructor {
  void (*function)(void*);
  void* argument;
  uintptr_t handle;
};

static_assert(sizeof(CrtDestructor) == 24);

extern "C" {
extern uint32_t CrtInitializationStatus;
extern uint64_t CrtDestructorCount;
extern fw::rtld::Module CrtModule;
extern uint8_t CrtImageStart[];
extern uint8_t CrtTextEnd[];
extern uintptr_t CrtInitializersBegin[];
extern uintptr_t CrtInitializersEnd[];
extern uintptr_t CrtFinalizersBegin[];
extern uintptr_t CrtFinalizersEnd[];
extern uint8_t CrtReadOnlyStart[];
extern uint8_t CrtReadOnlyEnd[];
extern uint8_t CrtGotStart[];
extern uint8_t CrtGotEnd[];
extern uint8_t CrtSection12[];
extern uint8_t CrtSection13[];
extern uint8_t CrtSection16[];
extern uint8_t CrtSection17[];
extern uint8_t CrtDynamic[];
extern uint8_t CrtBssStart[];
extern CrtDestructor CrtDestructorsBegin[];
extern CrtDestructor CrtDestructorsEnd[];
void InvokeCrtInitializer(const uintptr_t* slot);
void InvokeCrtFinalizer(const uintptr_t* slot);
}

namespace fw::rtld {

uint32_t RegisterCrtSections(uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t);
void InitializeCrtRuntime();

static uintptr_t Address(const void* value) {
  return reinterpret_cast<uintptr_t>(value);
}

void InitializeCrt() {
  if (!CrtInitializationStatus) {
    CrtInitializationStatus = RegisterCrtSections(
      Address(CrtImageStart), Address(CrtTextEnd),
      Address(CrtInitializersBegin), Address(CrtInitializersEnd),
      Address(CrtImageStart) + 1, Address(CrtReadOnlyStart) + 1,
      Address(CrtFinalizersBegin), Address(CrtFinalizersEnd),
      Address(CrtImageStart) + 1, Address(CrtReadOnlyStart) + 1,
      Address(CrtGotStart), Address(CrtGotEnd), Address(CrtSection12),
      Address(CrtSection13), Address(CrtImageStart), Address(CrtImageStart),
      Address(CrtSection16), Address(CrtSection17), Address(CrtImageStart),
      Address(CrtImageStart), Address(CrtDynamic));

    if (CrtInitializationStatus == 1) {
      return;
    }
  }

  InitializeCrtRuntime();
  ProtectModuleMemory(Address(CrtReadOnlyStart), Address(CrtReadOnlyEnd),
                      Address(CrtBssStart), &CrtModule);

  uintptr_t end = Address(CrtInitializersEnd);

  for (uintptr_t slot = Address(CrtInitializersBegin); slot < end; slot += 8) {
    InvokeCrtInitializer(reinterpret_cast<const uintptr_t*>(slot));
  }
}

void RunCrtDestructors(uintptr_t handle, uint64_t first, uint64_t last) {
  uintptr_t distance =
    Address(CrtDestructorsEnd) - Address(CrtDestructorsBegin);
  uint64_t count = uint64_t(int64_t(distance) >> 3) * 0xAAAAAAAAAAAAAAABULL;

  if (last < count) {
    count = last;
  }

  while (count > first) {
    const CrtDestructor& entry = CrtDestructorsBegin[count - 1];
    uint64_t previous = CrtDestructorCount;
    uint64_t current = previous;

    if (entry.handle == handle) {
      entry.function(entry.argument);
      current = CrtDestructorCount;
    }

    RunCrtDestructors(handle, previous, current);
    --count;
  }
}

void FinalizeCrt() {
  RunCrtDestructors(Address(CrtReadOnlyStart), 0, CrtDestructorCount);
  uintptr_t begin = Address(CrtFinalizersBegin);

  for (uintptr_t slot = Address(CrtFinalizersEnd); slot > begin;) {
    slot -= 8;
    InvokeCrtFinalizer(reinterpret_cast<const uintptr_t*>(slot));
  }
}

CrtCallback GetLoaderReadyCallback() {
  return MarkLoaderReady;
}

CrtCallback GetModuleInitializerCallback() {
  return InitializeModules;
}

CrtCallback GetModuleFinalizerCallback() {
  return FinalizeModules;
}

}
