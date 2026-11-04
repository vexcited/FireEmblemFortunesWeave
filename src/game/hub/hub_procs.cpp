#include "game/proc/proc_inst.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class ProcReloadMap : public ProcInst {
public:
  ~ProcReloadMap() override;
};

class ProcFadeReload : public ProcInst {
public:
  ~ProcFadeReload() override;
};

class ProcGainItemSupportSeq : public ProcInst {
public:
  ~ProcGainItemSupportSeq() override;
};

class ProcHubSeqObeliskWarpIn : public ProcInst {
public:
  ~ProcHubSeqObeliskWarpIn() override;
};

namespace {

class BuildSceneSeq : public ProcInst {
public:
  BuildSceneSeq();

  ~BuildSceneSeq() override;
};

[[gnu::used]] BuildSceneSeq::BuildSceneSeq() = default;

class ProcHubScript : public ProcInst {
public:
  ProcHubScript();

  ~ProcHubScript() override;
};

[[gnu::used]] ProcHubScript::ProcHubScript() = default;

class ProcHubOutside : public ProcInst {
public:
  ProcHubOutside();

  ~ProcHubOutside() override;
};

[[gnu::used]] ProcHubOutside::ProcHubOutside() = default;

class ProcExitFadeOut : public ProcInst {
public:
  ProcExitFadeOut();

  ~ProcExitFadeOut() override;
};

[[gnu::used]] ProcExitFadeOut::ProcExitFadeOut() = default;

class ProcTalkSetupBase : public ProcInst {
public:
  ProcTalkSetupBase();

  ~ProcTalkSetupBase() override;
};

[[gnu::used]] ProcTalkSetupBase::ProcTalkSetupBase() = default;

class ProcTalkSetupEnd : public ProcTalkSetupBase {
public:
  ProcTalkSetupEnd();

  ~ProcTalkSetupEnd() override;
};

[[gnu::used]] ProcTalkSetupEnd::ProcTalkSetupEnd() = default;

class ProcEscapeSupport : public ProcInst {
public:
  ProcEscapeSupport();

  ~ProcEscapeSupport() override;
};

[[gnu::used]] ProcEscapeSupport::ProcEscapeSupport() = default;

class ProcTalkSetupBegin : public ProcTalkSetupBase {
public:
  ProcTalkSetupBegin();

  ~ProcTalkSetupBegin() override;
};

[[gnu::used]] ProcTalkSetupBegin::ProcTalkSetupBegin() = default;

class ProcHubReloadDispos : public ProcInst {
public:
  ProcHubReloadDispos();

  ~ProcHubReloadDispos() override;
};

[[gnu::used]] ProcHubReloadDispos::ProcHubReloadDispos() = default;

class ProcPopWorldPostSeq : public ProcInst {
public:
  ProcPopWorldPostSeq();

  ~ProcPopWorldPostSeq() override;
};

[[gnu::used]] ProcPopWorldPostSeq::ProcPopWorldPostSeq() = default;

class ProcPushWorldPrepareSeq : public ProcInst {
public:
  ProcPushWorldPrepareSeq();

  ~ProcPushWorldPrepareSeq() override;
};

[[gnu::used]] ProcPushWorldPrepareSeq::ProcPushWorldPrepareSeq() = default;

class ProcSimulationDungeonDispos : public ProcInst {
public:
  ProcSimulationDungeonDispos();

  ~ProcSimulationDungeonDispos() override;
};

[[gnu::used]] ProcSimulationDungeonDispos::ProcSimulationDungeonDispos() = default;

}

#pragma GCC visibility pop

BuildSceneSeq::~BuildSceneSeq() = default;

ProcHubScript::~ProcHubScript() = default;

ProcHubOutside::~ProcHubOutside() = default;

ProcExitFadeOut::~ProcExitFadeOut() = default;

ProcTalkSetupBase::~ProcTalkSetupBase() = default;

ProcTalkSetupEnd::~ProcTalkSetupEnd() = default;

ProcEscapeSupport::~ProcEscapeSupport() = default;

ProcTalkSetupBegin::~ProcTalkSetupBegin() = default;

ProcHubReloadDispos::~ProcHubReloadDispos() = default;

ProcPopWorldPostSeq::~ProcPopWorldPostSeq() = default;

ProcPushWorldPrepareSeq::~ProcPushWorldPrepareSeq() = default;

ProcSimulationDungeonDispos::~ProcSimulationDungeonDispos() = default;

ProcReloadMap::~ProcReloadMap() = default;

ProcFadeReload::~ProcFadeReload() = default;

ProcGainItemSupportSeq::~ProcGainItemSupportSeq() = default;

ProcHubSeqObeliskWarpIn::~ProcHubSeqObeliskWarpIn() = default;

}
