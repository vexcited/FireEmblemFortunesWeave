#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::vi {

struct Layer;
struct Display;
struct LayerCreationSettings;

enum OriginMode : int32_t {};

enum BufferContentBits : int32_t {
  BufferContentBits_Photographed = 1,
};

Result SetRecordingLayerEnabled(bool isEnabled);
Result CreateRecordingLayer(Layer** pOutLayer, Display* display,
  const LayerCreationSettings* settings);
void InitializeCopyrightFramebuffer(void* buffer, size_t size);
void SetCopyrightCompositionEnabled(bool isEnabled);
void WriteToCopyrightFramebuffer(const void* image, size_t size, int x, int y,
  int width, int height, OriginMode originMode);
void FinalizeCopyrightFramebuffer();

namespace sdk {

void ChangeBufferContent(BufferContentBits bits, bool isEnabled);

}
}
