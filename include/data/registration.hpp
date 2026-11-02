#pragma once

#include "memory/heap_manager.hpp"

namespace fw::data {

template<typename T>
struct Vector {
  T* begin;
  T* end;
  T* capacity_end;
};

struct HashTable {
  void* buckets;
  size_t bucket_count;
  void* first_node;
  size_t size;
  float max_load_factor;
  uint32_t padding;
};

struct Table;
struct TableData;

struct TableVTable {
  uintptr_t unknown_00[2];
  void (*initialize)(Table* table);
};

struct TableDataVTable {
  uintptr_t unknown_00[2];
  void (*finish)(TableData* data);
};

struct TableData {
  TableDataVTable* vtable;
  Vector<void*> resources;
  Vector<void*> rows;
  Vector<void*> unknown_38;
  HashTable indexes[3];
  Vector<void*> metadata;
  Vector<void*> unknown_e0;
  uint8_t unknown_f8;
  unsigned char padding_f9[7];
};

struct Table {
  TableVTable* vtable;
  TableData data;
};

struct RowBinding {
  void* row;
  uint32_t index;
  uint32_t padding;
  void* metadata;
};

void InitializeGameData();
void AppendRowBinding(const RowBinding* binding);

extern Vector<TableData*> g_tables;
extern Vector<RowBinding> g_row_bindings;

static_assert(sizeof(HashTable) == 40);
static_assert(sizeof(TableData) == 256);
static_assert(sizeof(Table) == 264);
static_assert(offsetof(Table, data) == 8);
static_assert(offsetof(TableData, rows) == 32);
static_assert(offsetof(TableData, indexes) == 80);
static_assert(offsetof(TableData, metadata) == 200);
static_assert(sizeof(RowBinding) == 24);

}
