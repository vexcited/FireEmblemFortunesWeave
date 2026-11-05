#include "nn/gs/gs_sdk_types.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::gsv {

applet::AppletResourceUserId GetGraphicsResourceUserId();

}

namespace nn::gs::sdk {

namespace {

const uint8_t ImageFormatKind_Empty = 1;
const uint8_t ImageFormatKind_Linear = 2;
const int ResultInvalidImageFormat = 0x100f3;
const uint8_t ImageFormatFlags_Default = 0x84;
const uint32_t PixelFormat_Rgba8 = 0xe4030601;
const uint32_t PixelFormat_Bgra8 = 0xc6030601;

NativeImageFormatDescriptor MakeRgb32ImageFormat(int width, int height,
  size_t stride, uint32_t pixelFormat) {
  NativeImageFormatDescriptor descriptor = {};
  descriptor.kind = ImageFormatKind_Linear;
  descriptor.flags = ImageFormatFlags_Default;
  descriptor.widthMinusOne = width - 1;
  descriptor.heightMinusOne = height - 1;
  descriptor.pixelFormat = pixelFormat;
  descriptor.stride = stride;
  return descriptor;
}

}

int CalculateNativeImageLayoutImpl(NativeImageLayoutInfo* pOutInfo,
  const NativeImageFormatDescriptor& descriptor, uint32_t mipLevel);
int CalculateNativeImageArraySizeImpl(size_t* pOutSize,
  size_t* pOutAlignment, NativeImageFormatDescriptor descriptor,
  uint32_t arrayCount);

bool CanBootWithRemoteMemory() {
  return true;
}

NativeImageHandle CalculateNativeImageHandle(NativeImageHandle base,
  uint32_t index) {
  NN_ABORT_UNLESS(base.value + index >= index);
  return {base.value + index};
}

int CalculateNativeImageLayout(NativeImageLayoutInfo* pOutInfo,
  const NativeImageFormatDescriptor& descriptor, uint32_t /* arrayIndex */,
  uint32_t mipLevel) {
  return CalculateNativeImageLayoutImpl(pOutInfo, descriptor, mipLevel);
}

// Empty formats need no memory.
int CalculateNativeImageArraySize(size_t* pOutSize, size_t* pOutAlignment,
  const NativeImageFormatDescriptor& descriptor, uint32_t arrayCount) {
  switch (descriptor.kind) {
    case ImageFormatKind_Linear:
      return CalculateNativeImageArraySizeImpl(pOutSize, pOutAlignment,
        descriptor, arrayCount);
    case ImageFormatKind_Empty:
      *pOutSize = 0;
      *pOutAlignment = 1;
      return 0;
    default:
      return ResultInvalidImageFormat;
  }
}

NativeImageFormatDescriptor MakeRgba32ImageFormat(int width, int height,
  size_t stride) {
  return MakeRgb32ImageFormat(width, height, stride, PixelFormat_Rgba8);
}

NativeImageFormatDescriptor MakeBgra32ImageFormat(int width, int height,
  size_t stride) {
  return MakeRgb32ImageFormat(width, height, stride, PixelFormat_Bgra8);
}

applet::AppletResourceUserId GetAppletResourceUserId() {
  return gsv::GetGraphicsResourceUserId();
}

applet::AppletResourceUserId GetGraphicsResourceUserId() {
  return gsv::GetGraphicsResourceUserId();
}

}

namespace nn::gs::system {

int CalculateNativeImageArraySize(size_t* pOutSize, size_t* pOutAlignment,
  const sdk::NativeImageFormatDescriptor& descriptor, uint32_t arrayCount) {
  switch (descriptor.kind) {
    case sdk::ImageFormatKind_Linear:
      return sdk::CalculateNativeImageArraySizeImpl(pOutSize, pOutAlignment,
        descriptor, arrayCount);
    case sdk::ImageFormatKind_Empty:
      *pOutSize = 0;
      *pOutAlignment = 1;
      return 0;
    default:
      return sdk::ResultInvalidImageFormat;
  }
}

int CalculateNativeImageLayout(sdk::NativeImageLayoutInfo* pOutInfo,
  const sdk::NativeImageFormatDescriptor& descriptor,
  uint32_t /* arrayIndex */, uint32_t mipLevel) {
  return sdk::CalculateNativeImageLayoutImpl(pOutInfo, descriptor, mipLevel);
}

}
