#pragma GCC visibility push(hidden)
#include <vector>

#include "game/gameui/basic_info.hpp"

namespace game::telop {

class MotivationGaugeInfo : public gameui::BasicInfo {
public:
  ~MotivationGaugeInfo() override;

  const char* GetLayoutArchive() override { return "Layout/Common.arc"; }
  const char* GetLayoutName() override { return "Common_TlpMotivation"; }
  void Unknown28() override;
  void Unknown29() override;

private:
  std::vector<int32_t> unknown_d0_;
};

MotivationGaugeInfo::~MotivationGaugeInfo() = default;

}

#pragma GCC visibility pop
