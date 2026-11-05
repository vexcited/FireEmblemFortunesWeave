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

class Material {
public:
  void SetColor(uint32_t color) {
    color_ = color;
  }

private:
  uint8_t unknown_00_[0xc];
  uint32_t color_;
};

class Pane {
public:
  static const detail::RuntimeTypeInfo* GetRuntimeTypeInfoStatic();

  virtual ~Pane();
  virtual const detail::RuntimeTypeInfo* GetRuntimeTypeInfo() const;
  virtual void Unknown18();
  virtual void Unknown20();
  virtual void Unknown28();
  virtual void Unknown30();
  virtual void Unknown38();
  virtual void Unknown40();
  virtual void Unknown48();
  virtual uint8_t GetMaterialNum() const;
  virtual Material* GetMaterial(int index) const;
  virtual void Unknown60();
  virtual void Unknown68();
  virtual void Unknown70();
  virtual Pane* FindPaneByName(const char* name, bool recursive);

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

  Material* GetMaterial() const;

  bool IsGlobalMatrixDirty() const {
    return (flag_ & FlagGlobalMatrixDirty) != 0;
  }

  void SetVisible(bool visible) {
    flag_ = static_cast<uint8_t>((flag_ & ~FlagVisible) | visible);
  }

  uint8_t GetAlpha() const {
    return alpha_;
  }

  // Children are kept in an intrusive list linked through link_, which
  // directly follows the virtual table pointer.
  template<typename Function>
  void ForEachChild(Function function) const {
    using Node = void* const*;
    for (Node node = static_cast<Node>(children_[1]); node != children_;
      node = static_cast<Node>(node[1])) {
      function(reinterpret_cast<Pane*>(const_cast<void**>(node) - 1));
    }
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

class Picture : public Pane {
public:
  ~Picture() override;

  void SetColor(uint32_t color);
};

class Alignment : public Pane {
public:
  ~Alignment() override;

  void RequestAlignment();
};

class Layout;

class Parts : public Pane {
public:
  Layout* GetLayout() const {
    return layout_;
  }

  static const detail::RuntimeTypeInfo* GetRuntimeTypeInfoStatic() {
    static const detail::RuntimeTypeInfo s_TypeInfo(
      Pane::GetRuntimeTypeInfoStatic());
    return &s_TypeInfo;
  }

private:
  uint8_t unknown_c9_[0x1f];
  Layout* layout_;
};

class AnimTransform;

class Layout {
public:
  static void* AllocateMemory(size_t size, size_t alignment);
  static void FreeMemory(void* memory);

  virtual ~Layout();
  virtual void Unknown10();
  virtual void DeleteAnimTransform(AnimTransform* transform);
  virtual void Unknown20();
  virtual void Unknown28();
  virtual void Unknown30();
  virtual void Unknown38();
  virtual void Unknown40();
  virtual void UnbindAllAnimation();

  Pane* GetRootPane() const {
    return root_pane_;
  }

  const char* GetName() const {
    return name_;
  }

  Parts* FindPartsPaneByName(const char* name);

private:
  void* animation_transforms_[2];
  Pane* root_pane_;
  void* group_container_;
  Size layout_size_;
  const char* name_;
};

}
