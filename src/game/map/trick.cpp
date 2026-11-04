#include <string.h>

#include <unordered_set>

#include "game/data/data_files.hpp"
#include "game/map/map_character.hpp"
#include "game/map/map_singletons.hpp"
#include "game/map/situation.hpp"
#include "game/map/trick.hpp"
#include "game/map/unit.hpp"

#pragma GCC visibility push(hidden)
#include "msg/message_manager.hpp"
#pragma GCC visibility pop

namespace game {

#pragma GCC visibility push(hidden)

// The terrain row layout is not reconstructed, these read its fields.
template<typename T>
T ReadTerrain(const TerrainData& data, size_t offset) {
  T value;
  memcpy(&value, reinterpret_cast<const char*>(&data) + offset, sizeof(T));
  return value;
}

const TerrainData* ResolveTerrain(const TerrainData* data);
const void* GetTerrainEffect(const TerrainData* data, const Unit* unit);
bool CanTerrainTarget(const TerrainData* data, const Unit* unit);

namespace map {

class TrickOwner {
public:
  bool IsValid() const {
    return id_ != 0;
  }

  const void* Get() const;

  void Clear() {
    id_ = 0;
  }

private:
  uint8_t id_ = 0;
};

namespace {

constexpr uint8_t kTrickCategories[] = {
  0, 1, 0, 2, 2, 2, 2, 2, 3, 4, 0, 3, 5, 5, 6, 7, 8,
};

class TrickEntity : public TrickData {
public:
  static constexpr uint16_t kFlagEnabled = 0x01;
  static constexpr uint16_t kFlagDisabled = 0x10;

  explicit TrickEntity(int16_t index) : index_(index) {}

  bool IsValid() const override {
    return type_ != 0;
  }

  bool IsEmpty() const override {
    return type_ == 0;
  }

  bool IsActive() const override;
  bool IsInside(int x, int z) const override;

  int GetIndex() const override {
    return index_;
  }

  uint8_t GetType() const override {
    return type_;
  }

  uint8_t GetCategory() const override {
    return kTrickCategories[type_];
  }

  int GetX() const override {
    return x_;
  }

  int GetZ() const override {
    return z_;
  }

  int GetWidth() const override {
    return width_;
  }

  int GetHeight() const override {
    return height_;
  }

  int GetLeft() const override {
    return GetX();
  }

  int GetTop() const override {
    return GetZ();
  }

  int GetRight() const override {
    return GetX() + GetWidth() - 1;
  }

  int GetBottom() const override {
    return GetZ() + GetHeight() - 1;
  }

  Pos GetNearestPos(int x, int z) const override;

  const std::vector<Pos>& GetPoss() const override {
    return poss_;
  }

  int GetPosCount() const override {
    return poss_.size();
  }

  const Pos* GetPos(int index) const override {
    return &poss_[index];
  }

  uint8_t GetLife() const override {
    return life_;
  }

  uint8_t GetMaxLife() const override {
    return max_life_;
  }

  uint8_t GetForce() const override {
    return force_;
  }

  uint8_t GetStatus() const override {
    return status_;
  }

  uint8_t Unknown23() const override;

  const ItemData* GetItem() const override {
    return item_;
  }

  const ItemData* GetItemFor(const Unit* unit) const override;

  const LegionData* GetLegion() const override {
    return legion_;
  }

  const void* GetOwner() const override {
    return owner_.IsValid() ? owner_.Get() : nullptr;
  }

  const TerrainData* GetData() const override {
    return data_ != nullptr ? ResolveTerrain(data_) : nullptr;
  }

  const char* GetTid() const override {
    return data_ != nullptr ? data_->key.text : "null";
  }

  uint8_t Unknown30() const override {
    return unknown_0d_;
  }

  uint8_t Unknown31() const override;
  uint8_t Unknown32() const override;
  int Unknown33() const override;
  bool IsBreakable() const override;
  bool Unknown35(const Unit* unit) const override;
  bool Unknown36() const override;
  bool Unknown37(const void* skill) const override;
  Vector3 GetWorldPos() const override;

  void SetLife(uint8_t life) override {
    life_ = life;
  }

  void SetMaxLife(uint8_t life) override {
    max_life_ = life;
  }

  uint8_t Unknown41() const override {
    return unknown_10_;
  }

  uint8_t Unknown42() const override {
    return unknown_11_;
  }

  int GetAngle() const override {
    return angle_;
  }

  void SetAngle(int16_t angle) override;
  uint8_t Unknown45(bool second) const override;
  int GetDistanceSq(int x, int z) const override;
  void SetEnable(bool enable) override;

  void Unknown48(bool enable) override {
    flags_ = (flags_ & ~0x200) | (enable ? 0x200 : 0);
  }

  void Unknown49(bool enable) override {
    flags_ = (flags_ & ~0x20) | (enable ? 0x20 : 0);
  }

  void SetCollision(bool enable) override;

  void Enable() override {
    SetEnable(true);
  }

  void Disable() override {
    SetEnable(false);
  }

  void SetForce(uint8_t force) override {
    force_ = force;
  }

  bool Unknown54() const override;
  void SetStatus(uint8_t status) override;

  void SetItem(const ItemData* item) override {
    item_ = item;
  }

  void SetLegion(const LegionData* legion) override {
    legion_ = legion;
  }

  bool Unknown58() const override;

  bool Unknown59() const override {
    return flags_ & kFlagEnabled;
  }

  bool Unknown60() const override {
    return !(flags_ & kFlagEnabled);
  }

  bool Unknown61() const override {
    return (flags_ & 0x200) != 0;
  }

  bool Unknown62() const override {
    return (flags_ & 0x20) != 0;
  }

  bool Unknown63() const override {
    return (flags_ & 0x02) != 0;
  }

  void Unknown64() override {
    flags_ |= 0x40;
  }

  bool Unknown65() const override;

  bool IsDone() const override {
    return (flags_ & 0x100) != 0;
  }

  void SetDone(bool done) override {
    flags_ = (flags_ & ~0x100) | (done ? 0x100 : 0);
  }

  int GetLifeValue() const override {
    return life_;
  }

  void SetLifeValue(uint8_t life) override {
    life_ = life;
  }

  int GetMaxLifeValue() const override {
    return max_life_;
  }

  uint8_t Unknown71() const override;
  uint8_t Unknown72() const override;
  const void* Unknown73(const Unit* unit) const override;
  bool Unknown74(const Unit* unit) const override;
  bool Unknown75(int x, int z, bool check) const override;
  bool Unknown76(const Unit* unit) const override;
  void SetTarget(uint8_t a, uint8_t b, uint8_t c, uint8_t d) override;
  void SetTarget(uint8_t a, uint8_t b, uint8_t c) override;
  void SetTarget(const PersonData* person) override;
  void SetTarget(const SkillData* skill) override;
  void Immediate() override;
  void PlayShoot() override;
  bool IsPlaying() const override;
  void EachObject(
    const std::function<void(MapObject&)>& function) const override;
  bool UpdateModelPosition() override;
  bool TryUpdateObject() override;
  bool TryCreateModel() override;
  bool Unknown88() override;
  void SetAlpha(float alpha) override;
  void Clear() override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;
  void EachPos(
    const std::function<void(int, int)>& function) const override;

  void Unknown94(const Unit* unit) override {
    Unknown95(0, unit);
  }

  void Unknown95(int kind, const Unit* unit) override;
  void Unknown96() override;
  void Unknown97() override;

  bool HasFlag(const TrickFlags& flags) const override {
    return (flags.value & flags_) != 0;
  }

  void AddFlag(const TrickFlags& flags) override {
    flags_ |= flags.value;
  }

  void RemoveFlag(const TrickFlags& flags) override {
    flags_ &= ~flags.value;
  }

  void ToggleFlag(const TrickFlags& flags) override {
    flags_ ^= flags.value;
  }

  const char16_t* GetName() const override;

private:
  void CreateModel();
  uint8_t GetObjectState() const;

  int16_t index_;
  uint8_t type_ = 0;
  uint8_t life_ = 0;
  uint8_t max_life_ = 0;
  uint8_t unknown_0d_ = 0;
  uint8_t force_ = 9;
  uint8_t status_ = 9;
  uint8_t unknown_10_ = 0;
  uint8_t unknown_11_ = 0;
  int16_t angle_ = 0;
  uint16_t flags_ = 0;
  int target_kind_ = 0;
  union {
    uint8_t target_bytes_[4];
    int target_index_;
  };
  const ItemData* item_ = nullptr;
  const LegionData* legion_ = nullptr;
  const TerrainData* data_ = nullptr;
  std::vector<Pos> poss_;
  int x_ = -1;
  int z_ = -1;
  int width_ = 0;
  int height_ = 0;
  TrickOwner owner_;
  MapCharacter character_;
};

bool TrickEntity::IsActive() const {
  if (flags_ & kFlagDisabled) {
    return false;
  }

  switch (GetType()) {
    case 3:
    case 4:
    case 5:
    case 7:
      return !(flags_ & 0x04);
    case 6:
      if (GetLifeValue() < 1) {
        return false;
      }
      return !Singleton<Situation>::GetInstance()->IsTrickHidden();
    default:
      return !(flags_ & 0x08);
  }
}

bool TrickEntity::IsInside(int x, int z) const {
  if (poss_.empty()) {
    return GetLeft() <= x && x <= GetRight() && GetTop() <= z &&
      z <= GetBottom();
  }

  if (x < x_ || z < z_ || x > x_ + width_ - 1 || z > z_ + height_ - 1) {
    return false;
  }

  if (width_ * height_ < 2) {
    return true;
  }

  for (const Pos& pos : poss_) {
    if (x == pos.x && z == pos.z) {
      return true;
    }
  }
  return false;
}

Pos TrickEntity::GetNearestPos(int x, int z) const {
  Pos nearest(x, z);
  float distance = 1000000.0f;

  for (const Pos& pos : poss_) {
    const int dx = x - pos.x;
    const int dz = z - pos.z;
    const float current = static_cast<unsigned>(dx * dx + dz * dz);

    if (distance > current) {
      nearest = pos;
      distance = current;
    }
  }
  return nearest;
}

Vector3 TrickEntity::GetWorldPos() const {
  const float x = (GetX() + 256) * 5.0f + 2.5f + -1280.0f;
  const float z = (GetZ() + 256) * 5.0f + 2.5f + -1280.0f;
  const Height* height = Singleton<Height>::GetInstance();
  const float y =
    height != nullptr ? height->GetGround()->GetHeight(x, z) : 0.0f;
  return Vector3(x, y, z);
}

void TrickEntity::SetAngle(int16_t angle) {
  angle_ = angle;
  if (character_.IsValid()) {
    character_.SetRotation(angle * 0.017453292f);
  }
}

int TrickEntity::GetDistanceSq(int x, int z) const {
  const int dx = GetX() - x;
  const int dz = GetZ() - z;
  return dx * dx + dz * dz;
}

void TrickEntity::SetEnable(bool enable) {
  if (enable) {
    if (flags_ & kFlagDisabled) {
      flags_ &= ~kFlagDisabled;
    }
  }
  else {
    if (!(flags_ & kFlagDisabled)) {
      flags_ |= kFlagDisabled;
    }
  }
}

void TrickEntity::SetCollision(bool enable) {
  EachObject([enable](MapObject& object) {
    object.SetFlag(2, enable);
  });
}

void TrickEntity::SetStatus(uint8_t status) {
  if (Unknown54()) {
    status_ = status;
    TryUpdateObject();
  }
}

void TrickEntity::SetTarget(uint8_t a, uint8_t b, uint8_t c, uint8_t d) {
  target_bytes_[0] = a;
  target_bytes_[1] = b;
  target_bytes_[2] = c;
  target_bytes_[3] = d;
  target_kind_ = 1;
}

void TrickEntity::SetTarget(uint8_t a, uint8_t b, uint8_t c) {
  target_bytes_[0] = a;
  target_bytes_[1] = b;
  target_bytes_[2] = c;
  target_kind_ = 2;
}

void TrickEntity::SetTarget(const PersonData* person) {
  target_kind_ = 3;
  target_index_ = person != nullptr ? person->index : -1;
}

void TrickEntity::SetTarget(const SkillData* skill) {
  target_kind_ = 4;
  target_index_ = skill != nullptr ? skill->index : -1;
}

void TrickEntity::Immediate() {
  if (TryUpdateObject()) {
    EachObject([](MapObject& object) {
      object.Immediate();
    });
  }
}

void TrickEntity::PlayShoot() {
  EachObject([](MapObject& object) {
    object.Play(1);
  });
}

bool TrickEntity::IsPlaying() const {
  bool playing = false;
  EachObject([&playing](MapObject& object) {
    playing |= object.IsPlaying();
  });
  return playing;
}

void TrickEntity::EachObject(
    const std::function<void(MapObject&)>& function) const {
  if (type_ == 0 || !Unknown59()) {
    return;
  }

  if (!(ReadTerrain<uint8_t>(*data_, 0xd8) & 0x02)) {
    MapObject* object = MapObjectManager::Get(GetX(), GetZ());
    if (object->IsValid()) {
      function(*object);
    }
    return;
  }

  std::unordered_set<int> objects;
  EachPos([function, &objects](int x, int z) {
    MapObject* object = MapObjectManager::Get(x, z);
    if (!object->IsValid()) {
      return;
    }
    if (objects.contains(object->GetId())) {
      return;
    }
    objects.insert(object->GetId());
    function(*object);
  });
}

uint8_t TrickEntity::GetObjectState() const {
  const uint8_t status = GetStatus();
  if (status < 4) {
    return status + 3;
  }
  if (HasFlag(TrickFlags{8})) {
    return 2;
  }
  return HasFlag(TrickFlags{4});
}

bool TrickEntity::TryUpdateObject() {
  switch (GetType()) {
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
      break;
    default:
      return false;
  }

  EachObject([this](MapObject& object) {
    object.SetEnable(!(flags_ & kFlagDisabled))
      .SetState(GetObjectState())
      .Immediate();
  });
  return true;
}

bool TrickEntity::TryCreateModel() {
  if (GetType() == 14 && !character_.IsValid()) {
    CreateModel();
    return true;
  }
  return false;
}

void TrickEntity::Clear() {
  type_ = 0;
  life_ = 0;
  max_life_ = 0;
  unknown_0d_ = 0;
  force_ = 9;
  status_ = 9;
  unknown_10_ = 0;
  unknown_11_ = 0;
  angle_ = 0;
  flags_ = 0;
  target_kind_ = 0;
  target_index_ = 0;
  item_ = nullptr;
  legion_ = nullptr;
  data_ = nullptr;
  poss_.clear();
  x_ = -1;
  z_ = -1;
  width_ = 0;
  height_ = 0;
  owner_.Clear();
  character_.Release();
}

void TrickEntity::EachPos(
    const std::function<void(int, int)>& function) const {
  const int count = width_ * height_;
  if (count >= 2) {
    for (const Pos& pos : poss_) {
      function(pos.x, pos.z);
    }
  }
  else if (count == 1) {
    function(x_, z_);
  }
}

uint8_t TrickEntity::Unknown23() const {
  const TerrainData* data = GetData();
  if (data == nullptr) {
    return 9;
  }
  return ReadTerrain<const uint8_t*>(*data, 0x18)[0x238];
}

uint8_t TrickEntity::Unknown31() const {
  if (force_ == 9) {
    return 0;
  }
  return data_ != nullptr ? ReadTerrain<uint8_t>(*data_, 0x48) : 0;
}

uint8_t TrickEntity::Unknown32() const {
  return data_ != nullptr ? ReadTerrain<uint8_t>(*data_, 0x49) : 0;
}

int TrickEntity::Unknown33() const {
  if (type_ != 8) {
    return -1;
  }
  if (IsActive()) {
    const TerrainData* data = GetData();
    if (data != nullptr) {
      return ReadTerrain<uint8_t>(*data, 0x4a);
    }
  }
  return -1;
}

bool TrickEntity::IsBreakable() const {
  return GetType() == 1 && !(flags_ & 0x230) && life_ != 0;
}

bool TrickEntity::Unknown35(const Unit* unit) const {
  if (!IsBreakable()) {
    return false;
  }
  if (!(ReadTerrain<uint8_t>(*GetData(), 0xd8) & 0x01)) {
    return true;
  }

  const uint8_t force = unit->GetForceType();
  return !((1 << force) & 0xf1) && force != 3;
}

bool TrickEntity::Unknown36() const {
  const TerrainData* data = GetData();
  return data != nullptr && ReadTerrain<uint16_t>(*data, 0xe0) != 0;
}

uint8_t TrickEntity::Unknown45(bool second) const {
  const TerrainData* data = GetData();
  if (data == nullptr) {
    return 0;
  }
  return ReadTerrain<uint8_t>(*data, second ? 0x41 : 0x40);
}

bool TrickEntity::Unknown54() const {
  const TerrainData* data = GetData();
  return data != nullptr && (ReadTerrain<uint8_t>(*data, 0xd8) & 0x10);
}

bool TrickEntity::Unknown58() const {
  const TerrainData* data = GetData();
  return data != nullptr &&
    ReadTerrain<const Data*>(*data, 0x30)->index != 0;
}

bool TrickEntity::Unknown65() const {
  if (!IsActive()) {
    return false;
  }
  const TerrainData* data = GetData();
  return data != nullptr && (ReadTerrain<uint8_t>(*data, 0xd9) & 0x20);
}

uint8_t TrickEntity::Unknown71() const {
  return data_ != nullptr ? ReadTerrain<uint8_t>(*data_, 0x70) : 0;
}

uint8_t TrickEntity::Unknown72() const {
  return data_ != nullptr ? ReadTerrain<uint8_t>(*data_, 0x71) : 0;
}

const void* TrickEntity::Unknown73(const Unit* unit) const {
  return data_ != nullptr ? GetTerrainEffect(data_, unit) : nullptr;
}

bool TrickEntity::Unknown76(const Unit* unit) const {
  if (unit == nullptr || status_ == unit->GetForceType()) {
    return false;
  }
  if (!IsActive() || Unknown61()) {
    return false;
  }
  return CanTerrainTarget(data_, unit);
}

const char16_t* TrickEntity::GetName() const {
  if (data_ == nullptr) {
    return nullptr;
  }

  const char* mid = ReadTerrain<const char*>(*data_, 0x20);
  if (mid == nullptr) {
    return nullptr;
  }
  return msg::GetText(mid);
}

[[gnu::used]] TrickEntity* CreateTrickEntity(int16_t index) {
  return new TrickEntity(index);
}

}

}

#pragma GCC visibility pop

}
