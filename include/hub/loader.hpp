#pragma once

#include "hub/lifecycle.hpp"
#include "text/string.hpp"

namespace fw::hub {

struct DispositionColumn {
  uint64_t key;
  const char* name;
  uint16_t index;
  uint16_t element_count;
  uint16_t unknown_14;
  uint16_t source_id;
  RowMetadata* metadata;
  unsigned char* elements;
  data::Vector<void*>* children;
};

struct ElementMetadata {
  const void* vtable;
  text::String name;
  text::String resource_name;
};

struct DispositionElement {
  unsigned char unknown_00[16];
  uint16_t index;
  unsigned char unknown_12[4];
  uint16_t source_id;
  ElementMetadata* metadata;
};

void LoadDisposition(Disposition* disposition, const char* name);

extern text::String g_loading_disposition;

static_assert(sizeof(DispositionColumn) == 48);
static_assert(offsetof(DispositionColumn, source_id) == 22);
static_assert(sizeof(ElementMetadata) == 56);
static_assert(sizeof(DispositionElement) == 32);

}
