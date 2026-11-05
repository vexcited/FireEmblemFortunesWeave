#include "nn/mii/mii_color.hpp"

namespace nn::mii {

namespace {

constexpr int SpecialMiiKeyCode = static_cast<int>(0xa523b78f);

int g_SpecialMiiKeyCode;

}

const detail::Color3& GetFavoriteColor(FavoriteColor color, GammaType gamma) {
  return detail::GetFavoriteColor(color, gamma);
}

const detail::Color3& GetSkinColor(int color, GammaType gamma) {
  return detail::GetSkinColor(FacelineColor(color), gamma);
}

const detail::Color3& GetCommonColor(CommonColor color, GammaType gamma) {
  return detail::GetCommonColor(color, gamma);
}

const detail::Color3& GetMouthRedColor(CommonColor color, GammaType gamma) {
  return detail::GetMouthRedColor(color, gamma);
}

const detail::Color3& GetMouthGreenColor(CommonColor color,
  GammaType gamma) {
  return detail::GetMouthGreenColor(color, gamma);
}

const detail::Color3& GetMouthBlueColor(GammaType gamma) {
  return detail::GetMouthBlueColor(gamma);
}

const detail::Color3& GetEyeRedColor(GammaType gamma) {
  return detail::GetEyeRedColor(gamma);
}

const detail::Color3& GetEyeGreenColor(GammaType gamma) {
  return detail::GetEyeGreenColor(gamma);
}

const detail::Color3& GetEyeBlueColor(CommonColor color, GammaType gamma) {
  return detail::GetEyeBlueColor(color, gamma);
}

const detail::Color3& GetNoselineColor(GammaType gamma) {
  return detail::GetNoselineColor(gamma);
}

const detail::Color3& GetWrinkleColor(GammaType gamma) {
  return detail::GetWrinkleColor(gamma);
}

const detail::Color3& GetMoleColor(GammaType gamma) {
  return detail::GetMoleColor(gamma);
}

const detail::Color3& GetSkinColor(FacelineColor color, GammaType gamma) {
  return detail::GetSkinColor(color, gamma);
}

void SetSpecialMiiKeyCode(int code) {
  g_SpecialMiiKeyCode = code;
}

int GetSpecialMiiKeyCode() {
  return g_SpecialMiiKeyCode;
}

bool IsEnabledSpecialMii() {
  return g_SpecialMiiKeyCode == SpecialMiiKeyCode;
}

}

namespace nn::mii::detail {

namespace {

constexpr int RotateOffsetBase = 32;

constexpr int EyeRotateTable[60] = {
  3, 4, 4, 4, 3, 4, 4, 4, 3, 4, 4, 4, 4, 3, 3, 4, 4, 4, 3, 3,
  4, 3, 4, 3, 3, 4, 3, 4, 4, 3, 4, 4, 4, 3, 3, 3, 4, 4, 3, 3,
  3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 3, 4, 4, 3,
};

constexpr int EyebrowRotateTable[24] = {
  6, 6, 5, 7, 6, 7, 6, 7, 4, 7, 6, 8, 5, 5, 6, 6, 7, 7, 6, 6, 5, 6, 7, 5,
};

}

int GetEyeRotateOffset(EyeType type) {
  return RotateOffsetBase - EyeRotateTable[type];
}

int GetEyebrowRotateOffset(EyebrowType type) {
  return RotateOffsetBase - EyebrowRotateTable[type];
}

BufferAllocator::BufferAllocator(void* buffer, size_t size)
  : m_Current(reinterpret_cast<uintptr_t>(buffer)),
    m_Start(reinterpret_cast<uintptr_t>(buffer)), m_Size(size) {}

BufferAllocator::~BufferAllocator() {}

void BufferAllocator::Advance(size_t size) {
  m_Current += size;
}

size_t BufferAllocator::GetCurrentSize() const {
  const intptr_t difference = m_Start - m_Current;
  return difference < 0 ? -difference : difference;
}

void BufferAllocator::AlignUp(size_t alignment) {
  m_Current = (m_Current + alignment - 1) & -alignment;
}

void* BufferAllocator::GetCurrentPtr() {
  return reinterpret_cast<void*>(m_Current);
}

const void* BufferAllocator::GetCurrentPtr() const {
  return reinterpret_cast<const void*>(m_Current);
}

size_t BufferAllocator::GetRestSize() const {
  return m_Size - GetCurrentSize();
}

CalculateSizeAndAlignment::CalculateSizeAndAlignment() : m_Size(0) {}

CalculateSizeAndAlignment::~CalculateSizeAndAlignment() {}

void CalculateSizeAndAlignment::AddSize(size_t size) {
  if (size != 0) {
    m_Size += size;
  }
}

// The alignment is reserved as padding instead of aligning the running size.
void CalculateSizeAndAlignment::AddSizeWithAlignment(size_t size,
  size_t alignment) {
  if (size != 0) {
    m_Size += size + alignment - 1;
  }
}

void CalculateSizeAndAlignment::AddSizeWithAlignment(size_t size,
  size_t alignment, int count) {
  m_Size += (size + alignment - 1) * count;
}

size_t CalculateSizeAndAlignment::GetSize() const {
  return m_Size;
}

size_t CalculateSizeAndAlignment::GetAlignment() const {
  return 1;
}

}
