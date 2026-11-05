#include "game/cmdbtl/cmd_btl_record.hpp"

namespace game::cmdbtl {

CmdBtlRecordManager::~CmdBtlRecordManager() = default;

[[gnu::used]] static CmdBtlRecord* CreateRecord() {
  return new CmdBtlRecord();
}

}
