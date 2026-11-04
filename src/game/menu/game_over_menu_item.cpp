#include <functional>
#include <string>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class GameOverMenuItem : public GameMenuItem {
public:
  bool Unknown14() override { return true; }
  int BCall() override { return 0; }
  void DrawText() override;
  virtual void Unknown70() = 0;
  virtual void Unknown71();
  virtual bool Unknown72() { return false; }
  virtual int Unknown73() = 0;
  virtual bool Unknown74() = 0;
  virtual bool Unknown75() { return false; }

protected:
  std::function<void()> callback_;
};

class UseHistoryMenuItem : public GameOverMenuItem {
public:
  UseHistoryMenuItem();

  const char* GetMid() override { return "MID_Restart_UseHistory"; }
  int ACall() override;
  void Unknown70() override;
  void Unknown71() override;
  bool Unknown72() override { return true; }
  int Unknown73() override { return 0; }
  bool Unknown74() override { return false; }
};

[[gnu::used]] UseHistoryMenuItem::UseHistoryMenuItem() = default;

class RestartMenuItem : public GameOverMenuItem {
public:
  RestartMenuItem();

  const char* GetMid() override;
  int ACall() override;
  int BCall() override;
  void Unknown70() override;
  int Unknown73() override;
  bool Unknown74() override;
};

[[gnu::used]] RestartMenuItem::RestartMenuItem() = default;

class RestartCheckpointMenuItem : public GameOverMenuItem {
public:
  RestartCheckpointMenuItem();

  const char* GetMid() override;
  int ACall() override;
  int BCall() override;
  void Unknown70() override;
  void Unknown71() override;
  int Unknown73() override;
  bool Unknown74() override;

private:
  std::string unknown_90_;
};

[[gnu::used]] RestartCheckpointMenuItem::RestartCheckpointMenuItem() = default;

class ChangeRestartPageItem : public GameOverMenuItem {
public:
  ChangeRestartPageItem();

  const char* GetMid() override { return "MID_Restart_Retry"; }
  int ACall() override;
  void Unknown70() override;
  int Unknown73() override { return 2; }
  bool Unknown74() override { return false; }
  bool Unknown75() override { return true; }
};

[[gnu::used]] ChangeRestartPageItem::ChangeRestartPageItem() = default;

class IRetireMenuItem : public GameOverMenuItem {
public:
  int ACall() override;
  void Unknown70() override;
  int Unknown73() override { return 7; }
  bool Unknown74() override { return false; }
  virtual void Unknown76() = 0;
  virtual void Unknown77() = 0;
};

class RetireRouteMenuItem : public IRetireMenuItem {
public:
  RetireRouteMenuItem();

  const char* GetMid() override { return "MID_Restart_ReturnObelisk"; }
  void Unknown76() override;
  void Unknown77() override;
};

[[gnu::used]] RetireRouteMenuItem::RetireRouteMenuItem() = default;

class RetirePart3MenuItem : public IRetireMenuItem {
public:
  RetirePart3MenuItem();

  const char* GetMid() override {
    return "MID_Restart_ReturnObelisk_Part3";
  }
  void Unknown76() override;
  void Unknown77() override;
};

[[gnu::used]] RetirePart3MenuItem::RetirePart3MenuItem() = default;

class ReturnTitleMenuItem : public GameOverMenuItem {
public:
  ReturnTitleMenuItem();

  const char* GetMid() override { return "MID_Restart_ReturnTitle"; }
  int ACall() override;
  void Unknown70() override;
  int Unknown73() override { return 8; }
  bool Unknown74() override { return false; }
};

[[gnu::used]] ReturnTitleMenuItem::ReturnTitleMenuItem() = default;

}

}
