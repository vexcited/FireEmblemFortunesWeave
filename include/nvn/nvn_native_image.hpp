#pragma once

#include <stdint.h>

#include "nn/gs/gs_native_window.hpp"

struct NVNdevice;
struct NVNnativeImage;
struct NVNsync;
struct NVNtexture;

enum NVNnativeImageMemoryPermission : int32_t {};
enum NVNformat : int32_t {};

struct NVNnativeImageBuilder {
  NVNdevice* device;
  nn::gs::NativeImageHandle handle;
  NVNnativeImageMemoryPermission permission;
  NVNformat format;
};

struct NVNexternalMemoryPoolBuilder {
  NVNdevice* device;
  uint32_t nativeMemoryHandle;
};

void nvnNativeImageBuilderSetDevice(NVNnativeImageBuilder* builder,
  NVNdevice* device);
void nvnNativeImageBuilderSetDefaults(NVNnativeImageBuilder* builder);
void nvnNativeImageBuilderSetNativeImageHandle(NVNnativeImageBuilder* builder,
  nn::gs::NativeImageHandle handle);
void nvnNativeImageBuilderSetMemoryPermission(NVNnativeImageBuilder* builder,
  NVNnativeImageMemoryPermission permission);
void nvnNativeImageBuilderSetFormat(NVNnativeImageBuilder* builder,
  NVNformat format);
NVNdevice* nvnNativeImageBuilderGetDevice(
  const NVNnativeImageBuilder* builder);
nn::gs::NativeImageHandle nvnNativeImageBuilderGetNativeImageHandle(
  const NVNnativeImageBuilder* builder);
NVNnativeImageMemoryPermission nvnNativeImageBuilderGetMemoryPermission(
  const NVNnativeImageBuilder* builder);
NVNformat nvnNativeImageBuilderGetFormat(const NVNnativeImageBuilder* builder);
bool nvnNativeImageInitialize(NVNnativeImage* image,
  const NVNnativeImageBuilder* builder);
void nvnNativeImageFinalize(NVNnativeImage* image);
bool nvnTextureInitializeFromNativeImage(NVNtexture* texture,
  NVNnativeImage* image);
bool nvnSyncInitializeFromNativeSyncHandle(NVNsync* sync, NVNdevice* device,
  nn::gs::NativeSyncHandle handle);

extern "C" {

void nvnExternalMemoryPoolBuilderSetDefaults(
  NVNexternalMemoryPoolBuilder* builder);
void nvnExternalMemoryPoolBuilderSetDevice(
  NVNexternalMemoryPoolBuilder* builder, NVNdevice* device);
void nvnExternalMemoryPoolBuilderSetNativeMemoryHandle(
  NVNexternalMemoryPoolBuilder* builder, uint32_t handle);
NVNdevice* nvnExternalMemoryPoolBuilderGetDevice(
  const NVNexternalMemoryPoolBuilder* builder);
uint32_t nvnExternalMemoryPoolBuilderGetNativeMemoryHandle(
  const NVNexternalMemoryPoolBuilder* builder);

}
