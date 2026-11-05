#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/gs/gs_native_window.hpp"

namespace nn::gs::sdk {

struct NativeImageFormatDescriptor {
  uint8_t kind;
  uint8_t flags;
  uint16_t reserved0;
  uint16_t widthMinusOne;
  uint16_t heightMinusOne;
  uint64_t reserved1;
  uint32_t pixelFormat;
  uint32_t reserved2;
  uint32_t reserved3;
  uint32_t stride;
  uint64_t reserved4[4];
};

struct NativeImageLayoutInfo;

bool CanBootWithRemoteMemory();

NativeImageHandle CalculateNativeImageHandle(NativeImageHandle base,
  uint32_t index);

int CalculateNativeImageLayout(NativeImageLayoutInfo* pOutInfo,
  const NativeImageFormatDescriptor& descriptor, uint32_t arrayIndex,
  uint32_t mipLevel);

NativeImageFormatDescriptor MakeRgba32ImageFormat(int width, int height,
  size_t stride);
NativeImageFormatDescriptor MakeBgra32ImageFormat(int width, int height,
  size_t stride);

applet::AppletResourceUserId GetAppletResourceUserId();
applet::AppletResourceUserId GetGraphicsResourceUserId();

}
