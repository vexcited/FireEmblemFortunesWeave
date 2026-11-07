#include "nn/mii/ver3_record.hpp"

#include <stddef.h>
#include <string.h>

namespace nn::os {
void GenerateRandomBytes(void*, size_t);
}

namespace nn::mii {

namespace detail {

static void Copy(void* destination, const void* source, int size) {
  memcpy(destination, source, size);
}

void ModifyVer3StoreDataNicknameInvalid(Nickname* name) {
  if (name->IsValid() || name->IsEmpty()) {
    return;
  }

  for (unsigned i = 0; i < 10; ++i) {
    if (name->text[i] == 0) {
      for (; i <= 10; ++i) {
        name->text[i] = 0;
      }

      return;
    }
  }
}

void GetVer3StoreDataDefaultName(Nickname* name) {
  static constexpr uint16_t Default[] = {'n', 'o', ' ', 'n', 'a', 'm', 'e', 0};
  name->Set(Default);
}

void GetVer3StoreDataDefaultCreatorName(Nickname* name) {
  static constexpr uint16_t Empty[] = {0};
  name->Set(Empty);
}

bool Ver3CreateId::IsValid() const {
  if (data[0] & 0x20) {
    return false;
  }

  uint8_t combined = 0;

  for (auto value : data) {
    combined |= value;
  }

  return combined != 0;
}

bool Ver3AuthorId::IsValid() const {
  return true;
}

void ModifyVer3CreateIdWiiUAndNormal(Ver3CreateId* id) {
  id->data[0] = (id->data[0] & 15) | 0xD0;
}

static void MakeCreateId(UtilityImpl*, Ver3CreateId* id) {
  nn::os::GenerateRandomBytes(id, 10);
  ModifyVer3CreateIdWiiUAndNormal(id);
}

static void MakeAuthorId(UtilityImpl*, Ver3AuthorId* id) {
  nn::os::GenerateRandomBytes(id, 8);
}

void Ver3StoreDataRaw::UpdateCrc() {
  CalculateAndSetCrc16(this, 96);
}

void Ver3StoreDataRaw::GetCreateId(Ver3CreateId* id) const {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreateId);
  Copy(id, data + field->offset, field->size);
}

void Ver3StoreDataRaw::GetAuthorId(Ver3AuthorId* id) const {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::AuthorId);
  Copy(id, data + field->offset, field->size);
}

void Ver3StoreDataRaw::SetCreateId(const Ver3CreateId& id) {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreateId);
  Copy(data + field->offset, &id, field->size);
}

void Ver3StoreDataRaw::SetAuthorId(const Ver3AuthorId& id) {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::AuthorId);
  Copy(data + field->offset, &id, field->size);
}

void Ver3StoreDataRaw::GetName(Nickname* name) const {
  const auto* field = GetVer3StoreDataTableElement(Ver3StoreDataMember::Name);
  LoadLittleEndianNickname(
    name, reinterpret_cast<const uint16_t*>(data + field->offset),
    field->size / 2);
  ModifyVer3StoreDataNicknameInvalid(name);
}

void Ver3StoreDataRaw::GetCreatorName(Nickname* name) const {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreatorName);
  LoadLittleEndianNickname(
    name, reinterpret_cast<const uint16_t*>(data + field->offset),
    field->size / 2);
  ModifyVer3StoreDataNicknameInvalid(name);
}

void Ver3StoreDataRaw::SetName(const Nickname& name) {
  const auto* field = GetVer3StoreDataTableElement(Ver3StoreDataMember::Name);
  StoreLittleEndianNickname(reinterpret_cast<uint16_t*>(data + field->offset),
                            field->size / 2, name);
}

void Ver3StoreDataRaw::SetCreatorName(const Nickname& name) {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreatorName);
  StoreLittleEndianNickname(reinterpret_cast<uint16_t*>(data + field->offset),
                            field->size / 2, name);
}

void Ver3StoreDataRaw::SetDefault(UtilityImpl* utility) {
  SetMiiVersion(3);
  SetCopyable(0);
  SetNgWord(0);
  SetRegionMove(0);
  SetFontRegion(0);
  SetRoomIndex(0);
  SetPositionInRoom(0);
  SetAuthorType(0);
  SetGender(0);
  SetBirthMonth(0);
  SetBirthDay(0);
  SetFavoriteColor(0);
  SetFavorite(0);
  SetHeight(0);
  SetBuild(0);
  SetLocalonly(0);
  SetFaceType(0);
  SetFaceColor(0);
  SetFaceTex(0);
  SetFaceMake(0);
  SetHairType(0);
  SetHairColor(0);
  SetHairFlip(0);
  SetEyeType(0);
  SetEyeColor(0);
  SetEyeScale(0);
  SetEyeAspect(0);
  SetEyeRotate(0);
  SetEyeX(0);
  SetEyeY(0);
  SetEyebrowType(0);
  SetEyebrowColor(0);
  SetEyebrowScale(0);
  SetEyebrowAspect(0);
  SetEyebrowRotate(0);
  SetEyebrowX(0);
  SetEyebrowY(3);
  SetNoseType(0);
  SetNoseScale(0);
  SetNoseY(0);
  SetMouthType(0);
  SetMouthColor(0);
  SetMouthScale(0);
  SetMouthAspect(0);
  SetMouthY(0);
  SetMustacheType(0);
  SetBeardType(0);
  SetBeardColor(0);
  SetBeardScale(0);
  SetBeardY(0);
  SetGlassType(0);
  SetGlassColor(0);
  SetGlassScale(0);
  SetGlassY(0);
  SetMoleType(0);
  SetMoleScale(0);
  SetMoleX(0);
  SetMoleY(0);
  SetReserved0(0);
  SetReserved1(0);
  SetReserved2(0);
  SetPadding0(0);
  SetPadding1(0);
  SetPadding2(0);
  SetPadding3(0);
  SetPadding4(0);
  SetPadding5(0);
  SetPadding6(0);
  SetPadding7(0);
  SetPadding8(0);
  SetPadding9(0);

  Nickname name{};
  GetVer3StoreDataDefaultName(&name);
  SetName(name);
  name = {};
  GetVer3StoreDataDefaultCreatorName(&name);
  SetCreatorName(name);
  SetBirthPlatform(4);

  Ver3CreateId create_id{};
  MakeCreateId(utility, &create_id);
  SetCreateId(create_id);

  Ver3AuthorId author_id{};
  MakeAuthorId(utility, &author_id);
  SetAuthorId(author_id);
  UpdateCrc();
}

int Ver3StoreDataRaw::Verify() const {
#define CHECK(Field, Minimum, Maximum, Error)                                  \
  if (uint32_t(Get##Field()) - Minimum > Maximum - Minimum) {                  \
    return Error;                                                              \
  }
  CHECK(MiiVersion, 0, 3, 1)
  CHECK(Copyable, 0, 1, 2)
  CHECK(NgWord, 0, 1, 3)
  CHECK(RegionMove, 0, 3, 4)
  CHECK(FontRegion, 0, 3, 5)
  CHECK(RoomIndex, 0, 9, 6)
  CHECK(PositionInRoom, 0, 9, 7)
  CHECK(AuthorType, 0, 0, 8)
  CHECK(BirthPlatform, 1, 7, 9)
  CHECK(Gender, 0, 1, 12)

  const unsigned month = GetBirthMonth();
  const unsigned day = GetBirthDay();
  static constexpr unsigned Days[] = {31, 29, 31, 30, 31, 30,
                                      31, 31, 30, 31, 30, 31};

  if ((month | day) != 0 &&
      (month - 1 >= 12 || day == 0 || day > Days[month - 1])) {
    return 13;
  }

  CHECK(FavoriteColor, 0, 11, 14)
  CHECK(Favorite, 0, 1, 15)
  CHECK(Height, 0, 128, 17)
  CHECK(Build, 0, 128, 18)
  CHECK(Localonly, 0, 1, 19)
  CHECK(FaceType, 0, 11, 20)
  CHECK(FaceColor, 0, 5, 21)
  CHECK(FaceTex, 0, 11, 22)
  CHECK(FaceMake, 0, 11, 23)
  CHECK(HairType, 0, 131, 24)
  CHECK(HairColor, 0, 7, 25)
  CHECK(HairFlip, 0, 1, 26)
  CHECK(EyeType, 0, 59, 27)
  CHECK(EyeColor, 0, 5, 28)
  CHECK(EyeScale, 0, 7, 29)
  CHECK(EyeAspect, 0, 6, 30)
  CHECK(EyeRotate, 0, 7, 31)
  CHECK(EyeX, 0, 12, 32)
  CHECK(EyeY, 0, 18, 33)
  CHECK(EyebrowType, 0, 23, 34)
  CHECK(EyebrowColor, 0, 7, 35)
  CHECK(EyebrowScale, 0, 8, 36)
  CHECK(EyebrowAspect, 0, 6, 37)
  CHECK(EyebrowRotate, 0, 11, 38)
  CHECK(EyebrowX, 0, 12, 39)
  CHECK(EyebrowY, 3, 18, 40)
  CHECK(NoseType, 0, 17, 41)
  CHECK(NoseScale, 0, 8, 42)
  CHECK(NoseY, 0, 18, 43)
  CHECK(MouthType, 0, 35, 44)
  CHECK(MouthColor, 0, 4, 45)
  CHECK(MouthScale, 0, 8, 46)
  CHECK(MouthAspect, 0, 6, 47)
  CHECK(MouthY, 0, 18, 48)
  CHECK(MustacheType, 0, 5, 49)
  CHECK(BeardType, 0, 5, 50)
  CHECK(BeardColor, 0, 7, 51)
  CHECK(BeardScale, 0, 8, 52)
  CHECK(BeardY, 0, 16, 53)
  CHECK(GlassType, 0, 8, 54)
  CHECK(GlassColor, 0, 5, 55)
  CHECK(GlassScale, 0, 7, 56)
  CHECK(GlassY, 0, 20, 57)
  CHECK(MoleType, 0, 1, 58)
  CHECK(MoleScale, 0, 8, 59)
  CHECK(MoleX, 0, 16, 60)
  CHECK(MoleY, 0, 30, 61)
#undef CHECK

  Ver3AuthorId author{};
  GetAuthorId(&author);

  if (!author.IsValid()) {
    return 10;
  }

  Ver3CreateId create{};
  GetCreateId(&create);

  if (!create.IsValid()) {
    return 11;
  }

  Nickname name{};
  GetName(&name);

  if (!name.IsValid()) {
    return 16;
  }

  name = {};
  GetCreatorName(&name);

  if (!name.IsValid() && !name.IsEmpty()) {
    return 62;
  }

  return IsValidCrc16(this, 96) ? 0 : 63;
}

bool Ver3StoreDataRaw::IsValid() const {
  return Verify() == 0;
}

}
}
