#include <stdint.h>

#include "nn/gs/gs_native_window.hpp"

struct NVNdevice;
struct NVNnativeImage;
struct NVNnativeImageBuilder;
struct NVNsync;
struct NVNtexture;
struct NVNexternalMemoryPoolBuilder;

NVNdevice* nvnNativeImageBuilderGetDevice(
  const NVNnativeImageBuilder* builder);
uint64_t nvnNativeImageBuilderGetNativeImageHandle(
  const NVNnativeImageBuilder* builder);
int nvnNativeImageBuilderGetMemoryPermission(
  const NVNnativeImageBuilder* builder);
int nvnNativeImageBuilderGetFormat(const NVNnativeImageBuilder* builder);
bool nvnNativeImageInitialize(NVNnativeImage* image,
  const NVNnativeImageBuilder* builder);
void nvnNativeImageFinalize(NVNnativeImage* image);
bool nvnTextureInitializeFromNativeImage(NVNtexture* texture,
  NVNnativeImage* image);
bool nvnSyncInitializeFromNativeSyncHandle(NVNsync* sync, NVNdevice* device,
  nn::gs::NativeSyncHandle handle);

extern "C" NVNdevice* nvnExternalMemoryPoolBuilderGetDevice(
  const NVNexternalMemoryPoolBuilder* builder);
extern "C" uint64_t nvnExternalMemoryPoolBuilderGetNativeMemoryHandle(
  const NVNexternalMemoryPoolBuilder* builder);

namespace nvn {

class Device;
class Sync;
class Texture;

// The C++ objects share the layout of the C structures they wrap.
class NativeImageBuilder {
public:
  Device* GetDevice() const;
  uint64_t GetNativeImageHandle() const;
  int GetMemoryPermission() const;
  int GetFormat() const;

private:
  const NVNnativeImageBuilder* ToC() const {
    return reinterpret_cast<const NVNnativeImageBuilder*>(this);
  }
};

Device* NativeImageBuilder::GetDevice() const {
  return reinterpret_cast<Device*>(nvnNativeImageBuilderGetDevice(ToC()));
}

uint64_t NativeImageBuilder::GetNativeImageHandle() const {
  return nvnNativeImageBuilderGetNativeImageHandle(ToC());
}

int NativeImageBuilder::GetMemoryPermission() const {
  return nvnNativeImageBuilderGetMemoryPermission(ToC());
}

int NativeImageBuilder::GetFormat() const {
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
  uint64_t GetNativeMemoryHandle() const;

private:
  const NVNexternalMemoryPoolBuilder* ToC() const {
    return reinterpret_cast<const NVNexternalMemoryPoolBuilder*>(this);
  }
};

Device* ExternalMemoryPoolBuilder::GetDevice() const {
  return reinterpret_cast<Device*>(
    nvnExternalMemoryPoolBuilderGetDevice(ToC()));
}

uint64_t ExternalMemoryPoolBuilder::GetNativeMemoryHandle() const {
  return nvnExternalMemoryPoolBuilderGetNativeMemoryHandle(ToC());
}

}
