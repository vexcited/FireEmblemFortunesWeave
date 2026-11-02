#include "nn/mii/legacy_conversion.hpp"

namespace nn::mii::detail {

static const int FacelineToVer3[10] = {0, 1, 2, 3, 4, 5, 0, 1, 5, 5};

static const uint8_t CommonToVer3[100][4] = {
  {0, 0, 4, 0}, {1, 2, 4, 1}, {2, 2, 4, 1}, {3, 2, 4, 1}, {4, 1, 4, 5},
  {5, 3, 4, 1}, {6, 2, 4, 1}, {7, 3, 3, 4}, {0, 0, 4, 0}, {4, 1, 4, 5},
  {3, 2, 4, 1}, {5, 3, 4, 1}, {4, 4, 4, 3}, {4, 5, 4, 5}, {6, 2, 4, 1},
  {2, 2, 1, 2}, {0, 4, 4, 3}, {6, 2, 4, 4}, {4, 1, 4, 5}, {3, 2, 0, 4},
  {2, 2, 1, 2}, {2, 2, 2, 2}, {7, 2, 3, 4}, {3, 2, 4, 4}, {2, 2, 4, 2},
  {2, 2, 2, 2}, {2, 2, 3, 2}, {2, 2, 3, 2}, {2, 2, 4, 2}, {2, 2, 4, 2},
  {2, 2, 4, 2}, {2, 2, 4, 2}, {2, 2, 1, 2}, {2, 2, 4, 2}, {2, 2, 4, 2},
  {2, 2, 2, 2}, {2, 2, 3, 2}, {2, 2, 3, 2}, {2, 0, 4, 3}, {2, 0, 4, 3},
  {2, 4, 4, 3}, {4, 4, 4, 3}, {4, 4, 4, 3}, {4, 4, 4, 3}, {4, 4, 4, 3},
  {4, 4, 3, 3}, {4, 4, 3, 3}, {4, 1, 3, 3}, {0, 0, 4, 3}, {0, 4, 4, 3},
  {4, 4, 4, 3}, {4, 4, 3, 3}, {4, 4, 3, 3}, {4, 4, 3, 3}, {4, 4, 3, 3},
  {4, 4, 3, 3}, {0, 0, 4, 0}, {0, 5, 4, 0}, {0, 5, 4, 0}, {4, 5, 4, 5},
  {4, 5, 4, 5}, {4, 5, 3, 5}, {4, 5, 3, 5}, {4, 5, 3, 5}, {4, 5, 3, 5},
  {5, 5, 4, 0}, {5, 5, 4, 5}, {5, 5, 4, 5}, {4, 5, 4, 5}, {4, 5, 3, 5},
  {4, 5, 3, 5}, {4, 5, 3, 5}, {4, 5, 3, 5}, {4, 5, 3, 5}, {4, 5, 3, 5},
  {5, 3, 4, 5}, {7, 3, 4, 5}, {5, 3, 3, 5}, {7, 3, 3, 5}, {7, 3, 3, 5},
  {7, 3, 3, 5}, {7, 3, 3, 5}, {7, 3, 3, 5}, {6, 2, 4, 1}, {7, 2, 3, 4},
  {7, 3, 3, 4}, {7, 3, 3, 4}, {7, 3, 3, 4}, {7, 3, 3, 4}, {3, 2, 4, 4},
  {7, 2, 0, 4}, {7, 2, 3, 4}, {7, 2, 3, 4}, {7, 2, 3, 4}, {7, 1, 3, 5},
  {0, 1, 4, 5}, {4, 1, 3, 5}, {4, 1, 3, 5}, {4, 1, 3, 5}, {4, 1, 3, 5}};

static const int GlassToVer3[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 1,
                                    2, 1, 3, 7, 7, 6, 7, 8, 7, 7};

int GetFacelineColorToVer3(FacelineColor value) {
  return FacelineToVer3[static_cast<unsigned>(value)];
}

int GetHairColorToVer3(CommonColor value) {
  return CommonToVer3[static_cast<unsigned>(value)][0];
}

int GetEyeColorToVer3(CommonColor value) {
  return CommonToVer3[static_cast<unsigned>(value)][1];
}

int GetMouthColorToVer3(CommonColor value) {
  return CommonToVer3[static_cast<unsigned>(value)][2];
}

int GetGlassColorToVer3(CommonColor value) {
  return CommonToVer3[static_cast<unsigned>(value)][3];
}

int GetGlassTypeToVer3(GlassType value) {
  return GlassToVer3[static_cast<unsigned>(value)];
}

int GetGlassTypeFromVer3(Ver3GlassType value) {
  return value;
}

void Ver3StoreDataRaw::BuildToStoreData(StoreDataRaw* output,
                                        UtilityImpl* utility) const {
  output->BuildDefault(utility, 0);
  output->SetRegionMove(GetRegionMove());
  output->SetFontRegion(GetFontRegion());
  output->SetGender(GetGender());
  output->SetFavoriteColor(GetFavoriteColor());
  output->SetFacelineType(GetFaceType());
  output->SetFacelineWrinkle(GetFaceTex());
  output->SetFacelineMake(GetFaceMake());
  output->SetHairType(GetHairType());
  output->SetHairFlip(GetHairFlip());
  output->SetEyeType(GetEyeType());
  output->SetEyeScale(GetEyeScale());
  output->SetEyeAspect(GetEyeAspect());
  output->SetEyeRotate(GetEyeRotate());
  output->SetEyeX(GetEyeX());
  output->SetEyeY(GetEyeY());
  output->SetEyebrowType(GetEyebrowType());
  output->SetEyebrowScale(GetEyebrowScale());
  output->SetEyebrowAspect(GetEyebrowAspect());
  output->SetEyebrowRotate(GetEyebrowRotate());
  output->SetEyebrowX(GetEyebrowX());
  output->SetEyebrowY(GetEyebrowY());
  output->SetNoseType(GetNoseType());
  output->SetNoseScale(GetNoseScale());
  output->SetNoseY(GetNoseY());
  output->SetMouthType(GetMouthType());
  output->SetMouthScale(GetMouthScale());
  output->SetMouthAspect(GetMouthAspect());
  output->SetMouthY(GetMouthY());
  output->SetMustacheType(GetMustacheType());
  output->SetBeardType(GetBeardType());
  output->SetMustacheScale(GetBeardScale());
  output->SetMustacheY(GetBeardY());
  output->SetGlassScale(GetGlassScale());
  output->SetGlassY(GetGlassY());
  output->SetMoleType(GetMoleType());
  output->SetMoleScale(GetMoleScale());
  output->SetMoleX(GetMoleX());
  output->SetMoleY(GetMoleY());
  const unsigned build = GetBuild();
  output->SetBuild(build < 127 ? build : 127);
  const unsigned height = GetHeight();
  output->SetHeight(height < 127 ? height : 127);
  output->SetGlassType(
    GetGlassTypeFromVer3(static_cast<Ver3GlassType>(GetGlassType())));
  output->SetFacelineColor(
    GetFacelineColorFromVer3(static_cast<Ver3FacelineColor>(GetFaceColor())));
  output->SetHairColor(
    GetHairColorFromVer3(static_cast<Ver3HairColor>(GetHairColor())));
  output->SetEyeColor(
    GetEyeColorFromVer3(static_cast<Ver3EyeColor>(GetEyeColor())));
  output->SetEyebrowColor(
    GetHairColorFromVer3(static_cast<Ver3HairColor>(GetEyebrowColor())));
  output->SetMouthColor(
    GetMouthColorFromVer3(static_cast<Ver3MouthColor>(GetMouthColor())));
  output->SetBeardColor(
    GetHairColorFromVer3(static_cast<Ver3HairColor>(GetBeardColor())));
  output->SetGlassColor(
    GetGlassColorFromVer3(static_cast<Ver3GlassColor>(GetGlassColor())));
  Nickname name = {};
  GetName(&name);
  ModifyVer3StoreDataNicknameInvalid(&name);
  if (GetNgWord()) {
    name.ReplaceQuestionMark();
  }
  output->SetNickname(name);
  output->UpdateDataCrc();
  output->UpdateDeviceCrc();
}

void Ver3StoreDataRaw::BuildFromStoreData(UtilityImpl* utility,
                                          const StoreDataRaw& source) {
  SetDefault(utility);
  SetRegionMove(source.GetRegionMove());
  SetFontRegion(source.GetFontRegion());
  SetFavoriteColor(source.GetFavoriteColor());
  SetGender(source.GetGender());
  SetFaceType(source.GetFacelineType());
  SetFaceTex(source.GetFacelineWrinkle());
  SetFaceMake(source.GetFacelineMake());
  SetHairType(source.GetHairType());
  SetHairFlip(source.GetHairFlip());
  SetEyeType(source.GetEyeType());
  SetEyeScale(source.GetEyeScale());
  SetEyeAspect(source.GetEyeAspect());
  SetEyeRotate(source.GetEyeRotate());
  SetEyeX(source.GetEyeX());
  SetEyeY(source.GetEyeY());
  SetEyebrowType(source.GetEyebrowType());
  SetEyebrowScale(source.GetEyebrowScale());
  SetEyebrowAspect(source.GetEyebrowAspect());
  SetEyebrowRotate(source.GetEyebrowRotate());
  SetEyebrowX(source.GetEyebrowX());
  SetEyebrowY(source.GetEyebrowY());
  SetNoseType(source.GetNoseType());
  SetNoseScale(source.GetNoseScale());
  SetNoseY(source.GetNoseY());
  SetMouthType(source.GetMouthType());
  SetMouthScale(source.GetMouthScale());
  SetMouthAspect(source.GetMouthAspect());
  SetMouthY(source.GetMouthY());
  SetMustacheType(source.GetMustacheType());
  SetBeardType(source.GetBeardType());
  SetBeardScale(source.GetMustacheScale());
  SetBeardY(source.GetMustacheY());
  SetGlassScale(source.GetGlassScale());
  SetGlassY(source.GetGlassY());
  SetMoleType(source.GetMoleType());
  SetMoleScale(source.GetMoleScale());
  SetMoleX(source.GetMoleX());
  SetMoleY(source.GetMoleY());
  int build = source.GetBuild();
  if (build < 0) {
    build = 0;
  }
  SetBuild(build < 128 ? build : 128);
  int height = source.GetHeight();
  if (height < 0) {
    height = 0;
  }
  SetHeight(height < 128 ? height : 128);
  SetGlassType(
    GetGlassTypeToVer3(static_cast<GlassType>(source.GetGlassType())));
  SetFaceColor(GetFacelineColorToVer3(
    static_cast<FacelineColor>(source.GetFacelineColor())));
  SetHairColor(
    GetHairColorToVer3(static_cast<CommonColor>(source.GetHairColor())));
  SetEyeColor(
    GetEyeColorToVer3(static_cast<CommonColor>(source.GetEyeColor())));
  SetEyebrowColor(
    GetHairColorToVer3(static_cast<CommonColor>(source.GetEyebrowColor())));
  SetMouthColor(
    GetMouthColorToVer3(static_cast<CommonColor>(source.GetMouthColor())));
  SetBeardColor(
    GetHairColorToVer3(static_cast<CommonColor>(source.GetBeardColor())));
  SetGlassColor(
    GetGlassColorToVer3(static_cast<CommonColor>(source.GetGlassColor())));
  Nickname name = {};
  source.GetNickname(&name);
  SetName(name);
  UpdateCrc();
}

}

namespace nn::mii {

void Nickname::ReplaceQuestionMark() {
  for (auto* character = text; *character; ++character) {
    *character = '?';
  }
}

}
