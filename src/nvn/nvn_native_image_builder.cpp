#include "nvn/nvn_native_image.hpp"

void nvnNativeImageBuilderSetDevice(NVNnativeImageBuilder* builder,
  NVNdevice* device) {
  builder->device = device;
}

void nvnNativeImageBuilderSetDefaults(NVNnativeImageBuilder* builder) {
  builder->handle = {};
  builder->permission = {};
  builder->format = {};
}

void nvnNativeImageBuilderSetNativeImageHandle(NVNnativeImageBuilder* builder,
  nn::gs::NativeImageHandle handle) {
  builder->handle = handle;
}

void nvnNativeImageBuilderSetMemoryPermission(NVNnativeImageBuilder* builder,
  NVNnativeImageMemoryPermission permission) {
  builder->permission = permission;
}

void nvnNativeImageBuilderSetFormat(NVNnativeImageBuilder* builder,
  NVNformat format) {
  builder->format = format;
}

NVNdevice* nvnNativeImageBuilderGetDevice(
  const NVNnativeImageBuilder* builder) {
  return builder->device;
}

nn::gs::NativeImageHandle nvnNativeImageBuilderGetNativeImageHandle(
  const NVNnativeImageBuilder* builder) {
  return builder->handle;
}

NVNnativeImageMemoryPermission nvnNativeImageBuilderGetMemoryPermission(
  const NVNnativeImageBuilder* builder) {
  return builder->permission;
}

NVNformat nvnNativeImageBuilderGetFormat(const NVNnativeImageBuilder* builder) {
  return builder->format;
}

extern "C" {

void nvnExternalMemoryPoolBuilderSetDefaults(
  NVNexternalMemoryPoolBuilder* builder) {
  builder->nativeMemoryHandle = 0;
}

void nvnExternalMemoryPoolBuilderSetDevice(
  NVNexternalMemoryPoolBuilder* builder, NVNdevice* device) {
  builder->device = device;
}

void nvnExternalMemoryPoolBuilderSetNativeMemoryHandle(
  NVNexternalMemoryPoolBuilder* builder, uint32_t handle) {
  builder->nativeMemoryHandle = handle;
}

NVNdevice* nvnExternalMemoryPoolBuilderGetDevice(
  const NVNexternalMemoryPoolBuilder* builder) {
  return builder->device;
}

uint32_t nvnExternalMemoryPoolBuilderGetNativeMemoryHandle(
  const NVNexternalMemoryPoolBuilder* builder) {
  return builder->nativeMemoryHandle;
}

}
