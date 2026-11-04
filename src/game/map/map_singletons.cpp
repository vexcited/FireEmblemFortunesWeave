#include "game/hub/area_barrier.hpp"
#include "game/map/map_singletons.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

[[gnu::used]] Height* CreateHeight() {
  return new Height();
}

class VTarget {
public:
  virtual ~VTarget();

private:
  uint8_t unknown_08_[0x3c8];
};

class Target : public Singleton<Target>, public VTarget {
public:
  Target();
};

[[gnu::used]] Target::Target() = default;

class ScriptContext {
public:
  virtual ~ScriptContext();
};

class MapScript : public Singleton<MapScript>, public ScriptContext {
public:
  MapScript();
};

[[gnu::used]] MapScript::MapScript() = default;

namespace zv {

class AreaBarrier : public zview::AreaBarrierBase {
public:
  AreaBarrier();
};

[[gnu::used]] AreaBarrier::AreaBarrier() = default;

}

#pragma GCC visibility pop

}
