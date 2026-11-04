#include <set>
#include <string>

#include "game/map/binder.hpp"
#include "game/map/cursor.hpp"
#include "game/map/map_singletons.hpp"
#include "game/proc/proc_inst.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class Unit;

class UnitConst {};

namespace map {

class Zoom : public Singleton<Zoom>, public Binder {};

class ActionConst {};

class Action : public Singleton<Action>,
               public Binder,
               public UnitConst,
               public ActionConst {
public:
  Action();

  ~Action() override {
    units_.clear();
    targets_.clear();
  }

  void OnBind() override {
    Singleton<Cursor>::GetInstance()->Bind();
    Singleton<Zoom>::GetInstance()->Bind();
  }

  void OnUnbind() override {
    Singleton<Cursor>::GetInstance()->Unbind();
    Singleton<Zoom>::GetInstance()->Unbind();
  }

private:
  static std::set<const Unit*> units_;
  static std::set<const Unit*> targets_;
};

[[gnu::used]] Action::Action() = default;

namespace {

class ProcUnitAction : public ProcInst, public ActionConst {
public:
  ProcUnitAction();

  ~ProcUnitAction() override {
    Singleton<Action>::GetInstance()->Unbind();
  }

protected:
  Unit* unit_;
};

[[gnu::used]] ProcUnitAction::ProcUnitAction() = default;

class ProcUnitReload : public ProcUnitAction {
public:
  ProcUnitReload();
};

[[gnu::used]] ProcUnitReload::ProcUnitReload() = default;

class ProcUnitDead : public ProcUnitAction {
public:
  ProcUnitDead();
};

[[gnu::used]] ProcUnitDead::ProcUnitDead() = default;

class ProcUnitMorph : public ProcUnitAction {
public:
  ProcUnitMorph();
};

[[gnu::used]] ProcUnitMorph::ProcUnitMorph() = default;

class ProcUnitWait : public ProcUnitAction {
public:
  void Unknown02() override;
  virtual bool IsWaiting() const = 0;
};

class ProcWaitMotion : public ProcUnitWait {
public:
  ProcWaitMotion();

  bool IsWaiting() const override;
};

[[gnu::used]] ProcWaitMotion::ProcWaitMotion() = default;

class ProcUnitBlaze : public ProcUnitAction {
public:
  virtual bool Unknown18() {
    return false;
  }

  virtual void* Unknown19() = 0;
  virtual void Unknown20() {}
  virtual void Unknown21();
  virtual void Unknown22();
  virtual void Unknown23() {}
  virtual void Unknown24() = 0;
  virtual void Unknown25();
  virtual void Unknown26() = 0;
  virtual void Unknown27() = 0;
};

class ProcUnitWarp : public ProcUnitAction {
public:
  ProcUnitWarp();

private:
  uint8_t unknown_a0_[0x10];
  std::string effect_;
  std::string sound_;
};

[[gnu::used]] ProcUnitWarp::ProcUnitWarp() = default;

class ProcUnitBlazeOff : public ProcUnitBlaze {
public:
  ProcUnitBlazeOff();

  void* Unknown19() override;
  void Unknown24() override;
  void Unknown26() override;
  void Unknown27() override;
};

[[gnu::used]] ProcUnitBlazeOff::ProcUnitBlazeOff() = default;

class ProcUnitBurstAdd : public ProcUnitBlaze {
public:
  ProcUnitBurstAdd();

  void* Unknown19() override;
  void Unknown24() override;
  void Unknown26() override;
  void Unknown27() override;
};

[[gnu::used]] ProcUnitBurstAdd::ProcUnitBurstAdd() = default;

}

}

#pragma GCC visibility pop

}
