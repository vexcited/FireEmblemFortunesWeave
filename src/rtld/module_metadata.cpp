#include "rtld/module_metadata.hpp"

#include <stddef.h>

extern "C" {
uint32_t svcQueryMemory(void* memory, uint32_t* page, uintptr_t address);
void* memcpy(void* destination, const void* source, size_t size);
}

namespace fw::rtld {

struct MemoryInfo {
  uintptr_t address;
  uint64_t size;
  uint32_t state;
  uint32_t attribute;
  uint32_t permission;
  uint32_t references[3];
};

static uint32_t LoadWord(uintptr_t address) {
  uint32_t word;
  __builtin_memcpy(&word, reinterpret_cast<const void*>(address), sizeof(word));
  return word;
}

bool HasModuleVersion(uintptr_t address) {
  uint32_t word = LoadWord(address);
  return word != 0 && word != 0xEA000000 && word != 0x14000002;
}

bool InspectModule(uintptr_t* header, ModuleMetadata* metadata,
  uintptr_t address) {
  *header = 0;
  *metadata = {};
  MemoryInfo memory = {};
  uint32_t page = 0;

  if (svcQueryMemory(&memory, &page, address)) {
    return false;
  }

  if ((memory.state != 8 && memory.state != 3) || memory.address != address ||
    (memory.permission != 1 && !(memory.permission & 4))) {
    return false;
  }

  bool hasVersion;
  bool readVersion;

  if (!(memory.permission & 1)) {
    do {
      address = memory.address + memory.size;

      if (svcQueryMemory(&memory, &page, address)) {
        return false;
      }
    } while (memory.permission & 4);

    if (memory.permission != 1 ||
      (memory.state != 3 && memory.state != 8)) {
      return false;
    }

    hasVersion = HasModuleVersion(address);
    readVersion = true;
  }
  else {
    hasVersion = HasModuleVersion(address);
    readVersion = hasVersion;
  }

  uintptr_t moduleHeader = address + LoadWord(address + 4);
  uint32_t version[3] = {};
  bool aligned = true;

  if (readVersion) {
    uintptr_t versionAddress = address + LoadWord(address + 8);

    if (versionAddress) {
      memcpy(version, reinterpret_cast<const void*>(versionAddress), 12);
      aligned = !(versionAddress & 3);
    }
  }

  uint32_t newerThan18 = hasVersion && int32_t(version[0]) > 18;

  if (version[0] >= 18 && (!aligned || (moduleHeader & 3))) {
    return false;
  }

  if (LoadWord(moduleHeader) != 0x30444F4D) {
    return false;
  }

  *header = moduleHeader;
  metadata->version[0] = version[0];
  metadata->version[1] = version[1];
  metadata->version[2] = version[2];
  metadata->newerThan18 = newerThan18;
  return true;
}

static_assert(sizeof(MemoryInfo) == 40);

}
