#pragma once

#include "game/map/map_singletons.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class CursorModel {
public:
  virtual ~CursorModel();
};

class CursorImpl {
public:
  ~CursorImpl() {
    delete model_;
  }

private:
  uint8_t unknown_00_[0x30];
  CursorModel* model_;
};

class Cursor : public SerializeSingleton<Cursor> {
public:
  void Initialize() override;
  void Finalize() override;
  const char* GetName() const override;
  int GetVersion() const override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream, int version) override;

private:
  CursorImpl* impl_;
};

#pragma GCC visibility pop

}
