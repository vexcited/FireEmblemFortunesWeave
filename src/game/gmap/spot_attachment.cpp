#include "game/gmap/spot_attachment.hpp"

namespace game::gmap {

namespace {

constexpr auto ToKind(int kind) {
  return static_cast<GmapSpotAttachmentConst::Kind>(kind);
}

}

int SpotAttachmentBase::Unknown02() {
  return 0;
}

int SpotAttachmentBase::Unknown04() {
  return 0;
}

int SpotAttachmentBase::Unknown05() {
  return 0;
}

bool SpotAttachmentBase::Unknown06() {
  switch (Unknown07()) {
    case 1:
      return true;
    case 3:
      return Unknown32() < 1;
    case 2:
      return GmapClock::GetTime().GetKey() >= start_.GetKey();
    default:
      return false;
  }
}

void SpotAttachmentBase::Unknown09() {}

void SpotAttachmentBase::Unknown10() {}

bool SpotAttachmentBase::Unknown14() {
  switch (Unknown08()) {
    case 1:
      return true;
    case 2:
    case 5:
      return unknown28_;
    case 3:
    case 4:
      return Unknown32() == 0;
    default:
      return false;
  }
}

void SpotAttachmentBase::OnProgressCycle(int) {}

int SpotAttachmentBase::Unknown18() {
  return 0;
}

int SpotAttachmentBase::Unknown19() {
  return 0;
}

void SpotAttachmentBase::Unknown20() {}

int SpotAttachmentBase::Unknown21() {
  return 0;
}

int SpotAttachmentBase::Unknown22() {
  return 0;
}

const void* SpotAttachmentBase::Unknown23() {
  return nullptr;
}

const void* SpotAttachmentBase::Unknown24() {
  return nullptr;
}

const void* SpotAttachmentBase::Unknown25() {
  return nullptr;
}

bool SpotAttachmentBase::Unknown26() {
  return false;
}

const void* SpotAttachmentBase::Unknown27() {
  return nullptr;
}

void SpotAttachmentBase::OnEnterGmap() {}

void SpotAttachmentBase::Unknown29() {}

int SpotAttachmentBase::Unknown30() {
  return 0;
}

int SpotAttachmentBase::Unknown31() {
  return 0;
}

int SpotAttachmentBase::Unknown32() {
  return 0;
}

const void* SpotAttachmentBase::GetDispatchLegion() const {
  return nullptr;
}

const void* SpotAttachmentBase::Unknown34() {
  return nullptr;
}

void SpotAttachmentBase::Unknown35() {}

int SpotAttachmentFarm::Unknown02() {
  return 6 * GetData()->unknown20;
}

GmapSpotAttachmentConst::Kind SpotAttachmentFarm::GetKind() const {
  return ToKind(1);
}

int SpotAttachmentFarm::Unknown04() {
  return 1;
}

int SpotAttachmentFarm::Unknown05() {
  return 6 * GetGrowthData()->unknown30;
}

uint8_t SpotAttachmentFarm::Unknown07() {
  return 2;
}

uint8_t SpotAttachmentFarm::Unknown08() {
  return 5;
}

void SpotAttachmentFarm::Unknown12() {
  if (unknown2a_ & 1) {
    return;
  }

  SpotAttachmentBase::Unknown12();
}

bool SpotAttachmentFarm::Unknown14() {
  return unknown28_ & unknown2a_ & 1;
}

int SpotAttachmentFarm::Unknown21() {
  return 6;
}

bool SpotAttachmentFarm::Unknown26() {
  return unknown58_;
}

const void* SpotAttachmentFarm::Unknown27() {
  return unknown50_;
}

const void* SpotAttachmentFarm::Unknown34() {
  return &stocks_;
}

int SpotAttachmentRecruit::Unknown02() {
  return 6 * GetData()->unknown42;
}

GmapSpotAttachmentConst::Kind SpotAttachmentRecruit::GetKind() const {
  return ToKind(3);
}

uint8_t SpotAttachmentRecruit::Unknown07() {
  return GetData()->unknown40;
}

uint8_t SpotAttachmentRecruit::Unknown08() {
  return GetData()->unknown41;
}

int SpotAttachmentRecruit::Unknown22() {
  return unknown2c_;
}

const void* SpotAttachmentRecruit::Unknown23() {
  return unknown30_;
}

GmapSpotAttachmentConst::Kind SpotAttachmentDispatch::GetKind() const {
  return ToKind(4);
}

void SpotAttachmentDispatch::OnStartPhase() {}

void SpotAttachmentDispatch::OnProgressCycle(int) {}

const void* SpotAttachmentDispatch::Unknown34() {
  return &legions_;
}

int SpotAttachmentExplore::Unknown02() {
  return 6 * GetData()->unknown42;
}

uint8_t SpotAttachmentExplore::Unknown07() {
  return GetData()->unknown40;
}

uint8_t SpotAttachmentExplore::Unknown08() {
  return GetData()->unknown41;
}

void SpotAttachmentExplore::OnEndPhase() {
  OnProgressCycle(1);
}

int SpotAttachmentExplore::Unknown31() {
  return legions_.size();
}

int SpotAttachmentDungeon::Unknown02() {
  return 6 * GetData()->unknown42;
}

uint8_t SpotAttachmentDungeon::Unknown07() {
  return GetData()->unknown40;
}

uint8_t SpotAttachmentDungeon::Unknown08() {
  return GetData()->unknown41;
}

void SpotAttachmentDungeon::OnEndPhase() {
  OnProgressCycle(1);
}

int SpotAttachmentDungeon::Unknown31() {
  return legions_.size();
}

int SpotAttachmentFort::Unknown02() {
  return 6 * GetData()->unknown42;
}

uint8_t SpotAttachmentFort::Unknown07() {
  return GetData()->unknown40;
}

uint8_t SpotAttachmentFort::Unknown08() {
  return GetData()->unknown41;
}

int SpotAttachmentFort::Unknown31() {
  return unknown48_;
}

int SpotAttachmentAnimal::Unknown02() {
  return 6 * GetData()->unknown42;
}

GmapSpotAttachmentConst::Kind SpotAttachmentAnimal::GetKind() const {
  return ToKind(0);
}

uint8_t SpotAttachmentAnimal::Unknown07() {
  return GetData()->unknown40;
}

uint8_t SpotAttachmentAnimal::Unknown08() {
  return GetData()->unknown41;
}

GmapSpotAttachmentConst::Kind SpotAttachmentReconstruction::GetKind() const {
  return ToKind(5);
}

uint8_t SpotAttachmentReconstruction::Unknown07() {
  return 3;
}

uint8_t SpotAttachmentReconstruction::Unknown08() {
  return 1;
}

void SpotAttachmentReconstruction::OnEndPhase() {
  OnProgressCycle(1);
}

int SpotAttachmentReconstruction::Unknown30() {
  return state_->unknown44;
}

int SpotAttachmentReconstruction::Unknown31() {
  return unknown2c_;
}

}
