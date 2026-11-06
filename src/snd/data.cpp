#include "snd/data.hpp"

#include "snd/fade.hpp"
#include "snd/game.hpp"
#include "snd/target/base.hpp"

namespace snd::data {

namespace {

template <typename T>
const T* findByHash(const PointerList<T>* list, uint32_t hash) {
  for (const T* data : *list) {
    if (data->hash == hash) {
      return data;
    }
  }
  return nullptr;
}

template <typename T>
const T* findInList(const DataList<T>* list, uint32_t hash) {
  if (list == nullptr) {
    return nullptr;
  }
  for (int i = 0; i < list->count; i++) {
    if (list->data[i].hash == hash) {
      return &list->data[i];
    }
  }
  return nullptr;
}

template <typename T>
const DataList<T>* findList(const fnd::WeakHandle& file, const char* name) {
  return static_cast<const DataList<T>*>(
    file.cast<TargetElfFile>()->findData(name));
}

template <typename T>
const DataList<T>* findTargetList(const char* name) {
  return static_cast<const DataList<T>*>(g_target->findDataList(name));
}

}

#pragma GCC visibility push(hidden)

extern const PointerList<FieldData>* s_fieldDataList;
extern const PointerList<HashedData>* s_envDataList;
extern const PointerList<HashedData>* s_windDataList;
extern const PointerList<GroupData>* s_groupDataList;
extern const PointerList<HashedData>* s_userGroupDataList;
extern const PointerList<HashedData>* s_addSoundArcDataList;

extern fnd::WeakHandle s_bgmFile;
extern fnd::WeakHandle s_settingFile;
extern fnd::WeakHandle s_dataFile;

extern const DefineData s_defaultDefine;

#pragma GCC visibility pop

// The defaults are read directly and through the GOT.
extern const DefineData g_defaultDefine;
extern const MuseumData g_defaultMuseum;
extern const AnimeSoundData g_defaultAnimeSound;

const CtrlBgmData* findCtrlBgmData(const char* name) {
  const DataList<CtrlBgmData>* list =
    findList<CtrlBgmData>(s_bgmFile, "snd::data::s_ctrlBgmDataList");
  fnd::String key(name);
  if (list == nullptr) {
    return nullptr;
  }
  for (int i = 0; i < list->count; i++) {
    if (key == list->data[i].name) {
      return &list->data[i];
    }
  }
  return nullptr;
}

const FieldData* findFieldData(const uint32_t* hash) {
  if (s_fieldDataList == nullptr) {
    return nullptr;
  }
  uint32_t key = *hash;
  if (key == 0) {
    return nullptr;
  }
  return findByHash(s_fieldDataList, key);
}

const void* findEnvData(const uint32_t* hash) {
  if (s_envDataList == nullptr) {
    return nullptr;
  }
  return findByHash(s_envDataList, *hash);
}

const void* findWindData(const uint32_t* hash) {
  if (s_windDataList == nullptr) {
    return nullptr;
  }
  return findByHash(s_windDataList, *hash);
}

const GroupData* findGroupData(const uint32_t* hash) {
  if (s_groupDataList == nullptr) {
    return nullptr;
  }
  return findByHash(s_groupDataList, *hash);
}

const void* findUserGroupData(const uint32_t* hash) {
  if (s_userGroupDataList == nullptr) {
    return nullptr;
  }
  return findByHash(s_userGroupDataList, *hash);
}

const void* findAddSoundArcData(const uint32_t* hash) {
  if (s_addSoundArcDataList == nullptr) {
    return nullptr;
  }
  return findByHash(s_addSoundArcDataList, *hash);
}

const void* findSurroundData(const uint32_t* hash) {
  return findInList(
    findList<SurroundData>(s_dataFile, "snd::data::s_surroundDataList"),
    *hash);
}

const EffectData* findEffectData(const uint32_t* hash) {
  return reinterpret_cast<const EffectData*>(findInList(
    findList<EffectEntry>(s_dataFile, "snd::data::s_effectDataList"),
    *hash));
}

const FadeData* findFadeData(const uint32_t* hash) {
  return findInList(
    findList<FadeData>(s_dataFile, "snd::data::s_fadeDataList"), *hash);
}

const void* getSettingData() {
  return s_settingFile.cast<TargetElfFile>()->findData(
    "snd::data::s_settingData");
}

// A missing define reads as the zeroed default entry.
const DefineData* findDefineData(const uint32_t* hash) {
  const DataList<DefineData>* list =
    findList<DefineData>(s_dataFile, "snd::data::s_defineDataList");
  if (list == nullptr || list->count < 1) {
    return &s_defaultDefine;
  }
  for (int i = 0; i < list->count; i++) {
    if (list->data[i].hash == *hash) {
      return &list->data[i];
    }
  }
  return &g_defaultDefine;
}

const MuseumData* getMuseumData(int index) {
  const DataList<MuseumData>* list =
    findTargetList<MuseumData>("snd::data::s_museumDataList");
  if (list != nullptr && index < list->count) {
    return &list->data[index];
  }
  return &g_defaultMuseum;
}

int getMuseumDataCount() {
  const DataList<MuseumData>* list =
    findTargetList<MuseumData>("snd::data::s_museumDataList");
  if (list == nullptr) {
    return 0;
  }
  return list->count;
}

const AnimeSoundData* getAnimeSoundData(int index) {
  const DataList<AnimeSoundData>* list =
    findTargetList<AnimeSoundData>("snd::data::s_animeSoundDataList");
  if (list != nullptr && index < list->count) {
    return &list->data[index];
  }
  return &g_defaultAnimeSound;
}

int getAnimeSoundDataCount() {
  const DataList<AnimeSoundData>* list =
    findTargetList<AnimeSoundData>("snd::data::s_animeSoundDataList");
  if (list == nullptr) {
    return 0;
  }
  return list->count;
}

}
