#pragma GCC visibility push(hidden)
#include "game/menu/multi_menu_sequence.hpp"

namespace game::gmap {

// The original tables hold absolute pointers, internal ones would be turned
// into relative offsets.
[[gnu::visibility("hidden")]] extern const char* const kCorpsMenuTitles[3];
[[gnu::visibility("hidden")]] extern const char* const kCorpsMenuHelps[3];

const char* const kCorpsMenuTitles[3] = {
  "MID_GmapMenu_CorpsCreate",
  "MID_GmapMenu_CorpsDivide",
  "MID_GmapMenu_CorpsExchange",
};

const char* const kCorpsMenuHelps[3] = {
  "MID_CorpsCreateMenu_Help",
  "MID_CorpsDivideMenu_Help",
  "MID_CorpsExchangeMenu_Help",
};

// Creates, divides or exchanges the corps of the troops.
class GmapCorpsMenu : public menu::MultiMenuSequence {
public:
  ~GmapCorpsMenu() override;

  const char* GetLayoutArchive() override { return "Layout/Gmap.arc"; }
  const char* GetLayoutName() override { return "Gmap_Troop_Exchange"; }
  void* Unknown35() override;
  void* Unknown36() override;
  void* Unknown37() override;
  void Unknown38() override;
  void Unknown41() override;

  const char* ImplUnknown03() override {
    return mode_ <= 2 ? kCorpsMenuTitles[mode_] : nullptr;
  }

  const char* ImplUnknown05() override {
    return mode_ <= 2 ? kCorpsMenuHelps[mode_] : nullptr;
  }

private:
  uint32_t mode_;
};

class GmapBanquetMenu : public menu::MultiMenuSequence {
public:
  ~GmapBanquetMenu() override;

  const char* GetLayoutArchive() override { return "Layout/Gmap.arc"; }
  const char* GetLayoutName() override { return "Gmap_Banquet"; }
  void* Unknown35() override;
  void* Unknown36() override;
  void* Unknown37() override;
  void Unknown39() override;
  void Unknown41() override;
  const char* ImplUnknown03() override;
  const char* ImplUnknown05() override;
  int ImplUnknown10() override;
};

GmapCorpsMenu::~GmapCorpsMenu() = default;
GmapBanquetMenu::~GmapBanquetMenu() = default;

}

#pragma GCC visibility pop
