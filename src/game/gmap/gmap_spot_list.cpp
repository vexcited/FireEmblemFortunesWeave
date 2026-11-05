#include <cstdint>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::gmap {

#pragma GCC visibility push(hidden)

// The spot selection of the list, its type is not recovered.
class GmapSpotSelector {
public:
  void Select(int index);

  int GetCount() const { return count_; }
  int GetIndex() const { return index_; }

private:
  uint8_t unknown_00_[0x20];
  int32_t count_;
  uint8_t unknown_24_[0x1c];
  int32_t index_;
  uint8_t unknown_44_[0x14];
};

static_assert(sizeof(GmapSpotSelector) == 0x58);

class GmapSpotList : public menu::GameMenu {
public:
  ~GmapSpotList() override;

  const char* Unknown32() override { return "Layout/Gmap.arc"; }
  const char* Unknown33() override { return "Gmap_SpotList"; }
  int Unknown61() override { return 3; }
  void Unknown79(int result) override {}
  void Unknown93() override;
  int Unknown107() override;
  int ImplUnknown00() override { return 1; }
  const char* ImplUnknown03() override { return "MID_SysMenu_GmapMap"; }

  virtual int Unknown141() {
    if (unknown_428_.empty()) {
      return 1;
    }
    return unknown_428_[tab_.GetCurrent()];
  }

  virtual int Unknown142() { return 1; }
  virtual int Unknown143() { return 0; }
  virtual int Unknown144() { return 1; }
  virtual void Unknown145();
  virtual void Unknown146();
  int InputUnknown01() override { return 7; }
  int ImplUnknown10() override;
  int InputUnknown12(int direction, bool loop) override;

private:
  std::vector<int32_t> unknown_428_;
  GmapSpotSelector selector_;
  uint8_t unknown_498_[0x10];
  bool unknown_4a8_;
};

#pragma GCC visibility pop

GmapSpotList::~GmapSpotList() = default;

void GmapSpotList::Unknown93() {
  if (unknown_4a8_) {
    Unknown16dea40(false, true, false);
    unknown_4a8_ = false;
  }
}

int GmapSpotList::Unknown107() {
  int count = selector_.GetCount();
  if (count == 0) {
    return 0;
  }
  selector_.Select((selector_.GetIndex() + 1) % count);
  return 13;
}

}
