#pragma once

#include <cstdint>
#include <vector>

#include "snd/fnd/string.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/handle_ptr.hpp"

namespace snd::target {

// The base of the data files of the sound engine. Only its registry and
// the data lookup are used here.
class ElfFile : public HandlePtr {
public:
  static void** registry();

  virtual void** getRegistry() const;
  virtual void unknown3();
  virtual void unknown4();
  virtual void unknown5();
  virtual void unknown6();
  virtual void unknown7();
  virtual void unknown8();
  virtual void unknown9();
  virtual void unknown10();
  virtual void unknown11();
  virtual void unknown12();
  virtual void unknown13();
  virtual void unknown14();
  virtual const void* findData(const char* name);
};

}

namespace snd {

class TargetElfFile : public target::ElfFile {
public:
  static void** registry() {
    static void* base = target::ElfFile::registry();
    return &base;
  }
};

namespace data {

// A table exported by a data file, its entries start with the hash of
// their name.
template <typename T>
struct DataList {
  const T* data;
  int count;
};

struct HashedData {
  uint32_t hash;
};

template <typename T>
using PointerList = std::vector<const T*, fnd::Allocator<const T*>>;

struct SurroundData {
  uint32_t hash;
  uint8_t unknown_04_[0x24];
};

struct EffectEntry {
  uint32_t hash;
  uint8_t unknown_04_[0x14];
};

struct DefineData {
  uint32_t hash;
  float value;
};

struct CtrlBgmData {
  const char* name;
  int tempo;
  const char* tracks[6];
  // Per track, the bridge played when leaving it, the beats it waits for
  // and the beats until the old track fades out over its fade time.
  const char* bridges[6];
  int bridgeWaits[6];
  int bridgeBeats[6];
  int fadeTimes[6];
  int changeModes[6];
};

struct MuseumData {
  uint8_t unknown_00_[0x30];
};

struct AnimeSoundData {
  uint8_t unknown_00_[0x30];
};

const CtrlBgmData* findCtrlBgmData(const char* name);
const void* findUserGroupData(const uint32_t* hash);
const void* findAddSoundArcData(const uint32_t* hash);
const void* getSettingData();
const DefineData* findDefineData(const uint32_t* hash);
const MuseumData* getMuseumData(int index);
int getMuseumDataCount();
const AnimeSoundData* getAnimeSoundData(int index);
int getAnimeSoundDataCount();

}

}
