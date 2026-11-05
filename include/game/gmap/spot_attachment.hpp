#pragma once

#include <stdint.h>

#include <vector>

#include "game/gmap/spot.hpp"

namespace game {

struct GmapCommandData;
struct GmapConstructionData;
struct GmapConstructedObjectData;

}

namespace game::gmap {

#pragma GCC visibility push(hidden)

// The name is a guess, it tests the game variable of a world map feature.
bool IsGmapFeatureUnlocked(int feature);

class SpotAttachmentFarm : public SpotAttachmentBase {
public:
  ~SpotAttachmentFarm() override;


  int Unknown02() override;
  Kind GetKind() const override;
  int Unknown04() override;
  int Unknown05() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  void Unknown11() override;
  int Unknown12() override;
  bool Unknown13() override;
  bool Unknown14() override;
  void OnStartPhase() override;
  void OnEndPhase() override;
  bool Unknown18() override;
  int Unknown21() override;
  const void* Unknown24() override;
  const void* Unknown25() override;
  bool Unknown26() override;
  const void* Unknown27() override;
  const void* Unknown34() override;
  void Unknown38() override;

private:
  const GmapConstructedObjectData* GetData() const;
  const GmapConstructionData* GetGrowthData() const;

  uint8_t unknown2b_[0xd];
  std::vector<uint32_t> stocks_;
  const void* unknown50_;
  bool unknown58_;
};

class SpotAttachmentRecruit : public SpotAttachmentBase {
public:
  int Unknown02() override;
  Kind GetKind() const override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  void Unknown11() override;
  bool Unknown13() override;
  void OnStartPhase() override;
  void OnEndPhase() override;
  bool Unknown18() override;
  int Unknown22() override;
  const void* Unknown23() override;
  void Deserialize(Stream& stream, int version) override;
  void Unknown38() override;

private:
  const GmapCommandData* GetData() const;

  int unknown2c_;
  const void* unknown30_;
  bool unknown38_;
};

class SpotAttachmentDispatch : public SpotAttachmentBase {
public:
  Kind GetKind() const override;
  void Unknown11() override;
  void OnStartPhase() override;
  void OnProgressCycle(int cycle) override;
  const void* Unknown34() override;
  void Unknown38() override;

protected:
  std::vector<const void*> legions_;
};

class SpotAttachmentExplore : public SpotAttachmentDispatch {
public:
  int Unknown02() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  int Unknown12() override;
  bool Unknown13() override;
  void OnStartPhase() override;
  void OnEndPhase() override;
  int Unknown31() override;
  int Unknown32() override;
  void Unknown39() override;
  virtual void Unknown40();

private:
  const GmapCommandData* GetData() const;
};

class SpotAttachmentDungeon : public SpotAttachmentDispatch {
public:
  int Unknown02() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  bool Unknown13() override;
  void OnStartPhase() override;
  void OnEndPhase() override;
  int Unknown31() override;
  int Unknown32() override;

private:
  const GmapCommandData* GetData() const;

  // The name is a guess, it looks a row up by the spot name.
  const void* FindDungeon() const;
};

class SpotAttachmentFort : public SpotAttachmentDispatch {
public:
  int Unknown02() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  bool Unknown13() override;
  void OnStartPhase() override;
  void OnEndPhase() override;
  int Unknown31() override;
  int Unknown32() override;

private:
  const GmapCommandData* GetData() const;

  int unknown48_;
};

class SpotAttachmentAnimal : public SpotAttachmentBase {
public:
  int Unknown02() override;
  Kind GetKind() const override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  void Unknown11() override;
  bool Unknown13() override;
  void OnStartPhase() override;
  void OnEndPhase() override;
  void Unknown38() override;

private:
  const GmapCommandData* GetData() const;

  // The name is a guess, it runs once the lured animal is idle.
  void Lure();
};

struct ReconstructionState {
  uint8_t unknown00_[0x44];
  uint8_t unknown44;
};

class SpotAttachmentReconstruction : public SpotAttachmentBase {
public:
  Kind GetKind() const override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  void Unknown11() override;
  int Unknown12() override;
  bool Unknown13() override;
  void OnStartPhase() override;
  void OnEndPhase() override;
  int Unknown30() override;
  int Unknown31() override;
  int Unknown32() override;
  void Deserialize(Stream& stream, int version) override;
  void Unknown38() override;

private:
  int unknown2c_;
  const ReconstructionState* state_;
};

#pragma GCC visibility pop

}
