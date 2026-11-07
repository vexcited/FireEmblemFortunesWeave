#include "game/data/data_files.hpp"

namespace game {

[[gnu::noinline]] AutoGrowJobFile::~AutoGrowJobFile() {
  GetInstance()->Unload();
}

[[gnu::noinline]] EntrustEquipFile::~EntrustEquipFile() {
  GetInstance()->Unload();
}

CalendarDetailFile::~CalendarDetailFile() = default;

Part2SuppliedItemFile::~Part2SuppliedItemFile() = default;

}
