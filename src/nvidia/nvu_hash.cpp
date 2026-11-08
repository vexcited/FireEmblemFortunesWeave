#include <stdint.h>

struct NvUHash {
  uint8_t reserved00[0x10];
  uint64_t count;
  uint32_t capacity;
  void* pTable;
  uint64_t reserved28;
  uint64_t reserved30;
  uint64_t reserved38;
  uint64_t reserved40;
};

extern "C" void NvOsFree(void* pointer);

extern "C" void NvUHashDeinit(NvUHash* hash) {
  NvOsFree(hash->pTable);
  hash->count = 0;
  hash->capacity = 0;
  hash->pTable = nullptr;
  hash->reserved30 = 0;
  hash->reserved38 = 0;
  hash->reserved40 = 0;
}

extern "C" void NvUHashClear(NvUHash* hash) {
  NvOsFree(hash->pTable);
  hash->count = 0;
  hash->capacity = 0;
  hash->pTable = nullptr;
  hash->reserved30 = 0;
  hash->reserved38 = 0;
  hash->reserved40 = 0;
}
