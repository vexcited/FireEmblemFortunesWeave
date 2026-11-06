#include "snd/game.hpp"

#include "snd/data.hpp"
#include "snd/fnd/math.hpp"
#include "snd/manager.hpp"
#include "snd/target/base.hpp"

namespace snd {

GroupCtrl::GroupCtrl() {
  for (int i = 0; i < 2; i++) {
    Pair pair = Pair();
    pairs_.push_back(pair);
  }
}

GroupCtrl::~GroupCtrl() {
  unloadCommon();
  unloadBoot();
}

void GroupCtrl::unloadNamed(const char* name) {
  for (size_t i = 0; i < loads_.size(); i++) {
    Load& load = loads_[i];
    if (!load.name.empty() && load.name == name) {
      load.name = "";
      load.hash = 0;
    }
  }
}

void GroupCtrl::unloadAddons(const char* name) {
  void* addon = Manager::getInstance()->getAddonManager()->getActive();
  if (addon == nullptr) {
    return;
  }
  for (size_t i = 0; i < addons_.size(); i++) {
    Load& load = addons_[i];
    if (!load.name.empty() && load.name == name) {
      const data::AddSoundArcData* data =
        static_cast<const data::AddSoundArcData*>(
          data::findAddSoundArcData(&load.hash));
      if (data != nullptr) {
        for (int j = 0; j < data->count; j++) {
          if (const char* archive = data->names[j]) {
            Manager::getInstance()->removeAddon(addon, archive);
          }
        }
      }
      load.name = "";
      load.hash = 0;
    }
  }
}

// Waits for the loader before the names are forgotten.
[[gnu::always_inline]] inline void GroupCtrl::unloadData(const char* name) {
  Manager::getInstance()->getLoader()->unloadGroup(name);
  Manager::getInstance()->getArchiveLoader()->unload(name);
  while (!Manager::getInstance()->getLoader()->isIdle()) {
    s_target->sleep(1);
  }
  unloadNamed(name);
  unloadAddons(name);
}

void GroupCtrl::unloadBoot() {
  if (bootLoaded_ == true) {
    nn::os::LockMutex(&s_groupMutex);
    unloadData("Boot");
    pairs_[0].name = "";
    pairs_[0].group = "";
    bootLoaded_ = false;
    current_ = -1;
    nn::os::UnlockMutex(&g_groupMutex);
  }
}

void GroupCtrl::unloadCommon() {
  if (commonLoaded_ == true) {
    nn::os::LockMutex(&s_groupMutex);
    unloadData("Common");
    pairs_[1].name = "";
    pairs_[1].group = "";
    current_ = 0;
    commonLoaded_ = false;
    nn::os::UnlockMutex(&s_groupMutex);
  }
}

// Only the last field slot can be unloaded, boot and common stay.
void GroupCtrl::unloadCurrent(const char* name) {
  nn::os::LockMutex(&g_groupMutex);
  int current = current_;
  if (current >= 2 && static_cast<size_t>(current) < pairs_.size()) {
    if (pairs_[current].name == name) {
      unloadData(name);
      pairs_[current_].name = "";
      pairs_[current_].group = "";
      current_--;
    }
  }
  nn::os::UnlockMutex(&s_groupMutex);
}

// Only the first archive entry without a group is checked.
void GroupCtrl::unloadGroup(const uint32_t* hash) {
  nn::os::LockMutex(&g_groupMutex);
  if (void* addon = Manager::getInstance()->getAddonManager()->getActive()) {
    for (Load& load : addons_) {
      if (load.name == "__nogroup") {
        if (load.hash == *hash) {
          const data::AddSoundArcData* data =
            static_cast<const data::AddSoundArcData*>(
              data::findAddSoundArcData(&load.hash));
          if (data != nullptr) {
            for (int i = 0; i < data->count; i++) {
              if (const char* archive = data->names[i]) {
                Manager::getInstance()->removeAddon(addon, archive);
              }
            }
          }
          load.name = "";
          load.hash = 0;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(&s_groupMutex);
}

bool GroupCtrl::isReady() const {
  if (!Manager::getInstance()->getLoader()->isIdle()) {
    return false;
  }
  if (!Manager::getInstance()->getAddonManager()->isIdle()) {
    return false;
  }
  if (!Manager::getInstance()->getArchiveLoader()->isIdle()) {
    return false;
  }
  return !fnd::AsyncLoader::getInstance()->isBusy(7, 18);
}

void GroupCtrl::loadBoot() {
  if (bootLoaded_) {
    return;
  }
  nn::os::LockMutex(&s_groupMutex);
  current_ = 0;
  pairs_[0].name = "Boot";
  pairs_[current_].group = "Boot";
  Manager::getInstance()->getLoader()->loadGroup("Boot");
  Manager::getInstance()->getArchiveLoader()->load("Boot");
  uint32_t hash = fnd::calcCrc32("Boot", 0);
  if (const data::FieldData* field = data::findFieldData(&hash)) {
    if (field->userGroup != 0) {
      hash = field->userGroup;
      loadUserGroup(&hash);
    }
    if (field->addSoundArc != 0) {
      hash = field->addSoundArc;
      loadAddSoundArc(&hash);
    }
    if (field->group != 0) {
      hash = field->group;
      if (const data::GroupData* group = data::findGroupData(&hash)) {
        for (int i = 0; i < group->count; i++) {
          Manager::getInstance()->getLoader()->loadGroup(group->names[i],
            false);
        }
      }
    }
    if (field->archive != nullptr) {
      Manager::getInstance()->getArchiveLoader()->loadArchive(
        field->archive);
    }
  }
  bootLoaded_ = true;
  nn::os::UnlockMutex(&s_groupMutex);
}

void GroupCtrl::loadCommon() {
  if (commonLoaded_) {
    return;
  }
  nn::os::LockMutex(&s_groupMutex);
  current_ = 1;
  pairs_[1].name = "Common";
  pairs_[current_].group = "Common";
  Manager::getInstance()->getLoader()->loadGroup("Common");
  Manager::getInstance()->getArchiveLoader()->load("Common");
  uint32_t hash = fnd::calcCrc32("Common", 0);
  if (const data::FieldData* field = data::findFieldData(&hash)) {
    if (field->userGroup != 0) {
      hash = field->userGroup;
      loadUserGroup(&hash);
    }
    if (field->addSoundArc != 0) {
      hash = field->addSoundArc;
      loadAddSoundArc(&hash);
    }
    if (field->group != 0) {
      hash = field->group;
      if (const data::GroupData* group = data::findGroupData(&hash)) {
        for (int i = 0; i < group->count; i++) {
          if (const char* name = group->names[i]) {
            Manager::getInstance()->getLoader()->loadGroup(name, false);
          }
        }
      }
    }
    if (field->archive != nullptr) {
      Manager::getInstance()->getArchiveLoader()->loadArchive(
        field->archive);
    }
  }
  commonLoaded_ = true;
  nn::os::UnlockMutex(&s_groupMutex);
}

}
