#pragma once

#include <cstddef>
#include <cstdint>
#include <type_traits>

namespace nn::util {

struct Float2 {
  float x;
  float y;
};

struct Float3 {
  float x;
  float y;
  float z;
};

}

namespace nn::ui2d {

struct Size {
  float width;
  float height;
};

class ControlSrc;

namespace detail {

class RuntimeTypeInfo {
public:
  explicit RuntimeTypeInfo(const RuntimeTypeInfo* parent)
    : parent_(parent) {}

  bool IsDerivedFrom(const RuntimeTypeInfo* type) const {
    for (const RuntimeTypeInfo* self = this; self != nullptr;
      self = self->parent_) {
      if (self == type) {
        return true;
      }
    }
    return false;
  }

private:
  const RuntimeTypeInfo* parent_;
};

}

template <class To, class From>
To DynamicCast(From* object) {
  using Target = std::remove_pointer_t<To>;
  const detail::RuntimeTypeInfo* type = Target::GetRuntimeTypeInfoStatic();
  if (object != nullptr &&
    object->GetRuntimeTypeInfo()->IsDerivedFrom(type)) {
    return static_cast<To>(object);
  }
  return nullptr;
}

class Pane {
public:
  static const detail::RuntimeTypeInfo* GetRuntimeTypeInfoStatic();

  virtual ~Pane();
  virtual const detail::RuntimeTypeInfo* GetRuntimeTypeInfo() const;

  Pane* GetParent() const {
    return parent_;
  }

  const char* GetName() const {
    return name_;
  }

  const util::Float3& GetTranslate() const {
    return translate_;
  }

  void SetTranslate(const util::Float3& value) {
    translate_ = value;
    SetGlobalMatrixDirty();
  }

  const util::Float3& GetRotate() const {
    return rotate_;
  }

  void SetRotate(const util::Float3& value) {
    rotate_ = value;
    SetGlobalMatrixDirty();
  }

  const util::Float2& GetScale() const {
    return scale_;
  }

  void SetScale(const util::Float2& value) {
    scale_ = value;
    SetGlobalMatrixDirty();
  }

  const Size& GetSize() const {
    return size_;
  }

  void SetSize(const Size& value) {
    size_ = value;
    SetGlobalMatrixDirty();
  }

  bool IsVisible() const {
    return (flag_ & FlagVisible) != 0;
  }

  void SetVisible(bool visible) {
    flag_ = static_cast<uint8_t>((flag_ & ~FlagVisible) | visible);
  }

  uint8_t GetAlpha() const {
    return alpha_;
  }

  void SetAlpha(uint8_t alpha) {
    alpha_ = alpha;
  }

private:
  enum : uint8_t {
    FlagVisible = 1 << 0,
    FlagGlobalMatrixDirty = 1 << 4,
  };

  void SetGlobalMatrixDirty() {
    flag_ |= FlagGlobalMatrixDirty;
  }

  void* link_[2];
  Pane* parent_;
  void* children_[2];
  util::Float3 translate_;
  util::Float3 rotate_;
  util::Float2 scale_;
  Size size_;
  uint8_t flag_;
  uint8_t alpha_;
  uint8_t global_alpha_;
  uint8_t base_position_;
  uint8_t flag_ex_;
  uint8_t unknown_5d_[0x53];
  char name_[0x19];
};

class Parts : public Pane {
public:
  static const detail::RuntimeTypeInfo* GetRuntimeTypeInfoStatic() {
    static const detail::RuntimeTypeInfo s_TypeInfo(
      Pane::GetRuntimeTypeInfoStatic());
    return &s_TypeInfo;
  }
};

class Layout {
public:
  static void* AllocateMemory(size_t size, size_t alignment);
  static void FreeMemory(void* memory);

  virtual ~Layout();

  Pane* GetRootPane() const {
    return root_pane_;
  }

  const char* GetName() const {
    return name_;
  }

private:
  void* animation_transforms_[2];
  Pane* root_pane_;
  void* group_container_;
  Size layout_size_;
  const char* name_;
};

}
