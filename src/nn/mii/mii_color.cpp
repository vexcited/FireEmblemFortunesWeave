#include "nn/mii/mii_color.hpp"

namespace nn::mii::detail {

const Color3& GetFavoriteColor(FavoriteColor color, GammaType gamma) {
  return FavoriteColorTable[color].Get(gamma);
}

const Color3& GetCommonColor(CommonColor color, GammaType gamma) {
  return CommonColorTable[color].color.Get(gamma);
}

int GetOrderIndexByCommonColor(CommonColor color) {
  return CommonColorTable[color].orderIndex;
}

CommonColor GetCommonColorByOrderIndex(int index) {
  return CommonColor(CommonColorOrderIndexToColorIndex[index]);
}

const Color3& GetMouthRedColor(CommonColor color, GammaType gamma) {
  return CommonColorTable[color].color.Get(gamma);
}

const Color3& GetMouthGreenColor(CommonColor color, GammaType gamma) {
  return UpperLipColorTable[color].Get(gamma);
}

const Color3& GetMouthBlueColor(GammaType gamma) {
  return TeethColor.Get(gamma);
}

const Color3& GetEyeRedColor(GammaType gamma) {
  return EyeShadowColor.Get(gamma);
}

const Color3& GetEyeGreenColor(GammaType gamma) {
  return EyeWhiteColor.Get(gamma);
}

const Color3& GetEyeBlueColor(CommonColor color, GammaType gamma) {
  return CommonColorTable[color].color.Get(gamma);
}

const Color3& GetNoselineColor(GammaType gamma) {
  return NoselineColor.Get(gamma);
}

const Color3& GetWrinkleColor(GammaType gamma) {
  return WrinkleColor.Get(gamma);
}

const Color3& GetMoleColor(GammaType gamma) {
  return MoleColor.Get(gamma);
}

const Color3& GetSkinColor(FacelineColor color, GammaType gamma) {
  return FacelineColorTable[color].color.Get(gamma);
}

int GetOrderIndexByFacelineColor(FacelineColor color) {
  return FacelineColorTable[color].orderIndex;
}

FacelineColor GetFacelineColorByOrderIndex(int index) {
  return FacelineColor(FacelineColorOrderIndexToColorIndex[index]);
}

const Color3& GetHatColor(FavoriteColor color, GammaType gamma) {
  return FavoriteColorTable[color].Get(gamma);
}

const Color3& GetPantsColor(bool isSpecial, GammaType gamma) {
  return (isSpecial ? PantsSpecialColor : PantsNormalColor).Get(gamma);
}

void ReplaceColorTableForDebug(const void*, size_t) {
}

}
