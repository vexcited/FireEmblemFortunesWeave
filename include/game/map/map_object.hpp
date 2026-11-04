#pragma once

#include <stdint.h>

namespace wld {

class Model;

}

namespace game {

#pragma GCC visibility push(hidden)

class ProcInst;

enum ObjectInfoState : int {};

#pragma GCC visibility pop

}

namespace game::map {

#pragma GCC visibility push(hidden)

class ObjectInfo;

class ObjectInfoConst {};

class MapObjectConst : public ObjectInfoConst {};

class MapObject : public MapObjectConst {
public:
  virtual ~MapObject() = default;

  virtual int GetId() const = 0;
  virtual const char* GetName() const = 0;
  virtual const char* GetModelName() const = 0;
  virtual bool IsValid() const = 0;
  virtual bool IsPlaying() const = 0;
  virtual bool HasFlag(uint8_t flag) const = 0;

  virtual bool Unknown08() const {
    return HasFlag(1);
  }

  virtual ObjectInfoState GetState() const = 0;
  virtual int GetX() const = 0;
  virtual int GetZ() const = 0;
  virtual int GetLeft() const = 0;
  virtual int GetTop() const = 0;
  virtual int GetRight() const = 0;
  virtual int GetBottom() const = 0;
  virtual wld::Model* GetModel() const = 0;
  virtual wld::Model* GetSubModel() const = 0;
  virtual const ObjectInfo* GetInfo() const = 0;
  virtual const void* Unknown19(int key) const = 0;
  virtual MapObject& SetFlag(uint8_t flag, bool enable) = 0;

  virtual MapObject& Unknown21(bool enable) {
    return SetFlag(1, enable);
  }

  virtual MapObject& SetEnable(bool enable) = 0;
  virtual MapObject& SetState(ObjectInfoState state) = 0;
  virtual ProcInst* CreateProc(ProcInst* parent) = 0;
  virtual void PlayAnim(ObjectInfoState state) = 0;
  virtual MapObject& Immediate() = 0;
  virtual float GetAlpha() const = 0;
  virtual void SetAlpha(float alpha) = 0;
  virtual MapObject* GetParent() const = 0;
  virtual bool Unknown30() const = 0;
};

class MapObjectManager {
public:
  static MapObject* Get(int x, int z);
  static MapObject* Get(const char* name);
};

#pragma GCC visibility pop

}
