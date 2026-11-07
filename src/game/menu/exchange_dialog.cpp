#include <string>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#include "game/menu/item_result_entry.hpp"

namespace game::menu {

class ExchangeDialog : public Dialog {
public:
  ~ExchangeDialog() override;

  const char* Unknown33() override { return "Common_DialogExchange"; }
  void Unknown135() override;
  virtual void Unknown136();

private:
  uint8_t unknown_5c8_[0x10];
  std::string unknown_5d8_;
  std::vector<ItemResultEntry> unknown_5f0_;
  std::vector<ItemResultEntry> unknown_608_;
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

#pragma GCC visibility pop
