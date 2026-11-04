#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#pragma GCC visibility pop

namespace game::menu {

class ExchangeDialog : public Dialog {
public:
  ~ExchangeDialog() override;

  const char* Unknown33() override { return "Common_DialogExchange"; }
  void Unknown135() override;
  virtual void Unknown136();
};

class ChangeDialog : public ExchangeDialog {
public:
  ~ChangeDialog() override;

  const char* Unknown33() override { return "Common_DialogChange"; }
  void Unknown135() override;
};

class LegionDialog : public ExchangeDialog {
public:
  ~LegionDialog() override;

  const char* Unknown33() override { return "Common_DialogComeback"; }
  const char* Unknown34() override { return "Layout/Gmap.arc"; }
  void Unknown135() override;
};

class ExchangeNumDialog : public ExchangeDialog {
public:
  ~ExchangeNumDialog() override;

  const char* Unknown33() override { return "Common_DialogExchangeNum"; }
  int Unknown55() override { return 1; }
  void Unknown85() override;
  void Unknown135() override;
};

ExchangeDialog::~ExchangeDialog() = default;
ChangeDialog::~ChangeDialog() = default;
LegionDialog::~LegionDialog() = default;
ExchangeNumDialog::~ExchangeNumDialog() = default;

}
