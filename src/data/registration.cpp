#include "data/registration.hpp"

extern "C" void* memcpy(void* destination, const void* source, size_t size);
extern "C" void* memset(void* destination, int value, size_t size);

namespace fw::data {

[[noreturn]] void TableVectorLengthError();
[[noreturn]] void RowVectorLengthError();
[[noreturn]] void AllocationSizeError();
void* FindAnimationEvent(void* data, uint32_t index, uint32_t key);
void InitializeAnimationEvent(void* event);

#define DATA_TABLE(Name, Size, Mode, Extra) \
  extern Table* g_##Name; \
  extern uint32_t g_##Name##_created; \
  extern TableVTable g_##Name##_initial_table; \
  extern TableDataVTable g_##Name##_initial_data_table; \
  extern TableVTable g_##Name##_final_table; \
  extern TableDataVTable g_##Name##_final_data_table; \
  extern const char g_##Name##_resource[]; \
  extern const char g_##Name##_label[]; \
  void Load##Name(TableData*, const char*, const char*, uint32_t); \
  void Initialize##Name(Table*);

#define OPAQUE_TABLE(Name, Size) \
  extern Table* g_##Name; \
  void Construct##Name(Table*);

#include "data/catalog.inc"

#undef DATA_TABLE
#undef OPAQUE_TABLE

namespace {

enum class Target {
  NewObject,
  Singleton,
  Opaque,
};

enum class ExtraState {
  None,
  AnimationEvents,
  HashBefore,
  WordBefore,
  BufferBefore,
  VectorBefore,
  HashAfter,
};

struct Definition {
  Table** singleton;
  uint32_t* created;
  size_t size;
  Target target;
  ExtraState extra;
  TableVTable* initial_table;
  TableDataVTable* initial_data_table;
  TableVTable* final_table;
  TableDataVTable* final_data_table;
  const char* resource;
  const char* label;
  void (*load)(TableData*, const char*, const char*, uint32_t);
  void (*initialize)(Table*);
  void (*construct)(Table*);
};

#define DATA_TABLE(Name, Size, Mode, Extra) \
  {&g_##Name, &g_##Name##_created, Size, Target::Mode, ExtraState::Extra, \
   &g_##Name##_initial_table, &g_##Name##_initial_data_table, \
   &g_##Name##_final_table, &g_##Name##_final_data_table, \
   g_##Name##_resource, g_##Name##_label, Load##Name, \
   Target::Mode == Target::NewObject ? Initialize##Name : nullptr, nullptr},

#define OPAQUE_TABLE(Name, Size) \
  {&g_##Name, nullptr, Size, Target::Opaque, ExtraState::None, nullptr, \
   nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, \
   Construct##Name},

const Definition definitions[] = {
#include "data/catalog.inc"
};

static_assert(sizeof(definitions) / sizeof(definitions[0]) == 172);

#undef DATA_TABLE
#undef OPAQUE_TABLE

uintptr_t Bytes(const void* begin, const void* end) {
  return reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin);
}

void* Allocate(size_t size) {
  return memory::g_heap_manager->Allocate(size, 16, 0);
}

void Free(void* pointer) {
  memory::g_heap_manager->GetAllocator(0).Free(pointer);
}

void ResetHashTable(HashTable* table) {
  table->buckets = nullptr;
  table->bucket_count = 0;
  table->first_node = nullptr;
  table->size = 0;
  table->max_load_factor = 1.0f;
}

void ResetTable(Table* table, const Definition& definition) {
  TableData* data = &table->data;
  data->resources = {};
  data->rows = {};
  data->unknown_38 = {};

  for (HashTable& index : data->indexes) {
    ResetHashTable(&index);
  }

  data->metadata = {};
  data->unknown_e0 = {};
  data->unknown_f8 = 0;
  table->vtable = definition.initial_table;
  data->vtable = definition.initial_data_table;
}

void InitializeExtra(Table* table, ExtraState extra) {
  void* storage = table + 1;

  switch (extra) {
    case ExtraState::HashBefore:
    case ExtraState::HashAfter:
      ResetHashTable(static_cast<HashTable*>(storage));
      break;
    case ExtraState::WordBefore:
      *static_cast<uint64_t*>(storage) = 0;
      break;
    case ExtraState::BufferBefore:
      memset(storage, 0, 360);
      break;
    case ExtraState::VectorBefore:
      *static_cast<Vector<void*>*>(storage) = {};
      break;
    default:
      break;
  }
}

void AppendTable(TableData* data) {
  TableData** end = g_tables.end;

  if (reinterpret_cast<uintptr_t>(end) <
      reinterpret_cast<uintptr_t>(g_tables.capacity_end)) {
    *end++ = data;
  }
  else {
    TableData** begin = g_tables.begin;
    uintptr_t bytes = Bytes(begin, end);
    uint64_t count = static_cast<int64_t>(bytes) >> 3;
    uint64_t required = count + 1;

    if (required >> 61) {
      TableVectorLengthError();
    }

    uintptr_t capacity_bytes = Bytes(begin, g_tables.capacity_end);
    uint64_t capacity = static_cast<int64_t>(capacity_bytes) >> 2;

    if (capacity < required) {
      capacity = required;
    }

    if (capacity_bytes >= 0x7ffffffffffffff8) {
      capacity = 0x1fffffffffffffff;
    }

    TableData** replacement = nullptr;

    if (capacity != 0) {
      if (capacity >> 61) {
        AllocationSizeError();
      }

      replacement = static_cast<TableData**>(Allocate(capacity * 8));
    }

    auto* inserted = reinterpret_cast<TableData**>(
      reinterpret_cast<uintptr_t>(replacement) + bytes
    );
    *inserted = data;
    end = inserted + 1;
    auto* new_begin = reinterpret_cast<TableData**>(
      reinterpret_cast<uintptr_t>(inserted) - count * 8
    );
    memcpy(new_begin, begin, bytes);
    g_tables.begin = new_begin;
    g_tables.end = end;
    g_tables.capacity_end = replacement + capacity;

    if (begin != nullptr) {
      Free(begin);
    }
  }

  g_tables.end = end;
}

void AppendRows(Table** singleton) {
  Table* table = *singleton;
  uintptr_t bytes = Bytes(table->data.rows.begin, table->data.rows.end);
  int32_t count = static_cast<uint32_t>(bytes >> 3);

  for (uint64_t i = 0; static_cast<int64_t>(i) < count; ++i) {
    RowBinding binding;
    uint64_t size = static_cast<int64_t>(bytes) >> 3;
    binding.row = i < size ? table->data.rows.begin[i] : nullptr;
    binding.index = static_cast<uint32_t>(i);
    size = static_cast<int64_t>(Bytes(
      table->data.metadata.begin, table->data.metadata.end
    )) >> 3;
    binding.metadata = i < size ? table->data.metadata.begin[i] : nullptr;
    AppendRowBinding(&binding);
    table = *singleton;
    bytes = Bytes(table->data.rows.begin, table->data.rows.end);
    count = static_cast<uint32_t>(bytes >> 3);
  }
}

void InitializeEventAnimations(Table* table) {
  void* data = nullptr;

  if (table->data.rows.begin != table->data.rows.end) {
    void* row = *table->data.rows.begin;

    if (row != nullptr) {
      __builtin_memcpy(&data, static_cast<unsigned char*>(row) + 32, 8);
    }
  }

  void* event = FindAnimationEvent(data, 100, 0x638a1f94);
  InitializeAnimationEvent(event);
}

}

void InitializeGameData() {
  for (const Definition& definition : definitions) {
    Table* table = static_cast<Table*>(Allocate(definition.size));

    if (definition.target == Target::Opaque) {
      definition.construct(table);
    }
    else {
      Table* previous = *definition.singleton;

      if (previous == nullptr) {
        *definition.singleton = table;
        *definition.created = 1;
        previous = table;
      }

      ResetTable(table, definition);

      if (definition.extra != ExtraState::HashAfter) {
        InitializeExtra(table, definition.extra);
      }

      Table* target = definition.target == Target::Singleton ? previous : table;
      definition.load(&target->data, definition.resource, definition.label, 1);

      if (definition.extra == ExtraState::HashAfter) {
        InitializeExtra(table, definition.extra);
      }

      if (definition.extra == ExtraState::AnimationEvents) {
        InitializeEventAnimations(*definition.singleton);
      }
    }

    *definition.singleton = table;

    if (definition.target == Target::NewObject) {
      table->vtable = definition.final_table;
      table->data.vtable = definition.final_data_table;
      definition.initialize(table);
    }
    else {
      table->vtable->initialize(table);
    }

    Table* registered = *definition.singleton;
    AppendTable(registered == nullptr ? nullptr : &registered->data);
    AppendRows(definition.singleton);
  }

  if (g_tables.begin != g_tables.end) {
    uint64_t i = 0;

    do {
      TableData* data = g_tables.begin[i++];
      data->vtable->finish(data);
    } while (i < static_cast<uint64_t>(
      static_cast<int64_t>(Bytes(g_tables.begin, g_tables.end)) >> 3
    ));
  }
}

void AppendRowBinding(const RowBinding* binding) {
  RowBinding* end = g_row_bindings.end;

  if (reinterpret_cast<uintptr_t>(end) <
      reinterpret_cast<uintptr_t>(g_row_bindings.capacity_end)) {
    __builtin_memcpy(end, binding, sizeof(*binding));
    ++end;
  }
  else {
    RowBinding* begin = g_row_bindings.begin;
    uintptr_t bytes = Bytes(begin, end);
    uint64_t count = static_cast<int64_t>(bytes) >> 3;
    count *= 0xaaaaaaaaaaaaaaab;
    uint64_t required = count + 1;

    if (required > 0xaaaaaaaaaaaaaaa) {
      RowVectorLengthError();
    }

    uint64_t capacity = static_cast<int64_t>(
      Bytes(begin, g_row_bindings.capacity_end)
    ) >> 3;
    capacity *= 0xaaaaaaaaaaaaaaab;
    uint64_t doubled = capacity * 2;

    if (doubled < required) {
      doubled = required;
    }

    capacity = capacity >= 0x555555555555555 ?
      0xaaaaaaaaaaaaaaa : doubled;
    RowBinding* replacement = nullptr;

    if (capacity != 0) {
      if (capacity > 0xaaaaaaaaaaaaaaa) {
        AllocationSizeError();
      }

      replacement = static_cast<RowBinding*>(Allocate(capacity * 24));
    }

    auto* inserted = reinterpret_cast<RowBinding*>(
      reinterpret_cast<uintptr_t>(replacement) + bytes
    );
    __builtin_memcpy(inserted, binding, sizeof(*binding));
    end = inserted + 1;
    memcpy(replacement, begin, bytes);
    g_row_bindings.begin = replacement;
    g_row_bindings.end = end;
    g_row_bindings.capacity_end = replacement + capacity;

    if (begin != nullptr) {
      Free(begin);
    }
  }

  g_row_bindings.end = end;
}

}
