#pragma once

#include "game/map/map_singletons.hpp"
#include "game/map/stream.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// 32-bit FNV-1a hash of a C string.
int HashString32(const char* text);

namespace GameSaveConst {

class Serializer {
public:
  virtual ~Serializer() = default;
  virtual bool Unknown02() const { return false; }
  virtual const char* GetName() const = 0;
  virtual int GetVersion() const = 0;
  virtual void Unknown05() {}
  virtual void Unknown06() {}
  virtual void Serialize(Stream& stream) const = 0;
  virtual void Deserialize(Stream& stream, int version) = 0;
  virtual void Unknown09() {}
  virtual void Unknown10() {}
  virtual bool Unknown11() const { return true; }
  virtual bool Unknown12() const { return true; }
};

// Registers itself in the list of save chunks written per slot.
class LocalSerializer : public Serializer {
public:
  ~LocalSerializer() override;
};

class GlobalSerializer : public Serializer {
public:
  ~GlobalSerializer() override;
};

// Writes one singleton as a chunk keyed by the hash of its name.
inline void WriteChunk(Stream& stream, const ISingletonStream& chunk) {
  int hash = HashString32(chunk.GetName());
  if (stream.Unknown00(&hash)) {
    stream.WriteU8(chunk.GetVersion());
    chunk.Serialize(stream);
  }
  stream.Unknown01(0);
}

inline void ReadChunk(Stream& stream, ISingletonStream& chunk) {
  int hash = HashString32(chunk.GetName());
  if (stream.Unknown02(&hash)) {
    chunk.Deserialize(stream, stream.ReadU8());
  }
  stream.Unknown03(0);
}

}

#pragma GCC visibility pop

}
