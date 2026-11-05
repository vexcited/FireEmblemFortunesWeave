#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::mii {

enum CommonColor : int;
enum FacelineColor : int;
enum FavoriteColor : int;
enum GammaType : int;
enum EyeType : int;
enum EyebrowType : int;
enum Gender : int;

namespace detail {

struct Color3 {
  float r;
  float g;
  float b;
};

// Each color is stored once per gamma type, linear first.
struct GammaColor {
  Color3 colors[2];

  const Color3& Get(GammaType gamma) const {
    return colors[gamma != 0];
  }
};

struct OrderedGammaColor {
  GammaColor color;
  int32_t reserved;
  int32_t orderIndex;
};

static_assert(sizeof(OrderedGammaColor) == 32);

extern const OrderedGammaColor CommonColorTable[100];
extern const uint8_t CommonColorOrderIndexToColorIndex[100];
extern const GammaColor UpperLipColorTable[100];
extern const GammaColor FavoriteColorTable[12];
extern const OrderedGammaColor FacelineColorTable[10];
extern const uint8_t FacelineColorOrderIndexToColorIndex[10];
extern const GammaColor TeethColor;
extern const GammaColor EyeShadowColor;
extern const GammaColor EyeWhiteColor;
extern const GammaColor NoselineColor;
extern const GammaColor WrinkleColor;
extern const GammaColor MoleColor;
extern const GammaColor PantsNormalColor;
extern const GammaColor PantsSpecialColor;

const Color3& GetFavoriteColor(FavoriteColor color, GammaType gamma);
const Color3& GetCommonColor(CommonColor color, GammaType gamma);
int GetOrderIndexByCommonColor(CommonColor color);
CommonColor GetCommonColorByOrderIndex(int index);
const Color3& GetMouthRedColor(CommonColor color, GammaType gamma);
const Color3& GetMouthGreenColor(CommonColor color, GammaType gamma);
const Color3& GetMouthBlueColor(GammaType gamma);
const Color3& GetEyeRedColor(GammaType gamma);
const Color3& GetEyeGreenColor(GammaType gamma);
const Color3& GetEyeBlueColor(CommonColor color, GammaType gamma);
const Color3& GetNoselineColor(GammaType gamma);
const Color3& GetWrinkleColor(GammaType gamma);
const Color3& GetMoleColor(GammaType gamma);
const Color3& GetSkinColor(FacelineColor color, GammaType gamma);
int GetOrderIndexByFacelineColor(FacelineColor color);
FacelineColor GetFacelineColorByOrderIndex(int index);
const Color3& GetHatColor(FavoriteColor color, GammaType gamma);
const Color3& GetPantsColor(bool isSpecial, GammaType gamma);
void ReplaceColorTableForDebug(const void* table, size_t size);

int GetEyeRotateOffset(EyeType type);
int GetEyebrowRotateOffset(EyebrowType type);

class BufferAllocator {
public:
  BufferAllocator(void* buffer, size_t size);
  ~BufferAllocator();
  void Advance(size_t size);
  size_t GetCurrentSize() const;
  void AlignUp(size_t alignment);
  void* GetCurrentPtr();
  const void* GetCurrentPtr() const;
  size_t GetRestSize() const;

private:
  uintptr_t m_Current;
  uintptr_t m_Start;
  size_t m_Size;
};

class CalculateSizeAndAlignment {
public:
  CalculateSizeAndAlignment();
  ~CalculateSizeAndAlignment();
  void AddSize(size_t size);
  void AddSizeWithAlignment(size_t size, size_t alignment);
  void AddSizeWithAlignment(size_t size, size_t alignment, int count);
  size_t GetSize() const;
  size_t GetAlignment() const;

private:
  size_t m_Size;
};

}

const detail::Color3& GetFavoriteColor(FavoriteColor color, GammaType gamma);
const detail::Color3& GetSkinColor(int color, GammaType gamma);
const detail::Color3& GetCommonColor(CommonColor color, GammaType gamma);
const detail::Color3& GetMouthRedColor(CommonColor color, GammaType gamma);
const detail::Color3& GetMouthGreenColor(CommonColor color, GammaType gamma);
const detail::Color3& GetMouthBlueColor(GammaType gamma);
const detail::Color3& GetEyeRedColor(GammaType gamma);
const detail::Color3& GetEyeGreenColor(GammaType gamma);
const detail::Color3& GetEyeBlueColor(CommonColor color, GammaType gamma);
const detail::Color3& GetNoselineColor(GammaType gamma);
const detail::Color3& GetWrinkleColor(GammaType gamma);
const detail::Color3& GetMoleColor(GammaType gamma);
const detail::Color3& GetSkinColor(FacelineColor color, GammaType gamma);
void SetSpecialMiiKeyCode(int code);
int GetSpecialMiiKeyCode();
bool IsEnabledSpecialMii();

}
