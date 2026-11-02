#pragma once

#include "hub/loader.hpp"

namespace fw::hub {

struct ResourceRequest {
  const char* name;
  size_t length;
  const void* vtable;
  uint32_t mode;
};

void* AcquireTableResource(data::TableData* table, const char* name);
const char* ResourceVariant(const text::String* path);
const char* ColumnAlias(DispositionColumn* column);
const char* ColumnAliasSuffix(DispositionColumn* column);
void FinalizePlacement(data::TableData* table);

extern void** g_resource_manager;
extern data::Table* g_alias_table;

static_assert(offsetof(ResourceRequest, mode) == 24);

}
