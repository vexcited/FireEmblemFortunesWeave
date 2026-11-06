#pragma once

namespace nn::ui2d::detail {

// Each class keeps one, linked to the type info of its base.
class RuntimeTypeInfo {
public:
  explicit RuntimeTypeInfo(const RuntimeTypeInfo* parent)
    : parent_(parent) {}

private:
  const RuntimeTypeInfo* parent_;
};

}

// Only the type info members of the classes are declared here. The static
// getter is inline and the virtual one returns it.
#define NN_UI2D_RUNTIME_TYPE_INFO(T, Base) \
  class T { \
  public: \
    static const ::nn::ui2d::detail::RuntimeTypeInfo* \
    GetRuntimeTypeInfoStatic() { \
      static const ::nn::ui2d::detail::RuntimeTypeInfo s_TypeInfo( \
        Base::GetRuntimeTypeInfoStatic()); \
      return &s_TypeInfo; \
    } \
  \
    const ::nn::ui2d::detail::RuntimeTypeInfo* GetRuntimeTypeInfo() const; \
  };

// Root classes of the type info chains.
#define NN_UI2D_RUNTIME_TYPE_INFO_BASE(T) \
  class T { \
  public: \
    static const ::nn::ui2d::detail::RuntimeTypeInfo* \
    GetRuntimeTypeInfoStatic() { \
      static const ::nn::ui2d::detail::RuntimeTypeInfo s_TypeInfo(nullptr); \
      return &s_TypeInfo; \
    } \
  \
    const ::nn::ui2d::detail::RuntimeTypeInfo* GetRuntimeTypeInfo() const; \
  };

// Declares a class whose getters are defined in another file.
#define NN_UI2D_RUNTIME_TYPE_INFO_ROOT(T) \
  class T { \
  public: \
    static const ::nn::ui2d::detail::RuntimeTypeInfo* \
    GetRuntimeTypeInfoStatic(); \
  };

#define NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(T) \
  const ::nn::ui2d::detail::RuntimeTypeInfo* T::GetRuntimeTypeInfo() const { \
    return GetRuntimeTypeInfoStatic(); \
  }
