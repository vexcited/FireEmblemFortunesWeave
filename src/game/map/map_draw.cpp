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

  void Update() override;
  void Draw() override;
  int GetKind() const override;

private:
  std::map<uint64_t, DrawEntry> entries_;
};

MapPanelTargetSelect::~MapPanelTargetSelect() = default;

class MapPanelTargetSelectSub : public MapDrawBase {
public:
  ~MapPanelTargetSelectSub() override;

  void Update() override;
  void Draw() override;
  int GetKind() const override;

private:
  std::map<uint64_t, DrawEntry> entries_;
};

MapPanelTargetSelectSub::~MapPanelTargetSelectSub() = default;

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
