#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class Stream;

class ISingletonStream {
public:
  virtual const char* GetName() const = 0;
  virtual int GetVersion() const = 0;
  virtual void Serialize(Stream& stream) const = 0;
  virtual void Deserialize(Stream& stream, int version) = 0;
};

template<typename T>
class SerializeSingleton : public Singleton<T>, public ISingletonStream {};

namespace map {

class HeightMap {
public:
  float GetHeight(float x, float z) const;
};

class Height : public Singleton<Height> {
public:
  const HeightMap* GetGround() const {
    return ground_;
  }

  const HeightMap* GetObjectGround() const {
    return object_ground_;
  }

  void BeginUpdate();
  void EndUpdate();
  void MarkDirty(int x, int z);

private:
  uint8_t unknown_08_[0xf008];
  HeightMap* ground_;
  HeightMap* object_ground_;
};

}

#pragma GCC visibility pop

}
