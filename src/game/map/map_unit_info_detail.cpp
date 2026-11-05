#include "game/map/map_unit_info_detail.hpp"
#include "game/sound/se.hpp"

namespace game::map {

void MapUnitInfoDetail::Unknown57(std::vector<int64_t>& handles) {
  ImplUnknown12();
  BasicMenu::Unknown57(handles);
  accessor_.PlayAnimation("Bg_In", 1.0f);
}

void MapUnitInfoDetail::Unknown72() {
  sound::PlaySe("SE_SYS_UnitInfo_Close");
}

void MapUnitInfoDetail::Unknown76(int result) {
  sound::PlaySe("SE_SYS_Send_Unit");
}

void MapUnitInfoDetail::Unknown77(int result) {
  sound::PlaySe("SE_SYS_Send_Unit");
}

void MapUnitInfoDetail::Unknown82() {
  sound::PlaySe("SE_SYS_UnitInfo_Open");
}

}
