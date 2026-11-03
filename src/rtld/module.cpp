#include "rtld/module.hpp"

extern "C" void* memset(void*, int, size_t);
extern "C" int strcmp(const char*, const char*);

namespace fw::rtld {

void InitializeModule(Module* module, uintptr_t base, uint64_t size,
  const DynamicEntry* dynamic, uint8_t flags, DynamicCallback callback) {
  module->size = size;
  module->base = base;
  module->dynamic = dynamic;
  module->jumpRelocations = 0;
  module->jumpRelocationSize = 0;
  module->initialize = 0;
  module->finalize = 0;
  memset(&module->hash, 0, 16);
  module->strings = nullptr;
  module->symbols = nullptr;
  module->stringSize = 0;
  module->globalOffsetTable = 0;
  module->relocations = 0;
  module->relaSize = 0;
  module->relSize = 0;
  module->relCount = 0;
  module->relaCount = 0;
  memset(&module->hashCount, 0, 16);
  module->flags = flags;
  module->soname = 0;
  module->reserved32 = 0;
  module->version = 22;
  const DynamicEntry* sysv = nullptr;
  const DynamicEntry* gnu = nullptr;
  uintptr_t jumpRelocations = 0;

  for (; dynamic->tag != 0; ++dynamic) {
    uint64_t value = dynamic->value;

    switch (dynamic->tag) {
      case 2:
        module->jumpRelocationSize = value;
        break;
      case 3:
        module->globalOffsetTable = base + value;
        break;
      case 4:
        sysv = dynamic;
        break;
      case 5:
        module->strings = reinterpret_cast<const char*>(base + value);
        break;
      case 6:
        module->symbols = reinterpret_cast<const Symbol*>(base + value);
        break;
      case 7:
      case 17:
        module->relocations = base + value;
        break;
      case 8:
        module->relaSize = value;
        break;
      case 9:
      case 11:
        if (value != 24) {
          callback(dynamic->tag, value);
        }
        break;
      case 10:
        module->stringSize = value;
        break;
      case 12:
        module->initialize = base + value;
        break;
      case 13:
        module->finalize = base + value;
        break;
      case 14:
        module->soname = value;
        break;
      case 18:
        module->relSize = value;
        break;
      case 19:
        if (value != 16) {
          callback(dynamic->tag, value);
        }
        break;
      case 20:
        module->flags = (module->flags & ~2) | (value == 7 ? 2 : 0);

        if (value != 7 && value != 17) {
          callback(dynamic->tag, value);
        }
        break;
      case 23:
        jumpRelocations = base + value;
        break;
      case 24:
        module->flags |= 4;
        break;
      case 30:
        if (value & 8) {
          module->flags |= 4;
        }
        break;
      case 37:
        if (value != 8) {
          callback(dynamic->tag, value);
        }
        break;
      case 0x6FFFFEF5:
        gnu = dynamic;
        break;
      case 0x6FFFFFF9:
        module->relaCount = value;
        break;
      case 0x6FFFFFFA:
        module->relCount = value;
        break;
      case 0x6FFFFFFB:
        if (value & 1) {
          module->flags |= 4;
        }
        break;
      case 0x70000003:
        callback(dynamic->tag, value);
        break;
    }
  }

  module->jumpRelocations = jumpRelocations;

  if (gnu) {
    auto* header = reinterpret_cast<const GnuHashHeader*>(base + gnu->value);
    module->hash.bloom = reinterpret_cast<const uint64_t*>(header + 1);
    module->hashAuxiliary.bloomSize = header->bloomSize;
    module->hashCount.bloomShift = header->bloomShift;
    module->hashTable.header = header;
    module->flags |= 16;
  }
  else if (sysv) {
    auto* header = reinterpret_cast<const uint32_t*>(base + sysv->value);
    module->hashTable.bucketCount = header[0];
    module->hashCount.chainCount = header[1];
    module->hash.buckets = header + 2;
    module->hashAuxiliary.chains = header + 2 + header[0];
    module->flags &= ~16;
  }

  module->reserved200 = 0;
}

const Symbol* FindModuleSymbol(const Module* module, const char* name) {
  if (!(module->flags & 16)) {
    uint32_t hash = 0;

    for (auto* byte = reinterpret_cast<const uint8_t*>(name); *byte; ++byte) {
      hash = (hash << 4) + *byte;
      hash = (hash & 0x0FFFFFFF) ^ ((hash >> 28) << 4);
    }

    uint64_t buckets = module->hashTable.bucketCount;
    uint32_t index = module->hash.buckets[buckets ? hash % buckets : hash];

    while (index) {
      const Symbol* symbol = module->symbols + index;

      if ((symbol->info & 15) != 4 && symbol->section != 0 &&
        symbol->section != 0xFFF2 &&
        strcmp(name, module->strings + symbol->name) == 0) {
        return symbol;
      }

      index = module->hashAuxiliary.chains[index];
    }

    return nullptr;
  }

  uint32_t hash = 5381;

  for (auto* byte = reinterpret_cast<const uint8_t*>(name); *byte; ++byte) {
    hash = hash * 33 + *byte;
  }

  uint32_t bloomSize = module->hashAuxiliary.bloomSize;
  uint32_t shifted = hash >> (module->hashCount.bloomShift & 31);
  uint64_t mask = (uint64_t{1} << (hash & 63)) |
    (uint64_t{1} << (shifted & 63));

  if (mask & ~module->hash.bloom[(bloomSize - 1) & (hash >> 6)]) {
    return nullptr;
  }

  const GnuHashHeader* header = module->hashTable.header;
  auto* buckets = reinterpret_cast<const uint32_t*>(
    module->hash.bloom + bloomSize);
  uint32_t bucketCount = header->bucketCount;
  uint32_t index = buckets[bucketCount ? hash % bucketCount : hash];

  if (index < header->firstSymbol) {
    return nullptr;
  }

  auto* chain = buckets + bucketCount + index - header->firstSymbol;
  uint64_t symbolIndex = index;

  for (;;) {
    uint32_t value = *chain++;
    const Symbol* symbol = module->symbols + symbolIndex;

    if ((value ^ hash) <= 1 &&
      strcmp(name, module->strings + symbol->name) == 0) {
      return symbol;
    }

    ++symbolIndex;

    if (value & 1) {
      return nullptr;
    }
  }
}

}
