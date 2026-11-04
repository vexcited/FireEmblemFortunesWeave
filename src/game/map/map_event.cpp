#include <stdlib.h>

#include <string>
#include <variant>
#include <vector>

namespace game {

#pragma GCC visibility push(hidden)

namespace evt {

class EventObjectBase {
public:
  virtual ~EventObjectBase() = default;

protected:
  std::string name_;
  std::string label_;
  int type_ = 0;
};

}

namespace map {

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
  int params_[3] = {-1, -1, -1};
};

MapEventObject::~MapEventObject() = default;

class MapAreaEventBase : public MapEventObject {
public:
  MapAreaEventBase();

  bool Unknown06(int x, int z, int id, int d) override {
    if ((left_ < 0 || x >= left_) && (right_ < 0 || x <= right_) &&
        (top_ < 0 || z >= top_) && (bottom_ < 0 || z <= bottom_) &&
        MatchesId(params_[0], id)) {
      return Run();
    }
    return false;
  }
};

[[gnu::used]] MapAreaEventBase::MapAreaEventBase() = default;

class MapAreaEvent : public MapAreaEventBase {
public:
  MapAreaEvent();
};

[[gnu::used]] MapAreaEvent::MapAreaEvent() = default;

class MapUnitEventBase : public MapEventObject {
public:
  MapUnitEventBase();

  bool Unknown06(int a, int b, int c, int d) override {
    if (MatchesId(params_[1], b) && MatchesId(params_[0], a) &&
        MatchesId(params_[2], c)) {
      return Run();
    }
    return false;
  }
};

[[gnu::used]] MapUnitEventBase::MapUnitEventBase() = default;

#define GAME_MAP_EVENT(T, Base, kind) \
  class T : public Base { \
  public: \
    T(); \
    int GetType() const override { \
      return kind; \
    } \
  }; \
  [[gnu::used]] T::T() = default;

GAME_MAP_EVENT(MapUnitDieBeforeEvent, MapUnitEventBase, 14)
GAME_MAP_EVENT(MapUnitDieAfterEvent, MapUnitEventBase, 15)
GAME_MAP_EVENT(MapUnitDieTalkEvent, MapUnitEventBase, 16)
GAME_MAP_EVENT(MapUnitReviveBeforeEvent, MapUnitEventBase, 17)
GAME_MAP_EVENT(MapUnitReviveAfterEvent, MapUnitEventBase, 18)
GAME_MAP_EVENT(MapUnitFixedEvent, MapUnitEventBase, 19)
GAME_MAP_EVENT(MapUnitFixedSilentEvent, MapUnitEventBase, 20)
GAME_MAP_EVENT(MapUnitUseActiveSkillEvent, MapUnitEventBase, 21)
GAME_MAP_EVENT(MapUnitPickupEvent, MapUnitEventBase, 27)
GAME_MAP_EVENT(MapUnitPickupSilentEvent, MapUnitEventBase, 28)
GAME_MAP_EVENT(MapUnitCommandBeforeEvent, MapUnitEventBase, 29)
GAME_MAP_EVENT(MapMindCompleteEvent, MapUnitEventBase, 31)

class MapPhaseEventBase : public MapEventObject {
public:
  MapPhaseEventBase();

  bool Unknown05(int turn, int force, int c, int d) override {
    if ((params_[0] < 0 || turn >= params_[0]) &&
        (params_[1] < 0 || turn <= params_[1]) &&
        MatchesId(params_[2], force)) {
      return Run();
    }
    return false;
  }
};

[[gnu::used]] MapPhaseEventBase::MapPhaseEventBase() = default;

GAME_MAP_EVENT(MapPhaseBeforeEvent, MapPhaseEventBase, 1)
GAME_MAP_EVENT(MapPhaseAfterEvent, MapPhaseEventBase, 2)
GAME_MAP_EVENT(MapPhaseEndEvent, MapPhaseEventBase, 3)

class MapBattleEventBase : public MapEventObject {
public:
  MapBattleEventBase();

  bool Unknown07(int a, int b, int c, int d) override {
    if (MatchesBattle(a, b, c, d)) {
      return Run();
    }
    return false;
  }

protected:
  bool MatchesBattle(int a, int b, int c, int d) const;
};

[[gnu::used]] MapBattleEventBase::MapBattleEventBase() = default;

GAME_MAP_EVENT(MapBattleBeforeEvent, MapBattleEventBase, 23)
GAME_MAP_EVENT(MapBattleAfterEvent, MapBattleEventBase, 25)
GAME_MAP_EVENT(MapBattleCompleteEvent, MapBattleEventBase, 26)

class MapBattleTalkEvent : public MapBattleEventBase {
public:
  MapBattleTalkEvent();

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

[[gnu::used]] MapBattleTalkEvent::MapBattleTalkEvent() = default;

class MapContactEventBase : public MapEventObject {
public:
  MapContactEventBase();

  bool Unknown07(int a, int b, int c, int d) override {
    if (MatchesContact(a, b, c, d)) {
      return Run();
    }
    return false;
  }

protected:
  bool MatchesContact(int a, int b, int c, int d) const;
};

[[gnu::used]] MapContactEventBase::MapContactEventBase() = default;

class MapContactTalkEvent : public MapContactEventBase {
public:
  MapContactTalkEvent();

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

[[gnu::used]] MapContactTalkEvent::MapContactTalkEvent() = default;

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

[[gnu::used]] MapAccessEventBase::MapAccessEventBase() = default;

class MapAccessTrickEventBase : public MapAccessEventBase {
public:
  MapAccessTrickEventBase();

  bool Unknown05(int x, int z, int c, int d) override {
    return GetDistance(x, z) == 0;
  }
};

[[gnu::used]] MapAccessTrickEventBase::MapAccessTrickEventBase() = default;

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

[[gnu::used]] MapAccessDestroyEventBase::MapAccessDestroyEventBase() =
  default;

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

[[gnu::used]] MapAccessNotTrickEventBase::MapAccessNotTrickEventBase() =
  default;

#define GAME_MAP_ACCESS_EVENT(T, Base, text) \
  class T : public Base { \
  public: \
    T(); \
    std::string GetTypeName() const override { \
      return text; \
    } \
  }; \
  [[gnu::used]] T::T() = default;

GAME_MAP_ACCESS_EVENT(MapDoorEvent, MapAccessTrickEventBase, "扉")
GAME_MAP_ACCESS_EVENT(MapTreasureboxEvent, MapAccessTrickEventBase, "宝箱")
class MapGimmickEvent : public MapAccessTrickEventBase {
public:
  MapGimmickEvent();
};

[[gnu::used]] MapGimmickEvent::MapGimmickEvent() = default;

GAME_MAP_ACCESS_EVENT(MapDestroyEvent, MapAccessDestroyEventBase, "破壊")
GAME_MAP_ACCESS_EVENT(MapBreakdownEvent, MapAccessNotTrickEventBase, "制圧")
class MapEscapeBeforeEvent : public MapAccessNotTrickEventBase {
public:
  MapEscapeBeforeEvent();
};

[[gnu::used]] MapEscapeBeforeEvent::MapEscapeBeforeEvent() = default;

class MapEscapeAfterEvent : public MapAccessNotTrickEventBase {
public:
  MapEscapeAfterEvent();
};

[[gnu::used]] MapEscapeAfterEvent::MapEscapeAfterEvent() = default;

class MapWarpCommandAfterEvent : public MapAccessNotTrickEventBase {
public:
  MapWarpCommandAfterEvent();
};

[[gnu::used]] MapWarpCommandAfterEvent::MapWarpCommandAfterEvent() = default;


#undef GAME_MAP_ACCESS_EVENT
#undef GAME_MAP_EVENT

}

#pragma GCC visibility pop

}
