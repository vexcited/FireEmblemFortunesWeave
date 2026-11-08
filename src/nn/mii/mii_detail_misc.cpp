#include "nn/mii/char_info_accessor.hpp"
#include "nn/mii/store_data.hpp"

namespace nn::mii::detail {

const DefaultMii* GetDefaultMiiForMiiEditor(Gender gender);

[[gnu::visibility("hidden")]] void BuildStoreFromDefault(StoreDataRaw* store,
  UtilityImpl* utility, const DefaultMii* source);

void GetReplacedNickname(Nickname* pOutName) {
  uint16_t name[8] = {u'M', u'i', u'i'};
  pOutName->Set(name);
}

void GetNicknameQuestion(Nickname* pOutName) {
  pOutName->Set(reinterpret_cast<const uint16_t*>(u"???"));
}

void StoreDataRaw::BuildMiiEditor(UtilityImpl* utility, Gender gender) {
  BuildStoreFromDefault(this, utility, GetDefaultMiiForMiiEditor(gender));
}

void NfpStoreDataExtentionRaw::SetFromStoreData(const StoreDataRaw& store) {
  *this = {};
  facelineColor = store.GetFacelineColor();
  hairColor = store.GetHairColor();
  eyeColor = store.GetEyeColor();
  eyebrowColor = store.GetEyebrowColor();
  mouthColor = store.GetMouthColor();
  beardColor = store.GetBeardColor();
  glassColor = store.GetGlassColor();
  glassType = store.GetGlassType();
}

void NfpStoreDataExtentionRaw::ToStoreData(StoreDataRaw* store) const {
  store->SetFacelineColor(facelineColor);
  store->SetHairColor(hairColor);
  store->SetEyeColor(eyeColor);
  store->SetEyebrowColor(eyebrowColor);
  store->SetMouthColor(mouthColor);
  store->SetBeardColor(beardColor);
  store->SetGlassColor(glassColor);
  store->SetGlassType(glassType);
  store->UpdateDataCrc();
  store->UpdateDeviceCrc();
}

}
