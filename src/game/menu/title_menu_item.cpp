#include "game/menu/title_menu_item.hpp"

#include <functional>

#include "game/menu/sub_menu_item.hpp"
#include "game/util/format.hpp"

namespace game::menu {

void StopTitleMenuEffect(std::shared_ptr<TitleMenuEffect> effect, bool fade);

TitleMenuItem::~TitleMenuItem() {
  std::shared_ptr<TitleMenuEffect> effect = effect_;
  StopTitleMenuEffect(effect, true);
}

const char* TitleMenuItem::Unknown70() {
  return util::Format("%s_Help", GetMid());
}

void TitleMenuItem::OnSelect() {
  GameMenuItem::OnSelect();
  UpdateHelp();
}

void TitleMenuItem::DrawText() {
  GameMenuItem::DrawText();
  if (menu_->GetCurrentItem() == this) {
    UpdateHelp();
  }
}

namespace {

class NewGameMenuItem : public TitleMenuItem {
public:
  NewGameMenuItem();

  const char* GetMid() override { return "MID_Title_NewGame"; }

  int ACall() override {
    on_decide_();
    return 4;
  }

private:
  std::function<void()> on_decide_;
};

[[gnu::used]] NewGameMenuItem::NewGameMenuItem() = default;

class ContinueMenuItem : public TitleMenuItem {
public:
  ContinueMenuItem();

  const char* GetMid() override { return "MID_Title_Continue"; }
  void Unknown19() override;

  void OnSelect() override {
    unknown_68_ = 0;
    TitleMenuItem::OnSelect();
  }

  void OnClose() override {
    unknown_68_ = 0;
    GameMenuItem::OnClose();
  }

  int ACall() override;

private:
  int unknown_68_;
};

[[gnu::used]] ContinueMenuItem::ContinueMenuItem() = default;

class ContinueNewGameMenuItem : public TitleMenuItem {
public:
  ContinueNewGameMenuItem();

  const char* GetMid() override { return "MID_Title_ContinueNewGame"; }
  int ACall() override;
};

[[gnu::used]] ContinueNewGameMenuItem::ContinueNewGameMenuItem() = default;

class ExtraMenuItem : public TitleMenuItem {
public:
  ExtraMenuItem();

  const char* GetMid() override { return "MID_Title_Extra"; }
  int ACall() override;
};

[[gnu::used]] ExtraMenuItem::ExtraMenuItem() = default;

class TitleSubMenuItem : public SubMenuItem {
public:
  void OnSelect() override {
    GameMenuItem::OnSelect();
    on_help_(util::Format("%s_Help", GetMid()));
  }

protected:
  std::function<void(const char*)> on_help_;
};

class ExtraSettingVoiceMenuItem : public TitleSubMenuItem {
public:
  ExtraSettingVoiceMenuItem();

  const char* GetMid() override { return "MID_Title_SettingVoice"; }
  int ACall() override;
};

[[gnu::used]] ExtraSettingVoiceMenuItem::ExtraSettingVoiceMenuItem() = default;

class ExtraSettingInsectPhobiaMenuItem : public TitleSubMenuItem {
public:
  ExtraSettingInsectPhobiaMenuItem();

  const char* GetMid() override { return "MID_Title_SettingBug"; }
  int ACall() override;
};

[[gnu::used]]
ExtraSettingInsectPhobiaMenuItem::ExtraSettingInsectPhobiaMenuItem() = default;

class ExtraSaveDeleteMenuItem : public TitleSubMenuItem {
public:
  ExtraSaveDeleteMenuItem();

  const char* GetMid() override { return "MID_Title_SaveDelete"; }
  int ACall() override;
};

[[gnu::used]] ExtraSaveDeleteMenuItem::ExtraSaveDeleteMenuItem() = default;

}

}
