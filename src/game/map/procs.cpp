#include <stdint.h>

#include <memory>
#include <vector>

#include "game/proc/proc_inst.hpp"
#include "game/proc/proc_manager.hpp"
#include "game/proc/proc_singleton.hpp"
#include "game/singleton.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

class ProcZoomSeq : public ProcInst {
public:
  ProcZoomSeq();
};

[[gnu::used]] ProcZoomSeq::ProcZoomSeq() = default;

class ProcSummon : public ProcInst {
public:
  ProcSummon();

private:
  uint8_t unknown_98_[0x10];
  std::vector<int> units_;
};

[[gnu::used]] ProcSummon::ProcSummon() = default;

class ProcPopup : public ProcInst {
public:
  ProcPopup();

private:
  std::weak_ptr<void> layout_;
};

[[gnu::used]] ProcPopup::ProcPopup() = default;

// Owns one polymorphic object that it destroys first.
class OwnedObject {
public:
  virtual ~OwnedObject() = default;
};

class BattleArea {
public:
  BattleArea();

  virtual ~BattleArea() {
    if (object_ != nullptr) {
      delete object_;
      object_ = nullptr;
    }
  }

private:
  OwnedObject* object_ = nullptr;
};

[[gnu::used]] BattleArea::BattleArea() = default;

class MapDrawDebug : public Singleton<MapDrawDebug> {
public:
  MapDrawDebug();
};

[[gnu::used]] MapDrawDebug::MapDrawDebug() = default;

class Transparent : public Singleton<Transparent> {
public:
  Transparent();

  ~Transparent() override {
    if (object_ != nullptr) {
      delete object_;
      object_ = nullptr;
    }
  }

private:
  OwnedObject* object_ = nullptr;
};

[[gnu::used]] Transparent::Transparent() = default;

namespace {

class ProcMoveWait : public ProcInst {
public:
  ProcMoveWait();
};

[[gnu::used]] ProcMoveWait::ProcMoveWait() = default;

class ProcMapSeqSkill : public ProcInst {
public:
  ProcMapSeqSkill();
};

[[gnu::used]] ProcMapSeqSkill::ProcMapSeqSkill() = default;

class ProcMapSeqZoomIn : public ProcInst {
public:
  ProcMapSeqZoomIn();
};

[[gnu::used]] ProcMapSeqZoomIn::ProcMapSeqZoomIn() = default;

class ProcMapSeqZoomOut : public ProcInst {
public:
  ProcMapSeqZoomOut();
};

[[gnu::used]] ProcMapSeqZoomOut::ProcMapSeqZoomOut() = default;

class ProcMapSeqResult : public ProcInst {
public:
  ProcMapSeqResult();

private:
  std::vector<int> units_;
  std::vector<int> items_;
};

[[gnu::used]] ProcMapSeqResult::ProcMapSeqResult() = default;

class ProcMapDrawer : public ProcInst {
public:
  ProcMapDrawer();
};

[[gnu::used]] ProcMapDrawer::ProcMapDrawer() = default;

class ProcUpdate : public ProcSingleton<ProcUpdate> {
public:
  ProcUpdate();
};

[[gnu::used]] ProcUpdate::ProcUpdate() = default;

class ProcFadeTimeSlip : public ProcSingleton<ProcFadeTimeSlip> {
public:
  ProcFadeTimeSlip();
};

[[gnu::used]] ProcFadeTimeSlip::ProcFadeTimeSlip() = default;

}

#pragma GCC visibility pop

}

namespace game {

template void ProcManager::EachByClass<map::ProcPopup>(
  const std::function<void(map::ProcPopup*)>& function);

}
