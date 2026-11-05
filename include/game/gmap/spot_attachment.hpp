#pragma once

#include <stdint.h>

#include <vector>

#include "game/gmap/spot.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

// The data row of an attachment kind, slots 7 and 8 return its bytes at
// 0x40 and 0x41 and slot 2 six times the byte at 0x42.
struct SpotAttachmentData {
  uint8_t unknown00_[0x40];
  uint8_t unknown40;
  uint8_t unknown41;
  uint8_t unknown42;
};

struct FarmData {
  uint8_t unknown00_[0x20];
  uint8_t unknown20;
  uint8_t unknown21_[0xf];
  uint8_t unknown30;
};

class SpotAttachmentFarm : public SpotAttachmentBase {
public:
  int Unknown02() override;
  Kind GetKind() const override;
  int Unknown04() override;
  int Unknown05() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  void Unknown12() override;
  bool Unknown14() override;
  int Unknown21() override;
  bool Unknown26() override;
  const void* Unknown27() override;
  const void* Unknown34() override;

private:
  const FarmData* GetData() const;
  const FarmData* GetGrowthData() const;

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
  int Unknown22() override;
  const void* Unknown23() override;

private:
  const SpotAttachmentData* GetData() const;

  int unknown2c_;
  const void* unknown30_;
};

class SpotAttachmentDispatch : public SpotAttachmentBase {
public:
  Kind GetKind() const override;
  void OnStartPhase() override;
  void OnProgressCycle(int cycle) override;
  const void* Unknown34() override;

protected:
  std::vector<const void*> legions_;
};

class SpotAttachmentExplore : public SpotAttachmentDispatch {
public:
  int Unknown02() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  void OnEndPhase() override;
  int Unknown31() override;

private:
  const SpotAttachmentData* GetData() const;
};

class SpotAttachmentDungeon : public SpotAttachmentDispatch {
public:
  int Unknown02() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  void OnEndPhase() override;
  int Unknown31() override;

private:
  const SpotAttachmentData* GetData() const;
};

class SpotAttachmentFort : public SpotAttachmentDispatch {
public:
  int Unknown02() override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;
  int Unknown31() override;

private:
  const SpotAttachmentData* GetData() const;

  int unknown48_;
};

class SpotAttachmentAnimal : public SpotAttachmentBase {
public:
  int Unknown02() override;
  Kind GetKind() const override;
  uint8_t Unknown07() override;
  uint8_t Unknown08() override;

private:
  const SpotAttachmentData* GetData() const;
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
  void OnEndPhase() override;
  int Unknown30() override;
  int Unknown31() override;

private:
  int unknown2c_;
  const ReconstructionState* state_;
};

#pragma GCC visibility pop

}
