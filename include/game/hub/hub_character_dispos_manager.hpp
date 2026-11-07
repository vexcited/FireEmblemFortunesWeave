#pragma once

#include <stdint.h>

#include <memory>
#include <string>
#include <vector>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class HubCharacterDisposData;

struct HubCharacterDispos {
  static constexpr int kStateCleared = 2;

  ~HubCharacterDispos();

  int state;
  uint8_t unknown_04_[0x1c];
  std::string area_name;
  uint8_t unknown_38_[0x18];
};

// The dispositions of the hub characters and the groups they belong to.
class HubCharacterDisposList {
public:
  void PushGroupId(const std::string& areaName, const std::string& groupId);

  void ClearGroupId(const std::string& areaName) {
    for (HubCharacterDispos& dispos : disposes_) {
      if (dispos.area_name == areaName) {
        dispos.state = HubCharacterDispos::kStateCleared;
      }
    }
  }

  void DisableSituation() {
    disable_situation_ = true;
  }

  void SetCheckEnableBuildPerson(bool isEnable) {
    check_enable_build_person_ = isEnable;
  }

private:
  uint32_t unknown_00_;
  bool disable_situation_;
  bool check_enable_build_person_;
  std::vector<HubCharacterDispos> disposes_;
};

class HubCharacterDisposManager : public Singleton<HubCharacterDisposManager> {
public:
  ~HubCharacterDisposManager() override;

  HubCharacterDisposList& GetList() {
    return list_;
  }

private:
  std::shared_ptr<HubCharacterDisposData> data_;
  HubCharacterDisposList list_;
};

#pragma GCC visibility pop

}
