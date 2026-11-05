#include <stdint.h>

#include <map>
#include <memory>
#include <vector>

#include "game/map/mesh_data.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

class MassMeshData;

// The draw entries keep meshes keyed by their cell.
class DrawEntry {
public:
  virtual ~DrawEntry();
};

class MapDrawBase {
public:
  virtual ~MapDrawBase() = default;

  virtual void Initialize() {}
  virtual void Update() = 0;
  virtual void Draw() = 0;
  virtual int GetKind() const = 0;
  virtual bool IsVisible() const;

  virtual bool IsReady() const {
    return true;
  }

protected:
  bool enabled_ = false;
};

class MapDrawCursor : public MapDrawBase {
public:
  ~MapDrawCursor() override;

  void Update() override;
  void Draw() override;

  int GetKind() const override {
    return 0;
  }

private:
  std::map<uint64_t, DrawEntry> entries_;
  std::shared_ptr<void> model_;
};

MapDrawCursor::~MapDrawCursor() = default;

class MapPanelRoute : public MapDrawBase {
public:
  ~MapPanelRoute() override;

  void Initialize() override {}
  void Update() override;
  void Draw() override;

  int GetKind() const override {
    return 15;
  }

private:
  std::map<uint64_t, DrawEntry> entries_;
  std::shared_ptr<void> model_;
};

MapPanelRoute::~MapPanelRoute() = default;

class MapPanelRage : public MapDrawBase {
public:
  ~MapPanelRage() override;

  void Initialize() override {}
  void Update() override;
  void Draw() override;

  int GetKind() const override {
    return 4;
  }

private:
  std::map<uint64_t, DrawEntry> entries_;
  std::map<uint64_t, DrawEntry> sub_entries_;
  std::vector<int> cells_;
};

MapPanelRage::~MapPanelRage() = default;

class MapPanelTargetSelect : public MapDrawBase {
public:
  ~MapPanelTargetSelect() override;

  void Initialize() override {}
  void Update() override;
  void Draw() override;
  int GetKind() const override;

private:
  std::map<uint64_t, DrawEntry> entries_;
};

MapPanelTargetSelect::~MapPanelTargetSelect() = default;

int MapPanelTargetSelect::GetKind() const {
  return 12;
}

class MapPanelTargetSelectSub : public MapDrawBase {
public:
  ~MapPanelTargetSelectSub() override;

  void Initialize() override {}
  void Update() override;
  void Draw() override;
  int GetKind() const override;

private:
  std::map<uint64_t, DrawEntry> entries_;
};

MapPanelTargetSelectSub::~MapPanelTargetSelectSub() = default;

int MapPanelTargetSelectSub::GetKind() const {
  return 13;
}

// Only the empty initialization and the kind are reconstructed.
class MapPanelDanger : public MapDrawBase {
public:
  ~MapPanelDanger() override;

  void Initialize() override;
  void Update() override;
  void Draw() override;
  int GetKind() const override;
};

void MapPanelDanger::Initialize() {}

int MapPanelDanger::GetKind() const {
  return 3;
}

// Only the empty initialization and the kind are reconstructed.
class MapPanelDeployAction : public MapDrawBase {
public:
  ~MapPanelDeployAction() override;

  void Initialize() override;
  void Update() override;
  void Draw() override;
  int GetKind() const override;
};

void MapPanelDeployAction::Initialize() {}

int MapPanelDeployAction::GetKind() const {
  return 10;
}

// Only the empty initialization and the kind are reconstructed.
class MapPanelTutorial : public MapDrawBase {
public:
  ~MapPanelTutorial() override;

  void Initialize() override;
  void Update() override;
  void Draw() override;
  int GetKind() const override;
};

void MapPanelTutorial::Initialize() {}

int MapPanelTutorial::GetKind() const {
  return 5;
}

// Only the empty initialization and the kind are reconstructed.
class MapPanelTrickTarget : public MapDrawBase {
public:
  ~MapPanelTrickTarget() override;

  void Initialize() override;
  void Update() override;
  void Draw() override;
  int GetKind() const override;
};

void MapPanelTrickTarget::Initialize() {}

int MapPanelTrickTarget::GetKind() const {
  return 6;
}

// Only the empty initialization and the kind are reconstructed.
class MapPanelSortie : public MapDrawBase {
public:
  ~MapPanelSortie() override;

  void Initialize() override;
  void Update() override;
  void Draw() override;
  int GetKind() const override;
};

void MapPanelSortie::Initialize() {}

int MapPanelSortie::GetKind() const {
  return 16;
}

class MapEmulateBattleInfo {
public:
  MapEmulateBattleInfo();
  virtual ~MapEmulateBattleInfo() = default;

private:
  uint8_t unknown_08_[0x8];
  std::vector<int> results_;
};

[[gnu::used]] MapEmulateBattleInfo::MapEmulateBattleInfo() = default;

class DeployInfo {
public:
  ~DeployInfo();

private:
  uint8_t unknown_00_[0x1f1e8];
};

class MapDrawDeployManager {
public:
  MapDrawDeployManager();
  virtual ~MapDrawDeployManager() = default;

private:
  DeployInfo infos_[3];
};

[[gnu::used]] MapDrawDeployManager::MapDrawDeployManager() = default;

class MassMeshGroup {
public:
  virtual ~MassMeshGroup();

private:
  std::map<uint64_t, MassMeshData> meshes_[4];
  void* unknown_68_ = nullptr;
  MassMeshData mesh_;
};

MassMeshGroup::~MassMeshGroup() = default;

#pragma GCC visibility pop

}
