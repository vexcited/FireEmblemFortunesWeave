#include <stdint.h>

struct NVNdisplayPluginWindowV2 {
  uint8_t reserved_00[0x8];
  int32_t cropX;
  int32_t cropY;
  int32_t cropWidth;
  int32_t cropHeight;
};

namespace nn::gs::sdk {

void GetNativeWindowBufferSize(uint16_t* pOutWidth, uint16_t* pOutHeight,
  void* pWindow);
bool TryGetNativeWindowNextCrop(uint16_t* pOutX, uint16_t* pOutY,
  uint16_t* pOutWidth, uint16_t* pOutHeight, void* pWindow);
void SetNativeWindowNextSwapInterval(void* pWindow, int interval);
void SetNativeWindowNextCrop(void* pWindow, int x, int y, int width,
  int height);

}

namespace nn::wsi {

namespace detail {

struct HdrDisplayMetadata;
struct HdrContentMetadata;

}

namespace nv {

struct TexturePreferenceInfoV2;

}

namespace ounce::native {

class NativeWindow {
public:
  static uint64_t CalculateRequirement(
    const nv::TexturePreferenceInfoV2& preference);

  void UpdatePresentInterval(int interval);
  void UpdateCrop(const NVNdisplayPluginWindowV2* pWindow);
  int GetIndex() const;

private:
  void* m_pNativeWindow;
  uint8_t m_Reserved08[0x110];
  int32_t m_Index;
};

void NativeWindow::UpdatePresentInterval(int interval) {
  gs::sdk::SetNativeWindowNextSwapInterval(m_pNativeWindow, interval);
}

void NativeWindow::UpdateCrop(const NVNdisplayPluginWindowV2* pWindow) {
  gs::sdk::SetNativeWindowNextCrop(m_pNativeWindow, pWindow->cropX,
    pWindow->cropY, pWindow->cropWidth, pWindow->cropHeight);
}

int NativeWindow::GetIndex() const {
  return m_Index;
}

}

namespace nv {

uint64_t CalculateTextureRequirement(
  const TexturePreferenceInfoV2& preference) {
  return ounce::native::NativeWindow::CalculateRequirement(preference);
}

void OnDisplayMetadataUpdate(void** pWindow,
  const detail::HdrDisplayMetadata& metadata) {}

void OnContentMetadataUpdate(void** pWindow,
  const detail::HdrContentMetadata& metadata) {}

}

namespace gl {

void GetLayerBufferSize(uint16_t* pOutWidth, uint16_t* pOutHeight,
  void* pWindow) {
  gs::sdk::GetNativeWindowBufferSize(pOutWidth, pOutHeight, pWindow);
}

bool GetLayerNextCrop(uint16_t* pOutX, uint16_t* pOutY, uint16_t* pOutWidth,
  uint16_t* pOutHeight, void* pWindow) {
  return gs::sdk::TryGetNativeWindowNextCrop(pOutX, pOutY, pOutWidth,
    pOutHeight, pWindow);
}

void SetNextHdrDisplayMetadata(void* pWindow,
  const detail::HdrDisplayMetadata& metadata) {}

void SetNextHdrContentMetadata(void* pWindow,
  const detail::HdrContentMetadata& metadata) {}

}

namespace vulkan {

struct HdrDisplayMetadata;
struct HdrContentMetadata;

void GetLayerBufferSize(uint16_t* pOutWidth, uint16_t* pOutHeight,
  void* pWindow) {
  gs::sdk::GetNativeWindowBufferSize(pOutWidth, pOutHeight, pWindow);
}

bool GetLayerNextCrop(uint16_t* pOutX, uint16_t* pOutY, uint16_t* pOutWidth,
  uint16_t* pOutHeight, void* pWindow) {
  return gs::sdk::TryGetNativeWindowNextCrop(pOutX, pOutY, pOutWidth,
    pOutHeight, pWindow);
}

void SetNextHdrDisplayMetadata(void* pWindow,
  const detail::HdrDisplayMetadata& metadata) {}

void SetNextHdrContentMetadata(void* pWindow,
  const detail::HdrContentMetadata& metadata) {}

void SetNextHdrDisplayMetadata(void* pWindow,
  const HdrDisplayMetadata& metadata) {}

void SetNextHdrContentMetadata(void* pWindow,
  const HdrContentMetadata& metadata) {}

}

}
