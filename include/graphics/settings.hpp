#pragma once

#include <stddef.h>
#include <stdint.h>

#include "text/string.hpp"

namespace fw::graphics {

struct Property {
  const void* vtable;
  text::String name;
  uint8_t enabled;
};

struct PropertyGroup {
  const void* vtable;
  text::String name;
  Property** properties_begin;
  Property** properties_end;
  Property** properties_capacity_end;
};

struct Settings {
  unsigned char unknown_00[48];
  PropertyGroup* groups[42];
};

struct SettingsNode;

struct NodeStack {
  SettingsNode*** allocation_begin;
  SettingsNode*** map_begin;
  SettingsNode*** map_end;
  SettingsNode*** allocation_end;
  size_t begin_index;
  size_t size;
};

struct SettingsReader {
  unsigned char unknown_00[16];
  NodeStack stack;
};

void ReadSettings(Settings* settings, SettingsReader* reader);

static_assert(sizeof(PropertyGroup) == 56);
static_assert(offsetof(Property, enabled) == 32);
static_assert(offsetof(Settings, groups) == 48);
static_assert(sizeof(NodeStack) == 48);
static_assert(sizeof(SettingsReader) == 64);

}
