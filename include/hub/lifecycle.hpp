#pragma once

#include "data/registration.hpp"

namespace fw::hub {

struct ContextStack {
  void*** allocation_begin;
  void*** map_begin;
  void*** map_end;
  void*** allocation_end;
  size_t begin_index;
  size_t size;
};

struct RowMetadata {
  const void* vtable;
  const void* index_vtable;
  data::HashTable index;
};

struct ResolvedRow {
  unsigned char unknown_00[24];
  RowMetadata* metadata;
  unsigned char unknown_20[8];
  data::Vector<ResolvedRow*>* children;
};

struct RowType {
  unsigned char unknown_00[4];
  uint8_t kind;
};

struct Column {
  unsigned char unknown_00[40];
  data::Vector<void*>* values;
};

struct RawRow {
  unsigned char unknown_00[8];
  void* context;
  uint16_t unknown_10;
  uint16_t column_count;
  unsigned char unknown_14[12];
  RowType* type;
  Column* columns;
};

struct Disposition {
  unsigned char unknown_00[8];
  data::TableData* tables[11];
  data::TableData collections[3];
  data::Vector<void*> resources;
};

void ResetDisposition(Disposition* disposition);
void ClearDispositionTable(data::TableData* table);
void ClearFirstCollection(data::TableData* table);
void ClearSecondCollection(data::TableData* table);
void ClearThirdCollection(data::TableData* table);
void FinalizeFirstCollection(data::TableData* table);
void FinalizeSecondCollection(data::TableData* table);
void FinalizeThirdCollection(data::TableData* table);

extern ContextStack g_resource_contexts;
extern ContextStack g_row_contexts;
extern ContextStack g_resolved_rows;

static_assert(sizeof(ContextStack) == 48);
static_assert(sizeof(RowMetadata) == 56);
static_assert(offsetof(ResolvedRow, metadata) == 24);
static_assert(offsetof(ResolvedRow, children) == 40);
static_assert(sizeof(Column) == 48);
static_assert(offsetof(RawRow, column_count) == 18);
static_assert(offsetof(RawRow, type) == 32);
static_assert(offsetof(RawRow, columns) == 40);
static_assert(offsetof(Disposition, collections) == 96);
static_assert(offsetof(Disposition, resources) == 864);

}
