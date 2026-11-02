#include "graphics/groups.hpp"
#include "memory/heap_manager.hpp"

extern "C" void* memcpy(void* target, const void* source, size_t size);
extern "C" size_t strlen(const char* value);

namespace fw::graphics {

extern const void* g_property_vtable[];
extern const void* g_float_property_vtable[];
extern const void* g_integer_property_vtable[];
extern const void* g_boolean_property_vtable[];
extern const void* g_color_property_vtable[];

namespace {

enum class PropertyKind { Float, Integer, Boolean, Color };

constexpr uint32_t FloatBits(float value) {
  return __builtin_bit_cast(uint32_t, value);
}

struct PropertyDefinition {
  const char* name;
  uint16_t offset;
  PropertyKind kind;
  uint8_t enabled;
  uint32_t value[4];
};

void SetName(text::String& name, const char* value) {
  const size_t length = strlen(value);

  if (length <= 22) {
    auto* bytes = reinterpret_cast<unsigned char*>(&name);
    bytes[0] = static_cast<uint8_t>(length * 2);
    memcpy(bytes + 1, value, length + 1);
  }
  else {
    const size_t allocation = (length | 7) == 23 ? 26 : (length | 7) + 1;
    auto* data = static_cast<char*>(
      memory::g_heap_manager->Allocate(allocation, 16, 0)
    );
    memcpy(data, value, length + 1);
    name.words[0] = allocation | 1;
    name.words[1] = length;
    name.words[2] = reinterpret_cast<uintptr_t>(data);
  }
}

void InitializeProperty(PropertyGroup* group,
  const PropertyDefinition& definition) {
  auto* bytes = reinterpret_cast<unsigned char*>(group) + definition.offset;
  auto* property = reinterpret_cast<Property*>(bytes);
  property->vtable = g_property_vtable;
  SetName(property->name, definition.name);
  property->enabled = definition.enabled;
  RegisterProperty(group, property);

  if (definition.kind == PropertyKind::Boolean) {
    bytes[33] = 0;
    bytes[34] = 0;
    *reinterpret_cast<uint64_t*>(bytes + 40) = 0;
    *reinterpret_cast<uint64_t*>(bytes + 48) = 0;
    *reinterpret_cast<uint64_t*>(bytes + 56) = 0;
    bytes[64] = definition.value[0];
    property->vtable = g_boolean_property_vtable;
  }
  else if (definition.kind == PropertyKind::Color) {
    bytes[48] = 0;
    bytes[64] = 0;
    *reinterpret_cast<uint64_t*>(bytes + 80) = 0;
    *reinterpret_cast<uint64_t*>(bytes + 88) = 0;
    *reinterpret_cast<uint64_t*>(bytes + 96) = 0;
    memcpy(bytes + 112, definition.value, 16);
    property->vtable = g_color_property_vtable;
  }
  else {
    bytes[36] = 0;
    bytes[40] = 0;
    *reinterpret_cast<uint64_t*>(bytes + 48) = 0;
    *reinterpret_cast<uint64_t*>(bytes + 56) = 0;
    *reinterpret_cast<uint64_t*>(bytes + 64) = 0;
    *reinterpret_cast<uint32_t*>(bytes + 72) = definition.value[0];
    property->vtable = definition.kind == PropertyKind::Float
      ? g_float_property_vtable : g_integer_property_vtable;
  }
}


void ConstructGroup(PropertyGroup* group, const void* vtable,
  const PropertyDefinition* definitions, size_t count) {
  group->vtable = vtable;
  group->name = {};
  group->properties_begin = nullptr;
  group->properties_end = nullptr;
  group->properties_capacity_end = nullptr;

  for (size_t i = 0; i < count; ++i) {
    InitializeProperty(group, definitions[i]);
  }
}

}

#include "graphics/group_catalog.inc"

}
