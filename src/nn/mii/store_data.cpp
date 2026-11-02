#include "nn/mii/store_data.hpp"

namespace nn::util {

struct Uuid {
  uint8_t data[16];
};

Uuid GenerateUuid();

}

namespace nn::mii::detail {

uint16_t CalculateCrc16(const void* data, int size, uint16_t initial) {
  const auto* bytes = static_cast<const uint8_t*>(data);
  uint16_t value = initial;

  for (int i = 0; i < size; ++i) {
    for (unsigned bit = 0; bit < 8; ++bit) {
      value = (value << 1) ^ ((value & 0x8000) ? 0x1021 : 0);
    }

    value ^= bytes[i];
  }

  return value;
}

void CalculateAndSetCrc16(void* data, int size, uint16_t initial) {
  auto* bytes = static_cast<uint8_t*>(data);
  bytes[size - 2] = 0;
  bytes[size - 1] = 0;
  const uint16_t crc = CalculateCrc16(data, size, initial);
  bytes[size - 2] = crc >> 8;
  bytes[size - 1] = crc;
}

bool IsValidCrc16(const void* data, int size, uint16_t initial) {
  return CalculateCrc16(data, size, initial) == 0;
}

void MakeStoreCreateId(UtilityImpl*, CreateId* id) {
  const auto value = nn::util::GenerateUuid();
  __builtin_memcpy(id, &value, sizeof(value));
}

static uint16_t DeviceCrcSeed() {
  DeviceId device = {};
  GetDeviceId(&device);
  return CalculateCrc16(&device, sizeof(device), 0);
}

uint32_t StoreDataRaw::Validate() const {
  if (!core.IsValid()) {
    return 55422;
  }

  if (!id.IsValid()) {
    return 54398;
  }

  if (!IsValidCrc()) {
    return 51838;
  }

  return IsValidDeviceCrc() ? 0 : 52350;
}

bool StoreDataRaw::IsValidCrc() const {
  return IsValidCrc16(this, 66);
}

bool StoreDataRaw::IsValidDeviceCrc() const {
  return IsValidCrc16(this, 68, DeviceCrcSeed());
}

bool StoreDataRaw::IsValid() const {
  return core.IsValid() && id.IsValid() && IsValidCrc() && IsValidDeviceCrc();
}

bool StoreDataRaw::IsValidWithoutEmptyNickname() const {
  return core.IsValidWithoutEmptyNickname() && id.IsValid() && IsValidCrc() &&
         IsValidDeviceCrc();
}

bool StoreDataRaw::operator==(const StoreDataRaw& other) const {
  return other.IsValid() && id == other.id && core == other.core &&
         data_crc == other.data_crc && device_crc == other.device_crc;
}

CreateId StoreDataRaw::GetCreateId() const {
  return id;
}

const CoreDataRaw& StoreDataRaw::GetCoreData() const {
  return core;
}

void StoreDataRaw::GetNickname(Nickname* name) const {
  core.GetNickname(name);
}

void StoreDataRaw::SetNickname(const Nickname& name) {
  core.SetNickname(name);
}

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  int StoreDataRaw::Get##Name() const {                                        \
    return core.Get##Name();                                                   \
  }                                                                            \
  void StoreDataRaw::Set##Name(int value) {                                    \
    core.Set##Name(value);                                                     \
  }
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD

void StoreDataRaw::BuildWithCoreData(UtilityImpl* utility,
                                     const CoreDataRaw& data) {
  core = data;
  MakeStoreCreateId(utility, &id);
  UpdateDataCrc();
  UpdateDeviceCrc();
}

void StoreDataRaw::BuildWithCharInfo(UtilityImpl* utility,
                                     const CharInfo& info) {
  CoreDataRaw converted = {};
  const CharInfoRaw copy = info.data;
  converted.BuildFromCharInfoRaw(copy);
  BuildWithCoreData(utility, converted);
}

void StoreDataRaw::UpdateDataCrc() {
  CalculateAndSetCrc16(this, 66);
}

void StoreDataRaw::UpdateDeviceCrc() {
  CalculateAndSetCrc16(this, 68, DeviceCrcSeed());
}

bool StoreDataRaw::IsSpecial() const {
  return GetType() == 1;
}

void BuildStoreFromDefault(StoreDataRaw* store, UtilityImpl* utility,
                           const DefaultMii* defaults) {
  store->core.SetDefault();
  store->SetFacelineType(defaults->words[0]);
  store->SetFacelineColor(GetFacelineColorFromVer3(
    static_cast<Ver3FacelineColor>(defaults->words[1])));
  store->SetFacelineWrinkle(defaults->words[2]);
  store->SetFacelineMake(defaults->words[3]);
  store->SetHairType(defaults->words[4]);
  store->SetHairColor(
    GetHairColorFromVer3(static_cast<Ver3HairColor>(defaults->words[5])));
  store->SetHairFlip(defaults->words[6]);
  store->SetEyeType(defaults->words[7]);
  store->SetEyeColor(
    GetEyeColorFromVer3(static_cast<Ver3EyeColor>(defaults->words[8])));
  store->SetEyeScale(defaults->words[9]);
  store->SetEyeAspect(defaults->words[10]);
  store->SetEyeRotate(defaults->words[11]);
  store->SetEyeX(defaults->words[12]);
  store->SetEyeY(defaults->words[13]);
  store->SetEyebrowType(defaults->words[14]);
  store->SetEyebrowColor(
    GetHairColorFromVer3(static_cast<Ver3HairColor>(defaults->words[15])));
  store->SetEyebrowScale(defaults->words[16]);
  store->SetEyebrowAspect(defaults->words[17]);
  store->SetEyebrowRotate(defaults->words[18]);
  store->SetEyebrowX(defaults->words[19]);
  store->SetEyebrowY(defaults->words[20]);
  store->SetNoseType(defaults->words[21]);
  store->SetNoseScale(defaults->words[22]);
  store->SetNoseY(defaults->words[23]);
  store->SetMouthType(defaults->words[24]);
  store->SetMouthColor(
    GetMouthColorFromVer3(static_cast<Ver3MouthColor>(defaults->words[25])));
  store->SetMouthScale(defaults->words[26]);
  store->SetMouthAspect(defaults->words[27]);
  store->SetMouthY(defaults->words[28]);
  store->SetMustacheType(defaults->words[29]);
  store->SetBeardType(defaults->words[30]);
  store->SetBeardColor(
    GetHairColorFromVer3(static_cast<Ver3HairColor>(defaults->words[31])));
  store->SetMustacheScale(defaults->words[32]);
  store->SetMustacheY(defaults->words[33]);
  store->SetGlassType(defaults->words[34]);
  store->SetGlassColor(
    GetGlassColorFromVer3(static_cast<Ver3GlassColor>(defaults->words[35])));
  store->SetGlassScale(defaults->words[36]);
  store->SetGlassY(defaults->words[37]);
  store->SetMoleType(defaults->words[38]);
  store->SetMoleScale(defaults->words[39]);
  store->SetMoleX(defaults->words[40]);
  store->SetMoleY(defaults->words[41]);
  store->SetHeight(defaults->words[42]);
  store->SetBuild(defaults->words[43]);
  store->SetGender(defaults->words[44]);
  store->SetFavoriteColor(defaults->words[45]);
  store->SetRegionMove(defaults->words[46]);
  store->SetFontRegion(defaults->words[47]);
  store->SetType(defaults->words[48]);
  Nickname name = {};
  name.Set(reinterpret_cast<const uint16_t*>(defaults->words + 49));
  store->SetNickname(name);
  MakeStoreCreateId(utility, &store->id);
  store->UpdateDataCrc();
  store->UpdateDeviceCrc();
}

void StoreDataRaw::BuildDefault(UtilityImpl* utility, int index) {
  BuildStoreFromDefault(this, utility, GetDefaultMii(index));
}

}
