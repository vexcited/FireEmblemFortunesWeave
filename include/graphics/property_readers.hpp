#pragma once

#include "graphics/settings.hpp"

namespace fw::graphics {

struct PropertyBinding {
  text::String name;
  Property* property;
};

struct KeyframeVector {
  unsigned char* begin;
  unsigned char* end;
  unsigned char* capacity_end;
};

void ReadIntegerProperty(SettingsReader* reader, PropertyBinding* binding);
void ReadBooleanProperty(SettingsReader* reader, PropertyBinding* binding);
void ReadFloatProperty(SettingsReader* reader, PropertyBinding* binding);
void ReadColorProperty(SettingsReader* reader, PropertyBinding* binding);

void AssignIntegerKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count);
void AssignBooleanKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count);
void AssignFloatKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count);
void AssignColorKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count);

static_assert(sizeof(PropertyBinding) == 32);
static_assert(sizeof(KeyframeVector) == 24);

}
