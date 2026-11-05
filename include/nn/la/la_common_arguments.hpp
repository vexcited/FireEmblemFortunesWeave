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

  void PushToInChannel(applet::LibraryAppletHandle handle) const;

private:
  char m_Storage[24];
};

Result StartLibraryAppletEasy(applet::AppletId appletId,
  const CommonArgumentsWriter& writer, const void* inData, size_t inDataSize,
  void* outData, size_t outDataSize, size_t* outActualSize,
  bool isExtremity);

}
