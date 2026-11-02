#include "graphics/property_readers.hpp"
#include "memory/heap_manager.hpp"

extern "C" void* memcpy(void* target, const void* source, size_t size);
extern "C" void* memset(void* target, int value, size_t size);
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

struct ValueBinding {
  text::String name;
  void* target;
};

MemberPosition FindMember(ObjectMembers* begin, size_t begin_index,
  ObjectMembers* end, size_t end_index, const NameView* name);
void GrowNodeStack(NodeStack* stack);
void ReadIntegerValue(SettingsReader* reader, ValueBinding* binding);
void ReadOptionalBoolean(SettingsReader* reader, ValueBinding* binding);
void ReadOptionalFloat(SettingsReader* reader, ValueBinding* binding);
void ReadColorValue(SettingsReader* reader, ValueBinding* binding);
extern const uint32_t g_member_block_offsets[];

namespace {

void Free(void* pointer) {
  if (pointer != nullptr) {
    memory::g_heap_manager->GetAllocator(0).Free(pointer);
  }
}

class Name {
public:
  text::String value;

  explicit Name(const text::String& source) {
    if ((source.words[0] & 1) != 0) {
      value.CopyTerminated(reinterpret_cast<const char*>(source.words[2]),
        source.words[1]);
    }
    else {
      value = source;
    }
  }

  ~Name() {
    if ((value.words[0] & 1) != 0) {
      Free(reinterpret_cast<void*>(value.words[2]));
    }
  }

  size_t Size() const {
    return (value.words[0] & 1) != 0
      ? value.words[1] : (value.words[0] & 255) >> 1;
  }

  const char* Data() const {
    return (value.words[0] & 1) != 0
      ? reinterpret_cast<const char*>(value.words[2])
      : reinterpret_cast<const char*>(&value) + 1;
  }
};

SettingsNode* Top(const NodeStack& stack) {
  const size_t index = stack.begin_index + stack.size - 1;
  return stack.map_begin[index >> 9][index & 511];
}

uint8_t Tag(SettingsNode* node) {
  return *reinterpret_cast<uint8_t*>(node) & 127;
}

ObjectMembers* Storage(SettingsNode* node) {
  ObjectMembers* result;
  memcpy(&result, reinterpret_cast<unsigned char*>(node) + 1, 8);
  return result;
}

bool Lookup(SettingsNode* node, const char* name, MemberPosition& result) {
  if (Tag(node) != 8) {
    return false;
  }

  NameView view{name, strlen(name)};
  ObjectMembers* members = Storage(node);
  result = FindMember(members, 0, members, members->size, &view);
  return result.index != members->size;
}

unsigned char* Element(ObjectMembers* members, size_t index, size_t size) {
  if (index < members->inline_count) {
    return members->inline_members + index * size;
  }

  const uint32_t relative = index - members->inline_count;
  const uint32_t level = 28 - __builtin_clz(relative + 16);
  return members->blocks[level]
    + uint32_t(relative - g_member_block_offsets[level]) * size;
}

size_t Capacity(const NodeStack& stack) {
  return stack.map_begin == stack.map_end
    ? 0 : static_cast<size_t>(stack.map_end - stack.map_begin) * 512 - 1;
}

void Push(NodeStack& stack, SettingsNode* node) {
  if (Capacity(stack) == stack.begin_index + stack.size) {
    GrowNodeStack(&stack);
  }

  const size_t index = stack.begin_index + stack.size;
  stack.map_begin[index >> 9][index & 511] = node;
  ++stack.size;
}

void Pop(NodeStack& stack) {
  --stack.size;

  if (Capacity(stack) - stack.begin_index - stack.size >= 1024) {
    Free(stack.map_end[-1]);
    --stack.map_end;
  }
}

void ReadNamed(SettingsReader* reader, const char* name, void* target,
  void (*read)(SettingsReader*, ValueBinding*)) {
  ValueBinding binding;
  auto* bytes = reinterpret_cast<unsigned char*>(&binding.name);
  const size_t length = strlen(name);
  bytes[0] = length * 2;
  memcpy(bytes + 1, name, length + 1);
  binding.target = target;
  read(reader, &binding);

  if ((binding.name.words[0] & 1) != 0) {
    Free(reinterpret_cast<void*>(binding.name.words[2]));
  }
}

enum class Kind { Integer, Boolean, Float, Color };

template<Kind Type>
struct Traits {
  static constexpr size_t size = Type == Kind::Boolean ? 8
    : Type == Kind::Color ? 48 : 12;
  static constexpr size_t padding = Type == Kind::Boolean ? 2 : 0;
  static constexpr size_t value = Type == Kind::Color ? 16 : 4;
  static constexpr size_t present = Type == Kind::Boolean ? 5
    : Type == Kind::Color ? 32 : 8;
  static constexpr size_t property_value = Type == Kind::Boolean ? 33
    : Type == Kind::Color ? 48 : 36;
  static constexpr size_t property_present = Type == Kind::Boolean ? 34
    : Type == Kind::Color ? 64 : 40;
  static constexpr size_t property_vector = Type == Kind::Boolean ? 40
    : Type == Kind::Color ? 80 : 48;
  static constexpr size_t value_size = Type == Kind::Boolean ? 1
    : Type == Kind::Color ? 16 : 4;

  static void Assign(KeyframeVector* target, const KeyframeVector& source) {
    const size_t count = (reinterpret_cast<uintptr_t>(source.end)
      - reinterpret_cast<uintptr_t>(source.begin)) / size;

    if constexpr (Type == Kind::Integer) {
      AssignIntegerKeyframes(target, source.begin, source.end, count);
    }
    else if constexpr (Type == Kind::Boolean) {
      AssignBooleanKeyframes(target, source.begin, source.end, count);
    }
    else if constexpr (Type == Kind::Float) {
      AssignFloatKeyframes(target, source.begin, source.end, count);
    }
    else {
      AssignColorKeyframes(target, source.begin, source.end, count);
    }
  }
};

template<Kind Type>
void ReadKeyframe(SettingsReader* reader, unsigned char* keyframe) {
  using T = Traits<Type>;
  ReadNamed(reader, "frame", keyframe, ReadIntegerValue);

  if constexpr (Type == Kind::Boolean) {
    ReadNamed(reader, "value", keyframe + T::value, ReadOptionalBoolean);
  }
  else if constexpr (Type == Kind::Float) {
    ReadNamed(reader, "value", keyframe + T::value, ReadOptionalFloat);
  }
  else {
    SettingsNode* root = Top(reader->stack);
    MemberPosition position;

    if (root == nullptr || !Lookup(root, "value", position)) {
      if (keyframe[T::present] == 1) {
        keyframe[T::present] = 0;
      }

      return;
    }

    alignas(16) unsigned char value[T::value_size];

    if constexpr (Type == Kind::Integer) {
      ReadNamed(reader, "value", value, ReadIntegerValue);
    }
    else {
      ReadNamed(reader, "value", value, ReadColorValue);
    }

    memcpy(keyframe + T::value, value, T::value_size);

    if constexpr (Type == Kind::Color) {
      if ((keyframe[T::present] & 1) == 0) {
        keyframe[T::present] = 1;
      }
    }
    else {
      keyframe[T::present] = 1;
    }
  }
}

template<Kind Type>
void ReadArray(SettingsReader* reader, const text::String& name,
  KeyframeVector& result) {
  using T = Traits<Type>;
  SettingsNode* root = Top(reader->stack);

  if (root == nullptr) {
    return;
  }

  SettingsNode* child = nullptr;

  {
    Name lookup(name);
    MemberPosition position;

    if (Lookup(root, lookup.Data(), position)) {
      child = reinterpret_cast<SettingsNode*>(
        Element(position.members, position.index, 32) + 16
      );
    }
  }

  if (child == nullptr || Tag(child) != 7) {
    return;
  }

  ObjectMembers* array = Storage(child);
  const size_t initial_count = array->size;

  if (initial_count != 0) {
    const size_t bytes = initial_count * T::size;
    result.begin = static_cast<unsigned char*>(
      memory::g_heap_manager->Allocate(bytes, 16, 0)
    );
    memset(result.begin, 0, bytes);
    memcpy(result.begin, nullptr, 0);
    result.end = result.begin + bytes;
    result.capacity_end = result.end;
  }

  const size_t count = array->size;

  for (size_t i = 0; i < count; ++i) {
    auto* node = reinterpret_cast<SettingsNode*>(Element(array, i, 16));
    Push(reader->stack, node);

    if (Top(reader->stack) != nullptr) {
      ReadKeyframe<Type>(reader, result.begin + i * T::size);
    }

    Pop(reader->stack);
  }
}

template<Kind Type>
void ReadProperty(SettingsReader* reader, PropertyBinding* binding) {
  using T = Traits<Type>;
  Name outer(binding->name);
  auto* property = reinterpret_cast<unsigned char*>(binding->property);
  KeyframeVector loaded{};
  bool present = false;

  {
    Name middle(outer.value);
    Name inner(middle.value);

    if (Top(reader->stack) != nullptr) {
      size_t length;

      {
        Name measure(inner.value);
        length = measure.Size();
      }

      bool found = true;

      if (length != 0) {
        SettingsNode* root = Top(reader->stack);
        Name lookup(inner.value);
        MemberPosition position;
        found = Lookup(root, lookup.Data(), position);
      }

      if (found) {
        KeyframeVector temporary{};

        {
          Name first(inner.value);
          Name second(first.value);
          ReadArray<Type>(reader, second.value, temporary);
        }

        const size_t bytes = reinterpret_cast<uintptr_t>(temporary.end)
          - reinterpret_cast<uintptr_t>(temporary.begin);

        if (bytes != 0) {
          loaded.begin = static_cast<unsigned char*>(
            memory::g_heap_manager->Allocate(bytes, 16, 0)
          );
          loaded.end = loaded.begin;
          loaded.capacity_end = loaded.begin + bytes;
          memcpy(loaded.begin, temporary.begin, bytes - T::padding);
          loaded.end = loaded.capacity_end;
        }

        present = true;
        Free(temporary.begin);
      }
    }
  }

  if (property[T::property_present] == 1) {
    property[T::property_present] = 0;
  }

  auto* frames = reinterpret_cast<KeyframeVector*>(
    property + T::property_vector
  );

  if (present) {
    T::Assign(frames, loaded);
    const size_t bytes = reinterpret_cast<uintptr_t>(frames->end)
      - reinterpret_cast<uintptr_t>(frames->begin);

    if ((bytes == T::size
        && *reinterpret_cast<int32_t*>(frames->begin) == -1)
      || (frames->begin != frames->end && (property[32] & 1) == 0)) {
      memcpy(property + T::property_value, frames->begin + T::value,
        T::value_size);
      property[T::property_present] = frames->begin[T::present];
      frames->end = frames->begin;
    }
  }
  else {
    frames->end = frames->begin;
  }

  if (present) {
    Free(loaded.begin);
  }
}

}

void ReadIntegerProperty(SettingsReader* reader, PropertyBinding* binding) {
  ReadProperty<Kind::Integer>(reader, binding);
}

void ReadBooleanProperty(SettingsReader* reader, PropertyBinding* binding) {
  ReadProperty<Kind::Boolean>(reader, binding);
}

void ReadFloatProperty(SettingsReader* reader, PropertyBinding* binding) {
  ReadProperty<Kind::Float>(reader, binding);
}

void ReadColorProperty(SettingsReader* reader, PropertyBinding* binding) {
  ReadProperty<Kind::Color>(reader, binding);
}

}
