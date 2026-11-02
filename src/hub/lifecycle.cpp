#include "hub/lifecycle.hpp"

namespace fw::hub {

void GrowContextStack(ContextStack* stack);
void GrowResolvedRowStack(ContextStack* stack);
void ReleaseResource(void* owner, void* resource);
extern const void* g_row_metadata_vtable[];
extern const void* g_row_index_vtable[];

namespace {

void Free(void* pointer) {
  if (pointer != nullptr) {
    memory::g_heap_manager->GetAllocator(0).Free(pointer);
  }
}

void Invoke(void* object, size_t slot) {
  auto* table = *static_cast<void (***)(void*)>(object);
  table[slot](object);
}

size_t Capacity(const ContextStack& stack) {
  return stack.map_begin == stack.map_end
    ? 0 : static_cast<size_t>(stack.map_end - stack.map_begin) * 512 - 1;
}

void Store(ContextStack& stack, void* value, bool row) {
  if (Capacity(stack) == stack.begin_index + stack.size) {
    if (row) {
      GrowResolvedRowStack(&stack);
    }
    else {
      GrowContextStack(&stack);
    }
  }

  const size_t index = stack.begin_index + stack.size;
  stack.map_begin[index >> 9][index & 511] = value;
}

void Trim(ContextStack& stack) {
  if (Capacity(stack) - stack.begin_index - stack.size >= 1024) {
    Free(stack.map_end[-1]);
    --stack.map_end;
  }
}

void Pop(ContextStack& stack) {
  --stack.size;
  Trim(stack);
}

void Finalize(data::TableData* table) {
  if ((table->unknown_f8 & 1) != 0) {
    return;
  }

  void* resource_context = table->resources.begin == table->resources.end
    ? nullptr
    : static_cast<unsigned char*>(table->resources.begin[0]) + 16;
  Store(g_resource_contexts, resource_context, false);
  ++g_resource_contexts.size;

  void* row_context = table->rows.begin == table->rows.end
    ? nullptr : static_cast<RawRow*>(table->rows.begin[0])->context;
  Store(g_row_contexts, row_context, false);
  ++g_row_contexts.size;

  void** begin = table->unknown_38.begin;
  void** end = table->unknown_38.end;

  for (void** entry = begin; entry != end; ++entry) {
    auto* row = static_cast<ResolvedRow*>(*entry);
    Store(g_resolved_rows, row, true);
    ++g_resolved_rows.size;
    ResolvedRow** child = row->children->begin;
    ResolvedRow** child_end = row->children->end;

    for (; child != child_end; ++child) {
      Store(g_resolved_rows, *child, true);
      Trim(g_resolved_rows);
    }

    if (row->metadata == nullptr) {
      auto* metadata = static_cast<RowMetadata*>(
        memory::g_heap_manager->Allocate(sizeof(RowMetadata), 16, 0)
      );
      metadata->vtable = g_row_metadata_vtable;
      metadata->index_vtable = g_row_index_vtable;
      metadata->index.buckets = nullptr;
      metadata->index.bucket_count = 0;
      metadata->index.first_node = nullptr;
      metadata->index.size = 0;
      metadata->index.max_load_factor = 1.0f;
      row->metadata = metadata;
    }

    Pop(g_resolved_rows);
  }

  Invoke(table, 5);
  table->unknown_f8 = 1;
  Pop(g_resource_contexts);
  Pop(g_row_contexts);
}

void ClearIndex(data::HashTable& index) {
  if (index.size == 0) {
    return;
  }

  void* node = index.first_node;

  while (node != nullptr) {
    void* next = *static_cast<void**>(node);
    Free(node);
    node = next;
  }

  const size_t count = index.bucket_count;
  index.first_node = nullptr;
  auto** buckets = static_cast<void**>(index.buckets);

  for (size_t i = 0; i < count; ++i) {
    buckets[i] = nullptr;
  }

  index.size = 0;
}

void Clear(data::TableData* table) {
  if (table->resources.begin == table->resources.end) {
    return;
  }

  Invoke(table, 3);
  void** row_end = table->rows.end;

  for (void** entry = table->rows.begin; entry != row_end; ++entry) {
    auto* row = static_cast<RawRow*>(*entry);

    if (row->type->kind != 2) {
      continue;
    }

    uint16_t count = row->column_count;

    for (size_t i = 0; i < count; ++i) {
      Column* column = &row->columns[i];
      auto* values = column->values;

      if (values != nullptr) {
        if (values->begin != nullptr) {
          values->end = values->begin;
          Free(values->begin);
        }

        Free(values);
        column->values = nullptr;
        count = row->column_count;
      }
    }
  }

  table->unknown_38.end = table->unknown_38.begin;
  table->unknown_e0.end = table->unknown_e0.begin;
  ClearIndex(table->indexes[0]);
  ClearIndex(table->indexes[1]);
  table->rows.end = table->rows.begin;
  ClearIndex(table->indexes[2]);
  void** resource = table->resources.begin;
  void** resource_end = table->resources.end;
  table->metadata.end = table->metadata.begin;

  for (; resource != resource_end; ++resource) {
    void* handle = *resource;
    ReleaseResource(static_cast<void**>(handle)[1], handle);
  }

  table->resources.end = table->resources.begin;
}

}

void ResetDisposition(Disposition* disposition) {
  for (data::TableData*& slot : disposition->tables) {
    if (slot == nullptr) {
      continue;
    }

    ClearDispositionTable(slot);
    data::TableData* previous = slot;
    slot = nullptr;

    if (previous != nullptr) {
      Invoke(previous, 1);
    }
  }

  ClearFirstCollection(&disposition->collections[0]);
  ClearSecondCollection(&disposition->collections[1]);
  ClearThirdCollection(&disposition->collections[2]);
}

void ClearDispositionTable(data::TableData* table) {
  Clear(table);
}

void ClearFirstCollection(data::TableData* table) {
  Clear(table);
}

void ClearSecondCollection(data::TableData* table) {
  Clear(table);
}

void ClearThirdCollection(data::TableData* table) {
  Clear(table);
}

void FinalizeFirstCollection(data::TableData* table) {
  Finalize(table);
}

void FinalizeSecondCollection(data::TableData* table) {
  Finalize(table);
}

void FinalizeThirdCollection(data::TableData* table) {
  Finalize(table);
}

}
