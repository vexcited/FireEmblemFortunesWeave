#include <stdint.h>

// Without a flags array a slot is free when its key is one of the last two
// values.
struct NvUHash {
  uint32_t (*hashFn)(uint64_t key);
  uint64_t reserved08;
  int32_t slotCount;
  int32_t used;
  uint32_t capacity;
  void* pTable;
  uint64_t reserved28;
  uint64_t* keys;
  uint32_t* flags;
  uint64_t* values;
};

extern "C" void NvOsFree(void* pointer);

[[gnu::visibility("hidden")]] int32_t NvUHashFind(NvUHash* hash, uint64_t key,
  uint32_t hashValue, uint32_t isInsert);
[[gnu::visibility("hidden")]] uint8_t NvUHashResize(NvUHash* hash,
  uint32_t slotCount, bool hasValues, bool hasFlags);

namespace {

const uint32_t NvUHashGolden = 0x9e3779b9;
const uint64_t NvUHashFreeKey = UINT64_MAX - 2;
const uint64_t NvUHashDeletedKey = UINT64_MAX - 1;
const uint32_t NvUHashDeletedFlag = 2;
const uint32_t NvUHashMinSlots = 9;

// Bob Jenkins' 96 bit mix.
[[gnu::always_inline]] inline void Mix(uint32_t& a, uint32_t& b,
  uint32_t& c) {
  a -= b; a -= c; a ^= c >> 13;
  b -= c; b -= a; b ^= a << 8;
  c -= a; c -= b; c ^= b >> 13;
  a -= b; a -= c; a ^= c >> 12;
  b -= c; b -= a; b ^= a << 16;
  c -= a; c -= b; c ^= b >> 5;
  a -= b; a -= c; a ^= c >> 3;
  b -= c; b -= a; b ^= a << 10;
  c -= a; c -= b; c ^= b >> 15;
}

[[gnu::always_inline]] inline int32_t Find(NvUHash* hash, uint64_t key) {
  return NvUHashFind(hash, key, hash->hashFn(key) | 1, 0);
}

}

extern "C" void NvUHashDeinit(NvUHash* hash) {
  NvOsFree(hash->pTable);
  hash->slotCount = 0;
  hash->used = 0;
  hash->capacity = 0;
  hash->pTable = nullptr;
  hash->keys = nullptr;
  hash->flags = nullptr;
  hash->values = nullptr;
}

extern "C" void NvUHashClear(NvUHash* hash) {
  NvOsFree(hash->pTable);
  hash->slotCount = 0;
  hash->used = 0;
  hash->capacity = 0;
  hash->pTable = nullptr;
  hash->keys = nullptr;
  hash->flags = nullptr;
  hash->values = nullptr;
}

extern "C" bool NvUHashContains(NvUHash* hash, uint64_t key) {
  return Find(hash, key) != -1;
}

extern "C" uint64_t NvUHashGet(NvUHash* hash, uint64_t key) {
  const int32_t index = Find(hash, key);
  if (index == -1) {
    return 0;
  }

  const uint64_t* values = hash->values != nullptr ? hash->values :
    hash->keys;
  return values[index];
}

extern "C" bool NvUHashSearch(NvUHash* hash, uint64_t key,
  uint64_t* pOutKey, uint64_t* pOutValue) {
  const int32_t index = Find(hash, key);
  if (index == -1) {
    return false;
  }

  if (pOutKey != nullptr) {
    *pOutKey = hash->keys[index];
  }

  if (pOutValue != nullptr) {
    const uint64_t* values = hash->values != nullptr ? hash->values :
      hash->keys;
    *pOutValue = values[index];
  }

  return true;
}

extern "C" int32_t NvUHashNextEntry(NvUHash* hash, int32_t index) {
  const int64_t count = hash->slotCount;

  if (hash->flags != nullptr) {
    for (int64_t i = index + 1; i < count; i++) {
      if (hash->flags[i] & 1) {
        return static_cast<int32_t>(i);
      }
    }

    return -1;
  }

  for (int64_t i = index + 1; i < count; i++) {
    if (hash->keys[i] <= NvUHashFreeKey) {
      return static_cast<int32_t>(i);
    }
  }

  return -1;
}

extern "C" uint32_t NvUPtrHash(const void* pointer) {
  const uint64_t key = reinterpret_cast<uint64_t>(pointer);
  uint32_t a = NvUHashGolden;
  uint32_t b = NvUHashGolden + static_cast<uint32_t>(key >> 32);
  uint32_t c = static_cast<uint32_t>(key);
  Mix(a, b, c);
  return c;
}

extern "C" uint64_t NvUScalarHash64(uint64_t key) {
  uint32_t a = NvUHashGolden;
  uint32_t b = NvUHashGolden + static_cast<uint32_t>(key >> 32);
  uint32_t c = static_cast<uint32_t>(key);
  Mix(a, b, c);
  return c | static_cast<uint64_t>(b) << 32;
}

// Bytes are added into the three state words, mixing every 12 of them.
extern "C" uint32_t NvUStrHash(const char* string) {
  uint32_t state[3];
  state[0] = NvUHashGolden;
  state[1] = NvUHashGolden;
  state[2] = NvUHashGolden;
  int32_t length = 0;

  for (const char* p = string; *p != '\0'; p++) {
    reinterpret_cast<uint8_t*>(state)[length] += *p;
    if (++length == 12) {
      Mix(state[0], state[1], state[2]);
      length = 0;
    }
  }

  state[2] += length;
  Mix(state[0], state[1], state[2]);
  return state[2];
}

extern "C" uint32_t NvUScalarHash32(uint32_t key) {
  uint32_t a = NvUHashGolden;
  uint32_t b = NvUHashGolden;
  uint32_t c = key;
  Mix(a, b, c);
  return c;
}

// Shrinks the table while it stays under 3/16 full, then removes the key.
extern "C" bool NvUHashRemove(NvUHash* hash, uint64_t key, uint64_t* pOutKey,
  uint64_t* pOutValue) {
  const uint32_t slotCount = hash->slotCount;
  const uint32_t threshold = static_cast<uint32_t>(hash->used) << 8;

  uint32_t target = slotCount;
  while (target >= NvUHashMinSlots && threshold <= target * 48) {
    target >>= 1;
  }

  if (target != slotCount) {
    NvUHashResize(hash, target, hash->values != nullptr,
      hash->flags != nullptr);
  }

  const int32_t index = Find(hash, key);
  if (index == -1) {
    return false;
  }

  if (pOutKey != nullptr) {
    *pOutKey = hash->keys[index];
  }

  if (pOutValue != nullptr) {
    const uint64_t* values = hash->values != nullptr ? hash->values :
      hash->keys;
    *pOutValue = values[index];
  }

  hash->used--;
  if (hash->flags != nullptr) {
    hash->flags[index] = NvUHashDeletedFlag;
  }
  else {
    hash->keys[index] = NvUHashDeletedKey;
  }

  return true;
}

// Tables without values store the key as its own value, a different value
// first needs the values array.
extern "C" bool NvUHashReplace(NvUHash* hash, uint64_t key, uint64_t value,
  uint64_t* pOutKey, uint64_t* pOutValue) {
  const uint32_t slotCount = hash->slotCount;
  if (slotCount == 0) {
    return false;
  }

  if (key != value && hash->values == nullptr &&
    NvUHashResize(hash, slotCount, true, hash->flags != nullptr) == 0) {
    return true;
  }

  const int32_t index = Find(hash, key);
  if (index == -1) {
    return false;
  }

  if (pOutKey != nullptr) {
    *pOutKey = hash->keys[index];
  }

  if (pOutValue != nullptr) {
    const uint64_t* values = hash->values != nullptr ? hash->values :
      hash->keys;
    *pOutValue = values[index];
  }

  hash->keys[index] = key;
  if (hash->values != nullptr) {
    hash->values[index] = value;
  }

  return true;
}
