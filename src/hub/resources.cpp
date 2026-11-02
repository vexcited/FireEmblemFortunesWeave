#include "hub/resources.hpp"

extern "C" size_t strlen(const char* value);
extern "C" char* strchr(const char* value, int character);
extern "C" void* memcpy(void* target, const void* source, size_t size);
extern "C" const void* memchr(const void* value, int character, size_t size);

namespace fw::hub {

bool HasResource(
  void* manager, const char* name, size_t length, uint32_t category,
  uint32_t mode
);
void* LoadResource(void* owner, const ResourceRequest* request);
[[noreturn]] void PointerVectorLengthError();
[[noreturn]] void AllocationSizeError();

extern const void* g_resource_request_vtable[];
extern const char g_variant_p1[];
extern const char g_variant_p2[];
extern const char g_variant_p3[];
extern const char g_variant_second[];

namespace {

struct AliasEntry {
  unsigned char unknown_00[32];
  const char* alias;
};

struct AliasNode {
  AliasNode* next;
  uint64_t hash;
  uint64_t key;
  AliasEntry* entry;
};

size_t Bucket(uint64_t hash, size_t count) {
  if ((count & (count - 1)) == 0) {
    return hash & (count - 1);
  }

  return hash < count ? hash : hash % count;
}

const char* FindAlias(DispositionColumn* column) {
  const uint64_t key = column->key;

  if (key == 0) {
    return nullptr;
  }

  const data::HashTable& index = g_alias_table->data.indexes[0];

  if (index.bucket_count == 0 || index.size == 0) {
    return nullptr;
  }

  const size_t bucket = Bucket(key, index.bucket_count);
  auto** buckets = static_cast<AliasNode**>(index.buckets);
  AliasNode* previous = buckets[bucket];

  if (previous == nullptr) {
    return nullptr;
  }

  for (AliasNode* node = previous->next; node != nullptr; node = node->next) {
    if (node->hash == key) {
      if (node->key == key) {
        return node->entry == nullptr ? nullptr : node->entry->alias;
      }
    }
    else if (Bucket(node->hash, index.bucket_count) != bucket) {
      break;
    }
  }

  return nullptr;
}

bool Contains(const char* text, size_t length, const char* token, size_t size) {
  while (length >= size) {
    const auto* match = static_cast<const char*>(
      memchr(text, token[0], length - size + 1)
    );

    if (match == nullptr) {
      return false;
    }

    bool equal = true;

    for (size_t i = 1; i < size; ++i) {
      equal = equal && match[i] == token[i];
    }

    if (equal) {
      return true;
    }

    length -= match - text + 1;
    text = match + 1;
  }

  return false;
}

}

void* AcquireTableResource(data::TableData* table, const char* name) {
  if (name == nullptr) {
    return nullptr;
  }

  void** manager = g_resource_manager;

  if (!HasResource(*manager, name, strlen(name), 1, 2)) {
    return nullptr;
  }

  ResourceRequest request;
  void* owner = *manager;
  request.name = name;
  request.length = strlen(name);
  request.vtable = g_resource_request_vtable;
  request.mode = 2;
  void* resource = LoadResource(owner, &request);

  if (resource == nullptr) {
    return nullptr;
  }

  auto& values = table->resources;
  void** end = values.end;

  if (end < values.capacity_end) {
    *end++ = resource;
  }
  else {
    const uintptr_t begin = reinterpret_cast<uintptr_t>(values.begin);
    const size_t count = (reinterpret_cast<uintptr_t>(end) - begin) / 8;
    const size_t bytes = reinterpret_cast<uintptr_t>(values.capacity_end)
      - begin;
    size_t capacity = count + 1;

    if ((capacity >> 61) != 0) {
      PointerVectorLengthError();
    }

    if (static_cast<ptrdiff_t>(bytes) / 4 >
        static_cast<ptrdiff_t>(capacity)) {
      capacity = bytes / 4;
    }

    if (bytes >= 0x7ffffffffffffff8) {
      capacity = 0x1fffffffffffffff;
    }

    if ((capacity >> 61) != 0) {
      AllocationSizeError();
    }

    auto** storage = static_cast<void**>(
      memory::g_heap_manager->Allocate(capacity * 8, 16, 0)
    );
    storage[count] = resource;
    end = storage + count + 1;
    memcpy(storage, reinterpret_cast<void*>(begin), count * 8);
    values.begin = storage;
    values.end = end;
    values.capacity_end = storage + capacity;

    if (begin != 0) {
      memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(begin)
      );
    }
  }

  values.end = end;
  return resource;
}

const char* ResourceVariant(const text::String* path) {
  const auto tag = *reinterpret_cast<const unsigned char*>(path);
  const bool owned = (tag & 1) != 0;
  const char* value = owned ? reinterpret_cast<const char*>(path->words[2])
    : reinterpret_cast<const char*>(path) + 1;
  const size_t size = owned ? path->words[1] : tag >> 1;

  if (Contains(value, size, "P1", 2)) {
    return g_variant_p1;
  }

  if (Contains(value, size, "P2", 2)) {
    return g_variant_p2;
  }

  if (Contains(value, size, "P3", 2)) {
    return g_variant_p3;
  }

  if (Contains(value, size, "2nd", 3)) {
    return g_variant_second;
  }

  return nullptr;
}

const char* ColumnAlias(DispositionColumn* column) {
  return FindAlias(column);
}

const char* ColumnAliasSuffix(DispositionColumn* column) {
  const char* alias = FindAlias(column);

  if (alias != nullptr) {
    const char* separator = strchr(alias, '_');

    if (separator != nullptr) {
      return separator + 1;
    }
  }

  return alias;
}

void FinalizePlacement(data::TableData* table) {
  FinalizeFirstCollection(table);
}

}
