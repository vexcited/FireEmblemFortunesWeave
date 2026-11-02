#include "hub/loader.hpp"
#include "hub/resources.hpp"

extern "C" size_t strlen(const char* value);
extern "C" char* strchr(const char* value, int character);
extern "C" void* memcpy(void* target, const void* source, size_t size);
extern "C" void* memmove(void* target, const void* source, size_t size);

namespace fw::hub {

using data::HashTable;
using data::TableData;
using data::Vector;
using text::String;

struct HashNode {
  HashNode* next;
  uint64_t hash;
  uint64_t key;
  void* value;
};

struct InsertResult {
  HashNode* node;
  bool inserted;
};

struct GroupSuffix {
  const char* name;
  size_t length;
};

struct Visitor {
  const void* vtable;
  void* context;
  uint64_t origin;
  uintptr_t unused;
  Visitor* callable;
};

void AppendString(String* string, const char* value, size_t length);
Vector<String> EnumerateResources(const String* path);
void* LoadResource(void* owner, const ResourceRequest* request);
void* AcquireTableResource(TableData* table, const char* name);
const char* ResourceVariant(const String* path);
uint64_t HashName(const char* name);
const char* ColumnAlias(DispositionColumn* column);
const char* ColumnAliasSuffix(DispositionColumn* column);
void ReleaseResource(void* owner, void* resource);
HashNode* PrepareOrigin(HashTable* index, uint64_t hash, const void* key);
InsertResult InsertRowPosition(
  HashTable* index, const uint32_t* key, const uint32_t* source,
  const size_t* position
);
void BindElement(
  ElementMetadata* metadata, const void* index, const String* group,
  const String* name, const String* resource
);
void* AllocateSortBuffer(size_t size, const void* tag);
[[noreturn]] void PointerVectorLengthError();
[[noreturn]] void RowVectorLengthError();
[[noreturn]] void StringPointerVectorLengthError();
[[noreturn]] void AllocationSizeError();
[[noreturn]] void MissingVisitor();

extern void** g_resource_manager;
extern const void* g_resource_request_vtable[];
extern const void* g_disposition_table_vtable[];
extern const void* g_element_metadata_vtable[];
extern const void* g_nothrow_tag;
extern GroupSuffix g_group_suffixes[11];

#define DECLARE_COLLECTION(Name) \
  void Bind##Name(TableData*, const uint64_t*, DispositionColumn*); \
  InsertResult Insert##Name( \
    HashTable*, const uint64_t*, const uint64_t*, DispositionColumn** \
  ); \
  HashNode* Prepare##Name(HashTable*, uint64_t, const void*); \
  void Sort##Name(void**, void**, size_t, void**, ptrdiff_t); \
  void Sort##Name##Elements(void**, void**, size_t, void**, ptrdiff_t); \
  [[noreturn]] void Name##ColumnLengthError(); \
  [[noreturn]] void Name##ElementLengthError(); \
  [[noreturn]] void Name##ElementIndexError(); \
  extern const void* g_##Name##_origin_visitor[]; \
  extern const void* g_##Name##_element_visitor[];

DECLARE_COLLECTION(Placement)
DECLARE_COLLECTION(EventRange)
DECLARE_COLLECTION(Locator)
DECLARE_COLLECTION(Object)

#undef DECLARE_COLLECTION

namespace {

struct CollectionOperations {
  const char* name;
  uint32_t stride;
  void (*clear)(TableData*);
  void (*bind)(TableData*, const uint64_t*, DispositionColumn*);
  InsertResult (*insert)(
    HashTable*, const uint64_t*, const uint64_t*, DispositionColumn**
  );
  HashNode* (*prepare)(HashTable*, uint64_t, const void*);
  void (*sort)(void**, void**, size_t, void**, ptrdiff_t);
  void (*sort_elements)(void**, void**, size_t, void**, ptrdiff_t);
  const void* origin_visitor;
  const void* element_visitor;
  void (*column_length_error)();
  void (*element_length_error)();
  void (*element_index_error)();
};

#define COLLECTION(Name, Label, Stride, Clear) \
  {Label, Stride, Clear, Bind##Name, Insert##Name, Prepare##Name, \
   Sort##Name, Sort##Name##Elements, g_##Name##_origin_visitor, \
   g_##Name##_element_visitor, Name##ColumnLengthError, \
   Name##ElementLengthError, Name##ElementIndexError}

const CollectionOperations kCollections[] = {
  COLLECTION(Placement, "配置", 280, ClearDispositionTable),
  COLLECTION(EventRange, "イベント範囲", 248, ClearFirstCollection),
  COLLECTION(Locator, "ロケータ", 176, ClearSecondCollection),
  COLLECTION(Object, "オブジェクト", 208, ClearThirdCollection),
};

#undef COLLECTION

void* Allocate(size_t size) {
  return memory::g_heap_manager->Allocate(size, 16, 0);
}

void Free(void* pointer) {
  if (pointer != nullptr) {
    memory::g_heap_manager->GetAllocator(0).Free(pointer);
  }
}

void Invoke(void* object, size_t slot) {
  auto* methods = *static_cast<void (***)(void*)>(object);
  methods[slot](object);
}

const char* Characters(const String& string) {
  return (string.words[0] & 1) != 0
    ? reinterpret_cast<const char*>(string.words[2])
    : reinterpret_cast<const char*>(&string) + 1;
}

void DestroyString(String& string) {
  if ((string.words[0] & 1) != 0) {
    Free(reinterpret_cast<void*>(string.words[2]));
  }
}

void CopyString(String& string, const char* value, bool move = false) {
  const size_t size = strlen(value);

  if (size >= size_t{0} - 9) {
    text::StringLengthError();
  }

  char* target;

  if (size >= 23) {
    const size_t capacity = (size | 7) == 23 ? 26 : (size | 7) + 1;
    target = static_cast<char*>(Allocate(capacity));
    string.words[0] = capacity | 1;
    string.words[1] = size;
    string.words[2] = reinterpret_cast<uintptr_t>(target);
  }
  else {
    *reinterpret_cast<unsigned char*>(&string) = size * 2;
    target = reinterpret_cast<char*>(&string) + 1;
  }

  if (size != 0) {
    if (move) {
      memmove(target, value, size);
    }
    else {
      memcpy(target, value, size);
    }
  }

  target[size] = 0;
}

void DestroyResources(Vector<String>& names) {
  if (names.begin != nullptr) {
    String* cursor = names.end;

    while (cursor != names.begin) {
      DestroyString(*--cursor);
    }

    names.end = names.begin;
    Free(names.begin);
  }
}

size_t Count(const Vector<void*>& values) {
  return (reinterpret_cast<uintptr_t>(values.end)
    - reinterpret_cast<uintptr_t>(values.begin)) / 8;
}

void Append(
  Vector<void*>& values, void* value,
  void (*length_error)() = PointerVectorLengthError
) {
  if (values.end < values.capacity_end) {
    *values.end++ = value;
    return;
  }

  const size_t count = Count(values);
  const size_t bytes = reinterpret_cast<uintptr_t>(values.capacity_end)
    - reinterpret_cast<uintptr_t>(values.begin);
  size_t capacity = count + 1;

  if ((capacity >> 61) != 0) {
    length_error();
    __builtin_unreachable();
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

  auto** storage = static_cast<void**>(Allocate(capacity * 8));
  void** previous = values.begin;
  storage[count] = value;
  memcpy(storage, previous, count * 8);
  values.begin = storage;
  values.end = storage + count + 1;
  values.capacity_end = storage + capacity;
  Free(previous);
  values.end = storage + count + 1;
}

size_t Bucket(uint64_t hash, size_t count) {
  if ((count & (count - 1)) == 0) {
    return hash & (count - 1);
  }

  return hash < count ? hash : hash % count;
}

HashNode* Find(const HashTable& index, uint64_t key, bool narrow = false) {
  if (index.bucket_count == 0 || index.size == 0) {
    return nullptr;
  }

  const size_t bucket = Bucket(key, index.bucket_count);
  auto** buckets = static_cast<HashNode**>(index.buckets);
  HashNode* previous = buckets[bucket];

  if (previous == nullptr) {
    return nullptr;
  }

  for (HashNode* node = previous->next; node != nullptr; node = node->next) {
    if (node->hash == key) {
      const uint64_t stored = narrow ? uint32_t(node->key) : node->key;

      if (stored == key) {
        return node;
      }
    }
    else if (Bucket(node->hash, index.bucket_count) != bucket) {
      break;
    }
  }

  return nullptr;
}

void Link(HashTable& index, HashNode* node) {
  const size_t bucket = Bucket(node->hash, index.bucket_count);
  auto** buckets = static_cast<HashNode**>(index.buckets);
  HashNode* previous = buckets[bucket];

  if (previous != nullptr) {
    node->next = previous->next;
    previous->next = node;
  }
  else {
    node->next = static_cast<HashNode*>(index.first_node);
    index.first_node = node;
    buckets[bucket] = reinterpret_cast<HashNode*>(&index.first_node);

    if (node->next != nullptr) {
      buckets[Bucket(node->next->hash, index.bucket_count)] = node;
    }
  }

  ++index.size;
}

void DestroyIndex(HashTable& index) {
  auto* node = static_cast<HashNode*>(index.first_node);

  while (node != nullptr) {
    HashNode* next = node->next;
    Free(node);
    node = next;
  }

  void* buckets = index.buckets;
  index.buckets = nullptr;
  Free(buckets);
}

void Visit(
  DispositionColumn* column, const CollectionOperations& operations,
  void* context, uint32_t origin, bool collect
) {
  Visitor visitor;
  visitor.vtable = collect ? operations.element_visitor
    : operations.origin_visitor;
  visitor.context = context;
  visitor.origin = origin;
  visitor.callable = &visitor;
  size_t count = column->element_count;
  unsigned char* element = column->elements;

  while (count != 0) {
    if (visitor.callable == nullptr) {
      MissingVisitor();
    }

    const auto* methods = static_cast<const void* const*>(
      visitor.callable->vtable
    );
    using Call = void (*)(Visitor*, unsigned char**);
    unsigned char* item = element;
    reinterpret_cast<Call>(const_cast<void*>(methods[6]))(
      visitor.callable, &item
    );
    element += operations.stride;
    --count;
  }

  if (visitor.callable == &visitor) {
    Invoke(&visitor, 4);
  }
  else if (visitor.callable != nullptr) {
    Invoke(visitor.callable, 5);
  }
}

void Sort(
  Vector<void*>& values,
  void (*operation)(void**, void**, size_t, void**, ptrdiff_t)
) {
  const size_t count = Count(values);
  ptrdiff_t capacity = count > 128 ? count : 0;
  void** buffer = nullptr;

  while (capacity > 0) {
    buffer = static_cast<void**>(AllocateSortBuffer(
      capacity * 8, g_nothrow_tag
    ));

    if (buffer != nullptr) {
      break;
    }

    capacity >>= 1;
  }

  operation(values.begin, values.end, count, buffer, capacity);
  Free(buffer);
}

void Number(Vector<void*>& values) {
  for (size_t i = 0; i < Count(values); ++i) {
    static_cast<DispositionColumn*>(values.begin[i])->index = i;
  }
}

void Assign(
  Vector<void*>& target, const Vector<void*>& source,
  void (*length_error)()
) {
  const size_t bytes = Count(source) * 8;
  const size_t capacity = reinterpret_cast<uintptr_t>(target.capacity_end)
    - reinterpret_cast<uintptr_t>(target.begin);

  if (bytes > capacity) {
    size_t available = reinterpret_cast<uintptr_t>(target.capacity_end);

    if (target.begin != nullptr) {
      target.end = target.begin;
      Free(target.begin);
      target = {};
      available = 0;
    }

    size_t count = bytes / 8;

    if ((count >> 61) != 0) {
      length_error();
      __builtin_unreachable();
    }

    if (available / 4 > count) {
      count = available / 4;
    }

    if (available >= 0x7ffffffffffffff8) {
      count = 0x1fffffffffffffff;
    }

    if ((count >> 61) != 0) {
      length_error();
      __builtin_unreachable();
    }

    target.begin = static_cast<void**>(Allocate(count * 8));
    target.end = target.begin;
    target.capacity_end = target.begin + count;

    if (source.begin != source.end) {
      memcpy(target.begin, source.begin, bytes);
    }

    target.end = target.begin + bytes / 8;
    return;
  }

  const size_t previous_bytes = Count(target) * 8;

  if (bytes <= previous_bytes) {
    if (source.begin != source.end) {
      memmove(target.begin, source.begin, bytes);
    }

    target.end = target.begin + bytes / 8;
    return;
  }

  if (previous_bytes != 0) {
    memmove(target.begin, source.begin, previous_bytes);
  }

  if (bytes != previous_bytes) {
    memmove(target.end, source.begin + previous_bytes / 8,
      bytes - previous_bytes);
  }

  target.end += (bytes - previous_bytes) / 8;
}

void BindNames(
  TableData* table, DispositionColumn* column,
  const CollectionOperations& operations, bool replace
) {
  auto bind = [&](const char* name) {
    const uint64_t hash = HashName(name);

    if (replace) {
      InsertResult result = operations.insert(
        &table->indexes[0], &hash, &hash, &column
      );

      if (!result.inserted) {
        result.node->value = column;
      }
    }
    else {
      operations.bind(table, &hash, column);
    }
  };

  if (column->name != nullptr) {
    if (!replace) {
      Append(table->unknown_e0, const_cast<char*>(column->name),
        StringPointerVectorLengthError);
    }

    bind(column->name);
    const char* suffix = column->name;

    if (suffix != nullptr) {
      const char* separator = strchr(suffix, '_');

      if (separator != nullptr) {
        suffix = separator + 1;
      }
    }

    bind(suffix);
  }

  const char* alias = ColumnAlias(column);

  if (alias != nullptr) {
    bind(replace ? ColumnAlias(column) : alias);
    bind(ColumnAliasSuffix(column));
  }
}

void MergeColumns(TableData* table, const CollectionOperations& operations) {
  HashTable index{};
  index.max_load_factor = 1.0f;
  void** end = table->unknown_38.end;

  for (void** entry = table->unknown_38.begin; entry != end; ++entry) {
    auto* column = static_cast<DispositionColumn*>(*entry);

    if (Find(index, column->key) != nullptr) {
      continue;
    }

    auto* node = static_cast<HashNode*>(Allocate(sizeof(HashNode)));
    node->next = nullptr;
    node->hash = column->key;
    node->key = column->key;
    node->value = column;

    if (operations.prepare(&index, column->key, &node->key) != nullptr) {
      Free(node);
    }
    else {
      Link(index, node);
    }
  }

  Vector<void*> unique{};
  end = table->unknown_38.end;

  for (void** entry = table->unknown_38.begin; entry != end; ++entry) {
    auto* column = static_cast<DispositionColumn*>(*entry);
    auto* first = static_cast<DispositionColumn*>(
      Find(index, column->key)->value
    );

    if (column == first) {
      Append(unique, column, operations.column_length_error);
    }
    else {
      void** child_end = column->children->end;

      for (void** child = column->children->begin;
           child != child_end; ++child) {
        Append(*first->children, *child, operations.element_length_error);
      }
    }
  }

  Sort(unique, operations.sort);

  for (void** entry = unique.begin; entry != unique.end; ++entry) {
    auto* column = static_cast<DispositionColumn*>(*entry);
    Sort(*column->children, operations.sort_elements);
    Number(*column->children);
  }

  Assign(table->unknown_38, unique, operations.column_length_error);
  Free(unique.begin);
  DestroyIndex(index);
}

RawRow* FindResourceRow(void* resource, uint64_t hash) {
  if (hash == 0) {
    return nullptr;
  }

  auto* lookup = *reinterpret_cast<unsigned char**>(
    static_cast<unsigned char*>(resource) + 808
  );
  auto* index = reinterpret_cast<HashTable*>(lookup + 8);
  HashNode* found = Find(*index, hash);
  return found == nullptr ? nullptr : static_cast<RawRow*>(found->value);
}

void BuildTable(
  TableData* table, const String& path, const char* group,
  const CollectionOperations& operations
) {
  String copied_path;
  CopyString(copied_path, Characters(path));
  Vector<String> names = EnumerateResources(&copied_path);
  operations.clear(table);
  HashTable positions{};
  positions.max_load_factor = 1.0f;
  int32_t origin = 0;

  for (String* name = names.begin; name != names.end; ++name) {
    void* resource = AcquireTableResource(table, Characters(*name));

    if (resource == nullptr) {
      continue;
    }

    RawRow* row = FindResourceRow(resource, HashName(group));

    if (row == nullptr || row->type == nullptr) {
      continue;
    }

    auto* type = reinterpret_cast<uint32_t*>(row->type);

    if (type[0] != 539300353 || type[4] != operations.stride) {
      continue;
    }

    Append(table->rows, row, RowVectorLengthError);

    if (row->column_count != 0 && row->columns != nullptr) {
      for (size_t i = 0; i < row->column_count; ++i) {
        if (row->columns == nullptr) {
          continue;
        }

        auto* column = reinterpret_cast<DispositionColumn*>(&row->columns[i]);
        const uint32_t key = uint32_t(column->source_id) + 1;
        auto* node = static_cast<HashNode*>(Allocate(24));
        node->next = nullptr;
        node->hash = key;
        node->key = uint64_t(uint32_t(origin)) << 32 | key;

        if (PrepareOrigin(&table->indexes[2], key, &node->key) != nullptr) {
          Free(node);
        }
        else {
          Link(table->indexes[2], node);
        }

        Visit(column, operations, &table->indexes[2], origin, false);
        HashNode* existing = origin > 0 && column->key != 0
          ? Find(table->indexes[0], column->key) : nullptr;
        HashNode* position = nullptr;

        if (existing != nullptr && row->type->kind != 2) {
          auto* previous = static_cast<DispositionColumn*>(existing->value);
          position = Find(positions, uint32_t(previous->source_id) + 1, true);
        }

        if (position != nullptr) {
          const size_t index = reinterpret_cast<uintptr_t>(position->value);
          table->unknown_38.begin[index] = column;
          BindNames(table, column, operations, true);
        }
        else {
          const size_t index = Count(table->unknown_38);
          InsertRowPosition(&positions, &key, &key, &index);
          Append(table->unknown_38, column, operations.column_length_error);
          BindNames(table, column, operations, false);
        }
      }
    }

    Append(table->metadata, const_cast<char*>(ResourceVariant(name)),
      StringPointerVectorLengthError);
    ++origin;
  }

  void** row_end = table->rows.end;

  for (void** entry = table->rows.begin; entry != row_end; ++entry) {
    auto* row = static_cast<RawRow*>(*entry);

    if (row->type->kind != 2) {
      continue;
    }

    for (size_t i = 0; i < row->column_count; ++i) {
      auto* column = reinterpret_cast<DispositionColumn*>(&row->columns[i]);

      if (column->children == nullptr) {
        auto* children = static_cast<Vector<void*>*>(Allocate(24));
        *children = {};
        Visit(column, operations, children, 0, true);
        column->children = children;
      }
    }
  }

  if (origin > 1) {
    bool grouped = false;
    row_end = table->rows.end;

    for (void** entry = table->rows.begin; entry != row_end; ++entry) {
      if (static_cast<RawRow*>(*entry)->type->kind == 2) {
        grouped = true;
        break;
      }
    }

    if (grouped) {
      MergeColumns(table, operations);
    }
    else {
      Sort(table->unknown_38, operations.sort);
      Number(table->unknown_38);
    }
  }

  DestroyIndex(positions);
  DestroyResources(names);
  DestroyString(copied_path);
}

void ClearMetadataIndex(RowMetadata* metadata) {
  HashTable& index = metadata->index;

  if (index.size == 0) {
    return;
  }

  auto* node = static_cast<HashNode*>(index.first_node);

  while (node != nullptr) {
    HashNode* next = node->next;
    DestroyString(*reinterpret_cast<String*>(&node->key));
    Free(node);
    node = next;
  }

  const size_t count = index.bucket_count;
  index.first_node = nullptr;

  for (size_t i = 0; i < count; ++i) {
    static_cast<void**>(index.buckets)[i] = nullptr;
  }

  index.size = 0;
}

void BindMetadata(
  TableData* table, size_t name_offset, void (*index_error)()
) {
  for (size_t i = 0; int64_t(i) < int32_t(Count(table->unknown_38)); ++i) {
    auto* column = static_cast<DispositionColumn*>(table->unknown_38.begin[i]);
    RowMetadata* metadata = column->metadata;
    ClearMetadataIndex(metadata);
    column = static_cast<DispositionColumn*>(table->unknown_38.begin[i]);

    for (size_t j = 0; int64_t(j) < int32_t(Count(*column->children)); ++j) {
      if (j >= Count(*column->children)) {
        index_error();
        __builtin_unreachable();
      }

      auto* element = static_cast<DispositionElement*>(
        column->children->begin[j]
      );
      const char* resource_name = nullptr;
      HashNode* origin = element == nullptr ? nullptr
        : Find(table->indexes[2], uint32_t(element->source_id) + 1, true);

      if (origin != nullptr) {
        const int32_t index = origin->key >> 32;

        if (index >= 0 && size_t(index) < Count(table->metadata)) {
          resource_name = static_cast<const char*>(
            table->metadata.begin[index]
          );
        }
      }

      String group, name, resource;
      CopyString(group, column->name, true);
      const char* label = *reinterpret_cast<const char**>(
        reinterpret_cast<unsigned char*>(element) + name_offset
      );
      CopyString(name, label == nullptr ? "" : label, true);
      CopyString(resource, resource_name == nullptr ? "" : resource_name, true);
      ElementMetadata* target = element->metadata;

      if (target == nullptr) {
        target = static_cast<ElementMetadata*>(Allocate(56));
        target->vtable = g_element_metadata_vtable;
        target->name = {};
        target->resource_name = {};
        element->metadata = target;
      }

      BindElement(target, &metadata->index_vtable, &group, &name, &resource);
      DestroyString(resource);
      DestroyString(name);
      DestroyString(group);
      column = static_cast<DispositionColumn*>(table->unknown_38.begin[i]);
    }
  }
}

TableData* NewTable() {
  auto* table = static_cast<TableData*>(Allocate(sizeof(TableData)));
  table->vtable = reinterpret_cast<data::TableDataVTable*>(
    const_cast<void**>(g_disposition_table_vtable)
  );
  table->resources = {};
  table->rows = {};
  table->unknown_38 = {};

  for (HashTable& index : table->indexes) {
    index.buckets = nullptr;
    index.bucket_count = 0;
    index.first_node = nullptr;
    index.size = 0;
    index.max_load_factor = 1.0f;
  }

  table->metadata = {};
  table->unknown_e0 = {};
  table->unknown_f8 = 0;
  return table;
}

}

void LoadDisposition(Disposition* disposition, const char* name) {
  ResetDisposition(disposition);
  g_loading_disposition.Assign(name);
  String path;
  CopyString(path, "GameData/HubDispos/");
  AppendString(&path, name, strlen(name));
  AppendString(&path, ".bin", 4);
  disposition->resources.end = disposition->resources.begin;
  Vector<String> names = EnumerateResources(&path);

  for (String* entry = names.begin; entry != names.end; ++entry) {
    ResourceRequest request;
    request.name = Characters(*entry);
    request.length = strlen(request.name);
    request.vtable = g_resource_request_vtable;
    request.mode = 2;
    Append(disposition->resources, LoadResource(*g_resource_manager, &request));
  }

  DestroyResources(names);

  for (size_t i = 0; i < 11; ++i) {
    String group;
    CopyString(group, kCollections[0].name);

    if (i != 0) {
      const char* suffix = g_group_suffixes[i].name;
      AppendString(&group, suffix, strlen(suffix));
    }

    const char* label = Characters(group);
    void** end = disposition->resources.end;

    for (void** entry = disposition->resources.begin; entry != end; ++entry) {
      void* resource = *entry;

      if (FindResourceRow(resource, HashName(label)) == nullptr) {
        continue;
      }

      TableData* table = NewTable();
      BuildTable(table, path, label, kCollections[0]);
      TableData* previous = disposition->tables[i];
      disposition->tables[i] = table;

      if (previous != nullptr) {
        Invoke(previous, 1);
      }

      break;
    }

    DestroyString(group);
  }

  void** end = disposition->resources.end;

  for (void** entry = disposition->resources.begin; entry != end; ++entry) {
    void* resource = *entry;
    ReleaseResource(static_cast<void**>(resource)[1], resource);
  }

  disposition->resources.end = disposition->resources.begin;

  for (size_t i = 0; i < 3; ++i) {
    const CollectionOperations& operations = kCollections[i + 1];
    BuildTable(&disposition->collections[i], path, operations.name, operations);
  }

  for (TableData* table : disposition->tables) {
    if (table != nullptr) {
      Invoke(table, 2);
    }
  }

  FinalizeFirstCollection(&disposition->collections[0]);
  FinalizeSecondCollection(&disposition->collections[1]);
  FinalizeThirdCollection(&disposition->collections[2]);

  for (TableData* table : disposition->tables) {
    if (table != nullptr) {
      BindMetadata(table, 40, PlacementElementIndexError);
    }
  }

  for (size_t i = 0; i < 3; ++i) {
    BindMetadata(&disposition->collections[i], 32,
      kCollections[i + 1].element_index_error);
  }

  if ((g_loading_disposition.words[0] & 1) != 0) {
    *reinterpret_cast<char*>(g_loading_disposition.words[2]) = 0;
    g_loading_disposition.words[1] = 0;
  }
  else {
    *reinterpret_cast<uint16_t*>(&g_loading_disposition) = 0;
  }

  DestroyString(path);
}

}
