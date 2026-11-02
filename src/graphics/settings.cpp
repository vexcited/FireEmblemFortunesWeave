#include "graphics/settings.hpp"
#include "memory/heap_manager.hpp"

extern "C" void* memset(void* target, int value, size_t size);
extern "C" void* memcpy(void* target, const void* source, size_t size);
extern "C" size_t strlen(const char* value);

namespace fw::graphics {

struct ObjectMembers {
  uint32_t inline_count;
  uint32_t size;
  unsigned char* inline_members;
  unsigned char** blocks;
};

struct MemberPosition {
  ObjectMembers* members;
  size_t index;
};

struct NameView {
  const char* data;
  size_t size;
};

struct PropertyBinding {
  text::String name;
  Property* property;
};

extern const void* g_property_vtable[];
extern const void* g_float_property_vtable[];
extern const void* g_integer_property_vtable[];
extern const void* g_boolean_property_vtable[];
extern const void* g_color_property_vtable[];
extern const uint32_t g_member_block_offsets[];

MemberPosition FindMember(ObjectMembers* begin, size_t begin_index,
  ObjectMembers* end, size_t end_index, const NameView* name);
void GrowNodeStack(NodeStack* stack);
void RegisterProperty(PropertyGroup* group, Property* property);
void ReadFloatProperty(SettingsReader* reader, PropertyBinding* binding);
void ReadIntegerProperty(SettingsReader* reader, PropertyBinding* binding);
void ReadBooleanProperty(SettingsReader* reader, PropertyBinding* binding);
void ReadColorProperty(SettingsReader* reader, PropertyBinding* binding);
void EnsureDefaultGroups(Settings* settings);
void PublishGroups(Settings* settings);

namespace {

enum class PropertyKind { Float, Integer, Boolean, Color };

constexpr uint32_t FloatBits(float value) {
  return __builtin_bit_cast(uint32_t, value);
}

struct PropertyDefinition {
  const char* name;
  uint16_t offset;
  PropertyKind kind;
  uint32_t value[4];
};

struct ReadDefinition {
  const char* name;
  uint16_t offset;
  void (*read)(SettingsReader*, PropertyBinding*);
};

struct GroupDefinition {
  const char* name;
  uint16_t slot;
  uint16_t size;
  const void* vtable;
  void (*construct)(PropertyGroup*);
  const PropertyDefinition* properties;
  size_t property_count;
  const ReadDefinition* reads;
  size_t read_count;
};

}

#include "graphics/settings_catalog.inc"

namespace {

void Free(void* pointer) {
  if (pointer != nullptr) {
    memory::g_heap_manager->GetAllocator(0).Free(pointer);
  }
}

void SetName(text::String& name, const char* value) {
  const size_t length = strlen(value);

  if (length <= 22) {
    auto* bytes = reinterpret_cast<unsigned char*>(&name);
    bytes[0] = static_cast<uint8_t>(length * 2);
    memcpy(bytes + 1, value, length + 1);
  }
  else {
    const size_t allocation = (length | 7) + 1;
    auto* data = static_cast<char*>(
      memory::g_heap_manager->Allocate(allocation, 16, 0)
    );
    memcpy(data, value, length + 1);
    name.words[0] = allocation | 1;
    name.words[1] = length;
    name.words[2] = reinterpret_cast<uintptr_t>(data);
  }
}

void ReleaseName(text::String& name) {
  if ((name.words[0] & 1) != 0) {
    Free(reinterpret_cast<void*>(name.words[2]));
  }
}

SettingsNode* Top(const NodeStack& stack) {
  const size_t index = stack.begin_index + stack.size - 1;
  return stack.map_begin[index >> 9][index & 511];
}

size_t Capacity(const NodeStack& stack) {
  return stack.map_end == stack.map_begin
    ? 0 : static_cast<size_t>(stack.map_end - stack.map_begin) * 512 - 1;
}

bool IsObject(SettingsNode* node) {
  return node != nullptr
    && (*reinterpret_cast<uint8_t*>(node) & 127) == 8;
}

ObjectMembers* Members(SettingsNode* node) {
  ObjectMembers* result;
  memcpy(&result, reinterpret_cast<unsigned char*>(node) + 1, 8);
  return result;
}

MemberPosition Lookup(SettingsNode* node, const char* name) {
  NameView view{name, strlen(name)};
  ObjectMembers* members = Members(node);
  return FindMember(members, 0, members, members->size, &view);
}

SettingsNode* Value(MemberPosition position) {
  ObjectMembers* members = position.members;
  unsigned char* entry;

  if (position.index < members->inline_count) {
    entry = members->inline_members + position.index * 32;
  }
  else {
    const uint32_t index = position.index - members->inline_count;
    const uint32_t level = 28 - __builtin_clz(index + 16);
    entry = members->blocks[level]
      + uint32_t(index - g_member_block_offsets[level]) * 32;
  }

  return reinterpret_cast<SettingsNode*>(entry + 16);
}

void Push(NodeStack& stack, SettingsNode* node) {
  if (Capacity(stack) == stack.begin_index + stack.size) {
    GrowNodeStack(&stack);
  }

  const size_t index = stack.begin_index + stack.size;
  stack.map_begin[index >> 9][index & 511] = node;
}

void Trim(NodeStack& stack) {
  if (Capacity(stack) - stack.begin_index - stack.size >= 1024) {
    Free(stack.map_end[-1]);
    --stack.map_end;
  }
}

void InitializeProperty(PropertyGroup* group,
  const PropertyDefinition& definition) {
  auto* bytes = reinterpret_cast<unsigned char*>(group) + definition.offset;
  auto* property = reinterpret_cast<Property*>(bytes);
  property->vtable = g_property_vtable;
  SetName(property->name, definition.name);
  property->enabled = 1;
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

PropertyGroup* CreateGroup(const GroupDefinition& definition) {
  auto* group = static_cast<PropertyGroup*>(
    memory::g_heap_manager->Allocate(definition.size, 16, 0)
  );
  memset(group, 0, definition.size);

  if (definition.construct != nullptr) {
    definition.construct(group);
  }
  else {
    group->vtable = definition.vtable;

    for (size_t i = 0; i < definition.property_count; ++i) {
      InitializeProperty(group, definition.properties[i]);
    }
  }

  return group;
}

void DestroyGroup(PropertyGroup* group) {
  if (group != nullptr) {
    auto* table = static_cast<void (*const*)(PropertyGroup*)>(
      group->vtable
    );
    table[1](group);
  }
}

void ReadGroup(SettingsReader* reader, PropertyGroup* group,
  const GroupDefinition& definition) {
  SettingsNode* root = Top(reader->stack);

  if (root == nullptr) {
    return;
  }

  SettingsNode* child = nullptr;

  if (IsObject(root)) {
    MemberPosition position = Lookup(root, definition.name);

    if (position.index != Members(root)->size) {
      child = Value(position);
    }
  }

  Push(reader->stack, child);

  if (definition.read_count != 0) {
    ++reader->stack.size;
  }

  for (size_t i = 0; i < definition.read_count; ++i) {
    const ReadDefinition& read = definition.reads[i];
    PropertyBinding binding;
    char* temporary = nullptr;
    const size_t length = strlen(read.name);

    if (length > 22) {
      temporary = static_cast<char*>(
        memory::g_heap_manager->Allocate(
          (length | 7) == 23 ? 26 : (length | 7) + 1, 16, 0
        )
      );
      memcpy(temporary, read.name, length + 1);
      binding.name.CopyTerminated(temporary, length);
    }
    else {
      SetName(binding.name, read.name);
    }

    binding.property = reinterpret_cast<Property*>(
      reinterpret_cast<unsigned char*>(group) + read.offset
    );
    read.read(reader, &binding);
    ReleaseName(binding.name);
    Free(temporary);
  }

  if (definition.read_count != 0) {
    --reader->stack.size;
  }

  Trim(reader->stack);
}

}

void ReadSettings(Settings* settings, SettingsReader* reader) {
  for (const GroupDefinition& definition : kGroups) {
    SettingsNode* root = Top(reader->stack);
    bool present = false;

    if (IsObject(root)) {
      MemberPosition position = Lookup(root, definition.name);
      present = position.index != Members(root)->size;
    }

    PropertyGroup*& slot = settings->groups[definition.slot];

    if (!present) {
      PropertyGroup* previous = slot;
      slot = nullptr;
      DestroyGroup(previous);
      continue;
    }

    PropertyGroup* group = CreateGroup(definition);
    PropertyGroup* previous = slot;
    slot = group;

    if (previous != nullptr) {
      DestroyGroup(previous);
      group = slot;
    }

    ReadGroup(reader, group, definition);
  }

  EnsureDefaultGroups(settings);
  PublishGroups(settings);
}

}
