#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace fs {

class File;

}

namespace ui::control {

class Element;

}

namespace game {

struct ItemData;
class ProcInst;
class Unit;
class UnitItem;
class UnitSkill;

namespace talk {

class Cmdbtl;
class Hub;
class Sound;

}

namespace facility {

class SceneCharacter;

}

namespace map {

struct TrickData;

}

// The wrappers of plain function pointers, one per signature.
[[gnu::used]] std::function<void()> WrapFunction(void (*function)()) {
  return function;
}

[[gnu::used]] std::function<void(unsigned long)> WrapFunction(
  void (*function)(unsigned long)) {
  return function;
}

[[gnu::used]] std::function<void(ProcInst*)> WrapFunction(
  void (*function)(ProcInst*)) {
  return function;
}

[[gnu::used]] std::function<bool(const Unit*, const map::TrickData*)>
WrapFunction(bool (*function)(const Unit*, const map::TrickData*)) {
  return function;
}

[[gnu::used]] std::function<void(std::vector<std::string>&,
  facility::SceneCharacter*)> WrapFunction(
  void (*function)(std::vector<std::string>&, facility::SceneCharacter*)) {
  return function;
}

using Arguments = std::vector<std::string>;

[[gnu::used]] std::function<void(fs::File*)> WrapFunction(
  void (*function)(fs::File*)) {
  return function;
}

[[gnu::used]] std::function<bool(talk::Cmdbtl&, Arguments&, bool)>
WrapFunction(bool (*function)(talk::Cmdbtl&, Arguments&, bool)) {
  return function;
}

[[gnu::used]] std::function<bool(talk::Hub&, Arguments&, bool)>
WrapFunction(bool (*function)(talk::Hub&, Arguments&, bool)) {
  return function;
}

[[gnu::used]] std::function<bool(talk::Sound&, Arguments&)> WrapFunction(
  bool (*function)(talk::Sound&, Arguments&)) {
  return function;
}

[[gnu::used]] std::function<bool(const Unit*, const UnitItem&, bool)>
WrapFunction(bool (*function)(const Unit*, const UnitItem&, bool)) {
  return function;
}

[[gnu::used]] std::function<bool(const ItemData*)> WrapFunction(
  bool (*function)(const ItemData*)) {
  return function;
}

[[gnu::used]] std::function<bool(const UnitSkill&)> WrapFunction(
  bool (*function)(const UnitSkill&)) {
  return function;
}

[[gnu::used]] std::function<int(bool)> WrapFunction(int (*function)(bool)) {
  return function;
}

[[gnu::used]] std::function<void(int)> WrapFunction(void (*function)(int)) {
  return function;
}

[[gnu::used]] std::function<void(bool)> WrapFunction(
  void (*function)(bool)) {
  return function;
}

// The predicate takes the element by value, the wrapped function by const
// reference.
[[gnu::used]] std::function<bool(std::shared_ptr<ui::control::Element>)>
WrapFunction(
  bool (*function)(const std::shared_ptr<ui::control::Element>&)) {
  return function;
}

}
