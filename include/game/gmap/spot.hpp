#pragma once

#include <stdint.h>

#include <vector>

namespace game {

class Stream;
struct GmapSpotData;

class GmapSpotAttachmentConst {
public:
  enum class Kind : uint8_t {
    kUnknown1 = 1,
  };
};

}

namespace game::gmap {

#pragma GCC visibility push(hidden)

// Looks one spot row up through a fixed key, the name is a guess.
const GmapSpotData* FindBaseSpotData();

class Spot;
class SpotAttachmentBase;

struct SpotExplore;

// The lured animal of a spot.
struct SpotAnimal {
  uint8_t unknown_00_[0x8];
  const void* const* candidates;
  uint8_t unknown_10_[0x30];
  int state;
  const void* target;
  const void* unknown_50;
};

struct SpotFarmObject {
  uint8_t unknown_00_[0x30];
  const void* unknown_30;
};

// The farm built on a spot, it points back to its attachment.
struct SpotFarm {
  const SpotFarmObject* object;
  SpotAttachmentBase* attachment;
};

// A world map date, compared through its packed key.
struct GmapTime {
  // The name is a guess, callers only test whether it exceeds one.
  int GetElapsed(const GmapTime& since) const;

  // Brings the fields back into their ranges after a change.
  void Normalize();

  int16_t year;
  int16_t month;
  int16_t day;
  int16_t hour;
  int16_t minute;
  int16_t second;

  uint64_t GetKey() const {
    return (static_cast<int64_t>(year) << 32) +
      (static_cast<int64_t>(month) << 24) +
      (static_cast<int64_t>(day) << 18) +
      (static_cast<int64_t>(hour) << 12) +
      (static_cast<int64_t>(minute) << 6) + second;
  }
};

class GmapClock {
public:
  virtual ~GmapClock();

  static const GmapTime& GetTime() {
    return instance_ != nullptr ? instance_->time_ : kDefaultTime;
  }

  static GmapClock* instance_;
  [[gnu::visibility("default")]] static const GmapTime kDefaultTime;

private:
  GmapTime time_;
};

// The vtable slots without a known caller keep their index as name.
class SpotAttachmentBase : public GmapSpotAttachmentConst {
public:
  virtual ~SpotAttachmentBase() = default;

  virtual int Unknown02();
  virtual Kind GetKind() const = 0;
  virtual int Unknown04();
  virtual int Unknown05();
  virtual bool Unknown06();
  virtual uint8_t Unknown07() = 0;
  virtual uint8_t Unknown08() = 0;
  virtual void Unknown09();
  virtual void Unknown10();
  virtual void Unknown11() = 0;
  virtual int Unknown12();
  virtual bool Unknown13();
  virtual bool Unknown14();
  virtual void OnStartPhase() = 0;
  virtual void OnEndPhase() = 0;
  virtual void OnProgressCycle(int cycle);
  virtual bool Unknown18();
  virtual int Unknown19();
  virtual void Unknown20();
  virtual int Unknown21();
  virtual int Unknown22();
  virtual const void* Unknown23();
  virtual const void* Unknown24();
  virtual const void* Unknown25();
  virtual bool Unknown26();
  virtual const void* Unknown27();
  virtual void OnEnterGmap();
  virtual void Unknown29();
  virtual int Unknown30();
  virtual int Unknown31();
  virtual int Unknown32();
  virtual const void* GetDispatchLegion() const;
  virtual const void* Unknown34();
  virtual void Unknown35();
  virtual void Serialize(Stream& stream);
  virtual void Deserialize(Stream& stream, int version);
  virtual void Unknown38() = 0;
  virtual void Unknown39();

protected:
  // The start date of the attachment and the date of its last update.
  GmapTime start_;
  GmapTime updated_;
  Spot* spot_;
  bool unknown28_;
  uint8_t unknown29_;
  uint8_t unknown2a_;
};

// A road from a spot to a neighbor.
class SpotLink {
public:
  const Spot* GetSpot() const {
    return spot_;
  }

private:
  uint8_t unknown_00_[0x8];
  const Spot* spot_;
};

class Spot {
public:
  const std::vector<SpotLink*>& GetLinks() const {
    return links_;
  }

  const GmapSpotData* GetData() const {
    return data_;
  }

  // Kind 1 attachments answering slot 14 count as no attachment.
  SpotAttachmentBase* GetAttachment() const {
    if (attachment_ != nullptr &&
      attachment_->GetKind() == GmapSpotAttachmentConst::Kind::kUnknown1 &&
      attachment_->Unknown14()) {
      return nullptr;
    }

    return attachment_;
  }

  // 13 without data, 14 for a farm, else a type byte of the data row.
  uint8_t GetType() const;

  bool IsRecruiting() const {
    return recruiting_;
  }

  void SetRecruiting(bool recruiting) {
    recruiting_ = recruiting;
  }

  SpotExplore* GetExplore() const {
    return GetType() == 5 ? explore_ : nullptr;
  }

  SpotAnimal* GetAnimal() const {
    return GetType() == 6 ? animal_ : nullptr;
  }

  // The name is a guess, it looks a row up by the key at 0x60.
  const void* FindReconstruction() const;

  SpotFarm* GetFarm() const {
    return farm_;
  }

  const void* GetRecruit() const {
    return recruit_;
  }

  uint8_t GetFlags() const {
    return flags_;
  }

private:
  uint8_t unknown_00_[0x30];
  std::vector<SpotLink*> links_;
  uint8_t unknown_48_[0x2c];
  bool recruiting_;
  uint8_t unknown_75_[0x3];
  const GmapSpotData* data_;
  uint8_t unknown_80_[0x10];
  SpotExplore* explore_;
  SpotAnimal* animal_;
  SpotFarm* farm_;
  const void* recruit_;
  uint8_t unknown_b0_[0x2];
  uint8_t flags_;
  uint8_t unknown_b3_[0x65];
  SpotAttachmentBase* attachment_;
};

#pragma GCC visibility pop

}
