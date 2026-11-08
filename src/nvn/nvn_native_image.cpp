#include <stdint.h>

#include "nvn/nvn_native_image.hpp"

namespace nvn {

class Device;
class Sync;
class Texture;

// The C++ objects share the layout of the C structures they wrap.
class NativeImageBuilder {
public:
  Device* GetDevice() const;
  nn::gs::NativeImageHandle GetNativeImageHandle() const;
  NVNnativeImageMemoryPermission GetMemoryPermission() const;
  NVNformat GetFormat() const;

private:
  const NVNnativeImageBuilder* ToC() const {
    return reinterpret_cast<const NVNnativeImageBuilder*>(this);
  }
};

Device* NativeImageBuilder::GetDevice() const {
  return reinterpret_cast<Device*>(nvnNativeImageBuilderGetDevice(ToC()));
}

nn::gs::NativeImageHandle NativeImageBuilder::GetNativeImageHandle() const {
  return nvnNativeImageBuilderGetNativeImageHandle(ToC());
}

NVNnativeImageMemoryPermission NativeImageBuilder::GetMemoryPermission()
  const {
  return nvnNativeImageBuilderGetMemoryPermission(ToC());
}

NVNformat NativeImageBuilder::GetFormat() const {
  return nvnNativeImageBuilderGetFormat(ToC());
}

class NativeImage {
public:
  bool Initialize(const NativeImageBuilder* builder);
  void Finalize();
  bool InitializeTexture(Texture* texture);
};

bool NativeImage::Initialize(const NativeImageBuilder* builder) {
  return nvnNativeImageInitialize(reinterpret_cast<NVNnativeImage*>(this),
    reinterpret_cast<const NVNnativeImageBuilder*>(builder));
}

void NativeImage::Finalize() {
  nvnNativeImageFinalize(reinterpret_cast<NVNnativeImage*>(this));
}

bool NativeImage::InitializeTexture(Texture* texture) {
  return nvnTextureInitializeFromNativeImage(
    reinterpret_cast<NVNtexture*>(texture),
    reinterpret_cast<NVNnativeImage*>(this));
}

bool InitializeSyncFromNativeSyncHandle(Sync* sync, Device* device,
  nn::gs::NativeSyncHandle handle) {
  return nvnSyncInitializeFromNativeSyncHandle(
    reinterpret_cast<NVNsync*>(sync), reinterpret_cast<NVNdevice*>(device),
    handle);
}

class ExternalMemoryPoolBuilder {
public:
  Device* GetDevice() const;
  uint32_t GetNativeMemoryHandle() const;

private:
  const NVNexternalMemoryPoolBuilder* ToC() const {
    return reinterpret_cast<const NVNexternalMemoryPoolBuilder*>(this);
  }
};

Device* ExternalMemoryPoolBuilder::GetDevice() const {
  return reinterpret_cast<Device*>(
    nvnExternalMemoryPoolBuilderGetDevice(ToC()));
}

uint32_t ExternalMemoryPoolBuilder::GetNativeMemoryHandle() const {
  return nvnExternalMemoryPoolBuilderGetNativeMemoryHandle(ToC());
}

}
