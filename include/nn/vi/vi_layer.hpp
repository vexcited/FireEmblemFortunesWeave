#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/gs/gs_native_window.hpp"
#include "nn/os/mutex.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::vi2 {

struct LayerType {
  alignas(8) uint8_t storage[0x400];
};

struct EndpointType {
  alignas(8) uint8_t storage[0x80];
};

struct DisplayType;

}

namespace nn::vi {

enum HdrColorEncoding : int32_t {};
enum HdrContentGamut : uint8_t {};
enum HdrToneMapping : uint8_t {};

struct FrameInfo;
struct AvailableRefreshRate;

struct DisplayInfo {
  char name[64];
  bool hasLayerLimit;
  int64_t layerCountMax;
  int64_t layerWidthPixelCountMax;
  int64_t layerHeightPixelCountMax;
};

class LayerCreationSettings {
 public:
  LayerCreationSettings();
  LayerCreationSettings(int width, int height);

  int GetWidth() const;
  void SetWidth(int width);
  int GetHeight() const;
  void SetHeight(int height);
  void SetFullscreen(bool isFullscreen);
  bool IsFullscreen() const;
  void SetVisibility(bool isVisible);
  bool IsVisible() const;

 private:
  int32_t m_Width;
  int32_t m_Height;
  uint32_t m_Flags;
};

class Display {
 public:
  Result Open(const char* pName);
  void Close(bool isForced);
  bool IsOpen() const;

 protected:
  virtual void Reserved0();
  virtual void Reserved1();
  virtual void Reserved2();
  virtual void Reserved3();
  virtual void Reserved4();
  virtual void Reserved5();
  virtual void Reserved6();
  virtual Result OnOpen(const char* pName) = 0;
  virtual void OnClose() = 0;

 private:
  os::MutexType m_Mutex;
  int64_t m_OpenCount;
};

namespace detail {

class INativeWindowListener {
 public:
  virtual ~INativeWindowListener() = default;
  virtual void OnDisconnect() = 0;
  virtual void OnPresent() = 0;
  virtual void OnSetNextOriginMode(gs::sdk::OriginMode mode) = 0;
};

// The gs native window lives at the start of this object.
class LayerNativeWindow {
 public:
  explicit LayerNativeWindow(INativeWindowListener* pListener);

  void Initialize(void* pNativeWindowHandle);
  void Finalize();

  bool IsBufferAcquired() const {
    return m_IsBufferAcquired;
  }

  const gs::sdk::INativeWindow* GetNativeWindow() const {
    return reinterpret_cast<const gs::sdk::INativeWindow*>(this);
  }

 private:
  uint8_t m_Reserved[0x10];
  bool m_IsBufferAcquired;
  uint8_t m_Reserved11[0xf];
};

static_assert(sizeof(LayerNativeWindow) == 0x20);

class LayerHistory {
 public:
  void Initialize(vi2::LayerType* pLayer);
  void Finalize();
  void OnPresent();
  Result GetLatestFrameNumber(uint64_t* pOutNumber) const;
  int ListFrameHistory(FrameInfo* pOutInfos, int count) const;

 private:
  uint64_t m_Reserved;
};

class DefaultDisplay;

DefaultDisplay* ToDefaultDisplay(Display* pDisplay);

class DefaultDisplay : public Display {
 public:
  vi2::DisplayType* Get();
  Result DuplicateVsyncEvent(os::SystemEventType* pOutEvent);
  Result QueryAvailableRefreshRates(Span<AvailableRefreshRate> outRates,
    int* pOutCount);

 protected:
  Result OnOpen(const char* pName) override;
  void OnClose() override;
};

}

class Layer {
 public:
  using OriginModeChangedCallback = void (*)(void* pStorage,
    gs::sdk::OriginMode mode);

  class NativeWindowListener : public detail::INativeWindowListener {
   public:
    explicit NativeWindowListener(Layer* pLayer);

    void OnDisconnect() override;
    void OnPresent() override;
    void OnSetNextOriginMode(gs::sdk::OriginMode mode) override;

   private:
    Layer* m_pLayer;
  };

  Layer();

  Result Open(const LayerCreationSettings* pSettings, Display* pDisplay,
    const char* pName);
  void Close(bool isForced);
  bool IsCloseable() const;
  bool IsOpen() const;

  Result SetLayerNextCrop(uint16_t left, uint16_t top, uint16_t right,
    uint16_t bottom);
  Result SetLayerNextExtendedSwapInterval(int interval, int divisor);
  void ClearLayerNextExtendedSwapInterval();
  void SetLayerNativeWindowHdrColorEncoding(HdrColorEncoding encoding);
  void SetLayerNativeWindowHdrLinearColorEncoding(HdrColorEncoding encoding,
    uint16_t unitLuminance);
  Result SetNextHdrExtendedContentLuminanceRangeMetadata(uint16_t minimum,
    uint16_t maximum);
  Result SetNextHdrStandardContentLuminanceRangeMetadata(uint16_t minimum,
    uint16_t maximum);
  void SetNextHdrContentGamutMetadata(HdrContentGamut gamut);
  void ClearNextHdrContentGamutMetadata();
  void SetNextHdrToSdrToneMappingMetadata(HdrToneMapping mapping);
  void ClearNextHdrToSdrToneMappingMetadata();
  Result SetNextHdrAdjustableBezierMetadata(float a, float b, float c);
  void ClearNextHdrAdjustableBezierMetadata();
  Result SetNextUserData(uint64_t userData);
  void* GetNativeWindow();
  bool TryGetOriginMode(gs::sdk::OriginMode* pOutMode) const;

 protected:
  virtual Result OnOpen(Display* pDisplay, const char* pName);
  virtual void OnClose();
  virtual void OnPresent();

  vi2::LayerType m_Layer;

  friend vi2::LayerType* GetInternalLayer(const Layer* pLayer);

 private:
  vi2::EndpointType m_Endpoint;
  NativeWindowListener m_Listener;
  detail::LayerNativeWindow m_NativeWindow;
  OriginModeChangedCallback m_pOriginModeChangedCallback;
  void* m_OriginModeChangedCallbackStorage;
  struct OptionalOriginMode {
    bool hasValue;
    gs::sdk::OriginMode value;
  };

  OptionalOriginMode m_OriginMode;
  bool m_IsOpen;
  bool m_IsCreated;
};

static_assert(sizeof(Layer) == 0x4d8);

class LayerWithHistory : public Layer {
 public:
  Result GetLatestFrameNumber(uint64_t* pOutNumber) const;
  int ListFrameHistory(FrameInfo* pOutInfos, int count) const;

 protected:
  Result OnOpen(Display* pDisplay, const char* pName) override;
  void OnClose() override;
  void OnPresent() override;

 private:
  detail::LayerHistory m_History;
};

vi2::LayerType* GetInternalLayer(const Layer* pLayer);

}
