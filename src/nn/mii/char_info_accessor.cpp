#include "nn/mii/char_info_accessor.hpp"
#include "nn/mii/ver3_record.hpp"

namespace nn::mii {

namespace detail {

void GetCreateId(CreateId* pOutId, const CharInfo& info);
void DuplicateMii(CharInfo* pOutInfo, const CharInfo& info);
void SetNickname(CharInfo* pInfo, const Nickname& nickname,
  FontRegion fontRegion);

}

void GetCreateId(CreateId* pOutId, const CharInfo& info) {
  detail::GetCreateId(pOutId, info);
}

void DuplicateMii(CharInfo* pOutInfo, const CharInfo& info) {
  detail::DuplicateMii(pOutInfo, info);
}

void SetNickname(CharInfo* pInfo, const Nickname& nickname,
  FontRegion fontRegion) {
  detail::SetNickname(pInfo, nickname, fontRegion);
}

namespace {

constexpr int NicknameOffset = 0x10;
constexpr int FontRegionOffset = 0x26;
constexpr int TypeOffset = 0x2b;
constexpr int FacelineColorOffset = 0x2e;
constexpr int HairFlipOffset = 0x33;

void GetNicknameFromRaw(Nickname* name, const detail::CharInfoRaw& data,
  int replacement) {
  __builtin_memcpy(name, data.data + NicknameOffset, sizeof(*name));
  name->ReplaceFontRegion(FontRegion(data.data[FontRegionOffset]),
    replacement);
}

}

ParamCharInfoAccessor::ParamCharInfoAccessor(const CharInfo& info)
  : data(info.data) {
  detail::ReplaceCharInfoIfNecessary(&data);
}

void ParamCharInfoAccessor::GetNickname(Nickname* name,
  int replacement) const {
  GetNicknameFromRaw(name, data, replacement);
}

CreateId ParamCharInfoAccessor::GetCreateId() const {
  CreateId id;
  __builtin_memcpy(&id, data.data, sizeof(id));
  return id;
}

bool ParamCharInfoAccessor::IsSpecial() const {
  return data.data[TypeOffset] == 1;
}

#define MII_CHAR_INFO_FIELD(Name, Offset)                                     \
  int ParamCharInfoAccessor::Get##Name() const {                              \
    return data.data[Offset];                                                 \
  }
#include "nn/mii/char_info_fields.inc"
#undef MII_CHAR_INFO_FIELD

#define MII_ACCESSOR_COMMON(Class)                                            \
  Class::Class(const CharInfo& info) : data(info.data) {                      \
    detail::ReplaceCharInfoIfNecessary(&data);                                \
  }                                                                           \
                                                                              \
  bool Class::IsValid() const {                                               \
    const ParamCharInfoAccessor accessor(                                     \
      *reinterpret_cast<const CharInfo*>(this));                              \
    return accessor.IsValid();                                                \
  }                                                                           \
                                                                              \
  void Class::GetNickname(Nickname* name, int replacement) const {            \
    GetNicknameFromRaw(name, data, replacement);                              \
  }                                                                           \
                                                                              \
  int Class::GetFontRegion() const {                                          \
    return data.data[FontRegionOffset];                                       \
  }                                                                           \
                                                                              \
  int Class::GetFavoriteColor() const {                                       \
    return data.data[0x27];                                                   \
  }                                                                           \
                                                                              \
  int Class::GetHeight() const {                                              \
    return data.data[0x29];                                                   \
  }                                                                           \
                                                                              \
  int Class::GetBuild() const {                                               \
    return data.data[0x2a];                                                   \
  }                                                                           \
                                                                              \
  bool Class::IsHairFlip() const {                                            \
    return data.data[HairFlipOffset] == 1;                                    \
  }                                                                           \
                                                                              \
  int Class::GetHairType() const {                                            \
    return data.data[0x31];                                                   \
  }                                                                           \
                                                                              \
  int Class::GetFacelineType() const {                                        \
    return data.data[0x2d];                                                   \
  }                                                                           \
                                                                              \
  int Class::GetSkinColor() const {                                           \
    return data.data[FacelineColorOffset];                                    \
  }
MII_ACCESSOR_COMMON(CharInfoAccessor)
MII_ACCESSOR_COMMON(GenderCharInfoAccessor)
#undef MII_ACCESSOR_COMMON

int GenderCharInfoAccessor::GetGender() const {
  return data.data[0x28];
}

}

namespace nn::mii::detail {

#define MII_EXTENTION_FIELD(Name, Member)                                     \
  int NfpStoreDataExtentionRaw::Get##Name() const {                           \
    return Member;                                                            \
  }                                                                           \
                                                                              \
  void NfpStoreDataExtentionRaw::Set##Name(int value) {                       \
    Member = value;                                                           \
  }
MII_EXTENTION_FIELD(FacelineColor, facelineColor)
MII_EXTENTION_FIELD(HairColor, hairColor)
MII_EXTENTION_FIELD(EyeColor, eyeColor)
MII_EXTENTION_FIELD(EyebrowColor, eyebrowColor)
MII_EXTENTION_FIELD(MouthColor, mouthColor)
MII_EXTENTION_FIELD(BeardColor, beardColor)
MII_EXTENTION_FIELD(GlassColor, glassColor)
MII_EXTENTION_FIELD(GlassType, glassType)
#undef MII_EXTENTION_FIELD

bool NfpStoreDataExtentionRaw::IsValid() const {
  constexpr int FacelineColorMax = 9;
  constexpr int CommonColorMax = 99;
  constexpr int GlassTypeCount = 20;

  return facelineColor <= FacelineColorMax && hairColor <= CommonColorMax &&
    eyeColor <= CommonColorMax && eyebrowColor <= CommonColorMax &&
    mouthColor <= CommonColorMax && beardColor <= CommonColorMax &&
    glassColor <= CommonColorMax && glassType < GlassTypeCount;
}

void NfpStoreDataExtentionRaw::SetDefault() {
  *this = {};
}

void NicknameLe::Convert(Nickname* output, const NicknameLe& input) {
  for (int i = 0; i < 11; ++i) {
    output->text[i] = input.text[i];
  }
}

void NicknameLe::Convert(NicknameLe* output, const Nickname& input) {
  for (int i = 0; i < 11; ++i) {
    output->text[i] = input.text[i];
  }
}

bool NicknameLe::IsValid() const {
  Nickname name;
  Convert(&name, *this);
  return name.IsValid();
}

bool NicknameLe::IsEmpty() const {
  Nickname name;
  Convert(&name, *this);
  return name.IsEmpty();
}

void NicknameLe::SetByLittleEndian(uint16_t* source) {
  __builtin_memcpy(text, source, sizeof(uint16_t) * 10);
  text[10] = 0;
}

}

namespace nn::mii {

bool IsSpecialMii(const CharInfo& info) {
  detail::CharInfoRaw data = info.data;

  if (!data.IsValid()) {
    return false;
  }

  detail::ReplaceCharInfoIfNecessary(&data);
  return data.data[TypeOffset] == 1;
}

int GetExpressionCount(int expressionFlags) {
  constexpr int ExpressionCount = 19;
  int count = 0;

  for (int i = 0; i < ExpressionCount; ++i) {
    count += (expressionFlags >> i) & 1;
  }

  return count;
}

}
