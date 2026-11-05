#pragma GCC visibility push(hidden)
#include "game/gameui/basic_info.hpp"

namespace game::facility {

class StableBreedingInfo : public gameui::BasicInfo {
public:
  ~StableBreedingInfo() override;

  const char* GetLayoutArchive() override { return "Layout/Hub.arc"; }
  const char* GetLayoutName() override { return "Hub_Breeding_Help"; }
  int Unknown22() override;
  void Unknown28() override;
  void Unknown29() override {}
};

StableBreedingInfo::~StableBreedingInfo() = default;

namespace {

class ProcVolunteerInfo : public gameui::BasicInfo {
public:
  ProcVolunteerInfo();

  const char* GetLayoutArchive() override { return "Layout/Hub.arc"; }
  const char* GetLayoutName() override { return "Hub_InfoDetail_Temple"; }
  int Unknown22() override { return 1; }
  int Unknown23() override { return 0; }
  int Unknown26() override { return 110; }
  void Unknown28() override;
  int Unknown31() override { return 3; }
  int Unknown32() override { return 3; }
};

[[gnu::used]] ProcVolunteerInfo::ProcVolunteerInfo() = default;

class ProcTheaterInfo : public gameui::BasicInfo {
public:
  ProcTheaterInfo();

  const char* GetLayoutArchive() override { return "Layout/Hub.arc"; }
  const char* GetLayoutName() override { return "Hub_InfoDetail_Theater"; }
  int Unknown22() override { return 1; }
  int Unknown23() override { return 0; }
  int Unknown26() override { return 110; }
  void Unknown28() override;
  int Unknown31() override { return 3; }
  int Unknown32() override { return 3; }
};

[[gnu::used]] ProcTheaterInfo::ProcTheaterInfo() = default;

}

}

#pragma GCC visibility pop
