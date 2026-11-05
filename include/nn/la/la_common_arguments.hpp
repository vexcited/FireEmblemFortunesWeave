#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/result.hpp"

namespace nn::la {

class CommonArgumentsWriter {
public:
  explicit CommonArgumentsWriter(uint32_t version);
  ~CommonArgumentsWriter();

  void SetLaVersion(uint16_t majorVersion, uint16_t minorVersion);
  void SetLaVersion(uint32_t version);
  void SetPlayStartupSound(bool isPlayStartupSound);
  void PushToInChannel(applet::LibraryAppletHandle handle) const;
  size_t WriteToStorage(applet::StorageHandle storage) const;
  size_t GetExportSize() const;
  void Export(void* pBuffer, size_t bufferSize) const;

private:
  uint32_t m_LaVersion;
  uint32_t m_ExpectedThemeColor;
  bool m_IsPlayStartupSound;
  // The launch tick is refreshed every time the arguments are written.
  mutable int64_t m_LaunchTick;
};

static_assert(sizeof(CommonArgumentsWriter) == 24);

Result StartLibraryAppletEasy(applet::AppletId appletId,
  const CommonArgumentsWriter& writer, const void* inData, size_t inDataSize,
  void* outData, size_t outDataSize, size_t* outActualSize,
  bool isExtremity);

}
