#pragma once

#include <stdlib.h>

#include <string>
#include <variant>
#include <vector>

#include "game/evt/event_object.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// What a script registers an event with, the function to run, its
// arguments, the parameters of the event kind and the condition it needs.
template <class T>
struct MapEventDesc {
  std::string func;
  std::vector<std::variant<int, float, std::string>> args;
  T data;
  std::string condition;
};

// The rectangle of an area event and the force entering it.
struct MapAreaData {
  int left;
  int right;
  int top;
  int bottom;
  int force;
};

// The rectangle of an access event and two optional parameters.
struct MapAccessData {
  int left;
  int right;
  int top;
  int bottom;
  int params[2];
};

// The person and force of a unit event and two optional parameters.
struct MapUnitData {
  int person;
  int force;
  int params[2];
};

// The turns and force of a phase event.
struct MapPhaseData {
  int turnMin;
  int turnMax;
  int force;
  int unknown;
};

// The persons and forces of both units of a battle or a talk.
struct MapBattleData {
  int fromPerson;
  int fromForce;
  int toPerson;
  int toForce;
  bool each;
};

using MapAreaEventDesc = MapEventDesc<MapAreaData>;
using MapPhaseEventDesc = MapEventDesc<MapPhaseData>;
using MapBattleEventDesc = MapEventDesc<MapBattleData>;
using MapUnitEventDesc = MapEventDesc<MapUnitData>;
using MapAccessEventDesc = MapEventDesc<MapAccessData>;

class MapEventObject : public evt::EventObjectBase {
public:
  MapEventObject() = default;
  [[gnu::noinline]] ~MapEventObject() override;

  virtual bool Run();

  virtual bool Unknown03(int a, int b, int c, int d) {
    return false;
  }

  virtual bool Unknown04(int a, int b, int c, int d) {
    return Unknown03(a, b, c, d);
  }

  virtual bool Unknown05(int a, int b, int c, int d) {
    return Unknown04(a, b, c, d);
  }

  virtual bool Unknown06(int a, int b, int c, int d) {
    return Unknown05(a, b, c, d);
  }

  virtual bool Unknown07(int a, int b, int c, int d) {
    return Unknown06(a, b, c, d);
  }

  virtual bool Unknown08(int a, int b, int c, int d) const {
    return false;
  }

  virtual bool Unknown09(int a, int b, int c, int d) const {
    return false;
  }

  virtual bool Unknown10() const {
    return true;
  }

  virtual void Unknown11();
  virtual void Unknown12() {}
  virtual void Unknown13() {}

  // A negative id matches every value.
  virtual bool MatchesId(int id, int value) const {
    return id < 0 || id == value;
  }

  virtual void Unknown15();

  virtual int GetType() const {
    return type_;
  }

protected:
  std::vector<std::variant<int, float, std::string>> args_;
  int left_ = -1;
  int right_ = -1;
  int top_ = -1;
  int bottom_ = -1;
  int params_[2] = {-1, -1};
};

class MapAreaEventBase : public MapEventObject {
public:
  MapAreaEventBase();
  MapAreaEventBase(int type, MapAreaEventDesc desc);

  bool Unknown06(int x, int z, int id, int d) override {
    if ((left_ < 0 || x >= left_) && (right_ < 0 || x <= right_) &&
        (top_ < 0 || z >= top_) && (bottom_ < 0 || z <= bottom_) &&
        MatchesId(params_[0], id)) {
      return Run();
    }
    return false;
  }
};

class MapAreaEvent : public MapAreaEventBase {
public:
  MapAreaEvent();

  [[gnu::always_inline]] explicit MapAreaEvent(MapAreaEventDesc desc)
    : MapAreaEventBase(4, desc) {}
};

class MapUnitEventBase : public MapEventObject {
public:
  using Desc = MapUnitEventDesc;

  MapUnitEventBase();
  MapUnitEventBase(int type, Desc desc);

  bool Unknown06(int a, int b, int c, int d) override {
    if (MatchesId(params_[1], b) && MatchesId(params_[0], a) &&
        MatchesId(extra_params_[0], c)) {
      return Run();
    }
    return false;
  }

protected:
  int extra_params_[2] = {-1, -1};
};

#define GAME_MAP_EVENT(T, Base, kind) \
  class T : public Base { \
  public: \
    T(); \
    [[gnu::always_inline]] explicit T(Desc desc) : Base(kind, desc) {} \
    int GetType() const override { \
      return kind; \
    } \
  };

GAME_MAP_EVENT(MapUnitDieBeforeEvent, MapUnitEventBase, 14)
GAME_MAP_EVENT(MapUnitDieAfterEvent, MapUnitEventBase, 15)
GAME_MAP_EVENT(MapUnitDieTalkEvent, MapUnitEventBase, 16)
GAME_MAP_EVENT(MapUnitReviveBeforeEvent, MapUnitEventBase, 17)
GAME_MAP_EVENT(MapUnitReviveAfterEvent, MapUnitEventBase, 18)
GAME_MAP_EVENT(MapUnitFixedEvent, MapUnitEventBase, 19)
GAME_MAP_EVENT(MapUnitFixedSilentEvent, MapUnitEventBase, 20)
class MapUnitUseActiveSkillEvent : public MapUnitEventBase {
public:
  MapUnitUseActiveSkillEvent();
  explicit MapUnitUseActiveSkillEvent(Desc desc);

  int GetType() const override {
    return 21;
  }
};

GAME_MAP_EVENT(MapUnitPickupEvent, MapUnitEventBase, 27)
GAME_MAP_EVENT(MapUnitPickupSilentEvent, MapUnitEventBase, 28)
GAME_MAP_EVENT(MapUnitCommandBeforeEvent, MapUnitEventBase, 29)
GAME_MAP_EVENT(MapMindCompleteEvent, MapUnitEventBase, 31)

class MapPhaseEventBase : public MapEventObject {
public:
  using Desc = MapPhaseEventDesc;

  MapPhaseEventBase();
  MapPhaseEventBase(int type, Desc desc);

  bool Unknown05(int turn, int force, int c, int d) override {
    if ((params_[0] < 0 || turn >= params_[0]) &&
        (params_[1] < 0 || turn <= params_[1]) &&
        MatchesId(third_param_, force)) {
      return Run();
    }
    return false;
  }

protected:
  int third_param_ = -1;
  int unknown_74_ = -1;
};

GAME_MAP_EVENT(MapPhaseBeforeEvent, MapPhaseEventBase, 1)
GAME_MAP_EVENT(MapPhaseAfterEvent, MapPhaseEventBase, 2)
GAME_MAP_EVENT(MapPhaseEndEvent, MapPhaseEventBase, 3)

class MapBattleEventBase : public MapEventObject {
public:
  using Desc = MapBattleEventDesc;

  MapBattleEventBase();
  MapBattleEventBase(int type, Desc desc);

  bool Unknown07(int a, int b, int c, int d) override {
    if (MatchesBattle(a, b, c, d)) {
      return Run();
    }
    return false;
  }

protected:
  bool MatchesBattle(int a, int b, int c, int d) const;

  int to_params_[2] = {-1, -1};
  bool each_ = false;
};

GAME_MAP_EVENT(MapBattleBeforeEvent, MapBattleEventBase, 23)
GAME_MAP_EVENT(MapBattleAfterEvent, MapBattleEventBase, 25)
GAME_MAP_EVENT(MapBattleCompleteEvent, MapBattleEventBase, 26)

class MapBattleTalkEvent : public MapBattleEventBase {
public:
  MapBattleTalkEvent();

  [[gnu::always_inline]] explicit MapBattleTalkEvent(Desc desc)
    : MapBattleEventBase(24, desc) {}

  bool Unknown08(int a, int b, int c, int d) const override {
    return true;
  }

  bool Unknown09(int a, int b, int c, int d) const override {
    return MatchesBattle(a, b, c, d);
  }

  void Unknown12() override {}

  int GetType() const override {
    return 24;
  }
};

class MapContactEventBase : public MapEventObject {
public:
  using Desc = MapBattleEventDesc;

  MapContactEventBase();
  MapContactEventBase(int type, Desc desc);

  bool Unknown07(int a, int b, int c, int d) override {
    if (MatchesContact(a, b, c, d)) {
      return Run();
    }
    return false;
  }

protected:
  bool MatchesContact(int a, int b, int c, int d) const;

  int to_params_[2] = {-1, -1};
  bool each_ = false;
};

class MapContactTalkEvent : public MapContactEventBase {
public:
  MapContactTalkEvent();

  [[gnu::always_inline]] explicit MapContactTalkEvent(Desc desc)
    : MapContactEventBase(22, desc) {}

  bool Unknown08(int a, int b, int c, int d) const override {
    return true;
  }

  bool Unknown09(int a, int b, int c, int d) const override {
    return MatchesContact(a, b, c, d);
  }

  int GetType() const override {
    return 22;
  }
};

class MapAccessEventBase : public MapEventObject {
public:
  MapAccessEventBase();

  virtual std::string GetTypeName() const {
    return "";
  }

  // Manhattan distance from the event rectangle.
  virtual int GetDistance(int x, int z) const {
    const int cx = x < left_ ? left_ : (x < right_ ? x : right_);
    const int cz = z < top_ ? top_ : (z < bottom_ ? z : bottom_);
    return abs(z - cz) + abs(x - cx);
  }
};

class MapAccessTrickEventBase : public MapAccessEventBase {
public:
  MapAccessTrickEventBase();

  bool Unknown05(int x, int z, int c, int d) override {
    return GetDistance(x, z) == 0;
  }
};

class MapAccessDestroyEventBase : public MapAccessEventBase {
public:
  MapAccessDestroyEventBase();

  bool Unknown05(int x, int z, int c, int d) override {
    if (GetDistance(x, z) != 0) {
      return false;
    }
    return Run();
  }
};

class MapAccessNotTrickEventBase : public MapAccessEventBase {
public:
  MapAccessNotTrickEventBase();

  bool Unknown06(int x, int z, int size, int d) override {
    return Unknown07(x, z, size, -1);
  }

  // Any cell of the size by size square touching the rectangle triggers.
  bool Unknown07(int x, int z, int size, int id) override {
    if (size < 1) {
      return false;
    }

    bool touched = false;
    for (int j = 0; j < size; ++j) {
      for (int i = 0; i < size; ++i) {
        touched |= GetDistance(x + i, z + j) == 0;
      }
    }
    if (touched && (id < 0 || params_[0] < 0 || params_[0] == id)) {
      return Run();
    }
    return false;
  }
};

#define GAME_MAP_ACCESS_EVENT(T, Base, text) \
  class T : public Base { \
  public: \
    T(); \
    explicit T(MapAccessEventDesc desc); \
    std::string GetTypeName() const override { \
      return text; \
    } \
  };

GAME_MAP_ACCESS_EVENT(MapDoorEvent, MapAccessTrickEventBase, "扉")
GAME_MAP_ACCESS_EVENT(MapTreasureboxEvent, MapAccessTrickEventBase, "宝箱")
class MapGimmickEvent : public MapAccessTrickEventBase {
public:
  MapGimmickEvent();
  explicit MapGimmickEvent(MapAccessEventDesc desc);
};

GAME_MAP_ACCESS_EVENT(MapDestroyEvent, MapAccessDestroyEventBase, "破壊")
GAME_MAP_ACCESS_EVENT(MapBreakdownEvent, MapAccessNotTrickEventBase, "制圧")
class MapEscapeBeforeEvent : public MapAccessNotTrickEventBase {
public:
  MapEscapeBeforeEvent();
  explicit MapEscapeBeforeEvent(MapAccessEventDesc desc);
};

class MapEscapeAfterEvent : public MapAccessNotTrickEventBase {
public:
  MapEscapeAfterEvent();
  explicit MapEscapeAfterEvent(MapAccessEventDesc desc);
};

class MapWarpCommandAfterEvent : public MapAccessNotTrickEventBase {
public:
  MapWarpCommandAfterEvent();
  explicit MapWarpCommandAfterEvent(MapAccessEventDesc desc);
};

#undef GAME_MAP_ACCESS_EVENT
#undef GAME_MAP_EVENT

#pragma GCC visibility pop

}
