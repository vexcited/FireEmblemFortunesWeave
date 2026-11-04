#pragma once

#include <stdint.h>

namespace game::map {

#pragma GCC visibility push(hidden)

class ObjectInfoConst {};

class MapObjectConst : public ObjectInfoConst {};

class MapObject : public MapObjectConst {
public:
  virtual ~MapObject() = default;

  virtual int GetId() const = 0;
  virtual void Unknown03() = 0;
  virtual void Unknown04() = 0;
  virtual bool IsValid() const = 0;
  virtual bool IsPlaying() const = 0;
  virtual void Unknown07() = 0;
  virtual void Unknown08() = 0;
  virtual void Unknown09() = 0;
  virtual void Unknown10() = 0;
  virtual void Unknown11() = 0;
  virtual void Unknown12() = 0;
  virtual void Unknown13() = 0;
  virtual void Unknown14() = 0;
  virtual void Unknown15() = 0;
  virtual void Unknown16() = 0;
  virtual void Unknown17() = 0;
  virtual void Unknown18() = 0;
  virtual void Unknown19() = 0;
  virtual void SetFlag(int flag, bool enable) = 0;
  virtual void Unknown21() = 0;
  virtual MapObject& SetEnable(bool enable) = 0;
  virtual MapObject& SetState(uint8_t state) = 0;
  virtual void Unknown24() = 0;
  virtual void Play(int kind) = 0;
  virtual void Immediate() = 0;
};

class MapObjectManager {
public:
  static MapObject* Get(int x, int z);
};

#pragma GCC visibility pop

}
