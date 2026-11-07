#include "nn/vi/vi_layer.hpp"

namespace nn::vi {

namespace {

const uint32_t FlagFullscreen = 1 << 0;
const uint32_t FlagVisible = 1 << 1;

}

LayerCreationSettings::LayerCreationSettings()
  : m_Width(1920), m_Height(1080), m_Flags(FlagVisible) {}

LayerCreationSettings::LayerCreationSettings(int width, int height)
  : m_Width(width), m_Height(height), m_Flags(FlagVisible) {}

int LayerCreationSettings::GetWidth() const {
  return m_Width;
}

void LayerCreationSettings::SetWidth(int width) {
  m_Width = width;
}

int LayerCreationSettings::GetHeight() const {
  return m_Height;
}

void LayerCreationSettings::SetHeight(int height) {
  m_Height = height;
}

void LayerCreationSettings::SetFullscreen(bool isFullscreen) {
  m_Flags = (m_Flags & ~FlagFullscreen) | (isFullscreen ? FlagFullscreen : 0);
}

bool LayerCreationSettings::IsFullscreen() const {
  return (m_Flags & FlagFullscreen) != 0;
}

void LayerCreationSettings::SetVisibility(bool isVisible) {
  m_Flags = (m_Flags & ~FlagVisible) | (isVisible ? FlagVisible : 0);
}

bool LayerCreationSettings::IsVisible() const {
  return (m_Flags & FlagVisible) != 0;
}

}
