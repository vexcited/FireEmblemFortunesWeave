#include "nn/gs/gs_sdk_types.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::gsv {

applet::AppletResourceUserId GetGraphicsResourceUserId();

}

namespace nn::gs::sdk {

namespace {

const uint8_t ImageFormatKind_Linear = 2;
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
