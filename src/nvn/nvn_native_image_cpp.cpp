#include <stdint.h>

#include "nvn/nvn_native_image.hpp"

namespace nn::gs {

enum class NativeMemoryHandle : uint32_t {};

}

namespace nvn {

class Device;

enum class Format : int32_t {};
enum class NativeImageMemoryPermission : int32_t {};

// The C++ builders share the layout of their C structures and return
// themselves for chaining.
class NativeImageBuilder {
public:
  NativeImageBuilder& SetDevice(Device* pDevice);
  NativeImageBuilder& SetDefaults();
  NativeImageBuilder& SetMemoryPermission(
    NativeImageMemoryPermission permission);
  NativeImageBuilder& SetFormat(Format format);

private:
  NVNnativeImageBuilder* ToC() {
    return reinterpret_cast<NVNnativeImageBuilder*>(this);
  }

  NVNnativeImageBuilder m_Builder;
};

class ExternalMemoryPoolBuilder {
public:
  ExternalMemoryPoolBuilder& SetDevice(Device* pDevice);
  ExternalMemoryPoolBuilder& SetDefaults();
  ExternalMemoryPoolBuilder& SetNativeMemoryHandle(
    nn::gs::NativeMemoryHandle handle);

private:
  NVNexternalMemoryPoolBuilder* ToC() {
    return reinterpret_cast<NVNexternalMemoryPoolBuilder*>(this);
  }

  NVNexternalMemoryPoolBuilder m_Builder;
};

NativeImageBuilder& NativeImageBuilder::SetDevice(Device* pDevice) {
  nvnNativeImageBuilderSetDevice(ToC(),
    reinterpret_cast<NVNdevice*>(pDevice));
  return *this;
}

NativeImageBuilder& NativeImageBuilder::SetDefaults() {
  nvnNativeImageBuilderSetDefaults(ToC());
  return *this;
}

NativeImageBuilder& NativeImageBuilder::SetMemoryPermission(
  NativeImageMemoryPermission permission) {
  nvnNativeImageBuilderSetMemoryPermission(ToC(),
    static_cast<NVNnativeImageMemoryPermission>(permission));
  return *this;
}

NativeImageBuilder& NativeImageBuilder::SetFormat(Format format) {
  nvnNativeImageBuilderSetFormat(ToC(), static_cast<NVNformat>(format));
  return *this;
}

ExternalMemoryPoolBuilder& ExternalMemoryPoolBuilder::SetDevice(
  Device* pDevice) {
  nvnExternalMemoryPoolBuilderSetDevice(ToC(),
    reinterpret_cast<NVNdevice*>(pDevice));
  return *this;
}

ExternalMemoryPoolBuilder& ExternalMemoryPoolBuilder::SetDefaults() {
  nvnExternalMemoryPoolBuilderSetDefaults(ToC());
  return *this;
}

ExternalMemoryPoolBuilder& ExternalMemoryPoolBuilder::SetNativeMemoryHandle(
  nn::gs::NativeMemoryHandle handle) {
  nvnExternalMemoryPoolBuilderSetNativeMemoryHandle(ToC(),
    static_cast<uint32_t>(handle));
  return *this;
}

}
