#include "game/data/data_files.hpp"
#include "game/game_mode_data.hpp"
#include "game/gmap/spot_attachment.hpp"
#include "game/map/stream.hpp"

namespace game::gmap {

namespace {

// Attachments age once more than a day went by since their last update.
bool IsOutdated(const GmapTime& updated) {
  return GmapClock::GetTime().GetElapsed(updated) > 1;
}

}

// The farm of the spot points back to its attachment.
SpotAttachmentFarm::~SpotAttachmentFarm() {
  if (SpotFarm* farm = spot_->GetFarm()) {
    farm->attachment = nullptr;
  }
}

const GmapConstructedObjectData* SpotAttachmentFarm::GetData() const {
  return GmapConstructedObjectFile::GetInstance()->Find("畑を作る");
}

const GmapConstructionData* SpotAttachmentFarm::GetGrowthData() const {
  return GmapConstructionFile::GetInstance()->Find("畑を作る");
}

bool SpotAttachmentFarm::Unknown13() {
  return IsOutdated(updated_) || spot_->GetType() != 14 ||
    spot_->GetFarm() == nullptr;
}

bool SpotAttachmentFarm::Unknown18() {
  if (unknown29_ != 1 || (unknown2a_ == 1 && unknown28_)) {
    return false;
  }

  return unknown50_ == nullptr;
}

const void* SpotAttachmentFarm::Unknown24() {
  return spot_->GetFarm()->attachment;
}

const void* SpotAttachmentFarm::Unknown25() {
  if (const SpotFarm* farm = spot_->GetFarm()) {
    return farm->object->unknown_30;
  }

  return Unknown24();
}

void SpotAttachmentFarm::OnEndPhase() {}

const GmapCommandData* SpotAttachmentRecruit::GetData() const {
  return GmapCommandFile::GetInstance()->Find("兵士募集");
}

bool SpotAttachmentRecruit::Unknown13() {
  return IsOutdated(updated_) || spot_->GetRecruit() == nullptr;
}

void SpotAttachmentRecruit::OnStartPhase() {}

void SpotAttachmentRecruit::OnEndPhase() {}

bool SpotAttachmentRecruit::Unknown18() {
  if (unknown2c_ > 0) {
    return false;
  }

  return IsGmapFeatureUnlocked(4);
}

void SpotAttachmentRecruit::Deserialize(Stream& stream, int version) {
  SpotAttachmentBase::Deserialize(stream, version);

  if (version >= 2) {
    unknown2c_ = stream.ReadU8();
  }
}

void SpotAttachmentRecruit::Unknown38() {
  unknown38_ = true;
}

const GmapCommandData* SpotAttachmentExplore::GetData() const {
  return GmapCommandFile::GetInstance()->Find("派兵_探索");
}

int SpotAttachmentExplore::Unknown12() {
  return 100 * Unknown31() / Unknown30();
}

bool SpotAttachmentExplore::Unknown13() {
  return IsOutdated(updated_) || spot_->GetType() != 5 ||
    spot_->GetExplore() == nullptr;
}

void SpotAttachmentExplore::OnStartPhase() {}

int SpotAttachmentExplore::Unknown32() {
  return Unknown30() - Unknown31();
}

// Goes back one day to the start of it, then catches up if work is left.
void SpotAttachmentExplore::Unknown39() {
  updated_.minute = 0;
  updated_.second = 0;
  updated_.day--;
  updated_.Normalize();

  if (Unknown32() > 0) {
    Unknown40();
  }
}

const GmapCommandData* SpotAttachmentDungeon::GetData() const {
  return GmapCommandFile::GetInstance()->Find("派兵_ダンジョン");
}

bool SpotAttachmentDungeon::Unknown13() {
  return IsOutdated(updated_) || spot_->GetType() != 9 ||
    FindDungeon() == nullptr;
}

void SpotAttachmentDungeon::OnStartPhase() {}

int SpotAttachmentDungeon::Unknown32() {
  return Unknown30() - Unknown31();
}

const GmapCommandData* SpotAttachmentFort::GetData() const {
  return GmapCommandFile::GetInstance()->Find("派兵_砦");
}

bool SpotAttachmentFort::Unknown13() {
  return IsOutdated(updated_) || spot_->GetType() != 8;
}

int SpotAttachmentFort::Unknown32() {
  return Unknown30() - Unknown31();
}

const GmapCommandData* SpotAttachmentAnimal::GetData() const {
  return GmapCommandFile::GetInstance()->Find("おびき寄せる");
}

bool SpotAttachmentAnimal::Unknown13() {
  return IsOutdated(updated_) || spot_->GetType() != 6 ||
    spot_->GetAnimal() == nullptr;
}

void SpotAttachmentAnimal::OnStartPhase() {
  if (Unknown06() && spot_->GetAnimal()->state == 0) {
    Lure();
  }
}

void SpotAttachmentAnimal::OnEndPhase() {}

int SpotAttachmentReconstruction::Unknown12() {
  return 100 * Unknown31() / Unknown30();
}

void SpotAttachmentReconstruction::OnStartPhase() {}

bool SpotAttachmentReconstruction::Unknown13() {
  if (IsOutdated(updated_) || !(spot_->GetFlags() & 4)) {
    return true;
  }

  const GameModeData* mode = GameModeData::GetInstance();
  return mode == nullptr || mode->GetMode() != GameModeData::kModeClear ||
    spot_->FindReconstruction() == nullptr;
}

int SpotAttachmentReconstruction::Unknown32() {
  return Unknown30() - Unknown31();
}

void SpotAttachmentReconstruction::Deserialize(Stream& stream, int version) {
  SpotAttachmentBase::Deserialize(stream, version);
  unknown2c_ = stream.ReadU8();
}

void SpotAttachmentReconstruction::Unknown38() {}

}
