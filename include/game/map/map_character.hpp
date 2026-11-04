#pragma once

#include <stdint.h>

namespace game::map {

#pragma GCC visibility push(hidden)

class ModelHandle {
public:
  bool IsValid() const {
    return model_ != nullptr;
  }

  void Release();

private:
  void* model_ = nullptr;
};

class MapConst {};

class CharacterConst : public MapConst {};

class MapCharacter : public CharacterConst {
public:
  virtual ~MapCharacter() {
    Release();
  }

  bool IsValid() const {
    return handle_.IsValid();
  }

  void Release() {
    if (handle_.IsValid()) {
      handle_.Release();
      unknown_10_ = 0;
      unknown_18_ = 0;
      kind_ = 9;
    }
  }

  void SetRotation(float radian);

private:
  ModelHandle handle_;
  uint64_t unknown_10_ = 0;
  uint64_t unknown_18_ = 0;
  uint8_t kind_ = 9;
  float scale_ = 1.0f;
};

#pragma GCC visibility pop

}
