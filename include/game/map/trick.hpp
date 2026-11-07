#pragma once

#include <stddef.h>
#include <stdint.h>

#include <functional>
#include <vector>

#include "game/map/map_object.hpp"

namespace game {

class Stream;
struct ItemData;
struct LegionData;
struct PersonData;
struct SkillData;
struct TerrainData;
class Unit;

}

namespace game::map {

#pragma GCC visibility push(hidden)

struct Pos {
  Pos(int x, int z) : x(x), z(z), unknown_02(0) {}

  // User provided, so functions return it in memory.
  Pos(const Pos& other)
    : x(other.x), z(other.z), unknown_02(other.unknown_02) {}

  Pos& operator=(const Pos& other) = default;

  int8_t x;
  int8_t z;
  int16_t unknown_02;
};

struct Vector3 {
  Vector3(float x, float y, float z) : x(x), y(y), z(z), w(0.0f) {}

  // User provided, so functions return it in memory.
  Vector3(const Vector3& other)
    : x(other.x), y(other.y), z(other.z), w(other.w) {}

  alignas(16) float x;
  float y;
  float z;
  float w;
};

struct TrickFlags {
  uint16_t value;
};

class TrickConst {};

class TrickData : public TrickConst {
public:
  virtual bool IsValid() const = 0;
  virtual bool IsEmpty() const = 0;
  virtual bool IsActive() const = 0;
  virtual bool IsInside(int x, int z) const = 0;
  virtual int GetIndex() const = 0;
  virtual uint8_t GetType() const = 0;
  virtual uint8_t GetCategory() const = 0;
  virtual int GetX() const = 0;
  virtual int GetZ() const = 0;
  virtual int GetWidth() const = 0;
  virtual int GetHeight() const = 0;
  virtual int GetLeft() const = 0;
  virtual int GetTop() const = 0;
  virtual int GetRight() const = 0;
  virtual int GetBottom() const = 0;
  virtual Pos GetNearestPos(int x, int z) const = 0;
  virtual const std::vector<Pos>& GetPoss() const = 0;
  virtual int GetPosCount() const = 0;
  virtual const Pos* GetPos(int index) const = 0;
  virtual int GetLife() const = 0;
  virtual int GetMaxLife() const = 0;
  virtual uint8_t GetForce() const = 0;
  virtual uint8_t GetStatus() const = 0;
  virtual uint8_t Unknown23() const = 0;
  virtual const ItemData* GetItem() const = 0;
  virtual const ItemData* GetItemFor(const Unit* unit) const = 0;
  virtual const LegionData* GetLegion() const = 0;
  virtual const void* GetOwner() const = 0;
  virtual const TerrainData* GetData() const = 0;
  virtual const char* GetTid() const = 0;
  virtual uint8_t Unknown30() const = 0;
  virtual uint8_t Unknown31() const = 0;
  virtual uint8_t Unknown32() const = 0;
  virtual int Unknown33() const = 0;
  virtual bool IsBreakable() const = 0;
  virtual bool Unknown35(const Unit* unit) const = 0;
  virtual bool Unknown36() const = 0;
  virtual bool Unknown37(const void* skill) const = 0;
  virtual Vector3 GetWorldPos() const = 0;
  virtual void SetLife(uint8_t life) = 0;
  virtual void SetMaxLife(uint8_t life) = 0;
  virtual uint8_t Unknown41() const = 0;
  virtual uint8_t Unknown42() const = 0;
  virtual int GetAngle() const = 0;
  virtual void SetAngle(int16_t angle) = 0;
  virtual uint8_t Unknown45(bool second) const = 0;
  virtual int GetDistanceSq(int x, int z) const = 0;
  virtual void SetEnable(bool enable) = 0;
  virtual void Unknown48(bool enable) = 0;
  virtual void Unknown49(bool enable) = 0;
  virtual void SetCollision(bool enable) = 0;
  virtual void Enable() = 0;
  virtual void Disable() = 0;
  virtual void SetForce(uint8_t force) = 0;
  virtual bool Unknown54() const = 0;
  virtual void SetStatus(uint8_t status) = 0;
  virtual void SetItem(const ItemData* item) = 0;
  virtual void SetLegion(const LegionData* legion) = 0;
  virtual bool Unknown58() const = 0;
  virtual bool Unknown59() const = 0;
  virtual bool Unknown60() const = 0;
  virtual bool Unknown61() const = 0;
  virtual bool Unknown62() const = 0;
  virtual bool Unknown63() const = 0;
  virtual void Unknown64() = 0;
  virtual bool Unknown65() const = 0;
  virtual bool IsDone() const = 0;
  virtual void SetDone(bool done) = 0;
  virtual int GetLifeValue() const = 0;
  virtual void SetLifeValue(uint8_t life) = 0;
  virtual int GetMaxLifeValue() const = 0;
  virtual uint8_t Unknown71() const = 0;
  virtual uint8_t Unknown72() const = 0;
  virtual const void* Unknown73(const Unit* unit) const = 0;
  virtual bool Unknown74(const Unit* unit) const = 0;
  virtual bool Unknown75(int x, int z, bool check) const = 0;
  virtual bool Unknown76(const Unit* unit) const = 0;
  virtual void SetTarget(uint8_t a, uint8_t b, uint8_t c, uint8_t d) = 0;
  virtual void SetTarget(uint8_t a, uint8_t b, uint8_t c) = 0;
  virtual void SetTarget(const PersonData* person) = 0;
  virtual void SetTarget(const SkillData* skill) = 0;
  virtual void Immediate() = 0;
  virtual void PlayShoot() = 0;
  virtual bool IsPlaying() const = 0;
  virtual void EachObject(
    const std::function<void(MapObject&)>& function) const = 0;
  virtual bool UpdateModelPosition() = 0;
  virtual bool TryUpdateObject() = 0;
  virtual bool TryCreateModel() = 0;
  virtual bool Unknown88() = 0;
  virtual void SetAlpha(float alpha) = 0;
  virtual void Clear() = 0;
  virtual void Serialize(Stream& stream) const = 0;
  virtual void Deserialize(Stream& stream) = 0;
  virtual void EachPos(
    const std::function<void(int, int)>& function) const = 0;
  virtual void Unknown94(const Unit* unit) = 0;
  virtual void Unknown95(int kind, const Unit* unit) = 0;
  virtual void Unknown96() = 0;
  virtual void Unknown97() = 0;
  virtual bool HasFlag(const TrickFlags& flags) const = 0;
  virtual void AddFlag(const TrickFlags& flags) = 0;
  virtual void RemoveFlag(const TrickFlags& flags) = 0;
  virtual void ToggleFlag(const TrickFlags& flags) = 0;
  virtual const char16_t* GetName() const = 0;
  virtual ~TrickData() = default;
};

#pragma GCC visibility pop

}
