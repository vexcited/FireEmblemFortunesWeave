#pragma once

#include <stdint.h>

#include <vector>

namespace game {

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

// The vtable slots without a known caller keep their index as name.
class SpotAttachmentBase : public GmapSpotAttachmentConst {
public:
  virtual ~SpotAttachmentBase();

  virtual void Unknown02();
  virtual Kind GetKind() const;
  virtual void Unknown04();
  virtual void Unknown05();
  virtual void Unknown06();
  virtual void Unknown07();
  virtual void Unknown08();
  virtual void Unknown09();
  virtual void Unknown10();
  virtual void Unknown11();
  virtual void Unknown12();
  virtual bool Unknown13();
  virtual bool Unknown14();
  virtual void OnStartPhase();
  virtual void OnEndPhase();
  virtual void OnProgressCycle(int cycle);
  virtual void Unknown18();
  virtual void Unknown19();
  virtual void Unknown20();
  virtual void Unknown21();
  virtual void Unknown22();
  virtual void Unknown23();
  virtual void Unknown24();
  virtual void Unknown25();
  virtual void Unknown26();
  virtual void Unknown27();
  virtual void OnEnterGmap();
  virtual void Unknown29();
  virtual void Unknown30();
  virtual void Unknown31();
  virtual void Unknown32();
  virtual const void* GetDispatchLegion() const;
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

private:
  uint8_t unknown_00_[0x30];
  std::vector<SpotLink*> links_;
  uint8_t unknown_48_[0x30];
  const GmapSpotData* data_;
  uint8_t unknown_80_[0x98];
  SpotAttachmentBase* attachment_;
};

#pragma GCC visibility pop

}
